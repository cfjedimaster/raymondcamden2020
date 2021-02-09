
<div class="comment" id="c_4575633619">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Vm6wYeI3iN.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4575633619">1</a> by dalibor
		posted on 8/12/2019 at 4:33 PM
		</div>
		<div class="comment_text"><p>Set <code>tabindex="0"</code> on <code>#app</code> for Key Modifiers <code>up</code>, <code>down</code>, <code>space</code> etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4575634761">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Vm6wYeI3iN.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4575634761">2</a> (In reply to <a href="#c_4575633619">#1</a>) by dalibor
		posted on 8/12/2019 at 4:34 PM
		</div>
		<div class="comment_text"><p>Example: <a href="https://disq.us/url?url=https%3A%2F%2Fcodepen.io%2Fdaliborgogic%2Fpen%2FmwaeZe%3ABt336tToKhekn_wrEAPDWFos4Po&amp;cuid=3321886" rel="nofollow noopener" title="https://codepen.io/daliborgogic/pen/mwaeZe">https://codepen.io/daliborgogic/pen/mwaeZe</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_4575729849">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4575729849">3</a> (In reply to <a href="#c_4575634761">#2</a>) by Raymond Camden
		posted on 8/12/2019 at 5:52 PM
		</div>
		<div class="comment_text"><p>Well that was easy. I tried @keydown="test" to catch it all and it worked. My only concern is that I had to click once on the document - which in theory may be an issue in my game. You definitely click on the first screen, but maybe not the second.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4576066476">
	<div>
		<img src="https://disqus.com/api/users/avatars/damiandulisz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4576066476">4</a> by Damian Dulisz
		posted on 8/12/2019 at 10:40 PM
		</div>
		<div class="comment_text"><p>Hey! For event listeners that are supposed to be global, you might want to check out this tiny library <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fshentao%2Fvue-global-events%3AoY6xoDBAt1jKJKhyjmk_4i19VJo&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/shentao/vue-global-events">https://github.com/shentao/...</a>.<br>It takes the output from the template compiler that includes all the modifiers like `.keyup.enter` and automatically assigns those to the window or document object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4576464648">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Vm6wYeI3iN.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4576464648">5</a> (In reply to <a href="#c_4575729849">#3</a>) by dalibor
		posted on 8/13/2019 at 7:50 AM
		</div>
		<div class="comment_text"><p>You can set `focus` on element which will receive keyboard and similar events by default.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4576808358">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4576808358">6</a> (In reply to <a href="#c_4576066476">#4</a>) by Raymond Camden
		posted on 8/13/2019 at 2:55 PM
		</div>
		<div class="comment_text"><p>That is damn neat!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4576808835">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4576808835">7</a> (In reply to <a href="#c_4576464648">#5</a>) by Raymond Camden
		posted on 8/13/2019 at 2:55 PM
		</div>
		<div class="comment_text"><p>Right, but if you have no form elements, would you call focus on the div as a whole in created() or some such?</p></div>
	</div>
</div>
		
<div class="comment" id="c_5050469238">
	<div>
		<img src="https://disqus.com/api/users/avatars/bluebuzzmusic.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5050469238">8</a> by Andy
		posted on 8/29/2020 at 7:52 PM
		</div>
		<div class="comment_text"><p>Thank you for sharing how we can work with the keyboard in the Vue application. This is one of the best things that I've seen from you and if you continue to share more content like this, it would be great for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5146124716">
	<div>
		<img src="https://disqus.com/api/users/avatars/yachris.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5146124716">9</a> by yachris
		posted on 11/10/2020 at 4:24 PM
		</div>
		<div class="comment_text"><p>THANKS! This is so much help. For whatever it's worth, "keypress" does not detect the "Escape" key, but the "keydown" event does.</p></div>
	</div>
</div>
		