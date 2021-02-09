
<div class="comment" id="c_1713728741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728741">1</a> by Rob Dudley
		posted on 1/9/2011 at 9:42 PM
		</div>
		<div class="comment_text"><p>Hvae you ensured that the SVN repo directories are "owned" by the webserver user and group?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728756">2</a> by Raymond Camden
		posted on 1/9/2011 at 9:45 PM
		</div>
		<div class="comment_text"><p>No I have not - checking now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728735">3</a> by Raymond Camden
		posted on 1/9/2011 at 9:51 PM
		</div>
		<div class="comment_text"><p>I checked _just_ the blogcfc folder. I gave Users full control. No change. Everything should be able to read it now as far as I can tell.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728742">4</a> by Raymond Camden
		posted on 1/9/2011 at 10:03 PM
		</div>
		<div class="comment_text"><p>FYI, this is what the Apache error log says:</p><p>[Sun Jan 09 09:02:25 2011] [error] [client 10.10.93.10] client denied by server configuration: C:/websites/<a href="http://disq.us/url?url=http%3A%2F%2Fsvn.riaforge.org%2Flighthousepro%3AtRkc1duXcS2ERnjiLlurIvC5wPw&amp;cuid=3321886" rel="nofollow noopener" title="svn.riaforge.org/lighthousepro">svn.riaforge.org/lighthousepro</a></p><p>This seems to imply my config is wrong, not an OS issue. When I moved from the old server to the new, I edited httpd.conf to make it match the old one. I did this by hand and it's possible I missed something. httpd.conf included a svn conf file and that was copied as is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728752">5</a> by Raymond Camden
		posted on 1/9/2011 at 10:08 PM
		</div>
		<div class="comment_text"><p>Booyah. Found it. Not saying SVN is fixed, but you can at least view them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728743">6</a> by Rob Dudley
		posted on 1/9/2011 at 10:13 PM
		</div>
		<div class="comment_text"><p>Cool! What was it in the end?</p><p>Next thing I would have checked would have been the apache directive for that site / virtual host to ensure you've explicitly stated and initial security policy of allow / deny before you get to the dav.svn config.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728755">7</a> by Raymond Camden
		posted on 1/9/2011 at 10:16 PM
		</div>
		<div class="comment_text"><p>That was it exactly actually. I had forgot the allow/deny setting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728748">8</a> by Gary Funk
		posted on 1/10/2011 at 6:24 AM
		</div>
		<div class="comment_text"><p>You have been busy. Happy to see you have it fixed. I've had my head burried in BlogCFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728753">9</a> by Grant Eagon
		posted on 1/10/2011 at 4:09 PM
		</div>
		<div class="comment_text"><p>Aw man, wish I could have helped, but I didn't have a chance to read the article until this morning!  Apache and I are good friends!  :)</p></div>
	</div>
</div>
		