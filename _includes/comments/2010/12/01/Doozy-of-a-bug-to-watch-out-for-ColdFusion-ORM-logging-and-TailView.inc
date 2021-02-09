
<div class="comment" id="c_1713728052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728052">1</a> by Matt W
		posted on 12/1/2010 at 8:39 PM
		</div>
		<div class="comment_text"><p>Related?<br><a href="http://disq.us/url?url=http%3A%2F%2Fblogs.adobe.com%2Fcfbuilder%2F2010%2F05%2Fcpu_spike_if_tailview_is_kept.html%3AX6hFmhkwuHrjHr-NO-REOUG76UA&amp;cuid=3321886" rel="nofollow noopener" title="http://blogs.adobe.com/cfbuilder/2010/05/cpu_spike_if_tailview_is_kept.html">http://blogs.adobe.com/cfbu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728050">2</a> by Raymond Camden
		posted on 12/1/2010 at 8:50 PM
		</div>
		<div class="comment_text"><p>Possibly. I'll try that. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728033">3</a> by Henry
		posted on 12/2/2010 at 1:25 AM
		</div>
		<div class="comment_text"><p>unfortunately that workaround doesn't always work.  I set it to 10s and it still hangs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728047">4</a> by kiran
		posted on 12/2/2010 at 10:42 AM
		</div>
		<div class="comment_text"><p>Hi If increasing the timeout is not solving the problem. Stop the server from service and start it on the console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728048">5</a> by Raymond Camden
		posted on 12/2/2010 at 4:33 PM
		</div>
		<div class="comment_text"><p>@kirian: I tried restarting CF - it never helped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728053">6</a> by Rob Dudley
		posted on 12/3/2010 at 3:49 PM
		</div>
		<div class="comment_text"><p>I've had strange issues with CFB and locking to the point that it interferes with SubClipse on certain source files.</p><p>Best guess whichever bit of the Java API Eclipse uses for file IO isn't as bullet proof as it needs to be! This is a shame as Tailview is brilliant for debugging from a Windows machine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728054">7</a> by Henry
		posted on 12/21/2010 at 11:21 PM
		</div>
		<div class="comment_text"><p>Got this email today from an email with macromedia domain name (Woot!):</p><p>Subject: Bug 82441 FIXED</p><p>The bug entered on Monday, March 15, 2010 has been marked fixed by Adobe ColdFusion development.</p><p>Product Area:  General-IDE<br>Severity: 2 - Serious (Seriously impedes use of product)</p><p>Fixed In: CF Builder 2.0 ,RC 1, Build 276327</p><p>Description:  jrunsvc.exe hogs CPU (50% of a dual-core CPU, close to 90% in one core @ Mem 1,572K)  when ormsettings.logsql = "true" in Application.cfc, and more than 1 ORM-releated requests are being processed by ColdFusion.  ColdFusion crashed, cannot be restarted.Resolution:restart Windows.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728049">8</a> by Raymond Camden
		posted on 12/22/2010 at 7:02 AM
		</div>
		<div class="comment_text"><p>Nice - thanks for posting that Henry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728055">9</a> by Ryan Arneson
		posted on 4/22/2011 at 8:43 PM
		</div>
		<div class="comment_text"><p>I just got burned by this, I think. Out of the blue my server hung without a response. Checking the logs I could see that ORM would run my update statement but nothing would process after that. I have my server configured through ColdFusion Builder but was not running it through there, and had no logs open in TailView. I was running it through a terminal window. Sure enough though, closing down CFB resolved my issue. After starting it back up everything is still working. I don't know if this is the same issue, but it does seem distantly related.</p></div>
	</div>
</div>
		