
<div class="comment" id="c_1713665383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665383">1</a> by Chad G.
		posted on 5/18/2007 at 6:51 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>In the CF Admin it says:<br>Specify the relative path to a template to execute when ColdFusion encounters errors while processing a request.</p><p>Relative path to what?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665393">2</a> by Raymond Camden
		posted on 5/18/2007 at 7:30 PM
		</div>
		<div class="comment_text"><p>Web root.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665391">3</a> by Chad G.
		posted on 5/18/2007 at 7:35 PM
		</div>
		<div class="comment_text"><p>I should have been more specific.</p><p>Web root of the CFAdmin?  Each web root in IIS?</p><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665397">4</a> by Bash
		posted on 5/18/2007 at 8:06 PM
		</div>
		<div class="comment_text"><p>It is relative to the default web site's root. If you have multiple web roots/sites and need a different page for each site you will have to create a default error page and use some redirection/includes to display the appropriate one.  There are a couple examples out there I just can't remember where they are at the moment, but Gogle search will probably pull them up.</p><p>We have individual servers for our intranet and extranet (obviously for access reasons), but we have two sites on each box. We install CF to the default site and have the actual intranet/extranet as its own site. That way we can limit access to the CFIDE,admin, etc. and just copy over any script files we need for the actual site.</p><p>Anyway, because of this we have multiple web roots. What I did was create a mapping in the CF admin then I use that in my default error templates paths.</p><p>So, if you have multiple site roots just create a cf mapping to a folder that will hold your error page(s) and if necessary use some url path detection to pull in the desired page.</p><p>Hope all of that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665396">5</a> by DK
		posted on 5/18/2007 at 8:09 PM
		</div>
		<div class="comment_text"><p>Another good one if you are using cf7 is to take the time to read charlie areharts article on sandbox security. At the very least disabling CFExecute and CFRegistry (if you are not making use of them), it takes about 30 seconds, and makes security auditors sleep better at night :)</p><p>p.s. earlier versions of CF(5 and older) disabled the administrator if you disabled CFRegistry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665394">6</a> by Dan Sorensen
		posted on 5/18/2007 at 8:21 PM
		</div>
		<div class="comment_text"><p>I assume that it's ok to have my site wide error handler email me the necessary info (since that's done on the server side), while I just display a simple error to the end user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665395">7</a> by Ryan
		posted on 5/18/2007 at 9:05 PM
		</div>
		<div class="comment_text"><p>What are your thoughts on emailing yourself a dump of the exception struct in email, which is unsecured, while showing the user a friendly message?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665382">8</a> by Raymond Camden
		posted on 5/18/2007 at 10:29 PM
		</div>
		<div class="comment_text"><p>I'd have no problem emailing the error. I wouldn't email credit card info. :)</p><p>Dan: Thats what I do. Well no, that isn't. I use cferror/onError. That to me is more specific to my application. I recommend the Site Wide Error thing as its better than nothing and covers your whole box.</p><p>Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665381">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665381">9</a> by Aaron Longnion
		posted on 5/18/2007 at 10:43 PM
		</div>
		<div class="comment_text"><p>thanks for the reminder, Ray.</p><p>here's my errorHandler.cfm, what do you think?<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfzen.instantspot.com%2Fblog%2Findex.cfm%2F2007%2F5%2F4%2Fheres-my-errorHandlercfm-what-do-you-think%3AUcTCs5eZ07Nsh-M5uppWksKevps&amp;cuid=3321886" rel="nofollow noopener" title="http://cfzen.instantspot.com/blog/index.cfm/2007/5/4/heres-my-errorHandlercfm-what-do-you-think">http://cfzen.instantspot.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665445">10</a> by Raymond Camden
		posted on 5/18/2007 at 11:10 PM
		</div>
		<div class="comment_text"><p>I just took a quick glance but seems ok to me. I need to standardize my own emails sometime. Perhaps in a cfe snippet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665441">11</a> by david
		posted on 5/20/2007 at 9:34 AM
		</div>
		<div class="comment_text"><p>funny, right after i read this I tab over to cf-talk on <a href="http://disq.us/url?url=http%3A%2F%2Fhouseoffusion.com%3AGzInaSLkZgTPzBbhOTJLJNiQpr0&amp;cuid=3321886" rel="nofollow noopener" title="houseoffusion.com">houseoffusion.com</a> and I got this error:</p><p>(image link)<br><a href="http://disq.us/url?url=http%3A%2F%2Fkamaimedia.com%2Ffunnystuff%2Fhof_error_screenshot.png%3AMPTZm4ADUwlSPwh8BZh5_JkFLPk&amp;cuid=3321886" rel="nofollow noopener" title="http://kamaimedia.com/funnystuff/hof_error_screenshot.png">http://kamaimedia.com/funny...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665442">12</a> by Joshua Curtiss
		posted on 5/22/2007 at 9:42 PM
		</div>
		<div class="comment_text"><p>Ray, thanks for the reminder. I have FINALLY implemented a site-wide error handler for my intranet at work.</p><p>I encountered some &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fblog.nazin.com%2Findex.php%2Fsite-wide-error-handler-config-files%2F%3Az-JRUUen9b7I2OCyoUF1mIqcusk&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.nazin.com/index.php/site-wide-error-handler-config-files/">http://blog.nazin.com/index...</a>"&gt;interesting issues&lt;/a&gt; with config file handling, due to the special behavior of site-wide error handlers. Got it taken care of though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665444">13</a> by Michael Dinowitz
		posted on 5/25/2007 at 10:58 AM
		</div>
		<div class="comment_text"><p>An error in a sitewide error handler will cause the original error to show as if the sitewide error handler did not exist (as seen from the HoF example above)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665443">14</a> by Joshua Curtiss
		posted on 5/25/2007 at 5:30 PM
		</div>
		<div class="comment_text"><p>Yeah, that can be a handy way to "abort" your error handler under certain situations, like I described in my blog post, i.e. if it can detect that you are on a development box.</p><p>Just last night I got an email from my error handler for a page that used cfabort... I haven't looked into it yet but... will cfabort trigger the site-wide error handler???? If so, that is bad... I use cfabort from time to time, putting some logic at the top of a page and abort if certain conditions aren't met....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665446">15</a> by Raymond Camden
		posted on 5/26/2007 at 7:07 AM
		</div>
		<div class="comment_text"><p>Yep, I've seen that before. If you look at the exception type though, you will notice a specific string for cfabort. You can look for - and ignore - that error.</p></div>
	</div>
</div>
		