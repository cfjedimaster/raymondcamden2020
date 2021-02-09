
<div class="comment" id="c_1713622511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622511">1</a> by Derek P
		posted on 11/11/2005 at 7:43 PM
		</div>
		<div class="comment_text"><p>perhaps with cfx_image you could create a numeric check image that the user has to type in in order to prove they are human by reading the image?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622508">2</a> by komo
		posted on 11/12/2005 at 11:13 AM
		</div>
		<div class="comment_text"><p>hello!<br>I am a blogCFC user in china,and i cannot use 4.0 in blueDragon 6.2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622509">3</a> by Raymond Camden
		posted on 11/12/2005 at 7:17 PM
		</div>
		<div class="comment_text"><p>Komo, what error do you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622510">4</a> by Jacob Munson
		posted on 11/13/2005 at 4:27 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I just got through upgrading to BlogCFC 4.0.  Great job!  :)</p><p>I ran into a couple of bugs though.</p><p>1.  blog.cfc has a query against tblBlogEntries that fails on MySQL/Linux.  Your MySQL script names it tblblogentries, and I guess it needs to be the same case.</p><p>2.  Same as #1 but it's tblBlogSearchStats this time, still blog.cfc</p><p>3.  Same as #2 but it's also in stats.cfm</p><p>4.  This might be a problem with my setup, but I get this error when I click a category: "Cannot format given Object as a Date" Unfortunately I'm on a shared host, and I don't get robust exception information with my errors.  So I'm not sure which page is causing the error :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622513">5</a> by komo
		posted on 11/13/2005 at 4:24 PM
		</div>
		<div class="comment_text"><p>Hello! Raymond Camden!<br>Thank you for your answer!Oh,my poor english!<br>The error is like this:<br>The page you were executing caused an internal BlueDragon server error!<br>34:   &lt;!--- load an init blog ---&gt;<br>35:   &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.blog%3AyPfk_08JbGyDtIai-mjD02kxbvg&amp;cuid=3321886" rel="nofollow noopener" title="application.blog">application.blog</a> = createObject("component","<a href="http://disq.us/url?url=http%3A%2F%2Forg.camden.blog.blog%3AyzvXxHJZ-_gXQzJ9UzwfK-QPovg&amp;cuid=3321886" rel="nofollow noopener" title="org.camden.blog.blog">org.camden.blog.blog</a>").init(blogname)&gt;<br>,^_^..<br>but blogCFC have no error in coldfusionMX7 server, It's a puzzle !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622514">6</a> by Raymond Camden
		posted on 11/13/2005 at 7:46 PM
		</div>
		<div class="comment_text"><p>Can you post the error though?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622515">7</a> by Jacob Munson
		posted on 11/14/2005 at 2:34 AM
		</div>
		<div class="comment_text"><p>If you were talking to me, Ray, I took a screenshot of the error and put it here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.techfeed.net%2Fblog%2Fcategories_error.png%3AKQpUIYS6z1fRfhPtK41dmQd-Mvo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.techfeed.net/blog/categories_error.png">http://www.techfeed.net/blo...</a></p><p>But debugging without robust exceptions really sucks, that error message doesn't help much.  :(  If you want to contact me offline, I can give you temporary admin access to my site so you can check it out, if you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622518">8</a> by Raymond Camden
		posted on 11/14/2005 at 7:20 PM
		</div>
		<div class="comment_text"><p>Jacob, nope, didn't mean you - but I appreciate you sending it in. I was worried about case issues. I'll try to get to it this week. If I don't, remind me. I was asking the guy who said it didnt work in BD.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622517">9</a> by Raymond Camden
		posted on 11/15/2005 at 1:41 AM
		</div>
		<div class="comment_text"><p>jacob, all your bugs, except the last one, is fixed and will be online in about 5 minutes.</p></div>
	</div>
</div>
		