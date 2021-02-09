
<div class="comment" id="c_1713743067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743067">1</a> by Randy Edmunds
		posted on 10/2/2012 at 6:43 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Very cool!</p><p>There's a pull request that should get merged any day now to allow re-sizing of the bottom panel height, so that should make a big difference for this (or any) extension that uses the bottom panel.</p><p>The data in the table cells is pretty small, so it should be easy to squeeze a lot of width from that table so it fits to the right of the list. I have a 1200px wide display and when I use maximize Brackets, the results box already fits on the right. Also put an overflow-y: auto on the list so you can see the list and data at the same time.</p><p>The only problem I'm seeing is that the bottom of the vertical scroll bar is clipped on the bottom, so the height seems to be incorrect.</p><p>Thanks for another great Brackets extension,<br>Randy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743070">2</a> by Raymond Camden
		posted on 10/2/2012 at 10:17 PM
		</div>
		<div class="comment_text"><p>Randy, I do have overflow on - but it's he generic, not -y. <br>I see the issue you mean on the left side.  I'll add some padding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743072">3</a> by Raymond Camden
		posted on 10/2/2012 at 10:26 PM
		</div>
		<div class="comment_text"><p>Randy, check it out. I've moved the support percentage table into a line. More of the content fits now. I also made the panel a bit higher.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743071">4</a> by Randy Edmunds
		posted on 10/9/2012 at 2:03 AM
		</div>
		<div class="comment_text"><p>Ooops, I guess I wasn't auto-subscribed to the comments.</p><p>That looks better, but I would try something like changing these widths from fixed to relative:</p><p>#caniuse_catlistColumn  width: 300px --&gt; 30%<br>#caniuse_supportdisplay width: 700px --&gt; 70%</p><p>The table squeezes way down horizontally, so maybe you could even go 35%/65%.</p><p>Also try giving them both height: 100% so each gets its own scrollbar, that way you can see the table even when you scroll down the category list.</p><p>- - - - -</p><p>I'm still having scrollbar problem on Win7. I can't see the bottom scroll arrow, and I have to drag thumb below window to scroll to bottom. Let me know if you want a screen shot. Maybe height:100% will fix it.</p><p>- - - - -</p><p>Bottom panel vertical resizing just got merged into master. You'll need to amek a couple small changes to your extensions to get it to work. Take a look at this pull request: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fadobe%2Fbrackets%2Fpull%2F1661%3AfewMYAQtujiDwiWsCQJ2oH-LUCQ&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/adobe/brackets/pull/1661">https://github.com/adobe/br...</a></p><p>You'll need to add a couple classes to your containers, and also a little setup code similar to JSLintUtils.js and FindInFiles.js.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743074">5</a> by Raymond Camden
		posted on 10/11/2012 at 6:45 PM
		</div>
		<div class="comment_text"><p>Randy, probably a dumb CSS mistake on my part, but when I make those first two changes, the layout breaks. The table gets displayed at the bottom of the left hand menu.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743075">6</a> by Raymond Camden
		posted on 10/11/2012 at 6:56 PM
		</div>
		<div class="comment_text"><p>I missed your last part. (Ok, and ignored the Win7 part too. ;) I'm going to wait for the next sprint to be officially released. I've had issues running from GitHub before and frankly find it too much of a pain to deal with.</p></div>
	</div>
</div>
		