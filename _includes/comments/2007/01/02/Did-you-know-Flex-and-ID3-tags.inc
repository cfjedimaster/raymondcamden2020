
<div class="comment" id="c_1713660934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660934">1</a> by Brian
		posted on 1/2/2007 at 8:11 PM
		</div>
		<div class="comment_text"><p>Note that (if I'm remembering correctly) ID3 information only works for runtime-loaded files.  Embeds don't have the ID3 data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660951">2</a> by Raymond Camden
		posted on 1/2/2007 at 8:13 PM
		</div>
		<div class="comment_text"><p>Interesting. I wonder why it would NOT be supported. I guess it isn't a big deal since you are embedded a _known_ MP3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660952">3</a> by Daniel Todd
		posted on 1/2/2007 at 8:52 PM
		</div>
		<div class="comment_text"><p>Reading ID3 tags has actually been available for some time now, I think since one of the Flash 6 revisions. It's always nice to find ActionScript features you didn't quite expect to be there :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660936">4</a> by darron
		posted on 1/2/2007 at 9:19 PM
		</div>
		<div class="comment_text"><p>Lot's of good stuff in that there ActionScript 3.0 Cookbook! .. or so I hear ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660944">5</a> by Raymond Camden
		posted on 1/2/2007 at 9:26 PM
		</div>
		<div class="comment_text"><p>Hey Darron - I absolutely love it so far. I did notice one problem though. In 15.2 "Starting and Stopping a Sound", the text says:</p><p>The close() method of the Soutn object not only stops the sound from playing, but also stops the steeaming... The close() method should be called only when you are sure you are finished with that particular sound. Recipe 15.1 discusses a way to stop the sound from playing w/o stopping the stream.</p><p>However, in 15.1, there is no mention of this. The only mention of this is: "See Recipe 15.2 for information on how to control a sound's playing."</p><p>Seems like an infinite loop. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660942">6</a> by robert
		posted on 1/4/2007 at 12:55 AM
		</div>
		<div class="comment_text"><p>Just to let you know, Actionscript 2's sound object can also retrieve ID3 tags.  It can read either ID3 1.0 or ID3 2.0.  If your MP3 has ID3 2.0 tags, you can get just about any information out of the file you need.  This functionality has been around for a while.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660945">7</a> by Raymond Camden
		posted on 1/4/2007 at 1:00 AM
		</div>
		<div class="comment_text"><p>Flex is introducing me to all this new stuff in AS - new to me anyway. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660947">8</a> by darron
		posted on 1/4/2007 at 2:04 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>There isn't a direct way to stop a sound but still have it load in the background (i.e., there is no "pause" method on the Sound class).</p><p>However, to make sonud stop while still having the stream load you would write code like the following (pseudo-code, not tested)</p><p>// Save the sound channel after you tell the sound to play<br>var channel:SoundChannel = <a href="http://disq.us/url?url=http%3A%2F%2Fsound.play%3AA7J92Q9AGmACdSqePBe7sk9rr0M&amp;cuid=3321886" rel="nofollow noopener" title="sound.play">sound.play</a>();</p><p>// Tell the channel to stop playing, but record the offset <br>// time so that you can resume playing later<br>var position:Number = sound.position;<br>channel.stop();</p><p>// Then, continue playing<br><a href="http://disq.us/url?url=http%3A%2F%2Fsound.play%3AA7J92Q9AGmACdSqePBe7sk9rr0M&amp;cuid=3321886" rel="nofollow noopener" title="sound.play">sound.play</a>( position );</p><p>The sound should continue to stream since only the channel was stopped and the sound was never closed.</p><p>Hope that helps...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660949">9</a> by darron
		posted on 1/4/2007 at 2:08 AM
		</div>
		<div class="comment_text"><p>By the way, that refer to 15.1 looks like it was a typo, and should've actually sent you to 15.10 (oops!).  The "Pausing and Restarting a Sound" covers the topic in a little more detail than my previous comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660948">10</a> by Raymond Camden
		posted on 1/4/2007 at 2:10 AM
		</div>
		<div class="comment_text"><p>Thanks Darron!</p></div>
	</div>
</div>
		