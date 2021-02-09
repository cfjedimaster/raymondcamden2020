
<div class="comment" id="c_1714083105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083105">1</a> by Paul Hastings
		posted on 6/18/2014 at 8:22 AM
		</div>
		<div class="comment_text"><p>uh, you store the whole state's info in each user's w/s rather than just the nearby ones? or on some server?</p><p>and you're not restricting user's location queries to someplace within your state?</p><p>GLASS DOCTOR<br>1401 N MARKET SHREVEPORT 11144 km away</p><p>and while i admire your adherence to metric standards, maybe miles would work better for folks in LA?</p><p>hold out your hands while i get my rubber mallet ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083099">2</a> by Raymond Camden
		posted on 6/18/2014 at 8:31 AM
		</div>
		<div class="comment_text"><p>"uh, you store the whole state's info in each user's w/s rather than just the nearby ones? or on some server?"</p><p>Yes. I should have explained why. Having it on the client means I can do the distance calculation there. If I keep it on the server I have to setup an application server of some kind. Of course, here I have ColdFusion, but I'm thinking in general, when I can avoid using an application server, I will.</p><p>The "database" is around 670K. About 2 large images.</p><p>"and you're not restricting user's location queries to someplace within your state?"<br>I'm not quite sure I get your point here. If this app were released, and someone in CA decided they REALLY wanted to find the closest location in LA, well, then that is their choice, right? I think you are overthinking it a bit. ;)</p><p>"and while i admire your adherence to metric standards, maybe miles would work better for folks in LA?"<br>I considered that. But I figured if the results were sorted by closest, then it wouldn't really matter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083101">3</a> by Rick Mason
		posted on 6/18/2014 at 9:13 AM
		</div>
		<div class="comment_text"><p>Very useful civic app.  But something is wrong in the distance calculation.  It shows that in Michigan I am 71 km away from some of these locations or roughly 44 miles. FYI I'm approximately 1865 km from Lafayette.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083100">4</a> by Raymond Camden
		posted on 6/18/2014 at 9:18 AM
		</div>
		<div class="comment_text"><p>Which location was it? It is possible the geocoding failed for some. When I did the lookup, I used *just* the address. I think I should have appended "Louisiana" to make it more precise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083104">5</a> by Paul Hastings
		posted on 6/18/2014 at 10:03 AM
		</div>
		<div class="comment_text"><p>storing extraneous/unused data is kind of wasteful--doesn't take much to fill up a mobile device (the cycling playlist on my phone is in constant battle w/apps &amp; updates). maybe its just my age, but always keeping an eye on storage on those infernal devices.</p><p>and still think you should filter based on location--you can make the app more useful by simple bounding box filter (box of coords around LA &amp; only using user locations within that box &amp; reject somebody from say bangkok). edge cases won't matter much as this is just an LA-only service, really can't image folks in alaska would want to find some place to get their LA sticker updated.</p><p>and since i've already taken the time, probably a map showing those garage locations would be useful as well.</p><p>you know if you had this for all 50 states, probably some beer/beard grooming money to be made.</p><p>i make spatial apps for a living, so no, not over thinking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083102">6</a> by Raymond Camden
		posted on 6/18/2014 at 4:32 PM
		</div>
		<div class="comment_text"><p>"storing extraneous/unused data is kind of wasteful" - again - less then 700k here. :) But ok - we can agree to disagree here.</p><p>And I still don't see why I would bother blocking someone from outside LA. If they want to use it... they use it. Heck, they may be on the border, outside, driving home, and want to check which one is closest.</p><p>"you know if you had this for all 50 states, probably some beer/beard grooming money to be made."</p><p>Sure - if I had that data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083106">7</a> by Raymond Camden
		posted on 6/18/2014 at 4:33 PM
		</div>
		<div class="comment_text"><p>Forgot to say - yeah - I could add a map easily enough. Even driving directions. Once you have the Long/Lat and your own Long/Lat, Google has services for that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083103">8</a> by Phillip Senn
		posted on 6/18/2014 at 6:19 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!  I'm learning a lot by closely examining your code.<br>That's very clean, putting the database in a json file and then caching it in localStorage.<br>So far, I've only used localStorage for variables, not objects.<br>I use webSQL for the heavier lifting, but as you know, webSQL is on the way out and IndexDB is on the way in.</p><p>So using localStorage to store an entire "database" is a neat technique.</p><p>You use a bracket syntax, and I wondered about using a dot syntax for localStorage. To my StackOverflow question about whether I can use localStorage.myVariable, someone said "It looks like Mozilla is planning a transition to the standard Storage implementation specified by WHATWG, which relies on the getter/setter methods only:".<br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F20689428%2Flocalstorage-assignment-vs-setitem%3A2Li9xrYLpiiDa94tC9leXeZwFFQ&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/20689428/localstorage-assignment-vs-setitem">http://stackoverflow.com/qu...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F13383880%2Fsquare-bracket-syntax-vs-functions-for-localstorage%3AdmE78t5v7gll-AwHcW0gSfOpUVU&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/13383880/square-bracket-syntax-vs-functions-for-localstorage">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083108">9</a> by Raymond Camden
		posted on 6/18/2014 at 6:31 PM
		</div>
		<div class="comment_text"><p>@PS: I'd caution you that what I did may be stretching the "appropriate" usage of LS a bit much. :)</p><p>I wasn't aware that Moz was going to move away from bracket syntax. I prefer it when getting and setting items and only use the API for when I want to remove everything, as it is quicker. Thanks for warning me!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083107">10</a> by Rick Mason
		posted on 6/18/2014 at 8:24 PM
		</div>
		<div class="comment_text"><p>Ray all the locations mileages were incorrect.  I noticed in revisiting today that all the locations are in duplicate which wasn't the case last night.  Is the program failing to delete the cookie?</p><p>Here are the first three locations:</p><p>GORDONS SERVICE CTR<br>401 W MAIN HOMER 71 km away</p><p>MCKENZIE BROS. GARAGE &amp; TOWING<br>635 WEST MAIN HOMER 71 km away</p><p>LONNIE'S SERVICE CENTER<br>618 WEST MAIN HOMER 71 km away</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083111">11</a> by Raymond Camden
		posted on 6/18/2014 at 8:28 PM
		</div>
		<div class="comment_text"><p>Sorry - whats wrong with the data you shared? I see 3 different businesses on 3 different addresses.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083114">12</a> by Rick Mason
		posted on 6/18/2014 at 8:34 PM
		</div>
		<div class="comment_text"><p>I gave it my location so I'm assuming that it should calculate the distance from where I am located which is outside of East Lansing, Michigan.  I am approximately 1614 km from Homer, Louisiana.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083115">13</a> by Raymond Camden
		posted on 6/18/2014 at 8:35 PM
		</div>
		<div class="comment_text"><p>Oh I'm sorry, the #s are wrong. Ok, something I can check. Chrome lets you fake your location. By any wild chance can you tell me your long/lat?</p></div>
	</div>
</div>
		