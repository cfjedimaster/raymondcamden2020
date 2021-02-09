
<div class="comment" id="c_1713673658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673658">1</a> by Yves
		posted on 10/28/2007 at 6:29 PM
		</div>
		<div class="comment_text"><p>Yeah !!!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673673">2</a> by Scott Stroz
		posted on 10/28/2007 at 6:54 PM
		</div>
		<div class="comment_text"><p>Ray - any idea if the issue with Apache integration is an Apache issue, or an Apache on Leopard issue?  I only ask because I was going to upgrade my Winders Apache to the latest version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673672">3</a> by Raymond Camden
		posted on 10/28/2007 at 7:20 PM
		</div>
		<div class="comment_text"><p>I don't think so as I now have everything working (thanks to Mark!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673675">4</a> by Kurt Wiersma
		posted on 10/28/2007 at 7:32 PM
		</div>
		<div class="comment_text"><p>Ray did you use the wsconfig tool to hook CF 8 to apache 2.2? I have CF working but have yet to the get the connector working despite trying wsconfig. I get an error when I use wsconfig to compile the connector. I can compile manually but then I get an error from apache saying the connector is wrong architecture.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673676">5</a> by Raymond Camden
		posted on 10/28/2007 at 7:35 PM
		</div>
		<div class="comment_text"><p>Yes, I did. I had to use sudo and run it from the command line. Mark helped me with that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673674">6</a> by Kurt Wiersma
		posted on 10/28/2007 at 8:11 PM
		</div>
		<div class="comment_text"><p>Interesting neither a clean install or running the wsconfig tool is giving me a <a href="http://disq.us/url?url=http%3A%2F%2Fmod_jrun22.so%3APtMBvYYeJl8K017YDhpGVfdR2p0&amp;cuid=3321886" rel="nofollow noopener" title="mod_jrun22.so">mod_jrun22.so</a> that apache likes. Apache says:</p><p>Cannot load /Applications/JRun4/lib/wsconfig/1/<a href="http://disq.us/url?url=http%3A%2F%2Fmod_jrun22.so%3APtMBvYYeJl8K017YDhpGVfdR2p0&amp;cuid=3321886" rel="nofollow noopener" title="mod_jrun22.so">mod_jrun22.so</a> into server: dlopen(/Applications/JRun4/lib/wsconfig/1/<a href="http://disq.us/url?url=http%3A%2F%2Fmod_jrun22.so%3APtMBvYYeJl8K017YDhpGVfdR2p0&amp;cuid=3321886" rel="nofollow noopener" title="mod_jrun22.so">mod_jrun22.so</a>, 10): no suitable image found.  Did find:\n\t/Applications/JRun4/lib/wsconfig/1/<a href="http://disq.us/url?url=http%3A%2F%2Fmod_jrun22.so%3APtMBvYYeJl8K017YDhpGVfdR2p0&amp;cuid=3321886" rel="nofollow noopener" title="mod_jrun22.so">mod_jrun22.so</a>: mach-o, but wrong architecture</p><p>Not sure what I am going wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673671">7</a> by Scott P
		posted on 10/29/2007 at 12:10 AM
		</div>
		<div class="comment_text"><p>I'm not getting it to run with apache2 either.  Been through all of the recompiles and still getting the same message Kurt has.  Not sure what voodoo Mark Drew pulled to get his running but I'm giving up for now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673677">8</a> by Raymond Camden
		posted on 10/29/2007 at 12:57 AM
		</div>
		<div class="comment_text"><p>What do you mean by recompiles? I never had to recompile anything on my end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673681">9</a> by Lola LB
		posted on 10/29/2007 at 1:10 AM
		</div>
		<div class="comment_text"><p>Great . . . looks like I'm going to be upgrading to Leopard very soon - need to pick up another HD for Time Machine (don't want to wipe out the drive I'm currently using as backup - I kinda need it to back up before upgrading. ;-)  Need to wrap up this project that I'm working on - going to do my darnedst best to get it finished before end of week!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673680">10</a> by Sam Farmer
		posted on 10/29/2007 at 1:19 AM
		</div>
		<div class="comment_text"><p>Awesome.  This is going to speed up my migration to Leopard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673678">11</a> by Kurt Wiersma
		posted on 10/29/2007 at 1:51 AM
		</div>
		<div class="comment_text"><p>When you go into wsconfig and setup the apache connection there is an option to compile the connector on the advanced screen. I have tried this option checked and unchecked but still have the same problem with the apache connector. I wonder if someone could post a working <a href="http://disq.us/url?url=http%3A%2F%2Fmod_jrun22.so%3APtMBvYYeJl8K017YDhpGVfdR2p0&amp;cuid=3321886" rel="nofollow noopener" title="mod_jrun22.so">mod_jrun22.so</a> so we could use that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673679">12</a> by Kurt Wiersma
		posted on 10/29/2007 at 5:09 AM
		</div>
		<div class="comment_text"><p>I finally got cf 8 connected to apache 2.2 on 10.5. Thanks to a post to the CF on Mac email list I was able to run the following two commands to get the connector to compile for my 64 bit Intel machine.</p><p>apxs -c -Wc,-arch -Wc,x86_64 -Wl,-arch -Wl,x86_64 -n jrun22 \<br>mod_jrun22.c jrun_maptable_impl.c jrun_property.c jrun_session.c \<br>platform.c jrun_mutex.c jrun_proxy.c jrun_utils.c</p><p>apxs -i -n jrun22 -S LIBEXECDIR=/Applications/JRun4/lib/wsconfig/1/ \<br><a href="http://disq.us/url?url=http%3A%2F%2Fmod_jrun22.la%3AkLXQG3sdZMpWKCXghWha8-hab58&amp;cuid=3321886" rel="nofollow noopener" title="mod_jrun22.la">mod_jrun22.la</a></p><p>Special thanks to Ulf Unger for figuring those commands out!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673686">13</a> by Mark Drew
		posted on 10/29/2007 at 10:49 AM
		</div>
		<div class="comment_text"><p>@Kurt: Did you delete ALL of the JRUN directory? It seems you had an old version. Also, what kind of install did you do? Mutliserver or Standalone?</p><p>I removed JRUN completely after stopping Apache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673660">14</a> by Kurt Wiersma
		posted on 10/29/2007 at 4:33 PM
		</div>
		<div class="comment_text"><p>@Mark - I did a completely fresh install of cf 8 multiserver. I installed into a completely new directory and yet for some reason wsconfig didn't compile the right connector for me. Luckily when I was able to use Ulf's instructions for manually compiling the right connector.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673659">15</a> by Ant Cooper
		posted on 10/29/2007 at 11:17 PM
		</div>
		<div class="comment_text"><p>I tried recompiling <a href="http://disq.us/url?url=http%3A%2F%2Fmod_jrun22.so%3APtMBvYYeJl8K017YDhpGVfdR2p0&amp;cuid=3321886" rel="nofollow noopener" title="mod_jrun22.so">mod_jrun22.so</a> from source but still get the message about being the wrong architecture. I substituted x86_64 with i386 as I'm on a MacBook - but still no luck :-(</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673661">16</a> by phi
		posted on 11/3/2007 at 12:27 AM
		</div>
		<div class="comment_text"><p>Anyone else having CF8 hang and then die? The logs keep telling me: The process has forked and you cannot use this CoreFoundation functionality safely. You MUST exec().<br>Break on __THE_PROCESS_HAS_FORKED_AND_YOU_CANNOT_USE_THIS_COREFOUNDATION_FUNCTIONALITY___YOU_MUST_EXEC__() to debug.</p><p>and the console tells me it can't instantiate a java virtual machine because of whatever is happening.  I had initially gotten it running as a normal CF with a link to the hacked <a href="http://disq.us/url?url=http%3A%2F%2Fmod_jrun22.so%3APtMBvYYeJl8K017YDhpGVfdR2p0&amp;cuid=3321886" rel="nofollow noopener" title="mod_jrun22.so">mod_jrun22.so</a> connection to Apache2 but now, its a no go. Help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673662">17</a> by gpberlin
		posted on 11/8/2007 at 9:20 PM
		</div>
		<div class="comment_text"><p>Hi phi, I ran into this error too... but if I launch CF via</p><p>sudo /Applications/ColdFusion8/bin/coldfusion start</p><p>it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673667">18</a> by Michael
		posted on 11/13/2007 at 3:13 PM
		</div>
		<div class="comment_text"><p>Has anyone been able to get ColdFusion 8 working on Leopard Server? It seems to be working on standard Leopard but not in a server environment. Any help would be appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673668">19</a> by Ann Terrell
		posted on 11/29/2007 at 8:38 AM
		</div>
		<div class="comment_text"><p>I had the same problem as some of you installing CF8 using Apache on Leopard; and was going nuts installing/uninstalling CF hoping some magic combination of steps would do the trick.  I finally got both working on my MBP with i386 chip.</p><p>I don't really understand some of the architecture behind all this, but based on a clue I found at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.fatcatsoftware.com%2Fblog%2F2007%2Frunning-fogbugz-on-leopard%3A_ShAD0uhGRRsQGLkcCKd-IyBfMM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.fatcatsoftware.com/blog/2007/running-fogbugz-on-leopard">http://www.fatcatsoftware.c...</a>, I decided to take a peek at my apache compilation report:  sudo apachectl -V:</p><p>Server version: Apache/2.2.6 (Unix)<br>Server built:   Sep 23 2007 18:07:19<br>Server's Module Magic Number: 20051115:5<br>Server loaded:  APR 1.2.7, APR-Util 1.2.7<br>Compiled using: APR 1.2.7, APR-Util 1.2.7<br>Architecture:   64-bit</p><p>But I have a 32 bit system!  So I followed the hack he did to strip out the architectures I didn't want from apache:</p><p>bw-mbp:~] bwebster% cd /usr/sbin</p><p>[bw-mbp:~] bwebster% sudo cp httpd httpd-fat</p><p>[bw-mbp:~] bwebster% sudo lipo httpd -thin i386 -output httpd</p><p>And it's a miracle - after that I was able to follow the instructions to "recompile" using the apxs commands -</p><p>Hope this helps someone else who has been pulling out their hair.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673666">20</a> by Jonas Eriksson
		posted on 3/25/2008 at 5:24 PM
		</div>
		<div class="comment_text"><p>Hi all, thanks for this - although I had to google for Mark Drew's site first - am I missing the obvious link on this page?</p><p>Anyway, it seems Adobe is always jsut a little (?!) bit behind OS X developments. I can not believe they still haven't got a OS X 10.5 Leopard SERVER CF8 installer out.... it's been how long now? Can they not afford the Apple Developer License? It's about 300 USD a year, I'd happily pay it for them it that's what's holding them up. Luckily they got CF8 working on Tiger Server, and it is the best combo I've ever used (with the XServe as well, that is). However, at some point, we'd really like to move on to Leopard Server, and it is approaching Q2/2008 and still no viable solution for this? That's just poor Adobe.</p><p>Thanks to all for doing Adobe's work and helping us develop for CF8 on modern machines!!<br>Jonas</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673682">21</a> by Jonas Eriksson
		posted on 3/25/2008 at 5:26 PM
		</div>
		<div class="comment_text"><p>Silly me - just discovered the blue link - apologies for my first line :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673683">22</a> by Raymond Camden
		posted on 3/25/2008 at 5:29 PM
		</div>
		<div class="comment_text"><p>To be fair to Adobe Jonas, Adobe is already working on support, but they aren't just taking care of Leopard, but also supporting 64bit OSes and making other updates as well. So this isn't just something they want to 'patch'. It IS in development right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673685">23</a> by Jonas Eriksson
		posted on 3/25/2008 at 6:43 PM
		</div>
		<div class="comment_text"><p>Thanks for this Raymond, it's good to hear such positive news from you guys who get information from Adobe. I had my hopes that it was in development, not too surprising really. The question of interest is - what is the timeframe of that development - and if they forget to fix something like the FCK-Editor in Safari during that release because they were too busy integrating Sharepoint or tweaking Exchange-integration, I might just come ranting again and expect them to provide a feedback. I'm not expecting you to answer this.</p><p>However...<br>perhaps you could talk to your Adobe buddies to introduce a list of upcoming changes/releases expected to be delivered in Q1/Q2/Q3 etc. in the devnet sections? That would be enormously helpful. Or does this exist, and I can't find it (very possible!). Before they block this with a comment about "never telling the outside world about new revision timeframes", I'm not expecting them to announce when Photoshop CS5X will be launched, I'm strictly referring to fixing issues with the currently released product  - CF in this case..</p><p>That way developers could plan their efforts and not waste time doing things they'd expect to work by now (six month after a major OS was released I wanted to use the local CF development setup advocated on the Adobe site with CFEclipse on OS X Leopard - turns out it doesn't work - bummer!). Without comments by you or Ben (he answered my questions about the FCK-Editor compatibility with Safari: "within a few weeks"), we'd probably be left entirely in the dark as to when things will change from Adobe's side, no?</p><p>As fun as it is to re-install and tweak settings, some prefer to offer new exciting features to their clients and generally makes it easier to advocate CF in the wide world.</p><p>Currently we'll either patch wild west style, everyone doing it a little bit different, and have a working solution across modern browsers gainign the most popularity, or we resort to selling the idea of CF8's cool new features (I love them, don't get me wrong!) to the clients and then handle the distress calls that feature xyz doesn't work in the best browsers. Or Option 3 - simply not implement half of the cool new features and wait for Adobe to fix it all. Sometime.</p><p>Contrary to Adobe's policy of fixing a hundred (little and big things) months after first release, I doubt I am the only one who would sometimes welcome a TINY patch to fix ONE problem only, and get that bit out of the way. If it means I have to manually overwrite ten files in two folders to get a usable CF'ed-FCKeditor in Safari 3.x, then so be it. But I would prefer Adobe to post instructions on this and not searching the web for an hour and attemt to do it myself, only to find out that if I try this on Vista, it won't work. Or that it stops working when we're finally blessed with the Adobe CF Updater in April/May 2008.</p><p>If you're still with me, my main point is that I believe Adobe could improve a lot on managing customer expectations, and I believe it would also be better for Adobe to communicate small steps of improvements with at least a rough timeline - after all, these GOT to exist internally already.</p><p>We're not going to leave ColdFusion and Adobe if they ever miss a self-set "expected deadline", but it would help to focus development enormously if there was an indication of when what will be fixed!</p><p>End of rant. <br>Not directed at you. <br>But you're one of the few who get through to Adobe. <br>Hope's on the Jedi! <br>May the force of the CF community be with you! :-)<br>Feel free to forward to Adobe "CF-CEO". <br>Feel free to delete to clear up your page.</p><p>All the best,<br>Jonas</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673684">24</a> by Raymond Camden
		posted on 3/25/2008 at 10:41 PM
		</div>
		<div class="comment_text"><p>Heh, well, I have to tell you - compared to the old days, folks know a LOT more about CF updates then they used to. ;) Some things have to be kept secret of course.</p></div>
	</div>
</div>
		