
<div class="comment" id="c_1713723245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723245">1</a> by John Farrar
		posted on 4/2/2010 at 6:05 PM
		</div>
		<div class="comment_text"><p>Well let us consider this scenario.</p><p>Page A has custom tag script B as tag and script C via include.</p><p>Script B calls script C as include.</p><p>Results = On page A script c reports it is called as include. But on include call from within script B it will report with this logic that it is not called as an include.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723252">2</a> by John Farrar
		posted on 4/2/2010 at 6:08 PM
		</div>
		<div class="comment_text"><p>P.S.<br>There is also many frameworks that turn the URL (get) and Form (post) variables into a common attribute scope. If someone is using one of those frameworks it will kill this test every time and report it is not happening via include.</p><p>You might use a try catch scenario with the parent tag list. It seems that would let you compare the current script name to the nested tag list. That should be more accurate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723250">3</a> by JC
		posted on 4/2/2010 at 6:13 PM
		</div>
		<div class="comment_text"><p>Thanks, Ray :)</p><p>Maybe StructKeyExists(variables,"thisTag") would be more effective than testing for attributes? but I'm not sure how it works as an include inside a custom tag or another blended situation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723249">4</a> by Steve Bryant
		posted on 4/2/2010 at 6:29 PM
		</div>
		<div class="comment_text"><p>Elliott Sprehn has a really nice function for getting information about the template calling a custom tag.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.elliottsprehn.com%2Fblog%2F2007%2F07%2F17%2Fgetting-the-expected-results-for-getcurrenttemplatepath-in-a-custom-tag%2F%3Anxe5vyHcJQx1nUCfGJk6SWEQigw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.elliottsprehn.com/blog/2007/07/17/getting-the-expected-results-for-getcurrenttemplatepath-in-a-custom-tag/">http://www.elliottsprehn.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723254">5</a> by Tyler Clendenin
		posted on 4/4/2010 at 12:07 AM
		</div>
		<div class="comment_text"><p>One way to differentiate if the attributes scope was created by a custom tag call vs a framework is to also test StructKeyExists(variables, "attributes")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723255">6</a> by Raymond Camden
		posted on 4/4/2010 at 12:17 AM
		</div>
		<div class="comment_text"><p>Slick Tyler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723253">7</a> by Adam Cameron
		posted on 4/4/2010 at 2:41 PM
		</div>
		<div class="comment_text"><p>Hi Ray<br>Re the try/catch tag context thing.  If one's prepared to play slightly outside the square, one can simply instantiate a coldfusion.runtime.CustomException object, rather than actually throwing/catching one.</p><p>Or even just a vanilla java.lang.Exception has the tag context in there too.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723251">8</a> by Raymond Camden
		posted on 4/4/2010 at 6:06 PM
		</div>
		<div class="comment_text"><p>@Adam: That's interesting. Do you have an example you can point to? Or if it is short and sweet you can post it as a comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723256">9</a> by Adam Cameron
		posted on 4/5/2010 at 5:33 PM
		</div>
		<div class="comment_text"><p>&lt;cfset oE = createObject("java", "coldfusion.runtime.CustomException").init("", "", "", "", "")&gt;<br>&lt;cfdump var="#oE#"&gt;</p><p>OR</p><p>&lt;cfset oE = createObject("java","java.lang.Exception").init()&gt;<br>&lt;cfdump var="#oE#"&gt;</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723258">10</a> by Raymond Camden
		posted on 4/5/2010 at 8:01 PM
		</div>
		<div class="comment_text"><p>Thank you for sharing that Adam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723257">11</a> by Jon Hartmann
		posted on 4/6/2010 at 9:52 PM
		</div>
		<div class="comment_text"><p>Couldn't you just use IsDefined("ThisTag") ? Unlike Attributes, ThisTag is specified as being used only in custom tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723261">12</a> by Jon Hartmann
		posted on 4/6/2010 at 9:52 PM
		</div>
		<div class="comment_text"><p>Ah, I see that JC beat me to it.</p></div>
	</div>
</div>
		