
<div class="comment" id="c_1713655579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655579">1</a> by Scott P
		posted on 7/31/2006 at 3:31 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I would make one change - instead of sending the real filename as the attachment name in the header, I'd change it to a uuid filename with the real files extension.</p><p>&lt;cfset tmpFileName = "#createuuid()#.#listlast(validtoken.filename, '.')#"&gt;</p><p>&lt;cfheader name="Content-disposition" value="attachment;filename=#tmpFileName#"&gt;   <br>&lt;cfcontent file="#validtoken.filename#" type="application/unknown"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655582">2</a> by Raymond Camden
		posted on 7/31/2006 at 6:01 AM
		</div>
		<div class="comment_text"><p>Why? if the file is outside of web root, you knowing just the file name will not let someone else get it, or let you get it again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655588">3</a> by Scott P
		posted on 7/31/2006 at 6:37 AM
		</div>
		<div class="comment_text"><p>touché</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655585">4</a> by Raymond Camden
		posted on 7/31/2006 at 6:39 AM
		</div>
		<div class="comment_text"><p>Still a good point _if_ the file was under file root. People on ISPs sometimes would be in that situation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655583">5</a> by Dan G. Switzer, II
		posted on 7/31/2006 at 6:24 PM
		</div>
		<div class="comment_text"><p>@ Raymond</p><p>You'd probably want to add a named &lt;cflock&gt; to the get.cfm template as well so to avoid potentially having multiple hits to the same URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655584">6</a> by Raymond Camden
		posted on 7/31/2006 at 7:47 PM
		</div>
		<div class="comment_text"><p>Dan, I thought of that, but, it occured to me these URLs are unique. So it would only occur if the user itself clicked multiple times.</p><p>Guys - I set up the new mail server here. Would you let me know i fyou get this please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655580">7</a> by James
		posted on 8/1/2006 at 5:10 AM
		</div>
		<div class="comment_text"><p>How many users will this technique support?  It uses a CF thread for each download and it could easily choke on large files or multiple simultaneous downloads.</p><p>We've switched to a FTP server that uses an ODBC database for the user accounts (SurgeFTP or Serv-U), create a randomized user account on-the-fly with privileges set to download only with a upload/download ratio of 1:1... which means that the download link will only work once and all of the heavy lifting is removed from ColdFusion and the web server.</p><p>The database has a datestamp field and is used for a clean-up script that deletes old user accounts (1:1 ratio used up) and the download file is also deleted.</p><p>I really want to figure out how to protected downloads using Flash so that Flash can report back to the server after a successful download and automate the clean-up process.  This will also remove the heavy lifting from CF (but not the webserver.)  There is a java applet that will do this... but I don't want to force someone to install java just to download a file whereas most users already have Flash installed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655587">8</a> by Raymond Camden
		posted on 8/1/2006 at 5:18 AM
		</div>
		<div class="comment_text"><p>While I don't think it would choke on multiple downloads, I wouldn't use CF to download large files. For that you can consider other solutions like the one you provided.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655586">9</a> by James
		posted on 8/1/2006 at 5:36 AM
		</div>
		<div class="comment_text"><p>What happens when you use the CFCONTENT tag?  Isn't a ColdFusion thread used during the entire download process?  If you have the server configured to handle 8 simulutaneous requests, won't your website be unresponsive if 8 large files (er, requests) are currently in use by multiple 56k modem users?</p><p>I'll only use CFCONTENT for extremely small files or dynamically generated content (ie excel spreadsheet). When it comes to large files (or very popular files), I'll use the hash technique and then CFLOCATE to either a password protected FTP account (after email address verification testing is successful) using my instructions (above) or anonymous FTP with a hashed filename.</p><p>It only becomes a real issues when the content being downloaded is either being personalized or is being paid for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655589">10</a> by Raymond Camden
		posted on 8/1/2006 at 6:37 AM
		</div>
		<div class="comment_text"><p>I checked and you are right. I'd probably suggest raising the number of threads and ensuring you aren't serving up large files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655590">11</a> by dickbob
		posted on 8/1/2006 at 1:54 PM
		</div>
		<div class="comment_text"><p>I'm developing something similar. Serving paid for audio files via a UUID to an mp3 file above the root using a db for lookup.</p><p>I'm concerned about the comments on file size and threads. Being a comsumer site I can't rely on an ftp app being available.</p><p>Any other solutions?</p><p>dickbob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655591">12</a> by younes
		posted on 12/18/2008 at 10:28 PM
		</div>
		<div class="comment_text"><p>there is a way for Generating One-Time URLs with java?</p></div>
	</div>
</div>
		