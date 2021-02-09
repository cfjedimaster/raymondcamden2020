
<div class="comment" id="c_1713716941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716941">1</a> by Ben Nadel
		posted on 7/13/2009 at 7:00 PM
		</div>
		<div class="comment_text"><p>serverSideFormValidation - Wooohooo!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716943">2</a> by Brian Swartzfager
		posted on 7/13/2009 at 7:03 PM
		</div>
		<div class="comment_text"><p>"debugipaddress":  oooh, that will be nice!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716947">3</a> by Ben Doom
		posted on 7/14/2009 at 3:20 AM
		</div>
		<div class="comment_text"><p>It's really too bad that enablerobustexception isn't on the request level -- then it could be controlled by IP, by comparing to cgi.host_header.  In fact, you could pretty easily set it up so that recognized IPs get robustexceptions, and unrecognized IPs get cferror.</p><p>Maybe I'll just have to make that suggestion for CF10.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716944">4</a> by Raymond Camden
		posted on 7/14/2009 at 7:48 AM
		</div>
		<div class="comment_text"><p>You can actually:</p><p>if(structkeyexists(url,"ok")) this.enablerobustexception = true;<br>else this.enablerobustexception = false;</p><p>This let me pass ok=1 in the URL to see the full info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716954">5</a> by Christoph Schmitz
		posted on 7/14/2009 at 12:36 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>is there a way to override the Application setting of enablerobustexception? Robust exception information is considered a security risk and I can imagine that some providers would be glad if they could disable this.</p><p>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716955">6</a> by Raymond Camden
		posted on 7/14/2009 at 4:10 PM
		</div>
		<div class="comment_text"><p>I believe the application setting will override it. You would need to file an ER for that. Personally I disagree with you - not that it's a risk, but that the Admin should take priority. I think the application should 'win' in cases like this (normally anyway).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716950">7</a> by Ben Doom
		posted on 7/14/2009 at 5:46 PM
		</div>
		<div class="comment_text"><p>If the enablerobustexception flag is thrown on an application level, won't turning it on/off based on the client's IP run a risk of having race conditions?</p><p>If you visit my site, and have them turned off, then I do, and have them turned on, then you error, you'll see the error.</p><p>I realize that that is a pretty minor risk, but still....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716952">8</a> by Raymond Camden
		posted on 7/14/2009 at 5:48 PM
		</div>
		<div class="comment_text"><p>While it is an Application setting, it is per request, so how would it matter? And as it stands, this ONLY has an impact on 'naked' errors that you don't handle. I'd assume in production you always use onError anyway which kinda makes the whole thing unnecessary really. onError will ALWAYS have the full exception object, period.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716951">9</a> by Hemant
		posted on 8/5/2009 at 7:05 PM
		</div>
		<div class="comment_text"><p>A small correction - debugipaddresses should be debuggingipaddresses.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716956">10</a> by Raymond Camden
		posted on 8/5/2009 at 10:17 PM
		</div>
		<div class="comment_text"><p>Hemant - the docs are wrong for this then. I was wrong when I copied it too. The docs say debugipaddress (singular). Will you handle filing a documentation bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716957">11</a> by Hemant
		posted on 8/6/2009 at 7:02 AM
		</div>
		<div class="comment_text"><p>I shall log a doc bug.</p></div>
	</div>
</div>
		