
<div class="comment" id="c_1713735228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735228">1</a> by Mario Rodrigues
		posted on 9/16/2011 at 7:37 PM
		</div>
		<div class="comment_text"><p>Nice write-up Ray.  I've done something similar in the past.  If you want to add attachments to your eml, you can do so with the something like:</p><p>                    &lt;cfscript&gt;<br>                        newBodyPart = mbp.init();<br>                        source = bads.init(fileObj,mime_type);<br>                        handler = dh.init(source);<br>                        newBodyPart.setFileName(javaCast('string',title));<br>                        newBodyPart.setContent(fileObj,mime_type) ;<br>                        newBodyPart.setDataHandler(handler);<br>                        newMimeMultipart.addBodyPart(newBodyPart);<br>                    &lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735245">2</a> by Raymond Camden
		posted on 9/16/2011 at 7:38 PM
		</div>
		<div class="comment_text"><p>Nice one Mario - thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735246">3</a> by James Moberg
		posted on 9/16/2011 at 9:13 PM
		</div>
		<div class="comment_text"><p>Does using the "image/jpeg" mime type offer different compatibility or something?</p><p>Have you tried the EML mime type (message/rfc822)?<br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F5565267%2Fwhat-mime-for-reading-eml-file%3AhA_xuwEtAmKiQv6LRGnApAnownw&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/5565267/what-mime-for-reading-eml-file">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735250">4</a> by Raymond Camden
		posted on 9/16/2011 at 9:16 PM
		</div>
		<div class="comment_text"><p>I can see where adding the mime type with cfheader would help. Good thing. I have no idea though what you mean with image/jpeg though. It's not an image.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735251">5</a> by James Moberg
		posted on 9/16/2011 at 9:34 PM
		</div>
		<div class="comment_text"><p>I realize that it's not an image, but that's how you mentioned delivering it in the above article:</p><p>&lt;cfcontent type="image/jpeg" file="#tempFile#"&gt;</p><p>Change this to "message/rfc822".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735249">6</a> by Raymond Camden
		posted on 9/16/2011 at 9:41 PM
		</div>
		<div class="comment_text"><p>Oh wow - I didn't realize I had done that! Thank you for pointing it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735252">7</a> by Dan G. Switzer, II
		posted on 9/17/2011 at 1:13 AM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>I would think the better way to handle this instead of trying to build the message from the &lt;cfpop /&gt; results, would be to just use the JavaMail API to download the message in EML for you.</p><p>That way you know you're getting an *exact* copy of the e-mail--not a pseudo-copy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735254">8</a> by Raymond Camden
		posted on 9/17/2011 at 5:47 AM
		</div>
		<div class="comment_text"><p>I had considered that. Do you know if it is an option?</p></div>
	</div>
</div>
		