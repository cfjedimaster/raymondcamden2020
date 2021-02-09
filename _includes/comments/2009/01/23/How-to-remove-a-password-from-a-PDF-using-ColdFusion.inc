
<div class="comment" id="c_1713711722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711722">1</a> by Jochem van Dieten
		posted on 1/23/2009 at 9:57 PM
		</div>
		<div class="comment_text"><p>PDFs have 2 passwords, a user password and an owner password. If you use the owner password instead of the user password in combination with "none" encryption it will work just fine:<br>&lt;cfpdf action="protect" source="protected.pdf"<br>  newUserPassword = "test"<br>   newOwnerPassword = "test"<br>   permissions = "All"<br>   destination = "unprotected.pdf"<br>   encrypt = "none"<br>   overwrite = "yes"<br>   password = "user" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711724">2</a> by Raymond Camden
		posted on 1/23/2009 at 10:00 PM
		</div>
		<div class="comment_text"><p>Thanks Jochem! I still say CFPDF needs to be 'fixed' to handle a PDF with just a userpassword and not an ownerpassword. I'm still going to add this to pdfUtils, but I'll be sure to document the fact that if you _are_ creating the PDF then you can use the ownerpassword as a way around it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711712">3</a> by JC
		posted on 1/23/2009 at 10:01 PM
		</div>
		<div class="comment_text"><p>Given that it would have been trivial for Adobe to add a function to strip passwords from PDFs, I'd suspect that they simply didn't think the idea of effectively building a cracking mechanism for one of their products into another of their products was a good precedent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711718">4</a> by Raymond Camden
		posted on 1/23/2009 at 10:04 PM
		</div>
		<div class="comment_text"><p>Um, this is not even close to cracking. I -made- the PDF. I -knew- the password. What if I wanted to provide a dynamic sample of the PDF? I'd need to remove the password and delete pages 5-*, or whatever. That is a perfectly legitimate use case for removing a password from a pdf!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711716">5</a> by Andrew Scott
		posted on 1/24/2009 at 5:40 PM
		</div>
		<div class="comment_text"><p>@Ray, I am not sure that the ColdFusion tag should be fixed, But more that the DDX should be more aware of the password. As mentioned Owner Password stops people from doing this sort of thing, and the ability to stop the PDF from being edited is another option.</p><p>If DDX is ignoring those two options then the problem is in DDX and not ColdFusion, in my eyes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711715">6</a> by Raymond Camden
		posted on 1/24/2009 at 7:43 PM
		</div>
		<div class="comment_text"><p>I don't know. Maybe. Jochem shared (on another list) the PDF spec docs, and in my reading there I didn't see a clear 'you must use both' directive.</p><p>Who knew we would spend so much time on such a small detail in PDF files? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711714">7</a> by Peter Tilbrook
		posted on 3/27/2013 at 5:09 AM
		</div>
		<div class="comment_text"><p>What if you dont' the original password?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711717">8</a> by Raymond Camden
		posted on 3/27/2013 at 5:11 AM
		</div>
		<div class="comment_text"><p>Don't "know" I assume? Then you are screwed unless you hack it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2119104589">
	<div>
		<img src="https://disqus.com/api/users/avatars/kaknima.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2119104589">9</a> by kanima
		posted on 7/6/2015 at 8:46 AM
		</div>
		<div class="comment_text"><p>it's nice pdf remover<br>thanks for shared</p></div>
	</div>
</div>
		