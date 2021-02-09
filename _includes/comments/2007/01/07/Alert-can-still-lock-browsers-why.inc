
<div class="comment" id="c_1713661193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661193">1</a> by Kyle Hayes
		posted on 1/7/2007 at 11:27 PM
		</div>
		<div class="comment_text"><p>You know what is interesting about this, is that browsers already do have the functionality to allow you to abort long running JavaScript or Flash operations. It detects infinite loops and allows you to stop the script. I have a feeling, however, that the Alert issue is not caught in this because it contains visual feedback to the user. The only time I have seen the former occur is when the script was looping and no visual feedback to this loop was provided.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661180">2</a> by John Dowdell
		posted on 1/8/2007 at 4:44 AM
		</div>
		<div class="comment_text"><p>True. And yet we don't see exploits. "Any site can crash your browser!" seems like it would make a good security headline on a slow news day...?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661194">3</a> by Brian
		posted on 1/8/2007 at 6:48 AM
		</div>
		<div class="comment_text"><p>Opera has a toggle on Javascript alerts for "Stop scripts for executing on this page" (or something to that effect.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661189">4</a> by Raymond Camden
		posted on 1/8/2007 at 8:32 AM
		</div>
		<div class="comment_text"><p>Brian, nice to know _someone_ got it right (although I've never tried Opera myself.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661191">5</a> by Raymond Camden
		posted on 1/8/2007 at 8:34 AM
		</div>
		<div class="comment_text"><p>John, I'm not quite sure this would be a security issue per se. I mean, it can lock you out of your browser and force you to shut it down but it can't really (afaik) steal any information from you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661192">6</a> by PaulC
		posted on 1/8/2007 at 7:48 PM
		</div>
		<div class="comment_text"><p>Is there a more graceful way to handle alerts then, that doesn't prevent you from interacting with the browser until you confirm?</p><p>Maybe it pops open a toolbar at the top of the page along the lines of IE's "blocked content" message and Firefox's "install plug-in"...just more noticeable.</p><p>You could then have optional "traditional" alerts for times when you want to prevent the user from accessing the browser until they confirm. Such as: alert("message","strict") or alert("message","soft")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661195">7</a> by David L. Burkhart
		posted on 2/15/2008 at 1:49 AM
		</div>
		<div class="comment_text"><p>Or, how about simply putting to use the good old "break" key?  After all, what is it there for anymore?</p><p>There has got to be some sort of shortcut way to cancel a script from within a series of alert messages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661196">8</a> by Arnauld Chevallier
		posted on 11/18/2008 at 10:25 PM
		</div>
		<div class="comment_text"><p>This is an old thread and new solutions may have been implemented -- though I haven't heard of any. But anyway, I just wanted to share the following trick that I'm using to get rid of a perpetual alert() on FireFox:</p><p>just press and hold Ctrl+F4 on the keyboard, then use the mouse to click the "OK" button of the modal box. A last alert() may be fired, but the current tab should be closed.</p><p>(Note that it was only tested on FireFox 3.)</p></div>
	</div>
</div>
		