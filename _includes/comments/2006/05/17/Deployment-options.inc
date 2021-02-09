
<div class="comment" id="c_1713653026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653026">1</a> by Phillip Senn
		posted on 5/17/2006 at 6:24 PM
		</div>
		<div class="comment_text"><p>I used Beyond Compare, from <a href="http://disq.us/url?url=http%3A%2F%2Fwww.scootersoftware.com%3ANmEpiwG1r7NUcg9eGOMtWifxek4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.scootersoftware.com">http://www.scootersoftware.com</a>.<br>Very user friendly, and has automated processes.<br>I make a copy of "everything that's changed since yesterday".</p><p>The more you read the manual, the more things you can do with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653032">2</a> by Jim
		posted on 5/17/2006 at 6:25 PM
		</div>
		<div class="comment_text"><p>I use Subversion as well - at some point I want to look at ANT as I think it's possible to script this process which would make things really easy... I just haven't had the time :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653031">3</a> by Christopher Wigginton
		posted on 5/17/2006 at 6:34 PM
		</div>
		<div class="comment_text"><p>For large enterprise deployment, you probably want to look into ANT or MyEclipse Sync-On-Demand.</p><p>For single server setups with single directory configuration, using standard remote server in Dreamweaver will work fine in most cases.  I often work with a dev directory and once the new features are working fine, I usually diff the changes with something like Visual Slick Edit and only copy what I need to.</p><p>And there's always the CF editor a lot of us cut our teeth on,  CFStudio/Homesite+, which still supports scriptable deployment and has a wizard that automatically builds the scripts for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653027">4</a> by Erki Esken
		posted on 5/17/2006 at 6:38 PM
		</div>
		<div class="comment_text"><p>I've always wondered who and how uses the "Packaging &amp; Deployment &gt; ColdFusion Archives" in CF admin? Can .car file deployment be done with ant tasks or is it manually via the admin interface only? How does it work with clustered CF servers?</p><p>Anyone with experience in CF .car/.ear/.war deployment care to comment?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653030">5</a> by Raymond Camden
		posted on 5/17/2006 at 6:41 PM
		</div>
		<div class="comment_text"><p>I've used CARs, but only to back up settings before a new CF install.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653033">6</a> by dave ross
		posted on 5/17/2006 at 6:55 PM
		</div>
		<div class="comment_text"><p>Right now I have a script that exports a tag from CVS/SVN and pushes to prod server(s) (they are on the same network).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653029">7</a> by Tony Petruzzi
		posted on 5/17/2006 at 6:58 PM
		</div>
		<div class="comment_text"><p>I think the biggest problem that Tom is having is overthinking the situation. I'm a one man shop. I use Subversion and FTP my changes to the server. Probably 99.9999% of you out there do the same. Am I going to use ANT, write custom script or automated programs to do this for me? No, of course not, Why? Well because the amount of time it would take me to learn the scripting language, write and test the scripts, would take away from my development time. Now if you're a big time shop, with a lot of developers, working on different branches and pataches, then you want to invest the time to automate the deployment process. So Tom, stick with what you got and don't waste your time trying to "fix" or improve a process unless you can get some ROI out of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653037">8</a> by djuggler
		posted on 5/17/2006 at 7:10 PM
		</div>
		<div class="comment_text"><p>You mean things actually get out of development and get deployed?!<br>----<br>As a one man shop, I primarily use FTP. Whenever possible, I use secure ftp. I like &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.winscp.com%2F%3AHJGOFKQKqD6cItykBIod4TyP9Cw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.winscp.com/">http://www.winscp.com/</a>"&gt;WinScp (see <a href="http://disq.us/url?url=http%3A%2F%2Fwinscp.com%3AzRiV5xAv5P7ZSN5Jww0tPw8gzKA&amp;cuid=3321886" rel="nofollow noopener" title="winscp.com">winscp.com</a>)&lt;/a&gt;.</p><p>My sop used to be to encrypt (apparently cf7 can bytecode) the source until final payment was received. I became lazy and simply trust my clients now. Not protecting source in someway has cost me 2 or 3 times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653034">9</a> by Rick Osborne
		posted on 5/17/2006 at 7:14 PM
		</div>
		<div class="comment_text"><p>It's surprisingly easy to add an "Automatic Update"-type of feature to your deployed apps, especially now that CF has built-in message hashing (checksum) functions:</p><p>1. Make a nightly process on the deployment server (<a href="http://disq.us/url?url=http%3A%2F%2Fupdates.mycompany.com%3AKrmwaRczuwFpQP28tcR7MLGmDeI&amp;cuid=3321886" rel="nofollow noopener" title="updates.mycompany.com">updates.mycompany.com</a>) that does:<br>  a. MD5/SHA your production source tree.  (md5deep is great for this, but it can also be done in CF)<br>  b. Add a database entry for each file that has changed.<br>  c. Optionally, add a text field that holds a "diff -U" for ease of debugging.<br>2. Make a script on the deployed app that does:<br>  a. Call (via RPC or RSS or whatever) the deployment server to find updated files.<br>  b. Fetch the updates (via FTP or HTTP)<br>  c. Check the updates for integrity (MD5/SHA)<br>  d. Log the updates<br>  e. Backup the to-be-replaced files<br>  f. Optionally, install the updates or email an admin to visit a "finish my updates" page<br>3. Schedule said script to run nightly/weekly/whatever.</p><p>I rigged something like this up in under a day at one of the companies I used to work for.  I think it was a grand total of 4 CF files:<br> - Nightly checker (deployment)<br> - Update checker (client)<br> - Script server (deployment)<br> - Finish-Your-Updates page (client)</p><p>It was unbelievably useful for keeping our multitude of clients in sync.  Since you are only pushing files to production after you've tested them thoroughly (one would hope), you'll have very few breakages.  It also makes you keep your code in one trunk instead of forking it off for every client.</p><p>Yes, there are security holes here and there, but nothing that can't be plugged with a bit of thought.  Code signing, for example, was a bit heavier than we needed -- if someone was going to use DNS poisoning to get their files on our client's server, our client had bigger problems they needed to sort out.  However, client authentication and IP verification on the deployment server were very easy to work in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653036">10</a> by Tim Elsner
		posted on 5/17/2006 at 7:52 PM
		</div>
		<div class="comment_text"><p>Every one of my projects has a build.xml file. I can then use ANT (built into eclipse) to do the deploy. I like it because it guaranties that my deploy is the same every time. No worries about forgetting to copy a file or two. I know very little about ANT, so I’m sure there are many more things I could do, and probably better ways. Here is an example of one of my build file. This file checks out the latest version of the code from subversion, creates a tag of this version in the repository, and then copies it to the production server.</p><p>&amp;lt;project<br>name="projectName" default="build" basedir="."&amp;gt;<br>&amp;lt;target name="init" description="Set Props"&amp;gt;<br>&amp;lt;!-- Define build vars --&amp;gt;<br>      &amp;lt;property<br>name="<a href="http://disq.us/url?url=http%3A%2F%2Fproject.name%3A6Bb-Z9OkGiXUvsJnJyo_Postwvw&amp;cuid=3321886" rel="nofollow noopener" title="project.name">project.name</a>" value="projectName" /&amp;gt;<br>&amp;lt;property name="project.build.root" value="c:\Build"<br>/&amp;gt;</p><p>      &amp;lt;!-- Define destination targets --&amp;gt;<br>      &amp;lt;property<br>name="dest" location="\\<a href="http://disq.us/url?url=http%3A%2F%2Fserver.com%3A7wOWsLSP5JoK28Ps06dh-XfAEek&amp;cuid=3321886" rel="nofollow noopener" title="server.com">server.com</a>\c$" /&amp;gt;<br>&amp;lt;property name="dest.www"<br>location="${dest}\Inetpub\wwwroot\${<a href="http://disq.us/url?url=http%3A%2F%2Fproject.name%3A6Bb-Z9OkGiXUvsJnJyo_Postwvw&amp;cuid=3321886" rel="nofollow noopener" title="project.name">project.name</a>}" /&amp;gt;<br>&amp;lt;property name="<a href="http://disq.us/url?url=http%3A%2F%2Fdest.inc%3AHqPUNdTRIhdRyQxwUD3uc6EsAAQ&amp;cuid=3321886" rel="nofollow noopener" title="dest.inc">dest.inc</a>"<br>location="${dest}\Inetpub\include\${<a href="http://disq.us/url?url=http%3A%2F%2Fproject.name%3A6Bb-Z9OkGiXUvsJnJyo_Postwvw&amp;cuid=3321886" rel="nofollow noopener" title="project.name">project.name</a>}_inc" /&amp;gt;<br>&amp;lt;property name="<a href="http://disq.us/url?url=http%3A%2F%2Fdest.com%3ArUobcItJCzbCjNVWyGmg8svjtSo&amp;cuid=3321886" rel="nofollow noopener" title="dest.com">dest.com</a>" location="${dest}\Inetpub\com"<br>/&amp;gt;</p><p>      &amp;lt;!-- Create the time stamp. --&amp;gt;<br>      &amp;lt;tstamp&amp;gt;<br>&amp;lt;format property="buildTime"<br>pattern="yyyyMMdd_hhmmss_aa" /&amp;gt;<br>      &amp;lt;/tstamp&amp;gt;<br>&amp;lt;!-- Define svn data. --&amp;gt;<br>      &amp;lt;property name="svn.rooturl"<br>value="<a href="http://disq.us/url?url=svn%3A%2F%2Fserver.xyz.com%2F%3AoHi9M0NIKOcqT81VlKHs1763jpg&amp;cuid=3321886" rel="nofollow noopener" title="svn://server.xyz.com/">svn://server.xyz.com/</a>" /&amp;gt;<br>      &amp;lt;property<br>name="svn.username" value="yourUserName" /&amp;gt;<br>&amp;lt;property name="svn.password" value="yourPassword" /&amp;gt;<br>&amp;lt;property name="svn.projecturl"<br>value="${svn.rooturl}${<a href="http://disq.us/url?url=http%3A%2F%2Fproject.name%3A6Bb-Z9OkGiXUvsJnJyo_Postwvw&amp;cuid=3321886" rel="nofollow noopener" title="project.name">project.name</a>}/trunk/" /&amp;gt;<br>      &amp;lt;property<br>name="svn.comurl" value="${svn.rooturl}com/" /&amp;gt;<br>&amp;lt;property name="svn.tagurl"<br>value="${svn.rooturl}${<a href="http://disq.us/url?url=http%3A%2F%2Fproject.name%3A6Bb-Z9OkGiXUvsJnJyo_Postwvw&amp;cuid=3321886" rel="nofollow noopener" title="project.name">project.name</a>}/tags/${buildTime}/" /&amp;gt;<br>&amp;lt;property name="svn.revision" value="HEAD" /&amp;gt;<br>&amp;lt;!-- create build dirs --&amp;gt;<br>      &amp;lt;mkdir dir="${dest.www}"<br>/&amp;gt;<br>      &amp;lt;mkdir dir="${<a href="http://disq.us/url?url=http%3A%2F%2Fdest.inc%3AHqPUNdTRIhdRyQxwUD3uc6EsAAQ&amp;cuid=3321886" rel="nofollow noopener" title="dest.inc">dest.inc</a>}" /&amp;gt;<br>      &amp;lt;mkdir<br>dir="${<a href="http://disq.us/url?url=http%3A%2F%2Fdest.com%3ArUobcItJCzbCjNVWyGmg8svjtSo&amp;cuid=3321886" rel="nofollow noopener" title="dest.com">dest.com</a>}" /&amp;gt;</p><p>   &amp;lt;/target&amp;gt;<br>&amp;lt;!--+++++++++++++++++++++++++++--&amp;gt;<br>   &amp;lt;target<br>name="cleanBuildDir" description="Cleans the build<br>directory"&amp;gt;<br>      &amp;lt;delete dir="${project.build.root}" /&amp;gt;<br>&amp;lt;/target&amp;gt;</p><p>   &amp;lt;!--+++++++++++++++++++++++++++--&amp;gt;<br>&amp;lt;target name="checkoutBuild" description="Pulls code from<br>Subversion into the build directory"&amp;gt;<br>      &amp;lt;exec<br>executable="svn"&amp;gt;<br>         &amp;lt;arg line="export<br>${svn.projecturl} ${project.build.root} -r ${svn.revision} --username<br>${svn.username} --password ${svn.password}" /&amp;gt;<br>      &amp;lt;/exec&amp;gt;<br>&amp;lt;exec executable="svn"&amp;gt;<br>         &amp;lt;arg line="export<br>${svn.comurl} ${project.build.root}/com -r ${svn.revision} --username<br>${svn.username} --password ${svn.password}" /&amp;gt;<br>      &amp;lt;/exec&amp;gt;<br>&amp;lt;exec executable="svn"&amp;gt;<br>         &amp;lt;arg line="copy<br>${svn.projecturl} ${svn.tagurl} -m 'Copy To Tag' -r ${svn.revision} --username<br>${svn.username} --password ${svn.password}" /&amp;gt;<br>      &amp;lt;/exec&amp;gt;<br>&amp;lt;/target&amp;gt;</p><p>   &amp;lt;!--+++++++++++++++++++++++++++--&amp;gt;<br>   &amp;lt;target<br>name="copyWWW" description="copies www files"&amp;gt;<br>&amp;lt;copy todir="${dest.www}_bu" overwrite="true"&amp;gt;<br>&amp;lt;fileset dir="${dest.www}" /&amp;gt;<br>      &amp;lt;/copy&amp;gt;<br>&amp;lt;copy todir="${dest.www}" overwrite="true"&amp;gt;<br>&amp;lt;fileset dir="${project.build.root}\wwwroot"&amp;gt;<br>&amp;lt;exclude name="build.xml" /&amp;gt;<br>            &amp;lt;exclude<br>name=".project" /&amp;gt;<br>            &amp;lt;exclude name=".psd"<br>/&amp;gt;<br>            &amp;lt;exclude name=".doc" /&amp;gt;<br>&amp;lt;exclude name="test.cfm" /&amp;gt;<br>            &amp;lt;exclude<br>name="**/sql**" /&amp;gt;<br>         &amp;lt;/fileset&amp;gt;<br>      &amp;lt;/copy&amp;gt;<br>&amp;lt;/target&amp;gt;</p><p>   &amp;lt;!--+++++++++++++++++++++++++++--&amp;gt;<br>   &amp;lt;target<br>name="copyInc" description="copies inc files"&amp;gt;<br>&amp;lt;copy todir="${<a href="http://disq.us/url?url=http%3A%2F%2Fdest.inc%3AHqPUNdTRIhdRyQxwUD3uc6EsAAQ&amp;cuid=3321886" rel="nofollow noopener" title="dest.inc">dest.inc</a>}_bu" overwrite="true"&amp;gt;<br>&amp;lt;fileset dir="${<a href="http://disq.us/url?url=http%3A%2F%2Fdest.inc%3AHqPUNdTRIhdRyQxwUD3uc6EsAAQ&amp;cuid=3321886" rel="nofollow noopener" title="dest.inc">dest.inc</a>}" /&amp;gt;<br>      &amp;lt;/copy&amp;gt;<br>&amp;lt;copy todir="${<a href="http://disq.us/url?url=http%3A%2F%2Fdest.inc%3AHqPUNdTRIhdRyQxwUD3uc6EsAAQ&amp;cuid=3321886" rel="nofollow noopener" title="dest.inc">dest.inc</a>}" overwrite="true"&amp;gt;<br>&amp;lt;fileset dir="${project.build.root}\inc"&amp;gt;<br>&amp;lt;exclude name=".project" /&amp;gt;<br>         &amp;lt;/fileset&amp;gt;<br>&amp;lt;/copy&amp;gt;<br>   &amp;lt;/target&amp;gt;<br>&amp;lt;!--+++++++++++++++++++++++++++--&amp;gt;<br>   &amp;lt;target name="copyCom"<br>description="copies com files"&amp;gt;<br>      &amp;lt;copy<br>todir="${<a href="http://disq.us/url?url=http%3A%2F%2Fdest.com%3ArUobcItJCzbCjNVWyGmg8svjtSo&amp;cuid=3321886" rel="nofollow noopener" title="dest.com">dest.com</a>}_bu" overwrite="true"&amp;gt;<br>&amp;lt;fileset dir="${<a href="http://disq.us/url?url=http%3A%2F%2Fdest.com%3ArUobcItJCzbCjNVWyGmg8svjtSo&amp;cuid=3321886" rel="nofollow noopener" title="dest.com">dest.com</a>}" /&amp;gt;<br>      &amp;lt;/copy&amp;gt;<br>&amp;lt;copy todir="${<a href="http://disq.us/url?url=http%3A%2F%2Fdest.com%3ArUobcItJCzbCjNVWyGmg8svjtSo&amp;cuid=3321886" rel="nofollow noopener" title="dest.com">dest.com</a>}" overwrite="true"&amp;gt;<br>&amp;lt;fileset dir="${project.build.root}\com"&amp;gt;<br>&amp;lt;exclude name=".project" /&amp;gt;<br>         &amp;lt;/fileset&amp;gt;<br>&amp;lt;/copy&amp;gt;<br>   &amp;lt;/target&amp;gt;<br>&amp;lt;!--+++++++++++++++++++++++++++--&amp;gt;<br>   &amp;lt;target name="build"<br>depends="init,cleanBuildDir,checkoutBuild,copyWWW,copyInc,copyCom"<br>description="Builds Project" /&amp;gt;</p><p>&amp;lt;/project&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653039">11</a> by Tom Mollerus
		posted on 5/17/2006 at 8:13 PM
		</div>
		<div class="comment_text"><p>Tony-- thanks for your thoughts. I think that you're correct that for most situations the use of FTP and Subversion will be adequate. But I would caution you not to mistake research and dialog with "overthinking". For instance, I used to think that source control was too complex to learn and administer. So I didn't realize until just last year, when I first set it up, how easy and powerful Subversion is. Then I got to wondering if there were other deployment techniques out there that would be well worth my time.</p><p>I could be misinterpreting your comment, but I wouldn't agree that people shouldn't investigate other deployment strategies just because they're already using FTP and source control. There could be some other application or strategy that neither you nor I know about that would be well worth the time to explore. Now, making your deployment overly complex and administration-intensive-- that's overthinking. But you'll never know unless you investigate a little.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653038">12</a> by Jim
		posted on 5/17/2006 at 8:54 PM
		</div>
		<div class="comment_text"><p>Using Subversion (or any source control) is one of those things I wish I had done a LOOONG time ago! Sure it takes some time to initially setup a project but that is easily made up once I screw something up and can easily roll back my changes.</p><p>An automated deploy script would be just as beneficial - how many times have you FTP'd files and forgot something? Once that is scripted you would no longer have to worry about that.</p><p>Tim - thanks for the example script - that's going to get me motivated to RTFM for ANT.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653043">13</a> by Brian Kotek
		posted on 5/17/2006 at 8:57 PM
		</div>
		<div class="comment_text"><p>ANT is very slick. It can repeatably do all the steps in your deployment, such as: pull specific version of source repository, remove test files or other supporting files, alter XML or config values to production settings, zip the code, copy it to the target server, zip and backup existing production code, enable a "site maintenance" type default page, delete the existing production code, unzip the new production code, and execute any reload URLs to refresh applicaiton scopes, etc. It takes a while to tweak the ANT build.xml to do this but once you have it working for your set of tasks, you can do all of this instantly with the push of a button.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653041">14</a> by Jim
		posted on 5/17/2006 at 9:12 PM
		</div>
		<div class="comment_text"><p>Two quick questions:<br>1) can ANT use FTP or SSH for moving files around?<br>2) I primarily using CFEclipse with the Subclipse plugin to code and manage SVN - is there an ANT plugin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653044">15</a> by Brian Kotek
		posted on 5/17/2006 at 9:16 PM
		</div>
		<div class="comment_text"><p>Yes, ANT will perform tasks using FTP and SSH. Full details in the ANT manual online at:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fant.apache.org%2Fmanual%2F%3AoJo1KX9DsHIlyaYcx3QMu-eOcOM&amp;cuid=3321886" rel="nofollow noopener" title="http://ant.apache.org/manual/">http://ant.apache.org/manual/</a></p><p>There is no need for a plugin becuase ANT is built into Eclipse (though you can also download and run it separately if you wish).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653046">16</a> by Tim Elsner
		posted on 5/17/2006 at 9:30 PM
		</div>
		<div class="comment_text"><p>Jim,</p><p>Depending on the version of eclipse that you have installed (I always use the one thats about 100MB), ANT is all ready built in. I guess the easiest way to check is to create a build.xml file. If you see an ant icon on that file (literally a picture of an insect).</p><p>When you right click on this file, you should see a "Run AS -&gt; ANT Build" option. Select that and watch the magic happen.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653045">17</a> by Jim
		posted on 5/17/2006 at 9:41 PM
		</div>
		<div class="comment_text"><p>Do you create the build.xml file in your ColdFusion project root dir? I checked my Eclipse plugin list and I see 'Ant 1.6.5' so it looks like that is OK.  I can already see the afternoon is shot until I get this working!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653049">18</a> by Douglas Knudsen
		posted on 5/17/2006 at 9:45 PM
		</div>
		<div class="comment_text"><p>We have been using CVS for over a year now, I had to force it on the team :)  We don't need nightly builds, releasing code twice a week is fine.  We use Remedy internally for issue tracking and resolution.  We simply tag the CVS module with the Remedy issue number, the d00d in charge of production release just updates the module direct from CVS based on this tag...whammo!  With this we can just as quickly and effortlessly roll a release back too.</p><p>works great, but I am thinking of using Ant eventually for this...Ant is just uber slick.</p><p>...and we have a site wide license of BeyondCompare, as said above, this thing is slick and powerful.</p><p>DK</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653050">19</a> by tim Elsner
		posted on 5/17/2006 at 9:53 PM
		</div>
		<div class="comment_text"><p>Jim,</p><p>I put the build.xml file directly in the webroot. Notice this in my script : &lt;exclude name="build.xml" /&gt; . This command prevent the file from being copied to production.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653048">20</a> by Patrick McElhaney
		posted on 5/17/2006 at 10:01 PM
		</div>
		<div class="comment_text"><p>Any thoughts on checking out code directly into the production environment?</p><p>We only "deploy" to one spot: The production web server. Deploying to some staging area and copying up seems redundant to me.</p><p>----<br>Ray, please keep posting discussion topics. You don't have to have the answers if you can moderate a discussion. I learn most from blogs that invite me to participate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653047">21</a> by Johnathan Gifford
		posted on 5/17/2006 at 11:38 PM
		</div>
		<div class="comment_text"><p>Because we'll do deployments at werid times during the day and frequently, we've turn our production servers into a Subversion working copy.  This give us the ability to 'swtich' to newer revisions as needed.  It also allows us to do an immediate rollback if the newer revision is causing problems.  The account used to roll out changes only has 'read' rights to the Subversion repository.  This keeps accidental or malicous commit to the repository from happening via the production web servers.</p><p>To do this though, you must fully use the trunk, tags, and branches methodology for Subversion.  Since trunk is always our best working version, we deploy from the trunk.  Others who do more 'scheduled' release might 'switch' using a branch or tag path.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653051">22</a> by Tom
		posted on 5/18/2006 at 12:28 AM
		</div>
		<div class="comment_text"><p>I've been using Subversion for about a month and it has already helped me to avoid disaster on more than one occasion. Being that I am still a fairly novice Subversion user and new to version control systems altogether, this question may have a very simple answer...</p><p>I have a large web site with a complex directory structure under version control and the site requires frequent updates and deployments via FTP. Using a shell extension like TortoiseSVN, it isn't a pain to visually locate one or two files that have changed and upload them to the production server but this process becomes messy and error-prone if many files in many different directories have been changed.</p><p>How has someone else dealt with this successfully? Just do a bulk upload by selecting complete directories and hoping that your FTP program of choice can filter out all of the hidden ".svn" specific files? Is it possible to export unversioned from the repository only the files that have changed since a last revision while also preserving the directory structure if necessary?</p><p>I may be making this way more difficult than it needs to be but am interested to hear what others have done...</p><p>Thanks a ton,<br>Tom</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653052">23</a> by Scott Stroz
		posted on 5/18/2006 at 12:52 AM
		</div>
		<div class="comment_text"><p>I just code directly on the production server...just kidding.</p><p>I recently discovered Ant (I had heard of it before, but never really knew what it was or what it did) and hope to start using it in my deployment process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653054">24</a> by Raymond Camden
		posted on 5/18/2006 at 12:59 AM
		</div>
		<div class="comment_text"><p>Don't kid, Scott. Don't forget that the 5th largest site in the world does that. (Ahem)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653055">25</a> by Bob Weston
		posted on 5/19/2006 at 9:00 AM
		</div>
		<div class="comment_text"><p>You know, I've been giving this topic a lot of thought lately myself.  We have a couple web servers we've opened up for hosting small departmental web sites.  Our clients range from amatuer CF developers to folks that write a page in Word and save as HTML.</p><p>In years past, these clients developed on a Production server, but when the server's lease expired, we changed it out for two servers - one development and one production.</p><p>Now we're working through the process of moving a users coded from development to production.  At the moment, we're doing it the old fashioned way -- they call me, and I move it for them, but that's getting really old, really fast.</p><p>We don't want to grant the users access to the prod box because we don't want to tempt them to change code there directly.  Often times, these sites update several times a day as new Excel or Word reports are published or vacation calendars are updated.</p><p>For some users, we've set aside space on a file server for such content and used IIS virtual directories to include the info simultaneously in both the dev and production without having to move anything around.</p><p>Both servers are Windows 2003, running CF7 and IIS 6.  Our backend is SQL Server 2000 and we're not using any sort of version control.  Just curious to know if anyone has any suggestions on how best to accomplish the goal of moving data from one environment to the other, automatically.</p><p>Thanks,</p><p>Bob Weston<br>bobwestonATsbcglobalDOTnet</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653056">26</a> by cp
		posted on 4/25/2007 at 6:52 AM
		</div>
		<div class="comment_text"><p>test</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653059">27</a> by Jim Priest
		posted on 5/15/2007 at 4:56 PM
		</div>
		<div class="comment_text"><p>Geez - has it been a year?</p><p>I wanted to follow up on this post and say I've been using ANT now for several months to move my files from development into production and it's been working great.</p><p>I have lots of Ant info on my wiki if anyone is interested:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.thecrumb.com%2Fwiki%2FAnt%3AcRE0P2QtPGk5A3pfnH8lzj-FnMk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.thecrumb.com/wiki/Ant">http://www.thecrumb.com/wik...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653061">28</a> by Vishnu
		posted on 8/20/2008 at 12:00 PM
		</div>
		<div class="comment_text"><p>HI Ray,<br>I am getting below erorr while deploying CF6 CAR file into CF 8 <br>We are planning to migrate from Coldfusion Mx 6.1  to Coldfusion 8 While we deploying the CAR file created from MX 6.1 into Coldfusion , None of the SQL datasource is working . Log file containts the below erorr message Error occurred while updating datasources:tedy" "Error","jrpp-10","08/20/08","13:49:36",,"An error occurred while trying to encrypt or decrypt your input string: com.rsa.jsafe.crypto.dr: Could not perform unpadding: invalid pad byte.. " After adding this in JVM config below error occurs -Dcoldfusion.disablejsafe=true Complete JVM Args java.args=-server -Xmx512m -Dsun.io.useCanonCaches=false -XX:MaxPermSize=192m -XX:+UseParallelGC -Dcoldfusion.rootDir={application.home}/../   -Dcoldfusion.classPath={application.home}/../lib/updates,{application.home}/../lib,{application.home}/../gateway/lib/,{application.home}/../wwwroot/WEB-INF/flex/jars,{application.home}/../wwwroot/WEB-INF/cfform/jars -Dcoldfusion.libPath={application.home}/../lib -Dcoldfusion.disablejsafe=true An error occurred while trying to encrypt or decrypt your input string: Given final block not properly padded. "</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653060">29</a> by GSCopy Pro v6.0 (RoboCopy Alte
		posted on 11/7/2013 at 4:20 PM
		</div>
		<div class="comment_text"><p>GSCopy Pro v6.0 (RoboCopy Alternative) with Open File Agent<br>GSCopyPro is a single command-line tool (CLI) that can copy, replicate and move files from one folder to another. This folder can be on the same machine/ server or another server elsewhere. What makes GSCopyPro stand out from other competitors is the fact it works on 32-bit as well as 64-bit systems and has no restrictions. It can easily be scheduled to run as a scheduled task and fully automated. GSCopyPro also comes with an open file agent which can copy files that are locked/ opened by other processes. This feature is supported in all windows vSCersions from widows XP/ 2003 and later.<br>Go To:&gt;&gt; <a href="http://disq.us/url?url=http%3A%2F%2Fwww.gurusquad.com%2FGOPYPRO%3AL70jlRCXsmQ0np_h1bSIywo6x9o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.gurusquad.com/GOPYPRO">http://www.gurusquad.com/GO...</a></p></div>
	</div>
</div>
		