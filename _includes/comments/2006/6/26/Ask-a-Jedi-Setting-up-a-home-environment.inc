
<div class="comment" id="c_1713654457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654457">1</a> by Ed
		posted on 6/26/2006 at 6:25 PM
		</div>
		<div class="comment_text"><p>My home dev environment:</p><p>CF7 Dev<br>PHP</p><p>Apache (serving PHP and CF7)</p><p>MySQL (mainly for PHP work but also configured as CF7 datasource)<br>MS SQL Server Express (free dev edition of SQL Server)</p><p>If you have PHP up and running then there's a good free web-based, PHP-driven MySQL admin tool called PHPMyAdmin (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.phpmyadmin.net%3AU47poQpCAwaCgSiF_1kKrSCCzqY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.phpmyadmin.net">http://www.phpmyadmin.net</a>).</p><p>I'll also second Ray's recommendation for ACME Guide - it's invaluable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654458">2</a> by Gus
		posted on 6/26/2006 at 6:33 PM
		</div>
		<div class="comment_text"><p>I try to run my development environment as close as possible to the production environments I will be dealing with. As an independent consultant I run into clients with all kinds of different production environments. This used to be problematic for me, but not anymore.</p><p>What I have done is use one beefy server, and I run multiple virtual servers on top of it.</p><p>The box is a dual Xeon 2.8GHz Nocona server ( This is a 64 bit machine, but I am currently running a 32 bit OS ) with 4GB ram.</p><p>My host OS is Windows XP Professional 32 bit.</p><p>My virtual servers are running in VMWare workstation 5. ( MS Virtual Server would do just as well )</p><p>Generally I have running:<br>App Server: Windows 2003 server/IIS6/CFMX 7<br>DB Server: Windows 2003 server/SQL Server 2000</p><p>When I need to develop for a client running on a different configuration ( LAMP for example ) I simply shut down the above servers, and fire up a virtual machines that match the client configuration!</p><p>I have been running this setup for about a year now, and it has performed flawlessly!</p><p>For those of you unfamiliar with virtual servers, these act exactly the same as seperate physical machines, each with their own MAC address, set of IP address, disk drives etc.</p><p>Here are some of the advantages I get with this setup:</p><p>   1. I have clean copies of each virtual server. When I want to play around with a new technology, I just install a new virtual server, play around, and if I decide I no longer need it POOF it's gone without affecting my core dev environment. Just last week I set up a new server in order to check out Ruby On Rails. It took me less than 10 minutes to set up a new App server to run Ruby on Rails.</p><p>   2. I can easily log into and manage each server from my workstation either through remote desktop or VMWare.</p><p>   3. When I travel, I just copy my virtual servers to my laptop, and I can take my entire dev environment with me!</p><p>   4. Backup up my entire dev environment consists of copying 3 directories to a USB drive. Even if my main box craps out, I can be back up and running on my laptop in well under an hour.</p><p>   5. When I don't need to run my virtual servers, I just turn them off, and have an incredibly powerful machine to do things like video editing!</p><p>I highly recommend this setup for any serious development work.</p><p>By the way.. VMWare Server is now available free!</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654440">3</a> by Edward T
		posted on 6/26/2006 at 7:06 PM
		</div>
		<div class="comment_text"><p>Wow! Gus, you have a killer dev environment!!</p><p>I, too, deviate from the dev-should-match-production rule, but I don't have the resources to get all the cool software that my production environments run.  I use Stephen's ACME solution on both OS X and Windows, but since we use CVS, I use Tortoise CVS to access the repository.  I also have VPN access to the SQL Servers, so I prefer to develop against the University's dev databases when I'm hooked in.  Otherwise, I stick to MySQL.  I also run ActivePython from <a href="http://disq.us/url?url=http%3A%2F%2FActiveState.com%3A7GIBrpVAMnL9zYGv16CNVO20JlU&amp;cuid=3321886" rel="nofollow noopener" title="ActiveState.com">ActiveState.com</a> because Python is cool :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654456">4</a> by Nathan D
		posted on 6/26/2006 at 7:25 PM
		</div>
		<div class="comment_text"><p>For Tortoise-esqe integration on OS X see: <a href="http://disq.us/url?url=http%3A%2F%2Fscplugin.tigris.org%2F%3ArcF3xmQGZh_U0TsnYaZThnEAnEs&amp;cuid=3321886" rel="nofollow noopener" title="http://scplugin.tigris.org/">http://scplugin.tigris.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654452">5</a> by Brian
		posted on 6/26/2006 at 8:25 PM
		</div>
		<div class="comment_text"><p>Subversion:  That's the one thing I wish ACME expanded on...I've seen commercial services offer the server side, but i'd like to be able to (pain-free) install Subversion as part of this whole platform -- even better, if I could install it all on a memory stick that i could carry with me as an uber-developement platform -- for those places that have locked down desktops...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654460">6</a> by Lola Lee Beno
		posted on 6/26/2006 at 8:27 PM
		</div>
		<div class="comment_text"><p>For Eclipse, there's Subclipse, of course, and Subversive.</p><p>For OSX stand-alone clients, there's:</p><p>SvnX<br>ZigVersion</p><p>I tried iSVN, but I was unable to get it to accept the path to my installed subversion files.</p><p>You can get these, as well as other clients, at &lt;<a href="http://disq.us/url?url=http%3A%2F%2Fwww.macupdate.com%2Fsearch.php%3Fkeywords%3Dsubversion%26os%3Dmacosx%26button.x%3D0%26button.y%3D0%3E%3AjG04MBL5ph6-Yb6taj5stavjv1g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macupdate.com/search.php?keywords=subversion&amp;os=macosx&amp;button.x=0&amp;button.y=0>">http://www.macupdate.com/se...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654459">7</a> by Teddy R Payne
		posted on 6/26/2006 at 11:16 PM
		</div>
		<div class="comment_text"><p>There seems to be a short supply on JRun 4 and CF MX support out there.  Perhaps I have not been looking in the right places for Multi-Server configurations.  I have been having some trouble getting CF MX 7 to work properly with JRun 4.  I am sure that I will the right path.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654444">8</a> by Scott Stroz
		posted on 6/26/2006 at 11:34 PM
		</div>
		<div class="comment_text"><p>I actaully have the following on my dev machine, whcih is a laptop.</p><p>WinXP Pro<br>ColdFusion MX 7<br>Apache<br>Subversion<br>MySQL 5<br>SQL Server 2000<br>SQl Server 2005</p><p>I use Eclipse for me IDE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654445">9</a> by Adam Cameron
		posted on 6/27/2006 at 1:09 AM
		</div>
		<div class="comment_text"><p>Hi Brian.<br>There's *nothing* to setting up SubVersion.  Download the installer:<br><a href="http://disq.us/url?url=http%3A%2F%2Fsubversion.tigris.org%2Fservlets%2FProjectDocumentList%3FfolderID%3D91%3Adq9lDnM1yWLRvR7ElEivdhpUM30&amp;cuid=3321886" rel="nofollow noopener" title="http://subversion.tigris.org/servlets/ProjectDocumentList?folderID=91">http://subversion.tigris.or...</a></p><p>Run it.  That's it: SVN is now installed.  There's no trick to it or configuration necessary.<br>(I see no reason why this could not be to a memory stick, too.  That's a good idea, actually).</p><p>Read this:<br><a href="http://disq.us/url?url=http%3A%2F%2Fsvnbook.red-bean.com%2Fnightly%2Fen%2Fsvn-book.html%23svn.intro.quickstart%3A0KF2--ntNtkwE8sFQny0jqTjeFY&amp;cuid=3321886" rel="nofollow noopener" title="http://svnbook.red-bean.com/nightly/en/svn-book.html#svn.intro.quickstart">http://svnbook.red-bean.com...</a></p><p>Set up your repository (it's ONE command-line instruction).</p><p>Read this:<br><a href="http://disq.us/url?url=http%3A%2F%2Fsvnbook.red-bean.com%2Fnightly%2Fen%2Fsvn-book.html%23svn.reposadmin.projects.chooselayout%3AmBkt6nk9pPHsPpLEVIVpv01M4LA&amp;cuid=3321886" rel="nofollow noopener" title="http://svnbook.red-bean.com/nightly/en/svn-book.html#svn.reposadmin.projects.chooselayout">http://svnbook.red-bean.com...</a></p><p>I recommend using the trunk / branches / tags model it suggests.</p><p>Install TortoiseSVN:<br><a href="http://disq.us/url?url=http%3A%2F%2Ftortoisesvn.sourceforge.net%2Fdownloads%3Ad5S3N4VaKMCQwWE4K-DNd94J84g&amp;cuid=3321886" rel="nofollow noopener" title="http://tortoisesvn.sourceforge.net/downloads">http://tortoisesvn.sourcefo...</a></p><p>Right click on a (new) directory, and use TortoiseSVN's repo browser to point at the URI of your repository and create the trunk / branches / tags structure as mentioned in the docs above.</p><p>Next tell select an EMPTY directory, and tell TortoiseSVN to do a checkout, pointing it to the URI of the trunk (so something like file:///c:/path/to/repository/trunk).  This will install all the files SVN needs to source control that directory.</p><p>That's it.  You can not start creating source files, committing them, etc.</p><p>If you've already got - say - a website you want to add to source control, still do the check out in the empty dir, then copy all your existing files into it, and then commit them.  They're now in source control.  Easy.</p><p>If you then want to move the source-controlled files elsewhere, simply repeat the checkout procedure in another empty dir, and all the source controlled files will be deployed for you.</p><p>As a rule of thumb, I never actively develop in the trunk, instead working in a branch, only merging with the trunk when I'm done (at which point I delete the branch), so the trunk only ever had WORKING code in it.  And every time I release my app, I create a tag.</p><p>It'd be worth while reading the whole SVN book, and the --help on the SVN commandline tools.  For example, I find merging branches a lot easier to get my brain around using the command-line than I do Tortoise.  But maybe I'm just a bit thick.</p><p>HTH.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654447">10</a> by Adam Cameron
		posted on 6/27/2006 at 1:11 AM
		</div>
		<div class="comment_text"><p>Oops.</p><p>"That's it. You can not start creating source files..." should read "That's it. You can NOW start creating source files..."</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654448">11</a> by Fernando
		posted on 6/27/2006 at 5:19 PM
		</div>
		<div class="comment_text"><p>Amazing, I love this community. I'm the Fernando that send the email to Ray.</p><p>I was thinking about the Source Control system and even though I could go with CVS or SVN on my laptop I realized that it would be useless if somebody steals my laptop or if the waters from the Potomac decide to come knocking on my door ( it's raining heavily in DC). So I started wondering if it wasn't a better idea to have a CVS/SVN server hosted somewhere on the net. Something cheap of course. <br>Anybody knows of a good CVS/SVN hosting company out there?</p><p>BTW the ACME guide looks great, definitely a great deal of good information Thanks Ray and all.</p><p>--<br>Fernando Lopez</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654446">12</a> by Tuyen
		posted on 6/27/2006 at 9:40 PM
		</div>
		<div class="comment_text"><p>I use Subversion with Apache Server and use Apache authentication so I can access my *central* Subversion repository from any where (in house net work or from outside network/vpn)... It's really fast, much much faster then SourceSafe/vpn...</p></div>
	</div>
</div>
		