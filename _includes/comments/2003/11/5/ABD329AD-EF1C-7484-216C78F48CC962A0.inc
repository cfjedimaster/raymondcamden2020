
<div class="comment" id="c_1713615076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615076">1</a> by hwich
		posted on 11/6/2003 at 8:19 AM
		</div>
		<div class="comment_text"><p>All of the list functions should allow you to specify the delimiter.  In this case, its a space.  By default it is a comma, so when you run the commands to extract, there should be a way to specify the delimiter.  Check your documentation for CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615079">2</a> by Raymond Camden
		posted on 11/6/2003 at 2:34 PM
		</div>
		<div class="comment_text"><p>I'm a bit confused - isn't this what I said in my post?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615078">3</a> by Ryan
		posted on 11/7/2003 at 1:39 AM
		</div>
		<div class="comment_text"><p>Try the following block of code:</p><p>&lt;cfset ID = "3 91 64 37"&gt;<br>&lt;cfloop index="counter" list="#ID#" delimiters=" "&gt;<br>	&lt;cfoutput&gt;Item = #counter#&lt;br&gt;&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p><p>The output should be:</p><p>Item = 3<br>Item = 91<br>Item = 64<br>Item = 37</p><p>All of the list functions appear to allow an optional delimiters = " " modifier</p><p>Dreamweaver shows the following for delimeters <br>'delimiters  A string or a variable that contains one. Character(s) that separate list elements. Default: comma. <br>If this parameter contains more than one character, ColdFusion processes each occurrence of each character as a delimiter. '</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615077">4</a> by Raymond Camden
		posted on 11/7/2003 at 1:43 AM
		</div>
		<div class="comment_text"><p>Ok, I'm really getting confused. Now that I mind, but did my post suggest that I did _not_ know what I was talking about? I said in the main post that all list funcs support optional delimiters, yet two people have posted this same fact. Maybe I wrote it wrong...</p></div>
	</div>
</div>
		