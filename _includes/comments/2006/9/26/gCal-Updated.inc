
<div class="comment" id="c_1713657765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657765">1</a> by todd
		posted on 9/27/2006 at 4:48 PM
		</div>
		<div class="comment_text"><p>May want to add reminders to the getEntries return struct??</p><p>Here's how I did it:</p><p>&lt;cfset s.reminder = ""&gt;<br>&lt;cfif structKeyExists(entry, "gd:when") and structKeyExists(entry["gd:when"], "gd:reminder") and structKeyExists(entry["gd:when"]["gd:reminder"].xmlAttributes,"minutes")&gt;<br>  &lt;cfset s.reminder = entry["gd:when"]["gd:reminder"].xmlAttributes.minutes&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657776">2</a> by Raymond Camden
		posted on 9/27/2006 at 5:25 PM
		</div>
		<div class="comment_text"><p>Most excellent. I'm updating the zip right now. Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657780">3</a> by Raymond Camden
		posted on 9/27/2006 at 5:28 PM
		</div>
		<div class="comment_text"><p>The zip is now updated. App is at 1.2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657781">4</a> by Jeffrey Price
		posted on 1/29/2008 at 8:29 AM
		</div>
		<div class="comment_text"><p>Anyone looking for this it is now at RIAForge.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgooglecal.riaforge.org%2F%3ASCTUqhrYzr01jKm7PU5dcxGJZvs&amp;cuid=3321886" rel="nofollow noopener" title="http://googlecal.riaforge.org/">http://googlecal.riaforge.org/</a></p></div>
	</div>
</div>
		