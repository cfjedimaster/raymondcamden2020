
<div class="comment" id="c_1713669041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669041">1</a> by Gary Gilbert
		posted on 7/24/2007 at 11:51 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I really don't think this is a "gotcha" at all.  I would think that auto-suggest should work that way.</p><p>You should at least know what to start with when you use auto-suggest.  With internal matching you run the risk of retuning a bunch of garbage if I start typing the word "ice" I am pretty sure I am not thinking of the word "choice" but I maybe thinking of Iceland, or icesavers.</p><p>After all this is auto suggest not auto full-text.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669052">2</a> by Ciqala Burt
		posted on 7/24/2007 at 12:32 PM
		</div>
		<div class="comment_text"><p>I agree with Gary, it seems to have been implemented the same way as the auto-suggest works on the google search toolbar in FF and pretty much every programming ide i've used that had an autocomplete/suggest feature.</p><p>I can see there may be occassions where the other usage might be desirable but the default behaviour should always be to match from the start of the string imho.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669046">3</a> by Steve Walker
		posted on 7/24/2007 at 3:02 PM
		</div>
		<div class="comment_text"><p>I would disagree with those that disagree.  In Google's case, there is far too much junk in their system to allow searching anywhere but the beginning, but if you are building your own application, you should be able to have it act the way you want.  In my mind, the whole idea with an autosuggest tool is that you know what you are looking for has certain letters, a word, or words somewhere in the string and you want the system to show you all the options.  I work with standardized nomenclature systems in the medical field and often the term you want to search for is in the middle of the string.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669054">4</a> by Tom Chiverton
		posted on 7/24/2007 at 3:55 PM
		</div>
		<div class="comment_text"><p>@Steve: "In Google's case, there is far too much junk in their system to allow searching anywhere but the beginning"<br>You've not seen their nifty real-time route updates when you drag the middle of a route on Maps, have you :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669055">5</a> by Raymond Camden
		posted on 7/24/2007 at 4:09 PM
		</div>
		<div class="comment_text"><p>To be clear - I think CF's behavior makes sense. But I wanted to warn folks inc ase they think otherwise - AND I do think there are cases where you want the "match anywhere" type behavior and it should be supported by CF, like Spry supports it as an option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669051">6</a> by Jason
		posted on 7/24/2007 at 5:00 PM
		</div>
		<div class="comment_text"><p>Well...I dont think it makes any sense at all.  Yeah, I'm the one who sent this in to Ray....I write the query to return what I want to return - not what CF thinks I want to return.  If I so choose to place a leading % and trailing % in the where statement, thats what I want.  The thing that bothers is that a proper JSON response was received and not displayed.</p><p>I too, like Steve above, need my suggest to pick up tings in the middle of a string.  Thats what I like about Cfajax - what you query is what you get.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669056">7</a> by Steve Walker
		posted on 7/24/2007 at 5:20 PM
		</div>
		<div class="comment_text"><p>@Tom - I have not seen that yet. To clarify my comment about Google; it was not intended to be derogatory, simply that with current technology, their repository is far too large for autosuggest to work efficiently if it were to search anywhere but the beginning.  Google produces some great tools and I suppose in the very near future we will have to re-edit old Star Trek episodes to hear Kirk say "Google, what are the current atmospheric conditions on Epsilon V?"</p><p>Completely off topic.  Sorry Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669060">8</a> by Raymond Camden
		posted on 7/24/2007 at 5:25 PM
		</div>
		<div class="comment_text"><p>No worries Steve. I'm sure I'm not the only who thinks one day Google will announce it's new name.</p><p>Skynet.</p><p>;)</p><p>(And if you don't get it, you are too young!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669048">9</a> by PhilNg
		posted on 5/12/2008 at 8:23 AM
		</div>
		<div class="comment_text"><p>I seem to be very contributive today!</p><p>To bypass this "feature", you can tell YUI not to do that:</p><p>&lt;cfajaximport scriptSrc="CFIDE/scripts" cssSrc="CFIDE/scripts/ajax" tags="cfinput-autosuggest"&gt;<br>	&lt;script&gt;<br>		try{<br>			YAHOO.widget.DataSource.prototype.queryMatchContains = true;<br>		} catch (hmm ){<br>			alert( hmm );<br>		}<br>	&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669059">10</a> by PhilNg
		posted on 5/12/2008 at 8:24 AM
		</div>
		<div class="comment_text"><p>And for Skynet, i'll be back for that, trust me. :o)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669047">11</a> by Dominic Watson
		posted on 8/18/2008 at 7:38 PM
		</div>
		<div class="comment_text"><p>I've actually created a custom tag that adds all the YUI widget functionality that CF didn't include:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbetterautosuggest.riaforge.org%3AX97MXy45buhwCMch8V7QZAkFS70&amp;cuid=3321886" rel="nofollow noopener" title="http://betterautosuggest.riaforge.org">http://betterautosuggest.ri...</a></p><p>Lets you do lists (think gmail recipient field) and querymatchContains plus lots more.</p><p>At the moment there is an issue with using queryMatchContains with binded autosuggests but it looks like PhilNgs code will help with that; will let you know how it goes.</p><p>Dominic</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669049">12</a> by Mikel
		posted on 7/5/2012 at 4:29 PM
		</div>
		<div class="comment_text"><p>@PhilNg</p><p>I know this is a very old post but I still wanted to say thanks!  Your script works like a champ and it saved me a lot of frustration.</p></div>
	</div>
</div>
		