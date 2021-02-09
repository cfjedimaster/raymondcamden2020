
<div class="comment" id="c_1713669215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669215">1</a> by John Farrar
		posted on 7/26/2007 at 7:50 PM
		</div>
		<div class="comment_text"><p>This is the biggest thing that I have wanted in debugging from the start! When you guys get this in we will make this a MAJOR meeting point in the next Adobe User Group meeting in our area. KUDOS! It's so cool that I have to ask how long till we can get the complex variable structure in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669197">2</a> by Raymond Camden
		posted on 7/26/2007 at 7:59 PM
		</div>
		<div class="comment_text"><p>It will be trivial. The plan is to keep it still string based for now. So an array would be:</p><p>Array: ["1","2","etc"]</p><p>Struct: [name="1",age="29"]</p><p>We _can_ get a bit fancy in our display it a bit closer to cfdump style. We shall see.</p><p>Right now I just need folks (like you) to tell me if simple stuff is even working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669216">3</a> by Adam Tuttle
		posted on 7/26/2007 at 9:12 PM
		</div>
		<div class="comment_text"><p>While that's certainly a nice feature, I don't see myself using it much because I've become accustomed to just having most of the scopes (usually application, session, request, cgi) added to the debug output, and generally I keep this code in my OnRequestEnd.cfm:</p><p>&lt;cfdump var="#variables#" label="Variables scope" expand="false"&gt;</p><p>You know developers... we're lazy. Why bother (essentially) "adding a watch" for a variable (or more often: the 12 I'm interested in,) when I can just dump them all and scan through for the one(s) I want?</p><p>Certainly no disrespect intended; just my thoughts. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669217">4</a> by John Farrar
		posted on 7/26/2007 at 9:29 PM
		</div>
		<div class="comment_text"><p>Ray... that sounds like a good margin for data visibility. I would like to request that it be done in JSON with indentation if possible if you go in that direction.</p><p>Adam:<br>1. No one will force anyone else to use this. :)<br>2. Are you still using OnRequestEnd.cfm ??? Give Application.cfc a try! :) There are different ways to make life easy. If this way doesn't work for you then certainly don't use it. Some people build very rich applications and need to have more responsive debugging information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669221">5</a> by Adam Tuttle
		posted on 7/26/2007 at 9:32 PM
		</div>
		<div class="comment_text"><p>@John- I do indeed use Application.cfc whenever possible, but these days I find myself doing a lot more legacy code support than new development; and as the adage goes, the squeaky wheel gets the grease. I had considered leaving the ".cfm" off to make it ambiguous. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669220">6</a> by Raymond Camden
		posted on 7/26/2007 at 9:56 PM
		</div>
		<div class="comment_text"><p>@Adam - gotcha. ColdFire isn't for everyone. :)</p><p>@John - I'm not quite sure I get you. I _am_ using JSON behind the scenes. JSON doesn't have anything to do with how the data is _formatted_ though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669219">7</a> by John Farrar
		posted on 7/26/2007 at 10:20 PM
		</div>
		<div class="comment_text"><p>Well... when I pull a query back, and desire to know what was where that is my quest. Perhaps JSON wouldn't work... but not sure flat text is an optimal solution either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669225">8</a> by Raymond Camden
		posted on 7/26/2007 at 10:24 PM
		</div>
		<div class="comment_text"><p>I still don't think I get you. What do you mean by "where that is" - this Variable support simply tells you the last value. So the values are static.</p></div>
	</div>
</div>
		