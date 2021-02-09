
<div class="comment" id="c_1713717211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717211">1</a> by Brenda
		posted on 7/19/2009 at 8:07 PM
		</div>
		<div class="comment_text"><p>Thanks Ray! I was looking for a similar function all week to help sort an array of structs passed from a C++ function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717213">2</a> by Ben Nadel
		posted on 7/19/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>Good stuff Ray. Don't worry about efficiencies. When computer scientist jump in with this sorting algorithm is better than that one, it's purely at the theoretical level. They rarely stop and realize that we're sorting small arrays where orders of magnitude in efficiencies can't even be felt in testing :) This is what my guidance counselor in college told me is the difference between Computer Engineers and Computer Scientists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717212">3</a> by Elliott Sprehn
		posted on 7/20/2009 at 4:02 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>Hmm, seems you should read about sorting algorithms. ;)</p><p>QuickSort is O(n log n) and that's as efficient as it gets for comparison based sorting. If you picked the worst pivot every time you could get O(n^2) but that doesn't happen in practice.</p><p>Surprised there's no MergeSort on cflib.</p><p>@Ben</p><p>That's a pretty silly thing to say! Algorithms are quite important. You take for granted every day that someone chose the right algorithm.</p><p>We walk on the shoulders of giants every day. Sometimes it's easy to forget the work they did because they did their job so well we don't notice until it's broken.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717208">4</a> by Ben Nadel
		posted on 7/20/2009 at 4:07 PM
		</div>
		<div class="comment_text"><p>@Elliott,</p><p>Sorry, I didn't mean to imply that algorithm choice was not to be taken seriously. All I meant was that at the small scale, which is where I think a lot of work, it doesn't make much of a difference. Obviously, the larger the sets of data get, the more important algorithm choice becomes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717210">5</a> by Raymond Camden
		posted on 7/20/2009 at 4:53 PM
		</div>
		<div class="comment_text"><p>See Ben, I _told_ you the computer scientists would jump on me. ;)</p><p>@Elliott: If you want to submit a MergeSort, that would be sweet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2278194398">
	<div>
		<img src="https://disqus.com/api/users/avatars/leeahoward.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2278194398">6</a> by leeahoward
		posted on 9/28/2015 at 3:07 PM
		</div>
		<div class="comment_text"><p>The quicksort udf you are using here doesn't seem to be there anymore(I know 6 years ago right).  Only quicksort2d is available and even it appears to be an older version from 2006.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2278464586">
	<div>
		<img src="https://disqus.com/api/users/avatars/leeahoward.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2278464586">7</a> by leeahoward
		posted on 9/28/2015 at 5:41 PM
		</div>
		<div class="comment_text"><p>Much thanks to the waybackmachine. . <a href="https://disq.us/url?url=https%3A%2F%2Fweb.archive.org%2Fweb%2F20090722030612%2Fhttp%3A%2F%2Fwww.cflib.org%2Fudf%2Fquicksort%3AnkTh9WCqgfKrlWJ4zpvXaDfC_OU&amp;cuid=3321886" rel="nofollow noopener" title="https://web.archive.org/web/20090722030612/http://www.cflib.org/udf/quicksort">https://web.archive.org/web...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2310078957">
	<div>
		<img src="https://disqus.com/api/users/avatars/10basetom.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2310078957">8</a> by 10basetom
		posted on 10/16/2015 at 7:53 AM
		</div>
		<div class="comment_text"><p>The UDF at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fudf%2FQuickSort%3Ar6BBsfRFFEBd0kssvL88s2ykmuk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/udf/QuickSort">http://www.cflib.org/udf/Qu...</a> appears to be different from the one used in this article. It's now called quickSort2D() instead of quickSort(). The required parameters are also different: arrayToSort, key, down, top</p></div>
	</div>
</div>
		