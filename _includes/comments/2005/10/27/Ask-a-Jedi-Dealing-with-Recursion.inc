
<div class="comment" id="c_1713622170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622170">1</a> by Brian
		posted on 10/28/2005 at 2:19 AM
		</div>
		<div class="comment_text"><p>Obvious to you and I, but recursion caused a number of people to drop out of Computer Science in college.  It seems to be a tough thing to get your head around.  Where I go crazy is forking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622175">2</a> by Douglas Knudsen
		posted on 10/28/2005 at 4:38 PM
		</div>
		<div class="comment_text"><p>ha!  yeah, recursion is a hard beast to tame.  I once saw a proof in grad school proving that everything can be expressed as a recursive function.  So, for instance, println("hello world"); can actually be expressed recursively...not worht the work to do so though, eh?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622173">3</a> by Mujeebur Rahmansaher
		posted on 10/28/2005 at 11:27 PM
		</div>
		<div class="comment_text"><p>Recursion is like SHUSHI .. LOL... Good to know !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622176">4</a> by Jeroen
		posted on 11/3/2005 at 5:39 PM
		</div>
		<div class="comment_text"><p>cffunction doesn't handle recursion for complex datatypes. UDF's do. Check the following code, with two test functions one defined as UDF, one as cffunction.</p><p>&lt;cfscript&gt;<br>function test(depth)<br>{<br>var i=ArrayNew(1);<br>i[1]=depth;<br>writeoutput("going deeper " &amp; i[1] &amp; " " &amp; depth&amp;"&lt;br&gt;");<br>if (depth lt 3)<br>	test(depth+1);<br>writeoutput("i'm back " &amp; i[1] &amp; "&lt;br&gt;");<br>}<br>&lt;/cfscript&gt;</p><p>&lt;cffunction name="test2" output="Yes" returntype="any"&gt;<br>	&lt;cfargument name="depth" type="numeric" required="Yes"&gt;</p><p>	&lt;cfset i=ArrayNew(1)&gt;<br>	&lt;cfset i[1]=depth&gt;<br>	&lt;cfoutput&gt;<br>	going deeper #i[1]# #depth#&lt;br&gt;<br>	&lt;cfif depth lt 3&gt;<br>		&lt;cfset test2(depth+1)&gt;<br>	&lt;/cfif&gt;<br>	i'm back #i[1]#&lt;br&gt;<br>	&lt;/cfoutput&gt;</p><p>&lt;/cffunction&gt;</p><p>&lt;cfset test(0)&gt;<br>&lt;br&gt;&lt;br&gt;<br>&lt;cfset test2(0)&gt;</p><p>This returns:</p><p>going deeper 0 0<br>going deeper 1 1<br>going deeper 2 2<br>going deeper 3 3<br>i'm back 3<br>i'm back 2<br>i'm back 1<br>i'm back 0</p><p>going deeper 0 0<br>going deeper 1 1<br>going deeper 2 2<br>going deeper 3 3<br>i'm back 3<br>i'm back 3<br>i'm back 3<br>i'm back 3</p><p>In the cffunction the array is overwritten. In UDF you can define complex variables locally, apparently in cffunctions you can't. With simple datatypes it works ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622174">5</a> by Raymond Camden
		posted on 11/3/2005 at 6:23 PM
		</div>
		<div class="comment_text"><p>Jeoroen, you are in correct. The problem is that you forgot to use the var keyword in your cffunctione example. Change your cfset i = arraynew(1) to</p><p>cfset var i = arraynew(1)</p><p>and it will work fine. Var scoping is described in the docs and is very important.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622178">6</a> by Jeroen
		posted on 11/3/2005 at 6:56 PM
		</div>
		<div class="comment_text"><p>OK. I didn't know you could do scoping like that outside cfscript. Thanks.</p></div>
	</div>
</div>
		