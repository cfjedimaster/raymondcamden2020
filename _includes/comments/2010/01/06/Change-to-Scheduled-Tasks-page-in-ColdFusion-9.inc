
<div class="comment" id="c_1713721057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721057">1</a> by Jody Fitzpatrick
		posted on 1/7/2010 at 9:17 AM
		</div>
		<div class="comment_text"><p>What! You work out at 4:00 am? You are one dedicated person.</p><p>So I am assuming this would be a better way to set up a cron job this way, or do it the other custom coded way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721061">2</a> by Raymond Camden
		posted on 1/7/2010 at 8:57 PM
		</div>
		<div class="comment_text"><p>Heh, those tasks were 100% made up. :)</p><p>Are you asking if there is a better way to do scheduled tasks? Maybe. This works fine for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721058">3</a> by Steve Caldwell
		posted on 1/20/2010 at 11:15 PM
		</div>
		<div class="comment_text"><p>Is there any way to run CF scheduled tasks on a custom schedule <br>i.e. bi-monthly?</p><p>Client needs a report every two weeks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721062">4</a> by Raymond Camden
		posted on 1/20/2010 at 11:21 PM
		</div>
		<div class="comment_text"><p>Nope. What you see is what you get. But it would be trivial to write your CFML to get the month number, and if even, run, odd, don't.</p><p>Most OSes also have their own scheduling system. You can combine that w/ curl to roll your own.</p><p>But I'd probably just go with option 1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721060">5</a> by Steve Caldwell
		posted on 1/20/2010 at 11:28 PM
		</div>
		<div class="comment_text"><p>thanks Ray. I'll go with Windows task scheduler and cURL</p></div>
	</div>
</div>
		