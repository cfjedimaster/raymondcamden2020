
<div class="comment" id="c_1713622633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622633">1</a> by Anthony
		posted on 11/17/2005 at 2:24 AM
		</div>
		<div class="comment_text"><p>All that gets delt is ace of hearts! And I can't double down!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622634">2</a> by Raymond Camden
		posted on 11/17/2005 at 2:27 AM
		</div>
		<div class="comment_text"><p>Odd, I'm not seeign that. And no double down was one of the rules. See the original contest rules for more details.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622636">3</a> by Justice
		posted on 11/17/2005 at 2:34 AM
		</div>
		<div class="comment_text"><p>I didnt get my entry done in time, so I cant say much, but one of the 1st things I did was setup CSS rules to use the single .jpg card file, like this:</p><p>.card {<br>	width:72px;<br>	height:97px;<br>	position:relative;<br>	display:block;<br>}</p><p>/* Clubs */<br>#CA {background: url(cards.png) -2px -2px no-repeat;}<br>#C2 {background: url(cards.png) -75px -2px no-repeat;}<br>#C3 {background: url(cards.png) -148px -2px no-repeat;}</p><p>you get the idea.  Then I would just put a div of class card, with an id of whichever card I wanted to display at the time.</p><p>&lt;div class="card" id="CA" /&gt;</p><p>Anyone else do this?</p><p>Just a design thought =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622638">4</a> by tony petruzzi
		posted on 11/17/2005 at 2:37 AM
		</div>
		<div class="comment_text"><p>very kewl. The only thing is that Gus needs to hit the casino a little more often. In Blackjack you are dealt two cards in the brginning, not 1. this could be a FF problem though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622640">5</a> by Raymond Camden
		posted on 11/17/2005 at 2:43 AM
		</div>
		<div class="comment_text"><p>Ahah. This entry definitely seems a bit buggy in IE. I recommend folks try FIrefox, and I'll email the author.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622639">6</a> by Dan G. Switzer, II
		posted on 11/17/2005 at 3:25 AM
		</div>
		<div class="comment_text"><p>It's not just IE. I've had the program not deal cards, or not register dealt card. I had 12 in one hand and hit for a King. My total after getting dealt the King was still 12.</p><p>I suspect there are number of locking issues and probably some asynchronous issues with his AJAX.</p><p>One of the biggest problems I've seen w/users experimenting with AJAX is the fact that it's asynchronous and not synchronous. Generally, things work for them in development, but things fall apart when the thing goes live.</p><p>If I have a function that says:</p><p>getRequestA();<br>getRequestB();</p><p>And they both make XmlHttpRequests to the server, there's not guarentee that A will process before B. You'd specifically need to invoke getRequestA() and then have getRequestB() run after getRequestA() finish it's request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622637">7</a> by Seth Petry-Johnson
		posted on 11/17/2005 at 3:25 AM
		</div>
		<div class="comment_text"><p>In response to Anthony:  when I first loaded up the game I too was dealt two Aces of Hearts, and the dealer had a third one showing.  When I took a hit it was a different card, so I know there are other cards in there if you look hard enough :)</p><p>[Note: I finished my first hand and started another, and this time I was dealt two Queens of Hearts and the dealer had a third QoH showing.  Is anyone else seeing the same pattern?]</p><p>Its worth noting that getting duplicates isn't necessarily a logic flaw.  I think most casinos play with multiple decks in the shoe, so maybe Steve went uber-realistic and did the same?  (Multiple decks in the shoe is a feature that my BlackjackCFC supports, but for this contest I set it to use only one)  Still, its strange that I keep getting duplicates on each deal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622643">8</a> by charlie griefer
		posted on 11/17/2005 at 3:59 AM
		</div>
		<div class="comment_text"><p>Anthony said:<br>"All that gets delt is ace of hearts! And I can't double down!"</p><p>why would you want to double down on 2/12 against an ace anyway??? :)</p><p>(but yeah, like Ray said...specs said no double/split/surrender/etc.  basic blackjack functionality)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622644">9</a> by Mark Fuqua
		posted on 11/17/2005 at 4:19 AM
		</div>
		<div class="comment_text"><p>When I play, the dealer and I both get two nine of diamonds.  If I stay it is always a tie.  If I take a hit I lose.  Next hand, same cards.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622642">10</a> by charlie griefer
		posted on 11/17/2005 at 4:32 AM
		</div>
		<div class="comment_text"><p>mark:</p><p>that's the "bit buggy in IE" part that ray was referring to above.  give it a try in Firefox if you've got it installed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622645">11</a> by Joe Rinehart
		posted on 11/17/2005 at 5:58 AM
		</div>
		<div class="comment_text"><p>Architecture aside, I give it points for working like crazy in firefox.  I lost all my chips quite quickly!</p><p>-Joe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622641">12</a> by Scott
		posted on 11/17/2005 at 6:42 AM
		</div>
		<div class="comment_text"><p>Works great in firefox. Any reason why people are getting the same card over and over in IE?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622647">13</a> by Steve Gustafson
		posted on 11/17/2005 at 7:34 AM
		</div>
		<div class="comment_text"><p>YIKES!</p><p>I'm sitting here reading the comments and licking my wounds.</p><p>The reason the same card comes up in IE is because it is IE is caching the the AJAX http request.  I have my IE browser set to always check for a new page, so I didn't catch the issue.  The solution is to add a random query string to the AJAX request.</p><p>As for the asynchronous issue, the slower the connection the more likely this is to show up.  It's a simple fix, that I'll put in place... eventually!</p><p>As for the Ray's comments: <br>Normally I would have put the code to handle the AJAX requests in a separate file.  I put it at the top of the view page simply to make it easier for Ray to see what was happening.</p><p>As for using 'var' I generally agree with Ray.</p><p>I do however disagree with Ray regarding keeping the played card inside the CFC, and keeping the CFC in the session scope.  There are pros and cons to putting CFC's in a memory scope.  Yes, you can get a performance gain, however you lose the ability to fail-over when in a cluster using J2EE sessions.  The way I handled the cfc and played card lists is a better solution in a clustered environment, which I typically work in.</p><p>I only bring this up so people can recognize there is no one right way.  Sometimes what is a best practice in one situation is less best in another!</p><p>Thanks for the feedback everyone.</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622649">14</a> by tony of the weeg clan
		posted on 11/17/2005 at 10:03 AM
		</div>
		<div class="comment_text"><p>steve.</p><p>good job. i entered. and i cannot wait to hear what ray has to say :) i have never been formally trained in any sort of coding, graphic design, nothing. its all self taught, and hell, i never know if what im doing is good/bad.  this will be a very good experience for the entrants.</p><p>constructive criticism does a body good.</p><p>/cringing until its my turn ;)</p><p>tw</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622646">15</a> by Douglas Knudsen
		posted on 11/17/2005 at 10:22 AM
		</div>
		<div class="comment_text"><p>"I do however disagree with Ray regarding keeping the played card inside the CFC, and keeping the CFC in the session scope. There are pros and cons to putting CFC's in a memory scope. Yes, you can get a performance gain, however you lose the ability to fail-over when in a cluster using J2EE sessions. The way I handled the cfc and played card lists is a better solution in a clustered environment, which I typically work in."</p><p>Not only that its a freaking real PITA to 'reset' your CFC instances in the session scope in a JRun cluster.</p><p>DK</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622651">16</a> by Patrick McElhaney
		posted on 11/17/2005 at 6:09 PM
		</div>
		<div class="comment_text"><p>Gus,</p><p>I don't know anything about the J2EE failover thing, but I would recommend you store the playCardList in the variables scope in either case. If you need to store the playCardList by itself in the session scope, you can still do that. Just create a setPlayCardList() function. After you create your CFC with each request, do bjOBJ.setPlayCardList(session.playCardList).</p><p>Patrick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622648">17</a> by Seth Petry-Johnson
		posted on 11/17/2005 at 8:19 PM
		</div>
		<div class="comment_text"><p>Steve wrote:<br>&gt; There are pros and cons to putting CFC's <br>&gt; in a memory scope. Yes, you can get a <br>&gt; performance gain, however you lose the <br>&gt; ability to fail-over when in a cluster <br>&gt; using J2EE sessions. The way I handled <br>&gt; the cfc and played card lists is a better <br>&gt; solution in a clustered environment, <br>&gt; which I typically work in.</p><p>I don't know anything about clustering CF servers, so pardon me if this is a dumb question, but how is keeping the played card list in the session scope different from keeping the entire CFC in the session scope?</p><p>And if you can't store CFC instances in a shared memory scope, how do you handle really complex objects?  Do you have to pass all state information into the CFC as arguments (or reference external scopes, which I don't like) instead of storing state inside the CFC?</p><p>Just wondering,<br>Seth</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622650">18</a> by Steve Gustafson
		posted on 11/17/2005 at 9:23 PM
		</div>
		<div class="comment_text"><p>Seth,<br>The difference is that a CFMX/JRUN/J2EE cluster can share simple session variables like strings across the cluster, but not complex objects.  This is a major limitation of the CFMX architecture, and one I hope will be addressed eventually.</p><p>So in answer to your second question, yes the state of an object needs to be preserved outside of the object to guarantee failover in cluster.</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622653">19</a> by Raymond Camden
		posted on 11/17/2005 at 9:26 PM
		</div>
		<div class="comment_text"><p>Steve, you could take a two pronged approach then. Store the card list in the session scope. Store the main CFC in the app scope. That way you don't have to recreate the core game logic. Then simply make it so you pass in the card data to your calls, or shoot, even make the app cfc continue to reference the session scope for the card data.</p><p>Or simply say, if i have a session.cardlist but no session.gamecfc, recreate the cfc and init with card data. That way if the user gets pushed to another box, you still just make the CFC once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622652">20</a> by Steve Gustafson
		posted on 11/17/2005 at 9:42 PM
		</div>
		<div class="comment_text"><p>Sounds like a reasonable approach Ray.</p><p>My main reason for bringing up the clustering issue was that since the purpose of the contest is really education I wanted to illustrate that there can be many different 'right' ways to build an app.</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622654">21</a> by Raymond Camden
		posted on 11/17/2005 at 9:48 PM
		</div>
		<div class="comment_text"><p>No darnit, it's my blog and I'm right.</p><p>Oops... did I say that out loud? -blush-</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622655">22</a> by Seth Petry-Johnson
		posted on 11/17/2005 at 10:18 PM
		</div>
		<div class="comment_text"><p>&gt; The difference is that a CFMX/JRUN/J2EE cluster <br>&gt; can share simple session variables like strings <br>&gt; across the cluster, but not complex objects. <br>&gt; This is a major limitation of the CFMX <br>&gt; architecture, and one I hope will be addressed <br>&gt; eventually.</p><p>Major limitation is right!  Is that a limitation of CF, or a limitation of the underlying clustering technologies?</p><p>A decent workaround is using the Flyweight design pattern, which is what Ray recommended.  Flyweight objects store logic only, they do not maintain any internal state.  Any state information needed by the object must be provided as method arguments.</p><p>An extensible approach would be to create a CFC called BlackjackContext or something.  This CFC would encapsulate all of the state information for the game: what cards were dealt, how much money the player has, etc.  This would be persisted in the session scope and passed into all methods in your Blackjack CFC.</p><p>This provides two benefits for you:  first, it decouples your game from specifically accessing the session scope, which is good.  Secondly, if you extend the game and add new state information (like a player's name) you don't have to go through the code and add this variable to all of your method calls.  Just wrap it into the Context object and let the game retrieve it when necessary.</p><p>Bottom line, I learned one very important thing from your contest entry:  I'm very glad I don't work in a clustered environment :)</p></div>
	</div>
</div>
		