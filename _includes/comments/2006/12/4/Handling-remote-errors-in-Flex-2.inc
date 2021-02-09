
<div class="comment" id="c_1713659969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659969">1</a> by Joe Rinehart
		posted on 12/5/2006 at 5:39 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>One thing I've found helpful is using the ServiceLocator / Business Delegate patterns from Cairngorm.  It'll let you more dynamically handle errors by "wrapping" the existence of the remote object in a delegate, letting you have different delegates for different contexts, doing different things for faults on the same remote method.</p><p>On the UI side, I'm generally showing people Alerts that contain a (human friendly!) error message and the option to try again - which is something else the Command/Delegate patterns make pretty easy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659958">2</a> by Craig Drabik
		posted on 12/5/2006 at 7:32 PM
		</div>
		<div class="comment_text"><p>I've gotten myself in the habit of creating a class to wrap the data returned from remoting calls.  In this class I have a success property, an error type property, an error text property, and a property which contains the result of the function, if successful.  On the actionscript side, this allows me to easily test for error conditions that were trapped in Cold Fusion and report them to the user, or take appropriate action in the application.</p><p>It's important to note that the fault handler is really only useful when things really go kablammo..  If you are doing proper exception handling in your back end you'll need to be able to report those issues back to the calling application.</p></div>
	</div>
</div>
		