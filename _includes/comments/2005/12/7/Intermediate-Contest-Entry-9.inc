
<div class="comment" id="c_1713623267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623267">1</a> by Scott Slone
		posted on 12/8/2005 at 3:24 AM
		</div>
		<div class="comment_text"><p>I, too, had trouble focusing with the wood panel background. And for my first hand, was delt a 10 and an ace (21) but the dealer won with 20. Ace wasn't recognized as 11. I liked the personalization.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623272">2</a> by Jason
		posted on 12/8/2005 at 3:58 AM
		</div>
		<div class="comment_text"><p>I will have to agree with the visual aspects.  It was kind of hard read, I would clean it up and not show buttons unless they are active.</p><p>This is something that I have seen with many of the entries, not just isolated to this one.  If you refresh the page the current hand is wiped away, while it is not a huge deal.  If I do not like the cards I am delt, I can simply refresh the page and get a re-deal.  Of course this is not going to be used on a actual gambling site, but in my opinion a big problem.</p><p>Some additional little things:</p><p>- I also did not see the point of having to hit "New Hand" each time.  Once the game is over placing a new bet should be the new hand indicator.<br>- I had A,K for a natural Black Jack but the game still made me choose stay.  It would be nice if it forced then to stay so they do not make a mistake and hit on a BJ.</p><p>Other than that, I think it operated well.  I liked the win/loss tracking.</p><p>Jason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623268">3</a> by Dan G. Switzer, II
		posted on 12/8/2005 at 5:09 AM
		</div>
		<div class="comment_text"><p>A couple of bugs I found:</p><p>* If you click the "HIT" button in rapid succession, you'll keep getting new cards. I was able to get 70 on one hand.</p><p>* You can also "HIT" before actually being dealt cards.</p><p>* Along the lines of the same bug, if hitting the "HIT" button in rapid succession causes mysterious loses of funds. Somehow after 1 single $10 bet, I ended up with -$2730.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623271">4</a> by tony of the weeg clan
		posted on 12/8/2005 at 6:27 AM
		</div>
		<div class="comment_text"><p>does this mean you will be judging more tonight?</p><p>:) i think im #10, please be nice.<br>remember, im a 100% self taught and<br>no framework person.  not to mention<br>there were some last minute code changes<br>that i just didnt have time for.  also<br>if the player and the dealer both get cards<br>and the player has over 17 and the dealer has<br>at least 17 and the player wins, i make<br>the player an automatic winner without letting<br>them mess up... kinda let them win at that point.<br>small bug in my winner decision code.</p><p>/hiding until mine is judged and nervous :)<br>tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623262">5</a> by Justice
		posted on 12/8/2005 at 6:03 PM
		</div>
		<div class="comment_text"><p>OK, I am going to express my ignorence here, but could someone please explain what this cfscript block of code does, line by line?  I thought I had a decent grasp of Coldfusion but this wracks my feeble brain!</p><p>In the deck.cfc file:</p><p>for ( deck_idx = 1; deck_idx lte variables.instance.numberOfDecks; deck_idx = deck_idx + 1 ) {<br>				for ( figure_idx = 1; figure_idx lte 13; figure_idx = figure_idx + 1 ) {<br>					for ( suit_idx = 1; suit_idx lte 4; suit_idx = suit_idx + 1 ) {<br>						card = structNew();<br>						card.number = figure_idx;<br>						card.suit = suit_idx;</p><p>						cardImg = '';</p><p>						switch(suit_idx){<br>							case "1":{<br>								cardImg = 'c';<br>								break;<br>							}<br>							case "2":{<br>								cardImg = 'd';<br>								break;<br>							}<br>							case "3":{<br>								cardImg = 'h';<br>								break;<br>							}<br>							case "4":{<br>								cardImg = 's';<br>								break;<br>							}<br>						}</p><p>						if ( figure_idx lte 10 ){<br>							cardImg = cardImg &amp; figure_idx;<br>						}<br>						else if( figure_idx eq 11 ){<br>							cardImg = cardImg &amp; 'j';<br>						}<br>						else if( figure_idx eq 12 ){<br>							cardImg = cardImg &amp; 'q';<br>						}<br>						else if( figure_idx eq 13 ){<br>							cardImg = cardImg &amp; 'k';<br>						}</p><p>						cardImg = cardImg &amp; '.gif';</p><p>						card.Img = cardImg;</p><p>						arrayAppend(variables.instance.deck, card);<br>					}<br>				}<br>			}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623265">6</a> by Dan G. Switzer, II
		posted on 12/8/2005 at 8:50 PM
		</div>
		<div class="comment_text"><p>Justin,</p><p>In a nutshell, here's what the code does:</p><p>1) Determine how many "decks" you're playing with. My casinos will play with multiple decks of cards, so that's what the first outer loop does.</p><p>2) Next, create a card. This is sets up the 2-10, Jack, Queen, King and Ace (13 cards total.) That's what the next loop does.</p><p>3) Next, create a Heart, Diamond, Club and Spade for each card. In each deck there are 4 suits of 13 cards. That's what the inner loop does.</p><p>4) The switch statement is simply assigning the suit type based on a number. Personally, I would have either used a suit list in step #3 or used an integer to represent the suit instead of remapping to a single charater.</p><p>5) The if/else statements simply set up what image to display to represent the card.</p><p>6) The arrayAppend() statement adds the card to your array of available cards. The variables.instance.deck is what actually holds a reference to all the cards that are available until it reshuffles.</p></div>
	</div>
</div>
		