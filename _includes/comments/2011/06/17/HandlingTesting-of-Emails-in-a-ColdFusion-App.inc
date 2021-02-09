
<div class="comment" id="c_1713733419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733419">1</a> by JF
		posted on 6/18/2011 at 2:28 AM
		</div>
		<div class="comment_text"><p>I recently started writing a custom tag for this at my workplace.  I never got to finish it but the idea was to simply wrap cfmail completely with the same attributes.</p><p>Implementing it is as easy as doing a global replace for &lt;cfmail by &lt;cf_mail</p><p>It's sorta like a service, but more gettho.  The biggest pro being that it doesn't require as much refactoring of the application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733423">2</a> by Django
		posted on 6/18/2011 at 2:58 AM
		</div>
		<div class="comment_text"><p>We're doing something along the lines of the first option you've outlined, with positive results.</p><p>We have an EmailService.cfc as part of a set of utility services that make it into most of our projects.  This is where the actual cfmail tag is employed. As the majority of our development and testing is done from a specific IP range (or localhost), this mail service checks the current IP against a set of defined dev/staging IP's and then decides what to do. If the environment is development/staging, emails are re-routed to an internal, coldspring defined, email address. If not, then the email is sent to its intended target as one would expect.</p><p>I can highly recommend this, or some variation of this approach. Ray, you've even suggested a couple of potential upgrades for us to consider as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733421">3</a> by MikeG
		posted on 6/18/2011 at 3:30 AM
		</div>
		<div class="comment_text"><p>We do something similar here as well; a simple email wrapper, custom tag or function for sending email.  If not the prod environment the email is sent to a "variable defined" email address.  Sometimes this variable is the logged in user's email address (assuming they are a dev or tester), sometimes it is a shared email address.  One thing we do add though in the body of the email is what, had this been production, the real attributes would have been (to, from, cc, bcc, etc).  This way you don't bother or confuse the real users of the production app while doing dev/test but you can still validate that the email would have been routed correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733424">4</a> by Phil Duba
		posted on 6/18/2011 at 3:36 AM
		</div>
		<div class="comment_text"><p>Ray, I have an even better suggestion. I set my IP address for our mail server 127.0.0.0 in our testing environments then I put our internal authentication mechanism in front of your Spoolmail application along with a list of users who would need to verify the mail format and that's how we do email confirmation for our ColdFusion applications.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733430">5</a> by Raymond Camden
		posted on 6/18/2011 at 3:38 AM
		</div>
		<div class="comment_text"><p>@Phil: Ah - nice. I thought folks stopped using SpoolMail when CF9 included something similar in it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733427">6</a> by Phil Duba
		posted on 6/18/2011 at 3:46 AM
		</div>
		<div class="comment_text"><p>Remember though, the CF9 one is only accessible in the admin and it doesn't allow for editing of the emails themselves. Spoolmail lets me go in to the undelivered emails and fix the mistyped email address or any other issues present with the delivery strings without the need to download the files off the server and then manual fix and reupload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733420">7</a> by Ben Arledge
		posted on 6/18/2011 at 9:19 AM
		</div>
		<div class="comment_text"><p>I would suggest Amazon Simple Email Service (SES). I believe there is a CF wrapper on RIAForge.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733422">8</a> by Raymond Camden
		posted on 6/18/2011 at 6:00 PM
		</div>
		<div class="comment_text"><p>Does SES also have simple support for "don't really email, just log"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733426">9</a> by Jade Cady
		posted on 6/18/2011 at 10:03 PM
		</div>
		<div class="comment_text"><p>We use Coldbox for most of our applications currently and I have been really happy using the "Environment Safe Mail Service" interceptor. I have the environment add the interceptor on our development server.  It can be set it to override all emails sent to a single address so that testers can receive and review all the emails that would have been sent to anyone, or it allows me to just not send any emails at all. And for my local build environment I have "smtp4dev" installed so it picks up all the emails being generated and I can see what was being generated as I build/test.</p><p>It seems that a non-Coldbox wrapper of the Email interceptor would be very helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733429">10</a> by Gary F
		posted on 6/19/2011 at 1:25 AM
		</div>
		<div class="comment_text"><p>I run Dev Null SMTP Server which is a dummy mail server. Set CF to use it as its mail server and the emails don't go anywhere at all, but it lets you verify how many emails would have been sent and who the recipients would have been. And you don't have to change your CFML code to use it.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.aboutmyip.com%2FAboutMyXApp%2FDevNullSmtp.jsp%3AvrBmHaYQ3alhMsthZYHerOxpA7w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.aboutmyip.com/AboutMyXApp/DevNullSmtp.jsp">http://www.aboutmyip.com/Ab...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733425">11</a> by Sean Coyne
		posted on 6/19/2011 at 4:29 AM
		</div>
		<div class="comment_text"><p>I use the DevNull server too.  Creates a copy of each outgoing email in a folder on your system so you can verify the formatting and other details.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733432">12</a> by prims
		posted on 6/19/2011 at 6:32 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Thanks for blogging this issue and thanks for all those who posted as well. Ray I didn't get a chance to talk to developers yet because of the weekend. I like the idea of having mail service component that definetly gives us full control. But for a temporary fix I am not sure yet but I am guessing it might be Dev Null SMTP server simply because no need to change any code base.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733433">13</a> by Henry
		posted on 6/21/2011 at 12:27 AM
		</div>
		<div class="comment_text"><p>ColdBox has a MailService plugin that solves this problem...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.aliaspooryorik.com%2Fblog%2Findex.cfm%2Fe%2Fposts.details%2Fpost%2F282%3A3B16KPvHrTr5MZnx9HfwHdwszKk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.aliaspooryorik.com/blog/index.cfm/e/posts.details/post/282">http://www.aliaspooryorik.c...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwiki.coldbox.org%2Fwiki%2FPlugins%3AMailService.cfm%3AjMNUKhPrKRyrZBTE5lXVeKuXMT8&amp;cuid=3321886" rel="nofollow noopener" title="http://wiki.coldbox.org/wiki/Plugins:MailService.cfm">http://wiki.coldbox.org/wik...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733435">14</a> by Ben Arledge
		posted on 6/21/2011 at 8:39 AM
		</div>
		<div class="comment_text"><p>Ray, I don't think it would be too hard to add a parameter to the cfc call that forces a log rather than a send.  I think the SES option is great for portability... and nobody enjoys maintaining a mail server.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733434">15</a> by Raymond Camden
		posted on 6/21/2011 at 2:51 PM
		</div>
		<div class="comment_text"><p>"and nobody enjoys maintaining a mail server"</p><p>Amen to that. The last time AWS went down - I remember thinking - my own boxes go down - and I don't think I'm any quicker than Amazon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733436">16</a> by Josh Curtiss
		posted on 6/27/2011 at 7:38 PM
		</div>
		<div class="comment_text"><p>Like some of the other guys, I wrap cfmail with a cf_mail tag, although my primary motivation back in the day (started this 10 years ago) was to log the mail to a SQL database. Added a couple additional fields (application name sending the email, a generic "purpose" field used for searching/filtering, etc). And also made the custom tag always BCC a particular address if no BCC is passed in from the code. This way I have a single email account that shows all email being sent from all apps on my intranet. Then I just added a "debug" attribute to the custom tag that will auto-set the TO and CC attributes to a set address if debug="true". Combine that with an application variable that is set in the app configuration that indicates whether the app is in dev or production mode, and accidental emails during development become a non-issue! :)</p></div>
	</div>
</div>
		