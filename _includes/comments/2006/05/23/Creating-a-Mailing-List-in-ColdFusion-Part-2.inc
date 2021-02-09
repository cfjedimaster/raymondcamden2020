
<div class="comment" id="c_1713653336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653336">1</a> by Sean Coyne
		posted on 5/23/2006 at 5:53 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>The download link to the zip isn't showing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653350">2</a> by Raymond Camden
		posted on 5/23/2006 at 5:57 PM
		</div>
		<div class="comment_text"><p>Thanks man. Added.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653335">3</a> by ulirc
		posted on 3/13/2009 at 7:43 PM
		</div>
		<div class="comment_text"><p>Hi and thanks for this tutorial. It is the first time I have worked with cfc files. Clearly a steep learning curve for me as i am stuck in CF5 tags!</p><p>Anyway all of your tutorial makes sense and works at my end except for when the subscriber them self (i.e not via the mailing list admin page/s) tries to unsubscribe</p><p>using your template TEMPUnsubscribe.cfm included in your archive file causes the problem. You have not included a way for the user to pass the token accros in teh URL query string.</p><p>If the user enters his email address blah@blah.net<br>the result sent to unsubscribe.cfm will be:</p><p>unsubscribe.cfm?emailaddress=ulric@uk2.net&amp;unsubscribe=Unsubscribe</p><p>and this will cause the database deletion to fail and we get the result "Sorry, but you were not unsubscribed. Please ensure that you have copied the URL correctly from your mail client.".</p><p>Would it be possible for you to update the unsubscribe pages so that token is included somehow. I cant figure it out :(</p><p>many thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653337">4</a> by ulric
		posted on 3/14/2009 at 12:06 AM
		</div>
		<div class="comment_text"><p>Sorry Ray! I did not figure out all i needed was unsubscribe.cfm?token=%token% for user self service unsubscribe to work, and that I should ignore template TEMPunsubscribe.cfm.</p><p>Major apologies!</p><p>Ulric</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653339">5</a> by Raymond Camden
		posted on 3/14/2009 at 12:14 AM
		</div>
		<div class="comment_text"><p>Glad you got it - way behind on email today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653338">6</a> by Sean Budlong
		posted on 2/13/2010 at 6:16 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>One thing I noticed is the behavior of the app if someone is already subscribed. If the email address already exists, the visitor gets the same message about thank you for registering. Is it possible to tell the visitor that he/she is already registered?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653340">7</a> by Sean Budlong
		posted on 2/13/2010 at 6:33 AM
		</div>
		<div class="comment_text"><p>To enable the unsubscribe, what change do I need to make, after reading this post?<br>Comment 4 written by ulric on 13 March 2009, at 3:06 PM<br> Sorry Ray! I did not figure out all i needed was unsubscribe.cfm?token=%token% for user self service unsubscribe to work, and that I should ignore template TEMPunsubscribe.cfm.</p><p>Major apologies!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653346">8</a> by Raymond Camden
		posted on 2/13/2010 at 7:11 AM
		</div>
		<div class="comment_text"><p>@Sean- So... your good? Or is comment 6 still an open question?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653342">9</a> by Sean Budlong
		posted on 2/13/2010 at 5:58 PM
		</div>
		<div class="comment_text"><p>Yes, for Comment 6. When I subscribe, if my email is already in the database, I get the thank you message, but no email is sent. It would be better to tell the visitor that their email is already in the database and to click on that link in the email that was sent out so that their email can be verified. Isn't that how it should work? Something like that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653344">10</a> by Raymond Camden
		posted on 2/13/2010 at 7:48 PM
		</div>
		<div class="comment_text"><p>You would modify the code to use the return value. If it is false, it means you were already subscribed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653343">11</a> by Sean Budlong
		posted on 2/14/2010 at 11:51 PM
		</div>
		<div class="comment_text"><p>I want to use your email list from now on, but I already have a database with hundreds of emails. I added columns for 'token' and 'verified' and updated the 'verified' values to '1'. Is there a way I can update the 'token' values where they are NULL using createUUID, all in one query? Something like this?<br>&lt;cfquery datasource="maillist"&gt;<br>			UPDATE subscribers <br>			SET token = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#createUUID()#"&gt;<br>			WHERE token IS NULL<br>			&lt;/cfquery&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653345">12</a> by Sean Budlong
		posted on 2/15/2010 at 12:03 AM
		</div>
		<div class="comment_text"><p>I tried this as a test<br>&lt;cfquery datasource="maillist"&gt;<br>			UPDATE subscribers <br>			SET token = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#createUUID()#"&gt;<br>			WHERE id &gt; 14<br>			&lt;/cfquery&gt;<br>and it did create UUIDs, but they were all the same. If this is at all possible, it probably involves some kind of LOOP, doesn't it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653349">13</a> by Raymond Camden
		posted on 2/15/2010 at 6:43 PM
		</div>
		<div class="comment_text"><p>Just use one query to get all the subscribers where token is null, then loop over that query and do an update on each. Yes, that means you have N+1 queries. Yes, I bet SQL has a "cooler" way of doing it. But who cares? ;) This will work and it's a one time mod. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653348">14</a> by Sean Budlong
		posted on 2/16/2010 at 12:26 AM
		</div>
		<div class="comment_text"><p>Thank you, Ray. I got it to work. Very cool. All unique UUIDs. createUUID() works great! I never heard of it until I came across your series. Thank you!</p></div>
	</div>
</div>
		