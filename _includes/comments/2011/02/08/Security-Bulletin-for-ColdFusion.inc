
<div class="comment" id="c_1713729428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729428">1</a> by Saul
		posted on 2/9/2011 at 1:43 PM
		</div>
		<div class="comment_text"><p>Isn't it about time they worked out an easier patch routine. The instructions on the tech notes make my head hurt ..</p><p>"Note: <a href="http://disq.us/url?url=http%3A%2F%2FCFIDE.zip%3A6gYwJxZG5HEEQACGJAM1ZsJdifQ&amp;cuid=3321886" rel="nofollow noopener" title="CFIDE.zip">CFIDE.zip</a> and <a href="http://disq.us/url?url=http%3A%2F%2FWEB-INF.zip%3AEFFlWwzuELTqi7M7n8UbUI_S90I&amp;cuid=3321886" rel="nofollow noopener" title="WEB-INF.zip">WEB-INF.zip</a> included in the hotfix contains only part of the CFIDE and WEB-INF files. Do not rename present CFIDE or WEB-INF folders to create a backup as per the instructions. "</p><p>then later on ...</p><p>"Go to {CFIDE-HOME} and make a backup of CFIDE folder."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729429">2</a> by Raymond Camden
		posted on 2/9/2011 at 8:13 PM
		</div>
		<div class="comment_text"><p>I agree. I'd love to see updated builds - at least for the latest CF. I'd like one CF901 that had the CHF + Security all rolled in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729430">3</a> by John Walker
		posted on 2/9/2011 at 8:25 PM
		</div>
		<div class="comment_text"><p>Unzipping sub-directories and copying files, you have to be kidding.  I did it, but why not an executable installer that did the backups and file copies?  I liked the addition of the uploading of the update JAR, but they need to come up with something better for these file updates, very poor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729432">4</a> by Joshua Miller
		posted on 2/10/2011 at 3:57 AM
		</div>
		<div class="comment_text"><p>Did anyone else notice that after the patch was applied that some significant session issues arose?</p><p>If you have a directory such as: /somedirectory/ that has an Application.cfm file, then have another directory such as: /somedirectory/child/ that also has an Application.cfm file and both Application.cfm files enable session management (with different application names of course), when you create a session under /somedirectory/child and then open a new window or tab pointing to /somedirectory your session under /somedirectory/child is destroyed.</p><p>If you access a site on the same server under /anotherdirectory there are no problems, but session instances in a nested directory structure appear to be overriding one another regardless of application name.</p><p>I confirmed this after installing the hotfix on eight different servers. As soon as I rolled-back the hotfix, the problem went away on all eight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729431">5</a> by Raymond Camden
		posted on 2/10/2011 at 4:05 AM
		</div>
		<div class="comment_text"><p>I haven't had a chance to test this Joshua but I've shared it with other Adobe CF ACPs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729433">6</a> by Nigauw
		posted on 2/11/2011 at 12:38 AM
		</div>
		<div class="comment_text"><p>We are also experiencing this same problem: all our sites that are relying on more than one application per domain are now completely broken! <br>It seems unbelievable that nobody at Adobe noticed a bug this big before releasing such an important Security Hotfix...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729434">7</a> by Nigauw
		posted on 2/11/2011 at 5:50 PM
		</div>
		<div class="comment_text"><p>FYI, Shilpi posted a possible workaround on her blog here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fshilpikm.blogspot.com%2F2011%2F02%2Fsecurity-hot-fix-update-for-coldfusion.html%3FshowComment%3D1297350787138%23c7058338210955466758%3AoqpMBdOhjIpjBqwZKRHHsjHcI_0&amp;cuid=3321886" rel="nofollow noopener" title="http://shilpikm.blogspot.com/2011/02/security-hot-fix-update-for-coldfusion.html?showComment=1297350787138#c7058338210955466758">http://shilpikm.blogspot.co...</a><br>The idea is to explicitely create the CFID and CFTOKEN in the directories that are using another cfapplication in order to "scope by path" the session. <br>I'll give this approach a try and post my findings here soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729437">8</a> by Raymond Camden
		posted on 2/11/2011 at 5:52 PM
		</div>
		<div class="comment_text"><p>Thanks for posting this Nigauw.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729441">9</a> by Nigauw
		posted on 2/11/2011 at 7:35 PM
		</div>
		<div class="comment_text"><p>OK, I tried Shilpi's idea and it seems to work now!</p><p>I've set up a test where two folders have their own Application.cfc, with the following:</p><p>&lt;cfscript&gt;<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> = "#cgi.path_info#"; //this makes the app name unique<br>	this.applicationTimeout = createTimeSpan(0,1,0,0);<br>	this.clientmanagement= true;<br>	this.loginstorage = "session" ;<br>	this.sessionmanagement = true;<br>	this.sessiontimeout = createTimeSpan(0,1,0,0);<br>	this.setClientCookies = true;<br>	this.setDomainCookies = false;<br>	this.scriptProtect = "all";    <br>&lt;/cfscript&gt;</p><p>&lt;cffunction name="onSessionStart" output="false"&gt; <br>	&lt;cfcookie name="CFID" value="#SESSION.CFID#" domain=".#cgi.http_host#" path="#listDeleteAt(cgi.path_info,listLen(cgi.path_info,'/'),'/')#"&gt;<br>	&lt;cfcookie name="CFTOKEN" value="#SESSION.CFTOKEN#" domain=".#cgi.http_host#" path="#listDeleteAt(cgi.path_info,listLen(cgi.path_info,'/'),'/')#"&gt;<br>&lt;/cffunction&gt;</p><p>When you hit a page in folder_1 and then reload that same page, the SESSION.CFID and SESSION.CFTOKEN remain stable. <br>The you hit a page in folder_2 and you get a new CFID and CFTOKEN for that second application.<br>If you go back to folder_1 and reload your page, the original session vars are still there.<br>So far, so good.</p><p>Important note: this ties an application to its root folder: if you try to access the session variables of that application from another folder or from a subfolder, it won't work.</p><p>What a mess... This new behavior/bug introduced by the hotfix breaks code that had been running untouched for close to ten years, as well as code written last month.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729438">10</a> by Frank
		posted on 2/15/2011 at 11:28 PM
		</div>
		<div class="comment_text"><p>Does anyone's Server Monitor work after applying this fix?  Ours doesn't.  It looks like there is also a new option for Monitoring Settings that was added as well, which also errors out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729440">11</a> by Julian Halliwell
		posted on 2/16/2011 at 9:35 PM
		</div>
		<div class="comment_text"><p>We've been forced to roll back this hotfix as it's caused too much trouble. Details on Shilip's blog: <a href="http://disq.us/url?url=http%3A%2F%2Fshilpikm.blogspot.com%2F2011%2F02%2Fsecurity-hot-fix-update-for-coldfusion.html%23c4538633275255885015%3A9E01022kaFrzgu70ePhsZPZRuyk&amp;cuid=3321886" rel="nofollow noopener" title="http://shilpikm.blogspot.com/2011/02/security-hot-fix-update-for-coldfusion.html#c4538633275255885015">http://shilpikm.blogspot.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729442">12</a> by Marc
		posted on 2/17/2011 at 10:54 PM
		</div>
		<div class="comment_text"><p>The hotfix page <a href="http://disq.us/url?url=http%3A%2F%2Fkb2.adobe.com%2Fcps%2F890%2Fcpsid_89094.html%3Aro0y7fqTbBEpSc95Zcov9Qza-eg&amp;cuid=3321886" rel="nofollow noopener" title="http://kb2.adobe.com/cps/890/cpsid_89094.html">http://kb2.adobe.com/cps/89...</a> says it was updated on 2011-2-16. The last modified date for the <a href="http://disq.us/url?url=http%3A%2F%2FCF801.zip%3Av2Jk3BlE6i198-Jvv-CbZtKVitc&amp;cuid=3321886" rel="nofollow noopener" title="CF801.zip">CF801.zip</a> and <a href="http://disq.us/url?url=http%3A%2F%2FCF901.zip%3AolVW9HEAO5rSMb8t6hLRDsYX_pM&amp;cuid=3321886" rel="nofollow noopener" title="CF901.zip">CF901.zip</a> files is now 2/16/2011 6:37 PM PST. Does anyone know what changed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729445">13</a> by Raymond Camden
		posted on 2/17/2011 at 11:02 PM
		</div>
		<div class="comment_text"><p>I've asked on a private list if we can get clarification.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729444">14</a> by Steve Moore
		posted on 2/25/2011 at 4:00 AM
		</div>
		<div class="comment_text"><p>We too have rolled back this update because of the session issue. If it wasn't for the comments on this blog, I wouldn't have known what the heck was going on, except that the fix broke my apps. Now my question is: Assuming there is a CF 9.0.2 or something, are these fixes going to be in that, meaning I won't be able to update without implementing the work-around mentioned here for every app on my server? Guess I should start now...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729447">15</a> by Nigauw
		posted on 2/25/2011 at 12:55 PM
		</div>
		<div class="comment_text"><p>Marc, Ray: any idea if the recently updated modification date means the bug-within-the-corrective-patch has been recognized and fixed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729448">16</a> by Raymond Camden
		posted on 2/25/2011 at 5:11 PM
		</div>
		<div class="comment_text"><p>I've yet to get official word. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729450">17</a> by Raymond Camden
		posted on 2/25/2011 at 5:50 PM
		</div>
		<div class="comment_text"><p>Official word  it was just a minor edit in instructions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729454">18</a> by Nigauw
		posted on 2/25/2011 at 5:54 PM
		</div>
		<div class="comment_text"><p>OK, good to know - thanks.<br>Do you think we can assume that the problem is acknowledged and someone's working on it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729455">19</a> by Raymond Camden
		posted on 2/25/2011 at 5:55 PM
		</div>
		<div class="comment_text"><p>No - you need to ensure you log a bug and if you have a support plan I'd call it in. Be the squeaky wheel.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729457">20</a> by Raymond Camden
		posted on 2/25/2011 at 5:56 PM
		</div>
		<div class="comment_text"><p>Although wait - it looks to me like this was a session fixation issue and it is fixed now. I can see how it breaks apps - but if it closes up a security hole then isn't it better it is fixed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729456">21</a> by Julian Halliwell
		posted on 2/25/2011 at 6:09 PM
		</div>
		<div class="comment_text"><p>@Ray, not if it means our users can't log in because the fix is causing their sessions (CFID/TOKENs) to be lost between requests. And yes we have changed to cookies to domain cookies where necessary (not all our domains have multiple apps), and it made no difference: sessions were being intermittently lost. Rolling back the hotfix stopped the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729458">22</a> by Raymond Camden
		posted on 2/25/2011 at 6:18 PM
		</div>
		<div class="comment_text"><p>Ok - then best I can suggest is what I said before - raise it with Adobe Support "officially".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729459">23</a> by Julian Halliwell
		posted on 2/25/2011 at 8:57 PM
		</div>
		<div class="comment_text"><p>You're right, Raymond, should have done so before.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D86494%3AYIzJ4lfAE2Jykzyc-gvgHyQwLg0&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=86494">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729463">24</a> by Dav
		posted on 3/1/2011 at 9:15 PM
		</div>
		<div class="comment_text"><p>Oddly, we found that enabling J2EE sessions fixed the session 'n' application name exclusivity issue caused by this patch</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729462">25</a> by Mike Thomas
		posted on 3/8/2011 at 12:35 AM
		</div>
		<div class="comment_text"><p>We applied the HOTFIX in questions and when NESSUS ran its regular scheduled programming, we receivied an errror.  NESSES tried to navigate to:  \CFIDE\wizards\common\_logintowizard.cfm page.</p><p>The following is a snippt from the error message:  Element ESAPIUTILS is undefined in a Java object of type class [Ljava.lang.String;. <br>The error occurred on line 55.</p><p>Anyone else out there with this one?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729460">26</a> by Raymond Camden
		posted on 3/8/2011 at 12:55 AM
		</div>
		<div class="comment_text"><p>@Mike: Isn't that a bug you can ignore?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729461">27</a> by Michael Kane
		posted on 3/8/2011 at 5:04 AM
		</div>
		<div class="comment_text"><p>Glad I decided to google ESAPIUTILS, and found this discussion. I got a site-wide exception notice with the same error as Mike Thomas noted. It was on our DMZ server, so it worried me. Even more so when I noticed the cfdump of Error.TagContext that my site-wide handler includes. The first item had ?? as the value for ID, and the path for TEMPLATE is C:\work\ColdFusion\cf9_u1_final_hotfix\cfusion\wwwroot\CFIDE\administrator\styles.cfm:55</p><p>There is no c:\work on my server. I would like to know how that could be. In the meantime, I decided to remove the wizards folder altogether. What is it needed for?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729465">28</a> by Michael Brennan-White
		posted on 3/8/2011 at 8:44 PM
		</div>
		<div class="comment_text"><p>I ran the hotfix for v8.01 on my dev machine and everything seems to be working without a problem, but what should the version number be now.  On my dev box the version number is 8,0,1,195765.  My production box (not updated yet) has the same version number.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729466">29</a> by Marc
		posted on 3/8/2011 at 11:33 PM
		</div>
		<div class="comment_text"><p>I just saw on <a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F787.cfm%3AvzZtkt6O8t1it9gDk-oKPBLA-c0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/787.cfm">http://www.petefreitag.com/...</a> that the hotfix has been updated today with fixes and everyone should reapply it! Also Shilpi from the Coldfusion team has posted a blog entry about it <a href="http://disq.us/url?url=http%3A%2F%2Fshilpikm.blogspot.com%2F2011%2F03%2Fupdate-on-security-hot-fix-feb-2011.html%3AhLntMSRzb4O5SkzZPHN2dKHi8_I&amp;cuid=3321886" rel="nofollow noopener" title="http://shilpikm.blogspot.com/2011/03/update-on-security-hot-fix-feb-2011.html">http://shilpikm.blogspot.co...</a></p><p>I'm guessing the reason they added the option to completely turn off the fix for Session Fixation is just in case any other unexpected problems show up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729467">30</a> by Julian Halliwell
		posted on 3/9/2011 at 7:27 PM
		</div>
		<div class="comment_text"><p>The updated HotFix still doesn't work for us: clients started losing sessions again as soon as we applied it. But using the new JVM switch to turn off the Session Fixation part of the fix did correct it, which means we don't have to roll back the whole HF. But it still means that particular vulnerability is unpatched.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729468">31</a> by Jay McEntire
		posted on 3/9/2011 at 10:31 PM
		</div>
		<div class="comment_text"><p>I can also confirm that this problem still exists.  Here is the following way I was able to reproduce the problem:</p><p>I am using Application.cfm on CF 8 and have the following code in that file:</p><p>	&lt;cfapplication<br>		...<br>		applicationtimeout="#CreateTimeSpan(2,0,0,0)#"<br>		clientmanagement="false"<br>		sessionmanagement="true"<br>		sessiontimeout="#CreateTimeSpan(0,1,0,0)#"<br>		setclientcookies="false"<br>		setdomaincookies="false"<br>		scriptprotect="URL,CGI,COOKIE"&gt;</p><p>        &lt;!--- set more secure cookie handeling ---&gt;<br>	&lt;cfif NOT IsDefined("COOKIE.CFID") OR NOT IsDefined("COOKIE.CFTOKEN")&gt;<br>		&lt;cfheader name="Set-Cookie" value="CFID=#SESSION.CFID#;path=/;HTTPOnly"&gt;<br>		&lt;cfheader name="Set-Cookie" value="CFTOKEN=#SESSION.CFTOKEN#;path=/;HTTPOnly"&gt;<br>	&lt;/cfif&gt;</p><p>We do this to protect our session cookies as per: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F764.cfm%3AMFXHTjlCM_qRjBN5U1dMMcPycOk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/764.cfm">http://www.petefreitag.com/...</a></p><p>When i persons session times-out, I this bug still happens and they can't login without having to delete their cookies from their browser.</p><p>-J</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729471">32</a> by Jay McEntire
		posted on 3/9/2011 at 10:36 PM
		</div>
		<div class="comment_text"><p>To follow up on my previous post, It appears that it works fine if you have clientcookies=true, but of you set that yo false and manually set the CFIF and CFTOKEN cookies, then thats where there are issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729470">33</a> by Shilpi
		posted on 3/10/2011 at 12:42 PM
		</div>
		<div class="comment_text"><p>Hi Jay,</p><p>This is because of the following -</p><p>1. You have set setClientCookies=false<br>2. In the code to set Cookies, you have following condition -</p><p>&lt;cfif NOT IsDefined("COOKIE.CFID") OR NOT IsDefined("COOKIE.CFTOKEN")&gt;</p><p>Now if users don't delete the old cookies and with the above condition, old Cookie value will always be found and if ColdFusion does not find an active session for this request, it will start a new one. However these new values are never set to Cookies.</p><p>You can probably change the check before settings the cookies to match the value from Cookie and Session. If the values don't match, then you reset the cookie as well.</p><p>Hope this helps.</p><p>Shilpi<br>ColdFusion Team</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729473">34</a> by Julian Halliwell
		posted on 3/14/2011 at 2:36 PM
		</div>
		<div class="comment_text"><p>Happy to report we've identified the problem and the Hotfix is now working for us. In a nutshell: CF will no longer use existing CFID/CFTOKEN cookies when creating new sessions.</p><p>I've written up the problem and solution at <a href="http://disq.us/url?url=http%3A%2F%2Fcfsimplicity.com%2F4%2Fcoldfusion-security-hotfix-changes-session-behaviour%3AKeW5xrEySnVg1of5_3h6E_QdFC4&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsimplicity.com/4/coldfusion-security-hotfix-changes-session-behaviour">http://cfsimplicity.com/4/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729472">35</a> by Ryan
		posted on 3/18/2011 at 8:54 PM
		</div>
		<div class="comment_text"><p>We are getting the following when trying to get to the cfadmin url. this is on CF 8.0. We've reapplied the hot fix, and it was the the most recent. Any insight into how to get this fixed? Getting the same issue on certain sites when trying to login to secured areas.</p><p>java.lang.NoClassDefFoundError: Could not initialize class coldfusion.security.ESAPIUtils</p><p>@Michael Kane - were you able to find a fix for your cf9 box?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729474">36</a> by Michael Kane
		posted on 3/24/2011 at 1:16 AM
		</div>
		<div class="comment_text"><p>Ryan, I have not learned much more about the ESAPIUtils error, or why my server said it came from a template in a path that has never existed on that server. But it was more or less moot, because I removed the wizards folder altogether. I haven't found out what that folder is needed for, either. But it seems unnecessary and undesirable to have on a production server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729476">37</a> by Lisa Walker
		posted on 8/6/2011 at 9:54 PM
		</div>
		<div class="comment_text"><p>I am attempting to run the 8.0.1 updater for my Cf installation.  <br>After the update (multiserver) occurs, websites seem to work fine, but I am unable to get to the cf administrator interface.<br>Just a blank screen shows up.<br>When I view source on the blank page, I see this root cause listed:  applet error.<br>Element ESAPIUTILS is undefined in a Java object of type class<br>If anyone has any assistance they can offer, please let me know.  I need to get this update and subsequent hot fixes in place before 8/19 (pci check).<br>The 8.0.0 security hot fix broke my cfgrid from displaying correctly.  Worked great before that.<br>current update level I'm at:<br>Update Level  /C:/JRun4/servers/cfusion/cfusion-ear/cfusion-war/WEB-INF/cfusion/lib/updates/hf800-00002.jar</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729475">38</a> by Raymond Camden
		posted on 8/8/2011 at 1:06 AM
		</div>
		<div class="comment_text"><p>Lisa - don't have a solution for you - you try Adobe support yet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729479">39</a> by Lisa Walker
		posted on 8/8/2011 at 3:39 PM
		</div>
		<div class="comment_text"><p>Yes, posted there also, waiting on some type of response.<br>As several people posted here, the documentation is lacking a bit.  Would be nice if they would just create an upgrade file that really did the upgrade.<br>I have a cf8 installation, but see at this post, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.forta.com%2Fblog%2Findex.cfm%2F2011%2F6%2F14%2FColdFusion-Security-Hotfix-Posted%3AapxGWKkdVUez0BQHXN_madrb1H8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.forta.com/blog/index.cfm/2011/6/14/ColdFusion-Security-Hotfix-Posted">http://www.forta.com/blog/i...</a>,<br>that even on cf9 installations, the hot fixes busted up the admin interface.<br>thanks for the response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729477">40</a> by Raymond Camden
		posted on 8/8/2011 at 4:04 PM
		</div>
		<div class="comment_text"><p>As has been announced, future versions of ColdFusion is going to make this a LOT easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729478">41</a> by Paul
		posted on 8/8/2011 at 9:18 PM
		</div>
		<div class="comment_text"><p>I have the same problem. This security update has totally broken the admin interface on a vanilla CF 8.0.1 install.<br>java.lang.ClassNotFoundException: coldfusion.security.ESAPIUtils</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729480">42</a> by Lisa Walker
		posted on 8/8/2011 at 9:28 PM
		</div>
		<div class="comment_text"><p>Thanks ray, but future versions cost upgrade money and unfortunately, in this economy, we're not spending that amount of money.<br>Really, adobe should fix this with these 2 existing versions since they have downloads for them.<br>The only reason I am trying to do the upgrade is for security fixes.  The last one I applied for 8.0.0 broke by cfgrid cfcs.<br>This fix is in the 8.0.1 hotfix 1, which I cannot apply to an 8.0.0 installation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729481">43</a> by Raymond Camden
		posted on 8/8/2011 at 10:07 PM
		</div>
		<div class="comment_text"><p>@Lisa: I do agree, it could be better. Just saying it's (eventually) going to get there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729585">44</a> by James Morrow
		posted on 8/11/2011 at 7:54 AM
		</div>
		<div class="comment_text"><p>Count me in as another poor fool trusting this hotfix.</p><p>"ESAPIUTILS is undefined in a Java object" etc., breaking the cf admin interface.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729592">45</a> by Shilpi
		posted on 8/12/2011 at 1:02 PM
		</div>
		<div class="comment_text"><p>Hi Lisa,Paul,James,</p><p>Can you please confirm at what location the hf jar is placed and   also in "&lt;cfserver-home&gt;/lib/updates" which all files are present?</p><p>We at not seeing this error at our end.</p><p>Thanks &amp; Regards,<br>Shilpi</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729598">46</a> by James Morrow
		posted on 8/13/2011 at 4:02 AM
		</div>
		<div class="comment_text"><p>@Shilpi:</p><p>It appears to have resulted from installing multiple hotfixes in an incorrect order.  Specifically, installing the hf801-1878.jar or hf801-1875.jar _after_ the hf801-00002.jar had already been installed.</p><p>I was doing a wave of hotfixes this week for a PCI compliance process, and it wasn't immediately obvious to me that there was an order dependency.  Once I had a chance to think about it a bit more, it seemed relatively obvious that there was a conflict between updates; additional evidence was provided when I re-read the release notes for hf801-00002 and noticed the list of jars to remove.</p><p>I think hf801-1875.jar should probably be added to that list of jars to remove, although I didn't absolutely confirm it; I've done enough experimenting in that environment for this week.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729599">47</a> by Shilpi
		posted on 8/16/2011 at 10:09 AM
		</div>
		<div class="comment_text"><p>Thanks a lot for confirming James. We will verify this on our end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729607">48</a> by Teresa
		posted on 12/14/2011 at 7:37 PM
		</div>
		<div class="comment_text"><p>I applied Hofix 2 for coldfusion 9.0.1 and am receiving the "Class not found: coldfusion.security.ESAPIUtils" error when trying to launch CF administrator.  It appears coldfusion itself is working...but I can't launch the cf administrator. Any ideas?  I've rolled back and reinstalled 3 times with the same results each time. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729603">49</a> by Raymond Camden
		posted on 12/14/2011 at 8:29 PM
		</div>
		<div class="comment_text"><p>I thought this had been corrected. Your quickest bet is to call Support. I'm checking internally. I see a set of comments from folks when this first came out, which is why I thought it had been corrected already.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729589">50</a> by Raymond Camden
		posted on 12/14/2011 at 8:30 PM
		</div>
		<div class="comment_text"><p>Teresa, actually, look at the comments above from James. That could be it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729602">51</a> by Michael Kane
		posted on 12/14/2011 at 8:34 PM
		</div>
		<div class="comment_text"><p>Ray, I wish there was more clarity about the hotfixes. Actually, make that the entire install/update process. I upgraded a production CF 8 server a few days ago, and had major problems. It seems that Hotfix 2 broke the install. I had to completely uninstall CF, then install 9.0.0, update to 9.0.1, and left it there until I get time to figure out the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729595">52</a> by Teresa
		posted on 12/14/2011 at 9:50 PM
		</div>
		<div class="comment_text"><p>Argh!  User error!!! I thought I was working in CF 9.0.1 but as it turns out my version was CF 9.0. The sad part is I even looked at the version in cf admin. I guess my brain expected to see 9.0.1.</p><p>No disaster here!<br>--Teresa</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729593">53</a> by Jules
		posted on 1/6/2012 at 11:54 PM
		</div>
		<div class="comment_text"><p>Same problem here with losing access to the Administrator after simple upgrade to 8.0.1 from Coldfusion 8.  Coldfusion pages are still loading and working nicely. Has anyone solved this yet?  The only hotfix I have applied is hf800-00002.jar which was applied prior to the upgrade.  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729590">54</a> by Jon Cavanaugh
		posted on 1/17/2012 at 11:42 PM
		</div>
		<div class="comment_text"><p>We have a multi-instance server with this issue happening occasionally. When the ESAPIUtils error occurs it seems that stopping any running instances and waiting for 10-20 seconds after the instances are stopped, then starting them resolves this issue, however temporarily. I've opened a case with Adobe Support, I hope our temp solution helps someone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729605">55</a> by Gerry Gurevich
		posted on 1/31/2012 at 7:49 PM
		</div>
		<div class="comment_text"><p>I had the same CF Admin blank screen and in the console found that I had the  "Element ESAPIUTILS is undefined" error.</p><p>Before this 9.0.1 updater we also had this problem.  Someone had fouled up the hotfixes from 9.0 and I reapplied them in the correct order and it was fixed.</p><p>After the 9.0.1 updater, the problem resurfaced.  So I applied ColdFusion 9.0.1 Cumulative Hotfix 2 (CHF2).</p><p>Note that you can skip steps 2-5 in the hotfix instructions and just drop the hotfix jar file directly into  {ColdFusion-Home}/lib/updates folder.  If you have the admin blank screen problem, you don't really have a choice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729591">56</a> by Mike Ritchie
		posted on 2/15/2012 at 12:16 PM
		</div>
		<div class="comment_text"><p>Just updated CF9 multiserver to CF9.0.1 and then applied Hotfix 2. Pretty sure I did it in the right order, but now like other users, my CF Administrator shows just a blank screen. Unlike other users, viewing the source of the page shows nothing. One thing I didn't do though, I didn't restart CF before applying the Hotfix, since I knew I needed both I just downloaded and applied them one after the other then followed the rest of the instructions in the Hotfix text.</p><p>I've tried deleting the jar from the updates folder as suggested, but it hasn't done anything that I can see. Any suggestions would be appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729594">57</a> by Mike Ritchie
		posted on 2/15/2012 at 12:18 PM
		</div>
		<div class="comment_text"><p>Viewed the response headers in Firebug, it shows 500 Instantiation Exception. So it looks like it might be the same thing. I'll keep trying</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729601">58</a> by Jon Cavanaugh
		posted on 2/15/2012 at 10:56 PM
		</div>
		<div class="comment_text"><p>@Mike Do you have any other files in the updates folder? If so provide that list, if not then I would suggest trying to re-apply the hotfix step-by-step.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729596">59</a> by Mike Ritchie
		posted on 2/15/2012 at 11:26 PM
		</div>
		<div class="comment_text"><p>Hi Jon, apart from the patch file from hotfix #2, I have the ColdFusion_update_901_WWEJ_linux64.bin file from the update to 9.0.1. I've identified the error to being the "missing" ESAPI class. I added [cf_root]/lib to the class paths in jvm.config, thinking that might have been it, but it still throws the error. I did notice that the esapi jar file ends with _rc10.jar, which means to me that it's a release candidate and not the final file. Is it possible that that file needs to be renamed?</p><p>Thanks for the feedback</p><p>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729604">60</a> by cheryl gross
		posted on 2/17/2012 at 2:46 AM
		</div>
		<div class="comment_text"><p>I have updated 1 of 4 Cold Fusion 9.0.1 servers and now I have a blank administrator page.  other .cfm's will work but the administrator/index.cfm page will not work.  I am getting a blank screen instead of a login screen. In the application.log I'm getting Element ESAPIUTILS is undefined in a java object</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729600">61</a> by Charlie Arehart
		posted on 5/13/2012 at 5:21 AM
		</div>
		<div class="comment_text"><p>Just want to throw out a lifeline to all the people reporting that things broke once they applied one of the hotfixes (notice that different people are reporting the same or different problems after applying different hotfixes).</p><p>In my experience (providing CF support to folks as an independent consultant), most such problems are caused by one of 3 mistakes that can be easily made while applying hotfixes. I don't say this to embarrass anyone, but just to say it's not hard to make the mistakes.</p><p>I discuss them in more detail here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.carehart.org%2Fblog%2Fclient%2Findex.cfm%2F2011%2F10%2F21%2Fwhy_chfs_may_break%3Ap5D6mdeNCkH8BxydoFINYw2zJLU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.carehart.org/blog/client/index.cfm/2011/10/21/why_chfs_may_break">http://www.carehart.org/blo...</a></p><p>But certainly if anyone has a different solution they may have found to resolve the problems, many will certainly want to hear.</p><p>Hope that's helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729597">62</a> by Alex Purice
		posted on 9/25/2013 at 12:24 AM
		</div>
		<div class="comment_text"><p>I recently applied CF 9.0.1 Update 4 and this issue started to bite my neck. I thought it was a bug introduced by Adobe, but apparently it is a feature.</p><p>Be aware that if you mix client and session variables in the same app and "protectfixation" is ON, you lose client variables (because ColdFusion server reissues new CFID and CFTOKEN), which otherwise you believe will stay there forever.</p><p>Thanks.<br>Alex.</p></div>
	</div>
</div>
		