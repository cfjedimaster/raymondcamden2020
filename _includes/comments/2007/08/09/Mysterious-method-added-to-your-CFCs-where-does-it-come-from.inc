
<div class="comment" id="c_1713669994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669994">1</a> by todd sharp
		posted on 8/9/2007 at 9:56 PM
		</div>
		<div class="comment_text"><p>For those who haven't seen it, Jared has a cfcToPrinter UDF on cflib that can create a PDF/Flashpaper version of the docs.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fudf.cfm%3Fid%3D1332%3A9GjXoR0oVZdkoqQHAs08kfIEY8E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/udf.cfm?id=1332">http://www.cflib.org/udf.cf...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670015">2</a> by Ron Alexander
		posted on 8/9/2007 at 10:01 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>What's the scope on the generated method?</p><p>Thanks,<br>Ron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670014">3</a> by Raymond Camden
		posted on 8/9/2007 at 10:06 PM
		</div>
		<div class="comment_text"><p>Scope? All functions in a CFC are... well, not scoped - just part of the methods. Are you asking about the access attribute? If so - it isn't set, so it should be public.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670016">4</a> by Ben Nadel
		posted on 8/9/2007 at 10:07 PM
		</div>
		<div class="comment_text"><p>@Ron,</p><p>If it can be printed / dumped, it must be the THIS scope. Not even ColdFusion can introspect the VARIABLES scope in a CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670013">5</a> by Raymond Camden
		posted on 8/9/2007 at 10:11 PM
		</div>
		<div class="comment_text"><p>Well wait a minute Ben. While getComponentMetaData can't, you _can_ introspect Variables from inside a CFC. It's one more scope. You could build a method that would cfreturn variables and then call it from outside.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670019">6</a> by Ben Nadel
		posted on 8/9/2007 at 10:20 PM
		</div>
		<div class="comment_text"><p>@Ray, yes, true. From within a CFC, you can do all of that. I was just thinking about passing the CFC to another method that would need to "scan" the CFC for documentation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669990">7</a> by Ron Alexander
		posted on 8/9/2007 at 10:22 PM
		</div>
		<div class="comment_text"><p>Access is what I meant. Sorry for the confusion.</p><p>I was curious because the screenshot shows "* - private method" but neither of the methods have an asterisk next to them.</p><p>Thanks for the clarification.</p><p>Ron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669991">8</a> by Raymond Camden
		posted on 8/9/2007 at 10:27 PM
		</div>
		<div class="comment_text"><p>@Ron - That's just the standard header. It doesn't mean you _have_ private methods.</p><p>@Ben - gotcha.</p></div>
	</div>
</div>
		