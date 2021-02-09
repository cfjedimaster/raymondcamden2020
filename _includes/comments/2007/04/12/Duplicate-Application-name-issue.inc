
<div class="comment" id="c_1713664019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664019">1</a> by Dan Wilson
		posted on 4/12/2007 at 8:46 PM
		</div>
		<div class="comment_text"><p>I've been stung by the duplicate application name issue before. It is a complete pain to diagnose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664020">2</a> by Brandon
		posted on 4/12/2007 at 8:48 PM
		</div>
		<div class="comment_text"><p>Hah! I was burned by this exact issue last week - a co-worker had created a duplicate copy of my application. I began questioning my sanity..</p><p>Thanks for the tip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664021">3</a> by Terrence P Ryan
		posted on 4/12/2007 at 9:18 PM
		</div>
		<div class="comment_text"><p>I've also seen a subtler version of this issue. Incorrectly extended application.cfc's in sub applications.</p><p>Basically a developer sets different variables/values in the onApplicationLoad of a parent and child application.cfc, but doesn't give the child it's own applicationname.</p><p>That one is also hair-pullingly frustrating to troubleshoot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664022">4</a> by Dan Sorensen
		posted on 4/12/2007 at 10:10 PM
		</div>
		<div class="comment_text"><p>I think that Fusebox5 by default uses the application path as the name to ensure that the name is unique. That would be another way to handle it so that you're not likely to run into a conflict.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664026">5</a> by Rick Root
		posted on 4/12/2007 at 10:12 PM
		</div>
		<div class="comment_text"><p>I used to have this problem myself.</p><p>I'm a big fan of your application naming code now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664024">6</a> by tony petruzzi
		posted on 4/12/2007 at 11:34 PM
		</div>
		<div class="comment_text"><p>that's so ingenious and simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664025">7</a> by Scott Krebs
		posted on 4/13/2007 at 12:16 AM
		</div>
		<div class="comment_text"><p>One way that I try to minimize the amount of hair pulling I need to do in situations like this is by implementing error handling via cferror (or onError if the site uses Application.cfc) and have the error handler cfmail me an HTML-formatted email with a cfdump of cferror and _all_ variable scopes. A quick look at the application scope dump would probably reveal what that problem was in short order.</p><p>OT: Yes, I prefer email over logging to a file or database because in practice almost no one bothers to periodically go back and check the logs. An email sitting in your inbox gets noticed immediately. I once had a developer (client of ours) tell me that they didn't like the email method because it sent them too much email! Well... fix your code so it doesn't throw errors then, for goodness sake. Those errors are being seen by your customers!<br>/OT</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664023">8</a> by James Edmunds
		posted on 4/13/2007 at 2:16 AM
		</div>
		<div class="comment_text"><p>I second Scott on the email for error notifications. I have about two dozen sites on shared servers, and use both the cferror emailing in general, and in a wide number of specific areas of pages cftrys with cfmails in them for sending me errors (they actually all go to a special box just for this, so I don't one day wind up with 23,000 MySQL connection problem emails on my "real" email account, but I check the error handling email box as regularly as my "real" email account.</p><p>This is not only helpful in the general way of being notified quickly of error problems, but also for turning up that oddball set of conditions that throws an error that somehow never occurred to you in the development phase.</p><p>And, as Scott points out, any error being thrown this way should be fixed. And, your customer and/or his site visitor is seeing them, too, so you want to see it, and you want to react right away.</p></div>
	</div>
</div>
		