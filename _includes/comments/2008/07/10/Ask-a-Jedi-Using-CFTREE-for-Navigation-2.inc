
<div class="comment" id="c_1713682780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682780">1</a> by todd sharp
		posted on 7/10/2008 at 6:15 PM
		</div>
		<div class="comment_text"><p>Another possiblity to handle multiple roots and to check depth is to pass the path instead of the node.  Then you can split it with JS based on the delimiter (default is '\') and check the length of the array.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682793">2</a> by Mark
		posted on 7/14/2008 at 2:58 PM
		</div>
		<div class="comment_text"><p>Surely people want a tree with drag and drop?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682794">3</a> by Raymond Camden
		posted on 7/14/2008 at 3:23 PM
		</div>
		<div class="comment_text"><p>Why? If the tree is being used for navigation, then I don't see how drag and drop would be useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682792">4</a> by TD
		posted on 1/14/2009 at 11:32 PM
		</div>
		<div class="comment_text"><p>Is there any way to do this with &lt;cftree format="flash"? ...i want to use the flash format to keep the overall look-and-feel consistent. Thanks in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682788">5</a> by Chris Ulrich
		posted on 2/5/2009 at 7:45 PM
		</div>
		<div class="comment_text"><p>Great tip Ray - thanks.  I adapted it to do something similar with tabbed layouts.</p><p>On the left side of the screen is the tree, on the right side is a tabbed layout.  inside each layout is a uniquely named CFDIV, and the javascript is:</p><p>function doNav(n) {<br>  if(n != 'root') {	<br>    ColdFusion.navigate('add.cfm?action=add&amp;id='+n,'adddiv');<br>    ColdFusion.navigate('add.cfm?action=edit&amp;id='+n,'editdiv');<br>   }<br>}</p><p>This forces both tabs to load, one with an add form (and the node ID as a hidden field) and the other tab with an edit form (again, with the NodeID as a hidden field).</p><p>Easy way to edit the tree.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682789">6</a> by Chris Ulrich
		posted on 2/5/2009 at 7:46 PM
		</div>
		<div class="comment_text"><p>Correction:</p><p>This actually forces both CFDIVs to load, each of them being in a CFTAB.  It doesn't reload the CFLAYOUTAREA ... it is reloading the CFDIV in the CFLAYOUTAREA</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682791">7</a> by Alan
		posted on 5/16/2012 at 11:31 AM
		</div>
		<div class="comment_text"><p>i don't get it. Since CF is using EXT library, how come all functionality is not in. I have few cases i am using drag and drop other than navigation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682795">8</a> by Raymond Camden
		posted on 5/16/2012 at 2:39 PM
		</div>
		<div class="comment_text"><p>Simple - CF is providing a tag based API to Ext. It covers the features that Adobe assumed most developers would want. For things outside of that, an API is provided so that in JavaScript, you can get the core object and do what you will.</p></div>
	</div>
</div>
		