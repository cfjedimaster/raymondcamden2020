
<div class="comment" id="c_1713659954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659954">1</a> by Rob Gonda
		posted on 12/6/2006 at 7:31 PM
		</div>
		<div class="comment_text"><p>I've been having the same issue lately. I identified that what caused it is a cfmail with extremely large content (a few megs of html). Once you get the error, the only way to unlock the spool is restarting CF. <br>I have not found a solution yet, but I tracked down the process sending this mail and it never happened again.<br>HTRT</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659953">2</a> by Raymond Camden
		posted on 12/6/2006 at 7:39 PM
		</div>
		<div class="comment_text"><p>Thing is - RIAForge doesn't do that. It sends small emails. But I'll look for that for sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659956">3</a> by Steven Erat
		posted on 12/6/2006 at 7:47 PM
		</div>
		<div class="comment_text"><p>The 30 second mail spool timeout is hardcoded, so any mail message that takes longer than that time to be written to disk will encounter this.</p><p>I suggested a workaround for unlocking the spool in my blog comments.  Basically, use the service factory to restart the mail spool service, but no one has commented on the effectiveness of that suggestion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659957">4</a> by Raymond Camden
		posted on 12/6/2006 at 8:00 PM
		</div>
		<div class="comment_text"><p>Well, I could make a script for that and I wouldn't need to restart CF, but I couldn't really make that dynamic. Unless I used try/catch around everything single cfmail.</p><p>Steven - is there really no hot fix for this? Your blog entry was a good year ago. This has yet to be fixed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659955">5</a> by Mark W. Breneman
		posted on 12/6/2006 at 9:09 PM
		</div>
		<div class="comment_text"><p>I can confirm that this same error is thrown on a windows box too.</p><p>I have seen this error pop up several on one of my servers in the last 5 weeks. I had expected some form of a blog spam bot searching for an form that would post to a live web page to be the source of the problem. It seems that it might have been related to my error tracking system that emails a full dump of the error scope for each error thrown on the site. After I disabled the dump of the error scope I have not had the issue since. I also fixed the mongo page that was throwing the error.</p><p>Steven- I very quickly tried the script you had written. I can't say that I gave it a fair try, I needed to get my registration system back up As Soon As Possible. I ran it and it did not return any error, I can only assume that no news was good news, but it did not have any effect on fixing the mail error. Thanks for the script anyway.</p><p>Ray, are you doing anything that might be cfdumping a big object in an email?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659959">6</a> by Steven Erat
		posted on 12/6/2006 at 9:10 PM
		</div>
		<div class="comment_text"><p>I can confirm that its currently on the table for review by engineering.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659962">7</a> by Raymond Camden
		posted on 12/6/2006 at 9:18 PM
		</div>
		<div class="comment_text"><p>Mark, nope. But I'm looking into it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659963">8</a> by Mark W. Breneman
		posted on 12/6/2006 at 9:31 PM
		</div>
		<div class="comment_text"><p>Ray, do you have any like a form to mail on the site? Like a contact us form? I still have not ruled out some form of form spam bot.</p><p>Am I correct in that, all mail that should go to the mail engine is completely lost when the SpoolLockTimeoutException is thrown? It does not end up in the spool folder and not in the undeliverable folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659965">9</a> by Raymond Camden
		posted on 12/6/2006 at 9:37 PM
		</div>
		<div class="comment_text"><p>I have a few places that let the public mail. I'm going to be checking my logs tonight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659982">10</a> by mark Kruger
		posted on 3/14/2007 at 4:29 PM
		</div>
		<div class="comment_text"><p>Ray - this post is a few months old. Do you know if there was an fix for this other than the serviceFactory restart fix?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659979">11</a> by Raymond Camden
		posted on 3/14/2007 at 4:37 PM
		</div>
		<div class="comment_text"><p>Not that I know of - sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659978">12</a> by Arun
		posted on 6/27/2012 at 3:28 PM
		</div>
		<div class="comment_text"><p>Ray - We are getting the same error in CF9 !! do you know any work around?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659980">13</a> by Arun
		posted on 6/27/2012 at 3:28 PM
		</div>
		<div class="comment_text"><p>Ray - We are getting the same error in CF9 !! do you know any work around?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659984">14</a> by Raymond Camden
		posted on 6/27/2012 at 4:03 PM
		</div>
		<div class="comment_text"><p>Sorry, no. Best I can recommend is trying w/ CF10, or calling support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659983">15</a> by Pascal Damiani
		posted on 4/8/2014 at 6:54 PM
		</div>
		<div class="comment_text"><p>We are getting the same error in CF10 !! do you know any work around?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659986">16</a> by Raymond Camden
		posted on 4/8/2014 at 6:56 PM
		</div>
		<div class="comment_text"><p>Fully patched? Outside of that - nope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659988">17</a> by Ray Faddis
		posted on 5/22/2014 at 8:35 PM
		</div>
		<div class="comment_text"><p>I know this is an old post though I had a question hopefully you, Ray, or others could answer. We've encountered this exception a week or so ago though I'm just now getting the time to really dig into it. I would be able to answer my own question if I could re-create the issue or if it had just happened.</p><p>My question, which may be silly as it's obvious, though I want confirmation. When this exception is encountered is the email never created in the spool directory at all or its undeliverable folder either? ...In all, is the email that generated the exception and any subsequent emails lost forever, until a CF restart to remove the lock?</p><p>I feel that that the answer to my questions is yes that the emails are lost as the spool is locked.</p></div>
	</div>
</div>
		