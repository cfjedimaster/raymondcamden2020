
<div class="comment" id="c_5029743468">
	<div>
		<img src="https://disqus.com/api/users/avatars/fimion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5029743468">1</a> by Alex Riviere
		posted on 8/14/2020 at 1:22 AM
		</div>
		<div class="comment_text"><p>So i think the ultimate goal also is to support the javascript pipeline operator (|&gt;) which would allow you to filter all your methods. <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Ftc39%2Fproposal-pipeline-operator%3AcfoXihzexRMpJqwzjrUYlsYEuRs&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/tc39/proposal-pipeline-operator">https://github.com/tc39/pro...</a></p><p>the challenge there is that there are 2 competing standards and they haven't finished ironing it out yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5030149205">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5030149205">2</a> (In reply to <a href="#c_5029743468">#1</a>) by Raymond Camden
		posted on 8/14/2020 at 12:00 PM
		</div>
		<div class="comment_text"><p>So I "kinda" get what this operator does, but I'm confused as to how it would apply to Vue. Are you saying they would allow for {{ name |&gt; shorten |&gt; makeCool }} ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_5030203632">
	<div>
		<img src="https://disqus.com/api/users/avatars/fimion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5030203632">3</a> (In reply to <a href="#c_5030149205">#2</a>) by Alex Riviere
		posted on 8/14/2020 at 12:57 PM
		</div>
		<div class="comment_text"><p>Yep! you would also be able to do {{ name |&gt; shorten(5) |&gt; makeCool }} so imagine filters but anywhere in javascript!</p></div>
	</div>
</div>
		
<div class="comment" id="c_5030325387">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5030325387">4</a> (In reply to <a href="#c_5030203632">#3</a>) by Raymond Camden
		posted on 8/14/2020 at 2:45 PM
		</div>
		<div class="comment_text"><p>Ah that's kinda cool and would make me happy, and honestly, that's what Vue should be concerned about. :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_5038144299">
	<div>
		<img src="https://disqus.com/api/users/avatars/nathanstrutz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5038144299">5</a> (In reply to <a href="#c_5029743468">#1</a>) by Nathan Strutz
		posted on 8/20/2020 at 3:02 PM
		</div>
		<div class="comment_text"><p><a data-dsq-mention="fimion:disqus" href="https://disqus.com/by/fimion/" rel="nofollow noopener" title="https://disqus.com/by/fimion/">Alex Riviere</a></p><p>This is the best explanation I've heard for removing Vue's filters feature - thanks. I liked the feature and use it pretty frequently, it's perfect for applying formatting to outputs, and I like that I can register filters globally in my Vue app, whereas using functions, or even this new pipeline operator, will require that I import every function individually as I use them. Nevertheless it's not a painful change, just something I need to get started on soon so my code will be compatible with Vue 3. Thanks, <a data-dsq-mention="cfjedimaster:disqus" href="https://disqus.com/by/cfjedimaster/" rel="nofollow noopener" title="https://disqus.com/by/cfjedimaster/">Raymond Camden</a></p></div>
	</div>
</div>
		