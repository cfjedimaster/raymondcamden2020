
<div class="comment" id="c_1713725072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725072">1</a> by David
		posted on 7/12/2010 at 8:08 AM
		</div>
		<div class="comment_text"><p>Jquery has a nice method for this if you're in an event handler, event.preventDefault() then you don't have to return false and it has more meaning. So in theory this could be written as $('form').submit(function(evt){evt.preventDefault}). More typing so prob only wrth it if you're writing something custom anyway</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725054">2</a> by Raymond Camden
		posted on 7/12/2010 at 3:20 PM
		</div>
		<div class="comment_text"><p>Yep, good tip. I try to jQuery-ify everything, just couldn't justify it here for one line. ;) As a side note though, the guy who needed this let me know that the code failed to work in IE8, so it might end up being that we _do_ need the jQuery version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725078">3</a> by Zach
		posted on 4/20/2011 at 4:59 AM
		</div>
		<div class="comment_text"><p>Ray, thank you for posting this!!!  I have been banging my head for three hours, trying to figure out why, when pressing Enter, my cfdiv tag just blanks out the form and doesn't pass any variables.  Adding that OnSubmit code finally made the form variables work inside my cfdiv when Enter is pushed.  Jeez.  I need to add this to the LiveDocs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725077">4</a> by Raymond Camden
		posted on 4/20/2011 at 5:15 AM
		</div>
		<div class="comment_text"><p>Glad to help.</p></div>
	</div>
</div>
		