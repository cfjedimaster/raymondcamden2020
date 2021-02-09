
<div class="comment" id="c_1713714130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714130">1</a> by Brad Wood
		posted on 3/25/2009 at 6:42 AM
		</div>
		<div class="comment_text"><p>That's kind of interesting that they bothered to encrypt the password in the XML file, but decrypted it to put in the source of the form.  I assume it's passed back in clear text on form submit too.</p><p>In general though, I would say your server is only as safe as your ColdFusion8\lib directory-- and hopefully you keep that pretty safe  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714115">2</a> by Joshua Curtiss
		posted on 3/25/2009 at 8:53 AM
		</div>
		<div class="comment_text"><p>CF Administrator can work over SSL, so the bit about submitting the password cleartext is partly at the discretion of the person setting up the server. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714134">3</a> by Sid Wing
		posted on 3/25/2009 at 5:01 PM
		</div>
		<div class="comment_text"><p>@Joshua - have they fixed the issue with the Java Applet that "browses" the server for things like Access databases?  That app used to be completely broken if you implemented the Admin under HTTPS</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714135">4</a> by Joshua Curtiss
		posted on 3/25/2009 at 6:47 PM
		</div>
		<div class="comment_text"><p>I don't think so. Honestly, I don't even try anymore, I just manually paste or type in the path. :-)  A minor annoyance, but not something you can't live with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714136">5</a> by DanaK
		posted on 3/26/2009 at 6:46 PM
		</div>
		<div class="comment_text"><p>I can confirm the browsing applet is still borked.</p><p>Between moving the administrator out of the webroot, setting up its own iis site and using SSL.... there are plenty of options available to lock things down nice.</p><p>We have our administrator setup to only respond to the local loopback only currently. If they get around all that, you have bigger problems anyhow?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714137">6</a> by BC
		posted on 3/27/2009 at 11:49 PM
		</div>
		<div class="comment_text"><p>A passwordless solution for a windows server with pubilc internet IP address and NAT translation to private IP address for the IIS web sites site could be as follows:</p><p>In IIS - Deny access to the scheduled task page(s) to all except the internal IP address. Then in CF Admin, call your task page via the internal IP rather than domain name (http://192.168.1.x/myScheduledTask.cfm)</p></div>
	</div>
</div>
		