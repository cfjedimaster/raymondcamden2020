
<div class="comment" id="c_1713682641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682641">1</a> by Martijn van der Woud
		posted on 7/7/2008 at 3:05 AM
		</div>
		<div class="comment_text"><p>Ray your post inpired me to write some thought of representing sets of objects in two-dimensional arrays vs. arrays-of-structs vs. query objects.</p><p>I also included a UDF for sorting an array of structures on multiple keys, each key with it's own sort order. &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fmartijnvanderwoud.wordpress.com%2F2008%2F07%2F06%2Frepresentation-and-sorting-of-complex-data%2F%3ETake%3AdNIvzZo4_jvwWCZ4sL-WvUho5Ys&amp;cuid=3321886" rel="nofollow noopener" title="http://martijnvanderwoud.wordpress.com/2008/07/06/representation-and-sorting-of-complex-data/>Take">http://martijnvanderwoud.wo...</a> a look&lt;/a&gt; if you're interested!</p><p>Martijn van der Woud</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682643">2</a> by Martijn van der Woud
		posted on 7/7/2008 at 3:08 AM
		</div>
		<div class="comment_text"><p>messed up the url, sorry. The correct one is <a href="http://disq.us/url?url=http%3A%2F%2Fmartijnvanderwoud.wordpress.com%2F2008%2F07%2F06%2Frepresentation-and-sorting-of-complex-data%2F%3AhGBMnNYnJRhptad4qTvZRGKkTYs&amp;cuid=3321886" rel="nofollow noopener" title="http://martijnvanderwoud.wordpress.com/2008/07/06/representation-and-sorting-of-complex-data/">http://martijnvanderwoud.wo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682642">3</a> by Thomas Case (aka tc)
		posted on 7/7/2008 at 7:26 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I have trying to implement MergeSort to sort a collection of objects (Name/Value objects with CompareItem method), but haven't quite got it working.  The code is based on pseudo code from wikipedia and is provided below.  I still not sure where the error is, once it is done I will try to post to CFLib.</p><p>&lt;code&gt;<br>&lt;!--- Method: MergeSort ---&gt;<br>&lt;!--- based on pseudo code from http//<a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FMergeSort%3AXtTj0AlhRoC3V0Z72c64Kta9izU&amp;cuid=3321886" rel="nofollow noopener" title="en.wikipedia.org/wiki/MergeSort">en.wikipedia.org/wiki/Merge...</a> ---&gt;<br>&lt;cffunction name="ArrayMergeSort" access="private" output="false" returntype="Array"&gt;<br>&lt;cfargument name="PassedArray" type="Array" required="true" /&gt;<br>&lt;!--- Method variables ---&gt;<br>&lt;cfset var LeftArray = ArrayNew(1) /&gt;<br>&lt;cfset var RightArray = ArrayNew(1) /&gt;<br>&lt;cfset var ReturnArray = ArrayNew(1) /&gt;<br>&lt;cfset var Middle = 0 /&gt;<br>&lt;cfset var i = 1 /&gt;<br>&lt;!--- Method implementation ---&gt;<br>&lt;cfscript&gt;<br>    // if length is 1, return array<br>    if(ArrayLen(arguments.PassedArray) LTE 1) {<br>        ReturnArray = Arguments.PassedArray;<br>    } else {<br>    // Find middle<br>        middle = Int(ArrayLen(arguments.PassedArray)/2);<br>        step = "Calculated Middle as Value #middle#";<br>    // Append elements less than or equal to middle to left array<br>        for(i=1;i LTE middle;i = i+1){<br>           ArrayAppend(LeftArray,Arguments.PassedArray[i]);<br>        }<br>    // Append elements greater than middle to right array<br>        for(i=middle+1;i LTE ArrayLen(arguments.PassedArray);i=i+1){<br>          ArrayAppend(RightArray,Arguments.PassedArray[i]);<br>        }<br>    // Recursively call ArrayMergeSort on partitioned arrays<br>        LeftArray = ArrayMergeSort(LeftArray);<br>        RightArray = ArrayMergeSort(RightArray);<br>    // Merge arrays<br>        ReturnArray = ArrayMerge(LeftArray,RightArray);<br>    }<br>&lt;/cfscript&gt;<br>&lt;!--- Method Return ---&gt;<br>&lt;cfreturn ReturnArray /&gt;<br>&lt;/cffunction&gt;</p><p>&lt;!--- Method: Merge ---&gt;<br>&lt;!--- based on pseudo code from http//<a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FMergeSort%3AXtTj0AlhRoC3V0Z72c64Kta9izU&amp;cuid=3321886" rel="nofollow noopener" title="en.wikipedia.org/wiki/MergeSort">en.wikipedia.org/wiki/Merge...</a> ---&gt;<br>&lt;cffunction name="ArrayMerge" access="private" output="false" returntype="Array"&gt;<br>&lt;cfargument name="PassedArray1" type="Array" required="true" /&gt;<br>&lt;cfargument name="PassedArray2" type="Array" required="true" /&gt;<br>&lt;!--- Method variables ---&gt;<br>&lt;cfset var ReturnArray = ArrayNew(1) /&gt;<br>&lt;cfset var LeftArray = Arguments.PassedArray1 /&gt;<br>&lt;cfset var RightArray = Arguments.PassedArray2 /&gt;<br>&lt;cfset var i = 1 /&gt;<br>&lt;!--- Method implementation ---&gt;<br>&lt;cfscript&gt;<br>    // Loop through arrays until all items are removed from either<br>    // the left or right array and added to return array<br>    while(ArrayLen(LeftArray) GT 0 AND ArrayLen(RightArray GT 0)) {<br>        // if left item is less than right, then add to return array<br>        // Note: uses compareItem() method of NameValueItem<br>        if(LeftArray[1].compareItem(RightArray[1]) LTE 0) {<br>            ArrayAppend(ReturnArray,LeftArray[1]);<br>            ArrayDeleteAt(LeftArray,1);<br>        } else {<br>        // otherwise, add right item to return array<br>            ArrayAppend(ReturnArray,RightArray[1]);<br>            ArrayDeleteAt(RightArray,1);<br>        }<br>    }<br>    // If elements remain in Left array, append them to return array<br>    if(ArrayLen(LeftArray) GT 0) {<br>        for(i=1;i LTE ArrayLen(LeftArray);i = i +1) {<br>            ArrayAppend(ReturnArray,LeftArray[i]);<br>        }<br>    }<br>    // If elements remain in Right array, append them to return array<br>    if(ArrayLen(RightArray) GT 0) {<br>        for(i=1;i LTE ArrayLen(RightArray);i = i +1) {<br>            ArrayAppend(ReturnArray,RightArray[i]);<br>        }<br>    }<br>&lt;/cfscript&gt;<br>&lt;!--- Method return ---&gt;<br>&lt;cfreturn ReturnArray /&gt;<br>&lt;/cffunction&gt;<br>&lt;/code&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682644">4</a> by Raymond Camden
		posted on 7/7/2008 at 8:39 PM
		</div>
		<div class="comment_text"><p>@Martin - Cool stuff - thanks for sharing that.</p><p>@Thomas - Wow, your comment is bigger than my blog entry. ;) Normally I ask folks to _not_ paste giant blocks of code in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682646">5</a> by Thomas Case (aka tc)
		posted on 7/7/2008 at 10:18 PM
		</div>
		<div class="comment_text"><p>Sorry about that Ray.  I will try to be better in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682645">6</a> by Martijn van der Woud
		posted on 7/9/2008 at 12:13 PM
		</div>
		<div class="comment_text"><p>Just found this blog post: <a href="http://disq.us/url?url=http%3A%2F%2Fantcooper.com%2F2008%2F02%2F08%2Fmerge-sort-an-array-of-structures-in-coldfusion%2F%3AuBN-S43v1xJl2_K3ZyvsoLGuVbk&amp;cuid=3321886" rel="nofollow noopener" title="http://antcooper.com/2008/02/08/merge-sort-an-array-of-structures-in-coldfusion/">http://antcooper.com/2008/0...</a></p><p>It contains a UDF to do a merge-sort (presumably faster than bubble sort or insertion sort) on an array of structures, on one key. I haven't tried it yet but it could be useful for large datsets.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682647">7</a> by mgwalk
		posted on 8/28/2008 at 10:44 PM
		</div>
		<div class="comment_text"><p>I never can remember the syntax for this thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682648">8</a> by Martijn van der Woud
		posted on 9/27/2008 at 11:41 PM
		</div>
		<div class="comment_text"><p>I've made some improvements to my UDF. It is now capable of sorting arrays of beans (CFC's), as well as structures. It is available at <a href="http://disq.us/url?url=http%3A%2F%2Fmartijnvanderwoud.wordpress.com%2F2008%2F09%2F27%2Fa-udf-for-sorting-arrays-of-beans-instantiated-cfcs-or-arrays-of-structures%2F%3ARcIfKVVJ97vQPhqFIoTfFP2o05U&amp;cuid=3321886" rel="nofollow noopener" title="http://martijnvanderwoud.wordpress.com/2008/09/27/a-udf-for-sorting-arrays-of-beans-instantiated-cfcs-or-arrays-of-structures/">http://martijnvanderwoud.wo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682650">9</a> by Russ
		posted on 8/12/2012 at 11:55 AM
		</div>
		<div class="comment_text"><p>Hmm, I wonder if this is still an issue in CF 10, now that you can pass in a callback function to arraySort()? Seems like you could use that to do a recursive sort for multidimensional arrays.</p><p>@tc I actually spent a ton of time implementing a mergeSort algorithm in CF recently, only to replace it with arraySort. I just did a quick search of <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%3A_xxzCNK-l1o46U5-IF400HiKZ0A&amp;cuid=3321886" rel="nofollow noopener" title="cflib.org">cflib.org</a> and didn't see your mergeSort on there. Maybe I should post mine?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682651">10</a> by Raymond Camden
		posted on 8/12/2012 at 11:00 PM
		</div>
		<div class="comment_text"><p>Correct -  arraySort in CF10 would let you pass a closure- making this simpler.</p></div>
	</div>
</div>
		