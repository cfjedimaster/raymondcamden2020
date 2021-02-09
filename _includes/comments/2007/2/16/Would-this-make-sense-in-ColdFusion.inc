
<div class="comment" id="c_1713662370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662370">1</a> by atomi
		posted on 2/17/2007 at 4:09 AM
		</div>
		<div class="comment_text"><p>try asking the magic eight-ball.<br><a href="http://disq.us/url?url=http%3A%2F%2Fweb.ics.purdue.edu%2F%7Essanty%2Fcgi-bin%2Feightball.cgi%3ApQ_i73PB9SgjY4UnhUPjrQlcPws&amp;cuid=3321886" rel="nofollow noopener" title="http://web.ics.purdue.edu/~ssanty/cgi-bin/eightball.cgi">http://web.ics.purdue.edu/~...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662359">2</a> by John Ramon
		posted on 2/17/2007 at 4:18 AM
		</div>
		<div class="comment_text"><p>Makes complete sense I wish there was something like that as we have ran into this on on production server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662362">3</a> by Terrence Ryan
		posted on 2/17/2007 at 4:45 AM
		</div>
		<div class="comment_text"><p>My gut feeling is that this case is a little too specific for Adobe to put a lot of effort into, considering that it doesn't take a tremendous amount of time to restart the server if you have to.</p><p>I've run into this on a smaller scale with updating multiple versions of the same code running across a cluster.</p><p>It might be pretty ghetto but my solution is to have an application reset url variable that my applications listen for.  Then when I publish updates, I call those urls programmatically.</p><p>Although come to think of it, this might do it:</p><p>&lt;cfset serverFactory = CreateObject("java", "coldfusion.server.ServiceFactory") /&gt;<br>&lt;cfset runTimeService = serverFactory.RuntimeService /&gt;<br>&lt;cfset runTimeService.ReStart() /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662372">4</a> by Rick
		posted on 2/17/2007 at 5:40 AM
		</div>
		<div class="comment_text"><p>This is something I would use for sure. Currently I do something similar to what Terrence has suggested in order to refresh the application.  I find I need this enough that it would be nice if it was some sort of easy to use feature of CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662363">5</a> by Bernie Dolan
		posted on 2/17/2007 at 6:28 AM
		</div>
		<div class="comment_text"><p>Agreed.  It would be particularly nice if you could see a list of the currently running applications (by name) and simply cherry pick the ones whose Application / Session scopes you wanted to flush (including the ability to "flush all").</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662367">6</a> by Phil Duba
		posted on 2/17/2007 at 6:42 AM
		</div>
		<div class="comment_text"><p>Ray, where I used to work we had tool that did your "cheating" way of flushing Application scopes by picking the name. I could see Adobe giving something like this in the administrator, but there's still enough flexibility within CF itself to build a small admin tool to do it as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662366">7</a> by Nathan Dintenfass
		posted on 2/17/2007 at 9:59 AM
		</div>
		<div class="comment_text"><p>Such a feature would need to be locked down by default or risk causing massive problems on shared hosts (where MANY CF sites live).</p><p>Perhaps you should be keeping a server-scoped lookup of the application names, then you can easily loop over them and clear them out manually when you want to do your update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662368">8</a> by Daniel Roberts
		posted on 2/17/2007 at 6:47 PM
		</div>
		<div class="comment_text"><p>Put revision numbers in server scope. Applications and sessions compare the revision number they have to server's. If server revision number is higher then application is reloaded, and persistent data cleared or manipulated if necessary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662369">9</a> by Christopher Wigginton
		posted on 2/17/2007 at 7:46 PM
		</div>
		<div class="comment_text"><p>Giving that much control at the CFIDE level is about the same power as being able to restart the ColdFusion server, so I'd probably vote to just restart the server instance.</p><p>It's not so much a scope issue as it is a version issue. The ideal solution is a version config that the shared applications read every time, If the versions differ, then the instance scope has to be refreshed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662376">10</a> by Joe FitzGerald
		posted on 2/17/2007 at 8:52 PM
		</div>
		<div class="comment_text"><p>I'd agree it sounds like more of a versioning issue than anything else.  When I implement common code, each release is labelled with a version which each application refers to explicitly.  This gives me the flexibility to permit applications to use different versions of the shared component at the same time.</p><p>My applications all have an ability to refresh the application via the admin.  Each application knows what it needs to refresh and takes care of itself.</p><p>When I'm pushing up code, that means a version of something has changed.  If it was common code, I have to update each application that uses it to take advantage of the new release (which is usually just a config setting in my coldspring config).</p><p>I pretty much never restart the CF service directly and I would be worried about making it any easier than it already is to accomplish that behavior.</p><p>But that's just me!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662373">11</a> by Rick Root
		posted on 2/19/2007 at 12:19 AM
		</div>
		<div class="comment_text"><p>Personally, there are times when I'd like to have scoped variables shared across applications and even across instances of coldfusion.  Right now, *ALL* of the applications running on the web site I manage at Duke use a single application.cfm file.  It's a fairly large application.cfm =)  Has lots of things in it like:</p><p>&lt;cfif getbasetemplatepath() contains "wwwroot/tools/directory"&gt;<br>   &lt;!--- application.cfm code here for the directory app ---&gt;<br>&lt;cfelseif ...&gt;</p><p>Sweet, my captcha key is GNR!  Paradise City!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662375">12</a> by Dallas
		posted on 2/19/2007 at 10:31 PM
		</div>
		<div class="comment_text"><p>You bet! Like you could log into cf administrator and maybe click on 'Server Setting'/'Applications'(whatever)' and a page would display all currently running sessions and applications, name and date initialized, etc... with some functionality like reinit, kill, etc...Would so totally rock!</p><p>Seems like a responsible request.</p></div>
	</div>
</div>
		