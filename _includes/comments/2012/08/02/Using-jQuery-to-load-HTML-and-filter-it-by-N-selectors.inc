
<div class="comment" id="c_1713742435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742435">1</a> by Dan G. Switzer, II
		posted on 8/2/2012 at 6:09 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>While this code is super concise, I don't find it intuitive at all. I prefer to use a complete call back and spell out the code.</p><p>Also, keep in mind that if the source document DOM changes, this code could break. At bare minimum, I'd carefully comment what the code is supposed to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742437">2</a> by Raymond Camden
		posted on 8/2/2012 at 6:13 PM
		</div>
		<div class="comment_text"><p>I'm going to ignore your second comment because, as I said, this was the source HTML and it would obviously be better if I had pure data. That just isn't an option for now. ;)</p><p>To your first one... ok - so given you decide to switch to $.get, or $.ajax. Given you have X which is the result HTML. How do you get N nodes? I had found this SO question:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F405409%2Fuse-jquery-selectors-on-ajax-loaded-html%3AjX-CDntzo0UjLPUQyZHLFToEzQE&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/405409/use-jquery-selectors-on-ajax-loaded-html">http://stackoverflow.com/qu...</a></p><p>But it didn't work well for me. Using $(data).find('a') works, but not $(data).find('#id')</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742438">3</a> by m13z
		posted on 8/2/2012 at 9:27 PM
		</div>
		<div class="comment_text"><p>In jQuery you can use a context instead of a filter:</p><p>$('#header, #docs', data)</p><p>Maybe that works better?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742440">4</a> by Raymond Camden
		posted on 8/2/2012 at 10:32 PM
		</div>
		<div class="comment_text"><p>The issue I had with that is that it seems to 'execute' data, and if there are syntax errors in the DOM, like trying to use a script it can't reach, then I get errors in the console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742436">5</a> by Tim Leach
		posted on 8/2/2012 at 10:45 PM
		</div>
		<div class="comment_text"><p>@M13z</p><p>FYI, <br>Doing $('#header, #docs', data) is just a shortcut for<br>$(data).find('#header, #docs')</p><p>Both will execute the same under the hood.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742439">6</a> by Elijah Manor
		posted on 8/2/2012 at 11:21 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>What errors are you seeing in the console? I'm going to take a guess, but are you seeing a Permission Denied error? Behind the scenes the .load() method is using $.ajax() to do it's work. Internally it uses a find, but before it does that it removes any scripts that can cause problems.</p><p>What site where you trying to get markup from? If you point me to that I can run a test in the console of that site to see what you are running into. Is the site public?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742443">7</a> by Raymond Camden
		posted on 8/2/2012 at 11:22 PM
		</div>
		<div class="comment_text"><p>It is a "bit" private as in I'm using it for a demo at a keynote on Monday. It isn't really important though in terms of being top secret. Give me a bit to get a 'demo' of what I saw live, or at least get more of the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742442">8</a> by Raymond Camden
		posted on 8/2/2012 at 11:27 PM
		</div>
		<div class="comment_text"><p>Ok, some info. First off, you can see a sample of the HTML source here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Faug%2F2%2Facos.html%3Ak9m3tGQirAccsLmoxVm2EyCedLc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/aug/2/acos.html">http://www.raymondcamden.co...</a></p><p>I modded my code to this, just for testing:</p><p>$.get("cfdocs/"+url, {}, function(res,code) {<br>	console.log('ready');<br>	var header = $("#header", res);<br>	console.dir(header);<br>	var header2 = $("#header", $(res));<br>	console.dir(header2);<br>});</p><p>As you can see, I wasn't sure if I needed to jQuery-wrap res or not. But running the above, I get no matches, even though #header is cleary part of the dom.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742441">9</a> by m13z
		posted on 8/2/2012 at 11:42 PM
		</div>
		<div class="comment_text"><p>replace the "res" context with:</p><p>$('&lt;div /&gt;').append(res.replace(/&lt;script\b[^&lt;]*(?:(?!&lt;\/script&gt;)&lt;[^&lt;]*)*&lt;\/script&gt;/gi, ''))</p><p>That's basically what .load() does internally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742444">10</a> by Raymond Camden
		posted on 8/2/2012 at 11:45 PM
		</div>
		<div class="comment_text"><p>Did you mean:</p><p>var header3 = $("#header", $('&lt;div /&gt;').append(res.replace(/&lt;script\b[^&lt;]*(?:(?!&lt;\/script&gt;)&lt;[^&lt;]*)*&lt;\/script&gt;/gi, ''));</p><p>Throwing a syntax error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742445">11</a> by Raymond Camden
		posted on 8/2/2012 at 11:46 PM
		</div>
		<div class="comment_text"><p>Sorry missing ). Testing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742448">12</a> by Raymond Camden
		posted on 8/2/2012 at 11:48 PM
		</div>
		<div class="comment_text"><p>That worked. So if I read it right, this is what you did:</p><p>Take the result HTML.<br>Remove any script block. <br>Append it to a virgin DIV block made on the fly.<br>Then run my selector against it.</p><p>Would you say that is an accurate description?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742446">13</a> by m13z
		posted on 8/2/2012 at 11:52 PM
		</div>
		<div class="comment_text"><p>Yepp. Accurate.</p><p>Lines 7180 to 7187 of jQuery 1.7.2 for source.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742451">14</a> by Raymond Camden
		posted on 8/2/2012 at 11:54 PM
		</div>
		<div class="comment_text"><p>So another take away from this is: You can always work with arbitrary HTML but you just need to remove script blocks first.</p><p>Thanks M13z!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742450">15</a> by m13z
		posted on 8/3/2012 at 12:24 AM
		</div>
		<div class="comment_text"><p>¡De nada!</p><p>About the trigger of this discussion, I would normally agree with Dan about more control over the callback, but we have ended doing exactly what load() does internally, so the original code of the article is the better solution (It's exactly what jQuery was created for in the first place: "write less, do more").</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742452">16</a> by Kevin Boudloche
		posted on 8/3/2012 at 6:22 PM
		</div>
		<div class="comment_text"><p>jQuery 1.8 has a new method that may change the way this kind of processing is done. Look into the `$.parseHTML()` method. It takes a string of html and returns it as document fragment with or without scripts. line 485 of <a href="http://disq.us/url?url=http%3A%2F%2Fcode.jquery.com%2Fjquery-git.js%3AC2E0cO0H7eTw0k_4RezO6Z9Fkaw&amp;cuid=3321886" rel="nofollow noopener" title="http://code.jquery.com/jquery-git.js">http://code.jquery.com/jque...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742453">17</a> by Raymond Camden
		posted on 8/3/2012 at 6:26 PM
		</div>
		<div class="comment_text"><p>Oh man that's pretty cool. I have not been following the development of 1.8 much. I'll have to pay more attention.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742457">18</a> by Dan G. Switzer, II
		posted on 8/6/2012 at 6:43 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>My comment about the source code changing, was more to the fact that if the source code changes the comments are important because you may not remember what "#header, #docs" are supposed to do. Commenting the code to say:</p><p>// get article header (#header) and the body of the article (#docs)</p><p>Should help to fix the error. This is really more a note for someone trying to do this kind of thing in production.</p></div>
	</div>
</div>
		