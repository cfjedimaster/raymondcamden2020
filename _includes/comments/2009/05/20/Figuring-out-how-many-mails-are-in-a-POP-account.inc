
<div class="comment" id="c_1713715602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715602">1</a> by Michael Hnat
		posted on 5/20/2009 at 5:10 PM
		</div>
		<div class="comment_text"><p>Very interesting! Thx. Maybe there is also a way to see if an email has an attachment without getting the full body information.</p><p>Best,<br>Michi</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715588">2</a> by Seth
		posted on 5/20/2009 at 5:14 PM
		</div>
		<div class="comment_text"><p>You can do it using IMAP as well, not sure who to credit for this code:  <a href="http://disq.us/url?url=http%3A%2F%2Frafb.net%2Fp%2FIX15UV86.html%3AT-OxdJnOeaeRt-YaVi9_rsQUanM&amp;cuid=3321886" rel="nofollow noopener" title="http://rafb.net/p/IX15UV86.html">http://rafb.net/p/IX15UV86....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715607">3</a> by Andy Sandefer
		posted on 5/20/2009 at 8:19 PM
		</div>
		<div class="comment_text"><p>@Ray<br>This was an interesting read but I have one question.  Does the getMessageCount() method take into consideration the number of messages held in nested subfolders within the folder that you're doing the count on?  So for instance if I have an e-mail folder named clients and then underneath that I have a folder for each client but I want the count of total client e-mails does the method provide recursion?<br>I can't figure this out by reading Sun's docs so I'll probably just have to test it sometime.<br>There is a HOLDS_FOLDERS attribute (constant field) which can be summoned to figure out if a folder can hold other folders but I've never tried to use it.<br>Just curious - thanks for the cool post!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715606">4</a> by Raymond Camden
		posted on 5/20/2009 at 8:23 PM
		</div>
		<div class="comment_text"><p>I have no idea Andy. I'd love it if someone could test with a subfolder. I'd also be curious to see if cfpop would return the subfolder contents. If not, it doesn't matter. It was my impression cfpop was just getting the root folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715605">5</a> by Andy Sandefer
		posted on 5/20/2009 at 8:26 PM
		</div>
		<div class="comment_text"><p>I have a mail type project coming up so I'll make a note to share my java mail api findings with the rest of the group (I just love littering your blog ya know).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715600">6</a> by Mamdoh Alhabeeb
		posted on 5/20/2009 at 8:27 PM
		</div>
		<div class="comment_text"><p>Can't the reader use the "recordcount" to get the total number of messages in a mailbox as the following?</p><p>&lt;CFPOP server="<a href="http://disq.us/url?url=http%3A%2F%2FMail.colts.com%3AZ-2rlyp-7toQ0DFMj10fL1_xGX0&amp;cuid=3321886" rel="nofollow noopener" title="Mail.colts.com">Mail.colts.com</a>"<br>       action="getHeaderOnly"<br>       username="raycamden@colts.com"<br>       password="icodephpinthecloset"<br>       name="mail"&gt;</p><p>&lt;CFSET Totalcount = mail.recordcount/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715589">7</a> by Raymond Camden
		posted on 5/20/2009 at 8:28 PM
		</div>
		<div class="comment_text"><p>Mamdoh, please reread the entry a bit closer. Yes, he can, but the process of getting the headers was taking too long. If you do maxrows=10, the recordcount will be 10, not the 'real' count on the mail server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715590">8</a> by Connie DeCinko
		posted on 5/22/2009 at 12:05 AM
		</div>
		<div class="comment_text"><p>I've used a process very similar to what was first mentioned in order to get the number of unread messages in a mail account.  Same problem... if the user's inbox is overloaded with messages, it takes way too long to get the count.  Using your method, could you get the number of unread/new messages?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715593">9</a> by Raymond Camden
		posted on 5/22/2009 at 12:23 AM
		</div>
		<div class="comment_text"><p>Yep, it's one more method in the Folder object:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjava.sun.com%2Fproducts%2Fjavamail%2Fjavadocs%2Fjavax%2Fmail%2FFolder.html%23getUnreadMessageCount%28%29%3ACVKwOdWb3BILY1rPsUxuquhW95U&amp;cuid=3321886" rel="nofollow noopener" title="http://java.sun.com/products/javamail/javadocs/javax/mail/Folder.html#getUnreadMessageCount()">http://java.sun.com/product...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715592">10</a> by Connie DeCinko
		posted on 5/22/2009 at 1:04 AM
		</div>
		<div class="comment_text"><p>No joy.  getUnreadMessageCount() gives me the number of total messages and getNewMessageCount() gives me zero.  Perhaps this does not work with our version of iMail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715594">11</a> by Karl Wagenfuehr
		posted on 2/20/2013 at 9:14 AM
		</div>
		<div class="comment_text"><p>An old thread, I know, but I found it very useful today, except for one thing: you have to close off the mail session, or else any subsequent cfpop attempts won't work! The link to the java article is dead (shouldn't a UNIVERSAL record locator be forever?), but I found what I needed somewhere else (and yes, once you know it's duh obvious -- isn't hindsight great?); put this at the end of the above code:<br>&lt;cfset df.close(false)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715591">12</a> by Raymond Camden
		posted on 2/20/2013 at 9:03 PM
		</div>
		<div class="comment_text"><p>Thank you for sharing that Karl. I felt your comment was important enough for me to update the entry to point it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3016271742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3016271742">13</a> (In reply to <a href="#c_1713715600">#6</a>) by JOHN JORDAN
		posted on 11/23/2016 at 9:45 AM
		</div>
		<div class="comment_text"><p>Of course It will work, but It will only work when you're fetching all the email from the inbox. What if you're fetching only 30 emails.? Well mail.recordcount will return 30 only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3746366796">
	<div>
		<img src="https://disqus.com/api/users/avatars/michaeldglassberg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3746366796">14</a> by Michael D Glassberg
		posted on 2/7/2018 at 3:33 AM
		</div>
		<div class="comment_text"><p>Shouldn't you close everything?</p><p>&lt;cfset df.close(true)=""&gt;<br>&lt;cfset store.close()=""&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_3746852487">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3746852487">15</a> (In reply to <a href="#c_3746366796">#14</a>) by Raymond Camden
		posted on 2/7/2018 at 1:22 PM
		</div>
		<div class="comment_text"><p>Karl's comment mentions closing df, but that wouldn't hurt too.</p></div>
	</div>
</div>
		