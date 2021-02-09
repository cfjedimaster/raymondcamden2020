
<div class="comment" id="c_1713670447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670447">1</a> by Ben Nadel
		posted on 8/20/2007 at 6:52 PM
		</div>
		<div class="comment_text"><p>ColdFusion is actually a little inconsistent with this. Using the array notation sometimes treats it as a column, but sometimes not. For example, you can sum the "column" using:</p><p>ArraySum( Query[ "column" ] )</p><p>... however, you cannot get the value list of the column:</p><p>ValueList( Query[ "column" ] )</p><p>... that throws an error - only allows dot-notation. Also, if you try to treat it as a string:</p><p>Query.column.ReplaceAll()</p><p>... throws an error cause "ReplaceAll" is not a method on the column. You have to do something like:</p><p>ToString( Query.column ).ReplaceAll()</p><p>Like I said, very inconsistent as to when the data type is cast or something, but once you get a feel for it, you can begin to see where problems might crop up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670453">2</a> by George Bridgeman
		posted on 8/20/2007 at 7:04 PM
		</div>
		<div class="comment_text"><p>Gets even more weird if you add another row to your query object. If you call it locally, it'll just add the first row to the struct. Call it remotely and it'll add the last row. Still returns an array for remote and literals for local, as well.</p><p>&lt;cfcomponent output="false"&gt;<br>	&lt;cffunction name="invokeFunction" access="remote" returntype="struct"&gt;<br>		&lt;cfscript&gt;<br>			var MyQuery=QueryNew('ColumnA,ColumnB');<br>			var MyStruct=structnew();<br>			// Populate 1 row of the query<br>			QueryAddRow(MyQuery);<br>			QuerySetCell(MyQuery, 'ColumnA', 'ValueA1');<br>			QuerySetCell(MyQuery, 'ColumnB', 'ValueB1');<br>			QueryAddRow(MyQuery);<br>			QuerySetCell(MyQuery, 'ColumnA', 'ValueA2');<br>			QuerySetCell(MyQuery, 'ColumnB', 'ValueB2');<br>			// Copy the values of that row to a struct<br>			MyStruct.KeyA=MyQuery['ColumnA'];<br>			MyStruct.KeyB=MyQuery['ColumnB'];<br>		&lt;/cfscript&gt;<br>		&lt;cfreturn MyStruct /&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670454">3</a> by Raymond Camden
		posted on 8/20/2007 at 7:04 PM
		</div>
		<div class="comment_text"><p>It's always bugged me that valueList didn't allow for this format.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670457">4</a> by George Bridgeman
		posted on 8/20/2007 at 7:12 PM
		</div>
		<div class="comment_text"><p>If you use dot notation you get the same results for local and remote calls.</p><p>MyStruct.KeyA=MyQuery.ColumnA;<br>MyStruct.KeyB=MyQuery.ColumnB;</p><p>Weird :s</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670455">5</a> by Raymond Camden
		posted on 8/20/2007 at 7:15 PM
		</div>
		<div class="comment_text"><p>It just makes the point - always use a row number. I try to always do this except when I'm in a simple cfoutput query=.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670458">6</a> by Rick Hopper
		posted on 8/20/2007 at 7:24 PM
		</div>
		<div class="comment_text"><p>I came across something recently which may be related to this.</p><p>I was working with some code that used the &lt;CFX_CYBERCASH&gt; custom tag, and I noticed that the query it was returning contained duplicates of each column (each column was listed twice in the query).  I'm not sure why the query has duplicate columns, but I didn't worry about it.</p><p>Later, I looped over the query's columnlist to create a struct holding a key for each query column.  This seemed to work fine, giving me what appeared to be a normal struct of simple values; when I dumped out the struct, everything appeared as expected.  Below is the code I had used to fill my struct.</p><p>&lt;cfloop index="k" list="#my_query.columnlist#"&gt;<br>	&lt;cfset my_struct[k] = my_query[k]&gt;<br>&lt;/cfloop&gt;</p><p>As I continued to program, I eventually tried to do something with my struct values that required them to be simple values (I can't remember what I had done - used ListAppend function to create a list of certain values, I think).  At this point, I started getting an error saying that the value in my struct element was not a simple value.  After playing around a while, I started testing the value with various decision functions and realized that the contents of the struct element were seen as an array.</p><p>Thinking back to the query, I remembered that there had been duplicate columns.  So, it seemed as though I was getting an array of values assigned to my struct element instead of the simple values that appeared to be going in (like I mentioned, the dump didn't show an array).</p><p>I changed my code to the following where I specify the query row, and it fixed the issue.</p><p>&lt;cfloop index="k" list="#my_query.columnlist#"&gt;<br>	&lt;cfset my_struct[k] = my_query[k][1]&gt;<br>&lt;/cfloop&gt;</p><p>I'm not sure if this is directly related or if I even understand it correctly, but it seemed to be due to a similar issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670456">7</a> by George Bridgeman
		posted on 8/21/2007 at 1:56 PM
		</div>
		<div class="comment_text"><p>Specifying a row number is cool if you only want one row but if you want to set the struct key to be an array with all the rows from a column in the query, you'd have to do it manually via a loop. If you add two rows to the query then do MyStruct.KeyA=MyQuery['ColumnA'] (or by using dot notation), it'll only copy one element in the array to the struct. Even though ArrayLen(MyQuery['ColumnA']) returns 2.</p><p>Surely that's not right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670459">8</a> by Rick Hopper
		posted on 8/21/2007 at 4:06 PM
		</div>
		<div class="comment_text"><p>I'm sorry, I didn't explain that well.  The query only contained a single row of data.  I wouldn't have copied to a structure if there had been multiple rows, because as you pointed out, the second row of data would just overwrite the first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670460">9</a> by Rick Hopper
		posted on 8/21/2007 at 5:41 PM
		</div>
		<div class="comment_text"><p>Below is a link to a screenshot of what I had explained in my initial comment.  The image shows the intial query with a single row and duplicate columns (a few of them anyway).  It then shows the struct that was created from my loop (where I didn't specify row number 1).  Finally, I looped over the structure, displaying the results of the IsSimpleValue and IsArray functions on each value.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fi167.photobucket.com%2Falbums%2Fu157%2Frhop10%2Fcf_struct_array.gif%3Ak-x_EwePcLDy5ZCNpmne8Qd8Rd4&amp;cuid=3321886" rel="nofollow noopener" title="http://i167.photobucket.com/albums/u157/rhop10/cf_struct_array.gif">http://i167.photobucket.com...</a></p><p>Even though the dump of the struct doesn't show it, each struct element is seen as an array.  I suspect that has to do with the duplicate query columns.</p></div>
	</div>
</div>
		