
<div class="comment" id="c_1713718066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718066">1</a> by Sumit Verma
		posted on 9/1/2009 at 6:02 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Can the updates be applied be putting the jar in cf_root/lib/updates folder and restart CF? I would like to script the update instead of logging into each instance.</p><p>Thanks,<br>Sumit</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718085">2</a> by Raymond Camden
		posted on 9/1/2009 at 7:46 PM
		</div>
		<div class="comment_text"><p>I have only ever done it the documented way. I'm a wimp like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718091">3</a> by Sumit Verma
		posted on 9/1/2009 at 8:05 PM
		</div>
		<div class="comment_text"><p>It's kind of a pain to do that way when you have about 30 instances to patch...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718089">4</a> by Marc
		posted on 9/1/2009 at 9:55 PM
		</div>
		<div class="comment_text"><p>The instructions says that any individual hot fixes previously installed that are now contained in this cumulative hot fix should be removed by deleting jar files from cf_root/lib/updates/<br>How can I tell which .jar files correspond to which Bug ID in the cumulative hotfix? For example I have these 2 files in cf_root/lib/updates/  hf801-77218.jar and hf801-1875.jar; 7721 looks like a Bug ID but 1875 refers to a CVE from a security fix. <br>Also how can you find the correspond KB article (such as <a href="http://disq.us/url?url=http%3A%2F%2Fkb2.adobe.com%2Fcps%2F403%2Fkb403411.html%29%3A4i-HgscHMCnsTaeqI4ABy5PmoZw&amp;cuid=3321886" rel="nofollow noopener" title="http://kb2.adobe.com/cps/403/kb403411.html)">http://kb2.adobe.com/cps/40...</a> for a Bug Id.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718084">5</a> by Craig
		posted on 9/1/2009 at 10:11 PM
		</div>
		<div class="comment_text"><p>Why not wait for CF9? Is that coming out this year? Ray, your videos on the site are great. Can't wait for cfmap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718097">6</a> by Raymond Camden
		posted on 9/1/2009 at 10:27 PM
		</div>
		<div class="comment_text"><p>@Marc: All I can suggest is perhaps removing all the JARs and just using the CHF. That should cover it I believe.</p><p>@Craig: Heh, well, not everyone can/will upgrade at once. ;)</p></div>
	</div>
</div>
		