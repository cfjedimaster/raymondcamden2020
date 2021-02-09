
<div class="comment" id="c_1713650112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650112">1</a> by Michael White
		posted on 2/13/2006 at 8:05 PM
		</div>
		<div class="comment_text"><p>since I'm sorta database centric I just created a table called events and saved the EventID, Collection, Action, Date and User and next to the link to re-index I just pull the last date and display it. That way my engineers know how long it's been since the last index and I can check who's been keeping it up to date (I don't tell them I'm storing their name, heh-heh-heh)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650119">2</a> by Michael White
		posted on 2/14/2006 at 7:59 PM
		</div>
		<div class="comment_text"><p>I also added a field for execution time so the user would have an idea about how long a wait he/she is in for and maybe they could choose to skip. But all this is moot if you would enlighten us on incremental updates to the search index. I am indexing "memo" fields from two different tables (Worklogs and Actions) and using a query to pull the data so there's not really a Title I'm using the worklog description as the title and the action description as the body and each table has it's own unique id column (I just picked the LogID to use as the key). You had mentioned that you usually use verity against data (rather than document files) so how do you handle it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650120">3</a> by Raymond Camden
		posted on 2/15/2006 at 7:45 PM
		</div>
		<div class="comment_text"><p>Incremental updates are simple - you just use the UPDATE action with cfindex. There is no reason to reindex all the data. You can also use DELETE to remove an item.</p></div>
	</div>
</div>
		