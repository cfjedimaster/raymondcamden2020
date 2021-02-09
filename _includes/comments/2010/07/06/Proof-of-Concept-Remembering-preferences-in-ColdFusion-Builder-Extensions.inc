
<div class="comment" id="c_1713724950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724950">1</a> by Steve Bryant
		posted on 7/6/2010 at 6:25 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Any reason why you didn't use an ini file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724956">2</a> by Raymond Camden
		posted on 7/6/2010 at 6:30 PM
		</div>
		<div class="comment_text"><p>Issues w/ international chars. I'm switching from INI to XML for BlogCFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724955">3</a> by Danilo Celic
		posted on 7/6/2010 at 6:44 PM
		</div>
		<div class="comment_text"><p>Doesn't ColdFusion have native support for reading/writing to file based databases (Derby/SQLite)?</p><p>Seems to me that that would allow for saving of the settings, and handle the locking and be adequate for performance, assuming you don't have too many users. And with CF9 having Hibernate built in, it seems that getting and setting of those values should be fairly easy (he says not having tried those features yet).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724958">4</a> by Raymond Camden
		posted on 7/6/2010 at 6:46 PM
		</div>
		<div class="comment_text"><p>Um - I mentioned that above. :) CF does support using Derby, but only via DSNs. You _can_ create a DSN with the Admin API, but I thought that was overkill for simple preferences.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724957">5</a> by Danilo Celic
		posted on 7/6/2010 at 6:53 PM
		</div>
		<div class="comment_text"><p>Huh, I read through twice to be sure before I made my post and I guess I missed it both times. Sorry about that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724960">6</a> by Raymond Camden
		posted on 7/6/2010 at 6:54 PM
		</div>
		<div class="comment_text"><p>You should be. I never do that. Ever. Seriously.</p><p>/duck</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724963">7</a> by Steve Bryant
		posted on 7/6/2010 at 6:58 PM
		</div>
		<div class="comment_text"><p>I hadn't tried using international characters with an ini file before. Good to know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724964">8</a> by Raymond Camden
		posted on 7/6/2010 at 7:00 PM
		</div>
		<div class="comment_text"><p>As just an FYI, in case someone is considering BlogCFC and is now _not_, BlogCFC supports passing your config variables via a CFML structure. So it is definitely possible to do international settings for BlogCFC.</p><p>Just sharing...</p></div>
	</div>
</div>
		