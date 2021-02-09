
<div class="comment" id="c_1713717586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717586">1</a> by Sami Hoda
		posted on 8/10/2009 at 10:34 AM
		</div>
		<div class="comment_text"><p>Ugh. We can only pray that CF10 does something about CFLOGIN. We've been down this road so many times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717589">2</a> by Paul Connell
		posted on 8/10/2009 at 11:51 AM
		</div>
		<div class="comment_text"><p>Seconded.  After trying to use the CFLOGIN infrastructure it just felt 'wrong' somehow.  We need better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717591">3</a> by Henry Ho
		posted on 2/26/2011 at 3:17 AM
		</div>
		<div class="comment_text"><p>I had a question on stackoverflow (<a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F5112912%2Fwhy-does-cfloginuser-require-a-password-attribute-what-is-it-used-for%3AO4iFFXXNmMmJAijsWxtwKA8ApZE&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/5112912/why-does-cfloginuser-require-a-password-attribute-what-is-it-used-for">http://stackoverflow.com/qu...</a> ) and Sean pointed me to this page saying CFLOGIN is buggy.</p><p>I think it is not actually a bug!  The colon in URL should have been encoded to %3A, then the cflogin.password works!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717590">4</a> by Raymond Camden
		posted on 2/27/2011 at 8:40 PM
		</div>
		<div class="comment_text"><p>Interesting. Let me test this with a form post though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717592">5</a> by Raymond Camden
		posted on 2/27/2011 at 8:43 PM
		</div>
		<div class="comment_text"><p>Using a form post it works perfectly, which means encoding the URL would have worked too. Thanks Henry!</p></div>
	</div>
</div>
		