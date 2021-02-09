
<div class="comment" id="c_1713681544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681544">1</a> by JohnEric
		posted on 6/5/2008 at 11:25 PM
		</div>
		<div class="comment_text"><p>Our older sites used that to determine what to show to the user.  Our newer sites are using different configuration files  for live and dev.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681547">2</a> by Terrence Ryan
		posted on 6/5/2008 at 11:29 PM
		</div>
		<div class="comment_text"><p>On a Windows host cfregistry can get you the machine name, which is alright if you can guarantee your code will always run on a windows box.</p><p>Additionally, I think there are commands that you can execute from the command line that will tell you what host you are on but they too are dependent on OS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681548">3</a> by Raymond Camden
		posted on 6/5/2008 at 11:29 PM
		</div>
		<div class="comment_text"><p>Do you use source control for the config files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681551">4</a> by Peter J. Farrell
		posted on 6/5/2008 at 11:34 PM
		</div>
		<div class="comment_text"><p>You can leverage Java here to get the local ip and use rDNS to get the host name:<br>&lt;cfset inet = CreateObject("java", "java.net.InetAddress") /&gt;<br>&lt;cfset hostName = inet.getByName(inet.getLocalHost().getHostAddress()).getHostName()&gt;<br>&lt;cfoutput&gt;#hostName#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681550">5</a> by Gary Gilbert
		posted on 6/5/2008 at 11:39 PM
		</div>
		<div class="comment_text"><p>What happens if you are host headers and hosting multiple sites on the same IP?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681552">6</a> by Peter J. Farrell
		posted on 6/5/2008 at 11:47 PM
		</div>
		<div class="comment_text"><p>@Gary,<br>IIRC, you'll return the machine name back.  I just tried it on a server that uses Apache virtual hosts and it returned <a href="http://disq.us/url?url=http%3A%2F%2Fservername.host.com%3AoAyOguX_MEYRZirVxLjSHPDmeTU&amp;cuid=3321886" rel="nofollow noopener" title="servername.host.com">servername.host.com</a> which is the machine name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681553">7</a> by joel
		posted on 6/5/2008 at 11:52 PM
		</div>
		<div class="comment_text"><p>cgi.server_name is also problematic if you're running on a server cluster. It will return the name of the actual server that is executing the current template. Say you have <a href="http://disq.us/url?url=http%3A%2F%2Fwww.baloneypants.com%3AuZ1KcOF6usVT5ZJ4kbpEWNrWuNk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.baloneypants.com">http://www.baloneypants.com</a> load balanced across 2 servers named baloney1 and baloney2. If you use cgi.server_name, you'll get either baloney1 or baloney2 as a result, but not <a href="http://disq.us/url?url=http%3A%2F%2Fwww.baloneypants.com%3AuZ1KcOF6usVT5ZJ4kbpEWNrWuNk&amp;cuid=3321886" rel="nofollow noopener" title="www.baloneypants.com">www.baloneypants.com</a>.</p><p>I ran into this issue when using SSL on a cluster. I wanted to switch to https when doing a user login, then back to http upon success, for performance reasons. I figured I could construct the URL using cgi.server_name, cgi.script_name, etc, but no dice. Eventually, I stored the server name that I wanted to use in an XML file and loaded it as part of the configuration, then constructed the URL using that name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681554">8</a> by nicholas
		posted on 6/6/2008 at 12:08 AM
		</div>
		<div class="comment_text"><p>You could prevent this kind of URL spoofing in your web server config by only responding to specific host names on the IP address.</p><p>I think I read somewhere a while back that as a security practice, you should prevent direct access to your web site's IP address if you can.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681555">9</a> by Raymond Camden
		posted on 6/6/2008 at 12:14 AM
		</div>
		<div class="comment_text"><p>nicholas - Ah, thats a good idea. So don't allow *.x.com to hit your production box, only <a href="http://disq.us/url?url=http%3A%2F%2Fx.com%3AFp25meIdNgOFObzUEq5G61fJpWI&amp;cuid=3321886" rel="nofollow noopener" title="x.com">x.com</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fwww.x.com%3A564TuLHevY9xgJQ0OGnEEadjVZw&amp;cuid=3321886" rel="nofollow noopener" title="www.x.com">www.x.com</a>. Yeah, that would do the trick, wouldn't it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681557">10</a> by shag
		posted on 6/6/2008 at 12:14 AM
		</div>
		<div class="comment_text"><p>What does HTTP_HOST give you?  This is what I have always used (it includes the port number also), but I don't know how it would act based on your change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681559">11</a> by RockettMan
		posted on 6/6/2008 at 12:23 AM
		</div>
		<div class="comment_text"><p>We've run into the same thing, clustered servers.  We resolved it by putting the server name into a text file and reading the text file into a variable.<br>&lt;cfsavecontent variable="application.ServerName"&gt;&lt;cfinclude template="/shared/server_name.txt"&gt;&lt;/cfsavecontent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681560">12</a> by Michael Long
		posted on 6/6/2008 at 12:30 AM
		</div>
		<div class="comment_text"><p>I've have a directory named 'sites' on my server located BELOW the root directory that contains named ini files.</p><p>So expandPath('/../sites/orders.ini') goes down below the site root and then back up into the sites folder.</p><p>This lets me place sever/site specific information there where it won't get clobbered by site file updates, syncs, and so on. It's also outside of the site root so it can't get downloaded by potentially malicious users.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681561">13</a> by nicholas
		posted on 6/6/2008 at 12:34 AM
		</div>
		<div class="comment_text"><p>@Ray - Correct... at my past employer, we had a series of Windows servers, all running CF. Each server was assigned one static external IP address. In IIS, we would assign the IP address and * to a default web site with only a blank html page and no access permissions.<br>This way, if you tried to access the server by IP or a spoofed URL, you would get the standard browser login and would be denied access.<br>Then, we would create separate web sites with explicit host names defined which would respond only to the valid domains. <br>This worked rather well, and I noticed a decrease in hack attempts since most malicious attacks are targeted at IP addresses.<br>I know this approach can be done in Apache and Sun One as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681563">14</a> by Joshua Curtiss
		posted on 6/6/2008 at 12:35 AM
		</div>
		<div class="comment_text"><p>Whereas I also have done the cgi.server_name sniffing method in the past, I now exclusively do config files like JohnEric mentioned.</p><p>I use source control on the config files, but only for a _template_ of the config file, with sensitive details (like passwords, etc) that I wouldn't want in the repository, removed.</p><p>So if my config file is config.xml, I'd have a config-template.xml in the repo. Then server backups keep me safe from losing the exact settings on the server.</p><p>This is nice, because usually right before I deploy to production, I want to run the app completely in production mode, but before I put it ON the production server.</p><p>And a nice compromise between the two approaches... I have many times had a "Mode" setting as one of my configs, with either a "Production" or "Development" value, so I just have a cfif application.mode is "Development" condition for places where I want my cfdumps.</p><p>Just some thoughts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681558">15</a> by Jason Rushton
		posted on 6/6/2008 at 12:41 AM
		</div>
		<div class="comment_text"><p>To get the local machine name we just use this:</p><p>serverName = CreateObject("java", "java.net.InetAddress").getLocalHost().getHostName();</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681564">16</a> by Scott P
		posted on 6/6/2008 at 12:56 AM
		</div>
		<div class="comment_text"><p>+1 @Jason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681562">17</a> by Peter J. Farrell
		posted on 6/6/2008 at 1:29 AM
		</div>
		<div class="comment_text"><p>@Jason, @Scott P, Thats exactly what I suggested in comment #4. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681567">18</a> by Scott P
		posted on 6/6/2008 at 1:36 AM
		</div>
		<div class="comment_text"><p>Sorry Peter - it was surrounded by massive amounts of text and I overlooked it.</p><p>@Peter +2</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681565">19</a> by Jason Rushton
		posted on 6/6/2008 at 1:46 AM
		</div>
		<div class="comment_text"><p>@Peter<br>Yours has an extra couple method calls I don't think you need</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681566">20</a> by DanaK
		posted on 6/6/2008 at 5:00 PM
		</div>
		<div class="comment_text"><p>-<br>On a Windows host cfregistry can get you the machine name, which is alright if you can guarantee your code will always run on a windows box. <br>-</p><p>Maybe I'm in the minority, but I can't imagine cfregistry being enabled on a production environment? That scares me heh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681568">21</a> by JC
		posted on 6/6/2008 at 5:05 PM
		</div>
		<div class="comment_text"><p>If you run CF in multiserver mode, you can get the name of the specific CF instance you're running on. That might help a bit, especially if you use unique names across a cluster (which I think was required in MX, but not in 7 or 8).</p><p>At any rate, it's an easy way for me to tell what environment I'm in without having to rely on URLs.</p><p>&lt;cfscript&gt;<br>host = CreateObject("java", "java.net.InetAddress").getLocalHost().getHostName();<br>cfserv = createObject("java","jrunx.kernel.JRun").getServerName();<br>&lt;/cfscript&gt;</p><p>if cfserv contains 'dev' or 'test' or 'staging' I know I'm not on a production box; if host contains 1 or 2 I know which box in the cluster I'm on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681569">22</a> by JohnEric
		posted on 6/6/2008 at 5:45 PM
		</div>
		<div class="comment_text"><p>Yes, our config files are in SVN.</p><p>We've generally been using coldspring and modelglue for our newer sites.  Our controllers are managed by CS and use the ModelGlue.Bean.CommonBeans.SimpleConfig class.  In the application.cfc we set up a parent bean factory for MG.  Then, in the controllers, there is a setBeanFactory method which also pulls the configuration bean so it is available throughout the application.</p><p>We also use ANT build scripts that can deploy to different environments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681571">23</a> by Sid Wing
		posted on 6/6/2008 at 7:09 PM
		</div>
		<div class="comment_text"><p>Maybe I just the simplistic way out of things sometimes but, I simply do a search for a specific file on on the server.  If that particular file exists, then it's the DEV server and display the dump. I normally make it some really screwy name that has nothing to do with the site I am building (like C64.TXT for working on a Mac site - grin). Then I run something like below as part of my error handling:</p><p>&lt;code&gt;<br>&lt;cfif FileExists("C:\dev.txt")&gt;<br>	&lt;cfdump var="#exception#"&gt;<br>&lt;cfelse&gt;<br>    &lt;p&gt;<br>    Something went wrong. Quick - do a 'LOAD "*",8,1'.<br>    &lt;/p&gt;<br>&lt;/cfif&gt;<br>&lt;/code&gt;</p><p>I think someone else further up the list mentioned this as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681574">24</a> by Grant Eagon
		posted on 10/8/2009 at 8:27 AM
		</div>
		<div class="comment_text"><p>These are all great suggestions for a certain problem.  But what if you're trying to write code that's independent of the OS the code is running on?  What if you're proxying the request to another port on a CF dev server?</p><p>In my code, I don't want to have to setup the dev server and the production server differently.  I want them to be the same so that I don't hit and unexpected error when deploying code.</p><p>@Michael Long's idea seems the most promising, but it needs something - independence of conf files.</p><p>I found this thread, googling "spoof coldfusion CGI" - which is interesting because I'm doing it for the sake of setting up a dev server, and it seems you're all talking about it for the sake of keeping hackers out.</p><p>From what I've tried, I can't alter the CGI scope from a simple cfset... I'm hoping there's a solution in java that would allow me to set the script_name.</p><p>Currently, since I'm reverse proxying the request with apache, I get a url with a port and an ugly repository path in it, that breaks some of the app logic [generous term for the bad code I'm fixing].  I've been able to clean it up in most cases, but my using CGI.SCRIPT_NAME are still breaking.</p></div>
	</div>
</div>
		