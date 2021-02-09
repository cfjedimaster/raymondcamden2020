
<div class="comment" id="c_2859490560">
	<div>
		<img src="https://disqus.com/api/users/avatars/iamfrancisyo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2859490560">1</a> by Daniel
		posted on 8/25/2016 at 7:24 PM
		</div>
		<div class="comment_text"><p>I enjoyed this post Raymond! Thread popularity and "day-of-week" stats seem really useful. Can you explain a bit more about how you like to use them? I could see "day-of-week" volume to help moderators decide when to devote moderation time. Any other analytics you wish existed in <a href="http://disqus.com/admin?" rel="nofollow noopener" title="disqus.com/admin?">disqus.com/admin?</a> I'm going to give your app a try soon. Have you considered posting this over at <a href="https://disqus.com/home/channel/discussdisqus/" rel="nofollow noopener" title="https://disqus.com/home/channel/discussdisqus/">https://disqus.com/home/cha...</a>, I'm sure some other developers would want to take a look.</p><p>EDIT: oh, and did you run into problems with our API? Wondering if there's anything that slowed you down or was annoying.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2859514115">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2859514115">2</a> (In reply to <a href="#c_2859490560">#1</a>) by Raymond Camden
		posted on 8/25/2016 at 7:37 PM
		</div>
		<div class="comment_text"><p>A few quick replies as I'm busy - pardon typos!</p><p>I'll start with the API:</p><p>The biggest thing missing from the API were those totals. I *really* think they should be there. Heck, some of the API calls _return_ a count but it is null. Specifically:</p><p>a) List for threads should give a total<br>b) List for comments should give a total<br>c) I think details for forum should include these stats too. Right now the details are kinda slim.<br>d) I'd like to sort threads by # of comments.</p><p>Outside of that, it worked just fine. Pagination was easy.</p><p>In terms of the analytics Disqus provides:</p><p>The first big issue is restricting stats to one year. It makes sense due to how you display it (one table), but maybe you could change the layout once you've selected more than a year - like showing month stats instead.</p><p>In general, it feels like the stats aren't going to be useful at *all* once you have a site with history, especially a property like <a href="http://disq.us/url?url=http%3A%2F%2Fraymondcamden.com%3AL1EnJFnw8u4fMVDhG6_ssI_8His&amp;cuid=3321886" rel="nofollow noopener" title="raymondcamden.com">raymondcamden.com</a> with 13 years. (Although I'm sure I'm not the norm!)</p><p>I'll share on that other channel later today!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2861486149">
	<div>
		<img src="https://disqus.com/api/users/avatars/iamfrancisyo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2861486149">3</a> (In reply to <a href="#c_2859514115">#2</a>) by Daniel
		posted on 8/26/2016 at 10:07 PM
		</div>
		<div class="comment_text"><p>Thanks for all this feedback <a data-dsq-mention="cfjedimaster:disqus" href="https://disqus.com/by/cfjedimaster/" rel="nofollow noopener" title="https://disqus.com/by/cfjedimaster/">Raymond Camden</a>, especially the details about how threads/list and threads/details can be improved. I'm making note of everything you mentioned for feature suggestions to share with our team. The 1 year limit to analytics is definitely a limitation that would be great to solve.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2862258687">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2862258687">4</a> (In reply to <a href="#c_2861486149">#3</a>) by Raymond Camden
		posted on 8/27/2016 at 1:34 PM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3744197793">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3744197793">5</a> by Raymond Camden
		posted on 2/5/2018 at 8:54 PM
		</div>
		<div class="comment_text"><p>FYI, I've updated the code to make avg work.</p></div>
	</div>
</div>
		