
<div class="comment" id="c_1713662646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662646">1</a> by BL
		posted on 2/27/2007 at 6:29 AM
		</div>
		<div class="comment_text"><p>What do you mean by "Adobe made updatecontent blocking"?</p><p>What is blocking?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662667">2</a> by Raymond Camden
		posted on 2/27/2007 at 7:08 AM
		</div>
		<div class="comment_text"><p>It means that when Spry makes the HTTP call it waits for the result. So you can't do anything else until it is done. This is JUST how updateContent was written. Spry's other net functions allow you to do blocking/non-blocking calls depending on what you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662664">3</a> by BL
		posted on 2/27/2007 at 7:52 AM
		</div>
		<div class="comment_text"><p>is blocking/non-blocking the same as sync/async?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662668">4</a> by Raymond Camden
		posted on 2/27/2007 at 8:05 AM
		</div>
		<div class="comment_text"><p>Yes. I call it Ray-speak.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662670">5</a> by Cristian MARIN
		posted on 2/27/2007 at 7:14 PM
		</div>
		<div class="comment_text"><p>I think you are aware that a malicious user could use the urlcheck.cfm to start an DoS attack or to exploit other vulnerabilities of any web server and remain undetected.</p><p>Using such a page I can even submit comments to blogs if they accept URL parameters.</p><p>I think you should include a key or a method to secure your CF script to make sure you are called from within the form only.</p><p>I follow your blog and I have to congratulate about your Spry interest and support. Keep up the good work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662669">6</a> by Raymond Camden
		posted on 2/27/2007 at 7:18 PM
		</div>
		<div class="comment_text"><p>Absolutely. The simplest solution would be to require a logged in user and log the checks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662671">7</a> by Jay
		posted on 2/28/2007 at 12:12 AM
		</div>
		<div class="comment_text"><p>This is fine, but what boggles my mind is, if you're checking the http status message anyway, why not just check for a 200 ("OK") status, and take care of the whole thing with 1 conditional?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662673">8</a> by Raymond Camden
		posted on 2/28/2007 at 12:21 AM
		</div>
		<div class="comment_text"><p>Why does it matter? He still needs the conditionals to ensure a valid response came back from CFHTTP anyway, so you wouldn't lose any conditionals, you would just change the status code being checked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662672">9</a> by Jay
		posted on 3/1/2007 at 4:16 AM
		</div>
		<div class="comment_text"><p>it *could* matter in cases where you needed to differentiate the response to a greater degree.</p><p>...meaning, say my business logic required the url to not only be valid, but be currently accessible from the server hosting my app.</p><p>In that case, I'd want to check for a 200 OK reponse specifically.  If I checked for just ! 404, that would let 500 (internal server error, think it's 500) through, as well as access-denied (i.e. directory browsing forbidden) and similar responses through the check.</p><p>I know this is contriving additional conditions beyond the url just being "valid" - but I'd tend to think the udf would be useful in a more broad range of uses if it checked specifically for 200 ok.</p><p>Just my opinion though - as I said above, the way that udf works now is fine for what it seems to be intended to do.</p></div>
	</div>
</div>
		