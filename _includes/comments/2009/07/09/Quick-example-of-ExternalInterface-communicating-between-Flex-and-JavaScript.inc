
<div class="comment" id="c_1713716677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716677">1</a> by todd sharp
		posted on 7/9/2009 at 9:34 PM
		</div>
		<div class="comment_text"><p>I use ExternalInterface to call an anonymous JS function in my SlideSix viewer to get the domain name via JS so I know the remote site that is embedding the presentation.  Very handy stuff when used properly.</p><p>It's also common to use EI with 'invisible' Flash/Flex SWF uploaders - the SWF handles the upload and exposes the internal functions to JS.</p><p>One more thing - the YouTube chromeless player uses ExternalInterface to let you play/pause etc via JavaScript.</p><p>So bottom line, cool stuff and tons of use cases...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716678">2</a> by Dan Vega
		posted on 7/9/2009 at 9:40 PM
		</div>
		<div class="comment_text"><p>I am using this in my CFMU project and it really rocks. I wanted to allow people the ability to call a JavaScript method when the upload was completed and also to be able to a pass in the file name. I have a quick write up on it <a href="http://disq.us/url?url=http%3A%2F%2Fwww.danvega.org%2Fblog%2Findex.cfm%2F2009%2F4%2F14%2FCFMU-on-complete-attribute%3Az8og16lnsIi0BnF5boyHvV79k8w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.danvega.org/blog/index.cfm/2009/4/14/CFMU-on-complete-attribute">http://www.danvega.org/blog...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716680">3</a> by Gareth Arch
		posted on 7/9/2009 at 9:47 PM
		</div>
		<div class="comment_text"><p>At my current job, we're using it to pass values in to the Flex application (rather than hard coding them into the flashVars).  It allows us to embed the swf file within the current HTML structure, and still pass values between the HTML page and the Flex content, until we move all of the site to Flex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716682">4</a> by Gareth Arch
		posted on 7/9/2009 at 9:49 PM
		</div>
		<div class="comment_text"><p>Something else to check out with the ExternalInterface call.<br><a href="http://disq.us/url?url=http%3A%2F%2Fdougmccune.com%2Fblog%2F2007%2F05%2F15%2Fmulti-line-strings-in-actionscript-3%2F%23comment-3858%3AbfmRUK7PIezfYwqUGTUy5uLmid8&amp;cuid=3321886" rel="nofollow noopener" title="http://dougmccune.com/blog/2007/05/15/multi-line-strings-in-actionscript-3/#comment-3858">http://dougmccune.com/blog/...</a><br>Allows you to inject a js file into the page and call methods in it.  This way you don't have to hard code anything in the actual HTML wrapper, but rather just put it in your JS library.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716686">5</a> by Raymond Camden
		posted on 7/9/2009 at 10:25 PM
		</div>
		<div class="comment_text"><p>I've got to admit. I'm shocked. I didn't think anyone was using it. Thanks for the examples guys!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716685">6</a> by Campbell Anderson
		posted on 7/10/2009 at 12:25 AM
		</div>
		<div class="comment_text"><p>And heres a class that uses metadata to externalise methods in a class. Just a handy Util.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.xsive.co.nz%2Farchives%2F268%3AcrOtD6PKkrmx53tlIeHoHTCfxxk&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.xsive.co.nz/archives/268">http://blog.xsive.co.nz/arc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716684">7</a> by TJ Downes
		posted on 7/10/2009 at 1:06 AM
		</div>
		<div class="comment_text"><p>I believe the Flex?AJAX Bridge is also based on ExternalInterface, if I recall correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716688">8</a> by jason olmsted
		posted on 7/10/2009 at 6:34 PM
		</div>
		<div class="comment_text"><p>I've used ExternalInterface for quite a few projects lately ... usually for Actionscript only gui elements where I forgo the Flex framework (it's too heavy when all you want to make is a navigational menu - you can create a swf that embeds a font, reads an external xml doc, renders the info and communicates with the browser for less than 12kb).</p><p>One of the niftier aspects of communicating with external javascript is that you can resize and move your flash content.  In a simpler instance, with wmode=transparent, you can create drop down menus with flash.</p></div>
	</div>
</div>
		