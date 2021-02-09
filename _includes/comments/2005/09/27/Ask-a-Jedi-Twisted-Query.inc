
<div class="comment" id="c_1713620984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620984">1</a> by Will Belden
		posted on 9/27/2005 at 11:04 PM
		</div>
		<div class="comment_text"><p>I have to ask this...isn't placing the &lt;cfoutput&gt;'s within each of the loops kind of like starting and stopping your engine at every stop sign?  I could be wrong, but it seems I read that somewhere...</p><p>In your example, assuming three columns and just three rows, that's (1 in outer loop, 3 in inner loop) * 3 = 4*3 = 12 start/stop's of &lt;cfoutput&gt;.  Is this the best way to do it?  (You're the Jedi, after all!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621058">2</a> by Raymond Camden
		posted on 9/27/2005 at 11:39 PM
		</div>
		<div class="comment_text"><p>Not really, afaik. It just tells CF where to look for dynamic variables. I don't think there is much reason to be concerned. Now, let's take the issue and make it more general. Some folks are VERY anal with their cfoutputs, and only put them around a variable, while some folks don't mind if a paragraph of static text is inside a cfoutput. I'm one of those people. CF simply ignores the static text, so it doesn't matter how "big" your cfoutput is, or how small I'd say. Or if it have a performance difference, it is too small to really measure. My 2 cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621054">3</a> by Ray Horn
		posted on 9/28/2005 at 12:00 AM
		</div>
		<div class="comment_text"><p>This is also known as "pivoting" a Table.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621057">4</a> by Gareth
		posted on 9/28/2005 at 1:57 AM
		</div>
		<div class="comment_text"><p>Shouldnt the #name# include the query name? I mean, best practices scope your variables. In a large query how do you know where #name# comes from? Should it be #<a href="http://disq.us/url?url=http%3A%2F%2Fdata.name%3AYj9b_ZnTd0nDBssIrOWyjoXhAwA&amp;cuid=3321886" rel="nofollow noopener" title="data.name">data.name</a>#? did you just leave it out for a simple example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621097">5</a> by Raymond Camden
		posted on 9/28/2005 at 2:01 AM
		</div>
		<div class="comment_text"><p>Heh, well, there are more than one view on that. To me, my best practice is to use the full scope for everything BUT Variables scope and CFQuery scope. So I use it for server, application, url, form, cookie, un, arguments and attributes, and I think that is it. That's my opinion. Folks my disagree.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621056">6</a> by Raymond Camden
		posted on 9/28/2005 at 7:27 AM
		</div>
		<div class="comment_text"><p>Ray Horn - thanks. I _knew_ there was a name for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621055">7</a> by Che
		posted on 9/28/2005 at 5:30 PM
		</div>
		<div class="comment_text"><p>Evaluate = the tool of the Devil. Too funny. :)</p></div>
	</div>
</div>
		