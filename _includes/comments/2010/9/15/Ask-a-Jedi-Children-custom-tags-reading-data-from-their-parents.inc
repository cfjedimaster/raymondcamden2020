
<div class="comment" id="c_1713726507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726507">1</a> by Micah
		posted on 9/15/2010 at 9:00 PM
		</div>
		<div class="comment_text"><p>Woudlnt that last example be?:</p><p>My name is #parentData.attributes.firstname# #parentData.attributes.lastname#.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726518">2</a> by Micah Brown
		posted on 9/15/2010 at 9:04 PM
		</div>
		<div class="comment_text"><p>err never mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726516">3</a> by todd sharp
		posted on 9/15/2010 at 9:04 PM
		</div>
		<div class="comment_text"><p>@Micah No, because firstname is an attribute of cf_child, not cf_parent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726523">4</a> by Edward Beckett
		posted on 9/15/2010 at 9:13 PM
		</div>
		<div class="comment_text"><p>Thanks for the share ... I learned me something today.  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726521">5</a> by MikeG
		posted on 9/15/2010 at 10:57 PM
		</div>
		<div class="comment_text"><p>So, how does CFASSOCIATE fit into this?  That tag always confused me; not so much how to use it, but when to use it..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726522">6</a> by Raymond Camden
		posted on 9/15/2010 at 11:01 PM
		</div>
		<div class="comment_text"><p>It goes the other way. "Take my data and share it with my parent." I'll happily do a follow up post that reverse the above example if you would like.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726515">7</a> by MikeG
		posted on 9/15/2010 at 11:04 PM
		</div>
		<div class="comment_text"><p>Like I said, I get how it works, just never came across anything that I might use it for..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726520">8</a> by Raymond Camden
		posted on 9/15/2010 at 11:06 PM
		</div>
		<div class="comment_text"><p>Oh - duh. Well as I said in the blog entry - if your logic is in your parent mainly, then it makes sense to communicate from child to parent. So in my datatable custom tag, the children help define table columns. So they "describe" how datatable should work, so it makes sense for them to send their data to the parent.</p><p>In Chris's case, the children are doing the main work, but the parent has an impact on them. So it makes sense to go from parent to child.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726526">9</a> by SuperAlly
		posted on 9/16/2010 at 1:21 AM
		</div>
		<div class="comment_text"><p>Ray... This may be completely unrelated, but it sounds like it could have a similar answer, forgive me if I'm way off base...</p><p>I have jquery tabs.  In one tab there is a &lt;cfdiv&gt;, if I put &lt;a href="#tabtwo"&gt; inside the tab, but outside the cfdiv, it switches tabs, but if I put the same &lt;a href="#tabtwo"&gt; inside the cfdiv, it just adds #tabtwo to the address bar.</p><p>could some sort of reference to the parent of the cfdiv help in a case like that?  Or am I completely off base?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726524">10</a> by Raymond Camden
		posted on 9/17/2010 at 1:06 AM
		</div>
		<div class="comment_text"><p>Um, no idea. Ping me off this entry though as it isn't really the same topic. Show me some code when ya do of course.</p></div>
	</div>
</div>
		