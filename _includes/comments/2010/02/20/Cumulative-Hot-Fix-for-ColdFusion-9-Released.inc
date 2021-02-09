
<div class="comment" id="c_1713722083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722083">1</a> by Anthony Webb
		posted on 2/21/2010 at 7:13 AM
		</div>
		<div class="comment_text"><p>I just applied this to 2 of my identical CF9 (mac 10.6) boxes.  One went well and one was a fail.</p><p>In the one that failed the server starts up OK, but calls to any list functions caused it to bomb.  Logs are full of stuff like:</p><p>coldfusion.runtime.ListFunc.ListFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; - coldfusion.runtime.ListFunc.ListFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; null</p><p>Trying to get to the admin page throws:<br>javax.servlet.ServletException: ROOT CAUSE: <br>java.lang.NoSuchMethodError: coldfusion.runtime.ListFunc.ListFindNoCase(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I<br>	at coldfusion.runtime.CFPage.ListFindNoCase(<a href="http://disq.us/url?url=http%3A%2F%2FCFPage.java%3AMAYmpD4i7mNJG0gJSoNSDuaVIX0&amp;cuid=3321886" rel="nofollow noopener" title="CFPage.java">CFPage.java</a>:1893)<br>	at cflogin2ecfm655958995.runPage(E:\centaur_rc1\cfusion\wwwroot\CFIDE\administrator\login.cfm:34)</p><p>Wait, where did "E:\centaur_rc1" come from?  I am on a mac?  Is there a bug in this patch?  Why would it work on my other machine?</p><p>I've got some digging to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722086">2</a> by Raymond Camden
		posted on 2/21/2010 at 9:40 PM
		</div>
		<div class="comment_text"><p>Ignore the path - that just comes from where stuff is compiled over at Adobe.</p><p>Outside of that, I'd file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722089">3</a> by Raymond Camden
		posted on 2/21/2010 at 9:40 PM
		</div>
		<div class="comment_text"><p>FYI, can you show me a code snippet that - by itself - forces this error? I want to try it here. I did a simple listFirst call and it didn't throw an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722085">4</a> by Simon Romanski
		posted on 2/23/2010 at 1:08 AM
		</div>
		<div class="comment_text"><p>Maybe it's a coincidence. However, since I installed this hot fix uploading images through fckeditor is wacked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722092">5</a> by Doug
		posted on 2/23/2010 at 7:00 PM
		</div>
		<div class="comment_text"><p>Hey Simon, I don't know if this helps since I use FCKeditor outside of ColdFusion, but I noticed FCKeditor doesn't like the recent update to Firefox because the regex that checks browser version doesn't consider any version updates past 2009.  I got around it by switching off (false) the fckEditor.checkBrowser variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722084">6</a> by John Sieber
		posted on 2/23/2010 at 10:11 PM
		</div>
		<div class="comment_text"><p>Does this hotfix also deal with the reported vulnerability in BlaseDS as well, or do both need to be applied?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722087">7</a> by Raymond Camden
		posted on 2/23/2010 at 10:16 PM
		</div>
		<div class="comment_text"><p>It does not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722088">8</a> by Brian h.
		posted on 3/3/2010 at 4:42 AM
		</div>
		<div class="comment_text"><p>Hey Simon.</p><p>I had a problem after the hotfix too. You might want to check this out. This was exactly our problem:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.ephost.com%2Fsupport%2Findex.php%3F_m%3Dknowledgebase%26_a%3Dviewarticle%26kbarticleid%3D212%3Acqwz2Alj7RMa4Vpkq_PjlF72wxs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ephost.com/support/index.php?_m=knowledgebase&amp;_a=viewarticle&amp;kbarticleid=212">http://www.ephost.com/suppo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722091">9</a> by Brian H.
		posted on 3/3/2010 at 5:56 AM
		</div>
		<div class="comment_text"><p>Actually, the fix was even easier for us.  We simply added -Dcoldfusion.fckupload=true   to the JVM Arguments panel in CF admin.</p><p>-Brian</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722093">10</a> by Joel G.
		posted on 3/9/2011 at 9:58 PM
		</div>
		<div class="comment_text"><p>I also had a problem with FCK Editor image uploads after applying the hotfix.   I fixed it in editor/filemanager/connectors/cfm/cf_commands.cfm.  There is a function called FileUpload.  I renamed that to FileUploader and then changed 2 calls to that function: cf_upload.cfm and cf_connector.cfm.  Note that it is only necessary to change the actual function calls.  FileUpload appears as a string in a few places and you can leave them alone.  Fixed the 500 error for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722096">11</a> by Joel G.
		posted on 3/9/2011 at 10:29 PM
		</div>
		<div class="comment_text"><p>Wow, I just realized how late I am to this party.</p><p>I should note that the problem on our end was that we rolled out fckeditor separate from the one included with CF 9 and the fileupload function conflicted with the one in CFIDE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722095">12</a> by Michael De Jonghe
		posted on 6/17/2011 at 10:31 PM
		</div>
		<div class="comment_text"><p>I'm getting this error in my log files:</p><p>Element EXCEPTION.ROOTCAUSE.TYPE is undefined in ARGUMENTS.</p><p>It's all over multiple applications.</p><p>Any ideas on that.  Applied the hot fix the other day.</p></div>
	</div>
</div>
		