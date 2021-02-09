
<div class="comment" id="c_1713621439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621439">1</a> by Steve House
		posted on 10/17/2005 at 9:48 PM
		</div>
		<div class="comment_text"><p>I've seen some issues on the forums related to cfdocument "hanging".  Some users have suggested that this can be a result of bad or incomplete HTML.  We are experiencing cfdocument "hanging" now.  Do you think this could be a cause?  I can't say for 100% that there is not a single syntax problem in the HTML, but I am surprised it would completely hang up all of our cfdocument generation tasks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621440">2</a> by Ali
		posted on 10/17/2005 at 9:59 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for giving us a glimpse of what's going on at MAX.  Not all of us can make the conferences, and it's good to get a report of what's going on.  It seems that nowadays that most of us that don't get to go to all the various CF related conferences are pretty much SOL or left in the dark as to what gets presented or discussed.</p><p>Not too long ago, this wasn't the case, it seemed that a lot more people would give rundowns on what went on and/or provide some of the sample codes.  Now it seems that maybe 1, or at most 2 people will blog about it, and we don't get to see any snippets anymore.</p><p>Thanks again for this report and for the "ask a jedi" section.  They are really invaluable and I look forward to them every day.</p><p>-A</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621436">3</a> by Ben Nadel
		posted on 10/17/2005 at 10:12 PM
		</div>
		<div class="comment_text"><p>As far as multiple header / footer, we came up with something fairly great as a "hack" for this issue. While we cannot use page numbers as part of CFIF statements, we CAN USE THEM as part of CSS class name:</p><p>&lt;style&gt;<br>  div.footer div.f1 { display: none; }<br>  div.footer div.f2 { display: block ; }<br>  div.footer div.page1 div.f1 { display: block; }<br>  div.footer div.page1 div.f2 { display: none ; }<br>&lt;/style&gt;</p><p>&lt;div class="footer"&gt;<br>  &lt;div class="page#CFDOCUMENT.CurrentPageNumber#"&gt;<br>    &lt;div class="f1"&gt;<br>      Footer version ONE<br>    &lt;/div&gt;<br>    &lt;div class="f2"&gt;<br>      Footer version TWO<br>    &lt;/div&gt;<br>  &lt;/div&gt;<br>&lt;/div&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621442">4</a> by Ben Nadel
		posted on 10/17/2005 at 10:13 PM
		</div>
		<div class="comment_text"><p>Follow up to my last comment: ONLY WORKS if CSS classes are declared IN THE FOOTER ITEM.</p></div>
	</div>
</div>
		