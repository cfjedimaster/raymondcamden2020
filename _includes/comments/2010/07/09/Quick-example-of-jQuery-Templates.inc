
<div class="comment" id="c_1713725065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725065">1</a> by Brian
		posted on 7/9/2010 at 11:17 PM
		</div>
		<div class="comment_text"><p>Took me a bit (new to JQuery), but I was getting an error:  "res.DATA.ID is undefined".  Finally realized that I was dealing with case sensitivity -- your QueryNew used lcase id and name.  Is this common for any data retrieved?  Will it always be case sensitive?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725050">2</a> by Raymond Camden
		posted on 7/9/2010 at 11:20 PM
		</div>
		<div class="comment_text"><p>JS is always case sensitive. Will it always be upper case? No. When you make a struct in CF using this notation:  <a href="http://disq.us/url?url=http%3A%2F%2Fperson.name%3AxDt6wFB0aLf2CAY16xkj2xuRbNA&amp;cuid=3321886" rel="nofollow noopener" title="person.name">person.name</a> = "RAY", then when it gets serialized to json, it becomes upper cased. If you do: person["naMe"] = "RAY", then the case of that key is preserved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725066">3</a> by salvatore fusto
		posted on 7/10/2010 at 11:22 AM
		</div>
		<div class="comment_text"><p>Hy Ray,<br>i noted that you converted the result from the cfc in an array of hashes/structs, why not obtain a json array of hashes directly?<br>regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725064">4</a> by Raymond Camden
		posted on 7/10/2010 at 5:51 PM
		</div>
		<div class="comment_text"><p>Are you asking why I didn't return the data in a way that would work automatically? I certainly could have. However I try to keep my CFCs pure. Right not it returns a query. I may have other CFMs files that need this data and they would work with the query just fine. Just because one client (my code here) needs it in another way, it doesn't mean I should change the CFC.</p><p>That's my opinion anyway. Certainly if you are 100% sure the only "user" of this data is the Ajax front end, then yeah, go ahead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725063">5</a> by Jim O&amp;aposKeefe
		posted on 7/10/2010 at 10:08 PM
		</div>
		<div class="comment_text"><p>Ray, I'm lost at the "Why are we doing this?" level. It seems like dropping data into templates is what coldfusion does best, and yet your pushing that off onto the client and jQuery. Coldfusion becomes a facade for the database. Maybe the simplicity of the demo page obscures the helpfulness of this approach. Am I making any sense that you can comment on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725068">6</a> by Raymond Camden
		posted on 7/11/2010 at 2:30 AM
		</div>
		<div class="comment_text"><p>There are a few reasons why I prefer this way. If you look at the first example, to render the content I had to build JS strings. While doable, it gets messy. There are a lot of plus signs, I have to escape the quotes or use single quotes. The template method is much easier to read and update.</p><p>As to your point about why I didn't use CF - or why I just use CF as a gateway to the db. I don't see anything wrong with that. CF is a great 'glue' between servers and front end clients. Just because it didn't do a lot here doesn't mean it wasn't useful. It also speaks to the power of the Ajax plumbing built within CF - specifically - I write my business logic with NO client in mind. But to expose it to an Ajax client I just make use of returnForm. And I'm done. To me that just shows CF shines.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725069">7</a> by salvatore fusto
		posted on 7/12/2010 at 5:14 PM
		</div>
		<div class="comment_text"><p>Yes, you are absolutely right saying that the main goal is abstraction; however you can also structure your cfc to return data formatted as requested from front end: using a simple key in the url you can get data as query, object collection, pure json-ed query or json array of struct.<br>regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725067">8</a> by Raymond Camden
		posted on 7/12/2010 at 5:19 PM
		</div>
		<div class="comment_text"><p>Your talking about the structure of the data. You aren't talking about formatting in the display sense. That's what this template engine is for. Ie, take the data, wrap the name in h2, etc. I think it's a secondary discussion.</p><p>So if we ignore _html_ display, let's focus on your idea of making the CFC return different forms of data. IMO, this is a bad idea. The CFC is "right". It is asked to return a query of data and it does. Ajax can use it. CF can use it. It just works. In our example here we have a jQuery plugin which is a bit anal about the form of data. Therefore, I manipulate it before feeding it to the plugin. Could the CFC have done that. Sure! But why clutter it up when it isn't a CFC concern?</p><p>Now that being said, there have been cases where I've built other CFCs to do stuff like this. A good example is a service to handle calls for jqGrid. jqGrid also has specific needs for the form of the data. So sometimes I've built a CFC that both a) exposes another CFC remotely and b) handles changing the data. But I do NOT mess with the core CFC. It's business logic remains pure and is not concerned with any one client.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725070">9</a> by cjm
		posted on 7/16/2010 at 7:36 PM
		</div>
		<div class="comment_text"><p>Great post Ray!  Unfortunately I found this a single day late after I just did some extensive javascript outputting the now "long" way.  Looks like I have some re-work to do! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725071">10</a> by Shekhar
		posted on 9/10/2010 at 12:56 PM
		</div>
		<div class="comment_text"><p>Will try this definitely..quite good.</p></div>
	</div>
</div>
		