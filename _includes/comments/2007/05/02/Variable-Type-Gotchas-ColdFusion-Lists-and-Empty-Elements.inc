
<div class="comment" id="c_1713664636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664636">1</a> by Andy Sandefer
		posted on 5/3/2007 at 1:31 AM
		</div>
		<div class="comment_text"><p>Well I kind of agree.  The thing is that a lot of old school programming languages had functions to compress simple lists and arrays so that you'd have the best of both worlds.  If you wanted to leave the empties alone find - don't do anything and loop through them, but if you wanted to eradicate them then CompressArray away you went, but like all good things this came at a speed cost.  <br>In my humble opinion there is a reason for everything.  For instance look at Lists in C++, for those of you who aren't familiar they're just sequences of elements stored in a linked list.  And compared to Vectors they are waaaay fast for insertions and deletions - but they're slow slow slow for random access activities.  This came to mind when I read your post because if speed is what you need, and every web app does, then it is natural to ignore empty list elements at a the system level.  This is what makes all of ColdFusion's deadly fast and wickedly cool list functions so blindingly fast, well I think that they're cool and fast but I'm sure somebody is reading this calling me an idiot.  Anyway, just digital food for thought.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664635">2</a> by Lola LB
		posted on 5/3/2007 at 4:17 AM
		</div>
		<div class="comment_text"><p>Yeah . . . got bitten by this at least once in the past.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664637">3</a> by Max Nyman
		posted on 5/3/2007 at 6:19 PM
		</div>
		<div class="comment_text"><p>For cases like this I always use the Java split() function. Sure it will result in an Array instead of a List, but does it really matter?</p><p>So to get a length of the List in your example I would do: ArrayLen(names.split(","))</p></div>
	</div>
</div>
		