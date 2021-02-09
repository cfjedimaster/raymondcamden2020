
<div class="comment" id="c_2354146656">
	<div>
		<img src="https://disqus.com/api/users/avatars/alexandermchan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2354146656">1</a> by Alex
		posted on 11/11/2015 at 8:56 PM
		</div>
		<div class="comment_text"><p>I've hit so many reset buttons by accident when they are in the location of where you would expect the primary action button.  I wouldn't be so angry if there was just an 'undo' reset that appears after hitting reset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2354251540">
	<div>
		<img src="https://disqus.com/api/users/avatars/joeshelby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2354251540">2</a> by Joe Shelby
		posted on 11/11/2015 at 10:04 PM
		</div>
		<div class="comment_text"><p>Why a reset function that you can use to cancel by returning 'false'?</p><p>Remember that window.confirm is a modal, synchronous, blocking dialog. You can use it to prompt the user if they made significant changes on whether or not they really want to reset them.</p><p>Granted, nobody uses the built-in window.confirm (or window.alert) anymore since they can't be styled, but remember this was state-of-the-art 1995-1997. HTML and javascript-DOM have a lot of cruft that nobody would ever recommend using, but as it was in the 1.0's of those days, they can't get rid of them...much as they should.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2354255279">
	<div>
		<img src="https://disqus.com/api/users/avatars/joeshelby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2354255279">3</a> (In reply to <a href="#c_2354251540">#2</a>) by Joe Shelby
		posted on 11/11/2015 at 10:06 PM
		</div>
		<div class="comment_text"><p>The other things to remember:</p><p>1) this was 1995, not 2015, and MOST people had never been on the web or entered web form information back then;</p><p>2) forms were used for editing existing, not just entering new, so a reset would keep you from damaging existing data. that was actually the more common use-case for it than a reset on a "new" object where the form was entirely empty. Again, a support for #1 - this was all VERY new to a lot of people.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2354259873">
	<div>
		<img src="https://disqus.com/api/users/avatars/joeshelby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2354259873">4</a> (In reply to <a href="#c_2354251540">#2</a>) by Joe Shelby
		posted on 11/11/2015 at 10:10 PM
		</div>
		<div class="comment_text"><p>in no way am i suggesting actually using reset anymore (there are better interaction mechanisms, though they require more code), just that the reasons for it existing at all made sense in that context.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2354350422">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2354350422">5</a> (In reply to <a href="#c_2354255279">#3</a>) by Raymond Camden
		posted on 11/11/2015 at 11:18 PM
		</div>
		<div class="comment_text"><p>Joe - thanks for sharing this. I've been building for the web since 1995 but it didn't occur to me to think in that context. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2978628242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2978628242">6</a> (In reply to <a href="#c_2354146656">#1</a>) by Doug
		posted on 11/1/2016 at 1:37 AM
		</div>
		<div class="comment_text"><p>Of course, there's always the tabbing.  When the focus is on a reset button because a person - unfamiliar with how the Internet Webpages and their forms actually work - sometimes will remember the days of their typing class, back in high school, and hit the Enter key...reverting lots of time they have invested in making changes to their data online (in this form), will be quite upset.  My wife was doing our taxes online, (fortunately, the IRS forms have only one textbox or dropdown per page) and she kept that right hand pinky finger on the "Carriage return" because of her typing classes.  Decades ago, "Enter" on the keyboard meant a new line on the sheet of paper in the typewriter.  I finally had to finish the tax forms last year.  I tried telling her that you need to hit the tab key, honey...not the Enter key.</p></div>
	</div>
</div>
		