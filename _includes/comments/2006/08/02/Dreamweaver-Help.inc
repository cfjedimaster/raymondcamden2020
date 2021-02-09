
<div class="comment" id="c_1713655813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655813">1</a> by Richard Chappell
		posted on 8/2/2006 at 9:28 PM
		</div>
		<div class="comment_text"><p>Point your newsreader to MM's (sorry, Adobe's) Dreamweaver newsgroup located at: <a href="http://disq.us/url?url=http%3A%2F%2Fforums.macromedia.com%3AXKQASiYYWY-ScP0_9h1v-nlasi8&amp;cuid=3321886" rel="nofollow noopener" title="forums.macromedia.com">forums.macromedia.com</a>. There are lots of really helpful and knowledgeable people there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655815">2</a> by Joel Cox
		posted on 8/2/2006 at 9:44 PM
		</div>
		<div class="comment_text"><p>Might also want to try ProjectSeven's DW newgroup at <a href="http://disq.us/url?url=news%3A%2F%2Fforums.projectseven.com%2Fdreamweaver%3AcvxOXZo-y_ktEMsEW_Ly_ulw8ks&amp;cuid=3321886" rel="nofollow noopener" title="news://forums.projectseven.com/dreamweaver">news://forums.projectseven....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655811">3</a> by Dan Sorensen
		posted on 8/2/2006 at 10:06 PM
		</div>
		<div class="comment_text"><p>I have no idea why, but in a similar server setup, I've had better luck with Dreamweaver MX 2004 than Dreamweaver 8 for this type of issue.</p><p>I'd love to hear a better solution myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655819">4</a> by Bob Weston
		posted on 8/2/2006 at 10:26 PM
		</div>
		<div class="comment_text"><p>Dan,<br>How did you set this up in DW MX 2004?  That's the version I'm currently using and haven't been able to make it work either.</p><p>Thanks,</p><p>Bob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655812">5</a> by Cutter
		posted on 8/2/2006 at 10:30 PM
		</div>
		<div class="comment_text"><p>Like Ray, I'm more of a CFEclipse guy now-a-days, but I seem to remember a setting in the site setup panel, in DW, for the image directory. Don't know though, that might require some testing....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655808">6</a> by Dan Sorensen
		posted on 8/2/2006 at 10:54 PM
		</div>
		<div class="comment_text"><p>(I misspoke about 2004/DW 8. I have an recognizing an included folder, but not this specific one.)</p><p>Back on topic: Do you use direct file access to your server? If so, I believe that Dreamweaver is looking directly at the server file system and won't see the virtual directory. (If you browse to the web server root folder with your file system, you won't see it either)</p><p>IIS appends the virtual directory to the webroot when it answers requests. So you will have to switch to a method of connecting to the server that will go through IIS. (FTP or webdav?)</p><p>In any case, I believe it's more of an IIS issue / server file system issue than Dreamweaver specifically.</p><p>It's possible I'm wrong since it's been about a year since I've dealt with this issue. (Although I just did a quick test on my system to confirm this) You should check to see if anyone has a similar issue with Eclipse, direct file access, and IIS virtual directories.</p><p>Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655802">7</a> by Joe
		posted on 8/2/2006 at 11:17 PM
		</div>
		<div class="comment_text"><p>IS there any way you could map the drive to your system? Dreamweaver should be able to see it fine then.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655799">8</a> by Jon Clausen
		posted on 8/2/2006 at 11:25 PM
		</div>
		<div class="comment_text"><p>There really isn't a surefire way to accomplish this with Dreamweaver, that I am aware of.</p><p>The only solution that may work to a degree is to set up an FTP site rather than a local one, and create an FTP virtual directory for the image folder.  You still won't be able browse or drag and drop them, though since you can't set the default image directory with an FTP site.</p><p>Preview will at least work in the WYSIWYG view, though, unless you download the entire contents of that image directory to the temp directory that Dreamweaver creates with the FTP site.</p><p>Is he writing static page content or just writing drafts for content that will be put into the database?</p><p>If it's dynamic content, it would be a heck of alot easier to set up a basic FCKEditor interface and set your file paths in the config file.  Plus, truthfully, FCKEditor usually spits out cleaner HTML than DW's design view does.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655816">9</a> by Danilo
		posted on 8/2/2006 at 11:38 PM
		</div>
		<div class="comment_text"><p>I'm an Adobe Community Expert (formerly Team Macromeida) with a focus on Dreamweaver.</p><p>From what I konw about its file system access, Dreamweaver doesn't look into virtual folders, it only looks at the file system itself to display image and CSS, etc. I believe that any solution would require a copy of the files on his local system.</p><p>One way to do that would be to directly copy the contents of the virtual folder into the site your boss is working on so the assets would be available within Dreamweaver. Of course, you'd need to be sure (and who can be with bosses) that the contents of the folder were kept up to date, and also that no changes to made to the local "virtual" folder files, as any uploads made probably wouldn't be placed into the proper remote location.</p><p>Beyond that I think you'd need to look at using an "NTFS junction point". Haven't used it myself, but search Google for that term and the first couple of results give a little info on it. However, even with this, it would require a local copy of the files, unless the junction point could be pointed to the server, or a staging sever, or something similar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655814">10</a> by Bob Weston
		posted on 8/3/2006 at 4:04 AM
		</div>
		<div class="comment_text"><p>Danilo,<br>At first glance, NTFS junction points look to be exactly what the Dr. ordered.  I've passed the information on to our server admin's who've agreed to test tomorrow!</p><p>Thanks for this exiciting tip.  We've used DFS for years, but this is the first I've heard of a Junction Point!</p><p>Thanks Again,</p><p>Bob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655805">11</a> by Tom Mollerus
		posted on 8/3/2006 at 6:05 AM
		</div>
		<div class="comment_text"><p>Does Dreamweaver recognize directory aliases?  Whereas IIS recognizes virtual directories and ignores aliases, I am willing to bet that Dreamweaver would ignore virtual directories and recognize aliases.  So it could work that you could create a directory alias in the webroot in the same way that IIS has the virtual directory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655820">12</a> by Ken
		posted on 11/10/2006 at 9:59 PM
		</div>
		<div class="comment_text"><p>I know it has been awhile on this post, BUT I GOT IT!</p><p>Found this topic while investigating why DW8 would not delet files from a Virtual Dir in my FTP when synchronizing.</p><p>ANYWAY!, PROBLEM SOLVED ON ALL POINTS!  WOOHOO!</p><p>Solution for Get, Put and Delete from an FTP virtual dir:</p><p>Example:</p><p>Physical FTP root:  c:\ftproot ON SERVER<br>Physical Dir for virtual:  c:\myvirtualdir ON SERVER</p><p>ftp is <a href="http://disq.us/url?url=ftp%3A%2F%2Fftp.mysite.com%2F%3AQaBTw0mJaGRkeh7fPz1DSY5mAnU&amp;cuid=3321886" rel="nofollow noopener" title="ftp://ftp.mysite.com/">ftp://ftp.mysite.com/</a>  (accesses c:\ftproot ON SERVER)</p><p>ftp virtual:  <a href="http://disq.us/url?url=ftp%3A%2F%2Fftp.mysite.com%2Fmyvd%2F%3AIFPKmhgdNvLKyj0Ua580OoCfi_g&amp;cuid=3321886" rel="nofollow noopener" title="ftp://ftp.mysite.com/myvd/">ftp://ftp.mysite.com/myvd/</a> (points to c:\myvirtualdir ON SERVER)</p><p>OK, here is what you do:</p><p>- Do your normal FTP setup in DW.</p><p>- Then, in your SERVER ftproot, create a directory with the name of the alias (myvd).  So, using the above example, you will have a BLANK directory in c:\ftproot named myvd (i.e. c:\ftproot\myvd ON SERVER).</p><p>What happens is that Dreamweaver sees the PHYSICAL dir to recognize for structure, but the FTP commands are being executed on the FTP virtual root!</p><p>Works like a charm!</p><p>Ken</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655822">13</a> by Oliver
		posted on 9/19/2007 at 2:50 PM
		</div>
		<div class="comment_text"><p>NTFS junction point's rock, totally solves dreamweaver problem mentioned above.</p></div>
	</div>
</div>
		