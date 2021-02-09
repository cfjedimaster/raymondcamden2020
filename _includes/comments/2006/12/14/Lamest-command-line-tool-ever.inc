
<div class="comment" id="c_1713660269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660269">1</a> by Marten Oltrogge
		posted on 12/14/2006 at 9:59 PM
		</div>
		<div class="comment_text"><p>Perhaps you should have a look at the new PowerShell. I love it since it has a far better structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660286">2</a> by Tom Mollerus
		posted on 12/14/2006 at 10:15 PM
		</div>
		<div class="comment_text"><p>If sc isn't available to other users, there is a program created specifically to run Subversion as a Windows service: SVNService.exe.  Take a look at the Mere Moments Guide to installing a Subversion server on Windows for more information:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.excastle.com%2Fblog%2Farchive%2F2005%2F05%2F31%2F1048.aspx%3AeoTlG3Sr97z0fjCcHk-bgkFMGFY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.excastle.com/blog/archive/2005/05/31/1048.aspx">http://www.excastle.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660285">3</a> by Jim
		posted on 12/14/2006 at 10:42 PM
		</div>
		<div class="comment_text"><p>Just to clarify - since SVN 1.4 - Subversion has had the ability to run as a service built in...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.thecrumb.com%2F2006%2F10%2F24%2Fsvnservice-no-longer-needed-with-subversion-14%2F%3ArkrwJvVEQgvYw_SelRPnIkMBatI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.thecrumb.com/2006/10/24/svnservice-no-longer-needed-with-subversion-14/">http://www.thecrumb.com/200...</a></p><p>The 'sc' command is a Windows shell command - and in regards to Ray's frustration - it's a feature, not a bug :)</p><p>I never noticed this as I cut-n-pasted the command string - but I'm going to add a note to my blog post and mention it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660272">4</a> by Kurt Wiersma
		posted on 12/14/2006 at 11:36 PM
		</div>
		<div class="comment_text"><p>Perhaps the weird command line syntax is the result of a library he is using inside the sc command to parse the command line args for him. That is my guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660280">5</a> by tanguyr
		posted on 12/15/2006 at 12:29 AM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>Which docs did you use? The ones at</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsvn.collab.net%2Frepos%2Fsvn%2Ftrunk%2Fnotes%2Fwindows-service.txt%3AsXWhewVRdyufB8qBp-yLLFcGaB0&amp;cuid=3321886" rel="nofollow noopener" title="http://svn.collab.net/repos/svn/trunk/notes/windows-service.txt">http://svn.collab.net/repos...</a></p><p>warn you about this..</p><p>"Note that the command-line syntax for SC is rather <br>odd.  Key/value pairs are specified as "key= value"<br>(without the double-quotes).  The "key=" part must <br>not have any spaces, and the "value" part MUST be <br>separated from the "key=" by a space."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660281">6</a> by Raymond Camden
		posted on 12/15/2006 at 12:59 AM
		</div>
		<div class="comment_text"><p>tang, I don't remember the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660279">7</a> by Roland Collins
		posted on 12/15/2006 at 8:59 AM
		</div>
		<div class="comment_text"><p>The weird syntax is because they tokenized the command line on the space character instead of tokenizing once for the spaces and once for the equals.  Laaaaaaazy programmers.  If SVNService doesn't work for you (which it should), you can also do it using FireDaemon, which is super easy to set up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660283">8</a> by Ondrej Valenta
		posted on 2/1/2007 at 11:40 PM
		</div>
		<div class="comment_text"><p>I spent with sc.exe two nights and then I finally found this help. Could you please make it more SEO friendly, because it's unfortunatelly hard to find.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660284">9</a> by DMINATOR
		posted on 3/13/2007 at 12:54 PM
		</div>
		<div class="comment_text"><p>Greate find. I have also spend the whole day trying to figure what was going on. It wasn't a really pleasant experience.</p><p>I used these docs as a reference: <a href="http://disq.us/url?url=http%3A%2F%2Fsupport.microsoft.com%2Fkb%2F251192%3AFBltjVc5pJvMIv4FGgiAjzhWIAs&amp;cuid=3321886" rel="nofollow noopener" title="http://support.microsoft.com/kb/251192">http://support.microsoft.co...</a></p><p>I have also noticed the strange syntacsis they used in the examples, but I didn't think it was important.</p></div>
	</div>
</div>
		