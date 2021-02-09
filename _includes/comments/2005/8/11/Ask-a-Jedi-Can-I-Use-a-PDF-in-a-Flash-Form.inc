
<div class="comment" id="c_1713619910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619910">1</a> by Ryan Guill
		posted on 8/11/2005 at 7:29 PM
		</div>
		<div class="comment_text"><p>Thanks, thats what I was expecting.</p><p>It is too bad that we cant embed html natively inside of a swf... I wouldn't even really want the ability to pass variables back and forth (although that would be sweet...) but just a frame of sorts I could put in a swf that I could just put a normal html page in.</p><p>Oh well, maybe in flash 9 ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619913">2</a> by Simeon
		posted on 8/11/2005 at 8:40 PM
		</div>
		<div class="comment_text"><p>Not on topic for this post, but I have been working on a project this week to embed dynamic flashpaper docs in flashforms.  It has worked out great.</p><p>So if you are generating your pdf's, you might conisder generating them as flashpaper and going that route.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619914">3</a> by Ryan Guill
		posted on 8/11/2005 at 8:42 PM
		</div>
		<div class="comment_text"><p>That is interesting simeon.  Do you have a blogpost or something that shows that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619916">4</a> by Raymond Camden
		posted on 8/11/2005 at 8:43 PM
		</div>
		<div class="comment_text"><p>It should be rather simple. All you would need to do is use the trick I described about embedding charts in flash forms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619918">5</a> by John Farrar
		posted on 8/12/2005 at 3:00 AM
		</div>
		<div class="comment_text"><p>OK... side question. How do I load a flash movie into a flash form and have it communicate with or rather have the form communicate with it. (Both ways)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619919">6</a> by John Dowdell
		posted on 8/12/2005 at 11:14 AM
		</div>
		<div class="comment_text"><p>Yes, the HTML rendering inside the Macromedia Flash Player does not handle as many constructs as the HTML/JS/CSS rendering within a browser -- otherwise it would be as big as a browser, and harder to get on the audience's machines.</p><p>One other trick to display a foreign file "within" a Flash SWF presentation is to build a four-SWF frame around the other renderer... tables were used in the past, IFRAMES by others, depending on your audience's browsers you might choose other techniques today. With reasonable framerates the CPU hit is tolerable.</p><p>Authoring-time or server-time format translations are another option... like Simeon says, Macromedia FlashPaper is a pretty easy way to convert most any office format to SWF.</p><p>But embedding any ActiveX Control or Netscape Plugin within a SWF, that's still a difficult thing, agreed.</p><p>jd/mm</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619917">7</a> by Ryan Guill
		posted on 8/12/2005 at 5:21 PM
		</div>
		<div class="comment_text"><p>jd, <br>I completely understand that, I wouldnt want flash to actually render the html/css/js (although, wouldnt that be something!) because you're right, that would balloon the size of the flash player considerably.  I was talking about something similar to your four flash swf method.  Something like flash with a hole in it if you will. Let the browser do the rendering, just display it in the middle of the swf.  Or on top of it would work as well...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619915">8</a> by Raymond Camden
		posted on 8/12/2005 at 11:40 PM
		</div>
		<div class="comment_text"><p>John F - sorry - I'm not aware of any way of dong that. I can definitely make the Flash Forms talk to JS, but not the other way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619920">9</a> by Thuy Nguyen
		posted on 6/19/2006 at 8:48 PM
		</div>
		<div class="comment_text"><p>Ok, so is there a way to batch process .pdfs into Flash Paper? I recall reading about some kind of script that can be written. I have a lot of .pdfs to convert into .swfs, (read: 100 page catalogs) and have been forced to change them one by one. Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619921">10</a> by ILYA
		posted on 5/30/2007 at 10:45 PM
		</div>
		<div class="comment_text"><p>If you need to &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fprint2flash.com%3A88fIKSQPfrEsoRNVoEBF4IbjTtc&amp;cuid=3321886" rel="nofollow noopener" title="http://print2flash.com">http://print2flash.com</a>"&gt;convert PDFs or other printable documents to flashpapers&lt;/a&gt; the Print2Flash may be a better choice. Print2Flash has APIs for automated document conversion.</p><p>VBScript example:<br>P2F = CreateObject("P2F.Server")<br>P2F.ConvertDir "C:\docs", "*.pdf", "C:\inetpub\<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%3AZtAAcO7n0WFZdhfJsVEieTn64Z4&amp;cuid=3321886" rel="nofollow noopener" title="www.mysite.com">www.mysite.com</a>\swf"</p><p>Command line example:<br>p2fserver.exe C:\ Docs\*.pdf  C:\inetpub\<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%3AZtAAcO7n0WFZdhfJsVEieTn64Z4&amp;cuid=3321886" rel="nofollow noopener" title="www.mysite.com">www.mysite.com</a>\swf</p><p>In the examples all PDFs in the "C:\docs" folder are converted to Flash. The output files are written to the "C:\inetpub\<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%3AZtAAcO7n0WFZdhfJsVEieTn64Z4&amp;cuid=3321886" rel="nofollow noopener" title="www.mysite.com">www.mysite.com</a>\swf" folder.</p><p>Print2Flash OLE Automation API objects can run using rights of a user different from the user which creates and uses these objects. This allows converting documents from server-side scripts like ASP or PHP.</p><p>Print2Flash batch processing also allows you to fine-tune document options like paper size, page orientation, printing resolution, etc. Unlike with FlashPaper the document toolbar and functions can be customized, too.</p><p>Print2Flash website: <br><a href="http://disq.us/url?url=http%3A%2F%2Fprint2flash.com%3A88fIKSQPfrEsoRNVoEBF4IbjTtc&amp;cuid=3321886" rel="nofollow noopener" title="http://print2flash.com">http://print2flash.com</a></p></div>
	</div>
</div>
		