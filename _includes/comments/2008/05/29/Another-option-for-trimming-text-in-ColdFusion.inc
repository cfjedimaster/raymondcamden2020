
<div class="comment" id="c_1713681290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681290">1</a> by Emmet
		posted on 5/30/2008 at 2:23 AM
		</div>
		<div class="comment_text"><p>I just finished reading the first and the last page of the bible. I fully left out the middle.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681274">2</a> by Scott Bennett
		posted on 5/30/2008 at 3:04 AM
		</div>
		<div class="comment_text"><p>@Emmet,</p><p>If my memory serves me correctly that would be something like "In the beginning... Amen."</p><p>It reminds me of that Seinfeld Episode with all the "Yadda Yadda Yadda"</p><p>@Ray,<br>You should make a UDF that does this and call it YaddaYaddaYadda() =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681288">3</a> by Matthew
		posted on 5/30/2008 at 3:46 AM
		</div>
		<div class="comment_text"><p>There is 1 problem though. If your original text string is less than 400 than you'd have some repetition. Perhaps the 200 number needs to be dynamically calculated:<br>#fullleft(quote, IIf(Len(myString)&lt;400,DE(Len(myString)*0.4),DE('200')))#<br>This will get 40% of the string if the string is less than 400.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681289">4</a> by Raymond Camden
		posted on 5/30/2008 at 4:50 AM
		</div>
		<div class="comment_text"><p>@Matthew - I actually cover that in the earlier blog entry. I shoulda mentioned it here again though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681291">5</a> by Matthew
		posted on 5/30/2008 at 4:57 AM
		</div>
		<div class="comment_text"><p>No problems Raymond. I was just being nit picky really. Thanks for the post by the way!<br>Cheers<br>Matthew</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681294">6</a> by Raymond Camden
		posted on 5/30/2008 at 4:59 AM
		</div>
		<div class="comment_text"><p>Heh, I've been known to be a bit picky myself. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681292">7</a> by Joshua Curtiss
		posted on 5/31/2008 at 12:04 AM
		</div>
		<div class="comment_text"><p>Adding to the pickiness... :-)</p><p>Usually when adding the elipsis in the middle, you make sure the sentence being read still makes sense even though the stuff in the middle is cut out. Since this obviously can't be done with programming, the left-only truncation would obviously be a better bet!</p></div>
	</div>
</div>
		