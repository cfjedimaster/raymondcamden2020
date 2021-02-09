
<div class="comment" id="c_1713614495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614495">1</a> by Nathan Dintenfass
		posted on 3/14/2003 at 1:55 AM
		</div>
		<div class="comment_text"><p>One interesting result of the fact that a CFC instance is like a struct, is that you can do things like:</p><p>functionToCall = cfcInstance[methodName];<br>functionToCall(argsGoHere);</p><p>Unfortunately, if you are referring to private instance vars in your method this won''t work because you are effectively stripping the CFC context from the function and turning it into a local function this way.</p></div>
	</div>
</div>
		