
<div class="comment" id="c_1713685946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685946">1</a> by Scott P
		posted on 9/18/2008 at 7:09 AM
		</div>
		<div class="comment_text"><p>one ring to rule them all</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685932">2</a> by James Edmunds
		posted on 9/18/2008 at 6:03 PM
		</div>
		<div class="comment_text"><p>I like them separate, actually, since I am interested only in the calendar portion. You know, basing my thoughts on what is good for all of humanity by the yardstick of my own very personal needs ;).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685948">3</a> by Bret
		posted on 7/7/2009 at 8:56 PM
		</div>
		<div class="comment_text"><p>this is a great piece, thanks for writing it and posting it!</p><p>i did run into a problem, though, that i wanted to post about in case it will help someone else.  i noticed that there is a difference in default charsets between CF7 and CF8.  this was causing me to get a weird prolog error on CF7 servers (tested on two to confirm), because it was coming back empty.  i tested a bit of urlencoding and a snippet from ben nadel's site (he ran into a similar prolog error), and still was getting an error.  then i finally realized i needed to specifiy the charset="utf-8" on the cfhttp because the server versions were different.  once i did this, everything worked on both CF7 and CF8.  seems so small, but took me a few hours to figure out.  oh well, i am now on my way to ninja cf status for having spent time to figure it out.</p><p>thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685944">4</a> by Armando Musto
		posted on 1/22/2012 at 3:02 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I've used a number of your tips and tools over the year, the googleCalendar CFC is great.<br>It really offered great insight.</p><p>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685943">5</a> by Raymond Camden
		posted on 1/22/2012 at 8:43 PM
		</div>
		<div class="comment_text"><p>Glad to help, Armando.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685945">6</a> by Jeremy Witherell
		posted on 2/7/2013 at 9:28 AM
		</div>
		<div class="comment_text"><p>I love this CFC! I'm very excited to implement this so I can control the way my calendars are displayed. Being new to CF, I'm having a slight problem applying this to my site, so any help would be appreciated. The issue I'm having is I have four different calendars (5 including the US Holidays calendar) that I need to incorporate in different combinations in different places on my site. My site is for my band program's three competitive ensembles, so each of them has its' own independent calendar, and then there's a separate calendar for events that apply to all three groups. Basically, I set this up so that one group's calendar wouldn't be cluttered up by another group's rehearsals and such, but I also wouldn't have to enter events that apply to all the groups three times for their three calendars. Google makes it easy to display multiple calendars together in the iframe, but obviously customizing the CSS is impossible.</p><p>What I've tried is running the GoogleCalendar CFC for each of my calendars, and then using Q of Q with UNION to combine them into one master recordset. This yields the following error:</p><p>Query Of Queries runtime error.<br>All resulting columns of queries in a SELECT statement that contains a UNION operator must have corresponding types.<br>Columns with index number equal 1 have diffent types (DATE, VARCHAR).</p><p>As near as I can tell, the issue is that some of the Date values are empty strings, and that, understandably, is fouling things up. Is there another way to combine these multiple recordsets to work around this error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685947">7</a> by Raymond Camden
		posted on 2/7/2013 at 8:21 PM
		</div>
		<div class="comment_text"><p>It isn't as sexy, but, build a new query by hand (queryNew), loop over each of the queries and manually add the records one by one. Not sexy, but shouldn't be terribly slow either, but you probably want to cache the results.</p><p>Although.... how in the heck do you have a calendar entry where the date is empty??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685949">8</a> by Jeremy Witherell
		posted on 2/7/2013 at 9:37 PM
		</div>
		<div class="comment_text"><p>From the looks of it, the way Google codes full-day events, the StartTime and EndTime are both set to just the date (e.g. 2013-02-07), and the Date field is blank. Events with set times have timestamps as the values in all three fields, though. My original thought was that the all-day events were being saved as varchar data types since there's no specified time, and the scheduled events as timestamps, but since the error specifically called out the Date column, that doesn't seem to be the (only?) problem. It doesn't look like any of the Date fields have date-only values, they're all either empty strings or timestamps.</p><p>Seems like a strange way to do it to me, but whatever. I'll try your idea. Thanks a million!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685951">9</a> by Jeremy Witherell
		posted on 2/7/2013 at 9:45 PM
		</div>
		<div class="comment_text"><p>My goal is that once I get the display set up the way I want it, I'll use your code to add events directly on my site, and then I can tell Google what to put in those fields. Unfortunately, everything that's been entered through Google's interface is a little screwy at the moment!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685931">10</a> by Raymond Camden
		posted on 2/13/2013 at 5:53 PM
		</div>
		<div class="comment_text"><p>Jeremy - a bit late here - but it sounds like maybe then this is a bug with my CFC. Like it isn't reading those events right. Agreed?</p></div>
	</div>
</div>
		