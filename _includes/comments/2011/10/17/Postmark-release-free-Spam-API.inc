
<div class="comment" id="c_1713735819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735819">1</a> by kc
		posted on 10/18/2011 at 2:47 AM
		</div>
		<div class="comment_text"><p>This is cool. How about taking it to the next level and creating a SpamAssassin API in ColdFusion? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735822">2</a> by Seb Duggan
		posted on 10/18/2011 at 2:54 AM
		</div>
		<div class="comment_text"><p>@kc: You mean like this one?</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fsebduggan%2FPostmarkSpamAssassinCFC%3AJVXJeu63U44GIwMfu6Sxo0W4pC4&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/sebduggan/PostmarkSpamAssassinCFC">https://github.com/sebdugga...</a></p><p>Wrote it earlier today in response to Postmark's request for API wrappers in different languages...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735823">3</a> by Raymond Camden
		posted on 10/18/2011 at 5:08 AM
		</div>
		<div class="comment_text"><p>Seb - any reason why you do the more complex http post then mine? Ie, you serialize, you pass the accepts header, etc?</p><p>It would really rock if your CFC added the ability to generate the fake email for you. Ie, pass in the title, body, and a sender email, and it does what mine does above. Know what I mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735820">4</a> by Randy Merrill
		posted on 10/18/2011 at 7:04 AM
		</div>
		<div class="comment_text"><p>Hehe, I also made a wrapper as part of the call out to developers on the Postmark Blog:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Femberfeather%2Fpostmark4cf%3AS7GoIjEpMI3ghpv295mzw8BBAbY&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/emberfeather/postmark4cf">https://github.com/emberfea...</a></p><p>Mine doesn't have all the fancy functions that Seb's does and it requires full script CFCs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735825">5</a> by Bjorn Jensen
		posted on 10/18/2011 at 11:22 AM
		</div>
		<div class="comment_text"><p>A big problem I'm seeing with this is that the information you provide for the spamassassin instance is incorrect and hence you will not get the "real" score, if such a thing can be assumed.<br>What I mean is that you need to pass the exact raw email as it is received, since spamassassin uses all the information in the email to make it's decisions. It uses the Received IP's to check against RBL's. It uses the html/text/whatever body and headers in the bayes filters.<br>It also looks at encodings in the email and how it all match up.</p><p>So I'd say that unless you're actually passing the entire raw email (and even then there's issues if you can't configure trusted relayes) your results are bound to be so-so.</p><p>Disclaimer: I'm the email/spamassassin admin at our work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735826">6</a> by Seb Duggan
		posted on 10/18/2011 at 11:56 AM
		</div>
		<div class="comment_text"><p>Ray: Bjorn's got it right - the data that the service expects is the full email source, including all headers.</p><p>In other words, what you'll see in your email app or Gmail if you view the original source.</p><p>This contains all the routing information for the email, among other things, which is a large part of seeing whether the message gets flagged as spam.</p><p>To be honest, I'm not sure how useful the API is to check how spammy an outgoing message might be...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735824">7</a> by Raymond Camden
		posted on 10/18/2011 at 3:19 PM
		</div>
		<div class="comment_text"><p>Well, I'd probably take so-so at minimum. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735828">8</a> by Rex
		posted on 10/18/2011 at 9:44 PM
		</div>
		<div class="comment_text"><p>This is great! How about CFPOP an email, then check it against Postmark.  That would have all the "raw" data in it, would it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735821">9</a> by Raymond Camden
		posted on 10/18/2011 at 9:47 PM
		</div>
		<div class="comment_text"><p>Well, by the time you cfmail it to the person, it is too late. ;) You could use a testing account though. cfmail it to them and cfpop it. This would need to be done async though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735829">10</a> by Bjorn Jensen
		posted on 10/19/2011 at 11:39 AM
		</div>
		<div class="comment_text"><p>I've just tested their service today with some of the spam we have received and I can see it's certainly a very conservative ruleset they are using. This means that they score way way lower than our own installation, failing to block most of the spam.<br>I can only imagine this is because if anyone is actually using this service, they are afraid they will block too much legit email.</p><p>While it's a cool idea and certainly has it's uses, spamfiltering should really be applied at the mailserver. What you can use this for is a second level of spamfiltering, such as checking if any of the ip's or url's has been blacklisted since the time the email was received and until it's fetched from the server.</p><p>If you plan on using this service, make sure you can send the raw email as it was received (don't think this is possible with cfpop) and remove any trusted relayes yourself so you are sure you won't hit incorrect rbl's.<br>Even better, set up your own spamassassin installation, it's free, has great client tools, is dirt easy to use and you can customize the rules to your liking, including setting up correct trusted relayes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735827">11</a> by Randy Merrill
		posted on 10/19/2011 at 7:27 PM
		</div>
		<div class="comment_text"><p>I think that the intent of the service isn't to be used to filter incoming mail. If you want to do that you should probably install your own installation of spam assassin.</p><p>This service seems to be more in line with helping you to not be the one the sending out spam.</p><p>It very useful when your application allows the user to send emails to others. Especially since if you are using DKIM and SPF, as you do with the normal postmark API, it will affect all the email that you send if you are sending out spam from your users.</p><p>To me it is an extremely easy way to test your emails before you send them so that your entire application doesn't get marked as spam because some of your users are abusing the system to send spam.</p></div>
	</div>
</div>
		