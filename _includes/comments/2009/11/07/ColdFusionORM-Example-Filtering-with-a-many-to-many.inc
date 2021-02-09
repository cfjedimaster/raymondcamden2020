
<div class="comment" id="c_1713719561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719561">1</a> by Rick O
		posted on 11/8/2009 at 3:39 AM
		</div>
		<div class="comment_text"><p>Why not just put the inverse relationship in place on Categories so that you can say cat.BlogEntries ?</p><p>(I'm not trying to be argumentative -- I'm just curious.  I always set up both sides of a relationship, but if there's some sort of weird performance implication to that or whatever ...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719574">2</a> by Raymond Camden
		posted on 11/8/2009 at 4:02 AM
		</div>
		<div class="comment_text"><p>-blush-</p><p>Yeah, you are right... although I think it's because of the example I gave. My real need was different and I thought this example was simpler. Let me share my real example, and you can see why that would not work... exactly. Although as I type I realize I might be wrong. ;)</p><p>Ugh. Nope... you are right. ;) I'll keep the HQL up as it was interesting - but I think I kinda screwed the pooch on this one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719578">3</a> by Rick O
		posted on 11/8/2009 at 4:45 AM
		</div>
		<div class="comment_text"><p>Stop erring and being human ... it really freaks us out.</p><p>Seriously though, I just happened to be working on upgrading my ORM lecture for my students from CF8 to CF9, so I've been staring at it all day.  Otherwise, I probably would have said "hey, neat trick".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719577">4</a> by Shannon Hicks
		posted on 11/9/2009 at 8:50 PM
		</div>
		<div class="comment_text"><p>I concur, creating the inverse relationship in Category is how I'd do it. If you need to sort/filter/pagninate those blog posts from inside your category, you can use this:</p><p>filter = ormGetSession().createFilter(Category.getBlogEntries(),"order by <br>this.blogPostTimeStamp desc").setFirstResult(0).setMaxResults(20);</p><p>postsArray = filter.list();</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgroups.google.com%2Fgroup%2Fcf-orm-dev%2Fbrowse_thread%2Fthread%2F4bc04047f942b731%2327df77981debdf37%3ACAYt6pF9fU7CufAhoQW6j1m7ZkA&amp;cuid=3321886" rel="nofollow noopener" title="http://groups.google.com/group/cf-orm-dev/browse_thread/thread/4bc04047f942b731#27df77981debdf37">http://groups.google.com/gr...</a></p><p>Shan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719576">5</a> by Raymond Camden
		posted on 11/9/2009 at 8:52 PM
		</div>
		<div class="comment_text"><p>One possible good use for my version though - since tags are text, this sql would allow me to use a generic search. If I did it via the inverse relationship, I'd first have to find matching tag objects based on names.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719579">6</a> by Kerr
		posted on 12/23/2009 at 6:40 PM
		</div>
		<div class="comment_text"><p>Well, Ray, I'm pretty green with CF ORM, and your post helped me to add m2m criteria to ORMExecute.  I've been reading here and there about using Hibernate's criteria API via the ORM session, but I haven't had the opportunity to really get into it.  I'm sure with time we'll see a lot more examples of the 'right' way to do this. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719580">7</a> by Kerr
		posted on 12/23/2009 at 6:41 PM
		</div>
		<div class="comment_text"><p>Oh, and the 'generic search' you mention in your last comment is my exact use case.  I have been retrofitting a legacy app with ORM, and the 20 field search form is proving to be quite the challenge!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719581">8</a> by Laura Hansen
		posted on 8/3/2012 at 5:24 AM
		</div>
		<div class="comment_text"><p>Thank you!</p><p>I have been searching for an example for a couple of days now.</p><p>I was trying to use the 'where' option on a 'many-to-many' property to filter out any items that have been marked as deleted. But the where clause for many-to-many properties actually queries the link table not the other object so I needed to create a custom function.</p><p>In any case, this is helpful!</p></div>
	</div>
</div>
		