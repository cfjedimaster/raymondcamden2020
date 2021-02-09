
<div class="comment" id="c_1713733256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733256">1</a> by Patrick Heppler
		posted on 6/15/2011 at 11:48 AM
		</div>
		<div class="comment_text"><p>Just applied it. Was a pain in the ass on linux, because copy by default asks for every file to overwrite. Would be much easier if Adobe would provide zips which contain the whole CFIDE and WEB-INF, not only the updated files, so you could just delete / move the old folders and copy in the new ones. *hint*</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733252">2</a> by Julian Halliwell
		posted on 6/15/2011 at 12:29 PM
		</div>
		<div class="comment_text"><p>@Patrick, but that would surely assume those directories are in an identical state for everyone. What if you've customised the administrator, or decided not to apply previous patches? Only files that *need* to be updated should be.</p><p>I agree though that these hotfixes involving changes to the CFIDE folder are a royal pain to install. 14 steps no less.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733242">3</a> by Patrick Heppler
		posted on 6/15/2011 at 3:14 PM
		</div>
		<div class="comment_text"><p>@Julian, yeah it's a problem if you have customized the admin, like i did with spoolmail and cftracker.</p><p>14 steps right, but with cp -pr CFIDE-901/* {WEBROOT}/CFIDE/ you need to type "y" and press enter for every single file to get it overwritten!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733258">4</a> by DJ
		posted on 6/15/2011 at 7:23 PM
		</div>
		<div class="comment_text"><p>Just put the fix in on a windows 2008 server and now can't get to the administrator interface :( CF is working as I've tested a website on it, but no administrator. I get an alternating Service Unavailable and then a 500 error. Any hints?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733253">5</a> by DJ
		posted on 6/15/2011 at 7:55 PM
		</div>
		<div class="comment_text"><p>Wow! Be VERY careful when reading those instructions! Step 6 tells you to go look for hf901-00001.jar and delete if found... you get a bit excited and find a file that appears to be that name and you delete it... administrator won't work. I deleted hf901-00002.jar, the new jar file. Stopped CF services, restored the file (damn good thing I didn't shift delete) and started up again. Tadah!</p><p>Maybe my mistake will save someone else some trouble :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733255">6</a> by Chris Bowyer
		posted on 6/16/2011 at 1:25 AM
		</div>
		<div class="comment_text"><p>Yes. A bit of a nail biting experience, but the instructions are good. Just one question. A fellow developer I know, said he saw no need to update his local developer copy. I did mine anyway, but what do you think?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733259">7</a> by Julian Halliwell
		posted on 6/16/2011 at 12:23 PM
		</div>
		<div class="comment_text"><p>@Chris, I *always* update my developer installation, and I do it *first*, for several reasons:<br>1) I like to keep my dev environment as similar as possible to production.<br>2) I like to test updates before rolling them out (sometimes the initial release is buggy).<br>3) It gives me practice in deploying the patch. Especially with so many steps, I find it really helps if I've already been through the process once before in a non-production environment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733267">8</a> by Jorge Asch
		posted on 6/16/2011 at 7:41 PM
		</div>
		<div class="comment_text"><p>They should test these out more carefully before releasing. Server keeps crashing everytime these a database exception.</p><p>"Could not find the included template udf.cfm." on WEB-INF\exception\details.cfm</p><p>Of course, there's no udf.cfm on the directory... (it's somewhere on the CFIDE path).</p><p>Previous details.cfm, didn't have this requirement...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733268">9</a> by Raymond Camden
		posted on 6/16/2011 at 7:43 PM
		</div>
		<div class="comment_text"><p>As just an FYI - please be sure you ping Adobe support with these issues. I want to help - but I probably can't help - on this issue. (I don't mind you guys posting - please do - cuz it can help others - just making sure it's clear for 'real' support, you need to ping Adobe.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733279">10</a> by Chris Bowyer
		posted on 6/17/2011 at 12:47 AM
		</div>
		<div class="comment_text"><p>@Julian</p><p>Thanks for the feedback. All very good points</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733273">11</a> by Julian Halliwell
		posted on 6/17/2011 at 11:11 AM
		</div>
		<div class="comment_text"><p>@Jorge. Which version of the patch are you using? With the CF9.0.1 version I've installed the udf.cfm template is there in the WEB-INF\exception folder and I'm having no problems with database or other exceptions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733280">12</a> by Mark Andrachek
		posted on 6/17/2011 at 10:49 PM
		</div>
		<div class="comment_text"><p>@Patrick that's what -f or --reply=yes is for.</p><p>This security patch, and the one just before it, break the undocumented and unofficial ability to get a datasource from the datasourceservice without using the adminapi.</p><p>I don't like the adminapi. First, using if from Java is a pain. Second, the security is not fine grained enough for my liking. I don't really like these services being open either.</p><p>But I do like being able to get a connection from a coldfusion datasource from java, running inside of a cf page. Guess I'm going to be stuck with using the admin api, converting my datasource to JNDI, or using an external definition and custom connection pool. *SIGH*.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733241">13</a> by Benoit HEDIARD
		posted on 6/27/2011 at 3:09 PM
		</div>
		<div class="comment_text"><p>We applied this HotFix yesterday. Since then, we get plenty of "Session is invalid" errors...<br>Our config is very common :<br>- J2EE Session enabled,<br>- Max timeout and default timeout to 30 minutes (= max time-out in Web.xml)<br>- ClientCookies disabled.</p><p>Anyone having a similar issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733243">14</a> by Marc
		posted on 6/27/2011 at 11:05 PM
		</div>
		<div class="comment_text"><p>The hot fix page <a href="http://disq.us/url?url=http%3A%2F%2Fkb2.adobe.com%2Fcps%2F907%2Fcpsid_90784.html%3AzDEtVMztfL115cmj8Y8RfcgvIY8&amp;cuid=3321886" rel="nofollow noopener" title="http://kb2.adobe.com/cps/907/cpsid_90784.html">http://kb2.adobe.com/cps/90...</a> now says it was last updated on 2011-06-25.<br>Their server also now reports a last modified date of 6/25/2011 for both CF 8.0.1 zip files and both CF 9.0.1 zip files</p><p>I don't know what actually changed</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733247">15</a> by Raymond Camden
		posted on 6/27/2011 at 11:09 PM
		</div>
		<div class="comment_text"><p>I will try to find out what was changed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733244">16</a> by Benoit HEDIARD
		posted on 6/28/2011 at 12:58 AM
		</div>
		<div class="comment_text"><p>FYI, I found this interesting comment from Mike Collins on ColdFusion Bug Tracker : <a href="http://disq.us/url?url=http%3A%2F%2Fwww.elliottsprehn.com%2Fcfbugs%2Fbugs%2F83514%23comments%3Atnkr-fa_NglBcYuM5hYxXyrlBAY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.elliottsprehn.com/cfbugs/bugs/83514#comments">http://www.elliottsprehn.co...</a>.<br>He suggests to add a "reuseInvalidatedIds" parameter in jrun.xml config files as a temporary workaround.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733245">17</a> by Geoff
		posted on 7/4/2011 at 2:42 PM
		</div>
		<div class="comment_text"><p>I just applied the patch, but my version number in CF admin has remained unchanged... Still on 9,0,1,274733 with update level /D:/ColdFusion9/lib/updates/hf901-00001.jar</p><p>Can anyone else who's applied the update let me know if their version number changed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733248">18</a> by Benoit HEDIARD
		posted on 7/4/2011 at 2:48 PM
		</div>
		<div class="comment_text"><p>I think the version number didn't change (as far as I can remember) but the update level did (to hf901-00002.jar). Are you sure you have removed hf901-00001.jar?</p><p>On our production servers, we have removed this hot fix 2 to revert to hot fix 1 and the "Session is invalid" is gone...<br>I hope you will not face this issue as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733250">19</a> by Chris Bowyer
		posted on 7/4/2011 at 6:36 PM
		</div>
		<div class="comment_text"><p>@Geoff</p><p>I'm not sure if my Version changed, but my Update Level did...</p><p>Version: 9,0,1,274733<br>Update Level: /C:/ColdFusion9/lib/updates/hf901-00002.jar</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733249">20</a> by Julian Halliwell
		posted on 7/20/2011 at 6:10 PM
		</div>
		<div class="comment_text"><p>FYI: An update to the HotFix has just been published fixing certain issues:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fkb2.adobe.com%2Fcps%2F907%2Fcpsid_90784.html%3AzDEtVMztfL115cmj8Y8RfcgvIY8&amp;cuid=3321886" rel="nofollow noopener" title="http://kb2.adobe.com/cps/907/cpsid_90784.html">http://kb2.adobe.com/cps/90...</a></p></div>
	</div>
</div>
		