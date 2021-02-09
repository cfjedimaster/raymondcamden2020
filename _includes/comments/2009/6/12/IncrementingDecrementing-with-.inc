
<div class="comment" id="c_1713716048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716048">1</a> by Joe Bodell
		posted on 6/12/2009 at 10:56 PM
		</div>
		<div class="comment_text"><p>Would using 'x += 1' be a way around this behavior? It's obviously not as short, but is more consistent when you have to increment (or decrement, for that matter) by steps greater than one....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716049">2</a> by Joe Bodell
		posted on 6/12/2009 at 10:58 PM
		</div>
		<div class="comment_text"><p>And as soon as I go to write an example, I see why they're not comparable cases....never mind me /slinks away :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716053">3</a> by Jim Connor
		posted on 6/12/2009 at 11:36 PM
		</div>
		<div class="comment_text"><p>I'm not sure if this applies to the ColdFusion implementation or not, but in the C/C++ world, it's almost always better to use the ++x version for performance reasons.</p><p>In the x++ version, the value of x has to be temporarily stored so it can be returned after the increment.</p><p>In the ++x version, you can just return the value of x, eliminating the need to store a temporary value.</p><p>So unless you have a special reason to use the x++ version, I would switch to the ++x version in all cases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716051">4</a> by Alan McCollough
		posted on 6/13/2009 at 12:38 AM
		</div>
		<div class="comment_text"><p>Seems like good ol "x=x+1" is a bit more inutitive ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716052">5</a> by .jonah
		posted on 6/16/2009 at 7:16 AM
		</div>
		<div class="comment_text"><p>One of my favorite CF8 features. ;)</p><p>++x is generally called preincrement and x++ is postincrement.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FIncrement%3Aj4OyEsumSV4xIJcThpg-4zu0w9Y&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Increment">http://en.wikipedia.org/wik...</a></p></div>
	</div>
</div>
		