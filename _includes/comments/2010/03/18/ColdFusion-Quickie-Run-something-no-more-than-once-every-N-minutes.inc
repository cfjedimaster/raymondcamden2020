
<div class="comment" id="c_1713722701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722701">1</a> by SuperAlly
		posted on 3/18/2010 at 11:09 PM
		</div>
		<div class="comment_text"><p>I think this might just help with refreshing my Application variable for my round robin display :)<br>Thanks yet again Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722707">2</a> by spills
		posted on 3/19/2010 at 12:20 AM
		</div>
		<div class="comment_text"><p>Ok, I thought you have to have a named lock for this to properly avoid race conditions because if you had a another "scope" lock running at the same it would take precedence?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722708">3</a> by Raymond Camden
		posted on 3/19/2010 at 12:24 AM
		</div>
		<div class="comment_text"><p>@Spills: When working with a scoped variable, you make use of the scoped lock. When dealing with other things, like files for example that you want to single thread access to, you would use a named lock.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722795">4</a> by spill
		posted on 3/19/2010 at 12:38 AM
		</div>
		<div class="comment_text"><p>Thanks for the quick explanation Ray. One more question about nested locks, I thought when mixing the cflock type i.e. "readonly or exclusive" the next lock can be overriden by the first lock type in some cases?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722796">5</a> by Raymond Camden
		posted on 3/19/2010 at 12:41 AM
		</div>
		<div class="comment_text"><p>I'm not mixing them. I'm using a readOnly lock to see if I _need_ to do the work. The exclusive lock is where the work is actually done. So you have a 'gentler' lock up front, and the harder, single thread only lock, is run only when we THINK we need to do stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722794">6</a> by spills
		posted on 3/19/2010 at 12:45 AM
		</div>
		<div class="comment_text"><p>Sorry, I realize that you are not nesting your locks, just more curious as I recently inherited an application that has a ton of cflock code and lots of it is nested. I suspect the great majority of it is not even needed but just trying to get a handle on it.</p><p>Thanks for your great blog!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722799">7</a> by Raymond Camden
		posted on 3/19/2010 at 12:48 AM
		</div>
		<div class="comment_text"><p>In the "old days" (CF5 and earlier), you had to go lock crazy or your server would (probably) crash and burn. I still see a lot of 'over locking' - hence my intentional example w/o locks. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722797">8</a> by Michael Williams
		posted on 3/19/2010 at 4:50 AM
		</div>
		<div class="comment_text"><p>How do you stop it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722798">9</a> by Raymond Camden
		posted on 3/19/2010 at 5:05 AM
		</div>
		<div class="comment_text"><p>You don't. :)</p></div>
	</div>
</div>
		