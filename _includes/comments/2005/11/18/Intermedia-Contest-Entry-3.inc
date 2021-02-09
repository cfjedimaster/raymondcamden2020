
<div class="comment" id="c_1713622689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622689">1</a> by tony of the weeg clan
		posted on 11/19/2005 at 4:48 AM
		</div>
		<div class="comment_text"><p>that's just soooo wrong.</p><p>i may just start harping again :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622688">2</a> by Dan G. Switzer, II
		posted on 11/19/2005 at 5:06 AM
		</div>
		<div class="comment_text"><p>Very nice overall. I didn't find any bugs in my brief testing.</p><p>On the UI side of things, the game really needs a "Clear My Bet" function. Clicking on the chips is nice, but you have no way to correct a bet if you messed up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622690">3</a> by Behrang
		posted on 11/19/2005 at 5:25 PM
		</div>
		<div class="comment_text"><p>Very nice interface.<br>I played a little and in one hand, after I clicked Deal, The game said that the Dealer has Blackjack and winned. Dealer had an Ace, and the other card was not visible. Is this behaviour acceptable or is it a bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622691">4</a> by Scott Stroz
		posted on 11/19/2005 at 7:49 PM
		</div>
		<div class="comment_text"><p>Behrang - I noticed the same thing.</p><p>Also, I palyed for about 15 minutes, never won a hand.  I don't think its  a bug, just that I suck at Blackjack.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622692">5</a> by Seth Petry-Johnson
		posted on 11/19/2005 at 7:58 PM
		</div>
		<div class="comment_text"><p>First off, the game looks amazing.  Is the background image something you created yourself, or was it borrowed from the web?</p><p>Before I get to the code I have 3 three brief UI comments:</p><p>1) Like Dan said, would be nice if I could clear my bet.</p><p>2) IMHO the "game stats" area should be located closer to the chip rack, perhaps along the bottom of the table instead of the right.  When I first started playing I didn't realize I was betting, because when my eyes were focused on the chip rack I couldn't clearly see the "current bet" area of the stats.  And if I focus on the current bet area then I can't clearly see which chip my mouse is hovering over.</p><p>3) Lastly, my preference is that if you are going to use a visual element to control betting (i.e. the stack of chips) then that element should give feeback feedback to the user regarding what options are available.  In other words, if I only have $5 left in my bank, the chip rack shouldn't show a full stack of $100 chips.  Showing someone a stack of chips *implies* that it represents their actual stack, and I was confused until I realized it was just a static image.  [I know this is impossible with your current setup, its just a thought.]</p><p>Other than those small issues the UI looks and works great, nice job!  Now, on to the code...</p><p>Generally speaking I thought the code was structured nicely and easy to understand.  Not "var"-ing local method variables is a huge problem, but Ray has already covered that.  I do have two comments of my own as well:</p><p>1) Drawing a card is not a constant time operation.  In fact, under certain circumstances it could take an inordinate amount of time to complete.  This is because drawing a card involves picking a card at random, checking its "inDeck" flag, and then repeating this process if the selected card has already been pulled from the deck.</p><p>Imagine the situation when there is only one card left:  there is only a 1/52 chance that a given loop iteration will select that card, so the loop could very possibly run a long time until that card is chosen at random.</p><p>A better solution would be to maintain a list of the array indices for cards that remain in the deck.  Then, to draw a card all you need to do is randomly select an item from this and delete its index from the list of remaining cards.  No loop needed.  To shuffle the deck just re-populate the list of remaining cards so that it lists them all.</p><p>2) Player.cfc and Dealer.cfc both include logic for determining their hand values.  I would have preferred to see this logic in a single place instead of duplicated.  This could be handled by creating a Hand.cfc object that stores the cards in a hand and has a method for obtaining their value(s).  Both the dealer and player objects would contain a Hand object.</p><p>All in all I thought this was very well done, both visually and from a code perspective.  Nice job!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622698">6</a> by Jeff
		posted on 11/20/2005 at 1:44 AM
		</div>
		<div class="comment_text"><p>I just thought I'd say that I played for about 15 minute and only lost one hand.  I'm at about $5000+ and counting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622697">7</a> by Jason
		posted on 11/21/2005 at 7:34 AM
		</div>
		<div class="comment_text"><p>I have a few comments about the game.</p><p>- The UI looks very nice.  <br>- I had a problem when I had 5-2-A-2 which is 11/21.  I tried to stay, but the stand and hit buttons were disabled, so I could not do anything.  At that point my game was over b/c had to hit new game to do anything.  This also happened again when I had 6/16 and the dealer had Ace showing.  I think the dealer had 21 b/c something flashed very quick about 21.  I did not have time to read what it said.  So I would say the timed messages are not the best, a little user interaction might be good so the user can acknowledge they read the message.<br>- If the user refreshes the screen the game is cleared, basically like hitting new game.<br>- I like the use of AJAX.</p><p>I did not download the code and look at it, but those are just my observations from just playing the game online for a bit.</p><p>Good entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622694">8</a> by Jeff Chastain
		posted on 11/21/2005 at 9:28 PM
		</div>
		<div class="comment_text"><p>Thanks for the comments on the UI.  I will have to say that the graphics were borrowed from different sites and I pieced together what I liked for the table.</p><p>As far as the visual element goes on the chips, my wife said the same thing.  Being that this was a CF project though, I decided to leave that 'minor' feature until later.</p><p>Yeah, I missed the var thing.  I have not been doing CFCs for very long, so I took this project as an excuse to dive into several technologies I don't have a chance to work with much on a daily basis ... i.e. CFCs and AJAX.</p><p>I won't guarantee there are no bugs, but I did not see any in my testing.  The problem with the aces is interesting, I will have to go back and check that.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622695">9</a> by Steve Gustafson
		posted on 11/23/2005 at 12:42 AM
		</div>
		<div class="comment_text"><p>I haven't had time to look at this one too closely, but the thing that jumped out at me immediately is in the Application.cfc:</p><p>clientManagement= "true"<br>clientStorage = "registry"</p><p>Client variables aren't used anywhere in the app, yet due to these settings new registry entries are being made for each player.</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622696">10</a> by webber
		posted on 4/3/2006 at 11:39 AM
		</div>
		<div class="comment_text"><p>very cool .  I'd like to learn CF but haven't found a place that clearly shows how to get started .</p></div>
	</div>
</div>
		