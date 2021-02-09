
<div class="comment" id="c_1713716261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716261">1</a> by Ben Nadel
		posted on 6/18/2009 at 10:35 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Very interesting stuff! I wanted to do a little more digging and it seems as if the problem lies in how ColdFusion converts date/time stamps into numeric date representations. An alternate solution would be to define the From and To attributes using CreateTimeSpan() as well:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1615-ColdFusion-CreateTimeSpan-And-CFLoop-via-Ray-Camden-.htm%3AnaJYcC5vIpaq5qb4SRQs4bCW1XY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1615-ColdFusion-CreateTimeSpan-And-CFLoop-via-Ray-Camden-.htm">http://www.bennadel.com/blo...</a></p><p>This makes me think it's not a rounding issue, per say, otherwise, the same thing should have happend. It seems that the rounding issue is when CF converts a date/time string to a date/time number.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716262">2</a> by JAlpino
		posted on 6/18/2009 at 10:51 PM
		</div>
		<div class="comment_text"><p>Amazing, I had no idea that you could use values such as "9:00 am, 10:00am, etc.." in a &lt;cfloop&gt;. I probably would have tackled the problem by running a dateDiff() in mins between the two times to set my start and end attributes. I think the readers approach is more elegant though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716263">3</a> by Jeff Price
		posted on 6/18/2009 at 11:39 PM
		</div>
		<div class="comment_text"><p>I didn't know you could use times in loops like this either! Very cool. Ben, I like your solution of using CreateTimeSpan.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716259">4</a> by Russ Shakespear
		posted on 6/19/2009 at 1:39 AM
		</div>
		<div class="comment_text"><p>Thanks for the extremely fast response to my question Ray! Thanks to Ben for showing me how to loop over times in the first place: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F684-Looping-Over-Times-In-ColdFusion.htm%3AGjjLXfedj3LLzF-kL3eUSzIOGAg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/684-Looping-Over-Times-In-ColdFusion.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716266">5</a> by Andy Sandefer
		posted on 6/19/2009 at 9:11 AM
		</div>
		<div class="comment_text"><p>Just remember that no matter what you do you cannot change the future - just ask the people on LOST!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716268">6</a> by Jeff S.
		posted on 6/19/2009 at 7:18 PM
		</div>
		<div class="comment_text"><p>I ran into a similar issue yesterday when using a from/to cfloop.</p><p>From the cfloop livedoc page:</p><p>Usage</p><p>Using anything other than integer values in the from and to attributes of an index loop can product unexpected results. For example, if you increment through an index loop from 1 to 2, with a step of 0.1, ColdFusion outputs "1,1.1,1.2,...,1.9", but not "2". This is a programming language problem regarding the internal representation of floating point numbers.</p><p>Note: The to value is evaluated once, when the cfloop tag is encountered. Any change to this value within the loop block, or within the expression that evaluates to this value, does not affect the number of times the loop is executed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716265">7</a> by Roland Collins
		posted on 6/20/2009 at 1:18 AM
		</div>
		<div class="comment_text"><p>It's even more interesting since Java (and SQL, .NET, etc) stores Date/Time values as the number of milliseconds since epoch/midnight.  You would think that it would then follow that CF TimeSpans would just be a number of milliseconds.  So 10AM would just be 10 * 60 *60 * 1000 milliseconds since midnight.  I'm curious why they would choose to use a float instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716267">8</a> by Ben Nadel
		posted on 6/20/2009 at 1:35 AM
		</div>
		<div class="comment_text"><p>@Roland,</p><p>I am not so sure that SQL uses milliseconds. I believe it treats numeric dates as floats as well (where int is the day and decimal is the time). That's why Rounding a numeric date/time stamp in SQL will result in a date-only value (no time).</p><p>I do think, however, that the zero dates in SQL and ColdFusion are slightly different. Meaning, "0" in CF is a different date than "0" in SQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716271">9</a> by Roland Collins
		posted on 6/20/2009 at 1:50 AM
		</div>
		<div class="comment_text"><p>Well at least MSSQL stores 8 byte datetimes.  The first 4 bytes are milliseconds since your start date (1/1/1900 most of the time), the second four bytes are the number of 1/300ths of a second since midnight.  It doesn't technicaly use a float though - it uses a counter of 1/300ths of a second.  Because of this there is a specialized rouding algorigthm based on the fractional seconds that are calculated by any datetime operations.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmsdn.microsoft.com%2Fen-us%2Flibrary%2Fms187819%28SQL.90%29.aspx%3Ax62EOR79Puq68FSJw0I7UPfMP6Q&amp;cuid=3321886" rel="nofollow noopener" title="http://msdn.microsoft.com/en-us/library/ms187819(SQL.90).aspx">http://msdn.microsoft.com/e...</a></p><p>The behavior is *almost* float like, but not quite.  And it's definitely annoying :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716269">10</a> by Ben Nadel
		posted on 6/20/2009 at 1:59 AM
		</div>
		<div class="comment_text"><p>@Roland,</p><p>Maybe I am confused; it appears the documentation says the first 4 bytes are *not* milliseconds, but, rather days:</p><p>"The first 4 bytes store the number of days before or after the base date: January 1, 1900."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716264">11</a> by Roland Collins
		posted on 6/20/2009 at 4:10 AM
		</div>
		<div class="comment_text"><p>You're right - I'm multitasking too much today.  I meant to say days, fractional seconds :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716270">12</a> by Ben Nadel
		posted on 6/20/2009 at 4:12 AM
		</div>
		<div class="comment_text"><p>@Roland,</p><p>No worries. One thing we have to be careful of is that the zero dates in CF and SQL *are* different. So, if you use numeric dates, you can't transfer them across the bridge.</p><p>Get some rest this weekend. (I plan to see many movies!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716274">13</a> by Raymond Camden
		posted on 6/20/2009 at 5:21 AM
		</div>
		<div class="comment_text"><p>@JeffS: Interesting. I didn't know the docs explicitly said not to use anything but integers. That's an important note.</p></div>
	</div>
</div>
		