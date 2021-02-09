
<div class="comment" id="c_1713734752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734752">1</a> by Jean-Michel Rottiers
		posted on 8/23/2011 at 1:54 PM
		</div>
		<div class="comment_text"><p>If a table is not a must using the CSS3 column-count property it is also possible to create a column layout (if it helps)</p><p>example:<br>&lt;style type="text/css"&gt;<br>.newspaper {<br>	-moz-column-count:3; /* Firefox */<br>	-webkit-column-count:3; /* Safari and Chrome */<br>	column-count:3;<br>}<br>&lt;/style&gt;<br>&lt;cfscript&gt;<br>data = ["apple","cherry","moon","zoo","poo","doo","roo","merry","christmas","dude"];<br>&lt;/cfscript&gt;<br>&lt;div class="newspaper"&gt;<br>&lt;cfoutput&gt;<br>&lt;cfloop array="#data#" index="theItem"&gt;#theItem#&lt;br /&gt;<br>&lt;/cfloop&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734751">2</a> by Joel Cox
		posted on 8/23/2011 at 8:08 PM
		</div>
		<div class="comment_text"><p>Also a classic case for the use of the modulo operator. If x mod colSize == 0, then you've reached the end of the row and need to start a new one on the next pass.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734735">3</a> by Robert Zehnder
		posted on 8/23/2011 at 9:21 PM
		</div>
		<div class="comment_text"><p>You can also use css to correctly show empty cells without having to worry about putting the blank td tags in there.</p><p>empty-cells:show;</p><p>I believe it should be supported on most of the major browsers.</p></div>
	</div>
</div>
		