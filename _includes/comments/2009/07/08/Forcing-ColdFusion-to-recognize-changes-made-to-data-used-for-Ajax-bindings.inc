
<div class="comment" id="c_1713716668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716668">1</a> by Edward Beckett
		posted on 7/8/2009 at 10:42 PM
		</div>
		<div class="comment_text"><p>That's Just What I Needed ...</p><p>More Cowbell ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716671">2</a> by todd sharp
		posted on 7/8/2009 at 10:59 PM
		</div>
		<div class="comment_text"><p>There's also ColdFusion.Bind.assignValue - see:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Fclient%2Findex.cfm%2F2007%2F10%2F22%2FRefreshing-A-Bound-CFSelect%3AXWbe2M8ObbQ37ucNGjYNLGrsnQ8&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/client/index.cfm/2007/10/22/Refreshing-A-Bound-CFSelect">http://cfsilence.com/blog/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716669">3</a> by James Lamar
		posted on 7/9/2009 at 7:53 PM
		</div>
		<div class="comment_text"><p>Could you include all the working files? I'm in process of learning jQuery and AJAX mixed with CF and I'm having trouble following. It would help to see a complete working sample with cfc and all. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716670">4</a> by Raymond Camden
		posted on 7/10/2009 at 2:15 AM
		</div>
		<div class="comment_text"><p>I don't have the code anymore. Sorry. The main file's CFDIV was something like:</p><p>&lt;cfdiv source="url:test3.cfm?name={name}" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716673">5</a> by Darrin
		posted on 10/19/2011 at 12:07 PM
		</div>
		<div class="comment_text"><p>How about setting N related list</p><p>I have twolist:<br>&lt;cfselect name="actioningDD" id="actioningDD" bind="cfc:rfi.cfcs.RFIs.rfi_getActioningItems()" bindonload="true"/&gt;</p><p>the other: &lt;cfselect name="elementDD" id="elementDD"  bind="cfc:rfi.cfcs.RFIs.ref_getElements({actioningDD})"  /&gt;</p><p>in a js file I set the first list using : <br>$("#actioningDD").val(actioning);<br>ColdFusion.Event.callBindHandlers('actioningDD',null,'change');</p><p>but when I set the value of the second using : <br>$("#elementDD").val(element);</p><p>it does not set the list to that item as being selected.</p><p>ANy ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716674">6</a> by Raymond Camden
		posted on 10/19/2011 at 4:24 PM
		</div>
		<div class="comment_text"><p>How could it though? In a typical related list "UI metaphor" (forgive the fancy words there), items in B are driven by a selection in A,not the other way around. You may have items in B that show up with select you A[1] and A[N]. It isn't always a unique set per every selection in A. Therefore, there is no way to assume A[N] based on B[N]. (IMHO)</p></div>
	</div>
</div>
		