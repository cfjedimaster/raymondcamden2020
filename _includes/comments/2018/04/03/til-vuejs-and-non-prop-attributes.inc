
<div class="comment" id="c_3851154950">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_mvqUojHm95.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3851154950">1</a> by Devin Holloway
		posted on 4/12/2018 at 3:09 AM
		</div>
		<div class="comment_text"><p>Just to expand on this, while that works great when the element to receive the props is the root element, often, it's not the root. But it's still easy to handle it:</p><p>Vue.component('nicolas-cage', {<br>  template: '&lt;div&gt;&lt;img :src="url" v-bind="$attrs"/&gt;&lt;/div&gt;',<br>  inheritAttrs: false,<br>};</p></div>
	</div>
</div>
		
<div class="comment" id="c_3851700727">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3851700727">2</a> (In reply to <a href="#c_3851154950">#1</a>) by Raymond Camden
		posted on 4/12/2018 at 1:39 PM
		</div>
		<div class="comment_text"><p>I know what inheritAttrs does (do NOT copy the extra attributes), but what is $attrs? Is it basically everything that was passed in?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3851846266">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_mvqUojHm95.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3851846266">3</a> (In reply to <a href="#c_3851700727">#2</a>) by Devin Holloway
		posted on 4/12/2018 at 3:08 PM
		</div>
		<div class="comment_text"><p>Yeah, it's all of the non-prop attributes.  So, what would have been defined on the root element (if you left inheritAttrs turned on), $attrs contains the same thing.</p><p>You can glean a bit more info from the vue 2.4 release notes:<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fvuejs%2Fvue%2Freleases%2Ftag%2Fv2.4.0%3AZ6ZcrOufNca7Fy64Hg_Ou_48f5M&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/vuejs/vue/releases/tag/v2.4.0">https://github.com/vuejs/vu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3851883287">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3851883287">4</a> (In reply to <a href="#c_3851846266">#3</a>) by Raymond Camden
		posted on 4/12/2018 at 3:30 PM
		</div>
		<div class="comment_text"><p>Thank you - and that's cool that it's the NON-defined ones.</p></div>
	</div>
</div>
		