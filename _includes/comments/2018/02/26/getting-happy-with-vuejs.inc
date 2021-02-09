
<div class="comment" id="c_3779187596">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_SJbcsSijrO.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3779187596">1</a> by toddsharp
		posted on 2/27/2018 at 9:19 PM
		</div>
		<div class="comment_text"><p>Nice. How about support for manually swiping to the next quote?</p><p>To clarify: an override swipe, but if I do nothing it still runs on the timer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3779249172">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3779249172">2</a> (In reply to <a href="#c_3779187596">#1</a>) by Raymond Camden
		posted on 2/27/2018 at 9:59 PM
		</div>
		<div class="comment_text"><p>So that's a great question. Because initially it sounds simple - just listen for the event and do X. But then you have to ensure you cancel the next automatic change. Let me chew on that. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3780112335">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3780112335">3</a> (In reply to <a href="#c_3779187596">#1</a>) by Raymond Camden
		posted on 2/28/2018 at 1:50 PM
		</div>
		<div class="comment_text"><p>Actually, I think this is what I'd do. Have a flag: skipUpdate=false. When you swipe, tap, whateer, do an update and set skipUpdate to true. In the interval, if the value is true, don't update, and reset it to false.</p><p>Bam - done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3802071610">
	<div>
		<img src="https://disqus.com/api/users/avatars/somascope.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3802071610">4</a> by somascope
		posted on 3/14/2018 at 1:34 AM
		</div>
		<div class="comment_text"><p>Great idea with fun content. I'm newer to Vue than you are and it's been great reading your posts. I checked out your demo and, as luck would have it, the second message as a super long one. Before I got half way through reading it (6000 ms in your code) it transitioned to the next one.</p><p>First, my psyche was left in complete suspense about the ending of the happy moment (did it stay happy, or take a dark turn?? I'll never know!), and second I was wondering what a simple way to affect some dynamic timing would be. What do you think about calculating the # of milliseconds based on a word count? It feels like a hack and could go complete wrong... but at least it's a simple algorithm. Maybe a trial idea of, say, 2000 ms per 10 words. Or 200 ms per each word. Just a thought.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3802073873">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3802073873">5</a> (In reply to <a href="#c_3802071610">#4</a>) by Raymond Camden
		posted on 3/14/2018 at 1:36 AM
		</div>
		<div class="comment_text"><p>In order for it to be dynamic, you would have to switch from an interval to a timeout, and then ensure you call it at the end of every new message load. Doable for sure!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3815184658">
	<div>
		<img src="https://disqus.com/api/users/avatars/zaritzki.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3815184658">6</a> by Zaritzki
		posted on 3/20/2018 at 12:05 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I have some VUE.js questions.</p><p>1. How to remove header and footers in one component.. like for example I don't want to use the header (include: header, logo, navigation.) and the footer. which this is common to all pages. But some pages not required, but of course I have already choped those into components, since I always use the css and js files on each page.</p><p>2. Kinda related with Q1. I have a modal box, that I want to call a URL (component.vue), and I want to update the modal content on whatever the component contents, so I don't want to use header and footer (everything including the css and js files..)</p><p>Hopefully its possible, and you have idea on how to do it.</p><p>Thanks in advanced!</p><p>~zar</p></div>
	</div>
</div>
		
<div class="comment" id="c_3815347794">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3815347794">7</a> (In reply to <a href="#c_3815184658">#6</a>) by Raymond Camden
		posted on 3/20/2018 at 2:08 PM
		</div>
		<div class="comment_text"><p>Hey Zar:</p><p>It appears as if you are asking general questions about Vue, and not questions related to this post. In general, I'd suggest posting these to the Vue forum: <a href="https://disq.us/url?url=https%3A%2F%2Fforum.vuejs.org%2F%3AL9a6FiZ-hx7fmklHjX4ReVopF0o&amp;cuid=3321886" rel="nofollow noopener" title="https://forum.vuejs.org/">https://forum.vuejs.org/</a>. That would be more appropriate.</p><p>1. If you have a component that uses headers and footers and need to make it conditional, then I'd simply allow for a passed in property to determine if they should be shown.</p><p>2. No idea on that one. Obviously you can load in stuff via a simple Ajax call, but you want to dynamically run a Vue component here and I'm not sure how that would be done.</p></div>
	</div>
</div>
		