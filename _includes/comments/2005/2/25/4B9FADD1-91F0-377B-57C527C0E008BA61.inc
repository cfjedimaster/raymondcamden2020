
<div class="comment" id="c_1713617289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617289">1</a> by Brett Liotta
		posted on 2/27/2005 at 9:03 AM
		</div>
		<div class="comment_text"><p>You have to use value=" " in the option tage, instead of value="".  make sure there is one blank space in between the quotes.  this works if you want cfform to submit a true blank string.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617288">2</a> by Nathan Dintenfass
		posted on 2/28/2005 at 1:02 AM
		</div>
		<div class="comment_text"><p>I sure hope MACR considers that to be a bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617291">3</a> by barry.b
		posted on 2/28/2005 at 3:56 AM
		</div>
		<div class="comment_text"><p>&amp;gt;&amp;gt;  make sure there is one blank space in between the quotes. this works if you want cfform to submit a true blank string.</p><p>hang, on. that's not an empty string: that's data (a space) in it! not empty in my book...</p><p>the point is that the implimentation of cfform should be consistant to html forms.</p><p>yeah, I'd consider it a bug too!</p><p>my 2c<br>barry.b</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617294">4</a> by Raymond Camden
		posted on 2/28/2005 at 4:58 AM
		</div>
		<div class="comment_text"><p>I forgot to add this to my blog post, but MACR is already aware of this and the bug is logged.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617290">5</a> by Tony Bianco
		posted on 7/29/2005 at 7:40 AM
		</div>
		<div class="comment_text"><p>I'm running into a wall myself and I'm getting tired of searching for the answer on the web. I have cfselect forms with &lt;option&gt; tags in them. When I go to submit the form and I use the #FORM.theSelectName# it gives me the what is displayed to the user and not what the value of the option is.</p><p>Any answers on this one? How do you grab the value.</p><p>- Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617292">6</a> by Raymond Camden
		posted on 7/29/2005 at 7:46 AM
		</div>
		<div class="comment_text"><p>Can you show me your code? I have no problem seeing the value, and not the label, in my form posts.</p></div>
	</div>
</div>
		