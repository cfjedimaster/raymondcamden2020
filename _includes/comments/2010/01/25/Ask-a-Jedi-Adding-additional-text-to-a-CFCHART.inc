
<div class="comment" id="c_1713721468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721468">1</a> by Ben Nadel
		posted on 1/26/2010 at 9:33 AM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>That's pretty slick; I never thought of using charts as images with the image functions. That could be *super* handy!</p><p>Also, I see you used mychart.width / height instead of imageGetWidth() and imageGetHeight().... welcome to the dark side of undocumented features :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721482">2</a> by Raymond Camden
		posted on 1/26/2010 at 10:25 PM
		</div>
		<div class="comment_text"><p>Hah, I'll be anal and say it is a ColdFusion Image Variable, and therefore it is documented behavior. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721484">3</a> by Ben Nadel
		posted on 1/26/2010 at 10:29 PM
		</div>
		<div class="comment_text"><p>Hey, I'm with you :) ... though, I have to admit that STRING.replaceAll() still makes me feel nervous.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721487">4</a> by Raymond Camden
		posted on 1/26/2010 at 10:34 PM
		</div>
		<div class="comment_text"><p>To be anal, I just checked the CF Dev Guide, and it isn't listed in the variable types, but the section on images does talk about it ... although vaguely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721489">5</a> by Ben Nadel
		posted on 1/26/2010 at 10:39 PM
		</div>
		<div class="comment_text"><p>With something like an image, where it's not so "typeless", I think it makes sense. But while most things in CF are strings, I guess you can't always depend on a simple value being a string underneath.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721488">6</a> by Ben Nadel
		posted on 1/28/2010 at 6:09 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I am fooling around with images and did a CFDump with an image and I see that it has the width / height properties right there (in the CFDump). That's good enough documentation for me ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721483">7</a> by Lina Haddad
		posted on 8/23/2011 at 10:23 PM
		</div>
		<div class="comment_text"><p>does any body know how to make the title attribute for cfchart as text/html , which means to accept &lt;img &gt; or styling ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721486">8</a> by Raymond Camden
		posted on 8/23/2011 at 10:25 PM
		</div>
		<div class="comment_text"><p>Why not just skip the title and put your own html above cfchart?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721497">9</a> by Lina Haddad
		posted on 8/24/2011 at 12:24 AM
		</div>
		<div class="comment_text"><p>i have multiple charts on one page, and  i need to show excel icon next to each title , i don't like to add even addtional frame to the chart if i dont have to .<br>thanks a lot for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721493">10</a> by Raymond Camden
		posted on 8/24/2011 at 12:27 AM
		</div>
		<div class="comment_text"><p>I think you are out of luck then. You can certainly _try_ including HTML in the title (did you try?), but it will probably strip it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721494">11</a> by Lina Haddad
		posted on 8/24/2011 at 12:40 AM
		</div>
		<div class="comment_text"><p>well ,i tried but it doesn't recognize the html .so let's say ,if i have &lt;h3&gt; it will leave it as is.thanks again</p></div>
	</div>
</div>
		