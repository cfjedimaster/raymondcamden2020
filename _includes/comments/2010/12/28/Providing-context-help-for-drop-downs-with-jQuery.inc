
<div class="comment" id="c_1713728589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728589">1</a> by Derek P.
		posted on 12/28/2010 at 11:55 PM
		</div>
		<div class="comment_text"><p>If you stick with the click method against the select box, can you rely on this.selectedIndex to get the options index and pull the data out that way?</p><p>More about that here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmsdn.microsoft.com%2Fen-us%2Flibrary%2Fms534624%28v%3Dvs.85%29.aspx%3AgH7n1oGr8puk9DMItHLnLK7H2k8&amp;cuid=3321886" rel="nofollow noopener" title="http://msdn.microsoft.com/en-us/library/ms534624(v=vs.85).aspx">http://msdn.microsoft.com/e...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728598">2</a> by JCaito
		posted on 12/29/2010 at 12:04 AM
		</div>
		<div class="comment_text"><p>I got this to work in IE just fine and thought it would be nice to display the descriptions for all selected items.</p><p>&lt;html&gt;</p><p>&lt;head&gt;<br>&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjquery.min.js%3AmyXuj5h8gP7HzSEw76YxIcay7LQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;<br>&lt;script&gt;<br>var desc = "";<br>$(document).ready(function() {<br>	$("#features").click(function() {<br>		desc = "";<br>		$("#description").text("");<br>		$(this).children().each(function(index,value){<br>			if($(value).attr("selected")){<br>				desc = desc + $(value).data("description") + "&lt;br /&gt;";<br>			}<br>			$("#description").html(desc);<br>		});<br>	});<br>})<br>&lt;/script&gt;</p><p>&lt;/head&gt;</p><p>&lt;body&gt;</p><p>&lt;form&gt;<br>Select an option for your new car:&lt;br/&gt;<br>&lt;select name="features" id="features" multiple size="5"&gt;<br>&lt;option value="1" data-description="Turns on your wipers automatically when it rains."&gt;Automatic Wipers&lt;/option&gt;<br>&lt;option value="2" data-description="Helps ensure you get the best parking spot."&gt;Machine Guns&lt;/option&gt;<br>&lt;option value="3" data-description="Clears messy traffic jams."&gt;Sidewinder Missiles&lt;/option&gt;<br>&lt;/select&gt;<br>&lt;/form&gt;<br>&lt;div id="description"&gt;&lt;/div&gt;<br>&lt;/body&gt;</p><p>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728594">3</a> by todd sharp
		posted on 12/29/2010 at 12:13 AM
		</div>
		<div class="comment_text"><p>Cool demo Ray.  I agree that the data() method is very handy in jQuery!  I take a bit of a lazier approach to provide contextual help for select options and just use the title attribute on the &lt;option&gt;.  I'm pretty sure most browsers (even IE) support it and give you a tooltip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728600">4</a> by todd sharp
		posted on 12/29/2010 at 12:23 AM
		</div>
		<div class="comment_text"><p>Here's another cool option that looks like it's being planned for jQuery UI:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwiki.jqueryui.com%2Fw%2Fpage%2F12138056%2FSelectmenu%3ArLn-nNTI0ceZTqWtTTGJcyrr9Go&amp;cuid=3321886" rel="nofollow noopener" title="http://wiki.jqueryui.com/w/page/12138056/Selectmenu">http://wiki.jqueryui.com/w/...</a></p><p>You can add additional formatted text, etc to the drop down.</p><p>Sorta OT, but it seems like there is a lot of cool stuff "planned" for jQuery UI but it seems like the dev cycle is a bit slow.  Anyone know why?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728576">5</a> by Roland Collins
		posted on 12/29/2010 at 12:41 AM
		</div>
		<div class="comment_text"><p>Ray, I believe that this is what you were looking for.  You should contninue to use the change method of the select itself.</p><p>$(document).ready(function() {<br>	$("#features").change(function() {<br>		$("#description").text("");</p><p>		var options = $("option:selected", this);<br>		var desc = '';</p><p>		options.each(function(i) {<br>			desc = $(this).data("description");<br>			$("#description").append(desc + '&lt;br&gt;');	<br>		});<br>	});<br>})</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728596">6</a> by Raymond Camden
		posted on 12/29/2010 at 12:41 AM
		</div>
		<div class="comment_text"><p>Guys - I made a mistake in my blog post. I'm a bit rushed now and will respond to your comments later. In the beginning I said you must do $.data() and could not do $("...").data(). That was based on a mistake I made earlier in my code testing process. Unfortunately, I kept on to that mistake when I wrote the blog entry. If you read my blog post, you clearly see me doing $(...).data(). Sorry!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728590">7</a> by Brian Swartzfager
		posted on 12/29/2010 at 12:42 AM
		</div>
		<div class="comment_text"><p>I was going to suggest something along the same lines as what JCaito did.  Personally, I try to avoid using multi-select drop-downs these days:  they're not pretty and most of my non-technical users have trouble selecting multiple items.  A list of checkboxes can accomplish the same thing in most cases.</p><p>When I want to provide context or hints on a single selection drop-down, I tend to do what Todd does (use the title attribute) out of habit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728591">8</a> by Raymond Camden
		posted on 12/29/2010 at 12:52 AM
		</div>
		<div class="comment_text"><p>All: I added text to make sure folks know I was wrong about $.data - is it clear?</p><p>@DerekP: That goes back to my workaround of remembering what was selected. I'm trying to avoid it. It _would_ work - yes.</p><p>@JCaito: I had thought about showing them all too - but in my mind the detail should be for one item at a time. Obviously that's a UI decision and I probably shouldn't be making it. ;)</p><p>@todd: title - interesting. Didn't think about that. :)</p><p>@todd 2: No idea on that. Oddly jQuery Mobile seems to be moving super fast. Then again - look at how much more interest there is in mobile these days.</p><p>@Roland: Again, that goes back to showing _all_ the help where I wanted to show one at a time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728587">9</a> by JCaito
		posted on 12/29/2010 at 12:58 AM
		</div>
		<div class="comment_text"><p>Agreed on the UI decision ^__^</p><p>Changing the selector to '#features' as opposed to '#features option' and then using the 'children()' selector will fix your IE issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728603">10</a> by Roland Collins
		posted on 12/29/2010 at 12:58 AM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Right - but why wouldn't you want to display the help for all selected items?</p><p>What if I select 3 items at once by using shift-click or click/drag?  How would you determine which was the item I selected, when technically, I selected 3?  If you're going to allow for users to select multiple items, you can't expect them to click each one individually.  Maybe the issue is that you're using the wrong control for the job.</p><p>If your assumption is that they're going to select one at a time, then you should probably use checkboxes instead of a drop down.</p></div>
	</div>
</div>
		