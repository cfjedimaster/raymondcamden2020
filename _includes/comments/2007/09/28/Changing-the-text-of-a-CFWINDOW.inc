
<div class="comment" id="c_1713672615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672615">1</a> by todd sharp
		posted on 9/28/2007 at 5:35 PM
		</div>
		<div class="comment_text"><p>I do not fault you for missing this in the docs, but there is a much easier way (pg 622 of dev guide):</p><p>"You can use the special controlName_body variable to access and change the body contents for cfpod and<br>cfwindow controls. For example, you can use the controlName_body.innerHTML property to set the body HTML.<br>For cfpod and cfwindow tags, you can also use the controlName_title to get or set the control’s title bar contents."</p><p>This is really buried in the docs - it should be easier to find.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672611">2</a> by Scott Fitchet
		posted on 9/28/2007 at 5:59 PM
		</div>
		<div class="comment_text"><p>Nice demo.</p><p>Are you aware of any scripts that will automatically remember the windowing positions? This would be perfect for OPML (lists + windows).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672636">3</a> by Raymond Camden
		posted on 9/28/2007 at 6:04 PM
		</div>
		<div class="comment_text"><p>Todd - doh - I remember that now. Still though - was kind of interesting to dig into the object a bit.</p><p>Scott - that would be kind of simple. As you know, you can easily specify the X,Y for the window when it is started. So all you need to do is remember the window's position. You can use JS to set cookies. So you can either try to capture the window movement, or just poll every second and store. It would be 'cleaner' to note the movement and use an event.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672633">4</a> by todd sharp
		posted on 9/28/2007 at 7:00 PM
		</div>
		<div class="comment_text"><p>Forgive the huge code post here in the comments, but I don't hvae much time to post a blog entry about this.</p><p>Here's how you could capture the x/y for use on other pages:</p><p>&lt;cfparam name="cookie.x" default="100" /&gt;<br>&lt;cfparam name="cookie.y" default="100" /&gt;</p><p>&lt;html&gt;<br>&lt;head&gt;<br>&lt;script&gt;</p><p>moveListener = function(){<br>	var w = ColdFusion.Window.getWindowObject('win2');<br>	w.on('move', setCoords, w);<br>}</p><p>setCoords = function(ob,x,y){<br>	var today = new Date();<br>	var expire = new Date();<br>	var days = 1;<br>	expire.setTime(today.getTime() + 3600000*24*days);<br>	document.cookie = 'x'+ "=" + x + ";expires="+expire.toGMTString();<br>	document.cookie = 'y'+ "=" + y + ";expires="+expire.toGMTString();<br>}</p><p>&lt;/script&gt;	<br>&lt;/head&gt;<br>&lt;body onload="javascript:moveListener();"&gt;<br>&lt;cfwindow name="win2" title="window 2" initShow="false" center="false" x="#cookie.x#" y="#cookie.y#"&gt;window two&lt;/cfwindow&gt;<br>&lt;a href="<a href="http://disq.us/url?url=javascript%3AColdFusion.Window.show%3ApnnnU_OzhPlDK2H88sRbHiY-_zs&amp;cuid=3321886" rel="nofollow noopener" title="javascript:ColdFusion.Window.show">javascript:ColdFusion.Windo...</a>('win2')"&gt;Show Win&lt;/a&gt;&lt;br /&gt;<br>&lt;a href="win1.cfm"&gt;Go to page 1&lt;/a&gt;<br>&lt;/body&gt;</p><p>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672635">5</a> by todd sharp
		posted on 9/28/2007 at 8:01 PM
		</div>
		<div class="comment_text"><p>PS - I caught the 7 day forecast for Chicago yesterday...it didn't look pretty.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672637">6</a> by Scott Fitchet
		posted on 9/28/2007 at 11:46 PM
		</div>
		<div class="comment_text"><p>Todd ... sweet demo!</p><p>I think I'll want to submit the x/y coordinates to the server over AJAX which would dynamically regenerate an OPML file. I've forgotten the exact spec but OPML has properties for x,y (&amp;z). The cookie would then identify which OPML.</p></div>
	</div>
</div>
		