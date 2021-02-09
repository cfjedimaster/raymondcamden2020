
<div class="comment" id="c_1713623239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623239">1</a> by Barneyb
		posted on 12/6/2005 at 10:56 PM
		</div>
		<div class="comment_text"><p>You'd use it where you need to have automatic unmarshalling of an array of CFC instances across a web services call.  With CFMX6, there was no way to return an array of CFCs and have them be unmarshalled, but with this new behaviour, you can do it.</p><p>We've got a couple web services in production that we wanted to do this with, and had to end up serializing the CFCs into XML and passing back a string.  Definitely not ideal.  This avoids the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623227">2</a> by Raymond Camden
		posted on 12/6/2005 at 11:14 PM
		</div>
		<div class="comment_text"><p>Thanks for the concrete example, Barney.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623233">3</a> by Jeff Chastain
		posted on 12/7/2005 at 12:19 AM
		</div>
		<div class="comment_text"><p>I have always wondered with Gateway objects, why you return a query of rows (i.e. listUsers returns a recordset of users) vs. you deal with bean objects instead of single row recordsets?  For encapsulation purposes, should you not return an array of user objects ... in otherwords, the return type would be user[]?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623230">4</a> by Barneyb
		posted on 12/7/2005 at 12:26 AM
		</div>
		<div class="comment_text"><p>If you have exclusively CF-based clients, then you can return a recordset, but any other platform won't know how to deal with the QueryBean object that CF returns, so you have to use an array of objects.  If you ask me, that's the better solution either way, even if it's not as performant for large recordsets.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623245">5</a> by Dave
		posted on 12/7/2005 at 1:34 AM
		</div>
		<div class="comment_text"><p>I'm torn about a query return, If my output has a need to group on a query column I dont think there is any more elegent thing than &lt;cfoutput query="blah" group="ohyeah"&gt;</p><p>In fact I can't think of any other language that handles that type of stuff that easily.</p><p>On the other hand looping over an array of Objects and using getters is pretty nice as well.</p><p>I'm wondering if anyone has done side by side comparisons of the difference in MEM usage and server load on resultsets that are larger than just a few records...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623240">6</a> by Steve House
		posted on 12/7/2005 at 7:29 AM
		</div>
		<div class="comment_text"><p>Here is why I would use it...if you return a type of array, you could put anything you want in each array element and CF wouldn't check or care.  I would assume with the apple[] return type it would require each element to be an apple.  This is excellent built in validation.  Does anyone know for sure if it does this checking?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623237">7</a> by Steve House
		posted on 12/7/2005 at 5:49 PM
		</div>
		<div class="comment_text"><p>To answer my own question I performed a small test this morning.  Apparently CF does check ONLY the first item in the array for a matching type.  If the type is not correct then it throws an error like "The value returned from function getApples() is not of type apple[]".  If, however, you have an apple in element 1 you can put anything in elements 2+.</p><p>So I would not put too much faith in CF providing any type validation here.</p><p>Bummer :-(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623257">8</a> by Raymond Camden
		posted on 12/7/2005 at 7:06 PM
		</div>
		<div class="comment_text"><p>Steve - did you file a bug on this? Please let me know - if not, I'll file one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623255">9</a> by Johnathan Gifford
		posted on 12/7/2005 at 8:28 PM
		</div>
		<div class="comment_text"><p>Even if ColdFusion validates only the first element to the type, at least you can better communicate through the code and CF Docs that method is returning an array of components of 'this' type.</p><p>Thanks Ray for answering my question.  It's stump many a few.  I'm glad someone out there knew was Macro... Adobe had intended with this little known feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623258">10</a> by Steve House
		posted on 12/8/2005 at 12:02 AM
		</div>
		<div class="comment_text"><p>Ray, I did not file a bug.  After I discovered that it only checked the first one, it seemed familiar and I may have read that before somewhere.  I have not found the docs on this feature but I am suspecting that it is working as designed.  I would think that checking the type of every object in a large arrray could really slow things down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623256">11</a> by Raymond Camden
		posted on 12/8/2005 at 12:04 AM
		</div>
		<div class="comment_text"><p>I see your point, but disagree. I'd be willing to sacrifice speed in order to get what is expected. I'll file a bug on this.</p></div>
	</div>
</div>
		