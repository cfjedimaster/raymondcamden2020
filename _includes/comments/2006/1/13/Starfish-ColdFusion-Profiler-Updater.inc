
<div class="comment" id="c_1713649154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649154">1</a> by Mark Drew
		posted on 1/14/2006 at 9:03 PM
		</div>
		<div class="comment_text"><p>This is awesome Ray. Works a treat (on OS X)</p><p>Many thanks for your contributions!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649159">2</a> by robi
		posted on 1/15/2006 at 11:40 PM
		</div>
		<div class="comment_text"><p>great idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649162">3</a> by Phillip Senn
		posted on 1/16/2006 at 12:08 AM
		</div>
		<div class="comment_text"><p>I read starfish.doc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649161">4</a> by Gary Fenton
		posted on 1/17/2006 at 5:22 AM
		</div>
		<div class="comment_text"><p>I read the doc too, Ray! Me like docs, yum! :-)</p><p>Will Starfish work on a multi-instance CF installation or just a standard/single installation? CF is pretty flawed in multi-instance mode since it lacks monitoring from PerfMon. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649163">5</a> by John  Barrett
		posted on 7/7/2006 at 6:39 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I tried to install this on the standalone cf mx 7.<br>I put the profiler.cfm in the debug folder, and then enables it with debugging, and then follwed the docs and put the rest of the files in the CFIDE/admin/profiler, but then it does not seem to work for me.</p><p>It keeps telling me to select the profiler, and enable debugging, and then vist some cfml templetes, I even tried to re start the cf server.</p><p>Any thoughts??<br>Thanks,<br>John</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649164">6</a> by Raymond Camden
		posted on 7/7/2006 at 7:51 PM
		</div>
		<div class="comment_text"><p>First off - you did hit some CFM pages, right? THe debugger works by collecting information from CFM pages you run on your site. So if you had, http://localhost/someapp, you would run files in someapp and THEN come back to Starfish and see what it collected. Also note that debugging must be both turned on in the cf admin, and your code must not disable debugging using the showdebugoutput=false option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649166">7</a> by Ron
		posted on 9/11/2006 at 10:31 PM
		</div>
		<div class="comment_text"><p>I just installed this on my MX 7 Developer Edition server, and I am gettting the error:</p><p>Attribute validation error for tag CFFORMITEM.<br>The value of the attribute TYPE, which is currently "script", must be one of the values: HRULE,HTML,TEXT,VRULE,SPACER.</p><p> The error occurred in C:\Inetpub\wwwroot\CFIDE\administrator\profiler\index.cfm: line 190<br>Called from C:\Inetpub\wwwroot\CFIDE\administrator\profiler\index.cfm: line 188<br>Called from C:\Inetpub\wwwroot\CFIDE\administrator\profiler\index.cfm: line 1</p><p>188 : &lt;cfform name="noname" format="flash" timeout="600"&gt;<br>189 : 	<br>190 : 	&lt;cfformitem type="script"&gt;<br>191 : 	function loadGraph() {<br>192 : 		if(templates.selectedIndex == undefined) return;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649168">8</a> by Raymond Camden
		posted on 9/12/2006 at 1:21 AM
		</div>
		<div class="comment_text"><p>You need to ensure you have the very latest CF 7, which is 7.0.2. (Technically 7.0.1 is ok, but I'd just get up to 7.0.2.)</p></div>
	</div>
</div>
		