
<div class="comment" id="c_1713623336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623336">1</a> by charlie griefer
		posted on 12/13/2005 at 4:28 AM
		</div>
		<div class="comment_text"><p>yeah, Tony and I actually gave each other previews.  I knew his design was gonna be one of the better ones.  my only suggestion on the design would be to put the dealer on top.  other than that, very sweet. it looks like a "real" blackjack game :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623337">2</a> by dan
		posted on 12/13/2005 at 5:00 AM
		</div>
		<div class="comment_text"><p>I am not sure that aces are getting counted as 1 or 11. I had a king and 3 for a total of 13, my next card was an ace and right away the dealers cards were flipped, he was showing 20 and I lost the game. I didnt see it again after trying another 10 hands or so, i am wondering if anyone else came across this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623346">3</a> by tony of the weeg clan
		posted on 12/13/2005 at 5:14 AM
		</div>
		<div class="comment_text"><p>so, its all willy nilly now, as its already done, but a few things....</p><p>1. the xml for the cards was one of the last things i was messing around with, so i just wanted to get it done, and got lazy :) same with the udf's in there... i normally turn those into functions, but got to the final hours, and was more worried about the UI than anything (hey, im a designer, not a ninja)</p><p>2. dan, you are correct, i have a few funky situations where the aces are counted wrong, and even another situation where if the dealer has 17 or higher, and you have 18 or higher, it automatically gives you the win :) (im a nice dealer)</p><p>3. also, with the read only form field, you can break it another way and that is on the VERY first hand, its not read only.  i think, its due to a session variable not existing until the first bet is made or something like that.</p><p>but anyway, this was cool, this was fun, and it was at times a bit challenging.  had i had another two days to mess with it, probably would have caught some of the stuff that i went "DOH!!!!" to, right after i finally submitted.  anyway. critique away, please. i want to get better. thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623345">4</a> by Scott Johnson
		posted on 12/13/2005 at 5:18 AM
		</div>
		<div class="comment_text"><p>Nice work Tony, the game looks pretty cool. I did get a little confused on what I needed to do each turn, and I dont really understand the reshuffle button.</p><p>I had the same problem with Aces not getting counted as 1. I had a 3,A, I hit and busted with a 10.</p><p>I noticed a lot of people kept track of all the card data, such as suit and rank. I can see how this would be valuable if you were using your cards in another game, but in blackjack you really dont need it. In my app, my deck is just a random array of 52 numbers, each representing a card. From those numbers, I just use a pretty simple formula to get the card value from the number. I started my app trying to keep track of suit, rank, and value, but found I could do it much simpler with just an array of numbers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623344">5</a> by tony of the weeg clan
		posted on 12/13/2005 at 5:27 AM
		</div>
		<div class="comment_text"><p>two more things :)</p><p>1. ray, where did i not var scope? i made SURE that i var scoped everything in the functions.</p><p>2. there are tool tips on EVERY one of the buttons... :)</p><p>thanks scott. i know, there are odd things with the counting... i effed that up.  and reshuffle probably should have be relabeled :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623339">6</a> by Jeff
		posted on 12/13/2005 at 7:41 AM
		</div>
		<div class="comment_text"><p>Since the XML is hard-coded (in its current form) I would keep it as is.  Why use a loop to generate hard coded values?</p><p> I wish that reshuffle and bet were one step instead of two.</p><p> I wish that the number buttons would add to the current amount (as opposed to resetting it).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623338">7</a> by Rob Gonda
		posted on 12/13/2005 at 8:41 AM
		</div>
		<div class="comment_text"><p>Tony,</p><p>You did a good job var scoping, but you missed every single one of your indexes... When you loop, the index get assigned to a variable, just like everything else.</p><p>-Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623340">8</a> by tony of the weeg clan
		posted on 12/13/2005 at 8:50 AM
		</div>
		<div class="comment_text"><p>so, what you are saying is that i should have something like this:</p><p>&lt;cfset var i = 0&gt;</p><p>like that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623341">9</a> by Rob Gonda
		posted on 12/13/2005 at 8:58 AM
		</div>
		<div class="comment_text"><p>perhaps, or because coldfusion is mostly typeless, you could do &lt;cfset var i = '' /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623342">10</a> by tony of the weeg clan
		posted on 12/13/2005 at 9:00 AM
		</div>
		<div class="comment_text"><p>i always feel bad for the variable if i dont at least feed it something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623343">11</a> by Seth Petry-Johnson
		posted on 12/13/2005 at 8:01 PM
		</div>
		<div class="comment_text"><p>Visually the game looks pretty slick, but it felt "sluggish" sometimes.  For example, I'd click to bet and it would take a second or so before the game reacted by reloading the page and showing the new cards.</p><p>Also, the HTML title of the page is "Full Tilt Poker", not "Full Tilt Blackjack" :)</p><p>My only other comment is that the startup logic at the top of fullTilt.cfm should be moved into include files or UDFs so that its easier to follow.  This could be as simple as replacing the body of each cfif block with a single UDF call, but it would go a long way towards making the code easier to read.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623347">12</a> by tony of the weeg clan
		posted on 12/13/2005 at 8:07 PM
		</div>
		<div class="comment_text"><p>the sluggishness might just be ray's box... from my server (at cfdynamics) its fast... when i hit it from my office, and my house :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.revolutionwebdesign.com%2Ffulltilt%2FfullTilt.cfm%3A2zYatT9984tkmIrtDrClO093qZk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.revolutionwebdesign.com/fulltilt/fullTilt.cfm">http://www.revolutionwebdes...</a></p><p>and yeah, i DEFINITELY would have done a bunch more towards some optimization in the code and making it easier to read, etc... but im sooo busy with work, i just didnt have time... its all good, like i said, im more developer/designer than coder... but i'd love to hear about what i could do to make it better.</p><p>thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623348">13</a> by Seth Petry-Johnson
		posted on 12/14/2005 at 6:34 AM
		</div>
		<div class="comment_text"><p>&gt; but i'd love to hear about what i could do to make it <br>&gt; better.</p><p>One thing I like to do is plan out my program flow using "pseudo-code", which basically just captures the high-level actions that need to take place.  For instance:</p><p>if is new game<br>    init user's session<br>    init dealer<br>    init deck<br>    get opening bet<br>end if</p><p>Then I'll go back and create UDFs or CFC methods for each line of pseudo code, so that my final code doesn't look that different from the pseudo code I started with.  I've found that this helps me group the code into logical chunks and makes it more manageable and readable.</p></div>
	</div>
</div>
		