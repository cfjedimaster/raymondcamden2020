
<div class="comment" id="c_1713746433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746433">1</a> by Brian Thornton
		posted on 5/14/2013 at 6:09 PM
		</div>
		<div class="comment_text"><p>Great post</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746445">2</a> by Dinesh Kanwar
		posted on 5/14/2013 at 6:10 PM
		</div>
		<div class="comment_text"><p>And what about xml http requests? Are they effected by this too or not?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746446">3</a> by Raymond Camden
		posted on 5/14/2013 at 6:11 PM
		</div>
		<div class="comment_text"><p>Dinesh, do you mean via AJAX? It is still a POST request, so yes. Btw, you guys posted quick. Be sure to read my Edit at the end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746444">4</a> by Will Swain
		posted on 5/14/2013 at 6:15 PM
		</div>
		<div class="comment_text"><p>I just figured this issue out yesterday. Was seeing it on a fresh 9.0.2 install. Particularly annoying since it just gives a 500 error and no further details.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746448">5</a> by Dinesh Kanwar
		posted on 5/14/2013 at 6:19 PM
		</div>
		<div class="comment_text"><p>Regarding your edited post, I do not think having form fields with same name is practically viable. Is it?  And I do not  think I need any setting in app.cfc for that. Its forms default behavior to have values in list when you have same name form field. Just like a checkbox or radio. Well, you are probably the first person to know what has changed in adobe and if anything would have gone wrong related to this on my app, I always find only one place to go : Jedimaster's blog. Lucky this time I know in advance. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746449">6</a> by Raymond Camden
		posted on 5/14/2013 at 6:23 PM
		</div>
		<div class="comment_text"><p>Dinesh: "I do not think having form fields with same name is practically viable. Is it?" Actually, they could have some value. Any time you need a set of related fields, for example, maybe kids names. Normally we do something like</p><p>kid1<br>kid2<br>kid3</p><p>etc. But having one field called kid is more convenient,simple.</p><p>"Its forms default behavior to have values in list when you have same name form field."</p><p>No, that's just how CF did it. PHP, for example, gave you an array. I'd rather use an array.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746447">7</a> by Phillip Senn
		posted on 5/14/2013 at 6:45 PM
		</div>
		<div class="comment_text"><p>I saw sameformfieldsasarray mentioned in your latest CFWACK book and thought that I would use it, but on an existing application, you'd have to go through all the source code to see if it affects any pages with type="checkbox".</p><p>Q: Can you use sameformfieldsasarray for a single form?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746454">8</a> by Raymond Camden
		posted on 5/14/2013 at 7:03 PM
		</div>
		<div class="comment_text"><p>As far as I know, no. But - you can get access to the PageServlet and the Form data and do something similar. I know I blogged about it a _long_ time ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746434">9</a> by Michael Schmidt
		posted on 5/14/2013 at 8:12 PM
		</div>
		<div class="comment_text"><p>If my memory serves me correctly, the methods of getting multiple form fields as arrays has actually been "broken" by ColdFusion 10.</p><p>By broken the Automatic new method for converting form fields to array collapses empty elements so if you have a repeated row type that has a consistent form fields for that row if an text input or something is empty it will collapse and ignore it.  The old method of getPageContext().getRequest().getParameterMap() doesn't work any more, and the only way i have been successfully able to get something to work is if i change the enctype on the form to multipart/form-data and use  FORM.getPartsArray()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746432">10</a> by Raymond Camden
		posted on 5/14/2013 at 8:17 PM
		</div>
		<div class="comment_text"><p>Wow, confirmed. It does collapse it. Of course, it does so for lists as well.</p><p>I'm curious what PHP does.</p><p>Michael, thanks for sharing this.</p><p>So my take away is this. If you have N fields and the lack of a field is important (it may not always be!), then you cannot use N fields with the same name. Period.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746435">11</a> by Raymond Camden
		posted on 5/14/2013 at 8:32 PM
		</div>
		<div class="comment_text"><p>I had someone on Twitter test PHP. PHP does it right. Given 3 fields with the same name, and you leave field 2 blank, you will get an array with the second element empty, which is what it was obviously.</p><p>So - someone should file a bug report for this I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746438">12</a> by MikeZ
		posted on 5/15/2013 at 6:44 AM
		</div>
		<div class="comment_text"><p>Nice to see that the resulting error is almost as useless as its counterpart in CF9 (where there seems to be no trace in the logs whatsoever). <br>The lack of a useful log entry made it harder than necessary to track down that parameter in the neo-runtime.xml</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746436">13</a> by Raymond Camden
		posted on 5/15/2013 at 2:27 PM
		</div>
		<div class="comment_text"><p>I believe (stress, believe) the useless error is to help hide the fact that this is trying to prevent a DDOS type attack.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746439">14</a> by Will Swain
		posted on 5/15/2013 at 2:38 PM
		</div>
		<div class="comment_text"><p>Something more verbose, or just anything, in the cf logs files would be nice though. Almost impossible to debug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746437">15</a> by Raymond Camden
		posted on 5/15/2013 at 2:42 PM
		</div>
		<div class="comment_text"><p>Good point about the logs - that could certainly be more verbose. I'd encourage you to file a bug report on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746440">16</a> by Peter Tilbrook
		posted on 5/15/2013 at 3:50 PM
		</div>
		<div class="comment_text"><p>This one crops up now and again. Recently (and no code changes) after a recent patch. Like Will says the error gives nothing at all away. Then I remembered the POST LIMIT and had to explain to SysAdmin how to fix it. Ditto on Will's suggestion for debugging. From memory nothing from the logs gave any indication. Sigh!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746441">17</a> by Aaron Neff
		posted on 5/18/2013 at 10:08 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>CF used to ignore this.sameformfieldsasarray="true", if setEncoding("form", ..) used certain encodings.  I believe they fixed the issue for all setEncoding()'s encoding options, except for one of them.  I mentioned the non-existent logging to them (forget if a bug was filed), but apparently the logging issue has not been fixed.</p><p>Thanks,<br>-Aaron</p></div>
	</div>
</div>
		