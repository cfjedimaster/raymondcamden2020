
<div class="comment" id="c_1713732565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732565">1</a> by Dave DuPlantis
		posted on 5/24/2011 at 8:55 PM
		</div>
		<div class="comment_text"><p>Interesting ... I didn't realize you could persist simple data this way. I have a small mobile app I'm playing with, and this should come in handy.</p><p>One thing about Farmville that I find interesting is the way that it allows you to follow client-server communication. It seems to download the current state of your farm to the client, and then as you queue actions, the app displays what the result of those actions will be on the client side while it sends the actions to the server. (I'm basing this on what happens when you get the out-of-sync error message: some number of actions are "reset", which I'm guessing means that actions before or at that point didn't get to the server or were corrupted somehow.)</p><p>That's obviously beyond the scope of what you're doing here, but that would be something interesting to see in the future. PokeDev Online? (like the Mafia Wars phone apps)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732576">2</a> by Raymond Camden
		posted on 5/24/2011 at 9:00 PM
		</div>
		<div class="comment_text"><p>I've seen the same issue myself (re: the out of sync issue).</p><p>So - many moons ago I built a desktop AIR game that used BlazeDS to mimic a stock market. It was - in my opinion - pretty cool. When player X bought stock in a company, it was broadcast ina chat room. So what happened is that you would see a player invest, look to see why, and then (in many cases) buy some as well.</p><p>I recently saw an article by one of the Adobe evangelists demonstrating LCDS on mobile devices. It just plain "works". I've been thinking though about how I could rebuild that old game for a mobile UI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732579">3</a> by Chris
		posted on 7/28/2011 at 7:51 PM
		</div>
		<div class="comment_text"><p>Very cool. I didn't think it was that simple to persist data that way.</p></div>
	</div>
</div>
		