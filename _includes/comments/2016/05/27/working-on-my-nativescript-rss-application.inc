
<div class="comment" id="c_2698472349">
	<div>
		<img src="https://disqus.com/api/users/avatars/tjvantoll.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2698472349">1</a> by TJ VanToll
		posted on 5/27/2016 at 3:49 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Love the article and definitely agree with you about the “cookbook”. I’ll see what I can do about improving the UX there.</p><p>For your example you probably want to use the {N} <code>&lt;WebView&gt;</code> control, so something like <code>&lt;WebView url="{{ link }}"&gt;&lt;/WebView&gt;</code>. The docs are hidden in the same cookbook section, and quite frankly aren’t very good: <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.nativescript.org%2Fcookbook%2Fui%2Fweb-view%3AqS6-OcwxWCjYcXuJR7FM2QdkUqE&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.nativescript.org/cookbook/ui/web-view">http://docs.nativescript.or...</a>. Feel free to ping me on Slack if you want help getting that up and running.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2698479192">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2698479192">2</a> (In reply to <a href="#c_2698472349">#1</a>) by Raymond Camden
		posted on 5/27/2016 at 3:53 PM
		</div>
		<div class="comment_text"><p>I saw that and considered it, but I wasn't sure how it would look. One thing the Ionic docs do well (although not 100%) is show visual examples of controls. NativeScript could use that as well.</p><p>So I assume I'd swap out my HtmlView tag with this? And that's it? (And of course change the attributes.) How does it look?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2698483156">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2698483156">3</a> (In reply to <a href="#c_2698479192">#2</a>) by Raymond Camden
		posted on 5/27/2016 at 3:55 PM
		</div>
		<div class="comment_text"><p>Ok, I tried that, but no go. I just get a white screen. I'm boarding a plane so will be AFK for 3 hours.  Gist of my change (and I change code behind to support the link) - <a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fcfjedimaster%2Ff5c6423aced2da3f1ecc293ece10478e%3AOGMaNbdvR6MflaZ1fX_E5uRJEAY&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/cfjedimaster/f5c6423aced2da3f1ecc293ece10478e">https://gist.github.com/cfj...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2698485870">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2698485870">4</a> (In reply to <a href="#c_2698483156">#3</a>) by Raymond Camden
		posted on 5/27/2016 at 3:57 PM
		</div>
		<div class="comment_text"><p>Ok ignore me. I got it working. Boarding in seconds. I'll post more thoughts later. Frankly, this is superior - although I like this *and* the option to open in the system browser too. Now I'll have a "part 3" for later next week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2698538577">
	<div>
		<img src="https://disqus.com/api/users/avatars/tjvantoll.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2698538577">5</a> (In reply to <a href="#c_2698479192">#2</a>) by TJ VanToll
		posted on 5/27/2016 at 4:27 PM
		</div>
		<div class="comment_text"><p>Agreed about the visual controls. It’s a bit tricky for us, since we’re not web based and can’t actually render our controls in the browser, but we could certainly be better about embedding images. The best we have right now is on the “Components” page in the docs. Here’s the WebView there <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.nativescript.org%2Fui%2Fui-views%23webview%3Ars01mheQC5_tD6WjytiAgJ-3VAY&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.nativescript.org/ui/ui-views#webview">http://docs.nativescript.or...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2698871096">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2698871096">6</a> (In reply to <a href="#c_2698538577">#5</a>) by Raymond Camden
		posted on 5/27/2016 at 7:42 PM
		</div>
		<div class="comment_text"><p>Hmm - that's pretty clear. I must have missed it before. Oh - I think I know why - I went here: <a href="https://disq.us/url?url=https%3A%2F%2Fdocs.nativescript.org%2Fcookbook%2Fui%2Fweb-view%3AA77ZRRq-axj_o38zygauLy8kwug&amp;cuid=3321886" rel="nofollow noopener" title="https://docs.nativescript.org/cookbook/ui/web-view">https://docs.nativescript.o...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2762234481">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonreimler.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2762234481">7</a> (In reply to <a href="#c_2698485870">#4</a>) by Simon Grimm
		posted on 7/2/2016 at 6:13 PM
		</div>
		<div class="comment_text"><p>Hey Ray, I'm also currently getting into NativeScript, so I just wanted to check if you will post your new solution as part 3 of the tutorial? Thanks anyway for the first 2 posts!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2764645827">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2764645827">8</a> (In reply to <a href="#c_2762234481">#7</a>) by Raymond Camden
		posted on 7/4/2016 at 1:36 PM
		</div>
		<div class="comment_text"><p>Um - did I say I was doing a part 3? (Honest question - I don't remember. ;)</p></div>
	</div>
</div>
		