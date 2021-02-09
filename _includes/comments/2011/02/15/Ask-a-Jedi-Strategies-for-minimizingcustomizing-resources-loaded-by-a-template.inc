
<div class="comment" id="c_1713729737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729737">1</a> by Richard Davies
		posted on 2/15/2011 at 11:52 PM
		</div>
		<div class="comment_text"><p>For performance reasons, it's best to avoid putting JavaScript inside the HEAD section because it prevents the page's contents from loading/rendering until all of those scripts have been downloaded. The best practice is to load JavaScript right before the end of your BODY tag.</p><p>I find that this usually makes it easier to dynamically load scripts depending on which view/template you're rendering as you can usually just put the necessary scripts at the end of your view/template, or set the necessary flags that are checked by some other code that renders the final "footer" portion of the page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729751">2</a> by todd sharp
		posted on 2/15/2011 at 11:52 PM
		</div>
		<div class="comment_text"><p>I'm sure someone will mention it, so I might as well...</p><p>Your last approach could be modified to use &lt;cfhtmlhead&gt;:</p><p>&lt;cfsavecontent variable="js"&gt;<br>&lt;script&gt;<br>$(document).ready(function() {<br>stuff<br>});<br>&lt;/script&gt;<br>&lt;/cfsavecontent&gt;<br>&lt;cfhtmlhead text="#js#" /&gt;</p><p>Which would automagically inject the script into the head.  People tend to go bonkers about this, so YMMV... (personally i do it all the time).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729753">3</a> by todd sharp
		posted on 2/15/2011 at 11:54 PM
		</div>
		<div class="comment_text"><p>Also - FWIW - I tend to include the core jQuery library on every single page in an app.  It's so small that it's practically unnoticeable and it's just nice to know that it's always there when I need it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729752">4</a> by Raymond Camden
		posted on 2/15/2011 at 11:58 PM
		</div>
		<div class="comment_text"><p>@todd -Yes to including jQuery on every page, and no to cfhtmlhead. I'll use that tag when they force me to at gunpoint.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729754">5</a> by Richard Davies
		posted on 2/16/2011 at 12:00 AM
		</div>
		<div class="comment_text"><p>Okay, now I'm curious... what are the arguments against cfhtmlhead?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729756">6</a> by Ryan Vikander
		posted on 2/16/2011 at 12:07 AM
		</div>
		<div class="comment_text"><p>I will always disagree to not putting JS in the head. If your JS is so big that it slows your page load you really need to reevaluate your JS. Main problem with having JS be the last thing to load, if you have a decent sized form and all your form validation is in that JS if your JS validation isn't loaded a user will be able to click around, maybe submit the form, maybe breaking the page, or else screw up any sort of JS animations that you might use. Minimize, minimize, minimize.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729757">7</a> by Richard Davies
		posted on 2/16/2011 at 12:23 AM
		</div>
		<div class="comment_text"><p>@Ryan,</p><p>If you're relying on JS form validation and not doing server side validation you've got bigger problems to worry about than performance and JS code bloat.</p><p>There will always be exceptions to the rule, but it's still best practice in most cases: <a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.yahoo.com%2Fperformance%2Frules.html%23js_bottom%3AsmhdzrWuHqeW5u_0Bfa-zs730E4&amp;cuid=3321886" rel="nofollow noopener" title="http://developer.yahoo.com/performance/rules.html#js_bottom">http://developer.yahoo.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729734">8</a> by Ryan Vikander
		posted on 2/16/2011 at 12:24 AM
		</div>
		<div class="comment_text"><p>Of course it's not the sole form of validation, but avoiding the JS errors is always a personal preference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729741">9</a> by Mike Lowry
		posted on 2/16/2011 at 2:28 AM
		</div>
		<div class="comment_text"><p>@Ryan</p><p>You can keep your JS at the bottom and not have the user be able to submit the form until it is loaded by disabling the submit button in your html and then running a $('#submit').attr("disabled","")  in your .ready().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729761">10</a> by John Allen
		posted on 2/16/2011 at 8:41 PM
		</div>
		<div class="comment_text"><p>@Ray - gunpoint... why? I love cfhtmlhead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729759">11</a> by Raymond Camden
		posted on 2/16/2011 at 8:43 PM
		</div>
		<div class="comment_text"><p>It just feels messy. I'd rather put stuff in the head myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729760">12</a> by Doug
		posted on 5/17/2011 at 5:00 PM
		</div>
		<div class="comment_text"><p>I'm still trying different approaches on this front. I can't put my finger on why, but I just don't like using CFIMPORT and CFHTMLHEAD.</p><p>Anyways, my latest approach is to use a CT for layout that accepts a couple params like so:</p><p>&lt;cf_layout title="#appname# Login"<br>head="css_common,css_tables,css_login,anticache,js_login"&gt;</p><p>The CT takes the head param and spins out corresponding CFMODULES within it:</p><p>&lt;cfloop index="h" list="#attributes.head#" delimiters=","&gt;<br>&lt;cfmodule name="layout.#h#"&gt;<br>&lt;/cfloop&gt;</p><p>What I find fascinating is how many different ways this issue can be solved. I suppose I should look into using something like FW/1 and not reinvent the wheel, but for now I'm having fun exploring options.</p></div>
	</div>
</div>
		