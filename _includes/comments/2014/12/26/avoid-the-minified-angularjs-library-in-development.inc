
<div class="comment" id="c_1759715424">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1759715424">1</a> by Raymond Camden
		posted on 12/26/2014 at 4:55 PM
		</div>
		<div class="comment_text"><p>OT, but it's my blog post - I can be OT. ;) The Yeoman AngularJS scaffold I started about 30 minutes ago is still hung on grunt-contrib-imagemin. I suppose my goal to create an AngularJS application also needed image minification. And this is why I'm so bothered by tools like Yeoman and Bower making things 999% more complex then they need to be. Why can't I just scaffold an application that is just HTML, CSS and JS w/o anything else?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1759733908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1759733908">2</a> by JesterXL
		posted on 12/26/2014 at 5:13 PM
		</div>
		<div class="comment_text"><p>You need a good Grunt or Gulp workflow. You do a dev build which flushes out all of these problems with good error handling. All the extra kruft that checks for that stuff with good logging is ripped out for production builds for file size reasons. Things like the above shouldn't happen.</p><p>"I want to write some code." Run grunt dev</p><p>"I want to deploy my website." Run grunt build</p></div>
	</div>
</div>
		
<div class="comment" id="c_1759746097">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1759746097">3</a> (In reply to <a href="#c_1759733908">#2</a>) by Raymond Camden
		posted on 12/26/2014 at 5:24 PM
		</div>
		<div class="comment_text"><p>Sure - for a "real" app, I can see the value of a Grunt task that would switch the lib from "full" to min when going live, but as I said, I'd never expect error handling to be something impacted by full/min.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1759763337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1759763337">4</a> (In reply to <a href="#c_1759746097">#3</a>) by JesterXL
		posted on 12/26/2014 at 5:40 PM
		</div>
		<div class="comment_text"><p>Chrome doesn't know about Dependency Injection so Angular has to put in their own error logging. Let's put aside Angular could use more verbose error handling for a minute, and assume it does have SOME built in error handling via verbose throws. If that's the case, these are great to have for development as you've shown, but do NOT need to be in the runtime code once you ship for file size reasons. You shouldn't be debugging production miniified/uglified code. Chrome has formatting support, yes, but that's for bad situations where you don't have the original code.</p><p>There are a variety of other reasons, too. Uglify renames variables and functions. Suddenly your stack trace goes from:</p><p>cow called moo with 'someVar' and 3<br>moo called foo<br>foo called cheese</p><p>... to:</p><p>a called b with 'someVar'<br>b called a<br>c called b</p><p>And so on. You have 2 choices at this point. Deal with the fact most won't really care about verbose stack traces, or utilize the function's name parameter to give functions better names for stack traces. Strings, however, are uglify safe; meaning they add to file size. So even if you get a stack trace, it's still hard to read.</p><p>This isn't a problem with just uglification, though. That's why Q and Bluebird have the showVerboseStackTraces option; often various anon functions calling each other in this huge stack is completely worthless, so they strip out and make a useful stack for you.</p><p>... that doesn't answer why she's all on one line. I believe that's urlencoded perhaps for CSP security reasons.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1759769456">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1759769456">5</a> (In reply to <a href="#c_1759763337">#4</a>) by Raymond Camden
		posted on 12/26/2014 at 5:46 PM
		</div>
		<div class="comment_text"><p>Fair enough - I guess it is just one more thing that may not be expected but only makes sense after it bites you in the ass. (As it did me.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1759769791">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1759769791">6</a> (In reply to <a href="#c_1759769456">#5</a>) by Raymond Camden
		posted on 12/26/2014 at 5:46 PM
		</div>
		<div class="comment_text"><p>And sadly I'll probably get bit in the ass by this again in a year and forget how I fixed it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1759796786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1759796786">7</a> (In reply to <a href="#c_1759769791">#6</a>) by JesterXL
		posted on 12/26/2014 at 6:10 PM
		</div>
		<div class="comment_text"><p>You need to:</p><p>1. get yourself a gulp or gruntfile you love<br>2. check that mofo into git<br>3. use it for every Angular project</p><p>That way you have a workflow that prevents the above and is tailored to how you code.</p></div>
	</div>
</div>
		