
<div class="comment" id="c_1713726859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726859">1</a> by Todd Rafferty
		posted on 10/13/2010 at 4:37 PM
		</div>
		<div class="comment_text"><p>"request a file or folder to be clearer." ... er... to be cleared? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726869">2</a> by Raymond Camden
		posted on 10/13/2010 at 4:38 PM
		</div>
		<div class="comment_text"><p>Doh. Fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726872">3</a> by Grant Eagon
		posted on 10/13/2010 at 5:03 PM
		</div>
		<div class="comment_text"><p>Ha!  My code's terrible performance forced me to turn this on years ago and I always use it!  :)</p><p>Seriously though, I think there's a big difference in the experience developers gain when they run an app across multiple domains, that developers whose experience is primarily with single domain or intranet apps lack.</p><p>I have been working with one of those "website builder" sites for years, which seemed to exponentially stress my server with traffic from search engines.  If you had one bad query running in your app, you had hundreds of bad queries running on the site, and hundreds of thousands of bad queries running on your live sites.</p><p>This forced me to get better at Apache configs, SQL and code performance because the server would go down under load.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726870">4</a> by Louis
		posted on 10/13/2010 at 5:19 PM
		</div>
		<div class="comment_text"><p>Sorry if this is a stupid question, but I have to be sure before turning this option on.</p><p>I'm assuming that it is only the template that is cached. As in, the database/directory queries or, say, http requests etc contained within a template are not cached unless this is specified in the query tag? We have live stock levels on our website and obviously I would not want those to be cached along with the template?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726871">5</a> by Raymond Camden
		posted on 10/13/2010 at 5:25 PM
		</div>
		<div class="comment_text"><p>Not a stupid question. So yes - just your CF code is cached, not the actual results. So as a simple example, if you had #randRange(1,10)# in the CFM, you would still get random numbers output. Caching of the _results_ is another topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726873">6</a> by Louis
		posted on 10/13/2010 at 5:38 PM
		</div>
		<div class="comment_text"><p>Fantastic. We run a reasonably busy e-commerce site which uses live stock levels from SQL Server. Common sense would say that of course queries etc aren't cached, that would be counter-productive, but I had to be sure and couldn't find a definitive answer on Google! :)</p><p>Thanks for your help, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726874">7</a> by David R. McGraw
		posted on 10/13/2010 at 5:51 PM
		</div>
		<div class="comment_text"><p>After reading this I decided to see what Railo offers in the form of the same setting.  Railo has 3 settings, Check Always, Check Once, and Check Never.  My setting was set to check once for <a href="http://disq.us/url?url=http%3A%2F%2Fwww.oyova.com%3AvxaYZnUAWwatT-esLP1CIlVorH8&amp;cuid=3321886" rel="nofollow noopener" title="www.oyova.com">www.oyova.com</a> and although I thought that would be good, I went ahead and set it to never, ( the equivalent of the setting noted above ) and it increased the speed by at least 50%.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726875">8</a> by Sean Coyne
		posted on 10/13/2010 at 5:52 PM
		</div>
		<div class="comment_text"><p>We didn't use it at my old job because we had a lot of older sites where the staff used Contribute to edit it.  This is basically a glorified WYSIWYG FTP client and they would make changes and they wouldn't be displayed.</p><p>I tried adding a directory watcher event gateway, but the results weren't great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726883">9</a> by Raymond Camden
		posted on 10/13/2010 at 5:57 PM
		</div>
		<div class="comment_text"><p>I remember Contribute - it wasn't bad for what it did.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726884">10</a> by Eddie
		posted on 10/13/2010 at 6:00 PM
		</div>
		<div class="comment_text"><p>We use it, we have to, otherwise all the years of crappy code would crush out servers. Unfortunately, we've always talked about automatically flushing, but the PHB's haven't made it a priority. So each dev must login to each server and flush cache. Absolute waste of resources.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726885">11</a> by Grant Eagon
		posted on 10/13/2010 at 6:04 PM
		</div>
		<div class="comment_text"><p>We used to do the same thing.  Then I started doing all my dev on my local machine and versioning the software.  HUGE improvement.  I don't know why more people don't do *that*.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726974">12</a> by Louis
		posted on 10/13/2010 at 6:09 PM
		</div>
		<div class="comment_text"><p>OK so I turned it on. One word: rapid.</p><p>Good tip, can't believe I hadn't looked at it before!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726960">13</a> by MB
		posted on 10/13/2010 at 6:10 PM
		</div>
		<div class="comment_text"><p>So, for instance, we are changing the code on our site on a regular basis to meet the users needs.  Will we have to clear the cache in the CF admin in order to reflect these changes?<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726959">14</a> by David R. McGraw
		posted on 10/13/2010 at 6:11 PM
		</div>
		<div class="comment_text"><p>MB, just work in the process to your release schedule.  Every time you make a release, part of the process will be to flush the cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726957">15</a> by MB
		posted on 10/13/2010 at 6:13 PM
		</div>
		<div class="comment_text"><p>David - gotcha...thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726954">16</a> by MB
		posted on 10/13/2010 at 6:15 PM
		</div>
		<div class="comment_text"><p>sorry one other thing.  Is there a way to programatically flush this cache without going into the CF admin?  We have a couple of programmers and we dont want to have to have them log in and do this everytime.  I would rather add something into our admin site to handle this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726953">17</a> by Raymond Camden
		posted on 10/13/2010 at 6:17 PM
		</div>
		<div class="comment_text"><p>Take a look at my Cache Clearer project. It uses the Admin API. You can too (well, as long as you have CF ENT).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726971">18</a> by MB
		posted on 10/13/2010 at 6:21 PM
		</div>
		<div class="comment_text"><p>yup...got that.  Thanks, Ill check it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726955">19</a> by Tom Jenkins
		posted on 10/13/2010 at 6:32 PM
		</div>
		<div class="comment_text"><p>We tend to use this only on our servers that have a small, limited number of applications running on them (normally around 5 - 10).</p><p>We cache quite a lot of cfc's and their respective methods within the Application scope so it would mean on our larger servers, which have 90+ applicastions running on them, whenever we make one simple change to a file we have would have to clear the entire cache, which would then mean all of the cfc's need re-adding to Application scope. In testing, this meant sites would be very, very slow until everything had caught up and re cached.</p><p>... that is until I just read about CacheClearer! Which seems to fit and solve the above problem :D</p><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726961">20</a> by cf wookie
		posted on 10/14/2010 at 12:09 AM
		</div>
		<div class="comment_text"><p>*bows*..fantastic one jedi! thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726970">21</a> by Aaron Neff
		posted on 10/14/2010 at 12:53 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Just wanted to say, good post. Trusted Cache feature is very good, but I just felt it could be enhanced. I'd filed ER #74860, in case anyone is interested (no votes yet), here: <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D74860%3AMJN8gKsN-QkcM8YQxV_Mddvi6Do&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=74860">http://cfbugs.adobe.com/cfb...</a></p><p>Basically, this ER is for allowing applications to enable/clear their own application-specific trusted cache. I just figured a THIS.enableAppTrustedCache for Application.cfc and a clearAppTrustedCache() function would be helpful.</p><p>Thanks,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726965">22</a> by johans
		posted on 10/14/2010 at 1:07 AM
		</div>
		<div class="comment_text"><p>One thing to be aware of is if you app writes/cfincludes CF templates. If the template name does not change the output will not change, also you could quickly fill up the template cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726966">23</a> by Patrick Heppler
		posted on 10/14/2010 at 2:10 AM
		</div>
		<div class="comment_text"><p>Nope, Site runs as fast as before. But that's fine, Site was always fast enough. There are many ways to get performance boost. MySQL Query Cache, Apache's mod_deflate etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726956">24</a> by johans
		posted on 10/14/2010 at 2:18 AM
		</div>
		<div class="comment_text"><p>@Ray - so this got me thinking - how would you process CFML (that changes) inside a template?</p><p>Say I create an in-memory file ram:///mycfml.cfm and in a template use cfinclude to cause the CFML in mycfml.cfm to be run.</p><p>Trusted cache will output the  template with the included content as cached the first time. Any changes in mycfml.cfm will never appear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726968">25</a> by Raymond Camden
		posted on 10/14/2010 at 3:57 PM
		</div>
		<div class="comment_text"><p>I'm pretty sure it would not pick up on it - but I've not done testing with CFMs in the VFS. Let me do a quick test later today to confirm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726963">26</a> by Raymond Camden
		posted on 10/14/2010 at 4:00 PM
		</div>
		<div class="comment_text"><p>@Aaron: Smart idea - I just voted for it. (Remember kids - anyone who likes something reported on the public bug tracker can vote for it to add their support.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726975">27</a> by Marcel
		posted on 10/14/2010 at 4:10 PM
		</div>
		<div class="comment_text"><p>We turned it on after reading about it, we didn't see any (major) improvements in speed. After a few hours we pressed the 'clear template cache' button to see what kind of impact it would have on the server, our server hing and we had to restart the ColdFusion instance (full queue in seefusion). We did press the button to see what the impact would be after a code update (yes I know, not really smart on a production server).</p><p>Is it normal that all requests will hang for (quite) some time?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726972">28</a> by Raymond Camden
		posted on 10/14/2010 at 4:16 PM
		</div>
		<div class="comment_text"><p>I definitely see a big slow down after clearing it all, but not a permanent break - just a real slow next hit. Then again, I've also got a framework in place and I'm also clearing _that_ cache too. So your server should definitely not die just because you clear the cache. I'd look at other settings as well - perhaps your min/max JVM memory settings.</p><p>Of course, thats another reason I use CacheClearer - so I don't have to clear the entire cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726958">29</a> by Marcel
		posted on 10/14/2010 at 4:23 PM
		</div>
		<div class="comment_text"><p>Thanks, the server is running fine normally (after our upgrade to 64bit due to memory issues before). The JVM settings are fine and tuned a while back by the makers of seefusion.</p><p>I think we were just a bit impatient and restarted CF too fast, waited about 40 secs till restart because the phone began to rang with the support desk members complaining about the application.</p><p>I'll do a better test in our staging enviroment and implement cacheclearer in our software to clear specific files that are changed at the update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726964">30</a> by Raymond Camden
		posted on 10/14/2010 at 8:20 PM
		</div>
		<div class="comment_text"><p>Ok, so for the guy who asked, the VFS is indeed impacted by trusted cache. Going to write a quick blog entry demonstrating this now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726967">31</a> by Raymond Camden
		posted on 10/14/2010 at 8:20 PM
		</div>
		<div class="comment_text"><p>Ok, so for the guy who asked, the VFS is indeed impacted by trusted cache. Going to write a quick blog entry demonstrating this now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726973">32</a> by Matthew
		posted on 11/5/2010 at 8:58 AM
		</div>
		<div class="comment_text"><p>Hi Ray. Just ran a quick trial and bizarrely it slowed things down. I ran my test by running a Paessler stress test before and after switching this feature on. It slowed all pages by about 100ms. I'll have to investigated because I only had a quick play. I'll report back but are there any scenarios where you could see a slow down happening and therefore not to use this feature i.e. perhaps if you use a framework?<br>Cheers<br>Matthew</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726976">33</a> by Raymond Camden
		posted on 11/5/2010 at 5:42 PM
		</div>
		<div class="comment_text"><p>I've seen it not give a good boost, but I've never seen it slow down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726969">34</a> by Daniel Godinez
		posted on 6/2/2011 at 3:23 AM
		</div>
		<div class="comment_text"><p>We've enabled trusted cache as our source code resides on a separate server from the CF8 instances. We instantly saw improvement in the load time of our pages. I have to admit though, on two occasions so far (out of 15), the coldfusion servers have hung during the clearing of the cache. The last time I executed it was during a low traffic period so I let it run and it did not come good till 102 secs, other times it executes immediately. This being the case, if you are taking advantage of clustering in coldfusion with session replication it sounds like it is far more beneficial to restart the instance instead of clearing the cache as it takes less time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726979">35</a> by Srinivas
		posted on 2/22/2012 at 8:59 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Do we  have any option to clear Trusted cache in CF MX(6.1)?<br>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726981">36</a> by Raymond Camden
		posted on 2/22/2012 at 9:04 PM
		</div>
		<div class="comment_text"><p>I honestly have no idea. It may require a server restart (CF service I  mean, not the complete box).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726984">37</a> by Gareth Arch
		posted on 3/14/2012 at 6:49 PM
		</div>
		<div class="comment_text"><p>@Ray,<br>Do you know where the trustedcache (and component cache) is located?  We want to use our Ant script to clear it, but weren't sure where the files were located.  I *thought* it was cfusion.ear\cfusion.war\WEB-INF\cfclasses but after clicking "clear template cache" and "clear component cache" all of the files that were in that directory still appear to be there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726985">38</a> by Raymond Camden
		posted on 3/14/2012 at 6:57 PM
		</div>
		<div class="comment_text"><p>I think it's RAM based - ie, it loads the compiled class in RAM. I believe - stress - believe - that Doug Hughes had a CF ANT task project and part of it would support clearing the cache via the Admin API. I'd google for that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726983">39</a> by Gareth Arch
		posted on 3/14/2012 at 7:00 PM
		</div>
		<div class="comment_text"><p>Or is this something that is loaded to memory?  And then I'm looking in completely the wrong spot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726986">40</a> by Gareth Arch
		posted on 3/14/2012 at 7:01 PM
		</div>
		<div class="comment_text"><p>Thanks, Ray!  I'll check that out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1735215294">
	<div>
		<img src="https://disqus.com/api/users/avatars/leeish.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1735215294">41</a> by leeish
		posted on 12/10/2014 at 4:23 PM
		</div>
		<div class="comment_text"><p>Does anyone know what the impact of trusted cache is on the machines RAM? Where is this cache stored? Might I need to increase the RAM on my VM if I implement this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1735223135">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1735223135">42</a> (In reply to <a href="#c_1735215294">#41</a>) by Raymond Camden
		posted on 12/10/2014 at 4:28 PM
		</div>
		<div class="comment_text"><p>Trusted Cache tells CF to *not* look at a files mod date to see if it needs to be recompiled. It should only need to store the path of files checked so RAM usage should be minimum (afaik) and *far* outweighed by the benefits.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1735442743">
	<div>
		<img src="https://disqus.com/api/users/avatars/leeish.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1735442743">43</a> (In reply to <a href="#c_1735223135">#42</a>) by leeish
		posted on 12/10/2014 at 6:40 PM
		</div>
		<div class="comment_text"><p>I was thinking it stored those files in memory somewhere, thus using additional memory. From your answer, it sounds like CF always stores compiled versions of pages in memory, but with trusted cache just tells CF not to look at mod dates, so RAM usage wouldn't really increase as a whole. I'm using it on a server, and have been sometime, and I'm trying to narrow down some memory issues I'm having. Was curious how that actually worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1735728753">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1735728753">44</a> (In reply to <a href="#c_1735442743">#43</a>) by Raymond Camden
		posted on 12/10/2014 at 9:18 PM
		</div>
		<div class="comment_text"><p>The files aren't stored in cache. Instead, CF doesn't look at the CFM to see if it needs to be recompiled.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1735786588">
	<div>
		<img src="https://disqus.com/api/users/avatars/leeish.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1735786588">45</a> (In reply to <a href="#c_1735728753">#44</a>) by leeish
		posted on 12/10/2014 at 9:46 PM
		</div>
		<div class="comment_text"><p>So pardon my ignorance. Where the hell does it get the information to display to send to the user? I get the not checking/recompiling, but the information has to be stored somewhere right? Taking up either RAM, VRAM, in the JRE memory or something right? If you don't feel like explaining and can point to a relevant article I understand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1735794877">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1735794877">46</a> (In reply to <a href="#c_1735786588">#45</a>) by Raymond Camden
		posted on 12/10/2014 at 9:50 PM
		</div>
		<div class="comment_text"><p>ColdFusion takes your CFM file and compiles it into Java byte code that can then be run by the underlying Java engine. With Trusted Cached turned off, every day you request foo.cfm, ColdFusion looks at the file to see if it has been changed - like by you editing it. If it hasn't changed, it doesn't need to recompile it, right?</p><p>So with TC turned on, CF compiles the file once and *never* looks again. That's why you need to clear the TC (or clear the file from TC) if you make an edit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1735841129">
	<div>
		<img src="https://disqus.com/api/users/avatars/leeish.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1735841129">47</a> (In reply to <a href="#c_1735794877">#46</a>) by leeish
		posted on 12/10/2014 at 10:13 PM
		</div>
		<div class="comment_text"><p>Thanks for the explanation. Appreciate your blog and contributions to the community by the way. I would imagine a lot of us stand upon your and Ben's shoulders.</p></div>
	</div>
</div>
		