
<div class="comment" id="c_1713719155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719155">1</a> by Richard Brasier
		posted on 10/20/2009 at 6:52 AM
		</div>
		<div class="comment_text"><p>Ahh a nice jQuery way, ive always done this the lazy way:</p><p>&lt;a href="user_delete.cfm?user_id=#user_id#" onclick="javascript: return confirm('Are you sure you want to delete this user permanently from the database?');"&gt;Delete&lt;/a&gt;&lt;/td&gt;</p><p>thx Ray :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719156">2</a> by Marco Spescha
		posted on 10/20/2009 at 2:56 PM
		</div>
		<div class="comment_text"><p>Cool.<br>I've done it with a simple js function and called it on the onClick-Event. So i was able to set a parameter.<br>For example: onClick="dangerous('delete this file')" and the function would be: <br>function dangerous(msg) {<br>  confirm('Are you sure you want to ' + msg +'?');<br>}</p><p>something like this i think.<br>regards.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719157">3</a> by Brian Swartzfager
		posted on 10/20/2009 at 4:41 PM
		</div>
		<div class="comment_text"><p>I just started using the Impromptu jQuery plugin (<a href="http://disq.us/url?url=http%3A%2F%2Ftrentrichardson.com%2FImpromptu%2Findex.php%29%3AmMo_flrTetA-ZnyMCtej4CVMGDQ&amp;cuid=3321886" rel="nofollow noopener" title="http://trentrichardson.com/Impromptu/index.php)">http://trentrichardson.com/...</a> to replace the default Javascript confirmation box in my apps.  It's pretty simple to implement and customize, and you end up with a nicer-looking dialog box that you can style to match the rest of the app UI.</p><p>I almost always add a confirmation step to any hyperlink that leads to a change on the database back-end, especially when such links are bunched together with other clickable items (making the chance of a misdirected click a bit higher).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719160">4</a> by Scott Wimmer
		posted on 10/20/2009 at 6:01 PM
		</div>
		<div class="comment_text"><p>Isn't there anywhere left that one can go without the constant drumbeat of politics? Is everyone now a pundit? It is becoming very annoying and predictable. With all due respect, please try to resist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719164">5</a> by Raymond Camden
		posted on 10/20/2009 at 6:06 PM
		</div>
		<div class="comment_text"><p>With all due respect, this is my blog. I like to have fun with my samples. Many times I'll mention Paris Hilton, who certainly has no relation to ColdFusion. I do it to liven up the code a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719159">6</a> by Robert
		posted on 10/20/2009 at 6:28 PM
		</div>
		<div class="comment_text"><p>It's these types of functions that make jQuery such a valuable efficiency tool. Thanks for sharing! And, I don't mind the politics. It's your blog and you can do with it as you see fit. It doesn't hurt that you agree with my personal views :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719163">7</a> by Raymond Camden
		posted on 10/20/2009 at 8:42 PM
		</div>
		<div class="comment_text"><p>@BrianS: Wow, impromptu is nice. Looks a bit slicker than jQuery Dialog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719162">8</a> by Brian Lang
		posted on 10/20/2009 at 8:58 PM
		</div>
		<div class="comment_text"><p>If you're using relative or absolute paths for your internal links (instead of fully qualified urls) you can target external links with this JQuery Selector:<br>$('a[href^="http"]')</p><p>You would then modify Ray's click function as follows to put out an alert for all external links:<br>$('a[href^="http"]').click(function() {<br>    return confirm("Are you sure you want to do this?")<br>}</p><p>This way you do NOT have to add unnecessary, non-semantic code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719158">9</a> by Bill Downs
		posted on 10/20/2009 at 9:47 PM
		</div>
		<div class="comment_text"><p>Wow - incredibly simple. Thanks Ray. I was just coding a form for internal use when your article showed up.</p><p>I simply changed the CSS tag 'dangerous' to something more 'me' friendly. Everyones happy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719165">10</a> by Brian Swartzfager
		posted on 10/20/2009 at 9:55 PM
		</div>
		<div class="comment_text"><p>@Ray: Yeah, sometimes I find using the jQuery UI widgets to be a bit more trouble than they're worth (though I do use the Datepicker).</p><p>@Bill Did you change "dangerous" to "mostlyHarmless"?  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719166">11</a> by Bill Downs
		posted on 10/20/2009 at 11:24 PM
		</div>
		<div class="comment_text"><p>Sorry Brian, I'm not going to take the bait on a Coldfusion blog. This is Ray's place - he get's to pick out the curtains.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719161">12</a> by Brian Swartzfager
		posted on 10/20/2009 at 11:37 PM
		</div>
		<div class="comment_text"><p>@Bill:  Eh?  I was just making a lame Hitchhiker's joke.  It wasn't meant as a comment on what Ray choose to classify as "dangerous" in his code example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719167">13</a> by Bill Downs
		posted on 10/21/2009 at 12:34 AM
		</div>
		<div class="comment_text"><p>Sorry, didn't run your comment through my obscurity filter. :) Never was much of a hitchhiker fan. Nuff said. Hey, how bout dem Phillies ???!</p></div>
	</div>
</div>
		