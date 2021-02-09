
<div class="comment" id="c_1864353765">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Yn75qCSrBv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1864353765">1</a> by Rory Brown
		posted on 2/19/2015 at 7:41 PM
		</div>
		<div class="comment_text"><p>Have you thought about using Maria DB which is a fork of MySQL? Or, PostGRE is a little more professional in my opinion, even though it's annoying to install sometimes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1864378758">
	<div>
		<img src="https://disqus.com/api/users/avatars/rszehnder.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1864378758">2</a> by Robert Zehnder
		posted on 2/19/2015 at 7:55 PM
		</div>
		<div class="comment_text"><p>My average DigitalOcean VPS bill was like $7/mo. I guess I am really cheap lol</p></div>
	</div>
</div>
		
<div class="comment" id="c_1864432883">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1864432883">3</a> (In reply to <a href="#c_1864353765">#1</a>) by Raymond Camden
		posted on 2/19/2015 at 8:22 PM
		</div>
		<div class="comment_text"><p>I'd imagine any db solution would require tuning. I may not be a MySQL expert, but I know it a little bit at least. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1864560881">
	<div>
		<img src="https://disqus.com/api/users/avatars/Noleaf.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1864560881">4</a> by Justin Carter
		posted on 2/19/2015 at 9:29 PM
		</div>
		<div class="comment_text"><p>Did you check your system logs to see if OOMKiller is the reason for MySQL "crashing"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1864569679">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1864569679">5</a> (In reply to <a href="#c_1864560881">#4</a>) by Raymond Camden
		posted on 2/19/2015 at 9:34 PM
		</div>
		<div class="comment_text"><p>To quote the great Ghostbusters, "Ray, pretend for a moment that I don't know anything about metallurgy, engineering, or physics, and just tell me what the hell is going on. "</p><p>What log in particular would I check?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1864863174">
	<div>
		<img src="https://disqus.com/api/users/avatars/Noleaf.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1864863174">6</a> (In reply to <a href="#c_1864569679">#5</a>) by Justin Carter
		posted on 2/20/2015 at 12:43 AM
		</div>
		<div class="comment_text"><p>The system log might depend on the distro, but you could try:</p><p>dmesg | egrep -i 'killed process'</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F624857%2Ffinding-which-process-was-killed-by-linux-oom-killer%3A4af6wvqoIGSwYyBphCIFlNUlWZs&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/624857/finding-which-process-was-killed-by-linux-oom-killer">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1869181457">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1869181457">7</a> (In reply to <a href="#c_1864863174">#6</a>) by Raymond Camden
		posted on 2/22/2015 at 3:24 PM
		</div>
		<div class="comment_text"><p>Thanks - next crash - I'll try this. So far I've been up for a bit. The last downtime (you can see it in the image) was global to GC, not my box. I'm using New Relic now to monitor my box. I'm seeing something interesting. MySQL's memory usage is very consistent. Apache is slowly growing though. Not very quickly, but it is growing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1870120662">
	<div>
		<img src="https://disqus.com/api/users/avatars/markmandel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1870120662">8</a> by Mark Mandel
		posted on 2/23/2015 at 3:10 AM
		</div>
		<div class="comment_text"><p>Any reason you don't run MySQL via Google Cloud SQL?<br><a href="https://disq.us/url?url=https%3A%2F%2Fcloud.google.com%2Fsql%2Fdocs%2Fintroduction%3AIamXBqUu3uABYOjWRoq-vgS-T8Y&amp;cuid=3321886" rel="nofollow noopener" title="https://cloud.google.com/sql/docs/introduction">https://cloud.google.com/sq...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1870133814">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1870133814">9</a> (In reply to <a href="#c_1870120662">#8</a>) by Raymond Camden
		posted on 2/23/2015 at 3:21 AM
		</div>
		<div class="comment_text"><p>I didn't know it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1870134029">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1870134029">10</a> (In reply to <a href="#c_1864863174">#6</a>) by Raymond Camden
		posted on 2/23/2015 at 3:22 AM
		</div>
		<div class="comment_text"><p>Ok, had a crash. Going to check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1870136351">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1870136351">11</a> (In reply to <a href="#c_1864863174">#6</a>) by Raymond Camden
		posted on 2/23/2015 at 3:23 AM
		</div>
		<div class="comment_text"><p>Ran it - no results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1870192572">
	<div>
		<img src="https://disqus.com/api/users/avatars/Noleaf.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1870192572">12</a> (In reply to <a href="#c_1870136351">#11</a>) by Justin Carter
		posted on 2/23/2015 at 4:14 AM
		</div>
		<div class="comment_text"><p>That rules that out then :) So does the MySQL process stop running? Or is it just that new connections can no longer be made to it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1870192704">
	<div>
		<img src="https://disqus.com/api/users/avatars/Noleaf.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1870192704">13</a> (In reply to <a href="#c_1870133814">#9</a>) by Justin Carter
		posted on 2/23/2015 at 4:14 AM
		</div>
		<div class="comment_text"><p>Also, $$$ :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1870333508">
	<div>
		<img src="https://disqus.com/api/users/avatars/markmandel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1870333508">14</a> (In reply to <a href="#c_1870192704">#13</a>) by Mark Mandel
		posted on 2/23/2015 at 7:08 AM
		</div>
		<div class="comment_text"><p>Or lots of Ray's time apparently :) and no backups.. or failover...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1870333769">
	<div>
		<img src="https://disqus.com/api/users/avatars/markmandel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1870333769">15</a> (In reply to <a href="#c_1870134029">#10</a>) by Mark Mandel
		posted on 2/23/2015 at 7:08 AM
		</div>
		<div class="comment_text"><p>Dumb question - you're not running out of disk space are you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1870697282">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1870697282">16</a> (In reply to <a href="#c_1870333769">#15</a>) by Raymond Camden
		posted on 2/23/2015 at 2:20 PM
		</div>
		<div class="comment_text"><p>Not dumb - but no.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1872544360">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1872544360">17</a> (In reply to <a href="#c_1864560881">#4</a>) by Raymond Camden
		posted on 2/24/2015 at 12:46 PM
		</div>
		<div class="comment_text"><p>Yo - I posted info from the log here - <a href="https://disq.us/url?url=https%3A%2F%2Fplus.google.com%2Fu%2F0%2F%2BRaymondCamden%2Fposts%2FdVrzXxApjwR%3AgKZXp0lv_uHBo08vKelfD3GK9Ek&amp;cuid=3321886" rel="nofollow noopener" title="https://plus.google.com/u/0/+RaymondCamden/posts/dVrzXxApjwR">https://plus.google.com/u/0...</a>. See anything?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1873449982">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1873449982">18</a> by Raymond Camden
		posted on 2/24/2015 at 9:10 PM
		</div>
		<div class="comment_text"><p>For folks curious - today I made a new instance and switch to Nginx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2283887670">
	<div>
		<img src="https://disqus.com/api/users/avatars/breganasher.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2283887670">19</a> by B Regan Asher
		posted on 10/1/2015 at 3:14 PM
		</div>
		<div class="comment_text"><p>Interesting take on Google Compute.  I just finishing up my first free month and, while I have positives and negatives, overall I found Google's approach to customer support very poor.  And pricing, though lower than EC2, is still high.  I also found some misrepresentations in Google's marketing, which worries me.</p><p>My needs were quite different from yours so you might find my take different.  You can see my review at <a href="https://disq.us/url?url=https%3A%2F%2Fblog.breganasher.com%2F%3Fp%3D16%3AT-jXfxNl9REbwN2b5FxVXIWXmwI&amp;cuid=3321886" rel="nofollow noopener" title="https://blog.breganasher.com/?p=16">https://blog.breganasher.co...</a>.</p><p>Regan</p></div>
	</div>
</div>
		
<div class="comment" id="c_2743276382">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_sJBKJ4UGv3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2743276382">20</a> by Anjou
		posted on 6/21/2016 at 9:03 PM
		</div>
		<div class="comment_text"><p>After a long weekend, GCE is pretty great.  I have no idea how to use the terminal yet just coming off of two years with siteground sites maxing out and the charges for bursts of trafic.. can anybody help me with setting up https:// on my GCE .. i would be so greatful ;D  thank you..</p></div>
	</div>
</div>
		
<div class="comment" id="c_2839799320">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oFFwXxXwxH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2839799320">21</a> by Matt
		posted on 8/16/2016 at 4:49 AM
		</div>
		<div class="comment_text"><p>i have used this more than once, its hard to talk to them and when they remove your billing account after 20$ or more getting taken from your bank .... and it saying i cannot open my compute engine untill i enable my billing account umm wtf?</p></div>
	</div>
</div>
		