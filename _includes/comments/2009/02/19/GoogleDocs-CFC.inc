
<div class="comment" id="c_1713713204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713204">1</a> by Phillip Senn
		posted on 2/20/2009 at 7:27 PM
		</div>
		<div class="comment_text"><p>I'm very excited to see this post!<br>I had a bit of confusion over line 4 of test2public.cfm because you were using a bit of lingo when you said "email addy".<br>Email addy?  Who is addy?  Could that mean EmailDaddy without the D?<br>Oh!  Address!  He means MyUsername@gmail.com!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713206">2</a> by Raymond Camden
		posted on 2/20/2009 at 7:35 PM
		</div>
		<div class="comment_text"><p>"Docs? We don't need no stinkin' docs!"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713209">3</a> by Scott Wimmer
		posted on 2/20/2009 at 9:24 PM
		</div>
		<div class="comment_text"><p>I too am excited. This "closes the loop" for my web-based online data submission project from customers. If it will download the spreadsheet as an xls I will be able to transfer it into MS Access for processing.</p><p>BUT (of course)</p><p>When I change the format argument (line 42 of test2public) from 'html' to 'xls' I get error:</p><p>ByteArray objects cannot be converted to strings.</p><p>The error occurred in C:\Websites\73172bkj\SwatchDog\Helpdesk\test2public.cfm: line 46<br>44 : &lt;cfoutput&gt;<br>45 : &lt;pre&gt;<br>46 : #content#<br>47 : &lt;/pre&gt;<br>48 : &lt;/cfoutput&gt;</p><p>Any clues?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713205">4</a> by Raymond Camden
		posted on 2/20/2009 at 9:26 PM
		</div>
		<div class="comment_text"><p>XLS is a binary format. You can't output it to screen. Save it to the file system and then you can open it with Excel, OpenOffice, Numbers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713208">5</a> by Scott Wimmer
		posted on 2/20/2009 at 9:45 PM
		</div>
		<div class="comment_text"><p>Ray:<br>It worked by replacing #content# (line 47 or so in test2public.cfm) with &lt;cfset fileWrite(expandPath("./BC.xls"), content)&gt;</p><p>Thank you very much. A very large deal for me...</p><p>Phil said he sent you a tie fighter once.<br>I am in a gifting mood. What would you like?</p><p>Yours truly grateful,<br>SW</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713207">6</a> by Raymond Camden
		posted on 2/20/2009 at 9:47 PM
		</div>
		<div class="comment_text"><p>Well, I'd love to say that your gratitude is enough, but, nah, I'm a greedy jerk. ;)</p><p>If you visit my wishlist, any video game related item would be fine, especially the MS Points though. (Going to use that for the new Galatrix game coming out and the Fallout3 expansion.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713212">7</a> by Scott Wimmer
		posted on 2/20/2009 at 10:02 PM
		</div>
		<div class="comment_text"><p>4000 points should arrive Feb 25 from amazon.</p><p>Enjoy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713213">8</a> by Raymond Camden
		posted on 2/20/2009 at 10:03 PM
		</div>
		<div class="comment_text"><p>Thank you! Much appreciated!</p><p>Heh, the 25th is the day after Mardi Gras. I may be too sick to play. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713211">9</a> by Simon Horwith
		posted on 2/25/2009 at 1:09 AM
		</div>
		<div class="comment_text"><p>Any thoughts about integrating the new Google Docs support with Lighthouse?  Just a thought.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713214">10</a> by Raymond Camden
		posted on 2/26/2009 at 3:11 AM
		</div>
		<div class="comment_text"><p>How? I don't see the connection?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713215">11</a> by Josh Orvis
		posted on 3/5/2009 at 11:53 AM
		</div>
		<div class="comment_text"><p>This is awesome Ray.  I was just suggesting to my boss that we consider maintaining all of the writing for our biggest conference within Google Docs, and the only part I felt vulnerable about was leaving all of this vital data sitting on someone else's server.</p><p>Being able to schedule an automated backup of those documents will mean that this proposal is pretty much a rock-solid plan.</p><p>I'll let you know how it goes.</p></div>
	</div>
</div>
		