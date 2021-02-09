
<div class="comment" id="c_1713622755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622755">1</a> by dan
		posted on 11/22/2005 at 4:47 AM
		</div>
		<div class="comment_text"><p>I agree with you Ray, the drawback's for me was the javascript prompts and the inability to play another game, other than that nice job!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622754">2</a> by tfitch
		posted on 11/22/2005 at 5:09 AM
		</div>
		<div class="comment_text"><p>I was just playing the Entry 4 Blackjack game and had a situation where my, blackjack of 10h, Ad _lost_ to the Dealer's 6h Qh 5c which is also a 21.</p><p>I didn't dig deep into the content rules, but I think the player should win this hand instead of losing.   I'll spare you all the screen shot, but I hate losing.  A push probably wouldn't have upset me enough to write about it either.</p><p>On the plus side, the UI looks good.  The green background was very casino and well thought out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622757">3</a> by tfitch
		posted on 11/22/2005 at 5:15 AM
		</div>
		<div class="comment_text"><p>All right, I read the rules.</p><p>If the computer and the player tie, the computer (dealer) wins.</p><p>Booo!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622763">4</a> by Scott Stroz
		posted on 11/22/2005 at 5:23 AM
		</div>
		<div class="comment_text"><p>Several times I tried to bet more than 90 'credits' and was unable to.  When the cards were dealt, I would click 'Hit' or 'Stay' adn it would kick me back to the 'start' screen.  I had to do teh 'reset=1' thing a few times before it would reset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622762">5</a> by tony of the weeg clan
		posted on 11/22/2005 at 5:34 AM
		</div>
		<div class="comment_text"><p>you said last last time.  GRRRRRR</p><p>good thing my entry hasnt been graded yet, or id be trollin' hard.... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622760">6</a> by Seth Petry-Johnson
		posted on 11/22/2005 at 6:26 AM
		</div>
		<div class="comment_text"><p>I've had some problems with the UI as well... it seems that every time I'm dealt a hand and click "stay" it takes me back to the START screen.  (I haven't tried the manual reset yet though)</p><p>I downloaded the code and have a few quick comments:</p><p>1) I saw "constructors" called constructor(), create() and init(), although init() seemed very rate.  To me this is a big issue: every piece of literature I've read on CFCs recommends using init() as a constructor.  Unless there is a very compelling reason otherwise I recommend using init() to be consistent.</p><p>2) In deck.cfc getCard() doesn't do anything at all... is this just old code that wasn't deleted?</p><p>3) A lot of methods that declare a void returntype end with a "return" statement.  I personally don't include return statements unless they are actually returning a variable, to me it looks cleaner and is easier to read.  This is mostly an issue of personal style though.  (Hasn't Ray mentioned that programmers by nature don't like other programmers' style?)</p><p>4) I like the use of CFCs to model different pieces of the game, but I would recommend using getters/setters to better encapsulate implementation details.  For example, most of the logic of dealing a card is contained in Player.cfc, NOT in Deck.cfc like I expected.  If Deck.cfc is changed to store the cards in a struct instead of an array then Player.cfc will need changed as well.  A cleaner implementation would be to have all of the dealing logic contained within the getCard() method of Deck.cfc.</p><p>5) It would be cool if the deck could be "shuffled" and returned to its full status without re-initializing the entire object.</p><p>6) In index.cfm some variables aren't scoped consistenly.  For example, url.action is sometimes just called "action".  This makes it hard to tell what variable is being used.</p><p>7) The code was generally commented very nicely, I liked how the contest rules were documented in index.cfm</p><p>8) I loved the "Wall of Fame" idea.  Tres cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622758">7</a> by Jeff
		posted on 11/22/2005 at 8:30 AM
		</div>
		<div class="comment_text"><p>I got dealt an Ace, An Ace, and a Jack.  It said I busted.  Shouldn't I be at 12?</p><p> I didn't like the JavaScript prompts either.</p><p> data in a cfproperty tag shows up in the CFC metadata.  From a documentation standpoint, I would consider it a bad practice not to use them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622756">8</a> by Bjorn Jensen
		posted on 11/22/2005 at 1:14 PM
		</div>
		<div class="comment_text"><p>I simply got this when clicking "hit":</p><p> The web site you are accessing has experienced an unexpected error.<br>Please contact the website administrator.</p><p>The following information is meant for the website developer for debugging purposes.<br>Error Occurred While Processing Request<br>The element at position 0 cannot be found.</p><p>Resources:</p><p>    * Enable Robust Exception Information to provide greater detail about the source of errors. In the Administrator, click Debugging &amp; Logging &gt; Debugging Settings, and select the Robust Exception Information option.<br>    * Check the ColdFusion documentation to verify that you are using the correct syntax.<br>    * Search the Knowledge Base to find a solution to your problem.</p><p>Browser   	Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.7.12) Gecko/20050915 Firefox/1.0.7<br>Remote Address   	213.132.0.105<br>Referrer   	<a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fdemos%2Fcontest2%2Fberghuis%2Fblackjack%2Findex.cfm%3Faction%3Dstart%26bet%3D10%26name%3Dsdf%3A0dsV1I7BVTTbFzc5bp_xCsYrTlM&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/demos/contest2/berghuis/blackjack/index.cfm?action=start&amp;bet=10&amp;name=sdf">http://ray.camdenfamily.com...</a><br>Date/Time   	22-Nov-05 03:13 AM</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622765">9</a> by Uipko
		posted on 11/22/2005 at 3:11 PM
		</div>
		<div class="comment_text"><p>@ray<br>Your guess was oke I'm a guy, it's a dutch name, but also pretty unknown here in the Netherlands. It's harder than I tought, to read about the bad things in your code. But after counting to ten it went better, and it's a good learning experince. Normaly I only get criticst on the (dis)functionality from the users point of view.</p><p>I totally agree with the prompts, I didn't had the time to change thoose things. Design isn't my kind of thing, so I didn't put mutch time into it.</p><p>hmmmm, I added the cheaters part at the last day, after my colleageus tried to cheat and succeeded :) So obviously didn't test it to good, sorry.</p><p>I don't get it why the this scope is bad, but totally agree that getters and setters would be better. I always tought that it's  a no go to use variables scope inside cfc's, isn't it?</p><p>The use of cfproperty is just a habbit that comes form the cms I'm working with. The getMetadata was also a easy way to make an generic constructor. About the output=true, prob. just forgot them to put back after debugging :(</p><p>@seth<br>About the init() I din't know, good point will use only init next time. For the rest of the points I only can say "true"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622761">10</a> by Seth Petry-Johnson
		posted on 11/22/2005 at 5:58 PM
		</div>
		<div class="comment_text"><p>Uipko wrote:<br>&gt; It's harder than I tought, to read about <br>&gt; the bad things in your code</p><p>LOL, I know exactly what you mean.  It was a lot harder than I was expecting too :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622759">11</a> by tony of the weeg clan
		posted on 11/23/2005 at 9:55 AM
		</div>
		<div class="comment_text"><p>any chance we can get a glimpse of the ninja contest entry criteria? or does that ruin it?</p><p>im one impatient mother effer... yeah, i know :)</p></div>
	</div>
</div>
		