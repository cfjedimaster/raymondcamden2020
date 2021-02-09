
<div class="comment" id="c_1713715381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715381">1</a> by Kevin M
		posted on 5/12/2009 at 7:15 AM
		</div>
		<div class="comment_text"><p>Can't add anything constructive as to why, but thanks for the post.</p><p>I'm using cfajaxproxy more lately especially with Coldbox. I could see this causing a lot of wasted time. Hopefully someone will have a solution or explanation</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715382">2</a> by Raymond Camden
		posted on 5/12/2009 at 7:17 AM
		</div>
		<div class="comment_text"><p>Well if the base CFC is under web root, you an always make another cfajaxproxy (you can have as many as you want on a page). And obviously, cfajaxproxy makes it easier to call CFC methods, but it is NOT the only way to call methods. As you can see, I had no problems calling the mehtod when I did it manually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715385">3</a> by Kevin M
		posted on 5/12/2009 at 7:26 AM
		</div>
		<div class="comment_text"><p>Yeah that is true. And granted Coldbox's proxy methods make it very easy to make it one call. but from a pure cfajaxproxy perspective who wants to have a bunch of individual objects or other gobbledy-gook. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715387">4</a> by Azadi Saryev
		posted on 5/12/2009 at 9:31 AM
		</div>
		<div class="comment_text"><p>Thanks for blogging this, Ray!</p><p>The only other way i could come up with to work around this, is to define in test.cfc same function signatures as remote functions in base.cfc, and then call and rerurn SUPER.functionname(arguments)...</p><p>not perfect (still more code in test.cfc than there really should be when it extends base.cfc), but at least saves the need to re-define whole functions (just the arguments, if any, need to be defined), and your javascript functions can use one js proxy instead of several...</p><p>so, if you add:</p><p>&lt;cffunction name="basemethod" access="remote" returnType="string" output="false"&gt;<br>   &lt;cfreturn SUPER.basemethod() /&gt;<br>&lt;/cffunction&gt;</p><p>to TEST.CFC, the doBase() javascript function will return expected output.</p><p>if basemethod() of BASE.CFC required any arguments [say, NAME (string)], they would have to be defined in basemethod() function signature in TEST.CFC, and passed in the call to SUPER.basemethod():</p><p>&lt;cffunction name="basemethod" access="remote" returnType="string" output="false"&gt;<br>  &lt;cfargument name="name" required="yes" type="string"&gt;<br>  &lt;cfreturn SUPER.basemethod(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.name%3AQqOM0eK7v9LDCdUJ173Sj4NsEtM&amp;cuid=3321886" rel="nofollow noopener" title="arguments.name">arguments.name</a>) /&gt;<br>&lt;/cffunction&gt;</p><p>Azadi</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715389">5</a> by marc
		posted on 5/12/2009 at 1:50 PM
		</div>
		<div class="comment_text"><p>ray, if you think this violates NDA, please remove this. But anyways: I posted this bug a while back to adobe, and I believe it will be fixed in cf9.</p><p>another fun bug I hit with cfajaxproxy completely by accident: have a CFC named "Parent" and one named "Child", and try to use them in your code with jsclassname="parent" and jsclassname="child". you get js errors. it's one of those "this would never happen in real life" kinds of things that you only hit when creating examples to prove other bugs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715391">6</a> by anthony
		posted on 5/12/2009 at 7:07 PM
		</div>
		<div class="comment_text"><p>Marc,</p><p>That's pretty crazy.  Haven't tried, but couldn't you possible create JS error just by giving your CFCs names of reserved JS words?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715386">7</a> by Raymond Camden
		posted on 5/12/2009 at 7:24 PM
		</div>
		<div class="comment_text"><p>FYI, I've confirmed Adobe knows this bug, AND it's fixed in CF9. Woot</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715388">8</a> by David McGuigan
		posted on 5/15/2009 at 12:22 AM
		</div>
		<div class="comment_text"><p>Just a random, pointless note: If you grabbed a copy of jCFC when it was public, it already handles this, even with multi-tiered inheritance.</p><p>The end.</p></div>
	</div>
</div>
		