
<div class="comment" id="c_1713732447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732447">1</a> by Scott Stroz
		posted on 5/18/2011 at 7:24 AM
		</div>
		<div class="comment_text"><p>I know I canot be the only one who is not surprised Ray 'forgot' about CSS. :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732438">2</a> by Narciso Jaramillo
		posted on 5/18/2011 at 8:29 AM
		</div>
		<div class="comment_text"><p>Hi Ray--did you try setting applicationDPI="160" on your root application tag? That should make your application scale properly to higher DPIs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732437">3</a> by Narciso Jaramillo
		posted on 5/18/2011 at 8:29 AM
		</div>
		<div class="comment_text"><p>Hi Ray--did you try setting applicationDPI="160" on your root application tag? That should make your application scale properly to higher DPIs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732448">4</a> by Raymond Camden
		posted on 5/18/2011 at 2:48 PM
		</div>
		<div class="comment_text"><p>I did - and it did not help. I tried no DPI, and all 3 supported values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732439">5</a> by Scott P
		posted on 5/18/2011 at 8:25 PM
		</div>
		<div class="comment_text"><p>I'm sure you know but you can take screenshots using the sdk - ddms.  Plugin in usb, enable debugging then start ddms.</p><p>you know all of this already right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732443">6</a> by Raymond Camden
		posted on 5/18/2011 at 8:26 PM
		</div>
		<div class="comment_text"><p>I did know it - but I had forgotten it. :) Will use it going forward. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732442">7</a> by Narciso Jaramillo
		posted on 5/18/2011 at 9:04 PM
		</div>
		<div class="comment_text"><p>What kind of device do you have? I've heard that there may be issues with the Atrix--apparently a recent Android update might have broken the value that it reports to AIR as its physical DPI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732449">8</a> by Raymond Camden
		posted on 5/18/2011 at 9:16 PM
		</div>
		<div class="comment_text"><p>HTC Inspire. Holly actually recommended I do a trace() for the device's DPI. I wonder if I did that if it would return "" or null or some such. I'll try to test that after work today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732446">9</a> by Steven Shongrunden
		posted on 5/19/2011 at 1:23 AM
		</div>
		<div class="comment_text"><p>Trace out Capabilities.screenDPI and let us know what your device is reporting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732436">10</a> by Raymond Camden
		posted on 5/19/2011 at 1:52 AM
		</div>
		<div class="comment_text"><p>196</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732440">11</a> by Raymond Camden
		posted on 5/19/2011 at 8:22 PM
		</div>
		<div class="comment_text"><p>Here is a follow up by Jason San Jose of Adobe. He filed a bug report:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbugs.adobe.com%2Fjira%2Fbrowse%2FSDK-30487%3AOj97fS3cRlpZMvTDIWqPo-UXCdg&amp;cuid=3321886" rel="nofollow noopener" title="http://bugs.adobe.com/jira/browse/SDK-30487">http://bugs.adobe.com/jira/...</a></p><p>And he added: "As a workaround for the Inspire, read my blog post about using runtimeDPIProvider or read about the workaround in this bug <a href="https://disq.us/url?url=https%3A%2F%2Fbugs.adobe.com%2Fjira%2Fbrowse%2FSDK-29999%3ARd832N89LiueFPS8gU4M7NMSuWw&amp;cuid=3321886" rel="nofollow noopener" title="https://bugs.adobe.com/jira/browse/SDK-29999">https://bugs.adobe.com/jira...</a>."</p></div>
	</div>
</div>
		