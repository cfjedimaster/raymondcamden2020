
<div class="comment" id="c_1713740222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740222">1</a> by Isaac Sunkes
		posted on 4/2/2012 at 10:33 PM
		</div>
		<div class="comment_text"><p>Also, you can do something like this...</p><p>$("#testButton",$.mobile.activePage).on("click", function(e){...</p><p>Which has worked for me... although my coworker says there is an even better way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740227">2</a> by Mike Goeppner
		posted on 4/2/2012 at 11:25 PM
		</div>
		<div class="comment_text"><p>Another way to do this would be to take advantage event bubbling and delegeated events in jQuery with .on().</p><p>Here is an example of your code using this method: <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FDrg62%2F3%2F%3A3gXIKurXuFTLinEurWvrqqtBzB8&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/Drg62/3/">http://jsfiddle.net/Drg62/3/</a></p><p>By binding your event a single time to the body, and passing the element that the event will fire on as the second argument, when you click the button, the click event will bubble up the DOM tree until it reaches the body. The body then will fire the event handler for any matched selectors.</p><p>The main benefit of handling events is only binding once to an existing element at runtime, then that event will be bound on any descendants that match the selector.</p><p>And you don't have to worry about stuff being bound multiple times.</p><p>For more information check out: <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Fon%2F%3A67BVgMmFTAn1s7HRAs8c3yWcF7E&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/on/">http://api.jquery.com/on/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740225">3</a> by Raymond Camden
		posted on 4/3/2012 at 1:36 AM
		</div>
		<div class="comment_text"><p>@Isaac: How does your code make things better? The only real difference is that you supplied a filter to the selector for the current page. Unless I'm misreading you.</p><p>@Mike: I kinda get your point there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740226">4</a> by Isaac Sunkes
		posted on 4/3/2012 at 5:37 PM
		</div>
		<div class="comment_text"><p>To be fair, I use this method on "live" and not with "on". When I was getting duplicate page loads and click events from bindings, selecting the current page stopped events from being bound to pages that were not visible. have not tried it with "on".</p></div>
	</div>
</div>
		