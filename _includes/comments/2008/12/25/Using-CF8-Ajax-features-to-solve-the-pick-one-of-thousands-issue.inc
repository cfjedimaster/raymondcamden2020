
<div class="comment" id="c_1713710915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710915">1</a> by Jake Munson
		posted on 12/26/2008 at 10:50 AM
		</div>
		<div class="comment_text"><p>What about using auto-suggest, like on your project search page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710931">2</a> by Ben Nadel
		posted on 12/26/2008 at 6:21 PM
		</div>
		<div class="comment_text"><p>Ray, nice solution. (I think the previous comment is spam - I got the same exact one on my site).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710929">3</a> by Jeff Schneider
		posted on 12/26/2008 at 7:51 PM
		</div>
		<div class="comment_text"><p>Nice example. I recently had to do something like this.. was trying CF8's autosuggest but couldn't figure how to pass an ID value.  Ended up using Scriptaculous.. the afterUpdate function makes it real easy to pass in an ID</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgithub.com%2Fmadrobby%2Fscriptaculous%2Fwikis%2Fajax-autocompleter%3AtZkzHg3wlXQ2T-_Le71kuY5mpIY&amp;cuid=3321886" rel="nofollow noopener" title="http://github.com/madrobby/scriptaculous/wikis/ajax-autocompleter">http://github.com/madrobby/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710930">4</a> by Raymond Camden
		posted on 12/26/2008 at 7:59 PM
		</div>
		<div class="comment_text"><p>Spam comment nuked. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710927">5</a> by Raymond Camden
		posted on 12/26/2008 at 8:01 PM
		</div>
		<div class="comment_text"><p>@JM: Issue with autosuggest is that you get the string back. So if I typed in "Ray" and it matched Raymond Camden, I would have no idea what ID Raymond Camden is. I need to display a name, but store a PK value.</p><p>(Reading Jeff's comment) - So yeah, what Jeff encountered is the same. No way to do both a complex result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710932">6</a> by Brian O
		posted on 12/26/2008 at 8:12 PM
		</div>
		<div class="comment_text"><p>I use the html-based cfform cfinput autosuggest feature when dealing with fields that become unwieldy in selects. The key is to identify who the user will be and how they best operate. For example I started by setting the autosuggestBindDelay = 1 [sec] and the autosuggestMinLength = 1, but users that type fast became frustrated till I increased the values to 5sec and 3 respectively. Now a user who types fast and knows what they are typing never sees the autosuggest, but those that are unsure will get help as well as postive feedback that a value exists. I use a select in combination with an autosuggest for fields that are small enough (&lt;1 or 2k records) - since I don't have dialup modem users. I also use this field to allow the user to add a new value, which is not applicable in your case. Also with autosuggest you have to watch out if your values have a leading zero and append a space on the return or it will get removed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710933">7</a> by Brian O
		posted on 12/26/2008 at 8:14 PM
		</div>
		<div class="comment_text"><p>I meant prepend a space.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710914">8</a> by Raymond Camden
		posted on 12/26/2008 at 8:16 PM
		</div>
		<div class="comment_text"><p>Brian, how do you deal with ID versus label issues? Given that "Raymond Camden" is PK 3, and your autosuggest only shows Raymond Camden, how do you handle that when you save the data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710918">9</a> by Brian O
		posted on 12/26/2008 at 8:35 PM
		</div>
		<div class="comment_text"><p>When I chose to use the autosuggest in which I bring back a string, I made the decision to not pass keys only the string values. Then when I use the chosen values I just pass them back to my CFC and do my lookup there if further processing is needed. The lookup is very fast. I have not use Jquery, Spry or Scriptaculous. My toolkit is growing, but still limited.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710917">10</a> by Jake Munson
		posted on 12/26/2008 at 8:38 PM
		</div>
		<div class="comment_text"><p>I guess I'm confused.  If I were to do this, I'd return a query object (JSON) from the Ajax call containing all the data that I need, and then I'd fill out the HTML table using DOM add/remove methods (using JS).  So you'd have both the string and the ID in the results, and you'd put them both into the href table row values.  But I might be missing something important here...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710921">11</a> by Raymond Camden
		posted on 12/26/2008 at 10:21 PM
		</div>
		<div class="comment_text"><p>@Jake: So you would return 4000 rows of data in JSON? Even with 'slim' JSON, that's a bit much. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710919">12</a> by Jake Munson
		posted on 12/26/2008 at 10:54 PM
		</div>
		<div class="comment_text"><p>No, I'd return the subset of records that match the partial string.  In fact, to reduce the result set further, you could only return records after there are at least 3 characters, something like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710923">13</a> by Raymond Camden
		posted on 12/27/2008 at 12:12 AM
		</div>
		<div class="comment_text"><p>True, that could work too. It would be cool to mix both in as I mentioned in the blog entry. Have the pagination along with a simple filter on top.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710922">14</a> by Dave DuPlantis
		posted on 12/29/2008 at 11:50 PM
		</div>
		<div class="comment_text"><p>That's funny ... when I first saw the form in Ray's example, before I saw the details, that's what I thought it was going to do, let you page through results that matched what you typed.</p><p>Either solution separately is good; combined, it would be better, for sure, and you don't need 3000+ records to make it worthwhile. Once you get more than one or two "pages" in a select box (as long as it's not the IE select box that wants as much of the screen as it can get), it's  starts to be more "hunt" than "select", and anything we can provide to make it more of a "select" box is good.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710920">15</a> by Andy Sandefer
		posted on 1/2/2009 at 6:45 PM
		</div>
		<div class="comment_text"><p>@Ray<br>This is a smart use of the cfwindow.  I'm building an application right now where the user has to select an item number (there could be quite a few inventory items in the db) and I'm going to use the cfwindow + function combination like you've done.  I think my lookup page will probably sport a cfgrid with some filtering action but same concept with a different display.  Thanks for the post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710924">16</a> by ks
		posted on 12/2/2011 at 10:59 PM
		</div>
		<div class="comment_text"><p>This is exactly what I was needed to do.  Thanks Ray!</p></div>
	</div>
</div>
		