
<div class="comment" id="c_1713667180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667180">1</a> by Gary Fenton
		posted on 6/15/2007 at 3:31 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. It gave me an idea that if the site is really busy, e.g. average response time is GT 2000 ms then it could automatically disable some processor intensive functions of the site with a "sorry, we're really busy etc" type of message for the user. That way most users can continue to use the site without it being slowed down further by the more intensive requests.</p><p>But then I read the part where you said that with monitoring switched on you noticed it slowed the site down. Doh. Perhaps there's a way to only monitor just 1 statistic instead of having everything being monitored?</p><p>Do you know if the API lets you access stats from a cluster or does it limit you to just one server's stats at a time? e.g. average response time for the cluster, the number of sessions over the entire cluster, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667195">2</a> by Raymond Camden
		posted on 6/15/2007 at 4:40 PM
		</div>
		<div class="comment_text"><p>Gary, as far as I can see, it is just for one machine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667192">3</a> by Rob Brooks-Bilson
		posted on 6/15/2007 at 5:23 PM
		</div>
		<div class="comment_text"><p>Gary,</p><p>Since CF 8 Enterprise supports monitoring multiple machines, you would think that the ability to do that via the API might be included as well, but as Ray mentions, so far, it looks like you can only monitor the server where the CFC lives.</p><p>A little more digging (or comment from the CF team) might be in order here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667193">4</a> by Jay McConathy
		posted on 6/15/2007 at 8:53 PM
		</div>
		<div class="comment_text"><p>I found this info from Charlie Arehart pretty useful as well.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcarehart.org%2Fblog%2Fclient%2Findex.cfm%2F2007%2F6%2F15%2Fcf8_hiddengem_monitoring_without_enabling_monitoring%3ADiUmc12tLPEmZOrDQOrYoqiN8DQ&amp;cuid=3321886" rel="nofollow noopener" title="http://carehart.org/blog/client/index.cfm/2007/6/15/cf8_hiddengem_monitoring_without_enabling_monitoring">http://carehart.org/blog/cl...</a></p><p>Jay</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667197">5</a> by Raymond Camden
		posted on 6/15/2007 at 9:01 PM
		</div>
		<div class="comment_text"><p>I posted a comment there, but I have to say that I do not know if it is entirely safe to turn on profiling/monitoring. Again, this is JUST my personal experience - but I felt it had too much of an impact on my machine here to leave it on. I'd urge folks to carefully monitor their site (heh, monitor the monitor) if they turn on these features.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667194">6</a> by Sean Corfield
		posted on 6/15/2007 at 10:49 PM
		</div>
		<div class="comment_text"><p>The multiserver monitor exposes some basic information about each server so clearly that information *is* available through the API. Since the API is, by definition, exposed remotely so that the Flex app works, it *must* be possible to get all of that information for a remote server, using a SOAP web service or via Flex Remoting using your own Flex application. Or AIR application. You would need to deal with crossdomain.xml (for Flex Remoting, not for AIR) but it should be possible to pull all this information from any server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667198">7</a> by Raymond Camden
		posted on 6/15/2007 at 11:32 PM
		</div>
		<div class="comment_text"><p>But have you _seen_ the API? Granted there are a lot of methods in servermonitoring.cfc, but none of them seem to be related to this. (As far as I can tell.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667191">8</a> by Rob Brooks-Bilson
		posted on 6/16/2007 at 12:17 AM
		</div>
		<div class="comment_text"><p>That's what I'm saying - it should be possible because CF is already doing it.  It's just a question of if it's documented, and not protected somehow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667202">9</a> by Sean Corfield
		posted on 6/16/2007 at 3:05 AM
		</div>
		<div class="comment_text"><p>@Ray, I'm a bit confused. What is it you think is not possible using the servermonitoring.cfc API? Every single method is remote. Is it just the issue that you need to login to the administrator *locally* before you can use (some of) the servermonitoring remote API?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667203">10</a> by Raymond Camden
		posted on 6/16/2007 at 3:14 AM
		</div>
		<div class="comment_text"><p>This is more Rob than me. Rob wanted to know (and Rob, correct me if I'm wrong), if from Machine A, can I use the server monitor to inspect Machine B, like you can from the CF Admin on Machine A.</p><p>In other words - the CFC currently seems to show everything you get in the Server Monitor. Great.</p><p>But where is the API for the Multiserver Monitor?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667205">11</a> by Raymond Camden
		posted on 6/16/2007 at 3:17 AM
		</div>
		<div class="comment_text"><p>Hmm. Hey Rob - correct me if I'm wrong - but I think the multiserver monitor is simply doing the same calls to other boxes that the SM does to the current server. Which I believe is what Sean was saying. So really, the MultiServer monitor is nothing more than a collection of links to other boxes, with a bit of info shown visually.</p><p>So in theory, we don't need another API at all, we just point to the other box.</p><p>Again - if I'm reading you right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667187">12</a> by Mark Ireland
		posted on 2/20/2008 at 6:23 AM
		</div>
		<div class="comment_text"><p>So getting the ActiveSessionCount for one application by name is like this?</p><p>&lt;cfinvoke component="cfide.adminapi.servermonitoring" method="getActiveSessionCount" returnVariable="result"<br>name="myApp1"&gt;</p><p>Total session count = &lt;cfdump var="#result#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667189">13</a> by Raymond Camden
		posted on 2/20/2008 at 7:02 AM
		</div>
		<div class="comment_text"><p>Yep. Check the docs (view the CFC) to confirm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667188">14</a> by Mark
		posted on 2/20/2008 at 4:51 PM
		</div>
		<div class="comment_text"><p>What docs?</p><p>Isnt this undocumented?</p><p>Isnt this cfc encrypted?</p><p>How would I do this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667186">15</a> by Raymond Camden
		posted on 2/20/2008 at 7:16 PM
		</div>
		<div class="comment_text"><p>You do know that you cna open a CFC in your browser and it will self-document, right? Try it. You need the Admin/RDS password, but you will see a nicely documented page for the CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667190">16</a> by Mark Ireland
		posted on 2/21/2008 at 5:05 AM
		</div>
		<div class="comment_text"><p>I tried this and got a timeout.</p><p>Can I point to your blog.cfc and see this working?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667200">17</a> by Raymond Camden
		posted on 2/21/2008 at 6:56 AM
		</div>
		<div class="comment_text"><p>You mean my blog.cfc here? No. I can't turn off the passwords. I can say I've seen issues with the timeout before -o n Macs. Try reloading the page after the timeout. I bet it will work then.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667201">18</a> by Mark Ireland
		posted on 2/21/2008 at 12:24 PM
		</div>
		<div class="comment_text"><p>Is it as simple as</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%2Fcfc%2Fmycomp.cfc%3AKSlI46LnWYJKpEWua-cg0yItBYw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com/cfc/mycomp.cfc">http://www.mysite.com/cfc/m...</a></p><p>Do I add my password to this url?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667206">19</a> by Raymond Camden
		posted on 2/21/2008 at 4:52 PM
		</div>
		<div class="comment_text"><p>No. CF will prompt you for the password.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667204">20</a> by cfdev
		posted on 4/2/2008 at 5:56 PM
		</div>
		<div class="comment_text"><p>I turned Monitoring on and thought that the server was going to keep collecting data after I logged out. But when I logged back to Administrator and went to Server Monitor, it only showed data starting from the present.</p><p>How do I make Server Monitor display data for, say, two weeks, without having to keep my browser open? Is it even possible? :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667207">21</a> by Raymond Camden
		posted on 4/2/2008 at 6:08 PM
		</div>
		<div class="comment_text"><p>I think you mean just the dashboard. I know I see older data in the other screens. I just hit my SM locally and I haven't hit in weeks, but it had yesterdays data in it - again though - in the sub pages, not hte dashboard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667208">22</a> by Andy Matthews
		posted on 6/10/2008 at 7:29 PM
		</div>
		<div class="comment_text"><p>Quick question about the getHeartBeat method. It returns a structure containing a key called serveruptime. The docs just say "SERVERUPTIME -- Server's start time". I just ran this on my machine locally (restarted last night) and got the value "65877267". Is this in milliseconds? I'm guessing it is because that amounts to 18 hours which is roughly equivalent to when I restarted my local machine. I'd just like confirmation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667209">23</a> by Raymond Camden
		posted on 6/10/2008 at 11:04 PM
		</div>
		<div class="comment_text"><p>You got me there. I'd log a bug report with Adobe to edit the CFC to make this more clear. But I'm sure your right about it being MS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667211">24</a> by Nkonye
		posted on 8/22/2008 at 1:18 PM
		</div>
		<div class="comment_text"><p>I've been experimenting with servermonitoring.cfc and I was wondering if you knew of any method of getting this information for separate machines.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667212">25</a> by Raymond Camden
		posted on 8/22/2008 at 3:05 PM
		</div>
		<div class="comment_text"><p>The only way I think you can do this if you build a CFC to expose the methods of the SM to other machines. So your code on machine A would use web services to hit your new on machine B, which in turn would talk to the SM API on that machine.</p></div>
	</div>
</div>
		