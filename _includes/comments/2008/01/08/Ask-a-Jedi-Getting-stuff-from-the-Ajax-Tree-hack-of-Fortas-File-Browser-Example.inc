
<div class="comment" id="c_1713675942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675942">1</a> by Dan Sorensen
		posted on 1/8/2008 at 7:56 PM
		</div>
		<div class="comment_text"><p>I &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fblog.dsoren.com%2F2007%2F11%2F29%2Foff-topic-coldfusion-8-cftree-cfwindow%2F%3AG5be-YYgsUaPMU4q8d7weqQcsno&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.dsoren.com/2007/11/29/off-topic-coldfusion-8-cftree-cfwindow/">http://blog.dsoren.com/2007...</a>"&gt;posted a slightly different way&lt;/a&gt; of getting the value of a cftree.  Clicking on the tree in my example calls the function and passes in it's own value for a cfwindow rather than an input, but the idea is the same. It's not perfect, but may spark some additional ideas. It's nice to see how you did it here: short and sweet. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675937">2</a> by Dan Sorensen
		posted on 1/8/2008 at 7:59 PM
		</div>
		<div class="comment_text"><p>Oops, I goofed up that last comment. Forgot I shouldn't use html... I said that I posted a slightly different method on my blog: <a href="http://disq.us/url?url=http%3A%2F%2Fblog.dsoren.com%2F2007%2F11%2F29%2Foff-topic-coldfusion-8-cftree-cfwindow%2F%3AG5be-YYgsUaPMU4q8d7weqQcsno&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.dsoren.com/2007/11/29/off-topic-coldfusion-8-cftree-cfwindow/">http://blog.dsoren.com/2007...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675943">3</a> by Dan Fredericks
		posted on 9/8/2010 at 8:36 PM
		</div>
		<div class="comment_text"><p>Can anyone help me with the the output from Ben's CFTree example? <br>When I copy the code to my machine (cfc and cfm), select a folder, and click a button to alert out my value (from ray's code above), it seems like the cfc code will display mulitple items not just the folder i clicked on.</p><p>Example:</p><p>C<br>testfolder1<br>testfolder2<br>      subtestfolder1<br>      subtestfolder2</p><p>if in cftree i click down to subtestfolder2, here is the display i get when i dump the myval:</p><p>C:\testfolder2\C:\testfolder2subtestfolder2</p><p>if you look at Ben's post, one of the last comments, someone asked about this same problem.</p><p>thanks<br>Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675946">4</a> by Dan Fredericks
		posted on 9/8/2010 at 9:10 PM
		</div>
		<div class="comment_text"><p>Hey,<br>so after playing around some, and using node instead of path in the getElementValue, i was able to get the right folder i selected. Not sure why path was an issue, but it was.</p><p>dan</p></div>
	</div>
</div>
		