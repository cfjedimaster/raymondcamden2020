
<div class="comment" id="c_1713725018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725018">1</a> by Bill Tudor
		posted on 7/9/2010 at 7:52 PM
		</div>
		<div class="comment_text"><p>I give up: How do I 'blog' you re: the 'Another simple jQuery/Coldfusion example'. I get Twitter, I get eMail, I get the fact that I am posting you an eMail now. I have subscribed to your 'blog' of CF examples (twice now). But how do I simply post a quick 'blog' comment to you? Sorry, but I am feeling cfConfused again...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725029">2</a> by Raymond Camden
		posted on 7/9/2010 at 7:53 PM
		</div>
		<div class="comment_text"><p>How do you add a comment? Um... you just did. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725035">3</a> by Bill Tudor
		posted on 7/9/2010 at 8:02 PM
		</div>
		<div class="comment_text"><p>I think I get it now: Adding a Comment here IS blogging. My question was simply any tips on how to understand the getJSON() call and what the e.PreventDefault() was doing in the Jquery code. Apart from that I do more-or-less understnad your excellent example. Also, what makes the screen in my browser 'split' so that the links appear above the line and the 'detail text' response below it. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725032">4</a> by Raymond Camden
		posted on 7/9/2010 at 8:18 PM
		</div>
		<div class="comment_text"><p>getJSON basically means:<br>"I want you to fetch this URL and assume the result is JSON."</p><p>That means you don't have to eval the JSON to turn it into JS data. So basically, if the URL returns JSON, you end up with native JS data to work with. Hence me looping over it like a normal array.</p><p>Finally - e.preventDefault means: "I know I'm in an event handler. But abort the event. Don't do anything else." Normally if you click a link that has no URL, the page will reload. This stops that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725028">5</a> by Dave
		posted on 7/9/2010 at 9:59 PM
		</div>
		<div class="comment_text"><p>Does this mean that cfproxy is not needed and one can use straight jquery? I have been using a lot of jQuery lately with cfproxy. Am I adding unnecessary overhaed by using cfproxy?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725024">6</a> by Raymond Camden
		posted on 7/9/2010 at 10:48 PM
		</div>
		<div class="comment_text"><p>If by "cfproxy" you mean cfajaxproxy, then yes, you do not need it. Well - I shouldn't say you don't need it. I'd say you probably do not need it if you are using jQuery instead. There may be cases where you can/want to use both.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725034">7</a> by Brian
		posted on 7/9/2010 at 11:19 PM
		</div>
		<div class="comment_text"><p>Ignore comment on your previous post...meant to apply here...</p><p>Took me a bit (new to JQuery), but I was getting an error: "res.DATA.ID is undefined". Finally realized that I was dealing with case sensitivity -- your QueryNew used lcase id and name. Is this common for any data retrieved? Will it always be case sensitive?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725022">8</a> by Raymond Camden
		posted on 7/9/2010 at 11:20 PM
		</div>
		<div class="comment_text"><p>Too late - but I'll cut and paste. ;)</p><p>JS is always case sensitive. Will it always be upper case? No. When you make a struct in CF using this notation: <a href="http://disq.us/url?url=http%3A%2F%2Fperson.name%3AxDt6wFB0aLf2CAY16xkj2xuRbNA&amp;cuid=3321886" rel="nofollow noopener" title="person.name">person.name</a> = "RAY", then when it gets serialized to json, it becomes upper cased. If you do: person["naMe"] = "RAY", then the case of that key is preserved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725031">9</a> by Brian
		posted on 7/9/2010 at 11:27 PM
		</div>
		<div class="comment_text"><p>Thought I understood, but am now confused.  You said</p><p>"When you make a struct in CF using this notation: <a href="http://disq.us/url?url=http%3A%2F%2Fperson.name%3AxDt6wFB0aLf2CAY16xkj2xuRbNA&amp;cuid=3321886" rel="nofollow noopener" title="person.name">person.name</a> = "RAY", then when it gets serialized to json, it becomes upper cased"</p><p>Which is not what I observed... In the data.cfc, you did:</p><p>queryNew("id,name")</p><p>and yet, when the data was retrieved, I observed (in Firebug) that the case of the query keys was retained and not uCased...</p><p>Running CF 8 (make a difference?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725021">10</a> by Brian
		posted on 7/9/2010 at 11:31 PM
		</div>
		<div class="comment_text"><p>Just wanted to PS the response I saw:</p><p>{"ROWCOUNT":5,"COLUMNS":["ID","NAME"],"DATA":{"id":[1.0,2.0,3.0,4.0,5.0],"name":["Name 1","Name 2","Name 3","Name 4","Name 5"]}}</p><p>note the mixed case JSON return...weird.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725036">11</a> by johans
		posted on 7/10/2010 at 12:00 AM
		</div>
		<div class="comment_text"><p>Instead of live() you could just use jquery delegate() and capture the link events on the nav container<br>$('#nav').delegate('a.navlink','click',function(){ ... });</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725026">12</a> by Raymond Camden
		posted on 7/10/2010 at 12:07 AM
		</div>
		<div class="comment_text"><p>@Brian: Sorry - the CFML struct thing is the easiest way to explain the case n JSON. For QueryNew, you basically have no choice. In my Firebug (well, Chrome dev tools), its all upper case. Maybe a CF version diff.</p><p>@johans: Never used it - will need to read up on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725025">13</a> by Brian
		posted on 7/10/2010 at 12:22 AM
		</div>
		<div class="comment_text"><p>Searched a little and found this ... definitely seems to be version specific gotcha.  Ouch.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.aliaspooryorik.com%2Fblog%2Findex.cfm%2Fe%2Fposts.details%2Fpost%2F252%3A4O-Og55s6y0NIpsBGSyClkf1mr8&amp;cuid=3321886" rel="nofollow noopener" title="www.aliaspooryorik.com/blog/index.cfm/e/posts.details/post/252">www.aliaspooryorik.com/blog...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725033">14</a> by trip
		posted on 3/29/2011 at 5:53 PM
		</div>
		<div class="comment_text"><p>ok, I'm totally missing something with the getJSON call. (Ithink) I've tried a few different examples and all of them end in the same way - blank white page. I've downloaded the zip of this example and am trying to run as is.</p><p>It just never appears to actually make the getJSON call, so no data, so no display. Is there something that I need to set in the CF admin? Is there a way to test of the call is actually being made?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725014">15</a> by Raymond Camden
		posted on 3/29/2011 at 5:56 PM
		</div>
		<div class="comment_text"><p>What does Firebug show you? Or Chrome dev tools?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725037">16</a> by trip
		posted on 3/29/2011 at 6:02 PM
		</div>
		<div class="comment_text"><p>as soon as I hit post I knew that would be asked. The dom tab shows so much . . . what exactly am I looking for?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725039">17</a> by Raymond Camden
		posted on 3/29/2011 at 6:03 PM
		</div>
		<div class="comment_text"><p>Look at the Net panel. Does it show the request being made?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725038">18</a> by trip
		posted on 3/29/2011 at 6:12 PM
		</div>
		<div class="comment_text"><p>ss at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.vcnadvertising.com%2Ffirebug.png%3AIyX2ZoMhyInbkGIoEvZKQA8eKeM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.vcnadvertising.com/firebug.png">http://www.vcnadvertising.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725040">19</a> by trip
		posted on 3/29/2011 at 6:18 PM
		</div>
		<div class="comment_text"><p>please correct me if i'm wrong, but from that the call is being made</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725042">20</a> by Raymond Camden
		posted on 3/29/2011 at 6:18 PM
		</div>
		<div class="comment_text"><p>Ok, so we clearly see it making the request. Click on that line and look at the result. What do you see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725043">21</a> by trip
		posted on 3/29/2011 at 6:57 PM
		</div>
		<div class="comment_text"><p>{"ROWCOUNT":5,"COLUMNS":["ID","NAME"],"DATA":{"ID":[1.0,2.0,3.0,4.0,5.0],"NAME":["Name 1","Name 2","Name 3","Name 4","Name 5"]}} . . . hmmm, that is correct. I just had an issue and had to restart my computer. Started everything back up and now it works. When creating a class with remote methods, does the cf server need to be restarted or at least "told" you are now serving remote? I remember when creating a webservice I had "refresh" the webservice in cf admin. Is it kinda the same thing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725047">22</a> by Raymond Camden
		posted on 3/29/2011 at 7:02 PM
		</div>
		<div class="comment_text"><p>No, but go into your CF Admin. Is trusted cache turned on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725046">23</a> by trip
		posted on 3/29/2011 at 7:12 PM
		</div>
		<div class="comment_text"><p>Trusted cache - no<br>Cache Template In Request - yes<br>Component cache - yes<br>Save class files - yes</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725044">24</a> by Raymond Camden
		posted on 3/29/2011 at 7:20 PM
		</div>
		<div class="comment_text"><p>I think it was the component cache for you. In development, you don't want any of those 4 things turned on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725045">25</a> by trip
		posted on 3/29/2011 at 7:31 PM
		</div>
		<div class="comment_text"><p>duuuuuuuuuuude!! Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725048">26</a> by Paul
		posted on 4/5/2011 at 8:11 PM
		</div>
		<div class="comment_text"><p>Ray:</p><p>Thanks for the nice simple example. I found that turning on most of the custom debugging output in CF Admin will break the output and result in a blank screen as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725049">27</a> by Raymond Camden
		posted on 4/5/2011 at 8:13 PM
		</div>
		<div class="comment_text"><p>Your friend for this is:</p><p>&lt;cfsetting showdebugoutput="false"&gt;</p><p>You can put it in your pages that respond to Ajax requests.</p></div>
	</div>
</div>
		