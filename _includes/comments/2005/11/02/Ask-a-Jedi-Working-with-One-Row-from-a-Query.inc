
<div class="comment" id="c_1713622352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622352">1</a> by Ryan Guill
		posted on 11/3/2005 at 1:00 AM
		</div>
		<div class="comment_text"><p>You could do it a little bit more dynamic, if you wanted to be able to use the same code when you didnt know what all of the columns were (or didnt want to hardcode them in anyway) by using the columnlist attribute of the query recordset.  I suggest turning it into an array.  Some psuedo code:</p><p>columnsarray = listtoarray(query.columnlist)</p><p>then you could access a specific row by doing something like</p><p>rownum = 1</p><p>loop from=1 to=arraylen(columnsarray) index=i<br>  query[columnsarray[i]][rownum]<br>/loop</p><p>you may have to fiddle with it a little bit, but it will get you there, and without using evaluate()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622353">2</a> by Ryan Guill
		posted on 11/3/2005 at 1:03 AM
		</div>
		<div class="comment_text"><p>Just a follow up, youre going to have to do it like:</p><p>query["#columnsarray[i]#"][rownum]</p><p>just so you know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622354">3</a> by Raymond Camden
		posted on 11/3/2005 at 1:06 AM
		</div>
		<div class="comment_text"><p>You sure? I think your first way would work fine too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622355">4</a> by Ryan Guill
		posted on 11/3/2005 at 1:08 AM
		</div>
		<div class="comment_text"><p>possibly... im pulling this out of some code I did a few months back so Im not really sure...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622357">5</a> by Ryan Guill
		posted on 11/3/2005 at 1:20 AM
		</div>
		<div class="comment_text"><p>yep, youre right ray:</p><p> query[columnsarray[i]][rownum] will work just fine, no "# #" needed.</p></div>
	</div>
</div>
		