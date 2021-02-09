
<div class="comment" id="c_1792246077">
	<div>
		<img src="https://disqus.com/api/users/avatars/davidosomething.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1792246077">1</a> by davidosomething
		posted on 1/14/2015 at 3:55 PM
		</div>
		<div class="comment_text"><p>Try setting up a custom error page for the db error and have it email you some more useful information, like the DB host and its status, connection parameters, server load, etc.</p><p>This still works to get the error page: <a href="http://disq.us/url?url=http%3A%2F%2Fdigwp.com%2F2009%2F11%2Fcustom-database-error-page%2F%3AqJO7PlSWMF2EDZ7fch12VKouCY4&amp;cuid=3321886" rel="nofollow noopener" title="http://digwp.com/2009/11/custom-database-error-page/">http://digwp.com/2009/11/cu...</a></p><p>But you'll have to add the PHP to do the mailing and determine what's useful yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1792255734">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1792255734">2</a> (In reply to <a href="#c_1792246077">#1</a>) by Raymond Camden
		posted on 1/14/2015 at 4:01 PM
		</div>
		<div class="comment_text"><p>Hmm, that sounds ok, but I'd have to get email working. Email w/ Google Compute Engine is non-trivial. You have to sign up with SendGrid and all that. That's why I'm using a third party service even for my contact forms. This may be the issue that makes me get it working finally.</p><p>As for server load - I did look at CPU utilization and it was 40-50%. I see some spikes, but never over 50-60%. Seems reasonable, not 'red-lining' if that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1792651545">
	<div>
		<img src="https://disqus.com/api/users/avatars/therealdanvega.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1792651545">3</a> by Dan Vega
		posted on 1/14/2015 at 7:18 PM
		</div>
		<div class="comment_text"><p>I am still seeing this error here and there but not as often as you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1793141041">
	<div>
		<img src="https://disqus.com/api/users/avatars/ben_da_dog.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1793141041">4</a> by Ben
		posted on 1/15/2015 at 12:25 AM
		</div>
		<div class="comment_text"><p>Could just be running out of connections of the MySql instance.</p><p>Do you have any logs running for the mysql service that could give some insight?</p><p>The scaling php book (<a href="https://disq.us/url?url=https%3A%2F%2Fwww.scalingphpbook.com%2F%29%3AxgY8kfKi6zUuG4Rh_esXQOqWS8A&amp;cuid=3321886" rel="nofollow noopener" title="https://www.scalingphpbook.com/)">https://www.scalingphpbook....</a> has some pretty good tips on tuning Mysql if you're interested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1793264188">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1793264188">5</a> (In reply to <a href="#c_1793141041">#4</a>) by Raymond Camden
		posted on 1/15/2015 at 2:02 AM
		</div>
		<div class="comment_text"><p>No idea on the logs. I'm going to log in tomorrow during our company meeting and try to find both the config and the logs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1793271004">
	<div>
		<img src="https://disqus.com/api/users/avatars/ben_da_dog.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1793271004">6</a> (In reply to <a href="#c_1793264188">#5</a>) by Ben
		posted on 1/15/2015 at 2:09 AM
		</div>
		<div class="comment_text"><p>Depending on how it is setup you may need to tweak the mysql config to enable the correct log level (and restart the service).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1793332384">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1793332384">7</a> (In reply to <a href="#c_1793271004">#6</a>) by Raymond Camden
		posted on 1/15/2015 at 3:11 AM
		</div>
		<div class="comment_text"><p>Found the folder where log files should be -they are not. Now to find where the conf file should be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1793336788">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1793336788">8</a> (In reply to <a href="#c_1793332384">#7</a>) by Raymond Camden
		posted on 1/15/2015 at 3:16 AM
		</div>
		<div class="comment_text"><p>Found it... but don't see a connections setting or a max memory even.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1793340145">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1793340145">9</a> (In reply to <a href="#c_1793336788">#8</a>) by Raymond Camden
		posted on 1/15/2015 at 3:19 AM
		</div>
		<div class="comment_text"><p>Ok, ran mysqladmin variables, and from what I see, I've got a max connections of 151 which seems pretty darn high.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1793342118">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1793342118">10</a> (In reply to <a href="#c_1793340145">#9</a>) by Raymond Camden
		posted on 1/15/2015 at 3:21 AM
		</div>
		<div class="comment_text"><p>I increased it to 200. (Sorry for all the comments folks.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1798314312">
	<div>
		<img src="https://disqus.com/api/users/avatars/eterps.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1798314312">11</a> by eterps
		posted on 1/17/2015 at 2:50 PM
		</div>
		<div class="comment_text"><p>I set up Wordpress sites every now and then, and every time I see this error pop up I slap myself because I forgot to turn on page caching.  You probably have this covered already, but just in case, I've had good luck with WP Super Cache. Also heard good things about W3 Total Cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1798380845">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1798380845">12</a> (In reply to <a href="#c_1798314312">#11</a>) by Raymond Camden
		posted on 1/17/2015 at 3:49 PM
		</div>
		<div class="comment_text"><p>Yep, I think I mention it above, and in the comments. :) While I'm convinced the issue is *only* MySQL, after this post was written I noticed I had a few settings in SuperCache that was not using the recommended values. I made those changes. Maybe it will help. I've gone a few days now without an issue, but even before that I'd get about the same sometimes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1804471144">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_A4djy6TJVr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1804471144">13</a> by kr1000
		posted on 1/20/2015 at 4:57 PM
		</div>
		<div class="comment_text"><p>I had some similar issues and figured out that my favorite linux distro on AWS didn't have any swap by default.  I added a 2GB swap file for those occasions that I had a memory spike.  Worked much better.  The swap is rarely over a few MB but is there when needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1804481252">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1804481252">14</a> (In reply to <a href="#c_1804471144">#13</a>) by Raymond Camden
		posted on 1/20/2015 at 5:03 PM
		</div>
		<div class="comment_text"><p>I honestly have no idea if Google Compute has this issue. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1804500850">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_A4djy6TJVr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1804500850">15</a> (In reply to <a href="#c_1804481252">#14</a>) by kr1000
		posted on 1/20/2015 at 5:14 PM
		</div>
		<div class="comment_text"><p>I am not familiar with Google Compute but it appears from a quick search that it's not enabled by default.  You can type "mount" at the command prompt to see if there is any reference to a swap partition.  Swap can significantly reduce performance but can also provide a valuable safety net.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1804502476">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1804502476">16</a> (In reply to <a href="#c_1804500850">#15</a>) by Raymond Camden
		posted on 1/20/2015 at 5:14 PM
		</div>
		<div class="comment_text"><p>I'll try later if I need. I'm cautiously optimistic that my last set of changes may have helped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1804981449">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1804981449">17</a> by Nic Raboy
		posted on 1/20/2015 at 9:37 PM
		</div>
		<div class="comment_text"><p>Is your MySQL instance running on the same server as the web application?  Also, what are your metrics?</p><p>I'm on a 1GB server and I'm processing 3,000 visits a day.  I do get the same problem as you when a spike in traffic happens.</p><p>I'm curious to know whether or not it is because we are at the peak of our resources, or if it is a different issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1804984107">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1804984107">18</a> (In reply to <a href="#c_1804981449">#17</a>) by Raymond Camden
		posted on 1/20/2015 at 9:39 PM
		</div>
		<div class="comment_text"><p>Yep, same instance. Metrics? Roughly 4-5k page views per day. If sessions are visits, then it is about the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1804991845">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1804991845">19</a> (In reply to <a href="#c_1804984107">#18</a>) by Nic Raboy
		posted on 1/20/2015 at 9:44 PM
		</div>
		<div class="comment_text"><p>We may just be at our max.  I'm not a server expert, but 4-5k sounds pretty high for 1.7GB of RAM.</p><p>People keep telling me to split the database from my application server, but I'm too cheap to pay for another server.  I can imagine it being less stressful on the server though.</p><p>I'll check back on if someone has a magical fix for us.  Like you, my server crashes like an hour after I go to bed and it is super annoying.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1805005435">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1805005435">20</a> (In reply to <a href="#c_1804991845">#19</a>) by Raymond Camden
		posted on 1/20/2015 at 9:52 PM
		</div>
		<div class="comment_text"><p>I don't know man - I mean - even 5k page views per day is just 208 page views per hour. That's 3.5 page views per minute. That should be *trivial* imo. Would be with ColdFusion for sure. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1805049283">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1805049283">21</a> (In reply to <a href="#c_1805005435">#20</a>) by Nic Raboy
		posted on 1/20/2015 at 10:15 PM
		</div>
		<div class="comment_text"><p>That is assuming you get a constant amount of traffic in a 24 hour period.  Maybe your traffic is heaviest at night and occasionally it is just too much?  What do your hourly Google Analytics say?</p><p>As for ColdFusion / PHP / whatever.  The base language can always handle a lot.  WordPress is just an over-bloated animal.</p><p>I ran 'P3 Plugin Profiler' and it said that each page load is making 48 queries on the database.  Multiply that by however many visitors you have.  The little things can add up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1805095652">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1805095652">22</a> (In reply to <a href="#c_1805049283">#21</a>) by Raymond Camden
		posted on 1/20/2015 at 10:45 PM
		</div>
		<div class="comment_text"><p>True - I guess I'm still thinking that even if the hits are focused in around 9-5, if we multiply it by 4 let's say, it still doesn't seem like a lot.</p><p>48 hits per view - ugh. Well, that's one thing that SuperCache should help with for sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1805109110">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1805109110">23</a> (In reply to <a href="#c_1805095652">#22</a>) by Nic Raboy
		posted on 1/20/2015 at 10:54 PM
		</div>
		<div class="comment_text"><p>In theory, yes.</p><p>If you're up for some wizardry, I have a more majestic approach than just monitoring and quickly restarting.  Check the following script:</p><p></p><pre><code><br>#!/bin/bash<br>if (( $(ps -ef | grep -v grep | grep mysqld | wc -l) &lt;= 0 ))<br>then<br>    echo "MySQL is currently not running and will be restarted!" | mail -s "MySQL may have crashed" -r from@example.com to@example.com<br>    /etc/init.d/mysql restart<br>else<br>    echo "Running"<br>fi<br></code></pre><p></p><p>Put it under your root cron and have it run every 1 minute or whatever you want.  That way it will start back up and you'll get an email so you know it happened.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1805114106">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1805114106">24</a> (In reply to <a href="#c_1805109110">#23</a>) by Raymond Camden
		posted on 1/20/2015 at 10:58 PM
		</div>
		<div class="comment_text"><p>Actually, I still can't do mail here. :) For Compute, you have to use SendGrid. Apparently they have a good free tier, but I skipped it for now. (Using FormKeep for my contact form.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1805120197">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1805120197">25</a> (In reply to <a href="#c_1805114106">#24</a>) by Nic Raboy
		posted on 1/20/2015 at 11:01 PM
		</div>
		<div class="comment_text"><p>Fair enough.  The script should still get a restart going.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1809030150">
	<div>
		<img src="https://disqus.com/api/users/avatars/ben_da_dog.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1809030150">26</a> (In reply to <a href="#c_1793342118">#10</a>) by Ben
		posted on 1/21/2015 at 9:52 PM
		</div>
		<div class="comment_text"><p>Did it get any better?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1809593087">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1809593087">27</a> (In reply to <a href="#c_1809030150">#26</a>) by Raymond Camden
		posted on 1/21/2015 at 11:03 PM
		</div>
		<div class="comment_text"><p>So far so good. But it may have been the SuperCache recommendations I changed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1813168494">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1813168494">28</a> by Raymond Camden
		posted on 1/23/2015 at 4:58 PM
		</div>
		<div class="comment_text"><p>sigh - well after a good run of no trouble, I've had 2 crashes (technically - unable to connect to db) in 24 hours. In both cases, my CPU usage was pretty high, 80%, which I think means I got some traffic spikes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1813318256">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1813318256">29</a> (In reply to <a href="#c_1813168494">#28</a>) by Nic Raboy
		posted on 1/23/2015 at 6:22 PM
		</div>
		<div class="comment_text"><p>I'm assuming your blog makes more money than mine does.  The guys at Ionic recommended this to me, but I couldn't afford it.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwpengine.com%2F%3ABQmk8KRv5gEavoh0vdVaeKgca1Q&amp;cuid=3321886" rel="nofollow noopener" title="http://wpengine.com/">http://wpengine.com/</a></p><p>If your ads are making you enough to support better hosting, maybe it is worth a shot?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1813334527">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1813334527">30</a> (In reply to <a href="#c_1813318256">#29</a>) by Raymond Camden
		posted on 1/23/2015 at 6:31 PM
		</div>
		<div class="comment_text"><p>I'm like right in the middle there - one blog, but 130k page views. 100 bucks a month is a bit too much. I'd still turn a profit though. Plus - I've got a modded WP install - I can get around that with a .htaccess file if they would support it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1813338971">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1813338971">31</a> (In reply to <a href="#c_1813334527">#30</a>) by Nic Raboy
		posted on 1/23/2015 at 6:33 PM
		</div>
		<div class="comment_text"><p>Yea I hear you.  I'm on a $10 VPS right now.  Anything else is a huge jump.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1813426644">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1813426644">32</a> (In reply to <a href="#c_1813338971">#31</a>) by Nic Raboy
		posted on 1/23/2015 at 7:23 PM
		</div>
		<div class="comment_text"><p>Have you seen this too?:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fewan.im%2F900%2F10-million-hits-a-day-with-wordpress-using-a-15-server%3Afv8IC9EKvfVPNYmrpUArv1UDm3M&amp;cuid=3321886" rel="nofollow noopener" title="https://ewan.im/900/10-million-hits-a-day-with-wordpress-using-a-15-server">https://ewan.im/900/10-mill...</a></p><p>I've heard people mention Varnish before, but I've never used it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1813566286">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1813566286">33</a> (In reply to <a href="#c_1813426644">#32</a>) by Raymond Camden
		posted on 1/23/2015 at 8:42 PM
		</div>
		<div class="comment_text"><p>Ditto. Looks a bit complex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1816812206">
	<div>
		<img src="https://disqus.com/api/users/avatars/Noleaf.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1816812206">34</a> by Justin Carter
		posted on 1/25/2015 at 11:33 PM
		</div>
		<div class="comment_text"><p>It sounds swap file related to me too, you should check to see if OOM killer is stopping your MySQL process. You might just need to add swap space (and perhaps tune your MySQL memory settings a bit).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1817044403">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1817044403">35</a> (In reply to <a href="#c_1816812206">#34</a>) by Raymond Camden
		posted on 1/26/2015 at 3:12 AM
		</div>
		<div class="comment_text"><p>So dumb question - do you know how to add that to a Google Compute instance?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1817118686">
	<div>
		<img src="https://disqus.com/api/users/avatars/Noleaf.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1817118686">36</a> (In reply to <a href="#c_1817044403">#35</a>) by Justin Carter
		posted on 1/26/2015 at 4:30 AM
		</div>
		<div class="comment_text"><p>I haven't used Google Cloud, but I'd guess the same way you would on most linux distros with mkswap, swapon, fstab etc:<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.digitalocean.com%2Fcommunity%2Ftutorials%2Fhow-to-add-swap-on-ubuntu-14-04%3AB22zEiBhfyXA-Sjx24pMfQ6P30U&amp;cuid=3321886" rel="nofollow noopener" title="https://www.digitalocean.com/community/tutorials/how-to-add-swap-on-ubuntu-14-04">https://www.digitalocean.co...</a></p><p>I run my site on a 512MB instance (Digital Ocean) and for me a swap file was necessary to keep MySQL up, even though I've tuned it down to use as little RAM as possible (and I've disabled InnoDB and just use MyISAM).</p><p>Often the recommendation is "don't use swap" but with very small amounts of memory it's almost impossible to avoid really. If I could justify paying for a 4GB RAM instance I'd just do that instead and not worry about it :)</p><p>The other alternative is to use Google Cloud SQL, but again, $$!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1817125574">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1817125574">37</a> (In reply to <a href="#c_1817118686">#36</a>) by Nic Raboy
		posted on 1/26/2015 at 4:38 AM
		</div>
		<div class="comment_text"><p>Hate to ninja in here, but what is your WordPress traffic on your 512MB instance?  I'm using a 1GB instance with Digital Ocean, but I believe I have InnoDB enabled.</p><p>Curious to know what kind of boost that would do for me.</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1817133705">
	<div>
		<img src="https://disqus.com/api/users/avatars/Noleaf.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1817133705">38</a> (In reply to <a href="#c_1817125574">#37</a>) by Justin Carter
		posted on 1/26/2015 at 4:48 AM
		</div>
		<div class="comment_text"><p>It's not quite an apples-apples comparison and I don't use WordPress, but MySQL + InnoDB would eat up around 400MB RAM with no tuning, and on a 512MB instance that's bad. Tuned with MyISAM it's currently using 120MB RAM, but my traffic is very very low.</p><p>On a 1GB+ instance it wouldn't have been a problem for me and I would have just used InnoDB :)</p><p>I forgot to re-iterate to Ray though, check to see if OOM killer is the reason your MySQL process is "crashing". It might not be... But if it is, then tuning MySQL and/or adding a swap file could help. Just google: "oom killer mysql" and you'll see what I mean.</p></div>
	</div>
</div>
		