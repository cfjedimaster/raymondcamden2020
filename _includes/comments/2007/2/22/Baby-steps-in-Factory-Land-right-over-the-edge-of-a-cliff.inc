
<div class="comment" id="c_1713662535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662535">1</a> by Nathan Dintenfass
		posted on 2/23/2007 at 7:44 AM
		</div>
		<div class="comment_text"><p>At first glance, it seems you are, perhaps, just doing too much in Message, Forum, and Thread as object types.  Sounds like perhaps you need to separate out the data "objects" from what I might call the "managers" (or even, gasp, "services").  Those with deeper skills than I will have more formalized vocabulary, but I have found that when you have circular dependencies like that it's a signal that your underlying decisions about which CFCs do what might need to be revisited.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662534">2</a> by DK
		posted on 2/23/2007 at 8:28 AM
		</div>
		<div class="comment_text"><p>This is somewhat was I was referring to in one of the other posts and a concern I had. Good Luck :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662522">3</a> by Sean Corfield
		posted on 2/23/2007 at 8:33 AM
		</div>
		<div class="comment_text"><p>Two words: ColdSpring &amp; cfcUnit.</p><p>I understand that making Galleon depend on ColdSpring is problematic for distribution purposes but adopting cfcUnit and creating a large suite of unit tests would probably catch errors / bugs before they got onto RIA Forge :)</p><p>Keep up the good posts - we all learn from your documented learning process. Thanx!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662544">4</a> by Rob Gonda
		posted on 2/23/2007 at 10:03 AM
		</div>
		<div class="comment_text"><p>Wow, I also thought I tested the code... I can send you an updated version using setters instead of constructors so it works with circular dependencies. It's really not such a big change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662533">5</a> by Derek P.
		posted on 2/23/2007 at 10:17 AM
		</div>
		<div class="comment_text"><p>Don't be discouraged in the world of OOP! I think that a service layer would be a very intelligent move for this application. Abstracting away any knowledge of the objects to only the service layer is a great way to minimize dependencies because only the service implementation should have knowledge of the bits and pieces involved in the general task you wish to accomplish. This is inevitably one of the best reasons to utilize supporting frameworks such as coldspring, but if you can't, I would definitely recommend trying to implement at leastservice layers into your code to handle tying together your model (much like you would use a controller). Just my humble 2 cents :) Remember, if you ever need a hand, I am always pingable!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662538">6</a> by Rob Gonda
		posted on 2/23/2007 at 10:57 AM
		</div>
		<div class="comment_text"><p>Sent</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662540">7</a> by Raymond Camden
		posted on 2/23/2007 at 7:05 PM
		</div>
		<div class="comment_text"><p>@Nathan: Absolutely. Galleon was an "old school" CFC app for me, soon after I had done BlogCFC. BlogCFC had one giant CFC. Galleon was "better" as I had broken up the CFCs a bit. But it isn't what I do now, which is typically Bean/DAO/Gateway.</p><p>@Sean: Amen. :) I don't want to go the CS route yet. I want to make sure I truly get this. But that is no excuse not to use cfcUnit.</p><p>@Rob - you code did work. I had to modify one thing - and I forget now where it was - but at that point it broke and things just got worse. Totally my fault. :)</p><p>@Derek: Not discouraged at all - despite the title. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662539">8</a> by Peter Bell
		posted on 2/23/2007 at 7:30 PM
		</div>
		<div class="comment_text"><p>Rob is right. Just move some or all of your injection to setter based injection and you'll be fine.</p><p>You could also do "psuedo constructor injection" (basically setter injection using the init() method as one big setter by calling it after creating all of the beans). Doesn't work for use cases where you call methods on dependent objects in the init() of other objects so it would be a hack for today rather than a complete solution.</p><p>Also, if you want to see how to check for circular constructor dependencies, I wrote a very simple recursive function in LightWire that does all the heavy lifting - it's the getDependentObjectList() method in LightWire.cfc at <a href="http://disq.us/url?url=http%3A%2F%2Fsvn.riaforge.org%2Flightwire%3A7MhKBU45m49ni-tFn9XvQ2JCrGU&amp;cuid=3321886" rel="nofollow noopener" title="http://svn.riaforge.org/lightwire">http://svn.riaforge.org/lig...</a>. You'd have to change to tie it into your system, but it's pretty easy to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662541">9</a> by Raymond Camden
		posted on 2/23/2007 at 7:38 PM
		</div>
		<div class="comment_text"><p>@Peter - Turns out I had made a dumb mistake. I mean a dumb mistake besides my original clunky CFCs. ;) Rob fixed me and explained it to me. I would still like to move to a service layer - but I'm going to go with his fix for now mainly to get the app back online. I'll blog what I had done wrong and how Rob had fixed it.</p><p>Like most things - the second you see the fix it becomes obvious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662543">10</a> by Dan
		posted on 2/23/2007 at 7:48 PM
		</div>
		<div class="comment_text"><p>I understand your desire to learn the concept before you dive into ColdSpring. I would give it a shot though, learning ColdSpring actually introduced the concept of object factories to me and made it easier to understand. I figured out how easy yet powerful it was and I have been hooked ever since!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662542">11</a> by Peter Bell
		posted on 2/23/2007 at 8:01 PM
		</div>
		<div class="comment_text"><p>@Ray, Glad I'm not the only one who seems to specialize in dumb mistakes!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662545">12</a> by Ken Dunnington
		posted on 2/23/2007 at 11:36 PM
		</div>
		<div class="comment_text"><p>Ray, if you decide to use cfcUnit on this or any future projects, will you blog your progress? I've been wanting to start using it, but haven't had the time or seen much in the way of examples/tutorials to get me going, and your "learning" posts are great for stuff like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662546">13</a> by Sean Corfield
		posted on 2/25/2007 at 2:41 AM
		</div>
		<div class="comment_text"><p>@Ken, I only just noticed that the cfcUnit website doesn't have the most up-to-date version of the documentation posted. However, if you download the cfcUnit package, it does include the most up-to-date documentation - which has quite a bit of information about why / how to do unit testing as well as quite a few examples.</p><p>If anyone wants to volunteer to help Paul Kenney with the cfcUnit website, I know he'd appreciate it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662547">14</a> by Sean Corfield
		posted on 2/25/2007 at 7:52 AM
		</div>
		<div class="comment_text"><p>I just put the latest cfcUnit docs up on my site:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcorfield.org%2Fcfcunit%2Fdocumentation%2F%3ADSgv4yMX3CoFix1si2lttBblZn8&amp;cuid=3321886" rel="nofollow noopener" title="http://corfield.org/cfcunit/documentation/">http://corfield.org/cfcunit...</a></p></div>
	</div>
</div>
		