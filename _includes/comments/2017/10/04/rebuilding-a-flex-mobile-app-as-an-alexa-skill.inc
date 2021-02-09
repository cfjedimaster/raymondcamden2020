
<div class="comment" id="c_3551585681">
	<div>
		<img src="https://disqus.com/api/users/avatars/daniel_fredericks.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3551585681">1</a> by daniel fredericks
		posted on 10/5/2017 at 11:56 AM
		</div>
		<div class="comment_text"><p>I know you don't use CFML much anymore, but have you tried to compare how to build a skill using CFML and see if it is easier or harder than what you use with openwisk? Just interested since I had Steve Drucker talk about his CF api he created to build alexa apps...i know he talked about that at CFOBJ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3551639253">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3551639253">2</a> (In reply to <a href="#c_3551585681">#1</a>) by Raymond Camden
		posted on 10/5/2017 at 12:46 PM
		</div>
		<div class="comment_text"><p>Well to be clear, I assume you are focusing on just the language differences, not platform, ala server versus serverless.</p><p>Since the main code is just "read JSON input" and "generate JSON output", I think CFML would handle this fine - hopefully not getting bitten by the numerous JSON serialization issues CF has had over the years.</p><p>The hard part would be the certification / security stuff you have to add in for a released skill. In theory, once you do it once your done. Heck, you could probably Drucker for his code. :)</p></div>
	</div>
</div>
		