
<div class="comment" id="c_1713618944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618944">1</a> by rd
		posted on 6/25/2005 at 12:26 AM
		</div>
		<div class="comment_text"><p>Hey, it looks like if you have tortoiseSVN installed like I do, you can see which files havent been checked in yet. Pretty handy for just making updates to existing modified blogcfc code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618940">2</a> by Raymond Camden
		posted on 6/25/2005 at 12:29 AM
		</div>
		<div class="comment_text"><p>So your saying you can see that from my zip? That's pretty cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618941">3</a> by rd
		posted on 6/25/2005 at 1:12 AM
		</div>
		<div class="comment_text"><p>yeah, i havent tried the merge yet... but tortoiseSVN keys off of your svn directories and colors the icons for their appropriate status. Red showing me they haven't been checked in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618943">4</a> by Kam
		posted on 6/25/2005 at 4:48 AM
		</div>
		<div class="comment_text"><p>.svn directories also contain some other interesting things, for instance that your repo is at file:///C:/svn/blog/org.</p><p>I dont think it stores logins and passwords in there, but I'd be wary of releasing any working copies with network-accessable URLs. file:// shouldnt cause any security issues though I think, but I'm not a svn expert.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618942">5</a> by Nathan Dintenfass
		posted on 6/26/2005 at 12:22 PM
		</div>
		<div class="comment_text"><p>Why no day information?  Seems like yyyy/mm/dd/title wouldn't really be much longer and would avoid the issue of same title in the same month (which seems much harder to enforce than same title same day).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618946">6</a> by David Lobb
		posted on 6/27/2005 at 8:40 AM
		</div>
		<div class="comment_text"><p>I implemented SES urls on blogCFC with folders and files. This may not be pratical in a shared hosting environment however.<br>There is an archive folder, then under that one for year and month (numeric) and then a .cfm script is created based on the post title. All the script does is set url params for the entry and mode and include index.cfm :) Works nicely for me, once the templates are changed from relative paths. (Using a new variable in the ini)<br>Heh, I also implemented trackbacks. Let me know if you would like the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618945">7</a> by Andy Jarrett
		posted on 6/27/2005 at 7:51 PM
		</div>
		<div class="comment_text"><p>Just an extra TortiseSVN note. If you have got it installed you can use the "Export" to get a *clean* copy of the folders out :o)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618949">8</a> by Raymond Camden
		posted on 6/27/2005 at 7:57 PM
		</div>
		<div class="comment_text"><p>I wasn't aware of that. I was using a separate folder and copying stuff. Thank you VERY, VERY much.</p><p>Nathan: I used yyyy/mmmm/title since I saw that on many other blogs. There is no real reason why I couldn't use day as well. Something for me to look at when I get back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618947">9</a> by Raymond Camden
		posted on 6/27/2005 at 8:00 PM
		</div>
		<div class="comment_text"><p>Andy - thanks - dang that was easy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618950">10</a> by O?uz Demirkap?
		posted on 6/28/2005 at 4:02 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I think there are still Unicode problems on RSS feeds.</p><p>The other problem is search function. It does not work for Unmicode chars. There is same problem on Galleon forum app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618952">11</a> by O?uz Demirkap?
		posted on 6/28/2005 at 4:02 PM
		</div>
		<div class="comment_text"><p>And my name have still problem here. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618951">12</a> by Luca
		posted on 6/30/2005 at 8:29 AM
		</div>
		<div class="comment_text"><p>I've a problem with date-time: my hosting company is located in the US but I'm living in Italy. In this way my post and comments have the date and local time of US. It would be nice if, in the future releases, a central management of date/time will be included (for example the user set his timezone in a configuration file...).<br>In any case you have done a great work!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618954">13</a> by Raymond Camden
		posted on 7/11/2005 at 6:13 AM
		</div>
		<div class="comment_text"><p>It is on my TODO list Luca, but will not make the 3.8 release. In _general_, it's rather trivial. But there are various hooks that are time related that would need to be updated as well.</p></div>
	</div>
</div>
		