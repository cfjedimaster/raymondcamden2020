
<div class="comment" id="c_1713615626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615626">1</a> by Rob Brooks-Bilson
		posted on 5/14/2004 at 6:17 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Can't you just set a Missing Template Handler to point to your 404 template in the CF Administrator?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615625">2</a> by Raymond Camden
		posted on 5/14/2004 at 6:28 PM
		</div>
		<div class="comment_text"><p>Sorry, I should have been more clear. This is for a box w/ N servers on it. I'll update the entry to say so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615628">3</a> by Brandon Harper
		posted on 5/14/2004 at 6:55 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'm assuming that you are using Apache with Virtual Hosts for each website (I can't imagine another way to get them to work, actually) That said, put this inside each virtual host container:</p><p>ErrorDocument 404 "<a href="http://disq.us/url?url=http%3A%2F%2Fmysite.com%2F404.cfm%3AhI0nxD6pjZXmjQPNJqs5NxgZRwo&amp;cuid=3321886" rel="nofollow noopener" title="http://mysite.com/404.cfm">http://mysite.com/404.cfm</a>"</p><p>Here is more documentation about that feature:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhttpd.apache.org%2Fdocs%2Fmod%2Fcore.html%23errordocument%3A8dIByiXypVbnD5md7ecAVW6X7jg&amp;cuid=3321886" rel="nofollow noopener" title="http://httpd.apache.org/docs/mod/core.html#errordocument">http://httpd.apache.org/doc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615630">4</a> by Raymond Camden
		posted on 5/14/2004 at 7:07 PM
		</div>
		<div class="comment_text"><p>That doesn't work though - it suffers the same problem as IIS (before you tweak it) - CF "grabs" the CF request and throws the error. If you request a HTML file that doesn't exist, then it works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615632">5</a> by jared chandler
		posted on 5/14/2004 at 7:51 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>are you attempting to pass are requests back via a single .cfm file for a CMS or something similar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615633">6</a> by Brandon Harper
		posted on 5/14/2004 at 9:24 PM
		</div>
		<div class="comment_text"><p>Ahh, yeah, that's not a surprise.</p><p>The only thing I can suggest is adding a Missing   Template Handler in CF, and let that file actually decide what is the correct 404 page to include based off of host headers since you're probably running all of the sites off of one CFMX instance.  Maybe just a simple cfswitch based off of cgi.http_host or something to that effect.</p><p>Because a default install of CFMX is basically only running single JRun listener &amp; Application, I wouldn't think there is a way to do it other than what I mentioned above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615634">7</a> by Raymond Camden
		posted on 5/14/2004 at 9:35 PM
		</div>
		<div class="comment_text"><p>Brandon: Actually, I considered that, but the error document specified in CF will only fire when I use the default host, not one of the virtual hosts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615638">8</a> by Raymond Camden
		posted on 5/14/2004 at 9:36 PM
		</div>
		<div class="comment_text"><p>Jared: No, this is a simple attempt to get xxx.cfm, where xxx.cfm isn't a real file, to fire the Apache 404 handler, not the CF one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615637">9</a> by Kurt Wiersma
		posted on 5/14/2004 at 9:58 PM
		</div>
		<div class="comment_text"><p>In my tests on my local machine with virtual hosts I have found that if you put /errors/404.cfm in the missing template setting in the CF admin it will execute that path in relation to the current host that is being accessed. So if in the webroot of each of your virtual hosts you had a errors/404.cfm file that would get displayed as the 404 page for that host. This also works for the error handler. I found a cf-talk thread on this subject that clued me in that this was possible. It is pretty cool actually. I just wish I could do more cfml on the missing template handlers.</p><p>Ah here is the cf-talk thread that clued me in:</p><p>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.houseoffusion.com%2Fcf_lists%2Findex.cfm%2Fmethod%3Dmessages%26threadid%3D20892%26forumid%3D4%3AuhMUuE76wiKjoqP3P9jOm0qDpUE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.houseoffusion.com/cf_lists/index.cfm/method=messages&amp;threadid=20892&amp;forumid=4">http://www.houseoffusion.co...</a>"&gt;<a href="http://disq.us/url?url=http%3A%2F%2Fwww.houseoffusion.com%2Fcf_lists%2Findex.cfm%2Fmethod%3Dmessages%26threadid%3D20892%26forumid%3D4%3C%2Fa%3E%3A7iB6-dPCzpr40FlCNl14TvSUM6c&amp;cuid=3321886" rel="nofollow noopener" title="http://www.houseoffusion.com/cf_lists/index.cfm/method=messages&amp;threadid=20892&amp;forumid=4</a>">http://www.houseoffusion.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615640">10</a> by Brandon Harper
		posted on 5/14/2004 at 10:02 PM
		</div>
		<div class="comment_text"><p>Hmm, interesting.. what do you get back when you are using one of the virtual hosts for a 404 status page?  What if you set a default error handler document and try them across the various hosts-- does it work on all virtual hosts?</p><p>Sorry, I only have access to one Apache server w/ CFMX to play with this myself, but it's on a private network at home which I can't access from here.</p><p>Also, I assume that you know for sure that CFMX is working properly on all of the virtual hosts?  Just checking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615641">11</a> by Brandon Harper
		posted on 5/14/2004 at 10:06 PM
		</div>
		<div class="comment_text"><p>Yep Kurt, you're right.  I should of known that given that I wrote a blog entry about error templates over a year ago.  ;)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdevnulled.com%2Farchives%2F2003%2F01%2Fcfmx_error_template.php%3ABVI_8ebxBF4WR6wSuDgExmzajyU&amp;cuid=3321886" rel="nofollow noopener" title="http://devnulled.com/archives/2003/01/cfmx_error_template.php">http://devnulled.com/archiv...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615642">12</a> by Raymond Camden
		posted on 5/15/2004 at 1:38 AM
		</div>
		<div class="comment_text"><p>Kurt, this is what I had (although my path was /404.cfm). I will give it one more try though.</p></div>
	</div>
</div>
		