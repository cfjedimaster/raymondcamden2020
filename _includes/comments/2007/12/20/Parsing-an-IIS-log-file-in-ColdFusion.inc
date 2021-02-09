
<div class="comment" id="c_1713675726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675726">1</a> by Gus
		posted on 12/21/2007 at 1:55 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>There is a skunkworks project out of MS that is incredibly useful when dealing with IIS, and all kinds of other log files.</p><p>I highly recomend checking out LogParser ( now on version 2.2).  It is incredibly fast and useful.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.microsoft.com%2Fdownloads%2Fdetails.aspx%3FFamilyID%3D890cd06b-abf8-4c25-91b2-f8d975cf8c07%26displaylang%3Den%3Aw7tzeBFEZ7zqpTUrhB_Ov5xm6Rs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.microsoft.com/downloads/details.aspx?FamilyID=890cd06b-abf8-4c25-91b2-f8d975cf8c07&amp;displaylang=en">http://www.microsoft.com/do...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675718">2</a> by Gus
		posted on 12/21/2007 at 1:57 AM
		</div>
		<div class="comment_text"><p>Oops... meant to include this from description:</p><p>Log parser is a powerful, versatile tool that provides universal query access to text-based data such as log files, XML files and CSV files, as well as key data sources on the Windows® operating system such as the Event Log, the Registry, the file system, and Active Directory®. You tell Log Parser what information you need and how you want it processed. The results of your query can be custom-formatted in text based output, or they can be persisted to more specialty targets like SQL, SYSLOG, or a chart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675720">3</a> by Dan Sorensen
		posted on 12/21/2007 at 2:56 AM
		</div>
		<div class="comment_text"><p>Not to distract from the nifty CF you wrote, but I've found AWStats to be VERY good at parsing IIS logfiles and showing a readable result. It's a web based server side app that runs on Perl. I believe you'll need administrative access to the server to set it up, but otherwise this program has been working very well for me for 3 years.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fawstats.sourceforge.net%2F%3AarzBVV2Mvdc1_9b38nOl5dIdP70&amp;cuid=3321886" rel="nofollow noopener" title="http://awstats.sourceforge.net/">http://awstats.sourceforge....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675719">4</a> by Pat Branley
		posted on 12/21/2007 at 4:42 AM
		</div>
		<div class="comment_text"><p>I think the first 2 posters have missed the point! of course there are tools to read IIS log files. the point is you can now do it in CF!</p><p>Why is this cool ? cos once you have parsed the logs into a databse (why they dont just write them directly to a SQL datasource ill never know...) you can do some funky things with CFChart and build a mini web stats engine within your own website.</p><p>we are thinking of doing this ourselves to complement our existing web stats package with some extra charting features.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675722">5</a> by Dan Sorensen
		posted on 12/21/2007 at 5:50 AM
		</div>
		<div class="comment_text"><p>@Pat: I was responding directly to Ray's comment, "...realized I had no idea how to parse them. I used to have some decent tools for Windows, but didn't know of anything for OSX".</p><p>I think what Ray did with the log file parsing is pretty cool and you have a good point about extending it to your own needs. For me, AWStats is a well maintained, cross platform solution with more functionality that I'd like to replicate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675724">6</a> by Daniel
		posted on 12/21/2007 at 8:20 PM
		</div>
		<div class="comment_text"><p>@Pat:  Actually, with IIS, you can set the logs to write directly to a database instead of the text files.  I tried it at work once, but with our level of traffic, the database was too large.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675728">7</a> by Gus
		posted on 12/21/2007 at 10:02 PM
		</div>
		<div class="comment_text"><p>@Pat: I didn't miss the point at all!  I was simply letting Ray and his readers about another tool.</p><p>If you want to keep CF in the mix, you call logparser using CFEXECUTE.  This will be considerable faster than reading in the file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675727">8</a> by Charlie Arehart
		posted on 12/28/2007 at 10:38 PM
		</div>
		<div class="comment_text"><p>For others who may be interested to learn more about LogParser, I'll share that I'd done an article on it (and some features that may interest CF folks) in the now defunct CFDJ. It's still available online:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion.sys-con.com%2Fread%2F296223.htm%3AGJ6VPNJBnZeyYqChwdWqUJfAXgA&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfusion.sys-con.com/read/296223.htm">http://coldfusion.sys-con.c...</a></p><p>Even so, yes, thanks Ray for showing how folks could do it in CFML if they wanted. As Gus notes (and I state in the article), the LogParser tool really does so much more than most realize.</p><p>If one wanted to read other than IIS logs, then rather than tweak Ray's code for each type of log, it instead knows how to read various kinds of logs and could itself output a uniform stream (or simply a DB) that could then be read in by a CF tool. Just one of many possibilities to think about.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675729">9</a> by Charlie Arehart
		posted on 12/29/2007 at 2:09 AM
		</div>
		<div class="comment_text"><p>FWIW, when I tried this on one of my IIS logs that was still being written to, the code got an error when it was processing the last line because it was empty, as far as CF was concerned. The error was on the ListGetAt. I solved it by wrapping a test for &lt;cfif trim(line) is not ""&gt; around the loop containing it, which solved the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675725">10</a> by Raymond Camden
		posted on 12/29/2007 at 2:18 AM
		</div>
		<div class="comment_text"><p>Good catch. It may be even better to also check the listLen. If not == the number of columns, ignore the line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675735">11</a> by David McGuigan
		posted on 1/4/2008 at 1:31 AM
		</div>
		<div class="comment_text"><p>Spectacular. This probably just saved me a good hour. Props.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675732">12</a> by JC
		posted on 6/13/2008 at 9:57 PM
		</div>
		<div class="comment_text"><p>"why they dont just write them directly to a SQL datasource ill never know..."<br>1 - You can: <a href="http://disq.us/url?url=http%3A%2F%2Fsupport.microsoft.com%2Fkb%2F245243%3A-4gYheJ50UU_bShgF2NhjNKBLt4&amp;cuid=3321886" rel="nofollow noopener" title="http://support.microsoft.com/kb/245243">http://support.microsoft.co...</a><br>2 - You must not have very high traffic sites. I have a couple of locations that generate half a gig of logfiles a day, each. That might get a little expensive in SQL. As files, I just have a CF script running every night:<br>zip = CreateObject("component", "Zip");<br>status = zip.gzipAddFile("#workingdir#", "#workingdir##yesterdayfile#");<br>looping through the .log files, gzipping them, then deleting them. A couple hours later a second scheduled task uses robocopy to move all the gzipped files off to the box I use to run web reports with FunnelWeb.</p><p>BTW -- FunnelWeb Enterprise is free now (Quest stopped developing and supporting it), and has versions for Windows, Linux, Solaris, and OSX.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.quest.com%2Ffunnel-web-analyzer%2Fsoftware-downloads.asp%3Azpy9RFBo1I1tfMYpdDIpCAiHqlc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.quest.com/funnel-web-analyzer/software-downloads.asp">http://www.quest.com/funnel...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675734">13</a> by Raymond Camden
		posted on 6/13/2008 at 10:22 PM
		</div>
		<div class="comment_text"><p>Thanks for the info JC. I had used Funnel Web in the past, but the last time I tried to use it I could never find the free version. I didn't know they had an OSX version. That's worth taking a look at for sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675738">14</a> by Chung Lee
		posted on 10/5/2011 at 12:29 AM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>Is there a way to use CF to create an app that removes unwanted entries from the IIS log files? Something that is similar to the Log Scrubber software at this page: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.knechtology.com%2Flog-scrubber%2F%3APR1K1EkgSwFkT2E5BBlius6pKgY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.knechtology.com/log-scrubber/">http://www.knechtology.com/...</a> . Any suggestions you can provide is appreciated. Thanks.</p><p>--Chung Lee</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675737">15</a> by Raymond Camden
		posted on 10/5/2011 at 9:17 AM
		</div>
		<div class="comment_text"><p>You could modify my code above to simply exclude things.</p></div>
	</div>
</div>
		