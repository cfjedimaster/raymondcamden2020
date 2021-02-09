
<div class="comment" id="c_1713620448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620448">1</a> by Ryan Guill
		posted on 8/30/2005 at 12:40 AM
		</div>
		<div class="comment_text"><p>One thing worth noting, and I cant think of which functions they are off the top of my head at the moment, but there are list functions that take a delimiter attribute only if you specify mulitple charachters in the delimiter it uses each character as a delimiter not the group of characters as a whole.  I belive when looping over a list it is that way for example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620458">2</a> by Raymond Camden
		posted on 8/30/2005 at 12:43 AM
		</div>
		<div class="comment_text"><p>I may not be reading you right. Afaik, _all_ list functions treat XYZ, when passed as the delimiter, as a list of delimiters where each char is a delimiter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620455">3</a> by Ryan Guill
		posted on 8/30/2005 at 12:46 AM
		</div>
		<div class="comment_text"><p>maybe it is all of them then.  There has just been times I wished there was a way to use a group of characters as a delimiter, such as "," or ,[space] for instance.</p><p>So what youre saying is then is when you use #chr(10)##chr(13)# as a delimiter, it is delimiting on chr(10) OR chr(13) right?  not both together as one delimiter?  guess that would work as well...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620462">4</a> by Raymond Camden
		posted on 8/30/2005 at 12:51 AM
		</div>
		<div class="comment_text"><p>Correct. I hope it was clear. If not, the comments here should clarify it. As it stands, there is a UDF at CFLib that will split a string using a multicharacter string as a delimiter. I think it's called Split in fact.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620454">5</a> by Ryan Guill
		posted on 8/30/2005 at 12:54 AM
		</div>
		<div class="comment_text"><p>Yeah I think you were clear.  I was actually thinking that some functions would use a multichar delimiter but most wouldnt, but I guess thats right.  I dont mess with lists a whole lot so I cant ever remember for sure.</p><p>When it does come time for me to need a multichar delimiter, I usually just do a replace() on the list and change the multichar to another delimiter such as a pipe |</p></div>
	</div>
</div>
		