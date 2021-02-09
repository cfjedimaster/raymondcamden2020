
<div class="comment" id="c_1713660983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660983">1</a> by Kyle Hayes
		posted on 1/4/2007 at 9:05 PM
		</div>
		<div class="comment_text"><p>Most people are not aware of the fact that you can execute inline cfscript statements using cfset wihtout actually "setting" something. I have often wondered why the ColdFusion functions were programmed the way they were. Don't you think it would make more sense to say:</p><p>&lt;cfset myArr = ArrayNew(1) /&gt;<br>&lt;cfset myArr.append("Foo Bar") /&gt;</p><p>Perhaps such syntactical updates would make it easier for certain developers (cough cough .net) to transition to the CF language. In addition it would make it a little easier to remember certain functions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660998">2</a> by Scott Stroz
		posted on 1/4/2007 at 9:28 PM
		</div>
		<div class="comment_text"><p>I am used to having arrayAppend() and structAppend() returning booleans, so I rarely get tripped up on that one.</p><p>What I do sometimes is:</p><p>&lt;cfset listAppend(listName, 'booger') /&gt;</p><p>and then wonder why my list doesn't look as I expect.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660996">3</a> by Ryan Guill
		posted on 1/4/2007 at 9:46 PM
		</div>
		<div class="comment_text"><p>doesn't this have something to do with the data type being by value or by reference?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660986">4</a> by Ryan Guill
		posted on 1/4/2007 at 9:46 PM
		</div>
		<div class="comment_text"><p>doesn't this have something to do with the data type being by value or by reference?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660992">5</a> by todd sharp
		posted on 1/4/2007 at 10:23 PM
		</div>
		<div class="comment_text"><p>Scott:  I had that exact issue trip me up recently (listAppend).</p><p>In addition:</p><p>&lt;cfset temp = listAppend(listName, 'booger') /&gt;</p><p>doesn't work.</p><p>It has to be</p><p>&lt;cfset listName = listAppend(listName, 'booger') /&gt;</p><p>Since the listAppend returns a copy of the list with the value appended.</p><p>I think thats why I tried to use arrayAppend the same way (yes, I was the "user" ;)</p><p>For queries I usually leave out the temp var.  I must have just been thinking about the listAppend issue when I wrote the arrayAppend.</p><p>Live and learn.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660988">6</a> by John Wilker
		posted on 1/4/2007 at 10:51 PM
		</div>
		<div class="comment_text"><p>Just got tripped up by that yesterday. And I knew better, but had a brainfart so then had to debug my CFC to figure out what was freaking out.</p><p>Good post, good to have searchable LOL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660987">7</a> by Pete Freitag
		posted on 1/4/2007 at 11:34 PM
		</div>
		<div class="comment_text"><p>The reason that it may return false is that if there was not enough free contigious memory avaliable to allocate the new array.</p><p>At least back when ColdFusion was written in C++ this was the case.</p><p>In Java however I think it is more likley that a java.lang.OutOfMemoryError would be thrown</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660990">8</a> by test
		posted on 1/5/2007 at 1:19 AM
		</div>
		<div class="comment_text"><p>test</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660991">9</a> by Cutter
		posted on 1/5/2007 at 1:37 AM
		</div>
		<div class="comment_text"><p>"Forge", wow, isn't that an old Marvel X-Factor reference?</p></div>
	</div>
</div>
		