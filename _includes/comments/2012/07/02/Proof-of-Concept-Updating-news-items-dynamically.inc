
<div class="comment" id="c_1713742096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742096">1</a> by Dave White
		posted on 7/2/2012 at 7:45 PM
		</div>
		<div class="comment_text"><p>Brilliant. There's a lot of apps out there can could use this and then make viewing streamed data a lot less annoying (for the reasons you cited).<br>If it could control multiple streams and was available as a plugin, then that would be really useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742089">2</a> by Raymond Camden
		posted on 7/2/2012 at 7:51 PM
		</div>
		<div class="comment_text"><p>A plugin would be cool. I could imagine something like</p><p>$("#stream").streamify()</p><p>to 'enable it', and then</p><p>$("#stream").streamify({add:arrayofcraphere});</p><p>And the plugin would handle knowing if it can show the crap or has to wait for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742087">3</a> by Dave White
		posted on 7/2/2012 at 7:58 PM
		</div>
		<div class="comment_text"><p>Agreed, but even better would be if you could just include the plugin and then do.</p><p>&lt;div id="streamify_1" class="streamify"&gt;&lt;/div&gt;</p><p>&lt;div id="streamify_2" class="streamify"&gt;&lt;/div&gt;</p><p>&lt;div id="streamify_3" class="streamify"&gt;&lt;/div&gt;<br>...<br>...<br>etc</p><p>Streamify is a great name for it, appeals to my english sense of humour.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742098">4</a> by Paul Sturm
		posted on 7/2/2012 at 10:10 PM
		</div>
		<div class="comment_text"><p>I've not seen handlebars before.  That along with this is something new to toy with.  BTW, your handlebars link is broken: <a href="http://disq.us/url?url=http%3A%2F%2Fhandlebarsjs.com%2F%3A3BuUgn5mrYfut7d8ya3uMxPK79w&amp;cuid=3321886" rel="nofollow noopener" title="http://handlebarsjs.com/">http://handlebarsjs.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742110">5</a> by Raymond Camden
		posted on 7/2/2012 at 10:13 PM
		</div>
		<div class="comment_text"><p>Paul, check out my article here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F4%2F19%2FDemo-of-Handlebars-and-why-you-should-consider-a-templating-engine%3Av6wu44q4bKFHCKupdV-vXWXJxsQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/4/19/Demo-of-Handlebars-and-why-you-should-consider-a-templating-engine">http://www.raymondcamden.co...</a></p><p>Fixing the link now - thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742088">6</a> by Jens Roland
		posted on 7/4/2012 at 11:04 AM
		</div>
		<div class="comment_text"><p>Your mouseover/mouseout events are re-firing on every node in the #stream subtree (which will usually work but it's not really your intention). You should switch to mouseenter/mouseleave instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742093">7</a> by Jens Roland
		posted on 7/4/2012 at 12:40 PM
		</div>
		<div class="comment_text"><p>I thought about this a little more, and put together an example of what I call 'counterscrolling'. When the browser is scrolled, instead of pausing the prepend, simply prepend and scroll the window in the opposite direction so the viewport stays on the same part of the stream. If the viewport is at the top of the stream, use scrollDown like in your example.</p><p>I've created a Fiddle to show it in action: <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FfFsaG%2F2%2F%3A_zYbD6QRCPb3JXjSkKCvgKybUbQ&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/fFsaG/2/">http://jsfiddle.net/fFsaG/2/</a></p><p>It's a slightly different user experience, but it should really solve your problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742097">8</a> by Jens Roland
		posted on 7/4/2012 at 12:51 PM
		</div>
		<div class="comment_text"><p>Updated fiddle: <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FfFsaG%2F5%2F%3Ad6M4QY2JB8BS3mbGB_Bu0v1PvGU&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/fFsaG/5/">http://jsfiddle.net/fFsaG/5/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742105">9</a> by Jens Roland
		posted on 7/4/2012 at 12:53 PM
		</div>
		<div class="comment_text"><p>Damn it - updated again: <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FfFsaG%2F6%2F%3Az2EEQWBzjn1Mp3A-bHMlRR5LGdw&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/fFsaG/6/">http://jsfiddle.net/fFsaG/6/</a> (sorry, counldn't edit my comments)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742109">10</a> by Raymond Camden
		posted on 7/4/2012 at 5:27 PM
		</div>
		<div class="comment_text"><p>Jens - thanks for all of this, especially the mouseenter/leave tips. I tried that and see how it works better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742103">11</a> by Chris Pilie
		posted on 2/20/2013 at 10:59 PM
		</div>
		<div class="comment_text"><p>Ray, How would you propose connecting to a cfc remotely within this same example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742101">12</a> by Raymond Camden
		posted on 2/21/2013 at 12:04 AM
		</div>
		<div class="comment_text"><p>You would just change my random generator to one using Ajax. I assume you know how to do that and how to call CFCs remotely?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742091">13</a> by Chris Pilie
		posted on 2/21/2013 at 12:25 AM
		</div>
		<div class="comment_text"><p>I have done it it with autocompletes. It is just a matter of ironing down the jQuery syntax that I am still "green" on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742092">14</a> by Raymond Camden
		posted on 2/21/2013 at 12:28 AM
		</div>
		<div class="comment_text"><p>Ah, then you want to look at the API docs for jQuery for get.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2FjQuery.get%2F%3A-Z2TII57PL5M8YosppOH1QlvK2o&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/jQuery.get/">http://api.jquery.com/jQuer...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742090">15</a> by Chris Pilie
		posted on 2/21/2013 at 12:31 AM
		</div>
		<div class="comment_text"><p>Thanks Ray... This should get me going in the right direction.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742108">16</a> by Haz
		posted on 8/22/2014 at 5:08 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>Thanks for sharing the process of thoughts about your concept. I am also annoyed when the Tweetdeck moves items down for new items and my click most of the times gets something I did not intend to click on.<br>However, I have a question about a concept I working on myself similar to yours but with an added twist :)</p><p>I get twitter news save them to a db and display them on a page with a set interval to update the page with news as they come available.<br>However, I also want to allow the user to scroll down the page and get older news. For that I set up a script to check $(window).scroll() and when at the bottom of the page and there are news left in the db, it pulls it and appends it to the page.</p><p>Now the tough piece that I am seeking an advice about. I want to put those two together plus your piece to stop the news from being updated if a mouse is over a item.</p><p>However, I am facing an unwanted effect. If a user scrolls half-way through the page the scroll event doesn't fire which is by design. However, when the updateNews() function that pulls the data on intervals brings in new data from the db, the scroll event detects something and fires. This behavior first makes the news scroll from user view, as well as, loading data the user did not ask for. <br>Added to that is the fact that the page position is sometimes resetting to the top.</p><p>Can you please give me some hints or ideas on how to tackle this?! I would like to also ask if you are okay if I adapt your code to pause the news stream if a user is hovering over it?!</p><p>Thank you,</p><p>Haz</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742099">17</a> by Raymond Camden
		posted on 8/23/2014 at 12:39 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get you. It sounds like you maybe want to stop running updateNews() if scrolled down?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742107">18</a> by Haz
		posted on 8/23/2014 at 1:31 AM
		</div>
		<div class="comment_text"><p>Thanks for the tip. It is actually helpful point to start with :).<br>Now I am done with the double loading but still have in the back of my mind the way things are done in TweetDeck.</p><p>I am working on making my demo view-able and will send you the link to see what I am talking about.</p><p>Thanks for this wonderful site and thoughts sharing spirit!</p><p>Regards,</p><p>Haz</p></div>
	</div>
</div>
		