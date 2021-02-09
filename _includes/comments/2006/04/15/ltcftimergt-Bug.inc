
<div class="comment" id="c_1713651877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651877">1</a> by Ben Nadel
		posted on 4/16/2006 at 5:41 PM
		</div>
		<div class="comment_text"><p>I just wanted to add a note about outputting. I am not at my dev computer right now, so I can't test this, but I am fairly sure that CFDump will not produce output if inside a CFSilent tag (unless you CFabort inside the tag, in which case the CFSilent seems to not take place).</p><p>Additionally, CFDump does not display output in CFcomponents that have no output (output="no").</p><p>Now, this could be way off, but I think I even remember running into a problem where GetPageContext().GetOut().ClearBuffer() didn't even do anything when inside a CFSilent tag.  But I could be totally wrong there.</p><p>Bottom line though, while any CF tag that generates content should be treated like a CFoutput tag, I don't think it should just be assumed that this actually puts content in the page output.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651893">2</a> by Raymond Camden
		posted on 4/16/2006 at 5:57 PM
		</div>
		<div class="comment_text"><p>That is a good point. I would assume cfsilent would trump all. So when I said cftimer should 'always' spit out, I meant in the same way that other tags like cfdump, cftable, etc, would act.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651902">3</a> by John Farrar
		posted on 4/17/2006 at 8:26 PM
		</div>
		<div class="comment_text"><p>I love it Ray... you reported bugs to the "WISH" list? Is that supposed to be a joke? You wish they would fix the bugs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651894">4</a> by Raymond Camden
		posted on 4/17/2006 at 8:33 PM
		</div>
		<div class="comment_text"><p>Um. That isn't a joke. It's just the URL. They use it for both bug reports and feature requests. And I know for a fact they monitor as I've seen updates based on my submission.</p></div>
	</div>
</div>
		