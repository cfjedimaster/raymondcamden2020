
<div class="comment" id="c_1713734822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734822">1</a> by Michael Long
		posted on 8/28/2011 at 1:18 AM
		</div>
		<div class="comment_text"><p>CFPOP has always had issues. We tried to use it to handle bounce processing and certain e-mails would simply crash the system. Attachments were always problematic too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734826">2</a> by Dave Watts
		posted on 8/28/2011 at 1:29 AM
		</div>
		<div class="comment_text"><p>Did you check the first radio button in your screenshot? Try that if you haven't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734823">3</a> by Az
		posted on 8/28/2011 at 5:02 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>When you are retrieving e-mail via POP3 from Gmail the two settings you were looking at do the following things:</p><p>1. Determine what e-mail will be presented via POP from that point forward.  The options are either any new messages from the time you set the option or all messages ever received or to turn off POP3 access.</p><p>2. The second option determines what is done in the WEB interface after a message is retrieved via POP3.  It does not change the behavior of the POP3 server.</p><p>I have noticed that no matter what settings you apply, once you retrieve your e-mail via POP3 from your Gmail account it is removed from the POP3 list regardless of what you've configured for the second option.  The second option just determines if the copy in the web interface is archived, marked read, left alone, etc.</p><p>It also seems that you don't need to send a delete command via POP3 to have the POP3 system clear a message from the list, simply retrieving the message removes it from the list of available messages.</p><p>If you change the first option to "all mail" and apply the setting it will make every single e-mail in your mailbox available for retrieval via POP3, however, once you have retrieved them via POP3 once they are removed from the list of messages available for retrieval via POP3 for future connections.</p><p>I'm not sure why Google chose to have it clear the message after retrieval instead of waiting for a command to remove it from the server, but that's the behavior I've seen when using POP3 to access my Gmail account in the past.</p><p>-Az</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734824">4</a> by Raymond Camden
		posted on 8/28/2011 at 5:23 AM
		</div>
		<div class="comment_text"><p>@Dave: Yep, it was selected. It just doesn't stay checked when you come back to the form.</p><p>@Az: That sees to mesh with everything I've seen. I wonder why.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734827">5</a> by Dan G. Switzer, II
		posted on 8/29/2011 at 7:32 PM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>Just keep in mind that GMail was never really designed for POP retrieval of mail--it was designed to be a web-based solution. It's not a traditional mail server--it's custom software that doesn't necessarily conform with the spec.</p><p>My suspicion is because Google really doesn't want you deleting mail from Gmail, they implemented their POP protocol to just flag the mail as being downloaded w/no way to reset that flag.</p><p>I doubt there's anything you can do to work around this, as I suspect it's completely at the server-side of things. That said, one thing you might be able to do is switch over to IMAP for Gmail. Using IMAP should allow you to keep reading in the same message over and over.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734830">6</a> by John Sieber
		posted on 8/31/2011 at 12:53 AM
		</div>
		<div class="comment_text"><p>Thanks Ray and everyone else that has commented in this thread. I recently switched from running my own Exchange Server to using Google Apps and have a bounced mail routine that connected to a mailbox using cfpop and this info greatly reduced the time it took to get it functional again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734828">7</a> by Josh Shortlidge
		posted on 10/2/2012 at 9:32 PM
		</div>
		<div class="comment_text"><p>The following suggestion works GREAT:<br>"To enable Recent mode, replace 'username@...' in the Username field of your POP client settings with 'recent:username@...' and ensure that the Leave messages on server option in your POP client is enabled."</p><p>It worked for me!</p><p>It comes from another site (not my own idea), and I would put the URL here if this site allowed URLs (says my comment is flagged as spam).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734825">8</a> by Raymond Camden
		posted on 10/2/2012 at 9:41 PM
		</div>
		<div class="comment_text"><p>I do allow URLs, but, the spam blocker sometimes gets a bit over aggressive. ;) Thanks for sharing the tip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734829">9</a> by Matt C
		posted on 4/16/2013 at 5:58 PM
		</div>
		<div class="comment_text"><p>Hey Ray, this code worked great for me until my IT guy told me that it was it opened up SSL on all the other poppers running on that server. I don't understand the full nature of what happened but he said something of the effect of once you "turn it on", you gotta turn it off. Thankfully that particular server was running CF10 and I didn't have to use this code anyways and was easily corrected. Unfortunately not all of our servers is CF10.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734831">10</a> by Raymond Camden
		posted on 4/16/2013 at 7:07 PM
		</div>
		<div class="comment_text"><p>I wasn't aware that it was system wide. In theory you could reset the values after you run the cfpop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734832">11</a> by Matt C
		posted on 4/16/2013 at 7:08 PM
		</div>
		<div class="comment_text"><p>Yea, that's what he said but excuse my ignorance, how would I do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734833">12</a> by Dave Watts
		posted on 4/16/2013 at 7:10 PM
		</div>
		<div class="comment_text"><p>Any time you set JVM properties, they affect the entire JVM. This is why you typically set them only temporarily, within a single script, then set them back to their original values. You see this when people disable the JSafe crypto provider, too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734834">13</a> by Raymond Camden
		posted on 4/16/2013 at 7:13 PM
		</div>
		<div class="comment_text"><p>Matt, if I had to guess, I bet getProperty(x) would work to get the original values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734835">14</a> by Matt C
		posted on 4/16/2013 at 7:15 PM
		</div>
		<div class="comment_text"><p>Thnx guys.</p></div>
	</div>
</div>
		