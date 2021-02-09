
<div class="comment" id="c_1713717943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717943">1</a> by Gary Gilbert
		posted on 8/22/2009 at 6:45 PM
		</div>
		<div class="comment_text"><p>you mean the cfoutput #<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a># thats open to xss attacks?</p><p>It's example code demonstrating slor functionality not on how to protect against xss.  Anyone who uses example code in a production environment (e.g. cut and paste coding) deserves what he or she gets.</p><p>Perhaps a bit harsh but thats my opinion</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717952">2</a> by Raymond Camden
		posted on 8/22/2009 at 6:48 PM
		</div>
		<div class="comment_text"><p>Good one, but not it. The flaw is explicitly related to search. You are the only one who tried, so if you want, I can just spill it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717954">3</a> by Gary Gilbert
		posted on 8/22/2009 at 10:35 PM
		</div>
		<div class="comment_text"><p>Ray, other than you not cleaning your url or form variable in search.cfm I don't see any other security problems.  I must be losing my edge.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717953">4</a> by Raymond Camden
		posted on 8/23/2009 at 12:37 AM
		</div>
		<div class="comment_text"><p>You know, I made this too obtuse probably. And overblown. I apologize. Really - the issue was simple. The 'old' app used logic to get PRs with a published date in the past. That logic is not respected in search. It is a classic example really of where a security/business rule in one place gets missed in another.</p></div>
	</div>
</div>
		