
<div class="comment" id="c_1713677986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677986">1</a> by Brian Panulla
		posted on 3/10/2008 at 11:41 PM
		</div>
		<div class="comment_text"><p>Even if you do decide to use the built in Web server, if JRun is idle it'll just get swapped out into virtual memory and not really cause much of a problem.</p><p>I'm also dubious that running the ColdFusion service (which is just an embedded JRun instance) is significantly less than the ColdFusion service + Built-in Web server. It'd be worth a test, but I wouldn't put money on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677987">2</a> by Ken Ford
		posted on 3/10/2008 at 11:43 PM
		</div>
		<div class="comment_text"><p>There is a workaround to creating/running multiple websites on Windows XP Pro:</p><p>With a GUI:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjetstat.com%2Fiisadmin%2F%3A1zypS82Q2KGRSQAZ1RqMTP_NwpA&amp;cuid=3321886" rel="nofollow noopener" title="http://jetstat.com/iisadmin/">http://jetstat.com/iisadmin/</a></p><p>Scripting:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fandreineculau.wordpress.com%2F2006%2F01%2F23%2Fmultiple-websites-using-iis-51-on-windows-xp%2F%3AK561OwSezYbQc0rNIS7NNtJO7NQ&amp;cuid=3321886" rel="nofollow noopener" title="http://andreineculau.wordpress.com/2006/01/23/multiple-websites-using-iis-51-on-windows-xp/">http://andreineculau.wordpr...</a></p><p>Windows Vista use IIS and allows multiple web sites.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677992">3</a> by charlie griefer
		posted on 3/11/2008 at 12:34 AM
		</div>
		<div class="comment_text"><p>yeah, IISadmin is a cool tool, but can be a pain if you're working on numerous web sites and have to switch back and forth frequently.</p><p>at work, we're on XP on the desktop, so i have to deal with doing that.  at any given point on any given day i could be asked to make a tweak to one of several sites, so i'm switching back and forth frequently.</p><p>at home i do the apache thing (even though my personal site(s) are on IIS).  sure, i'd love to keep the environments as identical as possible, but the sites are fairly basic and i've yet to run into any issues at the web server level.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677993">4</a> by Will B.
		posted on 3/11/2008 at 12:50 AM
		</div>
		<div class="comment_text"><p>There's always the Virtual Machine route, too.  Where I'm at I have to switch constantly between a current environment and the new version being developed.  One runs on Jrun with a thrice-daily updated WAR file and the other is just straight ColdFusion (not even multiserver install).  To switch back and forth in the same machine is super-painful, so a VM works great for me.</p><p>Unfortunately, unless I want to map out directories (network sharing and such), I have to have Eclipse installed on both VM's...and I never have everything exactly the same, like snippets, etc.  Nor is my Firefox install even the same, with plugins, bookmarks.</p><p>But it works good enough!</p><p>- Will B.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677995">5</a> by Gary Funk
		posted on 3/11/2008 at 1:15 AM
		</div>
		<div class="comment_text"><p>So I was setting up my notebook for development and then realized IIS would only do on e site on XP. Then bingo, find the answer on Ray's blog. You have to love the CF community.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677988">6</a> by todd sharp
		posted on 3/11/2008 at 1:38 AM
		</div>
		<div class="comment_text"><p>IIS 7 (ships with Vista) allows multiple sites with no hacks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677991">7</a> by Michael Brennan-White
		posted on 3/11/2008 at 3:48 AM
		</div>
		<div class="comment_text"><p>The caveat for Vista Basic users is that IIS is not installed(able?).  Though I probably should install Apache I stuck with the development server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677998">8</a> by todd sharp
		posted on 3/11/2008 at 4:10 AM
		</div>
		<div class="comment_text"><p>People really buy Vista basic?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677994">9</a> by Jeff Smallwood
		posted on 3/11/2008 at 5:59 AM
		</div>
		<div class="comment_text"><p>I give a huge vote for the VM route too. We use them on my team and we've found having multiple VM images with different server configurations is a great way to develop for multiple environments. And one huge plus that I like is that unless I actually need the servers up, my computer isn't bogged down by running all the services in the background all day, every day. Makes my PC more reliable and run smoother. It also allows me to simulate a closer client-server setup like the production environment. I user VMWare to save the "state" of each server when I'm done rather than turning it off. What way I can shut down one server and bring another one up in less than 20 seconds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677997">10</a> by Raymond Camden
		posted on 3/11/2008 at 6:36 AM
		</div>
		<div class="comment_text"><p>@Todd: People really buy Vista?</p><p>;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677990">11</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 3/11/2008 at 4:04 PM
		</div>
		<div class="comment_text"><p>@Ray - What were the differences in the CGI variables? I haven't run into that yet, so it would be good to know in advance...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677989">12</a> by todd sharp
		posted on 3/11/2008 at 4:36 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>I guess I stepped right into that one...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677996">13</a> by Raymond Camden
		posted on 3/11/2008 at 5:06 PM
		</div>
		<div class="comment_text"><p>@Steve- I don't have an exact list. But since CGI stuff comes from the web server, each one does things a bit differently. In fact, that's one reason you can output CGI.RAY in ColdFusion. ColdFusion allows you to use ANY CGI variable since it is so... well variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678000">14</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 3/11/2008 at 7:57 PM
		</div>
		<div class="comment_text"><p>@Ray - Thanks Ray, I figured as much. I haven't had any problems with the basics (server_name, script_name, path, etc), but I figured I'd ask.</p><p>BTW, we've gone back and forth enough, you can call me Cutter;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678001">15</a> by David McGuigan
		posted on 3/11/2008 at 8:13 PM
		</div>
		<div class="comment_text"><p>I've been on Vista with infinitely many IIS sites (our production<br>environment will shortly be Server 2008) for forever and a day now and<br>it's worked REALLY well. By far the most stable OS I've ever been on.<br>Like, I've been in love with it and am contemplating marriage to it.<br>Granted, I've completely overhauled the look and feel of Vista and<br>turned off all of the 'aero' stuff, but still. I'm so much happier than<br>when I was on OS X. That sounds like a joke, but I'm totally serious.</p><p>Another quick, random development tip while we're at it is to write a<br>simple batch file to start or stop all of your disparate 'server'<br>software automatically.</p><p>What that lets you do is boot into your OS without all of the services<br>starting automatically so that if you work off of a laptop, for example,<br>you can have those resources freed up for better performance when you're<br>not developing without having to manually shut them all down after<br>startup. It's pretty effective for heavy apps, playing Crysis for instance.</p><p>Here's an example of one that will launch IIS, CF8, and MySQL (in that<br>order).</p><p>Start.bat contents:<br>Net Start "IIS Admin Service"<br>Net Start "ColdFusion 8 Application Server"<br>Net Start "MySQL"</p><p>That's it. Pretty simple but way h-core sweet and a bag of chips you<br>feel me dawg?</p><p>What makes you feel even cooler is creating a shortcut to it in your<br>taskbar (to make Vista look way mo betta, use TrueLaunchBar) and<br>swapping out the ColdFusion logo for its icon.</p><p>Here's a screenshot:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.fleet19.com%2FSharing%2FVista-1.jpg%3AOFZhugINDB6oZCcuRBDnqXTbuCg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.fleet19.com/Sharing/Vista-1.jpg">http://www.fleet19.com/Shar...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678004">16</a> by Julian Halliwell
		posted on 3/12/2008 at 1:43 PM
		</div>
		<div class="comment_text"><p>+1 for using a VM. And (@Will B) you can easily map drives so that you can use an editor on your host OS to work with the files on the VM: exactly the same as if you were mapping to a physically separate dev server, but with the speed of a local drive.</p><p>Only downside is the additional Windows licensing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678002">17</a> by Jeff Smallwood
		posted on 3/12/2008 at 4:08 PM
		</div>
		<div class="comment_text"><p>One other thing about the VM arrangement that Julian reminded me of. When I first started using VMs, I actually disliked the idea of having my code inside the VM. It meant if I had multiple server arrangements I needed to keep more copies of the code than I wanted. I typically have the code in one spot but need to test against different server setups (that can mirror different customers). Plus, sometimes I just need to check a file w/o firing up the VM and getting all the servers running.</p><p>So what I do is keep all the code and my IDE (CFEclipse) on the local PC. Then all my VM webservers have virtual directories that point to the code on my physical PC via UNC paths. I can keep the code in one place (with minimal copies) but load any server I want to run it. I've been using this arrangement for almost a year and have found it to be the most flexible development setup I've ever used. But I know other's mileage will vary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678003">18</a> by David Johnson
		posted on 3/26/2008 at 5:41 PM
		</div>
		<div class="comment_text"><p>When developing on an XP box you can just spawn multiple virtual directories under the main site.  It's not entirely the same as multiple websites, but I've never had a problem moving my applications.</p></div>
	</div>
</div>
		