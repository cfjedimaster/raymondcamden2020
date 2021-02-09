
<div class="comment" id="c_1713671603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671603">1</a> by Geoff
		posted on 9/11/2007 at 9:06 PM
		</div>
		<div class="comment_text"><p>There's a page somewhere on Adobe which showed the version numbers of all the coldfusion hotfixes etc, so you could look up "7,0,0,91690" and you'd know that was hotfix whatever, and you should therefore apply the latest patches.</p><p>Can anyone remember the url?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671606">2</a> by Geoff
		posted on 9/11/2007 at 9:06 PM
		</div>
		<div class="comment_text"><p>In answer to my own question:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fkb.adobe.com%2Fselfservice%2FviewContent.do%3FexternalId%3Dtn_18515%26sliceId%3D1%3AdcykQpN_F-F4J77a_AhY6tX8AgI&amp;cuid=3321886" rel="nofollow noopener" title="http://kb.adobe.com/selfservice/viewContent.do?externalId=tn_18515&amp;sliceId=1">http://kb.adobe.com/selfser...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671596">3</a> by Darth Sidious
		posted on 9/11/2007 at 10:07 PM
		</div>
		<div class="comment_text"><p>What's weird though is on the support center it shows 7.0.2 Hot Fix from Nov 2006 as "New". And not these new ones.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fsupport%2Fcoldfusion%2F%3Ai6tqRUUxag_ca1zx2OJqMFKiG8U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/support/coldfusion/">http://www.adobe.com/suppor...</a></p><p>And if you click on the Hotfixes available link:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fkb.adobe.com%2Fselfservice%2FviewContent.do%3FexternalId%3Dkb400074%26sliceId%3D2%3A8oaj0pz9cvZjrkHRxBygy_kWUJs&amp;cuid=3321886" rel="nofollow noopener" title="http://kb.adobe.com/selfservice/viewContent.do?externalId=kb400074&amp;sliceId=2">http://kb.adobe.com/selfser...</a></p><p>This is all CF7 related stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671601">4</a> by Justin Treher
		posted on 9/12/2007 at 6:26 AM
		</div>
		<div class="comment_text"><p>I applied the hotfix to my dev server and now the display tags won't work. I get a 500 error. Even all of the CF administrator pages fail to load. I have a fresh CF 8 install, but the hotfix on (IIS). I created a basic page with cflayout and I get:</p><p>500</p><p>ROOT CAUSE: <br>java.lang.NoSuchMethodError: coldfusion.filter.FusionContext.getSecureJSONPrefix()Ljava/lang/String;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671604">5</a> by Raymond Camden
		posted on 9/12/2007 at 6:29 AM
		</div>
		<div class="comment_text"><p>I haven't had a chance yet to try the fix - but I'd definitely recommend calling Adobe support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671598">6</a> by Justin
		posted on 9/12/2007 at 6:36 AM
		</div>
		<div class="comment_text"><p>I'm going to try to reinstall CF8. I had an issue previous to the hotfix with the display tags only running on the first try. It seemed like the connection to the CSS files was lost on reloads.</p><p>Example:<br>CfMenu works wonderfully the first page load. I hit the refresh button and it's like I turned off CSS.</p><p>I thought maybe the hotfix would correct this with the "User CSS Stylesheets: The ColdFusion stylesheets were not consistently imported prior to user specified stylesheets"., but now I've got nothing.</p><p>Perhaps there is some screwy CFIDE setting that is mixed up somewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671605">7</a> by Geoff
		posted on 9/12/2007 at 1:42 PM
		</div>
		<div class="comment_text"><p>I just applied the 7.02 hot fix 3, but my version number has remained at 7,0,2,142559.</p><p>Previously, the installation of an updater changed the last bit of the number. Apparently not with this release...</p><p>Anyone else applied this fix? Did your version number change?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671602">8</a> by Charles Sherman
		posted on 9/12/2007 at 9:51 PM
		</div>
		<div class="comment_text"><p>Fresh intall of CF 8 and things definately not right. The Some - strangely not all - of my apps have slowed to a crawl.</p><p>When I view the debug info, all the execution timesa re fine. Some sort of rendering issue?</p><p>Can't log into the CF admin site either - tell me my password is invalid. Yep - checked caplocks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671600">9</a> by Tariq Ahmed
		posted on 9/12/2007 at 10:14 PM
		</div>
		<div class="comment_text"><p>Hey Charles. How is your DB Driver set up? In CF7 we were using the Type of Other and calling the macromedia.jdbc.MacromediaDriver classFile, and we were having problems invoking it that way.</p><p>But in CF8 we found some funkiness and reverted back to the vanilla mechanism of using the Type of SQL Server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671611">10</a> by Charles Sherman
		posted on 9/13/2007 at 9:51 PM
		</div>
		<div class="comment_text"><p>I used the default setup so whatever driver is the default is what I've always used.</p><p>CF8 had been working up until the hotfix was applied.</p><p>I've uninstalled and reinstalled twice and the CF admin site was still taking a long time to come up and still telling me my password was incorrect.</p><p>Must be something in the registry that isn't being removed.</p><p>Anyhow, re-installed CF 7 to get myself up and running.</p></div>
	</div>
</div>
		