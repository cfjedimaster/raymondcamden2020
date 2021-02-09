
<div class="comment" id="c_1713670127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670127">1</a> by Phil Duba
		posted on 8/10/2007 at 9:04 PM
		</div>
		<div class="comment_text"><p>Ray, one thing I noticed on using HTML in the CFGRID during the public beta was that I couldn't use layout tags (tables &amp; divs) without affecting the selectable area for that row. Don't know if the released version still does that or if it is a result of the YUI itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670126">2</a> by Brian
		posted on 8/11/2007 at 12:35 AM
		</div>
		<div class="comment_text"><p>Question on the sort ... I notice when you sort by title (row) it alpha sorts</p><p>1<br>10<br>2<br>3<br>4<br>5 ...</p><p>Is there a way to tell it to numeric sort?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670128">3</a> by Raymond Camden
		posted on 8/11/2007 at 12:43 AM
		</div>
		<div class="comment_text"><p>The reason it sorted that way is because the column wasn't numeric. It had text in it. If you make the column JUST have a number, it works fine. (I tested this locally.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670124">4</a> by Marc Esher
		posted on 8/11/2007 at 1:11 AM
		</div>
		<div class="comment_text"><p>Here's the problem I ran into right away with CFGRID when I was evaluating it for a current need, and I had to ditch it. Let's say I have a column of dollar values: $40.00, $100.00, $79,002.32....etc.</p><p>first off, sorting breaks.</p><p>second off, let's say I need to highlight the 40 and 100 dollar cells because they fall below some threshold and the user needs to see this. So I wrap it in span class=boldred or something. now sorting really really breaks.</p><p>the fundamental problem I have is that the value you see in the grid really needs to be different from the underlying data, much as it is in a simple html select/option list. But there's no support for that.</p><p>Until the display of the data is decoupled from the data itself, I'm afraid this nice widget will only be used for simpler things. Which is a shame, because it really is a quite useful and braindead-easy thing to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670118">5</a> by Raymond Camden
		posted on 8/11/2007 at 1:18 AM
		</div>
		<div class="comment_text"><p>I don't want to say the grid is only for simple stuff - but - do remember that _all_ of these tags are meant to try to cover _most_ situations, not all situations. Obviously if you use a Ajax framework you have 100% of the framework at your disposal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670123">6</a> by Marc Esher
		posted on 8/11/2007 at 1:47 AM
		</div>
		<div class="comment_text"><p>Agreed. However, I'd have thought that the "money column" problem would've come up in like Use Case #3. The styling on the dollar columns, sure, i can understand why that's not in there, although a callback function on the cell would've been a nice addition that allowed maximum flexibility. or a "mask" attribute, as exists for the applet version. that one attribute alone would open up the widget a lot more for me and I suspect for others</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670130">7</a> by Raymond Camden
		posted on 8/11/2007 at 1:51 AM
		</div>
		<div class="comment_text"><p>Agreed, a mask would be nice. FYI, this is one of my requests for Spry too - a simple way to run a format function before displaying the data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670129">8</a> by Chris
		posted on 8/14/2007 at 12:36 AM
		</div>
		<div class="comment_text"><p>OK...these look great, but how about a checkbox within a cfgrid that uses binding?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670132">9</a> by Gary Gilbert
		posted on 8/16/2007 at 12:10 PM
		</div>
		<div class="comment_text"><p>I think for more flexibility instead of having a mask attribute they should expose the cell renderer functionality that is already built into the EXT grid (which is what the cfgrid uses).</p><p>With the cell renderer you can do format the content of the cells just about anyway you want.</p><p>I didnt think to add the html directly into the recordset, nice idea!</p></div>
	</div>
</div>
		