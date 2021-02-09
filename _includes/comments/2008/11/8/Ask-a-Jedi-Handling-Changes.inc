
<div class="comment" id="c_1713709787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709787">1</a> by larry c. lyons
		posted on 11/8/2008 at 11:21 PM
		</div>
		<div class="comment_text"><p>A simpler way would be to use the java removeAll method. First convert both lists to arrays</p><p>&lt;cfset original = "1,2,4,9"/&gt;<br>&lt;cfset selected = "1,2,5,9,10"/&gt;<br>&lt;cfset originalArray = listToArray(original)/&gt;<br>&lt;cfset selectedArray = listToArray(selected)/&gt;</p><p>Then use the removeAll method:<br>&lt;cfset selectedArray.equals</p><p>&lt;cfset removed =selectedArray.removeAll(originalArray)/&gt;</p><p>This will give you an array with all the items that are in the selected array that are not in the first.</p><p>regards,<br>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709788">2</a> by larry c. lyons
		posted on 11/8/2008 at 11:23 PM
		</div>
		<div class="comment_text"><p>I have to learn to edit my stuff better, forget about the equals methods.</p><p>BTW <a href="http://disq.us/url?url=http%3A%2F%2Fcoldfused.blogspot.com%2F2007%2F01%2Fextend-cf-native-objects-harnessing.html%3AVWUO8BtbGabNpC6FFxkowQoZ9DU&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfused.blogspot.com/2007/01/extend-cf-native-objects-harnessing.html">http://coldfused.blogspot.c...</a> gives a good summary of what you can do with the different java array and list functions.<br>regards,<br>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709785">3</a> by Raymond Camden
		posted on 11/8/2008 at 11:50 PM
		</div>
		<div class="comment_text"><p>@Larry - but even if that makes things a bit simpler, it isn't complete by itself. It would show you stuff added, but not removed. If I read you right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709779">4</a> by Critter
		posted on 11/9/2008 at 8:21 AM
		</div>
		<div class="comment_text"><p>Spongebob pops into my head</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709792">5</a> by dickbob
		posted on 11/10/2008 at 2:40 PM
		</div>
		<div class="comment_text"><p>Would a Venn diagram approach be useful?</p><p>There's a really useful ListVenn function on a popular website of UDF's called <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%3A_xxzCNK-l1o46U5-IF400HiKZ0A&amp;cuid=3321886" rel="nofollow noopener" title="cflib.org">cflib.org</a> which you may have heard of? ;-)</p></div>
	</div>
</div>
		