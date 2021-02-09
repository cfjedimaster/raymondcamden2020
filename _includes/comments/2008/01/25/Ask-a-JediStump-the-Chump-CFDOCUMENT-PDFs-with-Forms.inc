
<div class="comment" id="c_1713676584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676584">1</a> by david buhler
		posted on 1/25/2008 at 11:32 PM
		</div>
		<div class="comment_text"><p>Does he mean:</p><p>"I want to add a <a href="http://disq.us/url?url=mailto%3Ajoe%40johndoe.com%3Aa3E8E1lcnI6fQikFgREoqEV_0So&amp;cuid=3321886" rel="nofollow noopener" title="mailto:joe@johndoe.com">mailto:joe@johndoe.com</a> link within my PDF?"</p><p>That, you could probably do with an 'a href' link?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676598">2</a> by C.Gratz
		posted on 1/25/2008 at 11:35 PM
		</div>
		<div class="comment_text"><p>David,</p><p>I am guesses he means a button to email the form contents to a specific address after they are filled out.  I am agreeing with Ray, that out of the box, I don't think CF does this without iText integration.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676599">3</a> by Roland Lopez
		posted on 1/26/2008 at 12:25 AM
		</div>
		<div class="comment_text"><p>You're right, Ray, this can not be achieved with ColdFusion.  CF does not have the capability to create dynamic PDF forms. The cfform reference page for CF8, states that you can but that is actually incorrect.</p><p>You can easily achieve this using the LiveCycle Designer and it will attach the XML data from the Form using your email application. Then you can take the XML to populate a blank copy of the PDF form. If you want to send the whole PDF document, however, you need to first "bless" it with the Reader Extensions.  Hope this helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676601">4</a> by Peter Doyle
		posted on 1/26/2008 at 4:32 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>In the post he doesn't mention pdf forms? Just that he wants an email button - I take it as a contact us type of link.</p><p>As above surely this can be done with a href on an image or text?</p><p>&lt;cfdocument format="pdf"&gt;<br>	&lt;a href="<a href="http://disq.us/url?url=mailto%3Ayourmail%40yourisp.com%3AXnVI5ushgAWcEBLWkBsU8PAucuQ&amp;cuid=3321886" rel="nofollow noopener" title="mailto:yourmail@yourisp.com">mailto:yourmail@yourisp.com</a>"&gt;&lt;img src="Resources/email_add.png" width="16" height="16" border="0"&gt;&lt;/a&gt;<br>&lt;/cfdocument&gt;</p><p>Peter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676600">5</a> by Rachel
		posted on 1/30/2008 at 3:46 AM
		</div>
		<div class="comment_text"><p>Roland is right, you need LiveCycle designer to create the form. It comes with Acrobat Pro (and any version of Creative Suite that includes Acrobat Pro). You can also use a form created in Acrobat (still requires Acrobat Pro, but a little more straightforward). <br>You can dynamically set where the button sends the email by binding it to a form field (hidden from view with styling) elsewhere in the document, and then setting the value of that form field with ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2212668694">
	<div>
		<img src="https://disqus.com/api/users/avatars/gfbj.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2212668694">6</a> by gfbj
		posted on 8/24/2015 at 9:43 PM
		</div>
		<div class="comment_text"><p>FWIW, cfdocument/pdf on CF 10 seems to allow &lt;input&gt;, &lt;input type="checkbox"&gt; but not &lt;input type="button"&gt; (also freaked out, wanted a "treeLock" if a &lt;table&gt; didn't have closing &lt;/tr&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2213281332">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2213281332">7</a> (In reply to <a href="#c_2212668694">#6</a>) by Raymond Camden
		posted on 8/25/2015 at 6:03 AM
		</div>
		<div class="comment_text"><p>I wonder how cfhtmltopdf handles it? I'd test, but I can't use it on a Mac.</p></div>
	</div>
</div>
		