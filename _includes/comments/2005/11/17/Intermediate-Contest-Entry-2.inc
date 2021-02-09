
<div class="comment" id="c_1713622657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622657">1</a> by tony of the weeg clan
		posted on 11/18/2005 at 8:14 AM
		</div>
		<div class="comment_text"><p>color me crazy, but i do not see any place to download either entries code?</p><p>tw</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622658">2</a> by Raymond Camden
		posted on 11/18/2005 at 8:35 AM
		</div>
		<div class="comment_text"><p>It's the Download link, next to Print.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622660">3</a> by Mark Fuqua
		posted on 11/18/2005 at 8:40 AM
		</div>
		<div class="comment_text"><p>I think it is to the left of the comments link.  Though I did not try it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622659">4</a> by Mark Fuqua
		posted on 11/18/2005 at 8:41 AM
		</div>
		<div class="comment_text"><p>your other left</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622664">5</a> by Seth Petry-Johnson
		posted on 11/18/2005 at 8:43 AM
		</div>
		<div class="comment_text"><p>You're correct, this was developed on IIS and on my box the error handling on the first page works fine.  I thought I'd added the "sanity check" you mentioned but (obviously) I never did.  Too much caffeine, not enough sleep :)</p><p>Its strange that the HTTP_REFERRER was blank on your box on the form action page, it should have been the URL from which the form was submitted.  Is this a bug with Apache or am I missing something important?</p><p>As for allowing a bet of 9.999999999, I just truncate anything past the second decimal point.  I thought about making the user re-enter but it didn't seem worth the effort, provided that the truncated amount was a valid bet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622662">6</a> by tony of the weeg clan
		posted on 11/18/2005 at 8:45 AM
		</div>
		<div class="comment_text"><p>since constructive criticism is welcomed on this blog, i would say that the download link DOES NOT in anyway stand out to me, someone who was looking, as anything related to the downloading of anything in the post.  just lettin ya know.</p><p>tw</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622663">7</a> by Raymond Camden
		posted on 11/18/2005 at 8:54 AM
		</div>
		<div class="comment_text"><p>Tony - I _did_ say the link was at the bottom, didn't I. ;)</p><p>Seth - I hope you know - for all the harping I do on validation, your code was the most 'tight' I've seen yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622661">8</a> by Jeff
		posted on 11/18/2005 at 9:02 AM
		</div>
		<div class="comment_text"><p>No one said it yet, so I wanted to add that the second code block appears to be missing.</p><p>-----<br>....Returning to blackjack.cfm, I see:</p><p>[no code block]</p><p>From what I can tell, ....   <br>-----</p><p> Did I read that wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622665">9</a> by Scott
		posted on 11/18/2005 at 9:19 AM
		</div>
		<div class="comment_text"><p>Nice work, Seth. Your app works very nicely. I does seem pretty complex, though. I consider myself a Coldfusion intermediate, but I dont think I could have put that together. Really though, I do like it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622667">10</a> by Raymond Camden
		posted on 11/18/2005 at 9:26 AM
		</div>
		<div class="comment_text"><p>Oops, sorry, this was the line:</p><p>&amp;lt;cfinclude template = "BlackjackCFC_content/#session.blackjackGame.getContentPanelName()#"&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622673">11</a> by Raymond Camden
		posted on 11/18/2005 at 9:26 AM
		</div>
		<div class="comment_text"><p>Heh, I forgot my html would be escaped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622672">12</a> by Scott Stroz
		posted on 11/18/2005 at 9:42 AM
		</div>
		<div class="comment_text"><p>The 2 entries so far have one thign in common...its 'Stand' not 'Stay'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622671">13</a> by Scott Stroz
		posted on 11/18/2005 at 9:48 AM
		</div>
		<div class="comment_text"><p>Not sure if anyone else noticed this.  One hand one, I bet $99.23, which I lost, leaving me with $0.77.</p><p>On teh next hand, when I tried betting $0.77, it would not allow me to.  Initially I received an error stating that I only had $0.77 and could not bet more than that.  I kept submitting teh form, but the other submissions did not generate an error, nor did they allow me to play.</p><p>I decresed teh bet to $0.76, same issue.  Decreased to $0.75 and it allowed me to play the hand.</p><p>This continued until I had $0.01 left, and I am unable to play a hand betting that amount.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622674">14</a> by Raymond Camden
		posted on 11/18/2005 at 5:08 PM
		</div>
		<div class="comment_text"><p>That's my fault. My specs said 'stay' instead of 'stand.'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622669">15</a> by Seth Petry-Johnson
		posted on 11/18/2005 at 6:09 PM
		</div>
		<div class="comment_text"><p>Scott said:<br>&gt; Not sure if anyone else noticed this. One hand <br>&gt; one, I bet $99.23, which I lost, leaving me with <br>&gt; $0.77.<br>&gt;<br>&gt; On teh next hand, when I tried betting $0.77, it <br>&gt; would not allow me to.</p><p>Something similar happened to me on two different occasions, but I couldn't reproduce it consistently.  I'm pretty sure its a rounding issue somewhere, and its probably something really stupid.</p><p>Had this been a "real" app I would have done some real troubleshooting but this thing took a lot longer than I had counted on, and I just needed to get it finished.  I found that I couldn't concentrate on my course work -OR- my day job while working on this, all I could think about was my Blackjack app.  I was kinda hoping no one would notice this "feature" :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622675">16</a> by Seth Petry-Johnson
		posted on 11/18/2005 at 6:17 PM
		</div>
		<div class="comment_text"><p>Another Scott wrote:<br>&gt; Nice work, Seth. Your app works very nicely. I <br>&gt; does seem pretty complex, though. I consider <br>&gt; myself a Coldfusion intermediate, but I dont <br>&gt; think I could have put that together. Really <br>&gt; though, I do like it.</p><p>Thanks for the comments!  I'm finally working on finishing my compsci degree, and that has meant learning object oriented programming via Java.  This was the second CFC based app I've ever done and I think my Java background is pretty evident.  (In Java, nearly everything is an object, so it leads to designs with lots of small classes like Hand, Deck, Card, Rank, etc)</p><p>However, since Java apps are usually stateful, synchronous things and web based apps are not, some of my design choices didn't work out very well when implemented as CFCs.  But that's cool, since my goal was just to get practice with a CFC based, object oriented CF app.</p><p>Thanks again for the comments!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622670">17</a> by Dan G. Switzer, II
		posted on 11/18/2005 at 7:05 PM
		</div>
		<div class="comment_text"><p>A couple of notes (although I haven't looked at the source code yet):</p><p>* Never, never, never, ever write code that relies on the CGI.HTTP_REFERER being present. First there are issues that creep up when running the code on different servers (which may have different CGI values.) The biggest problem is that more and more client-side applications are starting to block the HTTP_REFERER from being sent. I know Norton Internet Security blocks this by default. It's never been a very reliable value to track, but you definitely don't want to write code that expects it to be there. You're run into problem.</p><p>One way to recreate this value is to manually track the user's last visited page. Just make sure that you don't overwrite the value for page refreshes. You could do this in the session scope. This will give you a controlled "http_referer" value that is guarenteed to be available. Plus, this value can't be spoofed.</p><p>* Second, and this relates to the game itself. I was dealt 17 (7H + KS) and the dealer had 12 (9C + 3H.) The dealer then hit for the 5D giving the dealer 17 as well. However, the game told me the dealer had the best hand and I lost the bet instead of it being a push.</p><p>* My last comment was from a UI standpoint. When the dealer hits multiple times in a row, there's no visible pause between each hit. Part of the joy of playing BJ is the suspense. I would have prefer for the computer to pause between each "hit".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622676">18</a> by Dan G. Switzer, II
		posted on 11/18/2005 at 7:12 PM
		</div>
		<div class="comment_text"><p>PS - Seth, don't take my first point too personally. I know many people will use these exercises as way to learn and I just wanted other developers to know how bad it is to rely on this variable.</p><p>I've just seen too many people use the CGI.HTTP_REFERER as a way to help add "security" to their applications--when in actuality this doesn't add any security to the application at all. Heck, even I've been guilty of using this in the past.</p><p>In general, I try to avoid using values from the CGI scope altogether. I think the only thing I ever grap is the REMOTE_ADDR and HTTP_USER_AGENT values for logging purposes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622677">19</a> by tony of the weeg clan
		posted on 11/18/2005 at 7:36 PM
		</div>
		<div class="comment_text"><p>great work seth, the code is tight, the code is sleek, and im certainly impressed :)</p><p>ray.  i get your point, that you said at the bottom. but just the word download, with no qualifier to tell me what im downloading, seems bad to me.  what am i downloading?  i have no idea with that just saying "Download"</p><p>i do not want to harp on it, so ill stop here, and please be nice when looking at my code :)</p><p>tw</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622679">20</a> by Seth Petry-Johnson
		posted on 11/18/2005 at 7:46 PM
		</div>
		<div class="comment_text"><p>Dan, thanks for the comments about the referrer value.  I didn't realize some client software suites were preventing this from being sent.  I'll definately treat CGI vars with more care in the future.</p><p>As for there not being a "push" if the players tie, the contest rules specifically stated that if there is a tie that the dealer should win.  Just followin' the rules, man :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622678">21</a> by tony of the weeg clan
		posted on 11/18/2005 at 7:49 PM
		</div>
		<div class="comment_text"><p>in that spot, the push vs. dealer win situation, i went on the rules, and not ray's rules, as i thought he might have just mistyped that one :)</p><p>who knows.  its all sooo very objective in this contest, i think the best part is, it will be a good learning experience for all who did it.</p><p>tw</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622680">22</a> by Raymond Camden
		posted on 11/18/2005 at 8:24 PM
		</div>
		<div class="comment_text"><p>Just to show how ignorant I am - what would 'push' do? No one wins?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622684">23</a> by Raymond Camden
		posted on 11/18/2005 at 8:39 PM
		</div>
		<div class="comment_text"><p>Hey Seth, don't fret too much the 'rounding' issue. As I said, I think your app, out of all the entries so far, is the most 'hack proof'. As I said, no one does this perfectly.</p><p>Tony: " do not want to harp on it, so ill stop here, and please be nice when looking at my code :)"</p><p>Dude, you are SO going to lose now. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622681">24</a> by Scott Stroz
		posted on 11/18/2005 at 8:51 PM
		</div>
		<div class="comment_text"><p>A 'push' simply means no one wins.</p><p>You can choose to keep the bet on the table, increase the bet, decrease the bet, or walk away.</p><p>You are not required to make the same bet, or bet again at all, after a 'push'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622682">25</a> by tony of the weeg clan
		posted on 11/18/2005 at 8:53 PM
		</div>
		<div class="comment_text"><p>push is no one wins.  money stays on the table.<br>its a nice relief when it happens at the tables in vegas :)<br>and you've got 20 and are thinking, LOCK, and he bangs two face cards...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622685">26</a> by Steve Gustafson
		posted on 11/18/2005 at 9:09 PM
		</div>
		<div class="comment_text"><p>Full Disclosure: I wrote the previous contest entry.</p><p>Here is my take on this entry.</p><p>Issues:<br>The biggest issue I see with this version of Blackjack is an issue I <br>see in many applications: it overly complicates a very simple application.<br>The application has 3,528 lines of code ( including whitespace and <br>comments. Even cutting that in half to account for the comments comes <br>to 1,764) and 30 files ( excluding images).  This compares to 568 lines <br>of code (including comments and css) and 5 files in the first example.<br>This can quickly become a maintenance nightmare.</p><p>index.cfm does nothing but a cflocation this is both pointless and an improper usage for CFLOCATION.  Pete Freitag posted an article regarding the improper use of CFLOCATION (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F359.cfm%29%3AJLkrTnapc5_LiclHi9BWqKudktU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/359.cfm)">http://www.petefreitag.com/...</a> .</p><p>Bugs:<br>Dead End:  If you have less than a dollar, bet it all and lose.  You are left with no money but you can still click "play again".  If you do you are at a dead end.  You can't place a bet and you can't do anything else.</p><p>Occassionly you can't place a bet for the amount you have left as noted in an earlier comment.</p><p>The app will not display an error message if there are two consecutive errors.</p><p>Oddity:<br>If you run the app with debugging turned on and you throw an error (ie: enter a NAN value into a bet) the app does not display, only the debugging info appears.</p><p>Minor annoyance:<br>If I start a new game, I should not need to re-enter my name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622683">27</a> by Steve Gustafson
		posted on 11/18/2005 at 9:12 PM
		</div>
		<div class="comment_text"><p>Sorry, I meant to include that overall the app works very well and is a solid entry!</p><p>Good Job Seth.</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622686">28</a> by Seth Petry-Johnson
		posted on 11/18/2005 at 9:51 PM
		</div>
		<div class="comment_text"><p>Gus made a lot of good comments about my design.  I think there is a lot to be learned when developers discuss the *different* ways that they do things, as well as WHY they do them that way.  I welcome any and all comments on my design and the comments I've made after the fact... if you have something to add please do!</p><p>Just like Gus made design choices to keep his app cluster-safe, I made choices oriented around a different goal.  If you download my app and look at the README file, it explains that I was trying to create a very portable and easily distributed application.  Instead of writing a Blackjack app that met the specific needs of this contest I wanted something that someone could take and easily plug into an existing website.</p><p>&gt; The biggest issue I see with this version of <br>&gt; Blackjack is an issue I see in many applications: <br>&gt; it overly complicates a very simple application.<br>&gt; ...<br>&gt; This can quickly become a maintenance nightmare.</p><p>One of the reasons my core files have so much code is that they support a much more complex game.  The core Blackjack.cfc file supports multiple human players, multiple card decks in the shoe, and could be easily extended to provide support for doubling-down, splitting hands, etc.</p><p>The idea was that the Blackjack.cfc file would simply track game state without imposing any logic upon it, and that the BlackjackController.cfc file would implement the rules of a specific game.  In this case my controller supports a single human player and no special features, someone else could write another controller that supported multiple players.</p><p>I totally agree this is overboard according to the contest specs, but it made the app more interesting to build.</p><p>&gt; index.cfm does nothing but a cflocation this is both <br>&gt; pointless and an improper usage for CFLOCATION.</p><p>Again, I wanted this to be as "plug and play" as possible, so I made the default filename "blackjack.cfm" so that it could (hopefully) be copied into an existing directory without overwriting any existing files.  I added the CFLOCATION in index.cfm just to simply testing and use in the contest.</p><p>&gt; Oddity:<br>&gt; If you run the app with debugging turned on and you <br>&gt; throw ... the app does not display</p><p>Weird.  I'll have to try that myself.</p><p>&gt; Minor annoyance:<br>&gt; If I start a new game, I should not need to <br>&gt; re-enter my name.</p><p>I agree, it annoyed me too :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622687">29</a> by Mark M
		posted on 11/19/2005 at 2:47 AM
		</div>
		<div class="comment_text"><p>While everyone in the comments seemed to be able to play the game quite successfully, I had many issues. On every page I went to, I either had to hit the submit button twice or hit the refresh button after submitting. It was very strange. I then somehow got into a mode when I submitted a bet that a CF error would be thrown stating "The game is not ready to accept bets from a human player!", yet my name was showing at the bottom with $80 remaining. I haven't looked at the code yet, but my guess is that is has something to do with how the state is being tracked and related to the fact that I am going through a proxy server. I'm not exactly sure why that would matter (it didn't on the first game), but I figured it may matter since everyone else was able to run the game.</p></div>
	</div>
</div>
		