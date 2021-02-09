
<div class="comment" id="c_1713666601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666601">1</a> by Justice
		posted on 6/7/2007 at 4:06 PM
		</div>
		<div class="comment_text"><p>Mmmmm, I can see this mashed up with a directory watcher gateway watching your code for changes and re-loading when a file gets tweaked.  This would really be awesome for multiple CF servers sharing a codebase on a SAN or other shared source. Then you could enable trusted cache to lower bandwidth to your shared source, and any updates will auto-refresh.  Now I hope the upgrade price for CF8 Enterprise doesnt break the bank, as I have to somehow sell 2 copies to a customer and 1 copy to the company I work for =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666602">2</a> by Raymond Camden
		posted on 6/7/2007 at 5:11 PM
		</div>
		<div class="comment_text"><p>My only concern here would be the performance of having CF watch your entire box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666605">3</a> by Tom Mollerus
		posted on 6/7/2007 at 6:22 PM
		</div>
		<div class="comment_text"><p>I'll chime in-- I'd be interested in using a wrapped-up version of that API (what a smart idea on Adobe's part to allow cache-refresh for individual files). IMHO, the interface for the tool would contain both a text entry area where you could quickly paste in the path for a single file and a file dialog box for selecting multiple files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666603">4</a> by Raymond Camden
		posted on 6/7/2007 at 6:51 PM
		</div>
		<div class="comment_text"><p>What I'm thinking of making is maybe a tool that combines a few things. I don't see this as necessarily being an app to itself, if thats makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666604">5</a> by Tom Mollerus
		posted on 6/7/2007 at 6:58 PM
		</div>
		<div class="comment_text"><p>@Ray, I agree that it wouldn't be an app to itself, but it would be nice if it could offer some sort of form interface so that you could just wrap it with an existing admin application. I'm happy to contribute code if you like.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666607">6</a> by Raymond Camden
		posted on 6/7/2007 at 7:05 PM
		</div>
		<div class="comment_text"><p>What are you saying - my form wasn't pretty? ;) Seriously though - I'd accept any suggestions in that area.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666606">7</a> by Douglas Knudsen
		posted on 6/7/2007 at 8:49 PM
		</div>
		<div class="comment_text"><p>I have not had the chance to play with this, but oh so nice it looks.  Curious, does cfide.adminapi.administrator.login now reuire a username?  With the addition of multiple users accessing cfadmin I'd think it should.</p><p>DK</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666610">8</a> by Raymond Camden
		posted on 6/7/2007 at 10:10 PM
		</div>
		<div class="comment_text"><p>Don't forget you can view the Admin API CFCs in your browser.  If you do - you will see that username is an optional argument. The CF Admin _can_ use a username, but doesn't have to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666609">9</a> by Michael Long
		posted on 6/8/2007 at 2:47 AM
		</div>
		<div class="comment_text"><p>Wonder what happens if you do this in application.cfm? If you passed a url parameter (trusted=0) could you clear the current page before the page is executed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666608">10</a> by Raymond Camden
		posted on 6/8/2007 at 5:08 AM
		</div>
		<div class="comment_text"><p>You would rip a hole in the space time continuum and end the universe as we know it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666612">11</a> by Michael Long
		posted on 6/8/2007 at 5:12 AM
		</div>
		<div class="comment_text"><p>COOL!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666613">12</a> by David Whiterod
		posted on 6/8/2007 at 8:08 AM
		</div>
		<div class="comment_text"><p>... if it didn't affect the space time continuum it would (at least) cause a tremor in The Force ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666611">13</a> by Will
		posted on 12/14/2007 at 8:04 AM
		</div>
		<div class="comment_text"><p>Wow, Charlie did his presentation on hidden gems for our user group and he very briefly mentioned this feature. A Google search of course returned your blog entry (which I read religiously so I'm not sure how I missed it the first time around). This is absolutely a to die for feature and I would love to see an admin add-on for it a la SpoolMail. I know you made this post quite some time ago but if you are still thinking about adding it, please do!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666614">14</a> by Raymond Camden
		posted on 12/14/2007 at 8:18 AM
		</div>
		<div class="comment_text"><p>I suppose I could wrap it up sometime. I'm trying to _not_ release so many projects as it gives me too much to do. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666615">15</a> by Yaron Kohn
		posted on 8/4/2009 at 8:19 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Can we pass a directory or does it have to be a list of files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666618">16</a> by Raymond Camden
		posted on 8/5/2009 at 1:52 AM
		</div>
		<div class="comment_text"><p>It has to be a list of files. Just use my Cache Cleaner admin extension. Makes it easy. You can enter a directory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666617">17</a> by Ronald
		posted on 11/5/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>Is there also a way to clear the cached queries (CACHEDWITHIN) programatically through this api? I only find a solution that has been deprecated with MX upwards.</p><p>Thanks for an answer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666619">18</a> by Raymond Camden
		posted on 11/6/2009 at 5:28 PM
		</div>
		<div class="comment_text"><p>I looked at the runtime cfc (/CFIDE/adminapi/runtime.cfc) and did not see it. You can scan the other CFCs but I don't think this is in there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666621">19</a> by Craig M. Rosenblum
		posted on 8/27/2010 at 8:33 PM
		</div>
		<div class="comment_text"><p>Is there any way on cf8 to get a list of scheduled tasks, using the admin api?</p><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666622">20</a> by Raymond Camden
		posted on 8/27/2010 at 8:39 PM
		</div>
		<div class="comment_text"><p>I just scanned the CFCs (don't forget you can too - they are self-documenting) and I didn't see anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666623">21</a> by Craig M. Rosenblum
		posted on 8/27/2010 at 9:21 PM
		</div>
		<div class="comment_text"><p>I was reading from this site, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfexecute.com%2Fpage%2Fadmin-api-documentation%2Fservermanager-cfc%3Aj2KEjtVltCSnEVTdYUEu4Uj5HBs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfexecute.com/page/admin-api-documentation/servermanager-cfc">http://www.cfexecute.com/pa...</a>, which talks about the admin api, and the servermanager which has getScheduledTasks. But that object or api method seems unavailable on cf8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666624">22</a> by Raymond Camden
		posted on 8/27/2010 at 9:26 PM
		</div>
		<div class="comment_text"><p>I'd say file an ER.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666627">23</a> by Scott
		posted on 11/23/2010 at 1:46 AM
		</div>
		<div class="comment_text"><p>Excellent info Raymond!</p><p>I am not a developer, but I do have to administer a few CF servers.</p><p>I am being asked by the developers to clear the cache after pushes on a frequest basis, and I want to automate this.  First, I normally just log into the admin console, and hit the "clear cache" button.  I dont care about clearing the cache on a "file by file" or "directory" basis :-)</p><p>Can this be accomplished by writing (and calling) a .cfm file with the (second to last) last two lines of your script above?:</p><p>ex:</p><p>&lt;cfinvoke component="cfide.adminapi.administrator" method="login" adminPassword="admin"&gt;<br>&lt;cfinvoke component="cfide.adminapi.runtime" method="clearTrustedCache" templateList="#fileList#"&gt;</p><p>(MInus the "templateList="#fileList#"" option)?</p><p>I would like to write a command line script that does this on each of my 4 nodes - perhaps using wget or something.</p><p>Thanks you very much for this info!!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666633">24</a> by Raymond Camden
		posted on 11/23/2010 at 1:53 AM
		</div>
		<div class="comment_text"><p>Yep, it should work just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666628">25</a> by Scott P
		posted on 1/20/2011 at 6:26 AM
		</div>
		<div class="comment_text"><p>Ray - just posting anyone stumbling for answer if they have trouble.  I had an app that I couldn't get cleared using the code (or any similar).  Turns out it was something in application.cfc preventing the login from working.  Adding a blank application.cfc in subfolder with the code to clear the cache fixed it.  Just FYI....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666626">26</a> by Raymond Camden
		posted on 1/20/2011 at 6:30 AM
		</div>
		<div class="comment_text"><p>Did the other app.cfc make use of cflogin? There is a bug with the Admin API where it conflicts with an existing cflogin being active.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666630">27</a> by Scott P
		posted on 1/20/2011 at 7:27 AM
		</div>
		<div class="comment_text"><p>Of course there is....yep.  That was it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666632">28</a> by Eric Belair
		posted on 6/19/2013 at 6:58 PM
		</div>
		<div class="comment_text"><p>Hi ray, I currently use a URL parameter in onRequestStart() to initiate a call to onApplicationStart() to reset Application parameters and clear the query cache:</p><p>        &lt;!--- Clear the query cache ---&gt;<br>        &lt;cfobjectcache action="clear" /&gt;</p><p>Do you see any issue with adding the following in onApplicationStart()?</p><p>        &lt;!--- Clear template cache ---&gt;<br>        &lt;cfinvoke<br>            component="cfide.adminapi.administrator"<br>            method="login"<br>            adminPassword="mypasswordhere" /&gt;<br>        &lt;cfinvoke<br>            component="cfide.adminapi.runtime"<br>            method="clearTrustedCache" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666631">29</a> by Raymond Camden
		posted on 6/19/2013 at 7:33 PM
		</div>
		<div class="comment_text"><p>Not really, nope.</p></div>
	</div>
</div>
		