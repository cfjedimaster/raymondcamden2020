
<div class="comment" id="c_1713733133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733133">1</a> by Jason Fisher
		posted on 6/12/2011 at 11:38 PM
		</div>
		<div class="comment_text"><p>Such a useful tool and a good one to document for folks.  One of our .NET developers prefers to write his server schedules in CF to use this feature, since he finds it easier than creating and scheduling compiled Console apps.</p><p>Also, just a note that the timeout can also be set on the Scheduled Task screen itself with the Timeout (sec) setting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733134">2</a> by Rich Hefter
		posted on 6/13/2011 at 2:17 AM
		</div>
		<div class="comment_text"><p>I'm not yet at CF9 (I hear there are improvements) but it would be nice to define dependencies, predecessors, success or failure detecture by the scheduler.  But that's a lot to ask of an application web server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733131">3</a> by Raymond Camden
		posted on 6/13/2011 at 2:22 AM
		</div>
		<div class="comment_text"><p>Actually, Adobe has already announced that "Zeus", the next version of ColdFusion, will have greatly expanded features in this area.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733132">4</a> by Matt Gifford
		posted on 6/13/2011 at 3:29 PM
		</div>
		<div class="comment_text"><p>Ah, this brings back memories :)</p><p>I used to have a scheduled task running on an intranet site I built 5 years ago. This template was calling a web service that needed to be updated, but every page refresh was too much and too slow. The task ran the template every 15 minutes, generating a static .html file that could be read and placed into the final HTML output with the cached details. Superb stuff. Zeus is going to improve on this feature ten-fold and it's going to be fantastic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733135">5</a> by Jim Papaleo
		posted on 6/13/2011 at 4:01 PM
		</div>
		<div class="comment_text"><p>I've been using this feature for years.  I have some tasks that run every few minutes others every few hours that check for files on a ftp server or folder and then process those files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733137">6</a> by Dinesh
		posted on 6/13/2011 at 4:51 PM
		</div>
		<div class="comment_text"><p>Nice post Ray. My applications run on shared server provided by crystaltech and using the scheduler services provided by their control center. Can you explain a bit about (differences/similarities, advantages/disadvantages and how to decide what to use) about CF admin scheduler, cfschedule and window scheduler)?  Also, is there any way to make a scheduler run again if it missed its execution, which happens quite frequently on a shared server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733136">7</a> by Raymond Camden
		posted on 6/13/2011 at 5:15 PM
		</div>
		<div class="comment_text"><p>In terms of the cfschedule tag versus the admin, the only thing the tag doesn't do is provide a List interface. But it is ok to 'reschedule' a task to the same time, so just having cfschedule in your onAppStart is harmless if run N times.</p><p>As for the Windows Scheduling service -I believe it is more complex in terms of the _types_ of scheduling it can do. I know there was at least one case - a few years back - where I preferred it. Just running my Windows schedular now - it also has nicer support for failure too it seems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733138">8</a> by Doug
		posted on 6/13/2011 at 5:55 PM
		</div>
		<div class="comment_text"><p>Great post. Our scheduled tasks have become critical to several of our processes here. We use them to add (missing) functionality to our accounting and HRIS systems:</p><p>- nightly delta reports<br>- detect ledger errors<br>- monthly expense/revenue audits<br>- build import files<br>- flag missing timesheets</p><p>Several departments are so dependent on them now, that they also serve a great secondary purpose - if the emails are not delivered, we know there's an undetected problem somewhere!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733139">9</a> by James Moberg
		posted on 6/13/2011 at 7:28 PM
		</div>
		<div class="comment_text"><p>I had some issues in the past where the scheduled tasks weren't running.  I also had complicated schedules and would have to make multiple entries in order to create a schedule (ie, First Monday of each month, at 9 am).  As an alternative, we started using nnCron LITE.  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.nncron.ru%2F%3AQLV7uVdQKtBtL1xBewjsqI6sMzs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.nncron.ru/">http://www.nncron.ru/</a></p><p>The configuration format is text-based and very easy to backup, clone &amp; migrate to other servers:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.nncron.ru%2Fnncronlt%2Fhelp%2Fhelp.htm%3ALH0l_PzsZQ2HRdD1mVz7lIdi_L4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.nncron.ru/nncronlt/help/help.htm">http://www.nncron.ru/nncron...</a><br>(Since it's text-based, it wouldn't be very difficult to create a CF-based admin tool for it.)</p><p>To perform HTTP requests of unknown duration (and not tie up a CF thread), we use CURL:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcurl.haxx.se%2F%3Agm3H_ze-eij8AQhZ4T50uVd9VR8&amp;cuid=3321886" rel="nofollow noopener" title="http://curl.haxx.se/">http://curl.haxx.se/</a></p><p>To generate a non-CF based email message when the task was done, we used Blat (or built an alert into the CF script we were running):<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.blat.net%2F%3AOYUZ4PpMSV2PiaCj1pwB0f7fKIE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.blat.net/">http://www.blat.net/</a></p><p>This solution is portable, inexpensive and has been very reliable over the years.  I'm looking forward to seeing the new functionality that will be introduced with Zeus.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733142">10</a> by Rob Barthle
		posted on 6/13/2011 at 7:59 PM
		</div>
		<div class="comment_text"><p>One way we use CFSCHEDULE a lot is for long running processes that would cause our web server to time out because it did not receive data back to the browser to keep the stream open. We use CFSCHEDULE to create a task, and the last part of the task after a successful completion of the job is to use CFSCHEDULE to delete the task from the list to keep the task list uncluttered. It has worked like a charm for us for years now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733141">11</a> by tof
		posted on 6/14/2011 at 6:13 AM
		</div>
		<div class="comment_text"><p>We use them a lot where I work, for things like:<br>- reporting.<br>- long-running tasks that need to take place at night.<br>- consumption of web services, every x minutes.<br>- Auto update of statuses. We have job ads that have an opening and closing date, so there's a task that runs every 30 minutes to see if the closing date has passed and update the job ad status.<br>- find undelivered mail.<br>- auto-resolve "unknown exception condition"<br>- clean up temp directory<br>- and so on... We also have a scheduled task that runs a report on whether or not scheduled tasks ran properly overnight.</p><p>also, @ray: your left join should be an inner join since there shouldn't be any comments without a entryidfk. It should only be a left join if you started from the blogEntries table and wanted to also return entries without comments. Or a right outer join from tblblogcomments, but right joins suck and should be avoided.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733140">12</a> by Raymond Camden
		posted on 6/14/2011 at 3:21 PM
		</div>
		<div class="comment_text"><p>Thanks tof - I always forget that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733143">13</a> by test
		posted on 6/14/2011 at 4:38 PM
		</div>
		<div class="comment_text"><p>Just wanted to see how your site reloaded</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733144">14</a> by Jaana Gilbert
		posted on 6/14/2011 at 5:09 PM
		</div>
		<div class="comment_text"><p>I've been utilizing tasks for years and some of the sites depend on it for example to close pending reservations if payment hasn't been made within x amount of minutes, nightly updates to inventory from several suppliers (new items) etc. Very useful tool. Gotta love CF :)</p></div>
	</div>
</div>
		