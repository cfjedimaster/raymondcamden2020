
<div class="comment" id="c_1713734473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734473">1</a> by Dan G. Switzer, II
		posted on 8/2/2011 at 10:48 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>A couple of jQuery tips for you:</p><p>1. Intializing jQuery objects is expensive. This means your repeated use of $(tabs[i]) adds unnecessary overheard. You're better off initialzing $(tabs[i]) into a variable and caching the results.</p><p>2. Instead of using a for loop, consider using the each() method.</p><p>Here's a refactored version of your code:</p><p>$("body [data-role=\"tabs\"]")<br>	// attach the tabs behavior<br>	.tabs()<br>	// for each tab, run the following<br>	.each(function (i, el){<br>		var $el = $(el), $selected = $el.find("[data-selected='true']");<br>		if( $selected.length ) $el.tabs("select", $selected.attr("id"));<br>	});</p><p>I didn't test it, but this code should do the same thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734486">2</a> by Raymond Camden
		posted on 8/3/2011 at 12:04 AM
		</div>
		<div class="comment_text"><p>Yeah yeah - optimize later - play now. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734487">3</a> by Phil Parsons
		posted on 8/9/2011 at 2:43 PM
		</div>
		<div class="comment_text"><p>@Dan,</p><p>jQuery will just use a for loop to do the iteration for .each in this case so there is no real performance benefit other than the for loop in jQuery is slightly more elegant in it's implementation (no offence intended Ray).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734494">4</a> by Uchiha Itachi
		posted on 11/19/2013 at 8:49 AM
		</div>
		<div class="comment_text"><p>Just the effect I want. However, your code may needs some optimization. I used to use .NET based UI control like kettic: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.kettic.com%2Fwinforms_ui%2Ffeature.shtml%3ASG_0_FvD6u153NYuMrbiojwJYNE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.kettic.com/winforms_ui/feature.shtml">http://www.kettic.com/winfo...</a><br> to help me to achieve the function that your jQuery UI yields.</p></div>
	</div>
</div>
		