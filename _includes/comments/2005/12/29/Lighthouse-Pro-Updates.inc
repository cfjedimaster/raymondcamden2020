
<div class="comment" id="c_1713623718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623718">1</a> by Phillip Senn
		posted on 12/29/2005 at 8:39 PM
		</div>
		<div class="comment_text"><p>You're an Extreme programmer :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623719">2</a> by Raymond Camden
		posted on 12/29/2005 at 9:29 PM
		</div>
		<div class="comment_text"><p>If for some reason you downloaded the zip between 9:14 and 10:28, it has been updated. Readme.txt shows the new files I changed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623728">3</a> by Steve Walker
		posted on 12/30/2005 at 4:42 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for the update.  One thing I did want mention is that you do not specify an email server.  Typically, if you are in a hosted environment you will need to specify a server or it throws an error.  The beauty of default.cfm is that all you need to add is &lt;emailserver&gt;youremailserver&lt;/emailserver&gt; and make a couple of changes in Application.cfc and IssueManager.cfc and all is forgiven.  I didn't see it mentioned in the install.doc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623720">4</a> by Raymond Camden
		posted on 12/30/2005 at 4:56 AM
		</div>
		<div class="comment_text"><p>Well, the problem then is that it gets more complex. It's possible to have a user/password required and NOT a server, and vice versa. If a person needs to specify a mail server, I'd probably just tell them to edit the files. Now - if I can say server="", than it would be ok. (Need to test that.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623721">5</a> by Maxx
		posted on 12/30/2005 at 10:05 PM
		</div>
		<div class="comment_text"><p>Ray, it seems that the admin can not edit the email list for other users, the can do this when they add a user...I will try to find the bug; but if you get a chance before I...</p><p>one feature request...I have noticed that if the project list gets long there is a log of scrolling, it might be nice to have a scrolling menu or list to choose from. Not a big deal and something I can add to my copy but others may want it too.</p><p>Thanks again for all the tools and help you offer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623727">6</a> by Maxx
		posted on 12/30/2005 at 10:10 PM
		</div>
		<div class="comment_text"><p>nevermind about the "bug" the user was not assigned that project...smart</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623724">7</a> by Raymond Camden
		posted on 12/30/2005 at 11:53 PM
		</div>
		<div class="comment_text"><p>Right - if you try to subscribe them to a project they don't have access to, it won't allow it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623723">8</a> by Brett Liotta
		posted on 1/1/2006 at 1:12 PM
		</div>
		<div class="comment_text"><p>A small comment on the History section:  I think you meant to make it "readonly" and not "disabled".  B/c disabling it makes the textarea unscrollable (at least on IE 6).  Readonly makes it scrollable, and easier to read without the grayness on the text.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623722">9</a> by Raymond Camden
		posted on 1/1/2006 at 7:39 PM
		</div>
		<div class="comment_text"><p>Brett, that has been fixed already. Get the latest zip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623726">10</a> by Brett Liotta
		posted on 1/1/2006 at 11:52 PM
		</div>
		<div class="comment_text"><p>Got it.  My fault, Ray.</p><p>On another note, is there a fix for the severity column sorting by severity and not alphanumerically.  For example, I want to see "High, Normal, Low" sorting and not "High, Low, Normal" (how it is now).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623725">11</a> by Raymond Camden
		posted on 1/2/2006 at 7:06 AM
		</div>
		<div class="comment_text"><p>Brett, I'll consider it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623730">12</a> by Peter Tilbrook
		posted on 1/4/2006 at 1:42 PM
		</div>
		<div class="comment_text"><p>It states in install that default user is "admin" and password is "password". But database is empty of any users so I can't even login.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623731">13</a> by Raymond Camden
		posted on 1/4/2006 at 7:05 PM
		</div>
		<div class="comment_text"><p>Which db script did you use? Do you see commands in there to enter the u/p?</p></div>
	</div>
</div>
		