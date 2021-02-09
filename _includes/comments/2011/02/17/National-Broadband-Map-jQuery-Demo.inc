
<div class="comment" id="c_1713729931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729931">1</a> by Kris Korsmo
		posted on 2/18/2011 at 8:08 AM
		</div>
		<div class="comment_text"><p>I'm getting a 404 when I click on the map.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729926">2</a> by Raymond Camden
		posted on 2/18/2011 at 8:09 AM
		</div>
		<div class="comment_text"><p>Try again - I forgot to remove a few console.log messages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729933">3</a> by Kris Korsmo
		posted on 2/18/2011 at 8:12 AM
		</div>
		<div class="comment_text"><p>Very cool!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729932">4</a> by James Edmunds
		posted on 2/20/2011 at 12:41 AM
		</div>
		<div class="comment_text"><p>Very interesting, and very interesting as well how rich that API is, with info that you don't immediately, necessarily associate with broadband availability. Could come in very handy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729929">5</a> by Drew Wells
		posted on 2/24/2011 at 11:36 PM
		</div>
		<div class="comment_text"><p>An alternative to your series of s += is to use an array.join().  In fact, s+= provides the worst performance across all browsers vs [].join or s = 'str' + 'str' + 'str'.  IIRC, s = 'str' + 'str' + 'str' is the fastest type of concatenation in firefox, whereas [].join() is fastest way for IE.  I tend to use Array.join because it makes the best looking code even if it's slower in chrome/ff than iterations of string concatenation.</p><p>Code would look like:<br>s = ['&lt;p&gt;',<br>      '&lt;table width="400"&gt;'];</p><p>$("#result").html(s.join(''));</p><p>You could do some further cleanup by using jQuery.tmpl.  Code would look like this:</p><p>var tmpl = $.tmpl('&lt;tr class="trHeader"&gt;&lt;td colspan="2"&gt;&lt;strong&gt;${section}&lt;/strong&gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td&gt;Total:&lt;/td&gt;&lt;td&gt;${total}&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td&gt;${header1}&lt;/td&gt;&lt;td&gt;${data1}&lt;/td&gt;&lt;/tr&gt;');</p><p>var html = $.template( tmpl, {<br>    section: 'Population',<br>    total: $().number_format(myResults.population, num_form),<br>    header1: 'Asians',<br>    data1: perc(myResults.raceAsian)<br>});</p><p>$("#result").html(html);</p><p>The code would not need to be in a loop for further groups.  I believe if you pass it an array, it loops through the array and generates all the html for you.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Ftmpl%2F%3AaN3e789JXoB_ZSkyu-u_jxgj_mI&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/tmpl/">http://api.jquery.com/tmpl/</a> //Creates template to be used with $.template()<br><a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Ftemplate%2F%3AXaCUJbBBPSfwjLSvpVrWshO-hwc&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/template/">http://api.jquery.com/templ...</a> //Combines tmpl and your data</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729927">6</a> by Raymond Camden
		posted on 2/25/2011 at 3:57 AM
		</div>
		<div class="comment_text"><p>@Drew: Good points there. I'm aware of string concat being slow - seems like it is everywhere in the world. In my defense - I was thinking readability over performance. ;) (Course, I did add caching too so that's a partial lie.)</p><p>I had considered templates but I'm still wrapping my head around how easy they are to work with custom data. Ie, how much work I'd have to do to get the data in a form that would work well with the template.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729934">7</a> by Justin Toth
		posted on 8/22/2011 at 1:58 AM
		</div>
		<div class="comment_text"><p>Has anyone been able to get ajax calls to their services to work? I'm trying using jquery and json or jsonp as data type, however it always gives me an invalid label error, as if the json isn't formatted correctly...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729928">8</a> by sanm
		posted on 2/9/2012 at 8:30 PM
		</div>
		<div class="comment_text"><p>Could you please share your complete code, because the link which you have provided is not working.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729930">9</a> by Raymond Camden
		posted on 2/9/2012 at 9:31 PM
		</div>
		<div class="comment_text"><p>What isn't working? I just tried the demo and it seems ok. What code do you want - the CF code? The front end code you can get by just doing View Source.</p></div>
	</div>
</div>
		