
<div class="comment" id="c_1714083688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083688">1</a> by Brad Wood
		posted on 8/5/2014 at 2:04 AM
		</div>
		<div class="comment_text"><p>Pretty interesting.  I see the CF code is about 30 lines longer due to a mock() method.  I'm curious how Node covered that functionality.  (Disclaimer: I haven't actually tried to read and understand all the code yet :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083709">2</a> by Adam Cameron
		posted on 8/5/2014 at 2:06 AM
		</div>
		<div class="comment_text"><p>Not a tag in sight. Brilliant.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083710">3</a> by Raymond Camden
		posted on 8/5/2014 at 2:21 AM
		</div>
		<div class="comment_text"><p>@Brad: Keep in mind, my Node.js skills are still a bit fresh. What you see in mock() in the CFc version is present in my Node apps app.js file *and* dataUtills. The app.js handles parsing the query string and figuring what you want, then dataUtils.js creates the real fake data. (Um, you get the idea.) Thinking about this now, I would have *also* abstracted the 'parse the query string' stuff out so app.js was simpler. From what I know in my limited Node.js experience, your App.js (core interface for the app) should be as simple as possible - setting up services and routing for example, with almost all of the logic separated out.</p><p>Again - take that with a grain of salt.</p><p>@Adam: Thank you. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083714">4</a> by Jim Priest
		posted on 8/5/2014 at 3:26 AM
		</div>
		<div class="comment_text"><p>Didn't you mean...</p><p>outraged comments in 2...1...0...??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083713">5</a> by Raymond Camden
		posted on 8/5/2014 at 4:20 AM
		</div>
		<div class="comment_text"><p>@Jim: You win. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083691">6</a> by Adrian Lynch
		posted on 8/5/2014 at 12:22 PM
		</div>
		<div class="comment_text"><p>If you remove:</p><p>cfheader(name="Content-Type", value="application/json");</p><p>Does it still give you the right content type?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083690">7</a> by Raymond Camden
		posted on 8/5/2014 at 2:28 PM
		</div>
		<div class="comment_text"><p>@AL: No, which is odd. I thought we fixed that back in 10.</p></div>
	</div>
</div>
		