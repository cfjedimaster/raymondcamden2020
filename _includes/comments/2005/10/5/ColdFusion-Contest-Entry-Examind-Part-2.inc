
<div class="comment" id="c_1713621209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621209">1</a> by Brian Rinaldi
		posted on 10/5/2005 at 5:49 PM
		</div>
		<div class="comment_text"><p>I was able to get it to loop infinitely just by repeatedly pressing low then high. Obviously this assumes someone isn't playing the game honestly, but I would think it should know that if the choices have been narrowed to two numbers and one I state is high, that it has to be the other...and end there. I do like the graphical representation as well, but I was struck by the same thing as you, that it worked off random guesses rather than  by halving the options.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621206">2</a> by Raymond Camden
		posted on 10/5/2005 at 5:57 PM
		</div>
		<div class="comment_text"><p>When you say struck, you mean that in a good way, right? Just checking because it sounds negative, and I definitely meant my comment as praise. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621207">3</a> by Brian Rinaldi
		posted on 10/5/2005 at 6:23 PM
		</div>
		<div class="comment_text"><p>Maybe a better word choice would have been surprised since it wasn't really positive or negative on my end. It just had not occurred to me to solve it that way as it isn't the quickest means of getting the answer. However, your contest entry never stated this as a requirement, so it was really a matter of my reading things into the requirements (which can be a bad habit).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621210">4</a> by Raymond Camden
		posted on 10/5/2005 at 6:30 PM
		</div>
		<div class="comment_text"><p>Cool. As it stands, my rules are always a bit flexible. ;) The first enty did things the opposite way, but I'm still happy with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621215">5</a> by infused
		posted on 10/5/2005 at 6:54 PM
		</div>
		<div class="comment_text"><p>i like the randomness of the guesses. Makes you feel like the computer is interacting with you rather than going about it in a cold "logical" way.</p><p>As for the fact that two contestants haven't really used the session scope it might be because of the parameters you setup for them early on. You told them there was to be no setup involved. just unzip and run. Well one could NOT assume then that you had sessions turned on, or that the files would be unzipped into a proper folder for a application.cfm file could be used.</p><p>just playing devils advocate here for the sake of the contestants :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621211">6</a> by Rick
		posted on 10/5/2005 at 6:57 PM
		</div>
		<div class="comment_text"><p>I did encounter one thing that I considered a problem.  I picked the number 49.  As it narrowed down it actually guessed 48, then 50, then back to 48, then 50 again, before it finally figured out that 49 was the number.</p><p>I haven'te really looked too close at the code but I'm guessing it would need to track the previous two guesses and not allow them as new guesses.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621212">7</a> by Chris
		posted on 10/5/2005 at 8:22 PM
		</div>
		<div class="comment_text"><p>Thank you for the feedback and will defiantly remember what you said about the passing info in the URL. I felt using the random number would give a better feeling about the computer actually trying. The display of the guesses also aid in this. Rick, the code just checks the last number, otherwise it’s totally random.</p><p>-Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621216">8</a> by ErikG
		posted on 10/5/2005 at 9:34 PM
		</div>
		<div class="comment_text"><p>Same problem as Rick.  When the computer guesses 48, and you say it is too low, it appears that it doesn't rule 48 out from being guessed again, but only rules out the numbers below 48.</p><p>Looking at the code this bug is confirmed.</p><p>I too like the visual bar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621214">9</a> by O?uz Demirkap?
		posted on 10/5/2005 at 9:59 PM
		</div>
		<div class="comment_text"><p>"I guessed your number within 17 tries."</p><p>I think there is a algorithm problem. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621213">10</a> by Raymond Camden
		posted on 10/5/2005 at 10:05 PM
		</div>
		<div class="comment_text"><p>Oguz, why do you say that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621217">11</a> by O?uz Demirkap?
		posted on 10/5/2005 at 10:55 PM
		</div>
		<div class="comment_text"><p>I just tried second entry and it could found on 17th try. I think there would be a better algorithm to solve this problem. As I guess max. ~ 8-9 try must be enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621221">12</a> by Raymond Camden
		posted on 10/5/2005 at 10:57 PM
		</div>
		<div class="comment_text"><p>Ah, I think you missed my comments. I pointed out that this is NOT the most effecient way of finding the answer, but it is -better- since it makes a more enjoyable game.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621220">13</a> by O?uz Demirkap?
		posted on 10/5/2005 at 11:04 PM
		</div>
		<div class="comment_text"><p>Ok. I just have seen this part. :)</p><p>I have to say that I am a computer engineer and have had lots of data structures lessons and bored enough. Sorry this one was just a quick reply from an engineer perspective. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621222">14</a> by Stefan
		posted on 10/6/2005 at 9:20 AM
		</div>
		<div class="comment_text"><p>Hi Ray. I never submitted my code for your contest, but I really enjoy the post mortem's! I actually started coding something like your first entry, and later read the spec more finely. All-in-all, from reading the spec to actually coding something, I really learned a lot from this. thanks, and I hope you post another contest soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621226">15</a> by Peter Boughton
		posted on 10/6/2005 at 12:57 PM
		</div>
		<div class="comment_text"><p>A couple of things are bugging me...<br>The first being that the code is not XHTML 1.0 Transitional, despite what the header claims. (But at least it uses a header, and isn't HTML4)<br>The second thing bugging me is the use a big messy table when it is not needed. The guessing range is a nice touch, but a more elegant way would have been to simply use three SPANs with an appropriate width value set.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621225">16</a> by dc
		posted on 10/6/2005 at 3:51 PM
		</div>
		<div class="comment_text"><p>"Now it's time to get nasty. Like the first entry, this entry does not make use of RAM based variables in order to store information. All information is passed via URL parameters."</p><p>What's so wrong with URL control parameters as long as you validate that you are actually getting what you expect and that the user is allowed to see what they have asked for?</p><p>In terms of Portlets (well the ones that we develop), this is usually one of the only ways possible to pass control parameters about.  We could not do it with RAM based vars.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621227">17</a> by Raymond Camden
		posted on 10/6/2005 at 4:28 PM
		</div>
		<div class="comment_text"><p>dc - I think you are misreading me. I didn't say the use of URL vars is bad, in fact, after you stop quoting me, I go on to say I'm compling about his lack of use of the _scope_ URL in naming his variable. i.e., url.x, not just x. I then go on to say he didn't validate his url variables. I don't believe I said the use of url variables alone was bad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621228">18</a> by dc
		posted on 10/6/2005 at 4:31 PM
		</div>
		<div class="comment_text"><p>sorry Ray, I get it now, you are saying that he _doesn't_ use RAM based variables so that means that he needs to scope and validate.</p><p>sorry for the confusion, guess I shouldn't flash read things and then comment on them :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621224">19</a> by Raymond Camden
		posted on 10/6/2005 at 4:46 PM
		</div>
		<div class="comment_text"><p>Your right. You shouldn't do that. Because I never do. Um. Really. Wow that's a big bolt of lightning...</p></div>
	</div>
</div>
		