
<div class="comment" id="c_1713622931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622931">1</a> by Jeff Coughlin
		posted on 11/23/2005 at 8:46 PM
		</div>
		<div class="comment_text"><p>The title of this blog post say contest entry 4.  Should it not be 5? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622934">2</a> by Jason
		posted on 11/23/2005 at 9:34 PM
		</div>
		<div class="comment_text"><p>Seems to be a bit of an issue with black jacks.</p><p>I had A &amp; J and Dealer had A &amp; J.  The game said I won.</p><p>Also, I had A &amp; Q and dealer had 2 &amp; 8.  It stopped the game and said I won.  While I love to win :).  The dealer is suppose to win in ties.  It did not give the computer a chance to get 21.</p><p>Overall, without looking at the code the game looks, simple but good.  UI was not the issue in this so the looks really do not matter.</p><p>Oh and yes that history thing is very nice!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622936">3</a> by charlie griefer
		posted on 11/23/2005 at 9:44 PM
		</div>
		<div class="comment_text"><p>Jason:</p><p>As far as the computer not getting a chance to get to 21, this is actually the first one that I believe i've seen done 'right'.</p><p>If a player (either the human player or the dealer) get a blackjack (defined as the first 2 cards totalling 21), the hand should end.</p><p>Maybe the original specs didn't call for it (don't have time to look 'em up right now), but that's the way mine is set up too.  If a player gets dealt a 21, game's over, player wins.  If the dealer gets dealt a 21, game's over, dealer wins.  If both get dealt 21, dealer wins (the push).</p><p>I also like the history very much.  I kept a running tally of the number of hands each player has won...but not to that level of detail.  I like the fact that not only does it keep the history of wins/losses, but actually shows you the cards for each hand.  VERY nice touch IMO.</p><p>I've not had a chance to look at the code yet, but looking forward to doing so.  Liked this entry a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622937">4</a> by Bill
		posted on 11/23/2005 at 11:17 PM
		</div>
		<div class="comment_text"><p>while I am no expert on BlackJack I'm pretty sure, via my times in Vegas, that the rules are a little off (though this might not have been part of the contest.</p><p>1. On a Push the player keeps their money but doesn't win anything either.</p><p>2. On a blackjack (21 with 2 cards) the player is paid 1.5x their bet.  I remeber hitting Black Jack at the casino, before the dealer even got her second card, they would pay me so I am not sure it even matters if it is a push.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622935">5</a> by Bill
		posted on 11/23/2005 at 11:18 PM
		</div>
		<div class="comment_text"><p>One small comment about the game itself.  I didn't actually look at the source code - but from a presentation angle it would have been nice if all messages that would appear/disappear were to come below the cards this way the table holding the cards wouldn't have shifted up/down as the messages visiblity toggled.</p><p>Also, it would be nice if the "bet" box remembered your last bet and didn't return to a 10 default every time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622938">6</a> by Raymond Camden
		posted on 11/24/2005 at 3:49 AM
		</div>
		<div class="comment_text"><p>Bill, if you check the original specs, I specifically said these were not Vegas rules. I wanted to keep things a bit simpler. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622941">7</a> by Scott Stroz
		posted on 11/24/2005 at 7:03 AM
		</div>
		<div class="comment_text"><p>Here's a quick UI thing.  It is a bit confusing having the 'Hit' button under my hand, and the 'Stay' button under the dealers hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622940">8</a> by Behrang
		posted on 11/25/2005 at 5:21 PM
		</div>
		<div class="comment_text"><p>Thanks everyone for your feedbacks.</p><p>- Ray<br>About checking for cents, you're right and I forget to check for cents!<br>And about var scoping in showHands UDF, I first created that section of code inside index.cfm and then wanted to used that in history, so I just copy/pasted it and forgot to var scope "i" variable.</p><p>- Jason<br>I have never played blackjack before. However, we have a game called "21" which is similar to blackjack, and in that game when you have 21 (with no limit to card counts), you win immediately. So I think I was thinking about "21" when developing that part.</p><p>- Bill<br>I agree with you about messages. In fact I have done this for the top message area which shows status messages like "New game started", But I forgot this in the game table! And your are right, about game remembering the last bet.</p><p>- Scott<br>I chose this design, because I thought that it shows where the next card would arrive! Just a design decision.</p><p>I tried to use CFC's in this game, and this is one of my first OO apps. I would appriciate if anyone comments on my OO design and suggests improvments. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622939">9</a> by Jason
		posted on 11/28/2005 at 9:45 PM
		</div>
		<div class="comment_text"><p>Yeah I guess I was not thinking correct about the rules.  If the player gets black jack and and dealer does not the hand is over and the player wins.  A natural black jack beats a dealers 21 with more than 2 cards.  So I guess the only issue that remains is when I had A &amp; J and Dealer had A &amp; J. The game said I won.  That should be a push.</p><p>I wish I would have known the correct rules b/c my game lets the dealer try to match the players blackjack....oops.  So I already have one mistake and my game has not been evaluated yet :).</p><p>This contest has been a good learning experience so far.  I know I will learn even more when my app is evaluated. :).</p><p>Thanks</p></div>
	</div>
</div>
		