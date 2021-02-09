
<div class="comment" id="c_1713653644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653644">1</a> by mark kruger
		posted on 5/30/2006 at 1:43 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I believe this option is for enterprise and not available on CF standard. Right?</p><p>-mk</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653633">2</a> by Raymond Camden
		posted on 5/30/2006 at 2:02 AM
		</div>
		<div class="comment_text"><p>Yep, that's why I said it was an Enterprise feature in the blog entry. ;)</p><p>On a related note - if you were under cfmx7, you could potentially script your DSNs with the Admin CFCs. Although it's a lot of work probably.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653642">3</a> by Terrence Ryan
		posted on 5/30/2006 at 3:03 AM
		</div>
		<div class="comment_text"><p>If you wanted to do exactly what the questioner was asking, without having the Enterprise Edition, you could just copy the neo-query.xml file from the \[cfusion root]\lib directory.</p><p>Or is there a downside to doing that method that I'm missing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653640">4</a> by Scott P
		posted on 5/30/2006 at 3:21 AM
		</div>
		<div class="comment_text"><p>Terrence, I've done that several times and would be curious if there was a reason not to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653636">5</a> by Fernando da Silva Trevisan
		posted on 5/30/2006 at 4:22 AM
		</div>
		<div class="comment_text"><p>Well, Pete Freitag says:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F68.cfm%3APoF0_R8l1kqSvpS6fzlzZX_3crE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/68.cfm">http://www.petefreitag.com/...</a><br>Backing up ColdFusion Datasources<br>"...On ColdFusion MX settings are stored in files (typically xml using WDDX) instead of the registry. So you need to backup the files that contain the settings. The file cfusionmx\lib\neo-query.xml stores the datasources...."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653639">6</a> by Raymond Camden
		posted on 5/30/2006 at 4:35 AM
		</div>
		<div class="comment_text"><p>Thanks for clearing that up Fernando. I'd still recommend the CAR solution for those who have Enterprise, just because it is "Official"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653638">7</a> by Tom
		posted on 5/30/2006 at 4:32 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I've tried to use the archive and deploy feature since it first came out and I have -never- been able to get it to successfully (and correctly) redeploy the settings.</p><p>9 times out of 10 the archiver doesn't archive anything (even though everything has been checked for it to archive).  The other 1 time it'll create a 0 byte file.  Well, that was the case with CF 6.1.  When we went to 7.0 it would create a large file, but CF would never restore the settings.  I've spent many hours trying to troubleshoot this and finally gave up.</p><p>I don't trust the archiver any further than I can throw it.  You're better off printing your settings, backing up neo-query.xml, and the various .xml config files (like web.xml, jrun-web.xml, etc).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653643">8</a> by Raymond Camden
		posted on 5/30/2006 at 5:14 PM
		</div>
		<div class="comment_text"><p>Tom, did you report this? <a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fgo%2Fwish%3F%3AO0rdHcOee6L09XBqMrlsadMRB3I&amp;cuid=3321886" rel="nofollow noopener" title="www.macromedia.com/go/wish?">www.macromedia.com/go/wish?</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653641">9</a> by Tom
		posted on 5/31/2006 at 5:31 PM
		</div>
		<div class="comment_text"><p>No.  I've become pretty set in my ways for installing, backing up and restoring ColdFusion servers.  And I don't want to burn one of my support calls on the matter, since there are other ways to back up the settings/config stuff.</p><p>But thanks for the wishlist URL.  I'll keep that handy!</p></div>
	</div>
</div>
		