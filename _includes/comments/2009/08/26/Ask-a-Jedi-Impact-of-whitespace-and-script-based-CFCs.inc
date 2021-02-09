
<div class="comment" id="c_1713717969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717969">1</a> by Robert Rawlins
		posted on 8/26/2009 at 5:00 PM
		</div>
		<div class="comment_text"><p>My opinion on this new scripting stuff is so torn, on the one hand I think it's really cool, makes the language feel somewhat more grown-up or something, I don't quite know, but on the other hand the reason I first started using CF was because of the tag based nature and how intuitive it felt as someone who has only previously dealt with html.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717957">2</a> by Dan Vega
		posted on 8/26/2009 at 5:04 PM
		</div>
		<div class="comment_text"><p>Tags have there place on the presentation layer. To me it just feels better writing business logic in a less verbose more natural environment. The great thing is though developers have a choice so if its not for you don't worry, continue writing code the way you do now!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717967">3</a> by Raymond Camden
		posted on 8/26/2009 at 5:18 PM
		</div>
		<div class="comment_text"><p>I'll ditto Dan. If the script stuff doesn't work for you, don't use it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717968">4</a> by Jared Rypka-Hauer
		posted on 8/26/2009 at 6:27 PM
		</div>
		<div class="comment_text"><p>The reason you get no extra whitespace using script-based CFCs is this: The only way a script block can output to the buffer is using writeOutput()... so if you have an all-script CFC, you won't get any whitespace. If you have a template with cfscript tags, you'll get the whitespace outside the cfscript tag, but you won't get any whitespace from the code _inside_ the script tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717971">5</a> by sam Farmer
		posted on 8/26/2009 at 6:36 PM
		</div>
		<div class="comment_text"><p>Re: White Space</p><p>Interesting.</p><p>In CFAdmin what is your 'Enable Whitespace Management' set to?  By default in CF9 its now checked and I wonder if that changes things.</p><p>Re: Script and Tags</p><p>We've got the best of both worlds now :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717977">6</a> by Raymond Camden
		posted on 8/26/2009 at 6:41 PM
		</div>
		<div class="comment_text"><p>Good catch there. I forgot that in CF9 this is turned on by default. I turned it off, but it didn't impact anything.</p><p>@Jared: Yeah, I believe you are 100% right, and it is kind of obvious now, but at the same time, good to confirm.</p><p>I tend to be anal about output="false" in my CFCs, but won't be bothering with it when i do script based ones.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717963">7</a> by Jared Rypka-Hauer
		posted on 8/26/2009 at 7:10 PM
		</div>
		<div class="comment_text"><p>I don't believe that the whitespace management setting in the CF Admin should have any effect on script... script can't just output text unless you tell it to by using writeOutput() . Whitespace management is an artifact of a tag-based world built exclusively to output to the browser and extended to build objects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717970">8</a> by Jared Rypka-Hauer
		posted on 8/26/2009 at 7:12 PM
		</div>
		<div class="comment_text"><p>Ooops, I said that already. Heh.</p><p>I cannot get teh brainz to fully engage today. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717966">9</a> by Henry Ho
		posted on 8/26/2009 at 9:59 PM
		</div>
		<div class="comment_text"><p>Thank you for answering my question, jedi! :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717972">10</a> by Jose Galdamez
		posted on 8/26/2009 at 11:38 PM
		</div>
		<div class="comment_text"><p>This is pretty much the behavior I would expect from a script-based CFC, but it's certainly nice to see it actually tried out and confirmed.</p><p>Does anyone know if it's possible to call custom tags using script-based syntax? If so, I wonder what would happen then.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717975">11</a> by Raymond Camden
		posted on 8/26/2009 at 11:41 PM
		</div>
		<div class="comment_text"><p>You can't. If your custom tag didn't need to support children, or wrapping, it would take two seconds to wrap cfmodule into a UDF. This would allow you to do: module("foo.cfm",{arg1=x,arg2=y}).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717973">12</a> by Raymond Camden
		posted on 8/26/2009 at 11:45 PM
		</div>
		<div class="comment_text"><p>Well, maybe not two seconds. ;) It would be difficult to tell if the tag returned a value that you would then pass back. However, if you want to replace a _known_ custom tag call, then you could definitely write a quick UDF wrapper for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717974">13</a> by Adam Cameron
		posted on 8/29/2009 at 10:05 AM
		</div>
		<div class="comment_text"><p>G'day<br>Just on the whitespace thing.  There's still a slight use case for specifying output=false on script-based functions &amp; components.</p><p>If the script code includes a tag-based file, the whitespace from the tag-based file still outputs (if whitespace management is off, natch).</p><p>It'd be questionable form to be including files from within a function, but it's still possible, so maybe worthwhile tucking this thought away in the corner of ones brain.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717976">14</a> by Raymond Camden
		posted on 8/29/2009 at 5:41 PM
		</div>
		<div class="comment_text"><p>@Adam: Wow, good find there. Thank yoU!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717958">15</a> by Jared Rypka-Hauer
		posted on 8/29/2009 at 6:14 PM
		</div>
		<div class="comment_text"><p>Hey Adam, good call. I can see that being an important function in a framework or DSL intended to process files into output, for example, and it would be perfectly fine in that case. I mean, there are probably a 100 places where this.include("/template/path.cfm") would be a viable method call, and in that case you have a totally valid point. :)</p></div>
	</div>
</div>
		