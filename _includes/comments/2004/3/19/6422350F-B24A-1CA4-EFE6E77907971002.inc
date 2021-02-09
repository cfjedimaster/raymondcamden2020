
<div class="comment" id="c_1713615506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615506">1</a> by Barney Boisvert
		posted on 3/19/2004 at 8:28 PM
		</div>
		<div class="comment_text"><p>Some other people pointed out that this is a hold-over from the CFMX 6.0 days, when there was an arguments scope, but not a local variables scope.  As Ray said, always using arguments will work (operates under the assumption that arguments are not local variables), but never using arguments will also work (operates under the assumption that arguments are only local variables).  The trouble will only arise when you mix the two.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615507">2</a> by seancorfield
		posted on 3/19/2004 at 9:40 PM
		</div>
		<div class="comment_text"><p>Once again we see why a consistent coding style is so important... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615509">3</a> by Raymond Camden
		posted on 3/19/2004 at 10:05 PM
		</div>
		<div class="comment_text"><p>A-freakin-men Sean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615510">4</a> by Disgruntled CFC user
		posted on 3/20/2004 at 3:18 PM
		</div>
		<div class="comment_text"><p>seancorfield wrote:</p><p>&gt; Once again we see why a consistent coding style is so important... :)</p><p>That's true in this case, but that is not even close to the answer to solving all the problems we have with CFCs, I don't really know where to begin.</p><p>Because we're already so far gone with CFCs, and MM *can't* change them this late in the game, I reckon it'd good if we approached BD, and asked them to come up with something new and improved. &lt;cfclass&gt; with &lt;cfmethod&gt;s or the like. Where variables are local to where they're set. And scope resolution work in a meaningful and understandable way. Constructors. Static methods. Imports. The sky is the limit. We have so many great OO languages to take the lead from.</p><p>Working with CFCs, especially if you use them heavily, is becoming more and more of a headache the more we learn about its intricacies. Obviously they're better than not having anything at all, but we're in no-man's land. Not OO, not procedural, just a half-baked idea by some guys who weren't told, or didn't attempt, to come up with something concrete and solid.</p><p>BD help us! &lt;cfclass&gt;? Lead the way!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615508">5</a> by seancorfield
		posted on 3/21/2004 at 4:53 AM
		</div>
		<div class="comment_text"><p>Sorry you feel you have to make comments anonymously when you're attacking the engineers who designed and implemented those new features in ColdFusion MX...</p><p>Sounds like you really want to program in Java, not ColdFusion?</p><p>If ColdFusion became simply an alternative syntax for Java, there would be little point in using it because you'd get all the complexity of Java combined with the verbosity of a tag-based language.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615512">6</a> by Disgruntled CFC user
		posted on 3/21/2004 at 2:56 PM
		</div>
		<div class="comment_text"><p>seancorfield wrote:</p><p>&gt; Sorry you feel you have to make comments <br>&gt; anonymously when you're attacking the engineers <br>&gt; who designed and implemented those new features <br>&gt; in ColdFusion MX...</p><p>Yes, sorry about that. To the MM guys: sorry! Ignore me, I'm just ranting and raving like a madman.</p><p>&gt; Sounds like you really want to program in Java, not ColdFusion?</p><p>Gosh, not at all.</p><p>Surely we can strike a balance between the logic of Java and the rapid-development of CF?</p><p>If we're going to write fully fledged OO applications, as the CF-OO-CFC advocates would like ("CF developers should move to OO" etc.), we need the tools to do so.</p><p>Again, apologies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615511">7</a> by seancorfield
		posted on 3/21/2004 at 9:51 PM
		</div>
		<div class="comment_text"><p>My team are - for the most part - hardcore OO developers used to Java and C++ and they're able to build fully-fledged enterprise-class OO applications using CFMX.</p><p>No one claims CF is perfect (nor is Java, nor C++ etc) but it's perfectly good enough...</p></div>
	</div>
</div>
		