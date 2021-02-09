
<div class="comment" id="c_1713713713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713713">1</a> by Chris
		posted on 3/15/2009 at 11:12 PM
		</div>
		<div class="comment_text"><p>What version of MySQL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713719">2</a> by Raymond Camden
		posted on 3/15/2009 at 11:18 PM
		</div>
		<div class="comment_text"><p>5.something. Very latest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713720">3</a> by Adam
		posted on 3/16/2009 at 12:31 AM
		</div>
		<div class="comment_text"><p>"Any ideas for what could have gone wrong here?"</p><p>errr, you used ColdFusion and IIS?</p><p>(sorry, couldn't resist after I saw your poke at PHP/Rails devs on the CFB sidebar)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713718">4</a> by Ken Auenson
		posted on 3/16/2009 at 2:12 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I am going through the process of setting up a new Windows server soon and was curious by your DB choices.<br>Any reason you are going with MySQL instead of SQL Server Express in your new virtual server?<br>I wouldn't think the amount of data you have would exceed the size limits in the express version...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713721">5</a> by Jeff Self
		posted on 3/16/2009 at 2:13 AM
		</div>
		<div class="comment_text"><p>Two ideas for the future:</p><p>Linux and PostgreSQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713722">6</a> by Raymond Camden
		posted on 3/16/2009 at 3:28 AM
		</div>
		<div class="comment_text"><p>@Ken: I had though that SQLE had a limit on the # of connections. Also, I just like MySQL. In general, it just plain works, but I've never used it heavily in production. Previously my boxes were all SQL Server.</p><p>@Jeff: As much as I complain about Windows, _normally_ it is rather easy to use as a server. Even more so then Mac. Shoot, just managing services is easier in Windows.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713724">7</a> by Jeff Self
		posted on 3/16/2009 at 4:33 AM
		</div>
		<div class="comment_text"><p>Can't believe I'm saying this, but I agree with you on managing services being easier on Windows than OS X.  However, it is worth pointing out that OS X is not a server OS.  Apple doesn't want it to be and have not provided the tools necessary to use it as such.  OS X Server does have these tools however.  I am not advocating it as a replacement to Windows Server or Linux.  They both work much better for web applications.</p><p>What is your opinion on the future of ColdFusion from a technical point of view?  My take is that it seems to be in a bit of a quandary.  ColdFusion, while it uses Java and runs on Linux and OS X, still is a Windows first application.  Or, at least its marketed as such by Adobe.  In my opinion, the future of Java will be primarily on Unix while I think applications running on Windows will be overwhelmingly dot Net.  Just seems to me that Adobe will have to make a decision in the next 5 years about the direction of ColdFusion.  Will Unix become the primary platform for it?  Or will they drop Java and make it a dot net product?</p><p>Maybe I'm way off but my gut tells me Java will become more insignificant on Windows in the future.  Maybe its just at my work.  As we bring more Microsoft technology into the mix, its going to get harder to justify Java solutions.</p><p>Have you thought into this much, Ray, or anyone else, for that matter?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713730">8</a> by Andy Sandefer
		posted on 3/16/2009 at 6:21 AM
		</div>
		<div class="comment_text"><p>@ALL<br>To be quite honest, Ray's collective sites see enough activity to warrant a dedicated database server.  I believe that MySQL 5.1 is his best option if he is constrained to using one box to rule them all.</p><p>@Ken<br>Please don't waste valuable space in the database with jokes about using the toy version of SQL Server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713729">9</a> by Raymond Camden
		posted on 3/16/2009 at 6:32 AM
		</div>
		<div class="comment_text"><p>@Andy: Altogether, I probably get less then 10k hits per day with my 'network'. My blog gets quite a bit, I think around 5k per day. But everything else gets somewhat less. CFB is 'heavy' performance wise due to what it does. CFLib probably gets the next most traffic, around 1k per day I think.</p><p>If I could afford a dedicated MySQL box, I would. Truth is - I need to reduce my costs. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713728">10</a> by Raymond Camden
		posted on 3/16/2009 at 7:23 AM
		</div>
		<div class="comment_text"><p>Anyone ever see CF Admin unable to run the log viewer? When I try to view a log I get a 403 security error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713731">11</a> by dave
		posted on 3/16/2009 at 10:17 AM
		</div>
		<div class="comment_text"><p>@jeff<br>"Apple doesn't want it to be and have not provided the tools necessary to use it as such"<br>How do you figure? OS X comes with Apache Server installed, MySQL installed, php installed, RoR installed.....</p><p>"OS X Server does have these tools however."<br>The server version adds Tomcat but it isn't hooked into Apache and it isn't running, it also ads the server controls but really you don't need it.</p><p>I have both a **choke cough n puke** windows ded box &amp; a colo'd xserve at hms. On the xserve I took the <br>leopard server OS off of it and put reg Leopard on it instead, since the server tools while amazingly nice overwrite the apache files and took out what I put into them to hook into Tomcat, although I'm sure now I could work with that.</p><p>Once I got everything installed &amp; connected right (apache,tomcat, railo, mysql) it is a breeze to work with, much easier and efficient that my windoz box which I can't wait to get rid of. I can do pretty much everything I need from my main IDE (Coda) thru ssh, I can't even stand to remote log into the windoz box anymore, I am so tired of you need this update &amp; that update and you need to reboot just to get another update that makes you reboot again and the frickin iis manager can't even sort the dang sites alphabetically and just puts them in whatever order AHHHHHHHHHHHHHHHH!!!</p><p>The other thing that became quite apparent to me when hooking this up that compiling your own apps for your system makes them run quite a bit better, since it is basically a custom install instead of a "general" install. MySQL seems to be the big winner here and I think Tomcat will to as I add more sites to it and get a load running on it.</p><p>Now that I got it figured out I can probably set a os x box up in under 10 minutes:<br>1. re-compile Apache to either default location or a new one.<br>2. compile Tomcat with all the extra java custom hooks and server tools &amp; mod_jk<br>3. remove mysql and recompile fresh copy<br>4. install railo<br>5. lock server down</p><p>and there ya go a free mac cfm server in 10 min ;)<br>(that will run cfm, jsp, php, ror, without any additional work)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713726">12</a> by dave
		posted on 3/16/2009 at 10:21 AM
		</div>
		<div class="comment_text"><p>@Ray<br>"I get a 403 security error."<br>Are there any logs in there yet?<br>403 is usually a "directory denied" error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713733">13</a> by Raymond Camden
		posted on 3/16/2009 at 3:52 PM
		</div>
		<div class="comment_text"><p>@dave: It was definitely not dir listing denied. It was:</p><p>403 - Forbidden: Access is denied.<br>You do not have permission to view this directory or page using the credentials that you supplied.</p><p>Get this. I actually get this for one of the images in the log viewer too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713735">14</a> by Chris
		posted on 3/16/2009 at 4:09 PM
		</div>
		<div class="comment_text"><p>Does the user you use to start/stop Coldfusion have access to the directory?</p><p>Also, for MySQL, how did you install it?  I mean, there are I think 3<br>choices, something like dedicated server, developer server, and<br>something else, I can't recall.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713732">15</a> by Dan G. Switzer, II
		posted on 3/16/2009 at 5:19 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>Just as an FYI, I noticed that FeedDemon changed all the blog titles on your BlogCFC and ColdFusionBloggers to: Raymond Camden's ColdFusion Blog.</p><p>Looking at the RSS feed on ColFusionBloggers, I see it's pointing to: <a href="http://disq.us/url?url=http%3A%2F%2Ffeedproxy.google.com%2FColdfusionbloggersorgFeed%3A8dsjGekF72wDg6vAOBeHNqjnvfg&amp;cuid=3321886" rel="nofollow noopener" title="http://feedproxy.google.com/ColdfusionbloggersorgFeed">http://feedproxy.google.com...</a></p><p>This doesn't contain a valid RSS feed.</p><p>I'm also having the same problem with: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogcfc.com%2Frss.cfm%3Fmode%3Dfull%3ArqI58mfwQ2iy4KxdPM40tOe8wNI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.blogcfc.com/rss.cfm?mode=full">http://www.blogcfc.com/rss....</a>.</p><p>However, the RSS feed for your site works fine.</p><p>Just thought you might want to be aware.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713736">16</a> by Raymond Camden
		posted on 3/16/2009 at 5:31 PM
		</div>
		<div class="comment_text"><p>Google is a bit behind on the DNS. If you can hit CFB and see it, it means it is ok for you. But I'm guessing feedproxy just needs to have it's DNS update.</p><p>When I go to the RSS for BlogCFC, it oddly shows me the home page, not the feed. I'll have to dig on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713712">17</a> by Raymond Camden
		posted on 3/16/2009 at 5:32 PM
		</div>
		<div class="comment_text"><p>@Chris: CF is running as Local System. I installed MySQL as a Server install.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713710">18</a> by Raymond Camden
		posted on 3/16/2009 at 5:40 PM
		</div>
		<div class="comment_text"><p>Crap. Figured it out. IIRF got instlaled to ALL web sites, so the url rewriting is hitting everythign.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713706">19</a> by Raymond Camden
		posted on 3/16/2009 at 5:45 PM
		</div>
		<div class="comment_text"><p>Bam. Everyone kiss Dan. Or buy him a beer. Or kiss him and buy him a beer.</p><p>Get this - when I installed IIRF earlier this weekend for ColdFUsionCookbook, I installed it globally. I only use it for the cookbook and cflib, but I figured no harm installing it globally. I ASSUMED that it wouldn't work for sites that did not have the url mapping ini file.</p><p>I was wrong.</p><p>I just went through and removed the filter and it fixed crap. Also, I wonder if the url rewriting created some kind of loop that cuased the mysql issue?</p><p>I'm cautiously optimistic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713707">20</a> by Dan G. Switzer, II
		posted on 3/16/2009 at 5:45 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>Glad you got it worked out--that's why I wanted to report it. To me it looked more like a possible server configuration issue (especially when I noticed all the RSS feed titles has changed.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713708">21</a> by Dan G. Switzer, II
		posted on 3/16/2009 at 5:47 PM
		</div>
		<div class="comment_text"><p>I'll take the beers instead ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713709">22</a> by Sid Wing
		posted on 3/16/2009 at 5:57 PM
		</div>
		<div class="comment_text"><p>@Dan - Only one day to St. Patrick's Day - so take all the beers you can get (Guinness preferably - and NOT green - green Guinness just looks NASTY)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713711">23</a> by Raymond Camden
		posted on 3/16/2009 at 6:00 PM
		</div>
		<div class="comment_text"><p>I keep thinking I should really like Guinness cuz - I'm a beer guy - but... I just don't care for it. I don't hate it of course, but it just takes like water to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713714">24</a> by Sid Wing
		posted on 3/16/2009 at 6:17 PM
		</div>
		<div class="comment_text"><p>LOL - The Guinness they serve here in the US "is" a bit "un-stout"...  However I have had the luxury of having it in its "native environment" and it is MUCH different.  So now, when my compatriots travel over to that beloved country - I force them to bring back at least 6 or more for me.  It's amazing how much those guys enjoy getting e-mail while they are over there - and it's even more amazing what they will do to keep the guy who is in charge of their mail server happy {wicked grin}.</p></div>
	</div>
</div>
		