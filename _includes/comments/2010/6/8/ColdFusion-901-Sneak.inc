
<div class="comment" id="c_1713724677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724677">1</a> by Steven Erat
		posted on 6/9/2010 at 10:34 PM
		</div>
		<div class="comment_text"><p>Thanks for the s3 overview Ray.  I was wondering how secure the s3 connection is?  Specifically since the credentials are passed in the s3 URL.  If packet sniffing http:// or ftp:// transmissions, the URL can be observed.  If sniffing an https:// connection, the URL is not observable.  Does it implicitly use an encryption protocol (SSL?) to obscure the credentials in the URL from packet sniffing cracks?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724692">2</a> by Raymond Camden
		posted on 6/9/2010 at 10:35 PM
		</div>
		<div class="comment_text"><p>Wouldn't yo need to be packet sniffing on the CF server network itself? If you sniff on the client, you wouldn't see anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724690">3</a> by Steven Erat
		posted on 6/9/2010 at 10:45 PM
		</div>
		<div class="comment_text"><p>Right, the client connection is secure because the client doesn't require the accesskey/secretkey to pull down images.</p><p>But accessing s3 from ColdFusion does require the credentials.  A cracker on the CF server, the CF network, or elsewhere along the network path to s3 could intercept the packets and observe the URL (and hence the credentials) unless the URL were encrypted en route.  Since this is recommended connection method by Amazon, surely they must have secured the protocol, but I'm just looking for confirmation.  They probably secure the authentication part of the connection, then pass an authentication token (kerberos ticket?) back and forth during the remainder of the session which would probably occur unencrypted.  I suppose I'd have to look up the s3 RFC if there is one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724688">4</a> by Raymond Camden
		posted on 6/9/2010 at 10:47 PM
		</div>
		<div class="comment_text"><p>Absolutely no idea on this one - but it's definitely important for Adobe to answer. I'll ping Terry. Of course, he may not be _able_ to answer yet anyway. Certainly it must be answered at launch time though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724687">5</a> by Steven Erat
		posted on 6/9/2010 at 10:57 PM
		</div>
		<div class="comment_text"><p>Obviously I completely overlooked the part where you said not to ask questions. Ooops.  Sorry.  I won't be offended if you delete.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724691">6</a> by Raymond Camden
		posted on 6/9/2010 at 11:00 PM
		</div>
		<div class="comment_text"><p>Nah, it's a valid question. I've pinged Terry - no guarantee we will get a response though. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724689">7</a> by Rupesh Kumar
		posted on 6/10/2010 at 7:28 AM
		</div>
		<div class="comment_text"><p>The communication between the amazon S3 server and CF is secured using SSL. So all the data including secret access key is completely secure. Even if you choose not to use SSL, which btw we don't allow directly, your secret access key will remain safe as that is never sent over wire.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724693">8</a> by Raymond Camden
		posted on 6/10/2010 at 4:49 PM
		</div>
		<div class="comment_text"><p>Thanks for the clarification, Rupesh!</p></div>
	</div>
</div>
		