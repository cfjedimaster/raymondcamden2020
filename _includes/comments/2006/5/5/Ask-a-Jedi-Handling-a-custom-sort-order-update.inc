
<div class="comment" id="c_1713652578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652578">1</a> by Jochem van Dieten
		posted on 5/5/2006 at 3:27 PM
		</div>
		<div class="comment_text"><p>Just use sort, order (as in "ORDER BY") is a fully reserved word in SQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652576">2</a> by Raymond Camden
		posted on 5/5/2006 at 3:32 PM
		</div>
		<div class="comment_text"><p>Thanks Jochem. I knew I was doing something wrong, I just had it flipped. Can I blame it on the fact that I didn't have my first cup of coffee yet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652580">3</a> by Mark
		posted on 5/5/2006 at 3:45 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, that seems to have clarified things for me, particulalry the inserting or deleting a record. For some reason I've always had a bit of difficulty getting my head around the easiest way to do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652575">4</a> by Michael White
		posted on 5/5/2006 at 6:00 PM
		</div>
		<div class="comment_text"><p>I was trying to race everybody to say DONT use Order!! But in California it's only 6:45am I ran into that problem myself and renaming the field later is a pain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652559">5</a> by Raymond Camden
		posted on 5/5/2006 at 6:07 PM
		</div>
		<div class="comment_text"><p>So I felt bad enough to edit the entry. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652582">6</a> by Teddy Payne
		posted on 5/5/2006 at 6:35 PM
		</div>
		<div class="comment_text"><p>If I had a DVD list and I wanted them sent out in a prticular order, then I would have to ask a simple question: Do you really want to change the order of the DVD at a later date?</p><p>If teh answers is "no," then just put a date on the insert of the item and send them out by date.</p><p>If the answers is yes, then I would suggest a bridge table between DVD and order of the DVDs.</p><p>The first table would have:</p><p>dvd_id(PK), dvd_title<br>1, Forrest Slump<br>2, Star Floors<br>3, Days of Blunder</p><p>The second table would be:</p><p>dvd_id(FK), Order, Invoice(FK)<br>1, 2, 1<br>2, 1, 1<br>3, 3, 1</p><p>The third table would be:</p><p>invoice_id(PK)<br>1</p><p>Order the bridge table and update only the smallest associative table.</p><p>I like AJX for cool widgets to visually sort elements:<br><a href="http://disq.us/url?url=http%3A%2F%2Fdemo.script.aculo.us%2Fajax%2Fsortable_elements%3AzFBKyQ1ajPAVnafLzER3uOj8NHw&amp;cuid=3321886" rel="nofollow noopener" title="http://demo.script.aculo.us/ajax/sortable_elements">http://demo.script.aculo.us...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652583">7</a> by Raymond Camden
		posted on 5/5/2006 at 6:43 PM
		</div>
		<div class="comment_text"><p>Well Teddy, I think that was the point. He couldn't order by a date or by name because he wanted a custom sort. Your solution seems like it would support custom sorting per invoice. Right? I can see that being useful if you needed N sorts per list. If you just needed one sort, then I'd keep the sort column in the original db.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652584">8</a> by Teddy Payne
		posted on 5/5/2006 at 7:11 PM
		</div>
		<div class="comment_text"><p>Ray,<br>The invoice portion could be any entity to help provide multiple lists.  I missed the one list feature.  =)  ]</p><p>I guess I am just data anal.  I usually don't set my order scheme as a descriptor of my data scheme.</p><p>You are right though.  You can have one table to do everything and order based upon how you set the number of the ordering column.  I was thinking probably thinking of larger lists.</p><p>Sorry!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652560">9</a> by Raymond Camden
		posted on 5/5/2006 at 7:15 PM
		</div>
		<div class="comment_text"><p>No reason to be sorry. You shared an interesting alternative!</p></div>
	</div>
</div>
		