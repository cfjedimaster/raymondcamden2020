
<div class="comment" id="c_1713710514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710514">1</a> by Phillip Senn
		posted on 12/7/2008 at 1:39 AM
		</div>
		<div class="comment_text"><p>What does this stmt do?<br>&lt;cfset s = structGet("<a href="http://disq.us/url?url=http%3A%2F%2Fapplication.data%3ALhwJAv2hRyCFsbHYaudCEwz81Yo&amp;cuid=3321886" rel="nofollow noopener" title="application.data">application.data</a>")&gt;</p><p>According to the CFML reference, it returns<br>"An alias to the variable in the pathDesired parameter."<br>Which I think it means it simply creates a pointer, or a shortcut (ie: not a clone or copy of) the variable called "data" that is in the application scope.</p><p>The book then says:<br>If necessary, StructGet creates structures or arrays to make pathDesired a valid variable "path."<br>I'm not sure what the implications are for that.<br>But it almost sounds like it would create a clone, or a copy "if necessary".</p><p>What is the definition of a valid variable "path"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710493">2</a> by Phillip Senn
		posted on 12/7/2008 at 1:52 AM
		</div>
		<div class="comment_text"><p>Where did you learn about:<br>getPageContext().getRequest().GetRequestUrl().toString()?</p><p>Is this the equivalent to something more familiar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710512">3</a> by Phillip Senn
		posted on 12/7/2008 at 2:01 AM
		</div>
		<div class="comment_text"><p>&lt;cfif not structKeyExists(s, p)&gt;<br>	&lt;cfset s[p] = 0&gt;<br>&lt;/cfif&gt;<br>&lt;cfset s[p]++&gt;</p><p>Q: Can you use what looks like array notation on structures?</p><p>If the value of p="Index.cfm", then is this in effect saying:</p><p>&lt;cfif not structKeyExists(s, "Index.cfm")&gt;<br>   &lt;cfset s("Index.cfm") = 0&gt;<br>&lt;/cfif&gt;<br>&lt;cfset s("Index.cfm")++&gt;<br>?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710513">4</a> by Raymond Camden
		posted on 12/7/2008 at 2:29 AM
		</div>
		<div class="comment_text"><p>Wow, a lot of questions.</p><p>1) structGet. structGet basically says, "If X doesn't exist, make it. Then return a pointer." So imagine X="application.foo.moo". CF will say "Does the Application struct exists?" If no, make it. Then it wil say, does Foo exist as a struct in Application? If not, make it.</p><p>And so on and so on.</p><p>It is basically a quick way to make a deeply nested struct. You can also do <a href="http://disq.us/url?url=http%3A%2F%2FApplication.foo%3A1SOzmxkeZb-noMyM-y6q_zaW1q8&amp;cuid=3321886" rel="nofollow noopener" title="Application.foo">Application.foo</a>[5], and it will create foo as an array.</p><p>2) getPageContext() - It's documented. :) That's in the CF ref, and then you get access to a Java object which is also documented. I didn't find this myself, it was in the UDF.</p><p>3) Your last question confuses me. You use bracket notation with structs, just like arrays, but arrays are only indexed by #s, structs are indexed by string based keys.</p></div>
	</div>
</div>
		