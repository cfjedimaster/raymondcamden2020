
<div class="comment" id="c_1713614685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614685">1</a> by Randy
		posted on 7/3/2003 at 10:07 PM
		</div>
		<div class="comment_text"><p>Actually I noticed this last night as well, I thought my server was freaking out though. I can definately confirm there is some freaky behaviour when you cache that cfc.</p><p>-rd</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614674">2</a> by Ken
		posted on 7/9/2003 at 5:00 AM
		</div>
		<div class="comment_text"><p>Sounds like it might be an incarnation of the infamous pagecontext bug. Since this extensive bug is supposedly fixed in RedSky, I guess you'll find out soon enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614675">3</a> by Raymond Camden
		posted on 7/9/2003 at 5:24 AM
		</div>
		<div class="comment_text"><p>No, this is defintely different from the page context bug, but you are right, that bug is fixed in RedSky.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614677">4</a> by Max Kanat-Alexander
		posted on 7/26/2003 at 5:44 AM
		</div>
		<div class="comment_text"><p>I've been having an issue somewhat like that with my application. The problem is, I _have_ to cache the CFC, or performance will degrade to an unacceptable level in my application. (On Application first-load, I load an object that runs probably several thousand small DB queries, and then cache that object.)</p><p>I described it basically at: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.experts-exchange.com%2FWeb%2FWebDevSoftware%2FColdFusion%2FQ_20688576.html%3AYEFXEVlpKczVNuLwgp9Jrf11Uuk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.experts-exchange.com/Web/WebDevSoftware/ColdFusion/Q_20688576.html">http://www.experts-exchange...</a></p><p>Is this the same issue, do you think?</p><p>-M</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614690">5</a> by Gobo
		posted on 8/16/2003 at 2:11 PM
		</div>
		<div class="comment_text"><p>Just wondering, now that 6.1 is out, have you tried to cache again and did work?</p><p>Thanks, Gobo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614687">6</a> by Raymond Camden
		posted on 8/16/2003 at 2:15 PM
		</div>
		<div class="comment_text"><p>I know I'm caching again on cflib and it's working fine. Not 100% sure I updated it here since the site runs fast anyway, but I will eventually.</p></div>
	</div>
</div>
		