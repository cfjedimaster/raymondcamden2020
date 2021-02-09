
<div class="comment" id="c_1713718565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718565">1</a> by Sean Coyne
		posted on 9/24/2009 at 5:41 PM
		</div>
		<div class="comment_text"><p>Ray, I think you forgot an end [/code] tag</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718567">2</a> by Raymond Camden
		posted on 9/24/2009 at 5:42 PM
		</div>
		<div class="comment_text"><p>Thanks. Remind me not to blog until I've had my 5 cups of coffee.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718568">3</a> by Dan Wilson
		posted on 9/24/2009 at 5:59 PM
		</div>
		<div class="comment_text"><p>Odd. It must be the driver. SQLLite (when used in an AIR context) supports prepared statements. Here is a code sample of how to do that:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.nodans.com%2Findex.cfm%2F2007%2F10%2F31%2FFixed-error-in-SQLLite-Administration-tool%3Ar6bKbo9nLmd0EQoB6u717xK6jCg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.nodans.com/index.cfm/2007/10/31/Fixed-error-in-SQLLite-Administration-tool">http://www.nodans.com/index...</a></p><p>DW</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718570">4</a> by Raymond Camden
		posted on 9/24/2009 at 6:02 PM
		</div>
		<div class="comment_text"><p>Yeah, definitely, and thanks Dan, I should have made it clear that AIR had no problems doing prepared crap with SQLite.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718571">5</a> by Terry Collinson
		posted on 4/25/2011 at 4:58 PM
		</div>
		<div class="comment_text"><p>I get this error when trying to create the datasource<br>"java.sql.SQLException: No suitable driver available for Test, please check the driver setting in resources file, error: org.sqlite.JDBC The root cause was that: java.sql.SQLException: No suitable driver available for Test, please check the driver setting in resources file, error: org.sqlite.JDBC".<br>I am a bit confused what to do with jar file. The classes directory contains classes but the lib directory jar files. As ever late to the show and struggling to throw a six</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718573">6</a> by Raymond Camden
		posted on 4/25/2011 at 5:27 PM
		</div>
		<div class="comment_text"><p>Try going to your CF Admin, Server Settings - Java and JVM - and adding a folder to your ColdFusion Class Path. Put the jar there. Restart CF. Try again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718572">7</a> by Brendan Kidwell
		posted on 5/22/2011 at 12:11 AM
		</div>
		<div class="comment_text"><p>Raymond, thanks for sharing this trick to get me started.</p><p>I wrote a library that handles setting up and mapping a SQLite database filename to a ColdFusion data source -- you can call it from the Application.onRequestStart() event. <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fbkidwell%2Fcfsqlite%3AVmIQxw8VGUWiYfUxF7SSzejj3Mg&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/bkidwell/cfsqlite">https://github.com/bkidwell...</a> . To anyone who wants to use an SQLite databse in a CF app, I hope this helps!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718574">8</a> by Raymond Camden
		posted on 5/22/2011 at 1:12 AM
		</div>
		<div class="comment_text"><p>You should submit it to RIAForge too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718577">9</a> by Brendan Kidwell
		posted on 5/23/2011 at 4:09 AM
		</div>
		<div class="comment_text"><p>&gt; You should submit it to RIAForge too.</p><p>Done. (But I expect it won't appear until it makes its way through the submission queue.) Thanks for prompting me to submit it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718575">10</a> by Raymond Camden
		posted on 5/23/2011 at 7:12 AM
		</div>
		<div class="comment_text"><p>I know the guy who runs RIAForge. I'll yell at em.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718576">11</a> by Shawn Grigson
		posted on 4/19/2012 at 7:17 AM
		</div>
		<div class="comment_text"><p>Thanks for the notice of cfsqlite, Brendan!  As it turns out, I started the project on RIAForge of SQLiteCFC for a slightly different purpose:  Directly connecting to sqlite dbs without a datasource, and also for converting CF queries into sqlite tables (several convenience functions for that).  It also reads CSV files and converts them to sqlite.  I find SQLite very convenient as a caching mechanism using the sqlitecfc--far better performance than JSON or WDDX, and more queryable (obviously).</p><p>I encourage you to check it out.  It's fun, say, reading from a view on a database, dumping the records into a sqlite file, and then downloading it to export discrete slices of data for mobile purposes.  The loose datatyping of sqlite is also handy and fits in handily with the loose datatyping of CF, too.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsqlitecfc.riaforge.org%3AJvzCps3GF0IcyclynX0Vne15474&amp;cuid=3321886" rel="nofollow noopener" title="http://sqlitecfc.riaforge.org">http://sqlitecfc.riaforge.org</a></p></div>
	</div>
</div>
		