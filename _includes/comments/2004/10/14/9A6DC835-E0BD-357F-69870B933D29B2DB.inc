
<div class="comment" id="c_1713616329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616329">1</a> by tony petruzzi
		posted on 10/15/2004 at 3:41 PM
		</div>
		<div class="comment_text"><p>Perfect!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616334">2</a> by Andy Allan
		posted on 10/15/2004 at 4:44 PM
		</div>
		<div class="comment_text"><p>Bah! I'm still using 3.0 ... I really need to get around to upgrading, but that's my fault :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616331">3</a> by Raymond Camden
		posted on 10/15/2004 at 5:42 PM
		</div>
		<div class="comment_text"><p>The db scripts do NOT contain the code to auto add the admin/admin user. I will add that later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616330">4</a> by Pete
		posted on 10/15/2004 at 6:14 PM
		</div>
		<div class="comment_text"><p>Ray, are you planning on implementing the ability to include images in a post (regular post, not comments) as well as text formatting?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616332">5</a> by Raymond Camden
		posted on 10/15/2004 at 7:14 PM
		</div>
		<div class="comment_text"><p>There are no restrictions on HTML for blog entries, so I don't really see the point of this. I've done entries with images before. Now, you -do- have to upload it manually outside the editor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616333">6</a> by Can Atak
		posted on 11/15/2004 at 3:15 PM
		</div>
		<div class="comment_text"><p>I am trying to run first time BlogCFC on a Blackstone server witz Access DB but I get always data source error.</p><p>Of course I have tested DB with another code and it is working withoput any problem.</p><p>I have edited INI file and Application.cfm etc. but I do not know what is the reason of this problem.</p><p>Any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616337">7</a> by Raymond Camden
		posted on 11/15/2004 at 5:13 PM
		</div>
		<div class="comment_text"><p>What error do you get exactly? Can you confirm the DNS verifies?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616336">8</a> by Can Atak
		posted on 11/16/2004 at 12:55 PM
		</div>
		<div class="comment_text"><p>Of course I have checked DSN and it works with a simple SQL statement.</p><p>Here is the error.<br>~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~</p><p> Data source cfcblog could not be found.</p><p>The error occurred in C:\WebRoot\org\camden\blog\blog.cfc: line 426<br>Called from C:\WebRoot\CFCBlog\includes\pods\calendar.cfm: line 51<br>Called from C:\WebRoot\CFCBlog\tags\layout.cfm: line 59<br>Called from C:\WebRoot\CFCBlog\index.cfm: line 160<br>Called from C:\WebRoot\org\camden\blog\blog.cfc: line 426<br>Called from C:\WebRoot\CFCBlog\includes\pods\calendar.cfm: line 51<br>Called from C:\WebRoot\CFCBlog\tags\layout.cfm: line 59<br>Called from C:\WebRoot\CFCBlog\index.cfm: line 160</p><p>424 : 		<br>425 : 		<br>426 : 		&amp;lt;cfquery datasource="#instance.dsn#" name="days"&amp;gt;<br>427 : 			select distinct <br>428 : 				&amp;lt;cfif instance.blogDBType is "MSSQL"&amp;gt;<br>...</p><p>~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616338">9</a> by Raymond Camden
		posted on 11/16/2004 at 3:32 PM
		</div>
		<div class="comment_text"><p>Can, notice the error though. "Data source cfblog could not be found." Did you name your DSN cfblog? It seems like you did not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616335">10</a> by O?uz Demirkap?
		posted on 1/7/2005 at 2:39 AM
		</div>
		<div class="comment_text"><p>When we use any international language such as Turkish with unicode support, comment e-mails has problem with chars.</p><p>I have just changed blog.cfc on line 787 and add  charset="utf-8" into cfmail tag and it works now without any problem.</p></div>
	</div>
</div>
		