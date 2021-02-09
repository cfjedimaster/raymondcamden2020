
<div class="comment" id="c_1713673907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673907">1</a> by Tom K
		posted on 11/2/2007 at 5:52 PM
		</div>
		<div class="comment_text"><p>Oh for CF8 &amp; CFFEED :)</p><p>In CF7 I built an aggregator based on rss.cfc which uses a scheduled task (checks the feeds once an hour) to write the entries to a static page.</p><p>Works though :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673922">2</a> by Phillip Senn
		posted on 11/2/2007 at 6:21 PM
		</div>
		<div class="comment_text"><p>Ooooh!  New look!  Love what you've done with the place.</p><p>If cacheMinutes were application.cacheMinutes, then it could be set to 0 by an admin program.<br>This would force a refresh the next time anyone visited the page.<br>It would then need to be reset back to 60.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673925">3</a> by Jared
		posted on 11/2/2007 at 6:25 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for the great example. I am doing something similar, but I write the feed to a local xml file. Then I read that locally for the next hour.</p><p>Do you think there is any speed difference between reading from a local file, or an application struct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673924">4</a> by Raymond Camden
		posted on 11/2/2007 at 6:30 PM
		</div>
		<div class="comment_text"><p>@PS: My problem with that though is that it would need two steps to clear the cache. First it needs to get set to 0, then you need to rerun the CFM above to reload. I'd rather have a process by which I remove items from the cache using a simple structDelete. No need to change the timeout then. TO me - that is a static example.</p><p>@Jared - I would imagine the file system is slower than RAM access. Not significant probably, but I'd defer to using memory storage here instead of file storage. Of course, if your server restarts you loose the cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673923">5</a> by Phillip Senn
		posted on 11/2/2007 at 6:41 PM
		</div>
		<div class="comment_text"><p>Oh, I see.<br>If your admin program does a<br>&lt;cfset structDelete(application,"rsscache")&gt;<br>Then that clears the cache and away you go.</p><p>Very good.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673926">6</a> by Raymond Camden
		posted on 11/2/2007 at 6:46 PM
		</div>
		<div class="comment_text"><p>@PS - If you want to get _truly_ sophisticated, you could use a application.cache struct to hold all your caches, and build a 'service' to make it easier to clear crap:</p><p>cfset app.cache.clear("rss1")</p><p>for example. But I'm going to stop there. This post is on SIMPLE stuff. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673927">7</a> by Sam Farmer
		posted on 11/2/2007 at 8:33 PM
		</div>
		<div class="comment_text"><p>Nice.  I do something similar but write the feed content to a file.  This way no user is impacted in waiting for the feed to process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673929">8</a> by Andy
		posted on 5/14/2011 at 12:37 AM
		</div>
		<div class="comment_text"><p>I'm a bit of a perpetual noob, not to mention a tad late on this post, but if you could show me an example on how to loop through the application.rsscache to cfoutput the Content field found in the dump, that would make my day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673930">9</a> by Raymond Camden
		posted on 5/14/2011 at 1:40 AM
		</div>
		<div class="comment_text"><p>It's just a query, so cfoutput query="" would work fine on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673912">10</a> by Andy
		posted on 5/14/2011 at 2:00 AM
		</div>
		<div class="comment_text"><p>Thanks for your response. So a cfoutput of the query "entries" (below) is what is cached? <br>&lt;cfoutput QUERY="entries"&gt;<br>#Content#<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673913">11</a> by Raymond Camden
		posted on 5/14/2011 at 3:08 AM
		</div>
		<div class="comment_text"><p>No, remember the query was stored as application.rsscache.entries. It's a complex name, but it's just a query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673914">12</a> by Paul
		posted on 1/13/2013 at 12:48 AM
		</div>
		<div class="comment_text"><p>I too am looking for a feed-caching solution, and this one looks pretty simple. However, I'm trying to display the feeds as unordered lists, and I'm having a bit of a problem parsing your script for that.  Any tips?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673915">13</a> by Raymond Camden
		posted on 1/13/2013 at 10:45 PM
		</div>
		<div class="comment_text"><p>The result of cffeed is a query. You would output it as a UL just like you would any other query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673916">14</a> by Paul
		posted on 1/26/2013 at 12:36 AM
		</div>
		<div class="comment_text"><p>Thanks Ray.  I actually got it working a few hours after I posted this, but was too embarrassed by how simple it was to get working.</p><p>This leads me to the next question of why it works locally on my CF10/Linux machine at home, but not on my shared hosting account.  I'm guessing something is either disallowed or not set on the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673920">15</a> by Raymond Camden
		posted on 1/26/2013 at 12:41 AM
		</div>
		<div class="comment_text"><p>You would need to share _how_ it isn't working in production.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673917">16</a> by Paul
		posted on 1/26/2013 at 2:28 AM
		</div>
		<div class="comment_text"><p>Indeed, and I wish I could.  The page just stops rendering at the spot where the code is, and wrapping it with a try/catch block results in no error message of any kind.</p><p>The account just got set up (I recoded my old PHP site in CF) so once I get everything else uploaded, I'll probably email the host's tech support to see if I'm using any disallowed tags.  In the meantime, I'll fiddle with it some more and see if I get lucky.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673918">17</a> by Paul
		posted on 1/26/2013 at 4:05 AM
		</div>
		<div class="comment_text"><p>Figgered it out!  On my local machine, I was using a cfloop with startrow, endrow, and query, and a cfoutput inside that to build my list.  I changed it to just a cfloop with query and maxrows, and bingo, it works on both.</p><p>Sometimes you just have to talk to a Jedi to work through these problems!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673921">18</a> by Raymond Camden
		posted on 1/26/2013 at 8:10 AM
		</div>
		<div class="comment_text"><p>Glad you got it!</p></div>
	</div>
</div>
		