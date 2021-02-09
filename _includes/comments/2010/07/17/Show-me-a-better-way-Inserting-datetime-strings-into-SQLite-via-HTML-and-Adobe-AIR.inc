
<div class="comment" id="c_1713725404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725404">1</a> by Gareth Arch
		posted on 7/17/2010 at 10:35 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fflexdateutils.riaforge.org%3A5zSezltKHcqn3EnMjkbc1I8roVo&amp;cuid=3321886" rel="nofollow noopener" title="flexdateutils.riaforge.org">flexdateutils.riaforge.org</a> ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725405">2</a> by Jason Dean
		posted on 7/17/2010 at 10:44 PM
		</div>
		<div class="comment_text"><p>How about:</p><p> var sql = <br>     "insert into notes(title, body,created)"+<br>     "values(:title,:body,date(:created))";</p><p> sqlstatement.text = sql<br> sqlstatement.parameters[":title"] = title;<br> sqlstatement.parameters[":body"] = body;<br>  sqlstatement.parameters[":created"] = "now";</p><p>One other thing to consider is that you can tell SQLite to have a default date of "now" for any new record. The caveat is that you MUST set it up when you create the Table.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725406">3</a> by Raymond Camden
		posted on 7/17/2010 at 10:49 PM
		</div>
		<div class="comment_text"><p>@Gareth: That's Flex based though. You can call functions inside SWFs from HTML AIR apps (just learned about that this week!), but I don't think I want to go that way. As it stands, in a Flex app, you don't need to do this! You just pass a date (like I tried in JS) and it works.</p><p>@Jason: The literal now? No way that will work. (But I'll try it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725409">4</a> by Raymond Camden
		posted on 7/17/2010 at 10:51 PM
		</div>
		<div class="comment_text"><p>@Jason: WTF. Get this. It worked... but was 5 hours off.</p><p>2010-07-17 18:51:02 (6 pm, it's 1pm for me)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725407">5</a> by Raymond Camden
		posted on 7/17/2010 at 10:52 PM
		</div>
		<div class="comment_text"><p>My times are all GMT-0500, so it looks like now works but is not respecting the -5.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725410">6</a> by Raymond Camden
		posted on 7/17/2010 at 10:53 PM
		</div>
		<div class="comment_text"><p>Ok, so Jason isn't crazy. "now" as a string is documented here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.sqlite.org%2Flang_datefunc.html%3AJtgj6Dqa9METQMbIbrG4Kimj8mM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sqlite.org/lang_datefunc.html">http://www.sqlite.org/lang_...</a></p><p>So the question is - how do I store it so that when I _get_ it, it's the right TZ.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725423">7</a> by Jason Dean
		posted on 7/17/2010 at 11:14 PM
		</div>
		<div class="comment_text"><p>OK, how about this:</p><p>var sql = <br>"insert into notes(title, body,created)"+<br>"values(:title,:body,datetime(:created, :modifier))";</p><p>sqlstatement.text = sql<br>sqlstatement.parameters[":title"] = title;<br>sqlstatement.parameters[":body"] = body;<br>sqlstatement.parameters[":created"] = "now";<br>sqlstatement.parameters[":modifier"] = "localtime";</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725422">8</a> by Jason Dean
		posted on 7/17/2010 at 11:24 PM
		</div>
		<div class="comment_text"><p>By the way, as I indicated earlier, you can skip this completely and just have the column automatically default to the current timestamp. That way any new entry is already stamped with a creation date. But you MUST do it when you create the table. As I have read it, and tried it, you cannot ALTER the table later to do it.</p><p>Here is how you would create the table.</p><p>CREATE TABLE myDates (id NUMBER, myDate DATE DEFAULT (datetime('now','localtime')));</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725426">9</a> by emzeth
		posted on 7/17/2010 at 11:37 PM
		</div>
		<div class="comment_text"><p>thakn's, for the information...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725421">10</a> by Raymond Camden
		posted on 7/18/2010 at 12:07 AM
		</div>
		<div class="comment_text"><p>Jason - you are the rock star. Not a rock star - the rock star. I wasn't aware bound parameters could be used as values of functions in SQL. Works like a charm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725425">11</a> by Jason Dean
		posted on 7/18/2010 at 12:09 AM
		</div>
		<div class="comment_text"><p>sweeeet!  Glad to hear that was what you were looking for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725428">12</a> by Murray Hopkins
		posted on 7/18/2010 at 2:24 AM
		</div>
		<div class="comment_text"><p>And just in case people dont know about it, I find this FireFox extension for managing sqlite databases invaluable:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fsqlite-manager%2F%3A-nGg_8FxTOYQLVGnnb9qKC73Qkk&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/sqlite-manager/">http://code.google.com/p/sq...</a></p><p>Cheers,<br>Murray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725429">13</a> by Mark
		posted on 7/29/2010 at 2:17 AM
		</div>
		<div class="comment_text"><p>Way Cool!</p></div>
	</div>
</div>
		