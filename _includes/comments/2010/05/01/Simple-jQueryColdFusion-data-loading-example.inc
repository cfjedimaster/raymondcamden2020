
<div class="comment" id="c_1713724089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724089">1</a> by Dave
		posted on 5/2/2010 at 7:30 AM
		</div>
		<div class="comment_text"><p>can this be used 'instead" of cfajaxproxy ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724086">2</a> by Ben Riordan
		posted on 5/2/2010 at 8:17 AM
		</div>
		<div class="comment_text"><p>Thanks for that post - great for digging a bit further into jQuery.</p><p>I've used jQuery a lot for the front end, to load in parts of the page that are already processed / static, but not to pull in live data like you have done here. I've mostly used things like CFDIV for that.</p><p>So, I'm curious... do you (or anyone else who wants to chime in) still use many of the built in AJAX tags with ColdFusion or do you pretty much solely use jQuery? If so, what?</p><p>Since it looks like a majority of ColdFusion users prefer jQuery over the included Ext-JS library, is it possible that Ext-JS might eventually be replace by jQuery in future releases?</p><p>One problem I see with my own applications is if I use jQuery and then I want to include CFGRID or something like that the browser is then forced to load *both* the jQuery and Ext-JS libraries - quite a sizable load for a higher traffic / production website. I would probably use something like flexigrid (<a href="http://disq.us/url?url=http%3A%2F%2Fflexigrid.info%3ADJB7fuJt0OzEOggNnJCz1LlreYw&amp;cuid=3321886" rel="nofollow noopener" title="http://flexigrid.info">http://flexigrid.info</a>) instead of CFGRID if I wanted to load a grid when the jQuery library is already loaded. Or, alternatively use CFGRID and try to only use the built in ColdFusion Ajax Functions so that only one javascript library has to be loaded by the end user.</p><p>I guess that isn't exactly a question per say, but just curious on everyone's view on that and how people go about using the two options.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724085">3</a> by David Hammond
		posted on 5/2/2010 at 6:27 PM
		</div>
		<div class="comment_text"><p>This is a good example.  It can actually be made a tiny bit simpler by using the load function instead of get:</p><p>$("#result").load("test2.cfm", function() {<br>	//This portion is run when all done<br>	//First clear the status<br>	$("#status").html("")<br>	//Re-enable the button<br>	$("#testButton").removeAttr("disabled")<br>})</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Fload%2F%3A9PXkza9nFX1XZ12YO8mXjiXZs0Q&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/load/">http://api.jquery.com/load/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724084">4</a> by Raymond Camden
		posted on 5/2/2010 at 7:16 PM
		</div>
		<div class="comment_text"><p>@Dave: Sure.</p><p>@Ben: I personally do not use much of the pre-built Ajax stuff. I have a lot of respect for it. The binding stuff is super easy and frankly, even easier in jQuery in some respects. When I was still a bit uncomfortable w/ Ajax stuff, I found the CF8 stuff to be remarkably easy and powerful. But now that I am more experienced, I stick to jQuery for the most part. And I think that's exactly what Adobe wanted. Not every feature will be appropriate for every developer.</p><p>Does that make sense?</p><p>@David: Yep - jQuery is soooo like CF in that way - many ways to skin the cat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724083">5</a> by Raymond Camden
		posted on 5/2/2010 at 7:17 PM
		</div>
		<div class="comment_text"><p>@Ben: One thing I forgot to say - a very good grid for jQuery is jqGrid. I've used it in the past and it's very powerful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724095">6</a> by Ben Riordan
		posted on 5/2/2010 at 8:18 PM
		</div>
		<div class="comment_text"><p>@Ray Yes, that makes sense. Thanks for you comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724094">7</a> by Phillip Senn
		posted on 5/2/2010 at 9:58 PM
		</div>
		<div class="comment_text"><p>I knew that I wanted a program that trapped errors, so I focused on the $.ajax function.<br>I also knew that I wanted to use JSON because it looked like JSON had a smaller footprint than XML.<br>I knew that I wanted to use cfcs with access="remote".<br>I wanted to play around with various data types: text input, checkbox, date.<br>I knew that I wanted to use jQuery-UI becaue of it's theme garden.<br>So I found a plug-in that used jQuery-UI for layout (Header, content, sidebar(s), footer).</p><p>That's why I started a folder called "jQueryZenGarden", which at the moment kind of looks like a junkyard, but if you look at subfolder 005, you'll find a really sweet example using all of the above.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfmzengarden.com%2FjQueryZenGarden%2F005%2F%3A7jJwRo0FXlRopcQuVORQyW0One4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfmzengarden.com/jQueryZenGarden/005/">http://www.cfmzengarden.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724081">8</a> by Murray Hopkins
		posted on 5/3/2010 at 4:44 AM
		</div>
		<div class="comment_text"><p>@Ben: For my db driven web apps I am increasingly using the Ext library for the entire front end and CF for the server side. This also has the advantage that I can use most of what I build for both browser based interfaces and for AIR ie the Ext code base I am developing over time can be used for both approaches.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724090">9</a> by Micah Brown
		posted on 5/3/2010 at 5:25 PM
		</div>
		<div class="comment_text"><p>Thanks for the mini-tutorial.  What is the best way to make this work properly in IE..you know everyones favorite browser? (minimal finger wagging please)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724093">10</a> by Raymond Camden
		posted on 5/3/2010 at 5:34 PM
		</div>
		<div class="comment_text"><p>It doesn't work in IE??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724091">11</a> by Micah Brown
		posted on 5/3/2010 at 5:35 PM
		</div>
		<div class="comment_text"><p>Well crap it wasn't and now it suddenly is.  Im extra slow this morning. Nevermind!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724087">12</a> by Raymond Camden
		posted on 5/3/2010 at 5:35 PM
		</div>
		<div class="comment_text"><p>Just tested IE8 - worked fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724080">13</a> by Mike Hodgson
		posted on 5/6/2010 at 12:29 AM
		</div>
		<div class="comment_text"><p>@Phillip Your example is much more elaborate than mine, but I also used a CFC with access="remote" to drive my URL shortening service <a href="http://disq.us/url?url=http%3A%2F%2Fsurly.ca%2F%3AFlt3hzh401y_404BXjv9cPymjPo&amp;cuid=3321886" rel="nofollow noopener" title="http://surly.ca/">http://surly.ca/</a> . The rest of the site is entirely JQuery/HTML/CSS</p><p>I'll probably post the complete code on GitHub, once I get it cleaned up a bit!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724092">14</a> by Phillip Senn
		posted on 5/6/2010 at 12:51 AM
		</div>
		<div class="comment_text"><p>Thanks for the comment Mike!<br>Although my example might be considered elaborate, its purpose is to show how to do typical CRUD.<br>I make my examples public for three (3) reasons: 1) To learn how to do it myself. 2) To provide the syntax for others. 3) To show how much I don't know (ie: where I need help).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724082">15</a> by Shaun
		posted on 5/7/2010 at 1:15 AM
		</div>
		<div class="comment_text"><p>FYI, it wasn't working for me in IE7, until I turned off the CF Debugging... then it worked fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724088">16</a> by Raymond Camden
		posted on 5/7/2010 at 9:42 PM
		</div>
		<div class="comment_text"><p>Ah, always a good idea. :)</p></div>
	</div>
</div>
		