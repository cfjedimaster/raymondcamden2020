
<div class="comment" id="c_1713615610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615610">1</a> by Thomas Woestman
		posted on 5/12/2004 at 10:31 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>We ran into the same problem and found that putting the CFC in a subdirectory allowed proper use of the CFC as a web service.  I believe there is some problem with the '/' pathing interpretation by CF.</p><p>I did some testing to see if this would apply to paths other than / and it did not seem to be a problem.</p><p>Hope this works for you,</p><p>Thomas Woestman</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615624">2</a> by Scott Jibben
		posted on 6/3/2004 at 10:54 PM
		</div>
		<div class="comment_text"><p>I have a production web server that hosts several websites.  I kept running into the 'Component not found', 'The component definition file for xxx component cannot be found on this server.'  The wsdl output worked fine.  It worked fine on the development server but that only hosts one site (development sites are in directories).</p><p>After reading several posts and web pages about this problem, I guessed that the problem has something to do with the '/' CF mapping.</p><p>So, here's what worked for me.  Normally our IIS web servers are using c:\inetpub\wwwroot\site.  The CF mapping of '/' points to c:\inetpub\wwwroot\.  I created a directory off of wwwroot named cfc.  I put the CFC's in that directory.  Next I opened up the site in IIS admin and created a virtual directory named CFC to point to c:\inetpub\wwwroot\cfc.  I also created a dummy directory (wwwroot\site\cfc) but I don't think that was necessary.</p><p>After making these changes, both the cfcexplorer and the wsdl would work.  I ended up rebooting the web server to get Flash MX 2004 to work using these changes, tho.</p><p>If you want to host web services in the root directory of a site, I'm not sure what you will be able to do.</p><p>Now I can get Flash to connect to the web service and communicate with it.  My next problem is getting the data to actually appear in the datagrid.  It's there but with invisible text (I get 6 records back and can select the rows, but the data doesn't display).</p><p>Good luck,<br>sj</p></div>
	</div>
</div>
		