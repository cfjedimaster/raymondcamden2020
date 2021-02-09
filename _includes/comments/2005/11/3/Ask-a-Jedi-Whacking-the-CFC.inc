
<div class="comment" id="c_1713622435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622435">1</a> by Ryan Guill
		posted on 11/3/2005 at 9:02 PM
		</div>
		<div class="comment_text"><p>I really dont like how that function is named, it really should be structDeleteAt() or something.  structDelete() makes me think its deleting a structure; really a bad name.  Maybe structKeyDelete()...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622394">2</a> by Doug
		posted on 11/3/2005 at 11:21 PM
		</div>
		<div class="comment_text"><p>Maybe structDelete() because it IS for deleting a structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622395">3</a> by Daniel Greenfeld
		posted on 11/4/2005 at 12:09 AM
		</div>
		<div class="comment_text"><p>All I can say is that I feel sorry for somepoorinnocentCFC.</p><p>Maybe we should create a Save-the-CFCs group?  For ColdFusion objects that are destroyed merely to suit the whims of developers?</p><p>Heh heh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622397">4</a> by Ryan Guill
		posted on 11/4/2005 at 12:14 AM
		</div>
		<div class="comment_text"><p>if the member of the structure that you are deleting is a structure then yeah, it is deleting a structure, but if the member of the structure is an array, you are deleting an array *in* a structure.</p><p>oh, ive got it, maybe a better name would be wackAStructKey()...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622396">5</a> by todd
		posted on 11/4/2005 at 1:26 AM
		</div>
		<div class="comment_text"><p>Daniel:</p><p>Have you ever seen what those poor CFC's do to the ozone layer?  Sheeesh...and you want to save them??!?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622399">6</a> by Doug
		posted on 11/4/2005 at 8:37 AM
		</div>
		<div class="comment_text"><p>Well, true. But structKeyDelete() doesn't make sense when you're specifying a (root) struct itself. We can all write our own UDF wrappers that make more sense...right after ListFind() and ListContains() wrappers :-)</p></div>
	</div>
</div>
		