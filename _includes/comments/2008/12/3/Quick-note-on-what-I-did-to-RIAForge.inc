
<div class="comment" id="c_1713710317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710317">1</a> by Mark Drew
		posted on 12/3/2008 at 8:31 PM
		</div>
		<div class="comment_text"><p>See.. that is the problem with doing awesome applications for the community, the community don;t pay that much ;)</p><p>Keep up the good work sir!</p><p>on another note, I am sure you can have multiple apahe instances if they are listening to different IP's ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710305">2</a> by Raymond Camden
		posted on 12/3/2008 at 8:49 PM
		</div>
		<div class="comment_text"><p>@MD: Do you mean ports? The issue I had was with both Apaches trying to use 80. It didn't care about the IP.</p><p>As I said, I could have easily pushed SVN to 81, but then I'd probably piss off the owners. Shoot, as far as I know, there is no easy way to tell Subclipse that project X, which was at URL Y, is not at Y:81.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710313">3</a> by Thomas Case
		posted on 12/3/2008 at 8:51 PM
		</div>
		<div class="comment_text"><p>I was wondering what was going on yesterday.  Thanks for the update, and the site is greatly appreciated.  I have found several good tools on the site, and having a specific focus (e.g., Adobe related technologies) helps greatly.  One isn't lost in the myriad of other projects, like on SourceForge, Codeplex, Google Code, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710315">4</a> by Mark Drew
		posted on 12/3/2008 at 8:56 PM
		</div>
		<div class="comment_text"><p>@Ray: No, I do mean IP's I havent tried it but it should be like IIS in that respect... that you can have multiple IP's pointing to multiple Apache Instances</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710314">5</a> by Mark Drew
		posted on 12/3/2008 at 8:57 PM
		</div>
		<div class="comment_text"><p>Ray, from the apache's httpd.conf <br>#<br># Listen: Allows you to bind Apache to specific IP addresses and/or<br># ports, instead of the default. See also the &lt;VirtualHost&gt;<br># directive.<br>#<br># Change this to Listen on specific IP addresses as shown below to <br># prevent Apache from glomming onto all bound IP addresses.<br>#<br>#Listen 12.34.56.78:80</p><p>Of course, you would then need multiple IP's...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710319">6</a> by Raymond Camden
		posted on 12/3/2008 at 9:02 PM
		</div>
		<div class="comment_text"><p>I'm not arguing that I could do N IPs. I'm arguing that I could have N apache services using 1 port. The issue I had was with the Apache service crashing. It would show as running but not return requests. That's why I wanted to try 2 Apache services. If SVN died, it would only bring down that server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710325">7</a> by Matt Riley
		posted on 12/3/2008 at 10:33 PM
		</div>
		<div class="comment_text"><p>What about name based virtual hosts (<a href="http://disq.us/url?url=http%3A%2F%2Fhttpd.apache.org%2Fdocs%2F2.2%2Fvhosts%2Fname-based.html%29%3F%3AmupN5pM1cnj_iAgvov_6m8h1GBw&amp;cuid=3321886" rel="nofollow noopener" title="http://httpd.apache.org/docs/2.2/vhosts/name-based.html)?">http://httpd.apache.org/doc...</a> This is something I currently use on my local machine and on the shared development server in the office.</p><p>The last line of my httpd.conf file has the following:<br>Include conf/vhosts/*.conf</p><p>Then in the vhosts folder I have a number of conf files, each corresponding to a separate application. Below you could have something like the following in the vhosts folder:</p><p>App1.conf:<br>&lt;VirtualHost *:80&gt;  <br>   ServerName <a href="http://disq.us/url?url=http%3A%2F%2Fapp1.riaforge.org%3AqucBPdeUaD7m94pEa6S4XhC9aUk&amp;cuid=3321886" rel="nofollow noopener" title="app1.riaforge.org">app1.riaforge.org</a><br>   DocumentRoot c:/inetpub/app1/wwwroot<br>   ErrorLog c:/inetpub/logs/app1.log<br>   ServerAlias App1<br>&lt;Directory " c:/inetpub/app1/wwwroot "&gt;<br>    Options Indexes FollowSymLinks<br>    AllowOverride None<br>    Order allow,deny<br>    Allow from all<br>&lt;/Directory&gt;<br>&lt;/VirtualHost&gt;</p><p>App2.conf:<br>&lt;VirtualHost *:80&gt;  <br>   ServerName <a href="http://disq.us/url?url=http%3A%2F%2Fapp2.riaforge.org%3AIiPucxARqCu0frE6RzYQrWyChRw&amp;cuid=3321886" rel="nofollow noopener" title="app2.riaforge.org">app2.riaforge.org</a><br>   DocumentRoot c:/inetpub/app2/wwwroot<br>   ErrorLog c:/inetpub/logs/app2.log<br>   ServerAlias App2<br>&lt;Directory " c:/inetpub/app2/wwwroot "&gt;<br>    Options Indexes FollowSymLinks<br>    AllowOverride None<br>    Order allow,deny<br>    Allow from all<br>&lt;/Directory&gt;<br>&lt;/VirtualHost&gt;</p><p>The end result will be a separate httpd.exe process (not Windows service) for each host all running off of the same ip address and port 80. In the above example you would have three httpd.exe processes, one for each conf file in the vhosts folder and one for the httpd.conf file.</p><p>Is this what you are trying to accomplish? I hope this is helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710321">8</a> by Ezra Parker
		posted on 12/3/2008 at 10:53 PM
		</div>
		<div class="comment_text"><p>Mark is quite right, you can limit the IP/port "signature" that Apache uses. I believe that the default installation setting for the Listen directive only specifies a port number, like so:</p><p>Listen 80</p><p>This means it will bind to this port for all the IP addresses on the machine. So if you change the directive on the existing server to include the IP(s), you would then be able to configure a second instance of the server on another IP, still using port 80, e.g.:</p><p>First instance:<br>127.0.0.1:80</p><p>Second instance:<br>127.0.0.2:80</p><p>Also, while Matt's approach might help in *NIX environments (although I think there is a separate child process spawned for each request, not each virtual host), on Windows there are only two httpd.exe processes -- the child process multithreads to handle multiple requests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710320">9</a> by Raymond Camden
		posted on 12/4/2008 at 12:14 AM
		</div>
		<div class="comment_text"><p>@Matt - named based virtual hosts is what I have now. I wanted to move away from that to two services with the thought that - if SVN screwed up a service, it would only screw up its own service. Does that make sense now?</p><p>@Ezra - So if I had 2 IPs on the machine, I could run 2 instances of Apache, both on 80, but with different ports? If so, I can give that a try then if things continue to crap out on RIAForge.</p><p>Probably the _best_ solution would be a dedicated machine for SVN, but that would make config a bit harder. Right now we modify a SVN config file for Apache when you turn on SVN access, and we do a graceful restart of Apache to read it in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710318">10</a> by Todd Rafferty
		posted on 12/4/2008 at 4:02 AM
		</div>
		<div class="comment_text"><p>"Probably the _best_ solution would be a dedicated machine for SVN, but that would make config a bit harder. Right now we modify a SVN config file for Apache when you turn on SVN access, and we do a graceful restart of Apache to read it in."</p><p>Put something (oh, like, ColdFusion?) on the other box and communicate between boxes via webservice? or share a file between the two boxes and figure out how one box can restart the service of another?  Plenty of options there. I'm sure you're aware of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710326">11</a> by Ezra Parker
		posted on 12/4/2008 at 4:52 AM
		</div>
		<div class="comment_text"><p>@Ray - Essentially, yes. Technically, the 2 separate instances would use the same port (80), but different IPs -- you just need to make sure that the primary instance isn't binding to 80 on all the IPs available to the box (by using the Listen directive without any IP specified).</p><p>As a side note, you'll probably want to have it listen on the loopback address as well, so I'm thinking that your primary config would have:</p><p>Listen 127.0.0.1:80<br>Listen 65.36.216.233:80</p><p>And the SVN config would listen only on the alternate IP:</p><p>Listen <a href="http://disq.us/url?url=http%3A%2F%2Fxxx.xxx.xxx.xxx%3AvwIERIC947ylDrMJ6gfljBB5STc&amp;cuid=3321886" rel="nofollow noopener" title="xxx.xxx.xxx.xxx">xxx.xxx.xxx.xxx</a>:80</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710322">12</a> by Hatem Jaber
		posted on 12/4/2008 at 6:09 AM
		</div>
		<div class="comment_text"><p>@Ray, I think Ezra is right, although i never ran 2 instances of Apache, I know that on one of our boxes we are running IIS on port 80 and restricting it to a set of IP's and Apache is controlled by listening to a specific set of IP's. Both are running on port 80 and we have not had any issues with it at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710323">13</a> by Raymond Camden
		posted on 12/4/2008 at 7:38 AM
		</div>
		<div class="comment_text"><p>Thanks guys. Right now I'm taking a 'wait and see' approach. I'm hoping the shinier Apache/SVN will help alleviate the issues. If not, ServersAlive should do a good job of hiding it from me.</p><p>If Adobe wants more done, they can hire a server grunt. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710324">14</a> by Raymond Camden
		posted on 12/4/2008 at 5:27 PM
		</div>
		<div class="comment_text"><p>@ToddR: Yeah, I know I could do that - but I didn't want to make the connection so delicate. I know HTTP isn't delicate per se, but... do you get why I was a bit concerned? Right now there isn't good 'fallback' if something goes wrong. It is one of a large list of things I'd add to RIAForge given more time.</p><p>Hopefully - if things are better now, I can return to giving more power to comanagers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710312">15</a> by Todd Rafferty
		posted on 12/4/2008 at 5:53 PM
		</div>
		<div class="comment_text"><p>@Ray: Given that you could communicate via webservice, you should also be able to try/catch on the webservice and if it's not responding, then you can have it email you and tell you that the SVN service is down.  You could also have the main box put up a small notice on projects that are using the SVN service "SVN Service is down currently, please be patient and try again... etc."</p><p>It may be more 'delicate,' but it can also be a little more proactive?  Tossing it out as a suggestion.  I'm certainly not telling you (or Adobe) what to do. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710329">16</a> by Raymond Camden
		posted on 12/4/2008 at 6:10 PM
		</div>
		<div class="comment_text"><p>Yeah. Let me just see how things play out. So far so good. I'd have to ask Adobe if they are willing to pay for another machine, but I assume they would be. I know they want RIAForge to succeed.</p></div>
	</div>
</div>
		