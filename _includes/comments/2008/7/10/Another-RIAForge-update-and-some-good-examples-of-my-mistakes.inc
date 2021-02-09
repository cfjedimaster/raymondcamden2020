
<div class="comment" id="c_1713682797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682797">1</a> by Brad Wood
		posted on 7/10/2008 at 7:53 PM
		</div>
		<div class="comment_text"><p>That's ballsy to point out your mistakes to everyone.  :)</p><p>Thanks for doin' it though.  It makes us all better programmers.</p><p>~Brad</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682781">2</a> by Martijn van der Woud
		posted on 7/11/2008 at 11:33 AM
		</div>
		<div class="comment_text"><p>Ray writes :"Another issue - I use Reactor, although in a minor way, and for some reason I pushed the code up with "development" mode for Reactor instead of production."</p><p>After a few mistakes like this I stick to the following: In SVN, in the trunk, I keep all settings equal to the production environment. All development is done in seperate branches. When development is done and I merge the branch with the trunk, I go through all changes that I've made one by one (subclipse is great for this). Often, I stumble upon a setting that I've changed in early development that I've forgotten about. This helps me fix it before the new release goes to production.</p><p>Hope this is an understandable comment. I could do a blog post where I explain this, with screenshots. Anyone interested?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682798">3</a> by Raymond Camden
		posted on 7/11/2008 at 3:36 PM
		</div>
		<div class="comment_text"><p>I think a blog entry would be great. When it comes to SVN, I'm still not yet comfortable with branches.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682802">4</a> by ziggy
		posted on 7/29/2008 at 9:14 AM
		</div>
		<div class="comment_text"><p>Is it just me or does this page still take forever sometimes:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Findex.cfm%3Fevent%3Dpage.issues%3Ak-v5m5hxVYSQOuC-KXSP2741m4g&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/index.cfm?event=page.issues">http://projecttracker.riafo...</a></p><p>Many times it didn't load beyond the header or it loaded but then loaded the issues after another very healthy wait. (Why not just output a query rather than wait and load via js? Is that needed just to use the js filter?)</p><p>Few suggestions:</p><p>I noticed these two images are very heavy for what they are, especially the 2nd which should weigh nothing:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fhdr_logo.gif%3AFVttWU98cwqrlU3CqCqx7bBw2e0&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/hdr_logo.gif">http://projecttracker.riafo...</a>	23 KB<br><a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fhdr_shad.gif%3Ac7aTlOCDYquoUd-OZvoxhNCo73o&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/hdr_shad.gif">http://projecttracker.riafo...</a>	21 KB</p><p>These two spry files are a little big too:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fjs%2FSpryData.js%3ACM4Uc9HE6aFvtQp24r465fdTCDk&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/js/SpryData.js">http://projecttracker.riafo...</a>	82 KB<br><a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fjs%2Fxpath.js%3A2geCiHu_M7RJ717G-ouftCcspVU&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/js/xpath.js">http://projecttracker.riafo...</a>	43 KB</p><p>Might consider jquery; doesn't it have your needed xpath/loading built in, and still weigh much less? (I have jquery/livequery/menu/custom code combined at 61kb, minified, not packed.) Or just add the two files together to speed loading time, and put it at the bottom of the page.</p><p>Most importantly, I don't see that anything at all is gzipped: pages, js, etc. Adding that would surely help a lot. Basically, any non-image will come in around 1/3 the normal weight. You can get that page down from "231 KB uncompressed" to about 54kb plus the images, then get those 2 noted above optimized and be fairly light.</p><p>Hope it helps speed it up a bit.</p><p>----------------</p><p>Btw, I still find any issues page with more than 1 comment almost unscannable with no differentiation via borders/space/text size to separate comments clearly, then duplicated info crowding it all, like the "Created by" and "name":</p><p>------------------<br>Project Tracker Issue: When Viewing a file source in the SVN browser<br>Name: 	When Viewing a file source in the SVN browser</p><p>Creator:  	David<br>Created: 	07/27/08 1:45 AM<br>History:  	Created by nzmehere (David) : 07/27/08 1:45 AM<br>------------------</p><p>I sent in code to clean up those pages a bit many months ago but really anything just to differentiate the comments would help.</p><p>Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682796">5</a> by Raymond Camden
		posted on 7/29/2008 at 3:32 PM
		</div>
		<div class="comment_text"><p>The biggest issue with - well the issues - is that it uses XML still and not JSON. Changing to that would give a huge reduction in file size. I can also switch to the minified JS files for Spry as well. It's just a matter of finding the time.</p><p>And yep - I know you want to improve that page. I'm the barrier here, but there isn't much I can do right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682799">6</a> by Raymond Camden
		posted on 7/29/2008 at 8:15 PM
		</div>
		<div class="comment_text"><p>Ziggy:</p><p>Switched to packed JS files.<br>Switched to JSON.</p><p>I see significant size decreases now, especially for projecttracker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682801">7</a> by ziggy
		posted on 8/1/2008 at 10:53 AM
		</div>
		<div class="comment_text"><p>Some reason you don't gzip?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682800">8</a> by Raymond Camden
		posted on 8/1/2008 at 3:31 PM
		</div>
		<div class="comment_text"><p>I didn't use the zipped ones because I assumed I needed to set something up in Apache first. I wasn't sure, so I just went with that solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682804">9</a> by ziggy
		posted on 8/3/2008 at 2:53 PM
		</div>
		<div class="comment_text"><p>No, you just turn gzipping on in httpd.conf for Apache:</p><p>LoadModule deflate_module modules/<a href="http://disq.us/url?url=http%3A%2F%2Fmod_deflate.so%3AfTOlii0bpRsaJJmYH8YZjb_4jbo&amp;cuid=3321886" rel="nofollow noopener" title="mod_deflate.so">mod_deflate.so</a><br>LoadModule headers_module modules/<a href="http://disq.us/url?url=http%3A%2F%2Fmod_headers.so%3Akh9ztIaaqcgXtDpoO61soVs9ut0&amp;cuid=3321886" rel="nofollow noopener" title="mod_headers.so">mod_headers.so</a></p><p># deflate if available for the whole server<br>&lt;Location /&gt;<br>  &lt;IfModule mod_deflate.c&gt;<br>    AddOutputFilterByType DEFLATE text/html text/plain text/xml text/x-js application/x-javascript application/xhtml+xml text/css<br>    &lt;IfModule mod_headers.c&gt;<br>      Header append Vary User-Agent<br>    &lt;/IfModule&gt;<br>  &lt;/IfModule&gt;<br>&lt;/Location&gt;</p><p>Also, I noticed you don't have any expiry caching set on images either. See<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.websiteoptimization.com%2Fspeed%2Ftweak%2Fcache%2F%3A_ajDCtYL1CTsrMsgBZvJYZxUrwg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.websiteoptimization.com/speed/tweak/cache/">http://www.websiteoptimizat...</a></p><p>This is mine:</p><p># speed optimization --------------------</p><p>FileETag none</p><p>&lt;IfModule mod_expires.c&gt;<br>ExpiresActive on<br>ExpiresDefault "now"<br>ExpiresByType image/jpeg "access plus 2 month"<br>ExpiresByType image/gif "access plus 2 month"<br>ExpiresByType image/png "access plus 2 month"<br>ExpiresByType image/x-icon "access plus 2 month"<br>ExpiresByType application/x-shockwave-flash "access plus 2 month"<br>ExpiresByType text/css "access plus 2 month"<br>ExpiresByType text/javascript "access plus 2 month"<br>ExpiresByType application/x-javascript "access plus 2 month"<br>ExpiresByType application/xml "access plus 6 hours"<br>ExpiresByType text/xml "access plus 6 hours"<br>&lt;/IfModule&gt;</p><p>The latter is for feeds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682808">10</a> by Raymond Camden
		posted on 8/3/2008 at 11:33 PM
		</div>
		<div class="comment_text"><p>Interesting. I did all of this, but I didn't yet switch to the gzipped JS files. However, in YSlow I went from a D to a B, so things seem to be a bit better already. I'll switch to the gzipped files on Monday.</p><p>I'm also going to see if I can do this to <a href="http://disq.us/url?url=http%3A%2F%2Fcfbloggers.org%3AUSfw42IcIua5BdZyEnI9gfKMcRU&amp;cuid=3321886" rel="nofollow noopener" title="cfbloggers.org">cfbloggers.org</a> as well. That site should be zippier I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682785">11</a> by ziggy
		posted on 8/5/2008 at 7:39 AM
		</div>
		<div class="comment_text"><p>&gt;&gt;I didn't use the zipped ones because I assumed I needed to set something up in Apache first.<br>&gt;&gt;I didn't yet switch to the gzipped JS files</p><p>Just to be perfectly clear in case anyone is reading this and wondering, you do NOT use zipped files after turning on gzipping. Just continue to use regular files.</p><p>I see gzipping is on for js/css now but you haven't set it on the cfm files yet.</p><p>But definitely much faster already!</p><p> Was "231 KB uncompressed"<br> Now "112 KB (153 KB uncompressed)"</p><p>So down over half already and then caching on top of that!</p><p>If you added cfm gzipping and had someone optimize those 2 big images, that's about as good as that aspect gets.</p><p>Thanks! Awesome!</p><p>--------------------------------</p><p>Documents (1 file)	13 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Findex.cfm%3Fevent%3Dpage.issues%3Ak-v5m5hxVYSQOuC-KXSP2741m4g&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/index.cfm?event=page.issues">http://projecttracker.riafo...</a>	13 KB<br>	Images (17 files)	68 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fhdr_logo.gif%3AFVttWU98cwqrlU3CqCqx7bBw2e0&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/hdr_logo.gif">http://projecttracker.riafo...</a>	23 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fhdr_shad.gif%3Ac7aTlOCDYquoUd-OZvoxhNCo73o&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/hdr_shad.gif">http://projecttracker.riafo...</a>	21 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fftr01.gif%3AjBzC5DBIEQiImonisyCw7zO4RGQ&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/ftr01.gif">http://projecttracker.riafo...</a>	3 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fnavicons_photoshop.gif%3Ap8Y03GmlLvBcr0PpyEGeohp97a0&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/navicons_photoshop.gif">http://projecttracker.riafo...</a>	2 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fnavicons_livecycle.gif%3AMa9lyC7V2IvQ1LSRfQdDEq7YX1I&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/navicons_livecycle.gif">http://projecttracker.riafo...</a>	2 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fnavicons_flex.gif%3Av9rsL-RotWrZu_ioovtdF2QjEuQ&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/navicons_flex.gif">http://projecttracker.riafo...</a>	2 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fnavicons_fireworks.gif%3Ajc6u7TaUbBmmjUc_G03hw2Gy5Vg&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/navicons_fireworks.gif">http://projecttracker.riafo...</a>	2 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fnavicons_.gif%3A4eRjdrjyAWxqQkyrQw_bMTE19jU&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/navicons_.gif">http://projecttracker.riafo...</a>	2 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fnavicons_coldfusion.gif%3AX2Pxv5cFOOQpcOgyRahq-YXxzmo&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/navicons_coldfusion.gif">http://projecttracker.riafo...</a>	2 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fnavicons_indesign.gif%3AnYDEOs7LnpdFY5KKE39VotAJei4&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/navicons_indesign.gif">http://projecttracker.riafo...</a>	2 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fnavicons_illustrator.gif%3AXbYrqYTwwSqS76UY_ofPakKtO0c&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/navicons_illustrator.gif">http://projecttracker.riafo...</a>	2 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fnavicons_flash.gif%3Ac6nfzF8YyZwBbknL8Usq2f_mjZ4&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/navicons_flash.gif">http://projecttracker.riafo...</a>	2 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fnavicons_air.gif%3AdNadSexRtVQU09f7pIO1IA4_u2s&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/navicons_air.gif">http://projecttracker.riafo...</a>	2 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fnavicons_dreamweaver.gif%3Au5FmUx_lXUoMRHjK49fBQP3x4zk&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/navicons_dreamweaver.gif">http://projecttracker.riafo...</a>	2 KB<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fdivi03.gif%3ABVcb-i49w91uMIxzGxWqz3w9XLg&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/divi03.gif">http://projecttracker.riafo...</a>	55 bytes<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fdivi02.gif%3AC3lSCtCsfHqkOJu4i2rf4ch6MN8&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/divi02.gif">http://projecttracker.riafo...</a>	54 bytes<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fimages%2Fspacer.gif%3AL7oBQLiwonqpwxIpv66y1BjOlpc&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/images/spacer.gif">http://projecttracker.riafo...</a>	49 bytes<br>	Objects (0 files)	<br>	Scripts (3 files)	30 KB (70 KB uncompressed)<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fjs%2FSpryData.js%3ACM4Uc9HE6aFvtQp24r465fdTCDk&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/js/SpryData.js">http://projecttracker.riafo...</a>	18 KB (41 KB uncompressed)<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google-analytics.com%2Fga.js%3ASoaLjCQECgw_GqV40umdZvYdKtM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google-analytics.com/ga.js">http://www.google-analytics...</a>	9 KB (22 KB uncompressed)<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fprojecttracker.riaforge.org%2Fjs%2FSpryJSONDataSet.js%3AhqG6WF2YyPhU6am_rPy5_hAYr7A&amp;cuid=3321886" rel="nofollow noopener" title="http://projecttracker.riaforge.org/js/SpryJSONDataSet.js">http://projecttracker.riafo...</a>	3 KB (6 KB uncompressed)<br>	Style Sheets (1 file)	410 bytes (1 KB uncompressed)<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fwww.riaforge.org%2Fcss%2Fstyles.css%3A24lnr_thud5XLHGvJhge0puu_JU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.riaforge.org/css/styles.css">http://www.riaforge.org/css...</a>	410 bytes (1 KB uncompressed)<br>	Total	112 KB (153 KB uncompressed)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682803">12</a> by ziggy
		posted on 8/5/2008 at 7:53 AM
		</div>
		<div class="comment_text"><p>&gt;&gt;you do NOT use zipped files</p><p>Of course I should say you can pre-zip and set all that up, but does anyone bother? Creates a whole extra layer to worry about. Unless you're getting hammered on the cpu it is a waste of time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682805">13</a> by Raymond Camden
		posted on 8/5/2008 at 3:41 PM
		</div>
		<div class="comment_text"><p>@ziggy - I was having a brain fart. For some reason, I thought Spry included files that were zipped up and you would use it with gzip on the server.</p><p>Now - as for CFM zipping - I didn't do that on purpose. I was worried it might impact CFM pages that use cfcontent to push out non-CFM pages. Does it? If not, I'll add CFM as well.</p><p>FYI, I've done this to my server here as well, so all my sites (this blog, cflib, <a href="http://disq.us/url?url=http%3A%2F%2Fcfbloggers.org%3AUSfw42IcIua5BdZyEnI9gfKMcRU&amp;cuid=3321886" rel="nofollow noopener" title="cfbloggers.org">cfbloggers.org</a>, etc) should be a bit zippier.</p><p>Thank you for your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682809">14</a> by ziggy
		posted on 8/6/2008 at 9:36 AM
		</div>
		<div class="comment_text"><p>&gt;&gt;I was worried it might impact CFM pages that use cfcontent to push out non-CFM pages.</p><p>Well, it doesn't matter where it is launched from, it is still going through Apache, right? And it will gzip whatever you want or don't. For example, your json ajax request will be coming through gzipped because you have that set on js files. If you mean a cfm page launches an html page, you should gzip the html too (just don't setup to cache html if it is actually dynamic like cfm).</p><p>If you mean some download that is opened in another application, like an Excel sheet, it won't accept the gzip handshake on the Excel file (if you've even setup to gzip Excel) and thus be sent normally.</p><p>I don't see a problem there, but never actually tried the latter. I'd just turn it on and try your specific case right away. Only takes 1 minute. (You can check response headers with the firefox webdeveloper addon, or liveheaders.)</p><p>Setting up gzipping and expiry headers is awesome. It's like finding a bag of money on the road :-)</p></div>
	</div>
</div>
		