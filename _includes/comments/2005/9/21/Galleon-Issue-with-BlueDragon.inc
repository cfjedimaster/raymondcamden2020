
<div class="comment" id="c_1713620912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620912">1</a> by CM
		posted on 9/22/2005 at 6:53 AM
		</div>
		<div class="comment_text"><p>Thanks a bunch, Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620913">2</a> by Vince Bonfanti
		posted on 10/3/2007 at 10:02 PM
		</div>
		<div class="comment_text"><p>This code is no longer necessary in BD 7.0. In fact, it won't work in BD 7.0, so within Application.cfm, remove the code at line 30 that starts:</p><p>&lt;cfif server.coldfusion.productname is "BlueDragon"&gt;</p><p>And replace it with just this:</p><p>&lt;cferror type="exception" template="error.cfm"&gt;</p></div>
	</div>
</div>
		