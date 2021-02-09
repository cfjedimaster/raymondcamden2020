
<div class="comment" id="c_1713649762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649762">1</a> by Mark Drew
		posted on 2/2/2006 at 4:42 AM
		</div>
		<div class="comment_text"><p>Great tip!</p><p>Jus checking out your Lighthouse app, great stuff there too!</p><p>MD</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649766">2</a> by David Harris
		posted on 2/2/2006 at 5:27 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>that was quick! I asked the question...</p><p>It's from with-in a CFC and I still feel uneasy about cfincluding in a CFC.<br>What I did in the end was a *gulp* evaluate.</p><p>so the code ended up like this...</p><p>qMyQuery = false;</p><p>iCFMajorRelease = listFirst(server.ColdFusion.ProductVersion,",");</p><p>if(iCFMajorRelease LT 7){</p><p>qMyQuery = queryNew("oneColumn,twoColumn");</p><p>} else {</p><p>sCF7 = 'queryNew("oneColumn,twoColumn","CF_SQL_VARCHAR, CF_SQL_VARCHAR")';</p><p>qMyQuery = evaluate(sCF7);</p><p>}</p><p>Thanks for your response!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649767">3</a> by Dan G. Switzer, II
		posted on 2/2/2006 at 9:51 PM
		</div>
		<div class="comment_text"><p>One way to address this problem is to create some custom UDF libraries that replace the existing CF functionality. You can then load the correct library depending on the version of CF you're using.</p><p>So, instead of using the built-in queryNew(), you'd write a UDF called createQuery() (or whatever name you prefer--you could use queryNewUDF() or some nomeniclature that indicates it's a custom version of an existing function.)</p><p>You could also encapsulate this idea into a CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649772">4</a> by Raymond Camden
		posted on 2/2/2006 at 9:53 PM
		</div>
		<div class="comment_text"><p>Dan, that is a darn good idea. In my case, the last time I did it it wasn't functionality per se - I was hiding a whole section form BD, but for the reader's post, your idea is dead on perfect.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649770">5</a> by David Harris
		posted on 2/3/2006 at 12:21 AM
		</div>
		<div class="comment_text"><p>Thanks for the suggestion Dan.<br>We just needed to hear that about the time CF7 was released!<br>Hind site is 20-20!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649774">6</a> by john smoltz
		posted on 2/3/2006 at 12:37 AM
		</div>
		<div class="comment_text"><p>I'm a little confused...how would the queryNewUDF() indicate that it is a custom function of an existing function?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649761">7</a> by Raymond Camden
		posted on 2/3/2006 at 12:40 AM
		</div>
		<div class="comment_text"><p>The UDF would handle the branching logic - ie, if cf6, do this, else do that. It is basically a wrapper.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649759">8</a> by Robert Everland III
		posted on 2/3/2006 at 6:51 PM
		</div>
		<div class="comment_text"><p>I had issues like this when I was doing the conversion of Lighthouse. The biggest issue for me is the tag differences. If there is even one attribute different it will throw an error and you can't try or catch the error because CF doesn't handle it. Would having logic for a UDF or a CFC that says</p><p>if CF 6<br> createobject(cf6)<br>else<br> createobject(cf7)</p><p>Or would that compile them both?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649776">9</a> by Rich Rein
		posted on 2/8/2006 at 1:47 AM
		</div>
		<div class="comment_text"><p>At the risk of sounding too proud of stating the obvious, why not just use the code that works in 6 (and presumably in 7)?</p><p>qMyQuery = queryNew("oneColumn,twoColumn");</p><p>In our shop, we have mx6.1 in system test and production, and 2/3 of our developers use the same.  I have been on various iterations of mx7 for about a year or so now, and the only gotcha that has hit me was in using tag help based on mx7 (I believe it was an extra attribute to the cffile tag which mx6 choked on).  Until we move to 7 in production, I have to continue to code to mx6 and watch myself on a few new features in 7, but I have yet to run into a problem (at least with most basic tags) where something that works in 6 did not work in 7.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649763">10</a> by Raymond Camden
		posted on 2/8/2006 at 4:32 AM
		</div>
		<div class="comment_text"><p>In the simple case you described, my method is probably overkill, but it does work well for bigger cases, like where I wnted to support BlueDragon in my code and had to hide the charts.</p></div>
	</div>
</div>
		