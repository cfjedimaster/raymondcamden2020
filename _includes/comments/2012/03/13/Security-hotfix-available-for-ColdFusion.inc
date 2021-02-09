
<div class="comment" id="c_1713739795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739795">1</a> by Rick
		posted on 3/13/2012 at 11:36 PM
		</div>
		<div class="comment_text"><p>If only there were an easy way to ensure that all current updates (security and otherwise) are installed on a CF server......or is there?  (Got any secrets you want to share? I only have under a dozen CF servers of various versions....so could use the help.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739782">2</a> by Raymond Camden
		posted on 3/14/2012 at 12:09 AM
		</div>
		<div class="comment_text"><p>For security, you should make use of Foundeo's HackMyCF service. It sounds scary, but it's an incredible service that will scan your machines and report issues to you. It's free, with a paid version. I cannot recommend it enough.</p><p>As for everything else, unfortunately there isn't a real nice way to do this. ColdFusion 10 makes it easier since you can go to your CF Admin and check there though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739775">3</a> by Michael Williams
		posted on 3/14/2012 at 6:15 AM
		</div>
		<div class="comment_text"><p>Wow. 14 steps to manually apply a security update. This is sad. I have a lot of servers. Adobe should do better than this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739779">4</a> by Raymond Camden
		posted on 3/14/2012 at 6:22 AM
		</div>
		<div class="comment_text"><p>As I said above, ColdFusion 10 makes it easier. You can install hotfixes via the admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739800">5</a> by Michael Williams
		posted on 3/14/2012 at 7:12 AM
		</div>
		<div class="comment_text"><p>In a multi-server install would it be safe to patch the 1st instance: cfusion then build and ear from that instance and deploy new servers based on it using the Instance Manager? I suppose a .car could also work but I'm having trouble getting a .car created and deployed on my test server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739781">6</a> by Raymond Camden
		posted on 3/14/2012 at 7:15 AM
		</div>
		<div class="comment_text"><p>Hate to say it - but no idea. I never use multiserver.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739794">7</a> by Michael Williams
		posted on 3/14/2012 at 7:22 AM
		</div>
		<div class="comment_text"><p>I got the Packaging &amp; Deployment &gt; J2EE Archives to make an ear of my /cfusion patched instance and then deployed it as a new instance /cfusion4 with all the settings and files from the /cfusion instance. It seems to be working. No errors thrown. This might be a good way to patch this monster on CF8 Enterprise if all your server instances share the same or near the same settings. Trying to find the support forums for CF on the adobe site to see if anyone else has tried this approach. I dont' think I've needed the support forums since the Macromedia days...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739790">8</a> by Chris Bowyer
		posted on 3/15/2012 at 12:00 AM
		</div>
		<div class="comment_text"><p>Duh!</p><p>Instructions state...</p><p>Customers who have applied the previous Security Hotfix APSB11-14 (included in ColdFusion 9.0.1 Cumulative Hotfix 2), see Section1. If you have not applied the previous Security Hotfix APSB11-14, see Section 2.</p><p>As there is no reference in ColdFusion Administrator to hotfix numbers. Would ColdFusion version: 9,0,1,274733 mean Security Hotfix APSB11-14 has been applied?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739788">9</a> by Dan O&amp;aposKeefe
		posted on 3/16/2012 at 2:23 AM
		</div>
		<div class="comment_text"><p>@Chris, I tend to doubt it.</p><p>I am in the same boat and that is how I ended up here. Ray is right about the <a href="http://disq.us/url?url=http%3A%2F%2Fhackmysite.com%3AW50hJfuQUJSXbmvAgULnKTp1lR8&amp;cuid=3321886" rel="nofollow noopener" title="hackmysite.com">hackmysite.com</a> service. You need the paid version to get the HF status. Other than that, I think going back to CHF1 and looking at the changes required, download the update and compare file dates/times to the files on your server is the best way to go. Then do the same for CHF2.</p><p>CHF1      08/31/2010  cpsid_86263<br>CHF2      09/15/2011  cpsid_91836<br>APSB11-29 12/13/2011<br>APSB12-06 03/13/2012</p><p>I believe that is the way it lays out.<br>Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739796">10</a> by Eric Belair
		posted on 3/26/2012 at 9:52 PM
		</div>
		<div class="comment_text"><p>Running ColdFusion Version 8,0,1,195765. No idea what Cumulative Updates or Hotfixes are already applied. How should I proceed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739799">11</a> by Raymond Camden
		posted on 3/26/2012 at 10:06 PM
		</div>
		<div class="comment_text"><p>It should be visible if you hit the I in the upper right hand corner of the CF Admin. (The system info link.) There should be an update level.</p></div>
	</div>
</div>
		