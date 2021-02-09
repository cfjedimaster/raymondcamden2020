
<div class="comment" id="c_1713658120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658120">1</a> by BL
		posted on 10/10/2006 at 10:33 AM
		</div>
		<div class="comment_text"><p>Thanks.  I think this will definitely help me out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658114">2</a> by Mark Drew
		posted on 10/10/2006 at 11:10 AM
		</div>
		<div class="comment_text"><p>This is a great hint Ray. I shall have to post all the work I have been doing with spry. Although currently one of the main limitations that I find is that it cant have complex data with in a spry dataset, wonder when they are releasing an update?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658121">3</a> by Raymond Camden
		posted on 10/10/2006 at 3:01 PM
		</div>
		<div class="comment_text"><p>Mark, what do you mean by complex? The dataset can be as complex as the XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658123">4</a> by Mark Drew
		posted on 10/10/2006 at 3:29 PM
		</div>
		<div class="comment_text"><p>For example I cant return something like<br>&lt;code&gt;<br>-root<br>  -product<br>   -name<br>   -relatedproducts<br>     -product<br>       -name<br>&lt;/code&gt;</p><p>i.e. a prouct has a number of related products, when I select that product, I want another region to give me the related products, each of those products might contain more products etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658126">5</a> by Raymond Camden
		posted on 10/10/2006 at 5:45 PM
		</div>
		<div class="comment_text"><p>That should be possible - but you will need to write JS code. You would need to use the select observer and then manually grab that data out of the set. It _should_ be possible. If not, maybe send me over your XML and I'll try to get it to work.</p></div>
	</div>
</div>
		