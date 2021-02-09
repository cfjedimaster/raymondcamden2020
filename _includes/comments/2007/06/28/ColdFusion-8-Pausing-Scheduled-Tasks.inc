
<div class="comment" id="c_1713667870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667870">1</a> by Rob Brooks-Bilson
		posted on 6/28/2007 at 7:00 PM
		</div>
		<div class="comment_text"><p>I'm so glad they finally added this feature - I only wish there was a better mechanism to let you know that a task is paused besides the icon change.  The icons are so small, and with hundreds of tasks on a server, it can be difficult to tell what's paused and what's running (sortable columns would make this a lot nicer).  I'd suggest an additional table column for the status (active vs. paused).</p><p>I filed ER's for these a while back, but it doesn't look like either will make it into 8.0 (assuming anyone at Adobe agrees with me ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667864">2</a> by Tom
		posted on 6/28/2007 at 7:07 PM
		</div>
		<div class="comment_text"><p>When I want to pause a task in CF7/6/etc I just change the start date to Jan 1 2100.  Then when I want it to run again, I put it back to the next date it should run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667871">3</a> by Joshua Curtiss
		posted on 6/30/2007 at 12:43 AM
		</div>
		<div class="comment_text"><p>Yeah, there always were the start/end dates. So to indefinitely pause a task, I set the end date to something in the past. If I know when it needs to resume, I'd leave the end date blank and set the start date to the future date when it should resume.</p><p>It seems the pause functionality would be most handy for when you need to pause a task for just a short period of time during a day. For instance, if I just need to pause it for an hour or few when it's a task that runs every x minutes or hours.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1738408995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1738408995">4</a> by Joe Rinehart
		posted on 12/12/2014 at 12:49 PM
		</div>
		<div class="comment_text"><p>7 years later...(and this is still the top Google result for "coldfusion scheduled task pause"):</p><p>We're doing a CF11 upgrade for a client where I've cloned all of our CF9 VMs and installed CF11, restoring settings from a CAR.</p><p>There are a set of scheduled tasks on the CF11 boxes that I don't want running yet - they fail due to reverse compatibility issues. I paused them.</p><p>I woke up this morning to find that they were happily running, throwing errors, and filling my boss's inbox all night. After further testing, pause seems to do nothing on 11.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1738439617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1738439617">5</a> by Joe Rinehart
		posted on 12/12/2014 at 1:12 PM
		</div>
		<div class="comment_text"><p>Small update: pausing works fine on my local machine, even with simulating the clone's state of having a scheduled task restored from a CAR that contains URL characters that the new Quartz scheduler considers invalid. No idea why it's not working on the prod box, and I don't have time to dig further: setting task end dates to a historical date and moving on.</p></div>
	</div>
</div>
		