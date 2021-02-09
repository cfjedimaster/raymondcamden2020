
<div class="comment" id="c_1713734933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734933">1</a> by Misty
		posted on 9/2/2011 at 12:30 AM
		</div>
		<div class="comment_text"><p>well post way!</p><p>what if we want to check more than 5 fields, user may click submit button two times</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734932">2</a> by Raymond Camden
		posted on 9/2/2011 at 12:31 AM
		</div>
		<div class="comment_text"><p>You could use event handlers for all 5 that call the same func. The func would gather all 5 values and send them to the CFC to do whatever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734930">3</a> by Dennis
		posted on 9/2/2011 at 8:02 AM
		</div>
		<div class="comment_text"><p>I would recommend limiting the ajax request to only be called if the length of the artist name is greater than 2 characters.  In a large list one or two character requests may yield a significant payload which you can control with a TOP n rows, but why bother firing up the query when all you do is fill up the cache with unwanted results while other likely better candidate rows get pushed from cache.  Stop it at the front door.  Most data sets are not comprised of 1 or 2 char records.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734935">4</a> by Raymond Camden
		posted on 9/2/2011 at 4:57 PM
		</div>
		<div class="comment_text"><p>Good call, Dennis. I've done that before, but forgot about it here.</p><p>One day I want to do a Ajax Optimization talk. I did one - kinda - at Scotch on the Rocks in 2010, but I'd like to do it again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734931">5</a> by Doug
		posted on 9/2/2011 at 5:40 PM
		</div>
		<div class="comment_text"><p>So would you recommend using jQuery over the extJS library in ColdFusion?  Is it more elegant?  Smaller?   (Seems like CF will load 5-10 different .js files when doing Ajax)</p><p>I'm tempted keep most of my programming in CF even for the front-end just so that when a new developer comes in later it won't require additional knowledge beyond CF.</p><p>But... then again, who doesn't know jQuery these days?</p><p>By the way, are you in Massachusetts yet?  I swear I saw you in a restaurant the other week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734934">6</a> by Raymond Camden
		posted on 9/2/2011 at 5:46 PM
		</div>
		<div class="comment_text"><p>I recommend using the Ajax framework that works best for you.</p><p>I know that sounds like a cop out - but hear me out.</p><p>When I first started doing Ajax crap, Spry worked -very- well for me. (And I still think Spry deserves credit for how easy it made Ajax.) I was powerful with it. I got stuff done.</p><p>When I tried Ext - I found it awkward. I know it does good stuff. I know it does "Application Layout" better than anyone else. But I just didn't like working with it.</p><p>One day I picked up jQuery, I found it nicer than Spry, and the rest is history.</p><p>When you say the "extjs lib in CF", to me it means, "The Built In Stuff we Give You". That built in stuff comes in two major areas:</p><p>Back End Support<br>Front End "Stuff"</p><p>The back end support is stellar. I will say CF does it better than any other language out there. One CFC being able to be used for business logic in the back end _and_ Ajax apps and Flex apps and mobile apps? That's Awesomesauce.</p><p>The front end stuff though... it's fine for folks new to Ajax. But if you _know_ Ajax then you really aren't the audience for those tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734936">7</a> by Michael Brennan-White
		posted on 9/2/2011 at 8:02 PM
		</div>
		<div class="comment_text"><p>Very helpful for a project update I am planning right now.  One question.  What is the purpose of the code variable in this line:<br>$.post("test.cfc?method=checkArtist&amp;returnFormat=json", {n:value}, function(res,code)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734937">8</a> by Raymond Camden
		posted on 9/2/2011 at 8:03 PM
		</div>
		<div class="comment_text"><p>The result you get from the POST is both the data and the status code. (200, etc.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734939">9</a> by Michael Brennan-White
		posted on 9/2/2011 at 8:11 PM
		</div>
		<div class="comment_text"><p>Now I understand.  Is there a reason I get the word success rather than the code?</p><p>&lt;pre&gt;$.post("Components/deleteme.cfc?method=debtnumCall&amp;returnFormat=json", {qdebtNumber:value, qinDebted:1}, function(res,code)&lt;/pre&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734938">10</a> by Raymond Camden
		posted on 9/2/2011 at 9:37 PM
		</div>
		<div class="comment_text"><p>I'm sorry - the second arg is the _text_ status. Details here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2FjQuery.post%2F%3ABmtTO5omRMZ6fyXX_wcBHEHm7rM&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/jQuery.post/">http://api.jquery.com/jQuer...</a></p></div>
	</div>
</div>
		