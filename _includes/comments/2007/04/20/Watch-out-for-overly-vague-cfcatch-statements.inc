
<div class="comment" id="c_1713664298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664298">1</a> by tanguyr
		posted on 4/20/2007 at 7:35 PM
		</div>
		<div class="comment_text"><p>On top of using better targeted cfcatch types, one tip i tell people when using cftry/cfcatch is to *always* use a cflog tag in your cfcatch block and log as much information as possible about the error. If you got into the cfcatch block, it means something went wrong, and you can never have too much information about what exactly went wrong. This is especially important in the case of errors reported by others. In this case, if a customer tells you they saw the "Sorry, but I can't do X because X isn't available."message, you are going to immediately assume that cfdosomething cool threw one of its "predictable" errors (hey, that's why you put it in a try/catch block, right?) and possibly waste a lot of time investigating in the wrong direction. With cflog, you can easily know *exactly* what went wrong</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664286">2</a> by Phillip Senn
		posted on 4/20/2007 at 7:37 PM
		</div>
		<div class="comment_text"><p>Something that I realized recently is that an error thrown by a SELECT statement is in a different league than an error thrown by an INSERT/UPDATE/DELETE statement.</p><p>An Insert could throw an error if fields are not being filled out (and NOT NULL is set).<br>A Delete could throw an error due to referential integrity.<br>These are application errors, even though they reveal themselves as server errors, so you'll want to return the error back to the user.</p><p>But if a SELECT statement throws an error, it's probably because the server's not responding (a SELECT with invalid criteria will return an empty query, not an error).</p><p>So the cftry wrapping a SELECT should probably be a bit looser than an INSERT/UPDATE/DELETE.<br>I'm not saying turn error trapping off for select statements, but I am saying that the response to an error from a SELECT statement should probably be treated as a server error, like</p><p>&lt;cfcatch&gt;<br>&lt;cfoutput&gt;<br>#cfcatch.detail#<br>&lt;/cfoutput&gt;<br>&lt;cfmail to:"techsupport" subject="OMG!  The server might be down!"&gt;<br>#cfcatch.detail#<br>&lt;/cfmail&gt;<br>&lt;cfabort&gt;<br>&lt;/cfcatch&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664299">3</a> by Tom Mollerus
		posted on 4/20/2007 at 7:41 PM
		</div>
		<div class="comment_text"><p>An additional technique, particularly for production servers, is to include a cfmail tag in the cfcatch block so that you can email yourself details of that particular error. Even if you're sending yourself a similar email from the onError method, you'll need to specify an email for your cfcatch blocks as well since your cfcatch code will be run instead of onError.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664297">4</a> by Phillip Senn
		posted on 4/20/2007 at 7:42 PM
		</div>
		<div class="comment_text"><p>Another question is:<br>How do you return error messages when your returntype="query".</p><p>That would be an argument for doing a cfabort if you get an error from a SELECT stmt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664300">5</a> by Tom Mollerus
		posted on 4/20/2007 at 7:43 PM
		</div>
		<div class="comment_text"><p>Using cflog is a great idea as well, as tanguyr mentions. I find it convenient to do both, since an email gets my immediate attention, whereas I don't have time to scan the cf logs throughout the day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664296">6</a> by Raymond Camden
		posted on 4/20/2007 at 7:49 PM
		</div>
		<div class="comment_text"><p>@Psenn - you say a select "error" just returns an empty query when your criteria is wrong - but that isn't always the case. You can have a select error where you reference a bad column/table name.</p><p>Also - in a case where an error occurs in a udf/method, I do NOT return something. I cfthrow. I know some folks like to return structs with status and stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664301">7</a> by tanguyr
		posted on 4/20/2007 at 7:51 PM
		</div>
		<div class="comment_text"><p>@Tom:<br>One of the things i dislike about mailing error messages is that, if you're not careful, you can get a *lot* of email. I know something bad happened overnight when i log on to my computer in the morning and it tells me i have three thousand new mails (we send mails to a monitoring mailing list whenever an error is caught). In cases like this, you don't usually get a whole lot of value from the mails as they're all pretty much telling you the same thing.</p><p>I've been thinking about trying to serve up my various .log files in cf's log directory using RSS feeds. That way you can log different kinds of information to different files and subscribe to them via different feed urls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664303">8</a> by Matt Osbun
		posted on 4/20/2007 at 7:56 PM
		</div>
		<div class="comment_text"><p>@Tom</p><p>Plus, with an email, I can cram in a lot of useful data.  At one job, I got to the point where I included the cfcatch object, of course, as well as the form scope, the cgi scope and the client scope. The idea was that I'd rather have an email with a ton of potentially unnecessary information in it than really, *really* wish I'd captured a particular piece of data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664304">9</a> by Raymond Camden
		posted on 4/20/2007 at 7:58 PM
		</div>
		<div class="comment_text"><p>@tanguyr: Some might say - however, that if you DO wake up with 3k error emails, then that is good. It lets you know how serious of a problem you have.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664307">10</a> by Matt Osbun
		posted on 4/20/2007 at 8:00 PM
		</div>
		<div class="comment_text"><p>@tanguyr</p><p>Definitely a potential downside.  Once, the database server at the company I was with went down.  From what I heard from the database team, the motherboard, drive controller, and 3 hard drives were destroyed.  By the time we redirected the website to a static page, I had collected over 10k error messages.  That poor Blackberry was never the same after that...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664302">11</a> by tanguyr
		posted on 4/20/2007 at 8:09 PM
		</div>
		<div class="comment_text"><p>@ray</p><p>well, you have a serious problem if you use outlook, since it will be pretty much unusable by then... just when you might need it to help you out too ;)</p><p>More seriously, i'm not a fan of using the number of notifications as an indicator of problem severity. If something goes wrong, i want two messages : error detected, error resolved. In between those two i assume the app is toast. I know people who consider it ok to get a few or even a few tens of error messages each night. If that's considered "acceptable behavior", why do you need to be notified? Before long you've created a filter to put them all in an errors folder, and as long as it doesn't show a four digit number when you get in, you just ignore it. Use something like RSS for this and you have all the same benefits, and keep mail (or SMS or pager or whatever) for "real" notification - i.e. something is wrong and you need to fix it urgently.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664306">12</a> by Raymond Camden
		posted on 4/20/2007 at 8:23 PM
		</div>
		<div class="comment_text"><p>Let me be clear. It's not that I want a lot of messages. What I want is a notice when something goes wrong. If a lot of things go wrong, I get a lot of notices. To me - I should never get an email. Period. (Well, error email. ;) Every email is a cry for help and a demand that I fix the application.</p><p>If were are talking about NON-error type emails, then I don't see a point in sending multiple copies when you only need one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664305">13</a> by Scott P
		posted on 4/20/2007 at 9:14 PM
		</div>
		<div class="comment_text"><p>Brings up a question - is there a way to suspend cf from sending mail?  Like a pause queue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664309">14</a> by Raymond Camden
		posted on 4/20/2007 at 9:47 PM
		</div>
		<div class="comment_text"><p>Funny you should ask that Scott. I got bit by that this week. My client sends out about 5k emails, of which 4k is to one host, and the host is blocking them because of how fast the emails come. I'm going to have to design a new system to send out batches of email at 100 per 10 minutes or so. That is still a few weeks out but I'll share my experiences when done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664308">15</a> by Tom Mollerus
		posted on 4/20/2007 at 9:53 PM
		</div>
		<div class="comment_text"><p>@tanguyr: You've got a good point about not wanting to be overloaded with volumes of email all containing the same information. But how often does that happen to someone who is reasonably careful? Any developer should at least test code on a dev server before sending it to production, and then test again after sending it to production. There's very little chance that I'm going to post code and then walk away for the day without noticing that it's blowing an error every time it runs. So, what I'm saying is that the small chance of getting too many error emails is well worth the convenience of being notified of problems right away.</p><p>@Sott-- throttling the error email is a great idea, and would address tanguyr's point. Perhaps a strategy for that would be to track the last N errors in application scope by line number, type, and script name. You would send an email for an error only if it weren't a repeat of other recent errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664311">16</a> by RobW
		posted on 4/20/2007 at 11:12 PM
		</div>
		<div class="comment_text"><p>I put a cfmail in my cfcatch and started getting too much e-mail, so I took it out and haven't had that problem since.<br>&lt;rimshot&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664310">17</a> by Arnuls
		posted on 4/20/2007 at 11:36 PM
		</div>
		<div class="comment_text"><p>Algun manual de ColdFusion y Flex</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664313">18</a> by Peter Bell
		posted on 4/20/2007 at 11:40 PM
		</div>
		<div class="comment_text"><p>@Tom, It usually happens when your DB server craters. Unless your code is designed to degrade gracefully when the db server goes down at 2am, you could wake up with a lot of emails at 8am if you get an error message for every cfquery run!</p><p>Other examples might be if you do lots of wrte to disk and the hard drive fills up, but I think most of us either check or have scripts to check for that . . .</p><p>Talking of which, does anyone out there have a generalized approach to distinguishing between "bad sql" and "db server down" and reacting appropriately (one email per bad sql message, but only down and then up emails if db server appears to be offline). Anyone?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664285">19</a> by Raymond Camden
		posted on 4/20/2007 at 11:47 PM
		</div>
		<div class="comment_text"><p>Peter: Few things.</p><p>One - obviously the error message is different. You can check it. That is a bit hacky though as it depends on strings.</p><p>Two - check the error codes. They should be different. So use a type of database, and look for the error code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664288">20</a> by Justice
		posted on 4/20/2007 at 11:54 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Why not just lower the mail threads in the server sending out the 5K emails?  I think default is like 10, if you set it to 2 or 1, it should be a lot less of a resource hog, as well as not slam their server so hard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664289">21</a> by Peter Bell
		posted on 4/20/2007 at 11:57 PM
		</div>
		<div class="comment_text"><p>@Ray, Thanks! If I don't find a blog posting with the appropriate codes, I'll sit down, test this on a couple of dbs and write something up when I get a moment!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664290">22</a> by Tom Mollerus
		posted on 4/21/2007 at 12:01 AM
		</div>
		<div class="comment_text"><p>@Peter: That's a good point, there are always instances besides code-level errors where you might generate too many error emails. I do have a response to that particular example, although I'll concede the point to you. When my company's db server goes down, I don't find out about it the next morning-- I get woken up in the middle of the night via a message to my cell from our monitoring service.  ;)</p><p>[Sigh] I hate those midnight messages. So does my wife.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664292">23</a> by Raymond Camden
		posted on 4/21/2007 at 12:02 AM
		</div>
		<div class="comment_text"><p>@Peter: One note - the codes may be db specific. So don't assume that if 69 is the code for bad sql in MSSQL, that it is the same in MySQL. It may be... just don't count on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664294">24</a> by Phillip Senn
		posted on 4/21/2007 at 12:10 AM
		</div>
		<div class="comment_text"><p>SQL Server 2000:<br>SELECT * FROM Master.dbo.SysMessages</p><p>SQL Server 2005:<br>SELECT * FROM sys.messages<br>WHERE language_id = 1033</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664315">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664315">25</a> by Aaron Longnion
		posted on 4/21/2007 at 12:50 AM
		</div>
		<div class="comment_text"><p>one option, depending on how paranoid the CTO (or whoever) is about error emails on the web, is to set up a gmail account for errors to be sent to (cferrors.yourcompany@gmail.com) with a very secure, cryptic password.  Then, you can categorize and filter the emails with gmail labels, do super-fast google searches on them, etc.  I really love this approach, as it doesn't clog up everyone's Outlook, is centralized for all to look at, you have nearly 3G of space, the searching is great, and with a little thought it's easy to keep organized.  And of course there's lot's of widgets for reading gmail via Google Desktop or RSS feeds, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664314">26</a> by Jaime Metcher
		posted on 4/21/2007 at 2:09 PM
		</div>
		<div class="comment_text"><p>I loathe error emails with a passion.  I've inherited a system that puts a cfcatch type="any" on *every* page.  The cfcatch blocks calls an an error handler that emails a bunch of "useful" information and then displays a "nice" error message.  What this basically means is that if I see an "nice" error on the screen, I have to ask the system admin guy to check the error email so I can find out what *really* happened.  If he's not there, I have to download the error email myself - which, if the sysadmin hasn't been there for a while, is about 3000 messages, spam, tape backup notifications yada yada.  If he's only just left for the day, he's probably already downloaded the message I want, which means it's somewhere in a gigantic Outlook PST file.  And the crowning glory of this setup?  NOTHING gets logged - no error in the application.log, nothing in the exception.log.  So if I want to know how many times the error has happened in the last six months - well, we all know how great a filing system a gigantic PST file is.</p><p>OTOH, I *like* log files.  I'd much rather look at a log file every day than download a zillion emails.  Me and my friend perl can make a log file sing and dance.  Emailing error messages - it's just nuts.</p><p>OK, I feel better now.</p><p>Jaime Metcher</p></div>
	</div>
</div>
		