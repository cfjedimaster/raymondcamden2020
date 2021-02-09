
<div class="comment" id="c_1713742209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742209">1</a> by Elias
		posted on 7/18/2012 at 12:24 AM
		</div>
		<div class="comment_text"><p>It could be worse ... In Internet explorer does not even work!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742211">2</a> by Raymond Camden
		posted on 7/18/2012 at 12:25 AM
		</div>
		<div class="comment_text"><p>Probably because of console. Console is in IE9 I think. The jQuery should work in IE6 and higher though. FOr the heck of it, download my code, remove the consoles, and tell me what you see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742210">3</a> by Bryce
		posted on 7/18/2012 at 12:26 AM
		</div>
		<div class="comment_text"><p>Ran into this while doing some work with buttons using Bootstrap.  There is an issue on the Bootstrap github about it - <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Ftwitter%2Fbootstrap%2Fissues%2F793%3AR6KQXeb_QGG_eOgQVKb4SIsDM98&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/twitter/bootstrap/issues/793">https://github.com/twitter/...</a></p><p>Apparently this is a 'feature' of Firefox - <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F5985839%2Fbug-with-firefox-disabled-attribute-of-input-not-resetting-when-refreshing%3A88NoHFLDgq3xPC9WPrbiucc50UQ&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/5985839/bug-with-firefox-disabled-attribute-of-input-not-resetting-when-refreshing">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742212">4</a> by Raymond Camden
		posted on 7/18/2012 at 12:30 AM
		</div>
		<div class="comment_text"><p>My god.... well, that explains it. Thank you. I find this... incredible.</p><p>The next question is - is there a way to disable this w/o modifying the HTML? And shoot, does autocomplete="off" even make sense on a button? Trying it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742213">5</a> by Raymond Camden
		posted on 7/18/2012 at 12:32 AM
		</div>
		<div class="comment_text"><p>Yep, autocomplete="off" in the button seems to work, but feels dirty and unnecessary. Disabled is a property of the field, NOT the value. Shoot, if I use jQuery to move it to a new position, would Firefox remember that too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742215">6</a> by Elias
		posted on 7/18/2012 at 12:34 AM
		</div>
		<div class="comment_text"><p>You were right. The problem in IE9 was for the console!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742214">7</a> by Bryce
		posted on 7/18/2012 at 12:36 AM
		</div>
		<div class="comment_text"><p>Found this while looking up another issue.<br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F32369%2Fdisable-browser-save-password-functionality%23comment5914248_32386%3AMJXw744gGbMjzlDTYgZvqJz7BAo&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/32369/disable-browser-save-password-functionality#comment5914248_32386">http://stackoverflow.com/qu...</a></p><p>Seems like it isn't supported in Firefox 3.6.15. Not sure if it is just that version or anything previous to it as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742216">8</a> by Bryce
		posted on 7/18/2012 at 12:38 AM
		</div>
		<div class="comment_text"><p>Not sure if Firefox would remember it if you used jQuery. You'd have to test it to find out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742217">9</a> by Raymond Camden
		posted on 7/18/2012 at 12:39 AM
		</div>
		<div class="comment_text"><p>I just tested. Using jQuery to move a button's top/left position does NOT persist in Firefox. But by what logic is "disabled" considered ok to persist but not other things like left/top. If you are going to do something like this then be consistent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742218">10</a> by Michael Stone
		posted on 7/18/2012 at 12:47 AM
		</div>
		<div class="comment_text"><p>I've ran into this before. Seems to be FireFox is doing a little too much DOM caching and forces developers to add kludge fixes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742219">11</a> by Raymond Camden
		posted on 7/18/2012 at 12:49 AM
		</div>
		<div class="comment_text"><p>To be clear - I'm pro autocomplete, but isn't it the "standard" that you wait until the user types stuff in? Like I type "R" in a name field and I get an auto complete for Raymond. _Before_ that if the html was value="" I'd expect to see an empty field. Always.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742221">12</a> by Chris Heilmann
		posted on 7/18/2012 at 1:07 AM
		</div>
		<div class="comment_text"><p>This is Firefox caching form entries in case you reload by accident. You need to shift+reload the page to avoid it during testing. I find it annoying during development but it saved my tushie quite some time when getting flight tickets.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742224">13</a> by Raymond Camden
		posted on 7/18/2012 at 1:08 AM
		</div>
		<div class="comment_text"><p>Ah, shift+reload. That works and is 100% accessible via the keyboard. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742223">14</a> by Andres Cayon
		posted on 7/18/2012 at 1:10 AM
		</div>
		<div class="comment_text"><p>Not sure about this, but...<br>"The .prop() method should be used to set disabled and checked instead of the .attr() method."<br><a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Fprop%2F%3AYX5hyBNU8K6AfqKUyc-Y6yxobGI&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/prop/">http://api.jquery.com/prop/</a></p><p>Have you tried it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742226">15</a> by Raymond Camden
		posted on 7/18/2012 at 1:12 AM
		</div>
		<div class="comment_text"><p>Andres, that doesn't make a difference, _but_ is a useful reminder. I keep forgetting about prop. Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742228">16</a> by Paul
		posted on 7/18/2012 at 4:40 PM
		</div>
		<div class="comment_text"><p>I've been getting around this for years by enabling the button as part of any other commands I run on page load.</p><p>$(document).ready()(function(){<br>  $('#btn').attr('disabled',false)<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742227">17</a> by Dan G. Switzer, II
		posted on 7/18/2012 at 6:01 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>I think Mozilla's point of view is that a "disabled" field is part of the cached state of your form--which is why setting autocomplete to "off" resolves the issue.</p><p>For example, a common use case is to have a series of radio elements with an "Other" option that has a corresponding text box you can fill in. For any radio option not "Other" you disable the text box. If by caching the state of the disabled field, the form is returned to it's exact state before you reloaded.</p><p>That said, I think that should be on the developer to control behavior, but I'd assume that's why they implement caching of the disabled property along w/the value of the fields.</p></div>
	</div>
</div>
		