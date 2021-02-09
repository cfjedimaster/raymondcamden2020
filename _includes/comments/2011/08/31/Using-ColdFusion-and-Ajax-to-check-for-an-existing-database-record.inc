
<div class="comment" id="c_1713734949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734949">1</a> by Martin
		posted on 9/1/2011 at 1:45 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Great post! I was wondering...<br>If you fill in the form and hit enter, won't that submit the form as well - whether the save button is (available &amp;) clicked or not?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734947">2</a> by Raymond Camden
		posted on 9/1/2011 at 3:35 PM
		</div>
		<div class="comment_text"><p>Ah good point. With the one field, it submits anyway. You can fix that. I was thinking the real form would have a few more fields in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734954">3</a> by Joshua Siok
		posted on 9/1/2011 at 11:20 PM
		</div>
		<div class="comment_text"><p>I realize this is just a how-to example and not specific to real world usage, but If you had more than one artist with the same last name, you'd end up returning false, because the recordcount wouldn't be 1.  I would suggest using "return res.recordCount != 0". Thus, any amount of records would return true (indicating the record is already there).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734942">4</a> by Raymond Camden
		posted on 9/1/2011 at 11:23 PM
		</div>
		<div class="comment_text"><p>Well the point was that we don't allow 2 at all, so the db should be safe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734951">5</a> by Claude
		posted on 9/8/2011 at 9:56 PM
		</div>
		<div class="comment_text"><p>The way you wrote your cfc, I notice no cfcomponent tags or cffunction tags. Is this implied or are you writing this in a different fashion?</p><p>love your blog.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734948">6</a> by Raymond Camden
		posted on 9/8/2011 at 10:12 PM
		</div>
		<div class="comment_text"><p>That's the script based form of CFCs. You don't have to use them if you prefer the tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734950">7</a> by Richie
		posted on 2/15/2014 at 1:15 AM
		</div>
		<div class="comment_text"><p>what does this component look like in a tag form??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734955">8</a> by Raymond Camden
		posted on 2/15/2014 at 2:37 AM
		</div>
		<div class="comment_text"><p>Just a regular cfquery tag.</p></div>
	</div>
</div>
		