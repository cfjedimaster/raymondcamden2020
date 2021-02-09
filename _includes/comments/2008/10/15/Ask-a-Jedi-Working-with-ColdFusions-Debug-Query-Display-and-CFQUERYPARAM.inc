
<div class="comment" id="c_1713709143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709143">1</a> by Quan Tran
		posted on 10/15/2008 at 6:15 PM
		</div>
		<div class="comment_text"><p>Another option, if you have access to the server/admin, is to modify the template that outputs the debugging info.</p><p>files in:<br>cfusion\wwwroot\WEB-INF\debug\ - i'm on cf 6</p><p>I haven't done this particular change, but i don't think it'll take much work to make that change looking at the file.</p><p>You can make multiple files and choose which to use from the admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709144">2</a> by Raul Riera
		posted on 10/15/2008 at 7:00 PM
		</div>
		<div class="comment_text"><p>Since you run a good blog here, I wanted to share this with you</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblogactionday.org%2F%3AnnGxJ_5I57TIkiuM_pvf0QC6S2M&amp;cuid=3321886" rel="nofollow noopener" title="http://blogactionday.org/">http://blogactionday.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709135">3</a> by Stuart Moffatt
		posted on 10/15/2008 at 7:41 PM
		</div>
		<div class="comment_text"><p>Another option is Ben Nadel's bookmarklet:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F459-Merging-ColdFusion-SQL-Debugging-And-Query-Params-With-Javascript.htm%3AKHF2tQJgYLceMTpoI1lre6BNEcg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/459-Merging-ColdFusion-SQL-Debugging-And-Query-Params-With-Javascript.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709149">4</a> by Leon Miller-Out
		posted on 10/15/2008 at 7:58 PM
		</div>
		<div class="comment_text"><p>We "fixed" the ColdFusion debug templates a number of years ago to make the SQL statements copy-and-pasteable, and also to make the popup debug window not automatically pop up.</p><p>You can get our version here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fblog.singlebrook.com%2F2007%2F12%2Fbetter-debugging-template-for.html%3AJrkF_BAUM3Tz9hGEJQghTt17gVQ&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.singlebrook.com/2007/12/better-debugging-template-for.html">http://blog.singlebrook.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709141">5</a> by Rich Rein
		posted on 10/15/2008 at 8:13 PM
		</div>
		<div class="comment_text"><p>One thing that has always bugged me (but apparently not enough to make it a priority to work around) is that the debug output is not HTML-escaped.  This is most noticable when having something like myDateColumn &lt; '01/01/2010'.  Anything from the greater than or less than sign to the end of the query is visible in the html source, but lost in the display (making it yet again hard to copy/paste queries out of your debug output.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709145">6</a> by Nathan Mische
		posted on 10/15/2008 at 8:40 PM
		</div>
		<div class="comment_text"><p>I'll just add that there are two versions of CF Debug Copy, one for IE and one for Firefox. Both are available on RIAForge:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfdebugcopie.riaforge.org%2F%3AHjHfOpwQFDglsy731pwTsFniD9s&amp;cuid=3321886" rel="nofollow noopener" title="http://cfdebugcopie.riaforge.org/">http://cfdebugcopie.riaforg...</a> (for IE)<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfdebugcopy.riaforge.org%2F%3AdJczeC-QvKr6RV4ouxAu-BKoLCM&amp;cuid=3321886" rel="nofollow noopener" title="http://cfdebugcopy.riaforge.org/">http://cfdebugcopy.riaforge...</a> (for Firefox)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709146">7</a> by Raymond Camden
		posted on 10/15/2008 at 8:59 PM
		</div>
		<div class="comment_text"><p>What is this IE you speak of?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709147">8</a> by Akira
		posted on 10/15/2008 at 10:49 PM
		</div>
		<div class="comment_text"><p>The IE works great, even with IE 6.</p><p>Ray, unfortunately there are a lot of us who are forced to use IE6 by our IT departments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709157">9</a> by Raymond Camden
		posted on 10/16/2008 at 12:06 AM
		</div>
		<div class="comment_text"><p>@Rich Rein: What version of CF are you on? I tested that with CF8 and it displayed just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709156">10</a> by Phillip Senn
		posted on 10/16/2008 at 12:15 AM
		</div>
		<div class="comment_text"><p>I just bought a PC with Windows Vista Home Premium and installed CF8 + SQLServer2008 on it yesterday.<br>When I turned debugging on today and changed the page to Coldfire, the administrator page now says "Either the Macromedia application server(s) are unreachable or none of them has a mapping to process this request."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709151">11</a> by Rich Rein
		posted on 10/16/2008 at 12:19 AM
		</div>
		<div class="comment_text"><p>@Ray-</p><p>My apologies, I guess that I hadn't really paid attention since our last upgrade - I am fairly confident in saying that it was broken as recently as 7?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709150">12</a> by Raymond Camden
		posted on 10/16/2008 at 12:21 AM
		</div>
		<div class="comment_text"><p>@PS - Not sure what to say. Nathan, you know of any bug reports w/ Vista+CF8+ColdFire?</p><p>@RR - Try with CF8. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709152">13</a> by Nathan Mische
		posted on 10/16/2008 at 12:57 AM
		</div>
		<div class="comment_text"><p>@ Phillip - I'm running ColdFire on Vista Business with CF 8. If you switch back to classic debugging template does everything work as expected?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709154">14</a> by Nathan Strutz
		posted on 10/16/2008 at 2:21 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I made a standalone windows app a few months ago that does this as well, and blogged it here: <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.dopefly.com%2Ftechblog%2Fentry.cfm%3Fentry%3D224%3A1cAW05_MltCldEyT6H6Hvi4QVg4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dopefly.com/techblog/entry.cfm?entry=224">http://www.dopefly.com/tech...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709158">15</a> by Phillip Senn
		posted on 10/16/2008 at 6:14 PM
		</div>
		<div class="comment_text"><p>In Vista Home Premium,<br>I uninstalled/reinstalled ColdFusion, turned all the debugging options on and cfide/administrator locked up again.<br>So I uninstalled/reinstalled ColdFusion and turned on only "Enable Request Debugging Output" with Coldfire and now it is working.<br>So turning on one of these options locks up cfide/administrator:<br>Enable Robust Exception Information <br>Enable AJAX Debug Log Window <br>Timer Information <br>Flash Form Compile Errors and Messages <br>Enable Performance Monitoring</p><p>But all is well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709155">16</a> by Phillip Senn
		posted on 10/16/2008 at 6:33 PM
		</div>
		<div class="comment_text"><p>To truly turn debugging on, I had to choose "Add Current" to the list of IP addresses, which added ::1.<br>I seem to remember this was mentioned in Ben Forta's blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709148">17</a> by Nathan Mische
		posted on 10/16/2008 at 11:58 PM
		</div>
		<div class="comment_text"><p>@Phillip - So when it locked up, with everything enabled, were you using the coldfire.cfm debugging template, or classic.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709159">18</a> by Brian Oeding
		posted on 11/3/2008 at 8:05 PM
		</div>
		<div class="comment_text"><p>I installed the latest ColdFire version just now for FF 3.0.1 and it installed fine and my code runs without errors except my CF8.01/SQL Server 2005 app that uses much of the new AJAX functionality including datagrids has queries that do not get displayed in ColdFire. Actually nothing is displayed for any of the ColdFusion tabs (General, Eception Times, DB Queries ...). I'm running it all on my local computer. Anyone seen this or have a way it can be fixed? I was interested mostly from the standpoint of getting the SQL for a large query that has numerous cfqueryparam values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709140">19</a> by Raymond Camden
		posted on 11/3/2008 at 9:36 PM
		</div>
		<div class="comment_text"><p>@BO, @NM: Nathan, I believe the most recent versions of ColdFire supported noticing multiple requests, right?<br>@BO - The issue is that - your main request didn't do anything except use Ajax stuff.</p><p>Of course, you also want to ensure you have debugging enabled, and set to ColdFire, and that you aren't restricting to an IP that doesn't match yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709153">20</a> by Brian Oeding
		posted on 11/3/2008 at 11:13 PM
		</div>
		<div class="comment_text"><p>Understood. Debugging is "enabled, and set to ColdFire, and that you aren't restricting to an IP that doesn't match yourself". Would be nice if the AJAX calls could be picked up here, since this is my new environment, I'll be working with for awhile. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709139">21</a> by Raymond Camden
		posted on 11/4/2008 at 12:00 AM
		</div>
		<div class="comment_text"><p>@BO: I'll let Nathan respond to see if he got the support for N calls working, but you do know that you can use Firebug to see the XHR request and simply right click/load new tab.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709137">22</a> by Brian Oeding
		posted on 11/4/2008 at 12:33 AM
		</div>
		<div class="comment_text"><p>I am fairly new to Firebug, but it has been invaluable in debugging my AJAX code the last couple months. I'm not familiar with the term XHR, but I assume you are referring to the GET calls in the console and if so yes, but they do not have my query embedded there that I'm aware of.<br>BTO</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709138">23</a> by Raymond Camden
		posted on 11/4/2008 at 12:35 AM
		</div>
		<div class="comment_text"><p>Yes, by XHR I meant AJAX. You had said you used a page that was mainly ajax based. If you want to see the debug data from an Ajax request, it may be simpler to load that request by itself. Does that part make sense? It should work - I do it all the time. Look out for a cfnodebug or some such in the URL though. You may need to remove that.</p></div>
	</div>
</div>
		