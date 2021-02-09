
<div class="comment" id="c_1713716036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716036">1</a> by barry.b
		posted on 6/11/2009 at 6:19 PM
		</div>
		<div class="comment_text"><p>don't people use WDDX anymore?</p><p>&lt;.cfwddx action="cfml2js"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716037">2</a> by Raymond Camden
		posted on 6/11/2009 at 6:22 PM
		</div>
		<div class="comment_text"><p>No. ;) Seriously, good point, that's another way. Although I'd recommend toScript just because it is newer and shinier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716038">3</a> by Joe DuVall
		posted on 6/11/2009 at 6:47 PM
		</div>
		<div class="comment_text"><p>Wow, Ray, you've given me a new perspective on generating script. Thanks!</p><p>Up until now I've treated the creation of arrays by using value lists. For example:</p><p>&lt;cfquery name="foo" datasource="dsn"&gt;<br>SELECT bar<br>FROM myTable<br>&lt;/cfquery&gt;</p><p>&lt;script&gt;<br>var myArray = [&lt;cfoutput&gt;#ValueList(<a href="http://disq.us/url?url=http%3A%2F%2Ffoo.bar%3AopUE98Rht-FI89hCtymBuG3SRlM&amp;cuid=3321886" rel="nofollow noopener" title="foo.bar">foo.bar</a>)#&lt;/cfoutput&gt;];<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716044">4</a> by jonathan
		posted on 6/11/2009 at 6:58 PM
		</div>
		<div class="comment_text"><p>wish I had seen this about 6 weeks ago...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716042">5</a> by mgersting
		posted on 6/11/2009 at 7:46 PM
		</div>
		<div class="comment_text"><p>Just for what it's worth, you can also call .cfm file as an external script and it, assuming the output is formatted correctly, it will run as well.</p><p>For example:<br>&lt;script type="text/javascript" src="generate_some_javascript.cfm?youcaneven=senddata"&gt;&lt;/script&gt;</p><p>This way you can load some JavaScript-ready data without mucking up your display code.</p><p>One additional note about doing this however: I've found that if you use ColdFire for debugging this additional .cfm request seems to confuse it and you'll end up getting the debug info for that request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716041">6</a> by Raymond Camden
		posted on 6/11/2009 at 7:48 PM
		</div>
		<div class="comment_text"><p>ColdFire supports handling N CF requests in one main request, so make sure you are updated to the latest build. If you still see this, be sure to log a bug for it at RIAForge.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716043">7</a> by mgersting
		posted on 6/11/2009 at 8:05 PM
		</div>
		<div class="comment_text"><p>Will do, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716039">8</a> by Nathan Mische
		posted on 6/11/2009 at 8:27 PM
		</div>
		<div class="comment_text"><p>@mgersting - You should see debugging info for the "parent" request as well as the JavaScript request. Check out the following post for more info: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.mischefamily.com%2Fnathan%2Findex.cfm%2F2008%2F4%2F11%2FColdFire-Response-Queue%3AsbQzAeUGO-IwJRZH36cCumiuiLw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mischefamily.com/nathan/index.cfm/2008/4/11/ColdFire-Response-Queue">http://www.mischefamily.com...</a></p><p>One note, the UI has changed slightly since I recorded those demos, but the idea is the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716045">9</a> by mgersting
		posted on 6/11/2009 at 9:58 PM
		</div>
		<div class="comment_text"><p>Nathan - thanks for the tip. Turning off "Show Last Request" fixed the issue for me.  Should I be able to to switch selected templates as in those screencasts, though?e</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716040">10</a> by Ahmad
		posted on 6/12/2009 at 9:06 AM
		</div>
		<div class="comment_text"><p>I learn more about CF everytime I read your blog ;)</p><p>This gives me a start and some idead into into generating dynamic javascript for dynamic form fields.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716046">11</a> by Nathan Mische
		posted on 6/12/2009 at 4:20 PM
		</div>
		<div class="comment_text"><p>@mgersting - You should see a file name to the right of the "Variables" button. Click that to see a list of available responses to debug.</p></div>
	</div>
</div>
		