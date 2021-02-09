
<div class="comment" id="c_1713745198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745198">1</a> by Ryan LeTulle
		posted on 3/19/2013 at 1:24 AM
		</div>
		<div class="comment_text"><p>Thanks Ray.  I'll make use of this soon I am sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745199">2</a> by Raymond Camden
		posted on 3/19/2013 at 1:26 AM
		</div>
		<div class="comment_text"><p>Keep in mind - all the PhoneGap code I wrote for you is perfect and doesn't need any of this silly "robustness". ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745203">3</a> by Mikel
		posted on 3/19/2013 at 3:39 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.  This is a very helpful and thought provoking post.  I'm sure that I'll be referencing it again soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745204">4</a> by Ray Wadkins
		posted on 3/20/2013 at 6:57 PM
		</div>
		<div class="comment_text"><p>I live in NYC and frequently commute via the subway.  One of my frustration with Net-Using applications is not only handling changes in online state, but also what to show when the user is offline.   Too many applications simply give up when there's no network connection.  I usually want to see the last results I saw when I last had a connection.  this gives me the ability to quickly grab data before I descend into the subway, so I can browse it while on the train.</p><p>I think any discussion on app robustness and connectivity should consider what to show the user when there is no internet connection.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745202">5</a> by Raymond Camden
		posted on 3/20/2013 at 7:35 PM
		</div>
		<div class="comment_text"><p>I agree completely Ray. You could use something like LocalStorage to store stuff just for that purpose. I wouldn't store a lot of data there, but for a 'use this as temporary backup' solution it would work well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745200">6</a> by Dan
		posted on 6/8/2013 at 8:05 AM
		</div>
		<div class="comment_text"><p>This tweet implies that errorception works w phonegap: <a href="https://disq.us/url?url=https%3A%2F%2Fmobile.twitter.com%2Ferrorception%2Fstatus%2F313777191999643648%3AfTQqtrdwEihhR1ZILsdRPLt0l2Y&amp;cuid=3321886" rel="nofollow noopener" title="https://mobile.twitter.com/errorception/status/313777191999643648">https://mobile.twitter.com/...</a></p><p>Has anyone tried this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745201">7</a> by Raymond Camden
		posted on 6/8/2013 at 8:57 AM
		</div>
		<div class="comment_text"><p>The issue is that they say "non-Chrome" - PhoneGap still uses the Android stock browser, not Chrome. But - newer stock Androids may support window.onerror. I'm about to go to the airport, but maybe someone can give this a quick test to see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745206">8</a> by Raymond Camden
		posted on 6/8/2013 at 10:34 AM
		</div>
		<div class="comment_text"><p>FYI, I'm trying this now. I've got a test app in Android and iOS. So far, nothing has been recorded, but I'm going to check again later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745207">9</a> by Raymond Camden
		posted on 6/18/2013 at 11:42 PM
		</div>
		<div class="comment_text"><p>FYI - it worked. :) I forgot to update this thread: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F6%2F13%2FUsing-Errorception-with-PhoneGap%3AYctvX2P4KTN1jh58SEbPXAGbnxE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/6/13/Using-Errorception-with-PhoneGap">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745205">10</a> by John McLear
		posted on 11/14/2013 at 6:29 PM
		</div>
		<div class="comment_text"><p>Weinre should be documented in this post</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745208">11</a> by Raymond Camden
		posted on 11/19/2013 at 1:55 AM
		</div>
		<div class="comment_text"><p>John, the intent of this post was to focus on things people can do to make their apps more robust. Weinre does not help with that. It is a debugging tool and would not be used in a production PG app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1789999958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1789999958">12</a> by Abha
		posted on 1/13/2015 at 8:04 AM
		</div>
		<div class="comment_text"><p>hello sir can't download this project what can i do for this. please give right link ...........</p></div>
	</div>
</div>
		
<div class="comment" id="c_1790140607">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1790140607">13</a> (In reply to <a href="#c_1789999958">#12</a>) by Raymond Camden
		posted on 1/13/2015 at 11:12 AM
		</div>
		<div class="comment_text"><p>I fixed the download link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4268451776">
	<div>
		<img src="https://disqus.com/api/users/avatars/ehabheikal.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4268451776">14</a> by Ehab Heikal
		posted on 1/3/2019 at 11:43 PM
		</div>
		<div class="comment_text"><p>The download link is broken again :)</p></div>
	</div>
</div>
		