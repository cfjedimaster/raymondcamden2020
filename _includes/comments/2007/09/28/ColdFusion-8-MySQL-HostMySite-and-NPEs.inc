
<div class="comment" id="c_1713672593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672593">1</a> by Raymond Camden
		posted on 9/29/2007 at 1:03 AM
		</div>
		<div class="comment_text"><p>FYI, I forgot my earlier post on this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F9%2F12%2FNPEs-onRequest-and-other-mysteries-of-the-universe%3AynR7XFYTk0_UePqs19Y60ywetfI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/9/12/NPEs-onRequest-and-other-mysteries-of-the-universe">http://www.coldfusionjedi.c...</a></p><p>I wonder if we are seeing a bug in CF8+MySQL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672604">2</a> by Kevin Sargent
		posted on 9/29/2007 at 1:04 AM
		</div>
		<div class="comment_text"><p>I just launched a pretty intensive CMS on CF8 + MySQL 5 on a <a href="http://disq.us/url?url=http%3A%2F%2Fcrystaltech.com%3ANC45E5xrrkQXeCgrzE_1J7QiJ-A&amp;cuid=3321886" rel="nofollow noopener" title="crystaltech.com">crystaltech.com</a> semi-dedicated server and have no issues like that that I am aware of.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672600">3</a> by Phil Duba
		posted on 9/29/2007 at 1:17 AM
		</div>
		<div class="comment_text"><p>Ray, I got a number of these when I switched my site to be hosted by HMS. It is running CF8 and MySQL. The solution was to toggle and/or adjust the "Maintain Client Connections" and the Connection Timeout Settings. I have had no issues since the first day or two since these adjustments were made.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672599">4</a> by James Edmunds
		posted on 9/29/2007 at 1:44 AM
		</div>
		<div class="comment_text"><p>Ray, that earlier post about the NPEs was in fact CF8 plus MySQL. I have had no problems at all since the OnRequest "fix" from the CT tech, though none of us seems to yet understand why it worked!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672601">5</a> by tony petruzzi
		posted on 9/29/2007 at 1:53 AM
		</div>
		<div class="comment_text"><p>We were having weird problems as well. The cause turned out to be that the particular server our site was on was UPGRADED from cf7 to cf8. Apparently this is cause of a lot of these weird issues. If you call HostMySite they will switch your website over to a server that cf8 was freshly installed on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672608">6</a> by dave
		posted on 9/29/2007 at 4:10 AM
		</div>
		<div class="comment_text"><p>I had some weird issues with cfm8 vps servers but soon as I switched to a cfm8 ded box they all went away.</p><p>I know that helps but..... it seems as though the config has some issues to be worked out on cfm8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672594">7</a> by Ian
		posted on 9/29/2007 at 6:57 AM
		</div>
		<div class="comment_text"><p>This sounds like an issue I experienced repeatedly with HMS when and MySQL.  To fix it, I had to go back into the DSN in the CF Admin and uncheck the box "Maintain connections across client requests." The error messages disappeared immediately.</p><p>I don't recall whether NPEs were a part of the error messages I received, but it sounds very familiar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672592">8</a> by Raul Riera
		posted on 9/29/2007 at 9:45 AM
		</div>
		<div class="comment_text"><p>I have developmed my own CMS using CF8 and MySQL on <a href="http://disq.us/url?url=http%3A%2F%2Fcrystaltech.com%3ANC45E5xrrkQXeCgrzE_1J7QiJ-A&amp;cuid=3321886" rel="nofollow noopener" title="crystaltech.com">crystaltech.com</a> and no errors what so ever, there must be something odd with host my site or soundings :P hehehe just kidding</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672595">9</a> by Joe Mastroianni
		posted on 9/29/2007 at 4:02 PM
		</div>
		<div class="comment_text"><p>Maybe it's an issue with the mySQL driver? Maybe CF is maintaining a connection but the DB server is dropping it then boom! NPE. Or something. It's early.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672602">10</a> by Will Tomlinson
		posted on 9/29/2007 at 9:43 PM
		</div>
		<div class="comment_text"><p>I did report a bug where I was getting an intermittent "corrupt table" error with MySQL/CF8/cfqueryparams.</p><p>They said that one's been fixed and will be in the next hotfix.</p><p>They also sent me the fix. I don't know if it's related at all tho. Doesn't sound like it..</p><p>Will</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672605">11</a> by Tom K
		posted on 10/1/2007 at 12:39 PM
		</div>
		<div class="comment_text"><p>I had some problems on HMS just this last week installing BlogCFC w CF8 + MySQL: worked perfectly on Dev machine, but they were using the wrong MySQL driver on the DSN at HMS. Threw lots of errors, so it got fixed; then I started getting random timeouts when reinitializing the cache;  So I request ?autoconnect=true added to the connection string and that seems to have worked thus far.</p><p>Before that, Occasionally, when I selected category view on Blog CFC I'd get a Null Pointer - and I had no idea why....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672596">12</a> by Matteo Stagi
		posted on 10/1/2007 at 6:32 PM
		</div>
		<div class="comment_text"><p>I had the same problem on a site running CF and mySQL hosted at HostmySite. The problem began when HMS upgraded to CF8. But in my case the support was good and they fixed my Null Pointer Exceptions. So I asked more informations about how they solved it. They answered:</p><p>The fix was to add the following to the connection string for the DSN in ColdFusion Admin:</p><p>zeroDateTimeBehavior=convertToNull</p><p>The fix has to to do with a bug in MySQL referenced here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbugs.mysql.com%2Fbug.php%3Fid%3D13261%3ANXXQd5QST1ojXEQmW2m5sb1GOQ0&amp;cuid=3321886" rel="nofollow noopener" title="http://bugs.mysql.com/bug.php?id=13261">http://bugs.mysql.com/bug.p...</a></p><p>When using the MySQL 3.x drivers in CF7 this issue never revealed itself, but when upgrading to CF8 and using the MySQL 4/5 drivers, it popped up.  Please let us know if you have any additional questions about this issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672597">13</a> by jh
		posted on 10/2/2007 at 8:16 PM
		</div>
		<div class="comment_text"><p>" The system has attempted to use an undefined value, which usually indicates a programming error, either in your code or some system code.</p><p>Null Pointers are another name for undefined values."</p><p>I'm actually getting those, too.</p><p>We're using CF8 that's connecting to a mySQL database on another network.</p><p>Refreshing the page causes the error to disappear.</p><p>Randomly just found this posting.  Glad I did.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672603">14</a> by jh
		posted on 10/2/2007 at 8:30 PM
		</div>
		<div class="comment_text"><p>Added that to the connection string.  Still getting the errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672598">15</a> by David Buhler
		posted on 10/30/2007 at 5:38 PM
		</div>
		<div class="comment_text"><p>According to an email I received from Alagad, a fix is now posted:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fkb.adobe.com%2Fselfservice%2FviewContent.do%3FexternalId%3Dkb402583%26sliceId%3D2%3AFtF8SXn6KNAy1siwcqszafoDq1o&amp;cuid=3321886" rel="nofollow noopener" title="http://kb.adobe.com/selfservice/viewContent.do?externalId=kb402583&amp;sliceId=2">http://kb.adobe.com/selfser...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672609">16</a> by Hal Crawford
		posted on 11/1/2007 at 9:16 PM
		</div>
		<div class="comment_text"><p>I have the same problem - and I have a pretty simple page with the HostMySite people.  I'll try the connection string change, and see if someone can implement the Hot Fix.  Crossing my fingers.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672606">17</a> by Dan
		posted on 11/6/2007 at 7:51 PM
		</div>
		<div class="comment_text"><p>This problem is probably related to a bug in CF8 mysql driver.. having HMS remove the "maintain connections" option from the DSN config should fix the problem.</p><p>Havnt seen the new Adobe hotfix on this yet. will have to check it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672607">18</a> by sultan
		posted on 12/18/2007 at 4:54 AM
		</div>
		<div class="comment_text"><p>Null pointer exceptions.<br>We upgraded our server from CFmx7 to CF8 about a month ago with no issues until now. We are now getting intermittent NPEs. If you refresh a page, the error either goes away or shows a different NPE error. This was all working fine for a month after the upgrade. <br>We have CF8 installed on CentOS 3.8 with Mysql 4.1.<br>I have restarted CF8 and the issue is still persisting. I also updated with the CFhotfix 2 and restarted with the issue still persisting.</p><p>I'm thinking of uninstalling and reinstalling CF8 tonight. I will post my result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672622">19</a> by sultan
		posted on 12/18/2007 at 10:23 AM
		</div>
		<div class="comment_text"><p>I've given up for today.</p><p>Uninstalled Coldfusion 8 and did a complete re-install with no improvements. Still getting random intermittent Null Pointer Exceptions.</p><p>I talked with our server tech support and they informed me that Apache failed earlier today and had to restart. Thats about when this problem started. They re-compiled apache and I uninstalled and re-installed coldfusion again. This time the errors were less frequent but still there.</p><p>I'm not convinced that its a coldfusion issue since it worked without any issues for a month straight.</p><p>I also read on a forum that it may be the mysql 4/5 driver so I used the "other" setting for the datasource and the manual driver setup like you had to with CFMX7. Still same issue. Different errors every time you refresh.</p><p>Tomorrow i plan to install cfmx7 to test if the problem still occurs.</p><p>Will post my results</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672630">20</a> by Raymond Camden
		posted on 12/18/2007 at 4:57 PM
		</div>
		<div class="comment_text"><p>You may want to consider checking the version of MySQL you are using and ensuring that the connector is the same version. Thats another tip I've heard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672621">21</a> by sultan
		posted on 12/20/2007 at 7:36 AM
		</div>
		<div class="comment_text"><p>It seems to be working now.</p><p>Thanks Raymond and Matteo!</p><p>So initially, the mysql connection string (zeroDateTimeBehavior=convertToNull) didn't work, and unchecking the (Maintain connections across client requests)didn't work. After a third install of cf8 we still got the errors until I put the connection string in with the driver I used with cfmx7 as well as unchecking the Maintain connections across client requests option. Now its been working for over a day with no issues.</p><p>What puzzles me is why did it work for a month without any issues using the native Mysql 4/5 drivers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672619">22</a> by John Schroeder
		posted on 2/10/2009 at 2:15 AM
		</div>
		<div class="comment_text"><p>I had the same problem on 3 of my websites (shared server) with CrystalTech (now Newtek). The tech knew the fix immediately. The cold fusion admin for 7 was defaulted to have the checkbox for maintain connection unchecked, but cf8's default was checked. what's the word on a fix for the dsn/mysql issue? it would be nice to be able to maintain connections.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672618">23</a> by Matt
		posted on 9/24/2009 at 5:49 PM
		</div>
		<div class="comment_text"><p>I was told, by Adobe, that they are not planning on fixing the issue in CF8, but "hopefully" it will work in CF9.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672629">24</a> by Steve Logan
		posted on 12/21/2009 at 11:40 PM
		</div>
		<div class="comment_text"><p>I'm getting this now anytime I try to instantiate a CFC at Network Solutions CF hosting (client's choice, not mine).  The db is Access, and I'm not even accessing it in the test CFC I wrote to show the problem to them.  All I'm doing in my test CFC is returning the string 'foo' when it's called with cfinvoke.</p><p>They're running CF7, no CF8 servers, and very very little support from them.  Client is running out of patience and is starting to talk "cf sucks, knew we should have converted the app to ASP".</p><p>Site - with some pretty complex CFCs works fine on my test server (CF8), and a 2nd server I installed the site on to show it to them working (CF7).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672624">25</a> by delta
		posted on 1/14/2010 at 7:22 PM
		</div>
		<div class="comment_text"><p>"Comment 23 written by Matt on 24 September 2009, at 8:49 AM<br>I was told, by Adobe, that they are not planning on fixing the issue in CF8, but "hopefully" it will work in CF9"</p><p>"hopefully" it will work in CF9" --- Yeah and pay another $10 Grand for another licence</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672628">26</a> by Raymond Camden
		posted on 1/14/2010 at 7:46 PM
		</div>
		<div class="comment_text"><p>CF9 Enterprise, full price, isn't 10k. The upgrade for sure is a lot less.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672626">27</a> by J Rudny
		posted on 5/20/2010 at 11:09 PM
		</div>
		<div class="comment_text"><p>CrystalTech customers can refer to this knowledgebase article below. It instructs contacting customer support to turn off the "maintain connections across client requests" that is enabled by default.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.webcontrolcenter.com%2FMain%2FfrmKBSearch.aspx%3Fcategoryid%3D0%26search%3DNull%2BPointer%2BExceptions%26type%3D0%3AliEFEknrvhxXey9w_DIeWKyEE0w&amp;cuid=3321886" rel="nofollow noopener" title="http://help.webcontrolcenter.com/Main/frmKBSearch.aspx?categoryid=0&amp;search=Null+Pointer+Exceptions&amp;type=0">http://help.webcontrolcente...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672623">28</a> by Carsten
		posted on 6/14/2010 at 10:59 AM
		</div>
		<div class="comment_text"><p>We were having the same problems with several sites based on a cf8/mysql5 installation. After the addition of the connection String "zeroDateTimeBehavior=convertToNull" as mentioned above by Matteo Stagi AND removing the "maintain connections" option from the DSN config everything works fine. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672625">29</a> by Choy May May
		posted on 8/2/2010 at 12:14 PM
		</div>
		<div class="comment_text"><p>Need to update a setting.  I called Host My Site and the fixed the issue right away.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672620">30</a> by David Levin
		posted on 2/2/2011 at 4:02 AM
		</div>
		<div class="comment_text"><p>This is an old article, but for anyone that cares this bug is still around and is not specific to ColdFusion 8 and mySQL.  I'm using CF8 and MSSQL 2005 and I get this bug randomly when I instance a CFC.  The problem immediately goes away when I hit refresh.</p><p>One interesting thing is that this only appears to happen after a fresh reboot of the server.</p></div>
	</div>
</div>
		