
<div class="comment" id="c_1713738935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738935">1</a> by Phillip Senn
		posted on 2/3/2012 at 9:01 PM
		</div>
		<div class="comment_text"><p>Ah, this is nice.  And if the user has JavaScript turned off, the css method will continue to work.<br><a href="http://disq.us/url?url=http%3A%2F%2Fcaniuse.com%2F%3AjonjmPJaHIkfTIv-KDTOrJr4iH4&amp;cuid=3321886" rel="nofollow noopener" title="http://caniuse.com/">http://caniuse.com/</a> is always mentioned when it comes to css3 techniques.<br>Oh, BTW, sorry about "going off" in your previous blog post.  I've been giving it some thought over the past few days.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738937">2</a> by Raymond Camden
		posted on 2/3/2012 at 9:14 PM
		</div>
		<div class="comment_text"><p>Don't apologize. I love it when topics mutate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738936">3</a> by Arthur Nweke
		posted on 2/3/2012 at 9:35 PM
		</div>
		<div class="comment_text"><p>Ray,<br>you posted this "&lt;cfajaxproxy bind="cfc:test.checkArtist({artist@keyup})" onSuccess="handleConflict"&gt;<br>&lt;script&gt;<br>function handleConflict(r){<br>   if (r == true) {<br>      document.getElementById("warning").innerHTML="This artist exists.";<br>      document.getElementById("submitBtn").setAttribute("disabled", "disabled");<br>   }<br>   else {<br>      document.getElementById("warning").innerHTML="";<br>      document.getElementById("submitBtn").removeAttribute("disabled");	<br>   }<br>}<br>&lt;/script&gt;</p><p>&lt;cfform name="mainForm"&gt;<br>    New Artist: &lt;cfinput name="artist"&gt;&lt;br/&gt;<br>    &lt;div id="warning"&gt;&lt;/div&gt;<br>    &lt;input type="submit" id="submitBtn" value="Save"&gt;<br>&lt;/cfform&gt;</p><p> remote function checkArtist(string n) {<br>     var q = new com.adobe.coldfusion.query();<br>     q.setDatasource("cfartgallery");<br>     q.setSQL("select lastname from artists where upper(lastname) = :name");<br>     q.addParam(name="name",value="#ucase(arguments.n)#",cfsqltype="cf_sql_varchar");<br>     var res = q.execute().getResult();<br>     return res.recordCount==1;<br>}<br>" is it posible to call the remote function with javascript so that you have the user stay in the field until they enter something that is not found in the database?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738938">4</a> by Kevin Hoyt
		posted on 2/3/2012 at 9:40 PM
		</div>
		<div class="comment_text"><p>I'm so spoiled.  Thanks, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738939">5</a> by Seb Duggan
		posted on 2/3/2012 at 9:42 PM
		</div>
		<div class="comment_text"><p>Ray - to save yourself some typing, you only actually need to apply the transitions to .tagcloudword (not to the :hover state). This then controls the transitions for all states of that class...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738940">6</a> by Raymond Camden
		posted on 2/3/2012 at 10:11 PM
		</div>
		<div class="comment_text"><p>Arthur - your comment doesn't make sense. Can you please email me directly.</p><p>Seb - mind sharing an example of that? (Use pastebin of course, or post it on your server.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738941">7</a> by Sam Farmer
		posted on 2/3/2012 at 11:14 PM
		</div>
		<div class="comment_text"><p>"This means you have to duplicate your code, which is kinda sucky, but passable."</p><p>This is one of the advantages of using less css. It wouldn't make a great difference in your code example but for the transition code you code write a mixin and call it twice. The mixin would then output the css with all the different browser prefixes.</p><p>It would look something like:</p><p>.transition() {<br>-webkit-transition: opacity,color;<br>-webkit-transition-timing-function: ease-out;<br>-webkit-transition-duration: 2000ms;<br>-moz-transition: opacity,color;<br>-moz-transition-timing-function: ease-out;<br>-moz-transition-duration: 2000ms;<br>}</p><p>(And it could also take in arguments if needed).</p><p>The class definitions would look like:</p><p>.tagcloudword {<br>opacity: 0.1;<br>color: black;<br>.transition();<br>}</p><p>.tagcloudword:hover {<br>opacity: 1;<br>color: red;<br>.transition();<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738942">8</a> by Raymond Camden
		posted on 2/4/2012 at 12:18 AM
		</div>
		<div class="comment_text"><p>I haven't really added Less to my developer stack, but I'm very impressed by it. I'm not a fan of CoffeeScript since JS seems simple/powerful enough, but CSS _definitely_ needs this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738945">9</a> by Richard
		posted on 2/4/2012 at 1:10 AM
		</div>
		<div class="comment_text"><p>Or just:</p><p>[code]<br>.tagcloudword {<br>        opacity: 0.1;<br>	-webkit-transition: all 2s ease-out;<br>	-moz-transition: all 2s ease-out;<br>    }</p><p>    .tagcloudword:hover {<br>        opacity: 1;<br>	-webkit-transition: all 2s ease-out;<br>	-moz-transition: all 2s ease-out;<br>    }<br>[/code]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738947">10</a> by Raymond Camden
		posted on 2/4/2012 at 1:14 AM
		</div>
		<div class="comment_text"><p>What is "all" a shorthand for? Does it mean "All the crap I defined in this style block" ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738948">11</a> by blackjk
		posted on 2/4/2012 at 1:49 AM
		</div>
		<div class="comment_text"><p>All means all properties specified in the rule should be transitioned. Your example for just opacity could be shortened to below.</p><p>.tagcloudword { opacity:0.5; <br>-webkit-transition: opacity 2s ease-out;<br>-moz-transition: opacity 2s ease-out;<br>transition: opacity 2s ease-out;<br>}<br>.tagcloudword:hover { opacity:1.0; }</p><p>What seb is eluding to above is the fact that you don't need to define the transition styles again on the hover pseudo selector.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738949">12</a> by Raymond Camden
		posted on 2/4/2012 at 2:28 AM
		</div>
		<div class="comment_text"><p>Nope, I'm not seeing that. When I do this:</p><p>	.tagcloudword {<br>        opacity: 0.1;<br>        color: black;<br>        -webkit-transition: opacity,color 2s ease-out;<br>        -moz-transition: opacity,color 2s ease-out;<br>    }</p><p>    .tagcloudword:hover {<br>        opacity: 1;<br>        color: red;<br>    }</p><p>It correctly works _to_ the hover state, but when I mouse out, it instantly returns.</p><p>(So to be clear, I agree with you about the shorthand, and thank you, but don't agree, from what I see, that you can skip defining stuff on both 'sides')</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738950">13</a> by Raymond Camden
		posted on 2/4/2012 at 2:30 AM
		</div>
		<div class="comment_text"><p>Actually, something funky is going on. Check it here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Ffeb%2F3%2Ftest5.html%3A33sJ3fH0ghP4b9AzC-dRaaqusEw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/feb/3/test5.html">http://www.raymondcamden.co...</a></p><p>It seems to change the opacity immediately. Only color goes over time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738951">14</a> by Raymond Camden
		posted on 2/4/2012 at 2:31 AM
		</div>
		<div class="comment_text"><p>Ah, ok, this is where you use "all" instead of listing each item.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Ffeb%2F3%2Ftest6.html%3ACRcIT5WmX7VRota3EoO9oRVqawE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/feb/3/test6.html">http://www.raymondcamden.co...</a></p><p>Works perfectly here, and a lot less typing.</p><p>Thanks Richard/Seb/Blackjk/all.</p></div>
	</div>
</div>
		