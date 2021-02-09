
<div class="comment" id="c_1713617530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617530">1</a> by Matt Woodward
		posted on 3/11/2005 at 6:16 AM
		</div>
		<div class="comment_text"><p>Thanks for the new version Ray--are there just a couple of key files that changed, or are changes scattered throughout the code?  I didn't see a list of just the files that had changed (sorry if I missed it), which would be handy for installing over 3.5.2 as opposed to overwriting everything if that isn't really necessary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617536">2</a> by Jeff Coughlin
		posted on 3/11/2005 at 6:30 AM
		</div>
		<div class="comment_text"><p>I've been using ParagraphFormat2 in all of my recent apps.  The funny thing is, I was actually adding it to your blog code today (no lie).  Now I wont need to bother :).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617543">3</a> by Brian Kotek
		posted on 3/11/2005 at 8:04 AM
		</div>
		<div class="comment_text"><p>Ray, the download has a whole bunch of extra Subversion stuff in it. Did you mean for all that to be there?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617533">4</a> by Raymond Camden
		posted on 3/11/2005 at 6:36 PM
		</div>
		<div class="comment_text"><p>Ick. Ok, I'll fix that. I also found one more small little bug I need to tweak. The emails that go to blog owners have the unsubscribe metachar in them. They should be stripped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617541">5</a> by johnb
		posted on 3/11/2005 at 7:39 PM
		</div>
		<div class="comment_text"><p>you just enjoy that game ;) let me know when it arrives!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617532">6</a> by Crit
		posted on 3/13/2005 at 9:56 PM
		</div>
		<div class="comment_text"><p>Just curious. if you setup a blog for the first time..or anytime, i guess you want to do a post to two categories that are not previously used... is this possible? I attempted to separate them with a "," but it threw an error on the front end.. i had to fix it in the database..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617534">7</a> by Ray Camden
		posted on 3/14/2005 at 7:53 PM
		</div>
		<div class="comment_text"><p>You would need to assign it to one cat. Make a new entry for the second cat. Edit the old entry to assign the other cat. Then delete the other entry.</p><p>If you think this sucks, let me know and I'll add support for "N" categories in the new cat field.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617535">8</a> by O?uz Demirkap?
		posted on 3/15/2005 at 3:09 AM
		</div>
		<div class="comment_text"><p>Thanks for better Unicode support.</p><p>Just one not that stats.cfm does not work on MySQL 4.x. You can get a working copy via <a href="http://disq.us/url?url=http%3A%2F%2Fdemirkapi.net%2Fstats.rar%3Aeax_yd_M4KOCkVrBTPDyUr-FweQ&amp;cuid=3321886" rel="nofollow noopener" title="http://demirkapi.net/stats.rar">http://demirkapi.net/stats.rar</a></p><p>I have seen there is no language support files in new version anymore but if anybody would need Turkish support for blog I can let language file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617537">9</a> by O?uz Demirkap?
		posted on 3/15/2005 at 3:12 AM
		</div>
		<div class="comment_text"><p>UPPS! My name is wrong again here :)</p><p>I think you have MSSQL as DB and there is still problem for double byte chars.</p><p>Here is the solution:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fcfusion%2Fknowledgebase%2Findex.cfm%3Fevent%3Dview%26id%3DKC.tn_18331%26extid%3Dtn_18331%26dialogID%3D4622030%26iterationID%3D1%26sessionID%3D9630cd3f04f56868794d%26stateID%3D0%25200%25204620505%26mode%3Dsimple%3AsnH8rGY-b4kZTXFy3OvX56BYCUk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/cfusion/knowledgebase/index.cfm?event=view&amp;id=KC.tn_18331&amp;extid=tn_18331&amp;dialogID=4622030&amp;iterationID=1&amp;sessionID=9630cd3f04f56868794d&amp;stateID=0%200%204620505&amp;mode=simple">http://www.macromedia.com/c...</a></p><p>I do not have any Unicode problem on MySQL 4.x.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617539">10</a> by Ray Camden
		posted on 3/15/2005 at 4:51 AM
		</div>
		<div class="comment_text"><p>stats.cfm is not included as of yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617540">11</a> by Matt Woodward
		posted on 3/20/2005 at 4:27 AM
		</div>
		<div class="comment_text"><p>Minor issue I'm seeing--I haven't dug into it yet but I thought I'd ask before I did.  I was testing the unsubscribe functionality but the email I received didn't have a comment ID in the URL, so when I went to the URL it threw an error.  Any obvious thing I should check or is it a personal problem for me with my setup? ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617542">12</a> by Raymond Camden
		posted on 3/21/2005 at 4:22 AM
		</div>
		<div class="comment_text"><p>This seems to be a bug. I'm wroking on 3.6 right now (shhhhh) and will ensure it is working correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617538">13</a> by Raymond Camden
		posted on 3/21/2005 at 4:29 AM
		</div>
		<div class="comment_text"><p>Oh, I see the issue. When I send the email out to people in the thread, the unsub link has two tokens. It has your email address, and the UUID of one of your comments in the thread. This makes a secure link, disallowing you from unsubbing someone else  from the thread.</p><p>However, as an admin, you ALWAYS get the email. So for a post where you have NOT commented, the commentID portion will be blank. What I'm going to do is simply make it so that the email that is sent to you has "Not Available" for the unsub link, since obviously you can't unsub from your own blog.</p></div>
	</div>
</div>
		