
<div class="comment" id="c_1713651934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651934">1</a> by Tony Petruzzi
		posted on 4/19/2006 at 12:05 AM
		</div>
		<div class="comment_text"><p>200K rows.... yeah, let me know how that works out for you.</p><p>You should be doing this inside a stored procedure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651944">2</a> by Raymond Camden
		posted on 4/19/2006 at 12:08 AM
		</div>
		<div class="comment_text"><p>Heh, ok, so that's true. But the CFML solution is probably more of interest to folks. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651942">3</a> by Dan Sorensen
		posted on 4/19/2006 at 12:37 AM
		</div>
		<div class="comment_text"><p>LOL, I think some of our tech support calls would be a little more upbeat if our common desktop apps returned "pirate-mode" error messages. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651943">4</a> by Teddy Payne
		posted on 4/19/2006 at 12:59 AM
		</div>
		<div class="comment_text"><p>To store 200K records with data pairs that relate to an entity just sounds like data trouble.  It sounds like value pairs that need to be normalized into another table.  The normalization would allow you to do summations and roll ups on the occurence and count of pairs for a given record pair.</p><p>Cool ColdFusion solution, but the the solution needs to be addressed at the data schema and not the application.</p><p>I am not condemning the developer's question to the "Jedi" as I am sure he has to handle what he has been given.  If he/she has the power to change the data schema, he/she might want to remove that data storage process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651945">5</a> by Raymond Camden
		posted on 4/19/2006 at 1:03 AM
		</div>
		<div class="comment_text"><p>Trust me - the first thing I asked him was if he could change the db, and he was stuck. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651946">6</a> by Teddy Payne
		posted on 4/19/2006 at 1:06 AM
		</div>
		<div class="comment_text"><p>That sounds about right.</p><p>Argggh! Avast ye!  Give the schema a volley! *BOOM* *BOOM* *BOOM*</p><p>Well, aren't we glad we have the "Swiss Army" programming language that can handle all of the issues that are thrown at us?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651948">7</a> by Stephen Cassady
		posted on 4/19/2006 at 1:24 AM
		</div>
		<div class="comment_text"><p>I, with every atom of my being, encourage you to use MORE priate syntax, at every opportunity that allows.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651947">8</a> by Steve Walker
		posted on 4/19/2006 at 3:38 AM
		</div>
		<div class="comment_text"><p>So I am the guy that asked the question.  I wanted to thank Ray for his help and trust me, if I had a way to normalize the data I would.  Hopefully, the solution is coming, but in the mean time...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651949">9</a> by Al Davidson
		posted on 4/19/2006 at 3:34 PM
		</div>
		<div class="comment_text"><p>YARRR! More pirate syntax!</p><p>I'm sure I'm not the only guy to have written wrapper functions around CF tags that don't have a CFScript equivalent, to allow them to be called from CF Script, like so:</p><p>&lt;cffunction name="avast" output="true" returntype="void"&gt;<br>  &lt;cfargument name="msg" type="string" required="false" default="" /&gt;</p><p>  &lt;cfoutput&gt;<br>    &lt;h3&gt;AVAST!&lt;/h3&gt;<br>    &lt;h4&gt;Here be dragons, Jim-lad :&lt;/h4&gt;<br>    &lt;div class="error"&gt;#msg#&lt;/div&gt;<br>  &lt;/cfoutput&gt;<br>  &lt;cfabort /&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfscript&gt;<br>  // do some stuff in cfscript<br>  if( NOT bOK ){<br>    avast( myErrorMessage );<br>  }<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651950">10</a> by Chris
		posted on 4/19/2006 at 5:58 PM
		</div>
		<div class="comment_text"><p>If this was TSQL he is using and the column was delimited then he could use this function.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.tek-tips.com%2Ffaqs.cfm%3Ffid%3D5207%3AfLytuDGytXVFmFltZq3qPH3Hq1c&amp;cuid=3321886" rel="nofollow noopener" title="http://www.tek-tips.com/faqs.cfm?fid=5207">http://www.tek-tips.com/faq...</a></p><p>I will sometimes submit a list to the database as a varchar(8000) and then seperate it with this function.</p><p>About the pirate syntax, I have always thought that Tom Waits should write error codes, "You are making shoes for childrens feet, please try again"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651951">11</a> by Raymond Camden
		posted on 4/19/2006 at 6:07 PM
		</div>
		<div class="comment_text"><p>That's a dang nice error. Maybe the Friday puzzler should be a contest to see who can come up with the best error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651952">12</a> by Al Davidson
		posted on 4/19/2006 at 6:42 PM
		</div>
		<div class="comment_text"><p>Well, whenever I'm doing a prototype with nightly client-visible builds, I use a Grolsch-ad reference as a catch-all error page:</p><p>&lt;img src="<a href="http://disq.us/url?url=http%3A%2F%2Fstatic.flickr.com%2F54%2F131361608_11406a27c7.jpg%3Fv%3D0%3Ajhpg8Xtc8nABzI8Rm3V0R9p5Dzs&amp;cuid=3321886" rel="nofollow noopener" title="http://static.flickr.com/54/131361608_11406a27c7.jpg?v=0">http://static.flickr.com/54...</a>" width="150" height="175" style="float:left; margin-right:5px;" /&gt;<br>	&lt;div&gt;<br>		&lt;h2&gt;Schtop!&lt;/h2&gt;<br>		&lt;h4&gt;This page is not ready yet!&lt;/h4&gt;<br>		In the meantime, you might like to &lt;a href="javascript:history.go(-1);"&gt;GO BACK&lt;/a&gt; and click on a different link.<br>	&lt;/div&gt;</p><p>Maybe that's a European thing, I don't know if you get those ads over that side of the pond...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651953">13</a> by Michael Dawson
		posted on 4/20/2006 at 1:44 AM
		</div>
		<div class="comment_text"><p>If it were up to me, I would substring the field within the SELECT statment of my query.  That would be much faster than using CF to loop over the results.</p><p>I would also use a combination of checking for no values and then return an empty string or null value.</p></div>
	</div>
</div>
		