
<div class="comment" id="c_1713742714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742714">1</a> by jeff
		posted on 8/23/2012 at 12:00 AM
		</div>
		<div class="comment_text"><p>So are you using Brackets as your everyday editor?  Is it stable/feature complete enough for that?  I'm fascinated by the idea of Brackets and would love to give it a try if it's close.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742719">2</a> by Raymond Camden
		posted on 8/23/2012 at 12:22 AM
		</div>
		<div class="comment_text"><p>Not yet - no. I'm using it from time to time - writing extensions - etc. My main editor is still Sublime Text 2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742720">3</a> by Sha
		posted on 3/23/2013 at 5:50 PM
		</div>
		<div class="comment_text"><p>You'll need to comment out this line: cm.indentLine(cm.getCursor().line); around line 1836 in function called newlineAndIndent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742718">4</a> by Raymond Camden
		posted on 3/23/2013 at 11:00 PM
		</div>
		<div class="comment_text"><p>That must be new. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742724">5</a> by ACR
		posted on 2/20/2014 at 1:19 PM
		</div>
		<div class="comment_text"><p>Any idea for Brackets v36?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742725">6</a> by Raymond Camden
		posted on 2/20/2014 at 4:49 PM
		</div>
		<div class="comment_text"><p>Eh? This hack probably still works. There is a new way to handle preferences in Sprint 36 (see their blog), but this preference isn't supported yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742741">7</a> by rkn
		posted on 6/26/2014 at 1:02 PM
		</div>
		<div class="comment_text"><p>A bit old post but if someone finds this now, this is how to do it:</p><p>Go to Debug-&gt;Open Preferences File and add the same setting (but in json mode), for example, this is my preferences file (brackets.json):</p><p>{<br>    "debug.showErrorsInStatusBar": false,<br>    "linting.collapsed": true,<br>    "closeBrackets": true,<br>    "smartIndent": false<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742742">8</a> by Raymond Camden
		posted on 6/26/2014 at 6:05 PM
		</div>
		<div class="comment_text"><p>Yep - preferences are *much* easier to do now. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2532629125">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cuyzGQ8OOx.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2532629125">9</a> by Danny Santos
		posted on 2/24/2016 at 2:25 PM
		</div>
		<div class="comment_text"><p>Hey, I have an annoying problem in that Brackets actually removes my indentation. I'll indent to where I want to be and start typing and the whole line will move right back up to the margin! Even for someone who isn't particularly picky with their settings that would be really annoying! Don't suppose you have any insight on how to fix that?</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_2532668145">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2532668145">10</a> (In reply to <a href="#c_2532629125">#9</a>) by Raymond Camden
		posted on 2/24/2016 at 2:49 PM
		</div>
		<div class="comment_text"><p>Sorry, never seen that one before. To be honest, I don't use Brackets much. I'd file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2532673181">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cuyzGQ8OOx.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2532673181">11</a> (In reply to <a href="#c_2532668145">#10</a>) by Danny Santos
		posted on 2/24/2016 at 2:52 PM
		</div>
		<div class="comment_text"><p>Ok, thanks for the reply</p></div>
	</div>
</div>
		