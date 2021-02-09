
<div class="comment" id="c_1713725785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725785">1</a> by Sean Ford
		posted on 8/10/2010 at 2:35 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I was wondering if you've ever given any thought to allowing users to register themselves directly on the login screen.  I was thinking of using Lighthouse as a simple way for my clients to file bugs in applications I develop for them.  However, I don't want to have to manually create accounts for each employee.</p><p>How would I know what project to assign them to? (assuming that I use the same setup for multiple projects)...I was thinking of hard-coding the projectID in the Support link.  If they register, they are automatically assigned to that project...if they are already registered, and the project is a new one (for clients with multiple projects), it would assign the new project to them upon a successful login.</p><p>Any thoughts on this?  I have a few more, but want to get your feedback first.</p><p>Regards,  Sean Ford</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725789">2</a> by Raymond Camden
		posted on 8/10/2010 at 5:35 PM
		</div>
		<div class="comment_text"><p>No, I've not consider auto registration. (Well, I did consider a hosted LHP solution that I'd charge for.)</p><p>The closest LHP has is the email support. You can let users send email (or even build a form front end that sends the email) and it will auto create issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725783">3</a> by Andrew
		posted on 8/17/2010 at 9:50 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Love the site and LHP!  New to Model-Glue and Coldspring and trying to make a few quick modifications to LHP.</p><p>I've noticed that the application does not appear to be updating after I make the code changes.  For example, I can update a SQL statement in the authenticate function to always use a username that is not in the db (not that this is a change i'm planning on keeping, but rather an example of something that should make the site bomb;), and it will still let me login with appropriate credentials?</p><p>I've looked around your site for some help.  I have trusted caching off and I've cleared the cache before reloading any of the pages.</p><p>Just wondering if you have any ideas as to why nothing seems to uptade.  I have other coldfusion applications on the same server which will update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725772">4</a> by Raymond Camden
		posted on 8/17/2010 at 9:54 PM
		</div>
		<div class="comment_text"><p>MG caches a lot of stuff for performance. Look in ColdSpring.xml and<br>you will see a reload key and password. I believe I left it at<br>default: init and true</p><p>In the browser, add</p><p>&amp;init=true</p><p>And it should refresh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725784">5</a> by Andrew
		posted on 8/18/2010 at 3:19 AM
		</div>
		<div class="comment_text"><p>Awesome!  Thanks Ray for the quick response.  LHP is a great product!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725787">6</a> by Jack Ding
		posted on 12/18/2010 at 7:38 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I am a CF application developer using LHP since its very earlier stage and I do love it and got used to it within my programming life.</p><p>However I have been working on many PHP projects recently due to more country specifics here (I am located in China where CF is less popular at this end). I am thinking of re-writing LHP in PHP. And of course it will remain open-sourced.  Here I would like to ask for your permission and some help for that. If that is workable please let me know.</p><p>Regards,<br>Jack</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725788">7</a> by Raymond Camden
		posted on 12/18/2010 at 7:51 PM
		</div>
		<div class="comment_text"><p>Sounds ok to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725786">8</a> by Jack Ding
		posted on 12/19/2010 at 9:41 AM
		</div>
		<div class="comment_text"><p>Great! Thanks very much for your prompt reply Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725795">9</a> by Adam
		posted on 3/2/2011 at 5:34 PM
		</div>
		<div class="comment_text"><p>I have a user who is assigned to all of the projects that I have created. However, this user doesn't want any email alerts so I have opted them out of all 'Email projects'. This is on the User Edit screen.</p><p>When I update an issue then I get an undeliverable email alert as LHP still attempts to send an email. I have put a dummy email into the email field for this user as it is required.</p><p>I think this is a bug? Sorry I tried adding this to riaforge but couldn't log in after registering.</p><p>Thanks in advance,</p><p>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725792">10</a> by Adam
		posted on 3/2/2011 at 5:51 PM
		</div>
		<div class="comment_text"><p>I should add that this only happens when the issue was raised by the user in question. That is, it seems to send an update to the user who created the issue even if they are opted out of email alerts.</p><p>Is this by design?</p><p>Thanks,</p><p>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725793">11</a> by Adam
		posted on 3/4/2011 at 10:19 PM
		</div>
		<div class="comment_text"><p>Sorry for cluttering up this post with comments but not sure where else to post them. <br>Not sure that the above is a bug in as much that an undeliverable email message only gets triggered when the user email address is bogus. When you put in a valid email then no email is sent at all which is the correct behaviour based on the 'Email projects' setting.</p><p>So here is a feature request:</p><p>Have an email setting so that users only get email updates to tickets that they initially created or even better to those that they currently own. That way they wouldn't get all emails from a project just the ones that they are interested in. E.g. if issue gets marked as 'ready for testing' or whatever.</p><p>Any takers on that one?</p><p>Apologies for all the ramblings...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725794">12</a> by Raymond Camden
		posted on 3/6/2011 at 11:37 AM
		</div>
		<div class="comment_text"><p>You can file bug reports, and requests, here: <a href="http://disq.us/url?url=http%3A%2F%2Flighthousepro.riaforge.org%3ABPCiOWizYItOssY782xURXLr5YU&amp;cuid=3321886" rel="nofollow noopener" title="http://lighthousepro.riaforge.org">http://lighthousepro.riafor...</a>. There is a Issues link you can follow. Please do so - it helps keep me organized. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725771">13</a> by Randy Smith
		posted on 2/5/2012 at 12:01 AM
		</div>
		<div class="comment_text"><p>Ray, So far loving Lighthouse!  Tried to load Mantis - what a pain.</p><p>I have most things set up, but .... how do you get the email to bring in the issues?    I am using my POP server address, do I need to use SMTP?  And what triggers it to go look for the mail?</p><p>Thanks for this product - saving my hide!<br>RLS</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725774">14</a> by Raymond Camden
		posted on 2/5/2012 at 12:08 AM
		</div>
		<div class="comment_text"><p>The mail settings should point to a pop server. Then LHP uses cfpop to read in the mail. (Be sure it is ok for LHP to delete the mail.) The docs should - stress should - discuss this. ;) If not,ask more questions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725773">15</a> by Randy Smith
		posted on 2/5/2012 at 12:26 AM
		</div>
		<div class="comment_text"><p>Wow! You are on top of the replies! Very impressed, thank you!</p><p>By "make sure LHP can delete the mail" I assume that just normal CFPOP add/delete functions are used so I don't need to go to great lengths to make sure unless I've already gone to great lengths to prohibit such activity.</p><p>I think the mail problem is on my side, looking into it. I've set up over a thousand emails, but something went kablooey inside the mail server this time... :-(   Happens to even the mediocre of us.</p><p>I assume also that LHP is only going to pull from mail when *someone* (anyone) access the system and/or the projects, and that will be the trigger to check the mail as I don't think you auto-installed any automated processes to read the mail.</p><p>Thanks again for this product, reports, tools, forms, interfaces -- all are wonderful!</p><p>RLS</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725777">16</a> by Raymond Camden
		posted on 2/5/2012 at 12:30 AM
		</div>
		<div class="comment_text"><p>"By "make sure LHP can delete the mail" I assume that just normal CFPOP add/delete functions are used so I don't need to go to great lengths to make sure unless I've already gone to great lengths to prohibit such activity."</p><p>Right, what I meant is, don't point a LHP project to your personal email. It will read, consume, and destroy. You would make a new email account for the project, like, project@foo.com.</p><p>" assume also that LHP is only going to pull from mail when *someone* (anyone) access the system and/or the projects, and that will be the trigger to check the mail as I don't think you auto-installed any automated processes to read the mail."</p><p>Actually it IS automatic. The code creates a ColdFusion Scheduled task. I think it runs once every 15 minutes. What's cool then is that if you (a LHP user) have subscribed to a project, then you would get notified.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725776">17</a> by Randy Smith
		posted on 2/5/2012 at 12:35 AM
		</div>
		<div class="comment_text"><p>I need to step into that auto-create a scheduled task stuff. SO MUCH of ColdFusion goes unused, just like the human brain. SO MUCH more I could be doing, given time and training. The good news is that it's there for us when we're ready to "scale up"!  Thanks for showing us the way (and for your LHP comments).<br>RLS</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725778">18</a> by Peter Tanswell
		posted on 5/15/2013 at 6:55 PM
		</div>
		<div class="comment_text"><p>500 - Internal server error.<br>There is a problem with the resource you are looking for, and it cannot be displayed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725779">19</a> by Raymond Camden
		posted on 5/15/2013 at 7:00 PM
		</div>
		<div class="comment_text"><p>Eh? Are you reporting an error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725780">20</a> by Peter Tanswell
		posted on 5/15/2013 at 7:02 PM
		</div>
		<div class="comment_text"><p>Hi</p><p>Have just installed lighthousepro on a server</p><p>It resides in:</p><p>c:/inetpub/wwwroot/lighthosepro</p><p>Have downloaded both modelglue and coldspring as required</p><p>Installed these under lighthousepro folder in folders modelglue and coldspring</p><p>Have setup a new mySQL database and the dsn name is lighthousepro</p><p>When i run it on the server I get an error message:</p><p>Could not find the included template /modelglue/gesture/ModelGlue.cfm</p><p>If trying to access across the net using</p><p>http://115.69.38.220/lighthousepro/</p><p>I get the following error message</p><p>500 - Internal server error.<br>There is a problem with the resource you are looking for, and it cannot be displayed.</p><p>Any tips on how to address and get this working will be greatly appreciated.</p><p>Regards</p><p>Peter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725781">21</a> by Raymond Camden
		posted on 5/15/2013 at 7:05 PM
		</div>
		<div class="comment_text"><p>Do you have a ColdFusion mapping for modelglue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725782">22</a> by Peter Tanswell
		posted on 5/15/2013 at 7:31 PM
		</div>
		<div class="comment_text"><p>Hi there</p><p>I added the mapping in CF Administrator -  for both ModelGlue and also ColdSpring</p><p>/ModelGlue and /Coldspring</p><p>I now get a totally different error message</p><p>An error occurred when performing a file operation read on file:</p><p>C:/inetpub/wwwroot/lighthousepro/config/ColdSpring.xml.cfm</p><p>It appears as though acces maybe denied?</p><p>Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725790">23</a> by Raymond Camden
		posted on 5/15/2013 at 7:34 PM
		</div>
		<div class="comment_text"><p>Yeah, check to ensure it isn't marked read only or has some other block on it. If CF is running as a user, ensure that user has read access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725791">24</a> by Peter Tanswell
		posted on 5/15/2013 at 7:42 PM
		</div>
		<div class="comment_text"><p>I'm stumped - properties appear to be OK and access appears to be OK.</p><p>Not sure now - I cannot see what the issue is that is preventing it working.</p><p>I could give you access to the server if you wanted a quick look to see if you could rectify the issue.</p><p>I expect its is something that I have overlooked but just cannot see what it is.</p><p>Can email me at the email address I included.</p><p>Thanks in advance</p><p>P</p><p>P.S. Its 2am here and I have an important meeting tomorrow and am hoping to display this application if it is working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725796">25</a> by Raymond Camden
		posted on 5/15/2013 at 8:22 PM
		</div>
		<div class="comment_text"><p>All I can think of is to build a CFM, outside of LHP, that tries to read the same file. If _that_ works, then we are misreading the error and it is something else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725798">26</a> by Peter Tanswell
		posted on 5/17/2013 at 4:24 AM
		</div>
		<div class="comment_text"><p>Hi there</p><p>I did another install of the application (this time on my laptop) which also has coldfusion running on it.  I get the exact same message so am thinking perhaps it is something that I have done incorrectly in the overall setup and configuration.</p><p>Perhaps you can email directly on peter.tanswell@cleverminds.com.au re possible ideas etc</p><p>Thanks in advance.</p><p>P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725799">27</a> by Alan Holden
		posted on 9/20/2013 at 11:33 PM
		</div>
		<div class="comment_text"><p>I can find little documentation on the Lighthouse "incoming mail" features. Which of the following statements are true?</p><p>A. You can create a brand new issue by sending an email to a Lighthouse address.<br>B. If you REPLY to a Lighthouse-generated issue notice email, then Lighthouse will add your reply as an additional comment.<br>C. You can REPLY  to a Lighthouse-generated issue notice email, and somehow change the variables within the issue.<br>D. The answers I seek are actually contained within documentation, I just haven't found it yet.</p><p>If I needed to make one of these statements true, to what section of your project should I direct my attention?</p><p>Many thanks, see you in October...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725797">28</a> by Raymond Camden
		posted on 9/21/2013 at 3:25 PM
		</div>
		<div class="comment_text"><p>A) Yes.<br>B) No.<br>C) No.<br>D) Well, I don't say B and C are possible, but I don't say they are impossible.</p></div>
	</div>
</div>
		