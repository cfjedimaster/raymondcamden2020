
<div class="comment" id="c_1713726787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726787">1</a> by Arnout
		posted on 10/6/2010 at 6:12 PM
		</div>
		<div class="comment_text"><p>It's better to move the var settings =.., and the $.extend out of your this.each loop. You only need to overwrite the options once not on each DOM node the each loop encounters.  This saves you a few JS object creations and $.extend method calls.</p><p>Sure, it works the way it is atm.. but it's not optimal :)</p><p>See updated gist: <a href="http://disq.us/url?url=http%3A%2F%2Fgist.github.com%2F613397%3A70SE0FgPcd75ypjF4y9thfysIoQ&amp;cuid=3321886" rel="nofollow noopener" title="http://gist.github.com/613397">http://gist.github.com/613397</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726798">2</a> by Raymond Camden
		posted on 10/6/2010 at 6:15 PM
		</div>
		<div class="comment_text"><p>I tell ya - I had the same though - but that's how the jQuery docs showed it. Glad to know my intuition was right this time. :) I've got a contact on the jQuery team. I'll see if I can get them to update the example. Or maybe they know something we don't - and if so - I'll share it back here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726796">3</a> by Joel Cox
		posted on 10/6/2010 at 6:26 PM
		</div>
		<div class="comment_text"><p>There is a similar plugin called jTruncate that I've used successfully in one of my projects. If nothing else, might be fun to compare approaches to the issue:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.jeremymartin.name%2F2008%2F02%2Fjtruncate-text-truncation-for-jquery.html%3AMuuMR225n6XyUHM-HQXwvRsk2eg&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.jeremymartin.name/2008/02/jtruncate-text-truncation-for-jquery.html">http://blog.jeremymartin.na...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726797">4</a> by Raymond Camden
		posted on 10/6/2010 at 6:28 PM
		</div>
		<div class="comment_text"><p>Just checked it out Joel and that is a darn good idea too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726803">5</a> by Dan G. Switzer, II
		posted on 10/6/2010 at 6:53 PM
		</div>
		<div class="comment_text"><p>IMO, you can improve the shortening kids, by replacing the inner if() block with:</p><p>var extraKids = kids.slice(settings.length).hide();</p><p>$("&lt;a href='' class='showMoreLink'&gt;" + settings.message + "&lt;/a&gt;")<br>	.bind("click.autoShortener", function(e) {<br>		// always do this first<br>		e.preventDefault();<br>		// show the hidden kids<br>		<a href="http://disq.us/url?url=http%3A%2F%2FextraKids.show%3ACO3iv_w250JYc5WtkMLsX6t7eGA&amp;cuid=3321886" rel="nofollow noopener" title="extraKids.show">extraKids.show</a>();<br>		// remove the link from the DOM<br>		$(this).remove();<br>	})<br>	.appendTo(item);</p><p>The key changes are:</p><p>* Cached the kids that are hidden. There's no point in running show() on all the kids--especially when some weren't hidden. This could also introduce bugs if for some reason code had hidden one of the other list items for some other reason. It improves performance too.</p><p>* e.preventDefault() should always be at the top of your event handlers so that if a JS error occurs, the default event is still canceled.</p><p>* Added namespace for the click event--that way you can remove it if you need to.</p><p>* Attached event handler and add to DOM in one piece of code</p><p>* The link is actually removed from the DOM, not just hidden. There's really no reason for it once you click on it. This isn't necessary, but if you're completely done with it, you might as well remove it--especially if this is being used on a page where the page is being updated by AJAX content and is rarely refreshed. You can begin to clutter the DOM with unused elements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726805">6</a> by Raymond Camden
		posted on 10/6/2010 at 10:15 PM
		</div>
		<div class="comment_text"><p>@Dan: Thanks. I agree on the extra Kids thing. And you are absolutely right on removing the link from the dom instead of just hiding it. Dumb move on my part. :)</p><p>@Arnout: I pinged my contact - and he agreed with you that in the demo it made sense for that block of code to be outside of the loop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726794">7</a> by Richard Brasier
		posted on 10/7/2010 at 1:37 AM
		</div>
		<div class="comment_text"><p>Very nice :) Simple but effective<br>A nice little feature would be to have an option to show the first X elements, and the last X elements, with a show all to show the elements missing in between.  <br>I might do a little mod of this :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726791">8</a> by Raymond Camden
		posted on 10/7/2010 at 1:47 AM
		</div>
		<div class="comment_text"><p>@Richard: Heh, that _does_ sound cool. Do it! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726795">9</a> by Richard Brasier
		posted on 10/7/2010 at 2:44 AM
		</div>
		<div class="comment_text"><p>Here we go:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rbrasier.com%2Fexamples%2F2010%2FOct%2Fjquery-autoshortener%2F%3Apd3Ca4mpw0UyvZw7buZSyrzE-ps&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rbrasier.com/examples/2010/Oct/jquery-autoshortener/">http://www.rbrasier.com/exa...</a></p><p>Virtually the same, just with another variable and another parameter in the split function</p><p>Code follows:</p><p>(function($) {</p><p>	$.fn.autoShortener = function(options) {</p><p>		return this.each(</p><p>			function() {</p><p>				var settings = {<br>					"showFirst":10,<br>					"showLast":0,<br>					"message":"Show More"<br>				};</p><p>				if(options) $.extend(settings, options);</p><p>				//get the children<br>				var item = $(this);<br>				var kids = item.children();</p><p>				if(kids.length &gt; settings.showFirst) {</p><p>					var hideTo = kids.length-settings.showLast;<br>					kids.slice(settings.showFirst,hideTo).hide();</p><p>					$(this).append("&lt;a href='' class='showMoreLink'&gt;" + settings.message + "&lt;/a&gt;");</p><p>					$(".showMoreLink", item).click(function(e) {<br>						item.children().show()<br>						$(this).hide();<br>						e.preventDefault();<br>					});</p><p>				}</p><p>			}<br>		);</p><p>	};</p><p>})(jQuery);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726792">10</a> by Richard Brasier
		posted on 10/7/2010 at 3:40 AM
		</div>
		<div class="comment_text"><p>Im trying to insert the link in between the elements rather than at the end.  The only problem im having is i cant seem to use $(this) with the insert after function.  Any ideas? How can i use (this) with the nth-child?</p><p>$("&lt;a href='' class='showMoreLink'&gt;" + settings.message + "&lt;/a&gt;").insertAfter(":nth-child(" + settings.showFirst +")");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726793">11</a> by Richard Brasier
		posted on 10/7/2010 at 4:48 AM
		</div>
		<div class="comment_text"><p>This is almost what I am after:</p><p>$(this).children(":nth-child(" + settings.showFirst +")").append("&lt;div&gt;&lt;a href='' class='showMoreLink'&gt;" + settings.message + "&lt;/a&gt;&lt;/div&gt;");</p></div>
	</div>
</div>
		