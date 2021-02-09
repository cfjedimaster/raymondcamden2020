
<div class="comment" id="c_1713678693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678693">1</a> by Marc Hughes
		posted on 3/31/2008 at 7:38 PM
		</div>
		<div class="comment_text"><p>No idea what type of site that is so the use-cases might be fine, but if a user has to wait an hour to get a forgotten-password email they might get a bit annoyed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678710">2</a> by Raymond Camden
		posted on 3/31/2008 at 7:41 PM
		</div>
		<div class="comment_text"><p>Yeah, that can be a problem. You could divide emails into those that can go out later and those that should be queued, but then the host may still get mad. You would have to remember how many emails were sent immediately.</p><p>You know - I'd REALLY consider switching hosts honestly. I can understand the host wanting to be careful, but there should be a better way to handle it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678711">3</a> by Tom Mollerus
		posted on 3/31/2008 at 7:45 PM
		</div>
		<div class="comment_text"><p>If the user has access to a separate SMTP host, they could always specify that other host in the cfmail tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678712">4</a> by Patrick
		posted on 3/31/2008 at 7:54 PM
		</div>
		<div class="comment_text"><p>Change web hosts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678722">5</a> by James Moberg
		posted on 3/31/2008 at 7:57 PM
		</div>
		<div class="comment_text"><p>If you are already sending email from localhost (and not your provider's mailserver) and you can install software on the server, consider using the free version of Surgemail.  It's pretty robust and you can queue as much mail as you want and set it up to only send x messages per hour.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.netwinsite.com%2Fsurgemail%2F%3A04SqjZaB_9jKCaFbwDuWxJkmn0U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.netwinsite.com/surgemail/">http://www.netwinsite.com/s...</a></p><p>This will allow you to queue all messages with ColdFusion and then forget about it and let the mailserver handle it.</p><p>Surgemail installs on multiple OSes, is extremely robust and the licensing is the best we've found. (The free trial version is limited to about 2,000 outbound messages an hour.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678714">6</a> by Raul Riera
		posted on 3/31/2008 at 8:17 PM
		</div>
		<div class="comment_text"><p>Actually I ran into this problem with <a href="http://disq.us/url?url=http%3A%2F%2FCrystaltech.com%3AyFg1ctx3veLvBdPXaNOHGxOKSUA&amp;cuid=3321886" rel="nofollow noopener" title="Crystaltech.com">Crystaltech.com</a> and <a href="http://disq.us/url?url=http%3A%2F%2FHostnexus.com%3AQaKr7wZmTwCujGP3pmXGtEWMjFo&amp;cuid=3321886" rel="nofollow noopener" title="Hostnexus.com">Hostnexus.com</a> but I dont think there is a shared provider out there that wont limit the amount of blunk emails. I sorted this out doing exactly what Ray suggested.</p><p>On Crystaltech unfortunally you cant use cfschedule, so I created a CFM page that is called from their schedule consule (they are just using the Admin API).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678726">7</a> by James Moberg
		posted on 3/31/2008 at 8:37 PM
		</div>
		<div class="comment_text"><p>We had issues with cfschedule working reliable and with complex schedules that we needed to establish (like M-F only).  We also didn't want to waste a thread to run another thread.</p><p>If you need to run something on a scheduled basis, you could set up a script and then use an external program to initiate the process.</p><p>For windows, we finally decided to use the AT schedule command to run CURL (a command-line CFHTTP-like program).  CURL won't timeout or waste a CF thread... and it could be run from any computer that we desired.<br><a href="http://disq.us/url?url=http%3A%2F%2Fcurl.haxx.se%2F%3Agm3H_ze-eij8AQhZ4T50uVd9VR8&amp;cuid=3321886" rel="nofollow noopener" title="http://curl.haxx.se/">http://curl.haxx.se/</a></p><p>If you wanted to log the times that it runs, modify the server script to write to a logfile indicating which process was run and the time it was run.  (I think I'm using a modified version of Ben Forta's CF_Log customtag to log the run times.)</p><p>You can also parse the contents of the server response and email it using Blat (command-line CFMail-like program):<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.blat.net%2F%3AOYUZ4PpMSV2PiaCj1pwB0f7fKIE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.blat.net/">http://www.blat.net/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678720">8</a> by Ken Ford
		posted on 3/31/2008 at 8:54 PM
		</div>
		<div class="comment_text"><p>I use the method from this post:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmysecretbase.com%2Fslowing_down_cfmail_2006.cfm%3ALTA5DfgtMFWnwUElSERvFUUZvFY&amp;cuid=3321886" rel="nofollow noopener" title="http://mysecretbase.com/slowing_down_cfmail_2006.cfm">http://mysecretbase.com/slo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678698">9</a> by jay
		posted on 3/31/2008 at 11:58 PM
		</div>
		<div class="comment_text"><p>We've done a lot of work on this. The database method Ray describes has worked great for us. I would advise against cf scheduler if your using an older version of CF as it can prove inconsistent. Although with cf7+ we've had no problems.</p><p>Nice thing with using the database to store emails is you can use a date column to schedule emails for later sending or use a status column to mark an email as sent. This gives you a good search-able archive history of mail sent.</p><p>Also one feature that's really useful with this is the ability to integrate content management. So you can insert into the database with a reference to a static text email and then use the scheduled cfscript to parse the email text for special characters.....Thus you can personalize your emails.</p><p>eg...</p><p>Dear ^givenname^...</p><p>As Ray mentions tho it's well worth adding in some monitoring because if the schedule, script or mailserver fail you want to know about it pdq. This can be as simple or as complex as you want.</p><p>Oh and good point about password reminders, you don't always have to use the system tho. A simple in line cfmail bypasses any delay or just run the scheduler more frequently.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678723">10</a> by Steve
		posted on 4/3/2008 at 8:15 PM
		</div>
		<div class="comment_text"><p>I just spent 5 days figuring this issue out... and my solution was to implement this very simple solution found here:  A great tutorial on <a href="http://disq.us/url?url=http%3A%2F%2Feasycfm.com%3AewGpkFBzkDc5Kw1zDh88NCuBb1Q&amp;cuid=3321886" rel="nofollow noopener" title="easycfm.com">easycfm.com</a> <br>Read this:<br><a href="http://disq.us/url?url=http%3A%2F%2Ftutorial256.easycfm.com%2F%3AppQKsHArcOFSd0EjyNZt_aw-w1c&amp;cuid=3321886" rel="nofollow noopener" title="http://tutorial256.easycfm.com/">http://tutorial256.easycfm....</a></p><p>Then this:<br><a href="http://disq.us/url?url=http%3A%2F%2Feasycfm.com%2Fforums%2Fviewmessages.cfm%3FForum%3D12%26Topic%3D12928%26srow%3D21%26erow%3D40%3AcawW8O6WG_tBY54Tb0BDD3AmVow&amp;cuid=3321886" rel="nofollow noopener" title="http://easycfm.com/forums/viewmessages.cfm?Forum=12&amp;Topic=12928&amp;srow=21&amp;erow=40">http://easycfm.com/forums/v...</a></p></div>
	</div>
</div>
		