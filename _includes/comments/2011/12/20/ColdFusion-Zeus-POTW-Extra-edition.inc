
<div class="comment" id="c_1713737596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737596">1</a> by O?uz Demirkap?
		posted on 12/21/2011 at 9:16 AM
		</div>
		<div class="comment_text"><p>LSdateTimeFormat? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737603">2</a> by Raymond Camden
		posted on 12/21/2011 at 9:33 AM
		</div>
		<div class="comment_text"><p>I didn't show it - but there is a 3rd arg - locale:</p><p>#dateTimeFormat(now(), "MMMM d, yyyy h:mm a","fr")#</p><p>Outputs: décembre 20, 2011 10:33 PM</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737601">3</a> by Atan
		posted on 12/21/2011 at 2:16 PM
		</div>
		<div class="comment_text"><p>&gt; For formatting, the mask is slightly different than before.</p><p>You mean that I can't combine the variables dateFmt="yyyy/mm/dd" and timeFmt="HH:mm" (the values are internationalized for each installation) I already have? That would be a bad idea. CF should be compatible to itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737604">4</a> by James Harris
		posted on 12/21/2011 at 5:48 PM
		</div>
		<div class="comment_text"><p>@Atan -</p><p>I think what he's saying is that the mask format is different only for the new function. Coldfusion would need a way to discern date vs. time placeholders. If you look, the only ones that are actually different are the placeholders that are shared between both date and time masks.</p><p>That being said, your HH:mm would still produce a perfectly valid military time formatted time string. However, If I am taking this in properly, "yyyy/mm/dd" would actually generate "2011/[current minutes]/21" It would need to be "yyyy/MM/dd" for use in this new formatting function.</p><p>I could be wrong on all this, though. Just a thought.</p><p>Confirmation Ray?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737611">5</a> by Raymond Camden
		posted on 12/21/2011 at 6:20 PM
		</div>
		<div class="comment_text"><p>Not sure I can confirm this as I wasn't involved in the engineering, but it sounds right to me. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737610">6</a> by Az
		posted on 12/21/2011 at 8:29 PM
		</div>
		<div class="comment_text"><p>Since this is just a string value that tells the function how to format the output they should make the older functions for time and date formatting recognize the newer versions of the masks.  The masks for the combined date and time format function need to be recognized by the older functions so you can set global formatting variables for date and time.  I think this is what Atan meant by his post.  The old functions should still recognize the old versions of the masks for backward compatibility, however, having the new masks supported is something I see as a "no brainer" for the development team to implement and should not be overlooked.</p><p>-Az</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737612">7</a> by Fred
		posted on 12/21/2011 at 9:51 PM
		</div>
		<div class="comment_text"><p>Finally! This is nice :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737613">8</a> by Joseph Potthast
		posted on 12/22/2011 at 5:49 AM
		</div>
		<div class="comment_text"><p>You're right in that it's not earth shateringly big of a change that I'm going to want to go back to old projects and update but you know what? It's useful and easy so I see no reason not to use it in the future ones.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737614">9</a> by Prabesh Poudyal
		posted on 12/23/2011 at 1:34 AM
		</div>
		<div class="comment_text"><p>Like it, I so want to see this being used more aggressively and staring to support different international calendars. That would be amazing. When you are looking at an international page, Google Translate can only do so much....</p></div>
	</div>
</div>
		