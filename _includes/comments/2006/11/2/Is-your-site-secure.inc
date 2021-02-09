
<div class="comment" id="c_1713658905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658905">1</a> by Edward T.
		posted on 11/2/2006 at 11:36 PM
		</div>
		<div class="comment_text"><p>Since this is such a fast-moving target, we are also recommending to clients who are running sites up to 5 years old to consider security reviews.  Attacks are changing, and defenses are evolving to meet the challenge.  One example we've suggested is to switch to stronger encryption for those sites that were formerly storing sensitive data with cfencrypt.  CFMX 7 has added much stronger options to this now.  We're also recommending tracking failed login attempts, locking out after n failures, and strengthening the password requirements - both complexity and duration.</p><p>Edward T.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658922">2</a> by Peter Bell
		posted on 11/3/2006 at 12:44 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Great point, but the fact is that most clients don't want to know. They want a website to do what they need it to do as quick and as cheap as possible. Most don't  want to hear about security - that way if there is a breach, they can just blame the developer rather than paying the extra to have a secure site.</p><p>If you think this is bad, go read the PCI standards and then tell me how many small web shops on shared PHP/MySQL hosting meet the standards. Fact is that they can't as (for one thing) the db server is the same machine as the web server and is publically accessible.</p><p>Only real solution is to use a software product line approach or somehow force best practices into the community frameworks. Otherwise it'll never be cheap enough to cover the large number of "cheap but custom" sites that need the help the most.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658920">3</a> by Dana K
		posted on 11/3/2006 at 2:04 AM
		</div>
		<div class="comment_text"><p>I can say we've stepped up on security a lot in the past 2 years and the migration to mx 7.x really added some more tools that help. Despite its shortcomings the scriptprotect feature is a great start for a beginning developer, and the isValid() really cleans up a lot of ad hoc code I felt I had to have in the past.</p><p> One thing we did try to have was the CGI referrer check on form submission to make sure the callback was from our site. Pretty simple and not entirely accurate imo, but with all the proxy and wiping going on a lot of our customers were validly caught by this. Anyone else implement similar methods, or want to give the rest of us some tips on their form lockdowns and validation? I'd be curious to hear some creative solutions people have come up with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658919">4</a> by Denis The SQL menace
		posted on 11/3/2006 at 2:12 AM
		</div>
		<div class="comment_text"><p>What about using dynamic SQL instead of stored procedures. a Huuuuuuge risk</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658924">5</a> by Peter Bell
		posted on 11/3/2006 at 2:21 AM
		</div>
		<div class="comment_text"><p>Truly dynamic sql is a risk, but don't have to use sp's. CFqueryparams are fine. They are bound to the field types so SQL injection won't work (although you still want to pre-validate the values to some extent).</p><p>You can use Regex filtering for truly dynamic SQL, but other than catching strings in int fields it can be difficult to write well formed filters that catch all possible attacks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658926">6</a> by Edward T
		posted on 11/3/2006 at 6:48 AM
		</div>
		<div class="comment_text"><p>@Dana,</p><p>We've run into the same problems, and unfortunately we haven't found the creative solution you're looking for.  When it makes sense, we build wizards one or two questions per step so that it takes more effort to crack (you have to carry our session id's forward from page to page, and there is no commit until the last page).  If the right information isn't present in the session on step x, we abort the process and kick them back to step 1, so you can't skip steps.</p><p>Another tactic we're tyring is to simply serialize and store the whole form scope.  This works well for things like one-page sign up forms, where the end-recipient just wants the information emailed or dumped into a report for follow-up.  I can also give basic stats by building a memory object and retrieving and deserializing that data. It's really fast to build, too - the back end is the same DAO and Reporter for any one of these things :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658930">7</a> by D K
		posted on 11/3/2006 at 6:30 PM
		</div>
		<div class="comment_text"><p>Edward,<br> we solved our version of it by simply adding some hashing to check on the backend. Unless someone figures out the hash and puts it in the form, its treated as an invalid form submission. The hash is ever changing and based on a lot of factors that exist server side, and provided an excellent solution to our problem anyhow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658906">8</a> by Edward T.
		posted on 11/3/2006 at 8:38 PM
		</div>
		<div class="comment_text"><p>Dana -</p><p>We considered that - not hash, but a keyspace of some kind - but how do you prevent the user from opening the form, grabbing the hash value, and sending it back with their own submission?</p><p>/ejt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658908">9</a> by D K
		posted on 11/3/2006 at 8:47 PM
		</div>
		<div class="comment_text"><p>we have a form generator and the hash is dynamic to every page hit and form generation. Getting in to anything more specific on it would be bad :P Its pretty complex though and requires a lot of validation that only exists on the backend so someone would have to have full machine access at that point to get the hash algorithm and at that point we'd have bigger problems :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658910">10</a> by Joseph FitzGerald
		posted on 11/4/2006 at 4:22 AM
		</div>
		<div class="comment_text"><p>You should not rely on referral variables because this information is provided by the customer.  It is trivial to fake this data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658909">11</a> by Yves
		posted on 11/7/2006 at 7:48 AM
		</div>
		<div class="comment_text"><p>I remember mentioning this to a consultant a year and a half ago... She was helping me on a marketing plan..</p><p>We talked about some of the more known shops in the area.. anyways, I started to tell her about security... injection..etc.</p><p>So, I thought maybe I could show her some examples. I found several sites that were developped by local shops and as I expected managed to trip up several sites by changing URL values... simple stuff... for asp sites, PHP sites and CF sites...</p><p>She was totally impressed... hehe</p><p>To me, it's just a part of the app... it has to be. I didn't end up trying to use that in my market plan... I wasn't sure how to present it, because I obviously didn't want to step on all the competitors toes.... I suppose I could have. Chamber of commerce meetings would have likely been a little different.</p><p>;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658911">12</a> by Yves
		posted on 11/7/2006 at 7:50 AM
		</div>
		<div class="comment_text"><p>And...</p><p>PS - No websites were hurt.</p></div>
	</div>
</div>
		