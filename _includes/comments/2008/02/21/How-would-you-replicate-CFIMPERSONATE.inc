
<div class="comment" id="c_1713677302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677302">1</a> by Tom Mollerus
		posted on 2/21/2008 at 11:48 PM
		</div>
		<div class="comment_text"><p>OK, I can think of one way that might work, at least for a *nix box: read in a text file (which lives outside of the web root, of course) that contains a username and password. Then run cfexecute with a sudo command to it to run as another user. For example, "sudo -u [username] -S [password] -s [command]".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677325">2</a> by Brian Swartzfager
		posted on 2/21/2008 at 11:57 PM
		</div>
		<div class="comment_text"><p>I have a few CF apps where a single user can have different roles, so a technical administrator can take on the role of a power user by using a role-switching tool in the app.</p><p>When the user logs in, a User object is created for them and stored in session.  Two of the properties of the object are currentRole (which denotes the current role of the user) and possibleRoles (a comma-delimited list of all the roles the user is authorized for).  When the user goes to the role-switching tool, the list of possibleRoles is parsed and displayed, and the user can choose a different role, and that role replaces the value in their currentRole.</p><p>Your reader would have to do it a bit differently since they want to let the user take on a different individual identity, so they'd want to have a third property ("trueUserId") that doesn't change in order to preserve the  user's real unique ID, but the principle is similar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677321">3</a> by Raymond Camden
		posted on 2/22/2008 at 12:02 AM
		</div>
		<div class="comment_text"><p>brian, sorry if this wasn't clear - but this question pertains to OS users. Not web site users. Ie, I need CF to act like Windows user Bob, or Linux user Mary. You get the idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677330">4</a> by Brian Swartzfager
		posted on 2/22/2008 at 12:22 AM
		</div>
		<div class="comment_text"><p>Oops, my bad!  But I guess that explains why I was unfamiliar with the cfimpersonate tag: I've never had to mess with users' OS rights.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677333">5</a> by Sammy Larbi
		posted on 2/22/2008 at 12:26 AM
		</div>
		<div class="comment_text"><p>I don't know how to do it with CF, but could you write a DLL in .NET to do the dirty work, and call it using CF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677332">6</a> by john b
		posted on 2/22/2008 at 12:35 AM
		</div>
		<div class="comment_text"><p>what about using the windows RUNAS command from dos via a cfexecute - windows equivant of sudo, pipe the results into a folder CF can read and then access it and clean it up for render....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677334">7</a> by Matt Osbun
		posted on 2/22/2008 at 12:44 AM
		</div>
		<div class="comment_text"><p>IIS-only solution, but you could give is IUSR account access to that folder.  Seems the simplest route.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677335">8</a> by john b
		posted on 2/22/2008 at 1:12 AM
		</div>
		<div class="comment_text"><p>but in that case CF would be running as SYSTEM (assuming it's a default config) so CF wouldn't have access even if IIS did via IUSR.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677342">9</a> by Brian
		posted on 2/22/2008 at 3:14 AM
		</div>
		<div class="comment_text"><p>Build a batch file with the first command of:<br>net use z: \\server\share /user:specialuser password</p><p>then execute it with cfexecute and reference your z drive</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677341">10</a> by Jeremy Prevost
		posted on 2/22/2008 at 6:50 AM
		</div>
		<div class="comment_text"><p>I'd probably run Coldfusion as it's own Windows user (i.e. not the default of 'system') and assign it access to whatever folders you want it to have access to. In fact, that is what we all probably SHOULD be doing anyway...right :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677338">11</a> by Ben Davies
		posted on 2/22/2008 at 7:24 AM
		</div>
		<div class="comment_text"><p>We do what Jeremy suggests and have a special sa_coldfusion domain account. The Coldfusion services run beneath that account. This is a pretty easy workaround but it has some serious problems:</p><p>1. If you need some serious super-user rights, having the CF server possess those rights 100% of the time is troubling in some circumstances.</p><p>2. It puts the emphasis on the application level security to control what the server is doing for which user. When those rights are already managed at the OS or domain level, this is duplication and therefore it can be hard (or worrying) to have to keep application and os/domain permissions in sync.</p><p>3. Sometimes the scale of rights required is too huge and/or impossible to maintain. For example, if I want to use the CFEXCHANGE tags for a range of mailboxes without delegation I need to harass users for the domain passwords per session (No way I want to store it). Which seems stupid when the IIS security has already authenticated the user. The only way to avoid this is to create a super domain account with access to all mailboxes you are interested in delegated. For a large number of users this would never be approved.</p><p>4. For some tags the process user isn't even applied to the operation and usernames/passwords need to be supplied each time. This is awful - I hate passwords appearing in cleartext in my applications.</p><p>Some of these problems can be coded around. For example, if you nominate a domain group as containing members requiring access, you could conceivably keep your application rights in sync with the domain or OS simply by looking up the domain group or using CFNTAuthenticate.</p><p>The interesting thing is that whilst my problems are pre-dominantly Windows related, the same problems don't exist in the ASP/IIS world. In that realm, it appears you can actually impersonate the currently user (without needing any passwords) because Windows knows it can trust IIS. But CF can't be a trusted link in the chain of ISS - Coldfusion - OS/network</p><p>So I don't have any real solutions. Only problems. But I'm interested in other people's approaches.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677340">12</a> by Scott P
		posted on 2/22/2008 at 7:53 AM
		</div>
		<div class="comment_text"><p>Ben hits on my issue.  I know that I can create another service account and give it permissions.  What I would like to see is cffile, cfdirectory, and cfcontent have a username and password attribute so we could pass in the user we want it run as.  An example of the need would be accessing the user's home directory in a windows environment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677339">13</a> by DanaK
		posted on 2/22/2008 at 8:54 PM
		</div>
		<div class="comment_text"><p>I'd do what Jeremy mentions and give CF its own user to run the services etc. We then isolate that user to whatever permissions they need to avoid spillage. As Ben mentions however, this is really explicit to the environment you are in and the needs of the application/server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677343">14</a> by Pat
		posted on 4/28/2009 at 11:30 PM
		</div>
		<div class="comment_text"><p>So why WAS cfimpersonate removed from MX?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677344">15</a> by Raymond Camden
		posted on 4/28/2009 at 11:37 PM
		</div>
		<div class="comment_text"><p>CF5 and earlier was all C code, MX was a complete rewrite. So I'd assume the code used for cfimpersonate didn't run with Java.</p></div>
	</div>
</div>
		