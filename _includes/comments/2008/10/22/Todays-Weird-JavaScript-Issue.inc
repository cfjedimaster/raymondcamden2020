
<div class="comment" id="c_1713709239">
	<div>
		<img src="https://disqus.com/api/users/avatars/jdowdle.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709239">1</a> by Jon Dowdle
		posted on 10/22/2008 at 6:22 PM
		</div>
		<div class="comment_text"><p>While I couldn't find anything specific to this, have you tried escape() and unescape()? <br>If you don't go the event handler approach that should solve your problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709261">2</a> by Ernst van der Linden
		posted on 10/22/2008 at 6:23 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>If you replace console.log(s) by alert(s), you'll see the difference. <br>I agree, it's weird.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709241">3</a> by Raymond Camden
		posted on 10/22/2008 at 6:31 PM
		</div>
		<div class="comment_text"><p>I'm not seeing a difference. But I made a mistake in my blog entry (going to correct it after this comment).</p><p>The console.log DOES show frank and beans, but WITHOUT the escape. Brain fart on my part. Still wrong for sure.</p><p>Anyway, the alert shows the same as the console msg for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709249">4</a> by Raymond Camden
		posted on 10/22/2008 at 6:34 PM
		</div>
		<div class="comment_text"><p>Guys, I've edited the blog entry a bit. Hopefully it clears up the confusion (although I'm still confused by the behavior in general!)</p><p>@JD - For CFB, I just used replace and switched spaces to +. I didn't notice the 'nicer' event handler fix till later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709253">5</a> by Tim Garver
		posted on 10/22/2008 at 6:52 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Have you tried to see if setting the encoded var into a js var makes a difference before adding it to the href?</p><p>&lt;cfset s = "frank and beans"&gt;<br>&lt;cfset u = "test3.cfm?x=1&amp;foo=#urlEncodedFormat(s)#"&gt;<br>&lt;cfoutput&gt;<br>&lt;script&gt;<br>function testit(s) { alert(s); }<br>var s = '#s#';<br>var u = '#u#';<br>&lt;/script&gt;</p><p>&lt;a href="javaScript:testit(u)"&gt;Test1&lt;/a&gt;&lt;br /&gt;<br>&lt;a href="" onClick="testit(u);return false"&gt;Test2&lt;/a&gt;&lt;br /&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709254">6</a> by Mat Evans
		posted on 10/22/2008 at 7:33 PM
		</div>
		<div class="comment_text"><p>Tim's method works perfectly, also using encodeURI() produces the proper result.</p><p>I haven't found any mention of a problem such as this before, the only thing I can think of is that the string is getting parsed improperly when it's first initialised in the JS engine, although it's strange that putting it into a javascript variable works.</p><p>Seems to show the same behaviour in different browsers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709251">7</a> by Tim Garver
		posted on 10/22/2008 at 7:40 PM
		</div>
		<div class="comment_text"><p>Just a thought,</p><p>Its probably the browsers HTML engine since the string is being added to the href property. that would make since because its being evaluated before its passed to the JS engine.</p><p>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709260">8</a> by Mat Evans
		posted on 10/22/2008 at 7:51 PM
		</div>
		<div class="comment_text"><p>yeah possibly.. although it seems to do fine in the page source..</p><p>Not sure what else we can do to get to the bottom of it really.. it's strange it's not documented anywhere?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709264">9</a> by Nathan Mische
		posted on 10/22/2008 at 7:53 PM
		</div>
		<div class="comment_text"><p>I think Tim is probabaly right. Href is a DOM attribute, defined as a string, while click is a DOM event, defined as function reference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709263">10</a> by Jason Fisher
		posted on 10/23/2008 at 12:20 AM
		</div>
		<div class="comment_text"><p>Definitely have seen this and related issues before that seemed to only show up when using href="javascript:foo();", but I've made a habit of using href="javascript:void(null);" onclick="foo();" for so long now that I don't recall whether I ever knew *why* things would error using the first way.  I'm guessing Nathan has it right: the events like onclick can even string several functions all together, with spaces between, in, and around, as necessary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709265">11</a> by brendan
		posted on 10/23/2008 at 5:04 PM
		</div>
		<div class="comment_text"><p>If you load up the page and put this is the browser address box it acts like the href link</p><p>javaScript:testit('-%20-')</p><p>Its automatically unencoding the url for use.</p></div>
	</div>
</div>
		