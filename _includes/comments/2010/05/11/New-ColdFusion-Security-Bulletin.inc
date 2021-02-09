
<div class="comment" id="c_1713724309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724309">1</a> by Julian Halliwell
		posted on 5/12/2010 at 12:51 PM
		</div>
		<div class="comment_text"><p>We just applied the 8.01 HF to 2 different dev machines and after restarting CF &lt;cfquery&gt; could no longer connect to any datasources (errored with datasource exceptions). Verifying all dsns in the CF Admin worked ok though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724300">2</a> by Raymond Camden
		posted on 5/12/2010 at 2:37 PM
		</div>
		<div class="comment_text"><p>Your best bet is to contact Adobe support. Sorry I can't help more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724306">3</a> by Julian Halliwell
		posted on 5/12/2010 at 2:46 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond, but I wasn't expecting help. Just commenting in case anyone else has a similar issue, and warning people to test first before applying to production servers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724307">4</a> by Raymond Camden
		posted on 5/12/2010 at 2:47 PM
		</div>
		<div class="comment_text"><p>Don't you know - I feel guilty if I don't answer _every_ comment here. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724316">5</a> by Yaron
		posted on 5/12/2010 at 4:53 PM
		</div>
		<div class="comment_text"><p>Same thing happened to our server. All you have to do is take down the cf service, remove the shf8010001.jar file from your updates dir (?:\JRun4\servers\cfusion\cfusion-ear\cfusion-war\WEB-INF\cfusion\lib\updates) and restart. Adobe? WTF? People! Always test updates on dev servers first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724308">6</a> by Chad
		posted on 5/12/2010 at 6:22 PM
		</div>
		<div class="comment_text"><p>I just tried it on our development 8.0 server and nothing broke.</p><p>What server versions did break?  I have an 8.0.1 production server and you guys are making me nervous.</p><p>Are there any details on what is vulnerable?  Is it just the login.cfm files in CFIDE that the fix replaces?  If so those are not public facing on my production server so i may skip the update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724315">7</a> by James
		posted on 5/12/2010 at 6:36 PM
		</div>
		<div class="comment_text"><p>Posts on Facebook say that Adobe is looking into the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724312">8</a> by Yaron
		posted on 5/12/2010 at 9:37 PM
		</div>
		<div class="comment_text"><p>Version:  8,0,1,195765    <br>Edition:  Enterprise</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724311">9</a> by Paul Karlin
		posted on 5/12/2010 at 9:51 PM
		</div>
		<div class="comment_text"><p>Same problem here with 8.0.1 -- we're uninstalling now.  At least we only deployed to testing first!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724313">10</a> by Josh
		posted on 5/13/2010 at 7:32 PM
		</div>
		<div class="comment_text"><p>The fix for the hotfix is out.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fkb2.adobe.com%2Fcps%2F841%2Fcpsid_84102.html%3AahDo7zjTKdtlcgFY0xfA9NTdciA&amp;cuid=3321886" rel="nofollow noopener" title="http://kb2.adobe.com/cps/841/cpsid_84102.html">http://kb2.adobe.com/cps/84...</a></p></div>
	</div>
</div>
		