
<div class="comment" id="c_1713620853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620853">1</a> by Daniel D
		posted on 9/20/2005 at 4:35 AM
		</div>
		<div class="comment_text"><p>As for why the application vars are not timing out I belive the timeout is an inactivity timeout.  So as long as something is loading a page using that application name once every timeout-1second the vars will not time out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620859">2</a> by Scott Stroz
		posted on 9/20/2005 at 7:13 AM
		</div>
		<div class="comment_text"><p>'there is no built-in way to force an application to end' - while this may be true, there is a way to execute any code in the onApplicationEnd, so you can kind of mimic an applicatoin ending.</p><p>&lt;cfset endApp = createObject("component", "application.onApplicationEnd:) /&gt;<br>&lt;cfset endApp.onApplicationEnd() /&gt;</p><p>You can call any method from Applicatoin.cfc using this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620856">3</a> by Scott Stroz
		posted on 9/20/2005 at 7:27 AM
		</div>
		<div class="comment_text"><p>Nevermind....I see you made a similar point...I really must learn to read...</p></div>
	</div>
</div>
		