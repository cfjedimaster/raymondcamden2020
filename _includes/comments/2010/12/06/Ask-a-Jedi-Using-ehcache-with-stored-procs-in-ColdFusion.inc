
<div class="comment" id="c_1713728277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728277">1</a> by Ryan
		posted on 12/6/2010 at 10:38 PM
		</div>
		<div class="comment_text"><p>What would be the benefit of putting this in ehcache as opposed to the query caching? Or is there none?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728256">2</a> by Raymond Camden
		posted on 12/6/2010 at 10:40 PM
		</div>
		<div class="comment_text"><p>ehcache is a -very- powerful caching system and you can tweak it's performance settings (if you don't mind getting into XML). So if you know ehcache and want to make use of it, then this would be a better option. (afaik)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728268">3</a> by Matthew Lesko
		posted on 12/7/2010 at 1:34 AM
		</div>
		<div class="comment_text"><p>To build on Ray's comment. Most interesting usage scenario I've done is disk persistence. And, if your database is only written through that application make the persistence permanent so that it stays around between CF restarts.</p></div>
	</div>
</div>
		