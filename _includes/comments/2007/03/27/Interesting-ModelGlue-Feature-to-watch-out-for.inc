
<div class="comment" id="c_1713663631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663631">1</a> by Jared Rypka-Hauer
		posted on 3/28/2007 at 8:05 AM
		</div>
		<div class="comment_text"><p>Ray, there's a reason for this.</p><p>Model-Glue creates in instance of ModelGlue.util.GenericCollection which is what it passes around and eventually becomes the ViewState object against which you call ViewState.getValue("foo"). Within the controller, however, the instance of the GenericCollection is wrapped with an instance of ModelGlue.unity.eventrequest.EventContext which is what you actually call event.getValue("foo) against within the controller. Internally it calls viewState.getValue(<a href="http://disq.us/url?url=http%3A%2F%2Fargument.name%3AbQPCZTJvX0s0evoIq1DpMG70Zig&amp;cuid=3321886" rel="nofollow noopener" title="argument.name">argument.name</a>,argument.default) and, since the method gives a default of "", the value is always created if you call getValue() in the controller.</p><p>However in a view you're calling getValue() directly against the raw GenericCollection and, therefore, it only sets a default if you ask it to by calling ViewState.getValue("foo","bar")... and no, this isn't necessarily obvious. And, yes, I think we have, at least, a documentation bug. Personally it's neverr caused me any issues, but that's probably because I do all my defaulting in the controller and generally make sure my data is all there in the View (or I call it with a default at the top of the page, effectively using it like a cfparam call).</p><p>I'll talk to Joe and see if we can't shore up this behavior a bit... it shouldn't be too hard to make it work one way or the other.</p><p>Thanks!</p><p>Jared</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663623">2</a> by Michael Long
		posted on 3/28/2007 at 10:53 AM
		</div>
		<div class="comment_text"><p>You might should make the function parameter default something like "[[default]]" so you'll know if a true "default" value has been passed in or not. If the value is "[[default]]" you know the user hasn't specified a real default value yet, and the function can just return an empty string instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663628">3</a> by Jared Rypka-Hauer
		posted on 3/28/2007 at 11:08 AM
		</div>
		<div class="comment_text"><p>I'm more inclined to make the ViewState's behavior fall in line with the EventContext's behavior than to break the current behavior of the EventContext. The EventContext is doing what it's supposed to be doing... it's the ViewState that's not behaving in line with the documentation and expected behavior.</p><p>In general that would seem to me to be the course least likely to break existing applications. Either way, this could be a situation where "beta software" really means "beta software" and some stuff gets broken because it exploited a bug in the framework.</p><p>One other option is to throw an exception of type "MissingDefaultInput" where the EventContext throws an error if a getValue() method call happens *without* a default passed in (but only if the value in question doesn't exist). The problem with this is that it introduces all sorts of potential conflicts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663632">4</a> by Nick
		posted on 3/28/2007 at 5:42 PM
		</div>
		<div class="comment_text"><p>I ran into this bug is v1 of Model-Glue as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663624">5</a> by Sean Corfield
		posted on 3/29/2007 at 9:18 AM
		</div>
		<div class="comment_text"><p>@Michael, the *correct* way to handle this is to *not* specify default= but instead simply specify required="false" and then you test structKeyExists(arguments,"argName") instead of testing the actual value against the "magical" default value.</p><p>It is extremely bad practice - albeit very common, unfortunately - to specify a default value when what you really want to do is test whether an argument was actually passed in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663627">6</a> by Michael Long
		posted on 3/29/2007 at 12:53 PM
		</div>
		<div class="comment_text"><p>I posted a quick solution to the problem since all the original article did was point out a bug in someone else's code... without proposing a solution in turn. But thanks for illustrating the "correct" method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663626">7</a> by Raymond Camden
		posted on 3/29/2007 at 3:31 PM
		</div>
		<div class="comment_text"><p>@Michael: To be clear, the bug here is a doc bug for the viewstate.getvalue method. The MAIN reason for the article was to point out something that could be confusing to users - as it got me AND the client I was training. I could follow up this post with a "btw, here is how you check for the existence"</p><p>@Sean - I'm not sure it is fair to say it is _extremely_ bad practice, although maybe I'm being defensive. ;) I DO stand by my belief that this is both unexpected and odd that a get would set anything, but isn't the end of the world.</p></div>
	</div>
</div>
		