
<div class="comment" id="c_1713620644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620644">1</a> by Demian
		posted on 9/9/2005 at 11:48 PM
		</div>
		<div class="comment_text"><p>Thanks for this, you don't give yourself enough credit while I'm sure a more elegant solution might be possible, this solves a very real world problem, today!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620643">2</a> by Justin Cook
		posted on 9/22/2005 at 1:22 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Would you happen to ever have put this into a custom tag? I have to use this on the same page three times, and I know from your slush box custom tag that it really made things easier and less complicated. If you haven't, could you point out the items to throw into the custom tag and those to leave out?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620646">3</a> by Justin
		posted on 2/21/2006 at 8:53 PM
		</div>
		<div class="comment_text"><p>Ray:<br>Thanks for your post. It helped me figure out how to move items up and down in a cfgrid. Here's the code for anyone who may have to tackle that feature.<br>Thanks,<br>Justin</p><p>&lt;!--- helper function to swap rows in a data grid. ---&gt;<br>function swapGridRows(grid:mx.controls.DataGrid, index1:Number, index2:Number):Void {<br>	var item1,item2 = {};<br>	item1 = grid.dataProvider.getItemAt(index1);<br>	item2 = grid.dataProvider.getItemAt(index2);</p><p>	grid.dataProvider.removeItemAt(index2);<br>	grid.dataProvider.addItemAt(index2, item1);<br>	grid.dataProvider.removeItemAt(index1);<br>	grid.dataProvider.addItemAt(index1, item2);<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620645">4</a> by John
		posted on 4/17/2008 at 12:46 AM
		</div>
		<div class="comment_text"><p>The Slush link for the left/right select boxes returns a 404 error but it wasn't hard to duplicate the functionality using the code given here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620647">5</a> by David L
		posted on 11/14/2008 at 12:36 AM
		</div>
		<div class="comment_text"><p>New link: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fslush.zip%3AjnGodZ6QTbz4dumvb-WvFOEAD3U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/slush.zip">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620649">6</a> by Raymond Camden
		posted on 11/14/2008 at 12:38 AM
		</div>
		<div class="comment_text"><p>Thanks. Wow, this is an OLD blog post. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620650">7</a> by AMS
		posted on 11/17/2008 at 11:23 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Is it possible to use this tag with cfmodule instead?  I am getting an error, I believe because one of the required attributes is called "name" which causes cfmodule to think that you are trying to provide the name of the tag, not an attribute.</p><p>Thanks!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620648">8</a> by Raymond Camden
		posted on 11/25/2008 at 3:50 AM
		</div>
		<div class="comment_text"><p>Yep. Modify the code to allow for namevalue as well as name. Then when you use cfmodule, use namevalue="..". The custom tag can just say (pseudocode):</p><p>if arguments.namevalue exists, copy it to <a href="http://disq.us/url?url=http%3A%2F%2Farguments.name%3AQqOM0eK7v9LDCdUJ173Sj4NsEtM&amp;cuid=3321886" rel="nofollow noopener" title="arguments.name">arguments.name</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620651">9</a> by Bo Reahard
		posted on 6/2/2012 at 9:12 PM
		</div>
		<div class="comment_text"><p>Thanks for this nice widget, I was able to incorporate it where needed in my application very qucikly, has worked flawlessly for me.</p></div>
	</div>
</div>
		