
<div class="comment" id="c_1713655899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655899">1</a> by Tom Mollerus
		posted on 8/7/2006 at 8:38 PM
		</div>
		<div class="comment_text"><p>Ryan,</p><p>Ray has the technical details covered for turning on what I'll refer to as "maintance mode"; I'll add my two cents on what to show the public.  When our site is in maintenance mode, we redirect to an HTML page which shows a nicely-formatted page telling the user that we're undergoing planned maintenance and that they should check back in a little while. Note that I'm calling an HTML page just in case the maintenance is disrupting the performance of the CF server. There's also a meta-refresh in the HTML page set for 10 minutes, so that when we turn maintenance mode back off people who have the maintenance page in their browser will be returned to the working site.</p><p>See <a href="http://disq.us/url?url=http%3A%2F%2Fwww.mystockoptions.com%2Fmaintenance.html%3A0dky3rdnxw29x8UJqy-81bRziaI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mystockoptions.com/maintenance.html">http://www.mystockoptions.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655917">2</a> by Raymond Camden
		posted on 8/7/2006 at 8:47 PM
		</div>
		<div class="comment_text"><p>Tom, that auto-refresh is a darn smart idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655913">3</a> by Cedric Villat
		posted on 8/8/2006 at 12:29 AM
		</div>
		<div class="comment_text"><p>You could also create a maintenance.cfm file when you are running your maintenance script, then just check for it's existence. Then, when you are done, simply delete the file. This would also eliminate the timeout problem Ray mentioned.</p><p>Plus you save a bit of time, since you don't care about the contents of the file as you would in an .ini or .xml file, you just care about if it exists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655912">4</a> by Raymond Camden
		posted on 8/8/2006 at 12:32 AM
		</div>
		<div class="comment_text"><p>Well typically you still need an ini/xml file for config information anyway, so I wouldn't say you don't care. The issue with this approach is that it requires the client to ftp, which, for many clients, is too much work. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655916">5</a> by Cedric Villat
		posted on 8/8/2006 at 1:36 AM
		</div>
		<div class="comment_text"><p>You don't HAVE to FTP :) You could have the admin interface create an empty file for you, and then delete it afterwards. But I agree you still have config information, so its not much of a savings, but it's an alternative.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655914">6</a> by Dale Fraser
		posted on 8/8/2006 at 4:35 AM
		</div>
		<div class="comment_text"><p>Here is a real easy way.</p><p>In application.cfm</p><p>put this<br>&lt;cfparam name="application.shutdown" default="false" /&gt;<br>&lt;cfif isDefined('url.shutdown')&gt;<br>    &lt;cfset application.shutdown = url.shutdown /&gt;<br>&lt;/cfif&gt;<br>&lt;cfif application.shutdown&gt;<br>    Sorry Site Undergoing Maintenance<br>    &lt;cfabort /&gt;<br>&lt;/cfif&gt;</p><p>Easy? Then to shutdown your site, from any page just append a url paramater.</p><p>&amp;shutdown=true</p><p>When it's ready to go again do</p><p>&amp;shutdown=false</p><p>Now if your worried about security, add some IP checking or similar, but this is real easy, no admin pages etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655918">7</a> by Raymond Camden
		posted on 8/8/2006 at 4:54 AM
		</div>
		<div class="comment_text"><p>My objection to this though is that if the server reboots, the application var will reset. I believe the original writer wanted something that would stick until, um, unstuck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655915">8</a> by Dale Fraser
		posted on 8/8/2006 at 5:07 AM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>I don't see any mention of a need to reboot the server. But if you did, you could use the same method and just create a file / delete a file when the url paramater was switched.</p><p>Add an additional block using if fileExists to set the initial value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655919">9</a> by Raymond Camden
		posted on 8/8/2006 at 5:44 AM
		</div>
		<div class="comment_text"><p>The user said, indefinitely, which to me means forever. ;)</p></div>
	</div>
</div>
		