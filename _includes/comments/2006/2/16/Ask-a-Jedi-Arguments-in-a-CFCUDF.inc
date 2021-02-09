
<div class="comment" id="c_1713650247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650247">1</a> by M!ke Dawson
		posted on 2/16/2006 at 11:56 PM
		</div>
		<div class="comment_text"><p>Do you consider the "arguments" scope to be "read-only" within the function?</p><p>In other words, do you ever modify an argument and then return it rather than create a temp variable?</p><p>This is not the best example, but it gets the point across:</p><p>&lt;cffunction ...&gt;<br>  &lt;cfargument name="myArg"&gt;</p><p>  &lt;cfset arguments.myArg = "Hello, " &amp; arguments.myArg&gt;</p><p>  &lt;cfreturn arguments.myArg&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650262">2</a> by Ryan Guill
		posted on 2/17/2006 at 12:06 AM
		</div>
		<div class="comment_text"><p>I do consider arguments to be read only.  If I am going to modify an argument in some way, I always copy it to a local variable.</p><p>Also, note that you cannot have a local variable with the same name as an argument.  IE you cannot do</p><p>cfargument name="foo" type="String" required="True" /</p><p>cfset var foo = "" /</p><p>You will get a compile error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650261">3</a> by Raymond Camden
		posted on 2/17/2006 at 12:52 AM
		</div>
		<div class="comment_text"><p>Unlike Ryan, I do not consider them to be read only. I can see the argument for that, but I just don't consider them read only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650271">4</a> by Ryan Guill
		posted on 2/17/2006 at 12:57 AM
		</div>
		<div class="comment_text"><p>We'll the only reason I do consider them to be read only is so that after you do the manipulation you can still have access to the original argument value if neccessary later.</p><p>Also, I have a debugging object that I use in my methods a lot of times that I put the arguments structure into to be returned back out of the method so I can see exactly what was passed in, and if I changed my arguments then I wouldn't be able to do this. (of course, thats also because I always append the arguments into the object at the end of my call right before the cfreturn, moving that to the top would fix that problem I suppose).</p><p>I guess if I knew that I would never need to know what the original argument was I wouldn't necessarily see a problem with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650264">5</a> by Ryan Guill
		posted on 2/17/2006 at 12:59 AM
		</div>
		<div class="comment_text"><p>Also mike, I do want to mention that in your example, if it was just a simple function like that, you could just do the append / prepend in the return tag:</p><p>&lt;cfreturn "hello" &amp; arguments.myArg&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650265">6</a> by M!ke Dawson
		posted on 2/17/2006 at 1:06 AM
		</div>
		<div class="comment_text"><p>I know.  ;^)  That's why I preface it with "Bad Example".  Nothing came to mind at the time.</p></div>
	</div>
</div>
		