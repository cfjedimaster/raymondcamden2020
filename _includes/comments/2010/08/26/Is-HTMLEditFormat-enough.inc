
<div class="comment" id="c_1713726114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726114">1</a> by Ed
		posted on 8/26/2010 at 11:57 PM
		</div>
		<div class="comment_text"><p>Thanks, I am going to have to dig into this more.  My client just got the report back from their annual penitration test, and while we thought we had XSS issues pretty well in hand, we got nailed on a number.  Thankfully you have to be an authenticated user before you get to do anything dangerious and our login secrity came back great.  But still need to tighten stuff up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726115">2</a> by JC
		posted on 8/27/2010 at 12:23 AM
		</div>
		<div class="comment_text"><p>function globalAntiXSS() {<br>	formKeys = structkeylist(form);<br>	for(i = 1; i lte listlen(formKeys); i = i + 1)<br>		{<br>		form[listgetat(formKeys,i)] = htmleditformat(structfind(form,listgetat(formKeys,i)));<br>		form[listgetat(formKeys,i)] = replace(structfind(form,listgetat(formKeys,i)),"'","&amp;##39;",'ALL');</p><p>		}</p><p>	urlKeys = structkeylist(url);<br>	for(i = 1; i lte listlen(urlKeys); i = i + 1)<br>		{<br>		url[listgetat(urlKeys,i)] = replace(replace(structfind(url,listgetat(urlKeys,i)),'&lt;','&amp;lt;','ALL'),'&gt;','&amp;gt;','ALL');<br>		}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726116">3</a> by JC
		posted on 8/27/2010 at 12:25 AM
		</div>
		<div class="comment_text"><p>The addition of single quotes seems to make it pretty much foolproof.</p><p>Without those, you can run into problems when you do something like a form submission preview page with hidden inputs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2193955289">
	<div>
		<img src="https://disqus.com/api/users/avatars/gordonfrobenius.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2193955289">4</a> by Gordon Frobenius
		posted on 8/14/2015 at 3:38 PM
		</div>
		<div class="comment_text"><p>Want to hear something crazy?  I just verified that VERACODE still only checks for HTMLCodeFormat(), HTMLEditFormat(), URLEncodedFormat().  They should be embarrassed.  We are forced by a third party to use VERACODE and our application is MASSIVE.  So we literally have to sift through tens of thousands of false positives every time we do a scan.  They<br>do not recognize custom protection functions even if those functions follow OWASP's recommendations.  They do not recognize ESAPI or the newer built-in CF functions based off of ESAPI which take into the other contexts like JavaScript and attribute.  It is old news that HTMLEditFormat() isn't sufficient, VERACODE themselves even say so in their own presentation! (slide 24)  <a href="https://disq.us/url?url=https%3A%2F%2Fwww.owasp.org%2Fimages%2F1%2F16%2FOWASP_AppSec_Research_2010_Deconstructing_ColdFusion_by_Eng.pdf%3A6M1MtlTYqjeLbYjVHKPoC8NL2is&amp;cuid=3321886" rel="nofollow noopener" title="https://www.owasp.org/images/1/16/OWASP_AppSec_Research_2010_Deconstructing_ColdFusion_by_Eng.pdf">https://www.owasp.org/image...</a></p></div>
	</div>
</div>
		