
<div class="comment" id="c_2660621013">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660621013">1</a> by Akash Pal
		posted on 5/5/2016 at 8:46 PM
		</div>
		<div class="comment_text"><p>Is there anyway to get the file object without using &lt;input type="file"&gt; ?<br>Is it possible to create a file object using filePath?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660633304">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660633304">2</a> (In reply to <a href="#c_2660621013">#1</a>) by Raymond Camden
		posted on 5/5/2016 at 8:50 PM
		</div>
		<div class="comment_text"><p>In a web app, no, that would be a security issue. In a Cordova app... maybe. If the app itself has access to the file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660636514">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660636514">3</a> (In reply to <a href="#c_2660633304">#2</a>) by Akash Pal
		posted on 5/5/2016 at 8:52 PM
		</div>
		<div class="comment_text"><p>This wont work on android as &lt;input type="file"&gt; is not supported in android. This would work perfectly on ios.<br>For this to work Cordova has to convert the file path to file object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660645099">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660645099">4</a> by Akash Pal
		posted on 5/5/2016 at 8:56 PM
		</div>
		<div class="comment_text"><p>Kindly do update , if there is way to make this work in android cordova web app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660686635">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660686635">5</a> (In reply to <a href="#c_2660633304">#2</a>) by Akash Pal
		posted on 5/5/2016 at 9:19 PM
		</div>
		<div class="comment_text"><p>Thank you for writing this blog post. Hope some solution works out for android.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660691054">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660691054">6</a> (In reply to <a href="#c_2660686635">#5</a>) by Raymond Camden
		posted on 5/5/2016 at 9:22 PM
		</div>
		<div class="comment_text"><p>You can pass a Blob to the FormData append method (<a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FWeb%2FAPI%2FFormData%2Fappend%29%3AdHgmEV2PHCD0HO1pwjSGZOXQXqM&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/Web/API/FormData/append)">https://developer.mozilla.o...</a>. So in theory, you could read in a blob from the file system. Let me see if I can come up with a new demo that doesn't use file pickers and is Cordova ready.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660698227">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660698227">7</a> (In reply to <a href="#c_2660691054">#6</a>) by Akash Pal
		posted on 5/5/2016 at 9:26 PM
		</div>
		<div class="comment_text"><p>Yes i came across the Bolb thing too but that too didn't work well. <br>I have already raised an issue to apache for improvement for the file transfer plugin to enable multiple uploads in single request.<br>However until then some work around is required; especially for android. As in ios even without using file transfer plugin  uploading using &lt;input type="file" multiple=""&gt; works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660707445">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660707445">8</a> (In reply to <a href="#c_2660698227">#7</a>) by Raymond Camden
		posted on 5/5/2016 at 9:32 PM
		</div>
		<div class="comment_text"><p>How did it fail with the blob?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660712582">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660712582">9</a> (In reply to <a href="#c_2660707445">#8</a>) by Akash Pal
		posted on 5/5/2016 at 9:35 PM
		</div>
		<div class="comment_text"><p>I had tried to create blob object but it didn't work, maybe i wasn't doing it right.I shall have to checkout again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660721062">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660721062">10</a> (In reply to <a href="#c_2660712582">#9</a>) by Raymond Camden
		posted on 5/5/2016 at 9:41 PM
		</div>
		<div class="comment_text"><p>I'll give it a shot too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660724007">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660724007">11</a> (In reply to <a href="#c_2660721062">#10</a>) by Akash Pal
		posted on 5/5/2016 at 9:43 PM
		</div>
		<div class="comment_text"><p>okay.I have been working on this issue for almost a week. And there are no materials or guidance anywhere to follow up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2661734495">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2661734495">12</a> (In reply to <a href="#c_2660645099">#4</a>) by Raymond Camden
		posted on 5/6/2016 at 2:00 PM
		</div>
		<div class="comment_text"><p>I've been able to get this working - hoping to post an update later today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2661855418">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2661855418">13</a> (In reply to <a href="#c_2661734495">#12</a>) by Raymond Camden
		posted on 5/6/2016 at 3:14 PM
		</div>
		<div class="comment_text"><p>Posted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2673888590">
	<div>
		<img src="https://disqus.com/api/users/avatars/WebReflection.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2673888590">14</a> by WebReflection
		posted on 5/13/2016 at 3:52 PM
		</div>
		<div class="comment_text"><p>Raymond I liked the intent but the execution was pretty poor. It would've taken so little to make it a great post. I've fixed all bad practices mentioned here in this gist: <a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2FWebReflection%2Ff04425ce4cfeb18d75236cb50255e4bc%3AYt0uT6Ye-hmOcAz3hNIY-eyoHio&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/WebReflection/f04425ce4cfeb18d75236cb50255e4bc">https://gist.github.com/Web...</a> please consider some update, thanks.</p><p>Eidt: I've updated the gist hoping its content will be considered as update. I also would appreciate if the moderator could remove insults from comments, like the one following.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2674279842">
	<div>
		<img src="https://disqus.com/api/users/avatars/scottstroz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2674279842">15</a> (In reply to <a href="#c_2673888590">#14</a>) by Scott Stroz
		posted on 5/13/2016 at 7:33 PM
		</div>
		<div class="comment_text"><p>Wow.....kind of a dick-ish mover there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2674389372">
	<div>
		<img src="https://disqus.com/api/users/avatars/WebReflection.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2674389372">16</a> (In reply to <a href="#c_2674279842">#15</a>) by WebReflection
		posted on 5/13/2016 at 8:39 PM
		</div>
		<div class="comment_text"><p>I'm sorry you think that. I've been writing articles for 10+ years and I do care about best practices. The usage of jQuery is OK but defining global variables, write non standard forms to upload, avoid reasonable standard practices at all cost to use $ instead of querySelector is IMO not acceptable in 2016 and from IBM's Engineer. We, posts authors, should've learned by today the side effect these articles have in the long term and writing careless justifying it with a couple of "it's OK, don't stress it" looks and feel bad. I'm sure the author of this post has interest in being considered someone that suggests the right thing, and I'm also sure he's more mature than you and will consider some change/update instead of just insult me. I care about what the community learn, so should authors with a respectable level, experience, and knowledge.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2674402390">
	<div>
		<img src="https://disqus.com/api/users/avatars/scottstroz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2674402390">17</a> (In reply to <a href="#c_2674389372">#16</a>) by Scott Stroz
		posted on 5/13/2016 at 8:47 PM
		</div>
		<div class="comment_text"><p>I was not referring to the fact that you wanted to point out 'best practices', rather, the manner in which you chose to do it - not just yoru comment, but the comments in the link you provided.</p><p>You need to work on your people skills (and this is coming from someone who just called you a dick).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2674431111">
	<div>
		<img src="https://disqus.com/api/users/avatars/WebReflection.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2674431111">18</a> (In reply to <a href="#c_2674402390">#17</a>) by WebReflection
		posted on 5/13/2016 at 9:06 PM
		</div>
		<div class="comment_text"><p>The link is a gist that's simpky waiting to be removed. I'm a bit fed-up of rushed articles and I was in a rush when I've written the gist. With the will of posting, should come responsibilities, and this was, and still is, my point. To write better code takes less than write justifications about poor code. Last, but not least, I'm not an expert in this field but I believe you shouldn't justify your free insults pointing fingers around. However I'm not willing to discuss this. Best Regards.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2674466019">
	<div>
		<img src="https://disqus.com/api/users/avatars/WebReflection.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2674466019">19</a> (In reply to <a href="#c_2674402390">#17</a>) by WebReflection
		posted on 5/13/2016 at 9:30 PM
		</div>
		<div class="comment_text"><p>P.S. your website is down with a cold fusion error. In case you didn't know. Best Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_2677565143">
	<div>
		<img src="https://disqus.com/api/users/avatars/brettlayman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2677565143">20</a> (In reply to <a href="#c_2673888590">#14</a>) by Brett Layman
		posted on 5/15/2016 at 11:05 PM
		</div>
		<div class="comment_text"><p>I can see your point about global variables, but that's an easy fix and doesn't require  converting all of the jquery to pure javascript. If using jquery falls within best practices, then why not keep the jquery and only change what you have to? When correcting someone's mistakes, I think it's best to stick with their approach as much as possible, and only change what is truly a bad practice (rather than a personal preference). I am curious though, what is the downside of using .get(0)? Does it create security issues?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2677855284">
	<div>
		<img src="https://disqus.com/api/users/avatars/WebReflection.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2677855284">21</a> (In reply to <a href="#c_2677565143">#20</a>) by WebReflection
		posted on 5/16/2016 at 4:14 AM
		</div>
		<div class="comment_text"><p>Using `$('css').get(0)` instead of `documenti.querySelector('css')` is kinda silly. You require 100KB library and all the magic it has and you ignore it entirely. There's no reason on earth to consider this a good practice. It's lazynesd and bad habit at its best. There's no reason at all to suggest jQuery in the entire snippet. Even using ready to reach the form through a script defined after is kinda pointless. As summary, suggesting a dependency when it's easily avoidable and not actually used for its strength or its magic at all is a bad practice, hence the fix. You can live using always jQuery, it's unnecessary but OK. Although I've shown better, modern, approach. We're using an API that is available in browsers where jQuery doesn't fix much in terms of selectors. <br></p></div>
	</div>
</div>
		
<div class="comment" id="c_2678606831">
	<div>
		<img src="https://disqus.com/api/users/avatars/brettlayman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2678606831">22</a> (In reply to <a href="#c_2677855284">#21</a>) by Brett Layman
		posted on 5/16/2016 at 4:43 PM
		</div>
		<div class="comment_text"><p>Yeah I guess that using .get() is a pretty roundabout way of selecting a dom element. But in other cases I find that jQuery is more succinct and readable, even if it is unnecessary. I just thought your critique could be more minimalist in terms of your corrections, like just choosing a couple of things and going into more depth about why those practices are problematic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2678610190">
	<div>
		<img src="https://disqus.com/api/users/avatars/WebReflection.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2678610190">23</a> (In reply to <a href="#c_2678606831">#22</a>) by WebReflection
		posted on 5/16/2016 at 4:45 PM
		</div>
		<div class="comment_text"><p>$('css').get(0) is like climbing a wall instead of using its main door: document,querySelector('css'). This is a bad practice, this post and its content didn't need jQuery, hence the fix.</p></div>
	</div>
</div>
		