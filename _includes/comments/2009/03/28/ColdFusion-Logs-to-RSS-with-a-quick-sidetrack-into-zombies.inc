
<div class="comment" id="c_1713714318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714318">1</a> by Jules Gravinese
		posted on 3/29/2009 at 5:48 AM
		</div>
		<div class="comment_text"><p>Well this is sure food for thought! The current project I am wrapping up has daily import/export routines. The output is emailed to me and gmail does a great job of filing that for me.</p><p>But if I were to log them instead, I can use a special character that I pick to be the end of each line (like tab, tilde, or pipe). Using that, it's easy to count the number of log entries, and also pick out the last 20.</p><p>Great post! Definitely has me inspired.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714326">2</a> by Mike Whitby
		posted on 3/29/2009 at 2:33 PM
		</div>
		<div class="comment_text"><p>This is a great example of how to read logs, I love the sound of it - might have to give this a go! I previously have made a script to download the CF logs into a local Splunk, anyone done that before?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714323">3</a> by Dan G. Switzer, II
		posted on 3/30/2009 at 5:36 PM
		</div>
		<div class="comment_text"><p>One thing to keep in mind regarding this project, is that potentially would be very easy to miss entries if you're only grabbing the last XX records.</p><p>Depending on your code, if a log file is growing rapidly (such as the mail log) unless you're checking the RSS feed pretty frequently, it would be very easy to miss chunks of data.</p><p>Just something to keep in mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714328">4</a> by Raymond Camden
		posted on 3/30/2009 at 5:40 PM
		</div>
		<div class="comment_text"><p>Absolutely good point Dan. For real time notifications you really want to look at something else, like SMS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714321">5</a> by JC
		posted on 3/30/2009 at 6:58 PM
		</div>
		<div class="comment_text"><p>hmm. We used to do something like this with Jabber. It would IM us with errors. Just from our development box though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714303">6</a> by Robbie Byrd
		posted on 3/31/2009 at 2:00 AM
		</div>
		<div class="comment_text"><p>Thanks, Ray! This is exactly what I was looking for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714319">7</a> by David Jacobson
		posted on 11/16/2011 at 12:07 AM
		</div>
		<div class="comment_text"><p>Ray, this is very interesting and I would like to try it, however, I think I'm not 100% sure how to implement.</p><p>I have all the code on one page (tstRSS.cfm) but I don't see what I see in your example xml page.  I think I am missing a step.  Can you clairfy for me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714329">8</a> by Raymond Camden
		posted on 11/16/2011 at 12:20 AM
		</div>
		<div class="comment_text"><p>So what -are- you seeing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714324">9</a> by David Jaocbson
		posted on 1/24/2012 at 7:48 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Our xml file stopped updated and I am wondering if you have an updated way to do this?</p><p>-David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714322">10</a> by Raymond Camden
		posted on 1/24/2012 at 8:01 PM
		</div>
		<div class="comment_text"><p>Well, the XML comes from the log file. Did the log file stop updating? You need to provide a bit more detail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714327">11</a> by David Jaocbson
		posted on 1/24/2012 at 8:07 PM
		</div>
		<div class="comment_text"><p>Sorry about that Ray.  Nope the log file has about 10 entries from 1/10/12 through 1/22/2010 and the RSS feed shows the last entry as 12/5.</p><p>Now when I go the to URL that creates the XML file I am getting the following error.</p><p>The element at position 0 of dimension 1, of array variable "LINES," cannot be found.</p><p>If you want I can email you the file in question if that would help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714325">12</a> by Raymond Camden
		posted on 1/24/2012 at 8:19 PM
		</div>
		<div class="comment_text"><p>Well look at the error. What line of code is that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714317">13</a> by David Jaocbson
		posted on 1/24/2012 at 9:04 PM
		</div>
		<div class="comment_text"><p>&lt;!--- our data, in line form ---&gt;<br>&lt;cfset lines = []&gt;</p><p>&lt;!--- flag to let us ignore the first line ---&gt;<br>&lt;cfset doneOne = false&gt;</p><p>&lt;cfloop index="i" file="#logfile#"&gt;<br>	&lt;cfif doneOne&gt;<br>		&lt;cfset arrayAppend(lines, i)&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset doneOne = true&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714320">14</a> by Raymond Camden
		posted on 1/24/2012 at 9:09 PM
		</div>
		<div class="comment_text"><p>And what line is throwing the error? Does logfile have content even?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714307">15</a> by David Jaocbson
		posted on 1/24/2012 at 9:17 PM
		</div>
		<div class="comment_text"><p>Sorry Ray, having a senior moment.  The applciation file says the error is line 44:</p><p>&lt;cfloop index="x" from="#arrayLen(lines)#" to="#max(0,arrayLen(lines)-25)#" step="-1"&gt;<br>44 ----&gt;	&lt;cfset arrayAppend(latestLines, lines[x])&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714310">16</a> by Raymond Camden
		posted on 1/24/2012 at 9:23 PM
		</div>
		<div class="comment_text"><p>Ok, so what is the size of the array? Again, did you check to see if the log actually has content? If it's blank, it is best to stop processing.</p><p>&lt;cfif arrayLen(lines) is 0&gt;<br>&lt;cfabort&gt;<br>&lt;/cfif&gt;</p><p>My code assumed an active log file filled with content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714308">17</a> by David Jaocbson
		posted on 1/24/2012 at 9:37 PM
		</div>
		<div class="comment_text"><p>Well I guess I am lost.  :)<br>If I dump out the ArrayLen of lines I get 8712.</p><p>Looking at the log file in CFadmin (Cannot usually but asked our IT for a peak) I see 9 rows of "Error".<br>I think it may be time for lunch!  :D</p><p>-David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714309">18</a> by Raymond Camden
		posted on 1/24/2012 at 9:44 PM
		</div>
		<div class="comment_text"><p>At this point it may make sense for us to take it offline. It is throwing an error trying to read lines[0], but if arraylen(lines) is 8712, that shouldn't happen. You may want to add a quick debug line before it:</p><p>&lt;cfoutput&gt;x is #x#&lt;br/&gt;&lt;/cfoutput&gt;</p><p>Just to see whats going on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714306">19</a> by Raymond Camden
		posted on 1/25/2012 at 12:14 AM
		</div>
		<div class="comment_text"><p>Ugh. Ok, found it. Thanks David for sending me his log file which made it really clear. I've already fixed the code above, but the issue was here:</p><p>&lt;cfloop index="x" from="#arrayLen(lines)#" to="#max(0,arrayLen(lines)-30)#" step="-1"&gt;</p><p>The logic was meant to be this, in English:</p><p>Go from the number of lines to the row 30 below that, unless that puts us below 0 and then use 0 instead.</p><p>The right logic is this:</p><p>&lt;cfloop index="x" from="#arrayLen(lines)#" to="#max(1,arrayLen(lines)-30)#" step="-1"&gt;</p><p>In other words, make 1 the lowest we can go. -sigh-</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714313">20</a> by David Jaocbson
		posted on 1/25/2012 at 12:37 AM
		</div>
		<div class="comment_text"><p>Should the URL be the cfm file that creates the XML or the XML file itself? Also, do I need to the cffile create at the bottom of the getlog.cfm page as I didn't see that in your code?</p><p>I guess I'm trying to figure out how I get the xml file updated and pushed to subscribers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714311">21</a> by Raymond Camden
		posted on 1/25/2012 at 1:07 AM
		</div>
		<div class="comment_text"><p>Well, in my demo, I output the results to screen. That works, but would be a bit slow under load. Anything file related isn't going to be terribly quick. So normally I'd write it out to an XML file and share THAT url.</p><p>Now obviously the XML file will not be up to date. You can use the CF Scheduler to schedule an update every N minutes or hours to your liking.</p></div>
	</div>
</div>
		