
<div class="comment" id="c_1713620854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620854">1</a> by Steve House
		posted on 9/19/2005 at 3:39 PM
		</div>
		<div class="comment_text"><p>Another related point here is that arrays are passed by value but if the array elements contain objects then those objects are passed by reference.  That one bites me from time to time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620855">2</a> by duncan
		posted on 9/19/2005 at 6:22 PM
		</div>
		<div class="comment_text"><p>can't you use &lt;cfset data[x] = StructCopy(ob)&gt; , to get the struct passed by value not reference?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620851">3</a> by Raymond Camden
		posted on 9/19/2005 at 6:24 PM
		</div>
		<div class="comment_text"><p>No. Ignore components for a second. structCopy by itself is 'bad' and I never recommend folks using it, because it can also create pointer copies. It basically only works if the structure just contains simple values. If you structCopy a struct of structs, for example, you get pointers. So thats point a), never use structCopy. Point b) is, a component isn't a struct, so the function wouldn't work on it anyway.</p></div>
	</div>
</div>
		