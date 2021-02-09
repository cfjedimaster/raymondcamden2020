
<div class="comment" id="c_1713617944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617944">1</a> by Peter J. Farrell
		posted on 4/14/2005 at 12:23 AM
		</div>
		<div class="comment_text"><p>The worst error is:<br>"unspecified error occured at line     "</p><p>I always have a laugh at that one ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617943">2</a> by Joe Rinehart
		posted on 4/14/2005 at 12:36 AM
		</div>
		<div class="comment_text"><p>I liked the "_0123456789neverusethisasavariablenameinyourcode" (or something similar) that CF5 (I think, maybe 4.5) and previous versions would give under the right conditions.</p><p>Also, there was one about a jedi master (Ray?) in the CF5.0 admin somewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617942">3</a> by Ray Camden
		posted on 4/14/2005 at 1:35 AM
		</div>
		<div class="comment_text"><p>jedimasterwhoppersupreme. Yep, that was me. I was trying to sort a struct by two keys. It was rather silly of me. I could have converted the data to a query and just did QofQ.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617940">4</a> by dave ross
		posted on 4/14/2005 at 5:29 AM
		</div>
		<div class="comment_text"><p>yeah this issue has reared it's ugly head for me before. It happens when you change a db schema (e.g. add a field) and are using wildcard operators in SQL  coupled with cfqueryparam. One quick way to get rid of the error is to add a space to the end of the sql string.</p><p>This is one bug I sometimes appreciate, because it reminds me to NOT use wildcards in my SQL...even though I still do, it's just less often.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617957">5</a> by Daniel Short
		posted on 4/14/2005 at 6:01 AM
		</div>
		<div class="comment_text"><p>During my "I can't get Application.cfc to extend Application.cfc" debacle, I tried adding a &lt;cfapplication&gt; tag to my Application.cfc. I got 5 &gt;=1... Like I didn't already know that...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617946">6</a> by Giampaolo Bellavite
		posted on 4/14/2005 at 12:14 PM
		</div>
		<div class="comment_text"><p>Often I get this error live changing a view or a table in SQL Server. Never thought it was the cfqueryparam or the pooled statements setting. Great tip, thank you :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617947">7</a> by Daniel Roberts
		posted on 4/14/2005 at 6:39 PM
		</div>
		<div class="comment_text"><p>The [Unknown Exception] error was driving me crazy for a while, then I had the bright idea to search Macromedia's site for known issues and found a Hotfix...woohoo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617949">8</a> by chris
		posted on 4/14/2005 at 6:49 PM
		</div>
		<div class="comment_text"><p>I was getting a 4096 error for awhile.  Anyone ever had that come up?  It went away, but I would really like to know what was causing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617948">9</a> by ben nadel
		posted on 4/16/2005 at 8:00 PM
		</div>
		<div class="comment_text"><p>I get that 17 &gt;= 17 error all the time. I find what works for me every single time is go into CFAdmin and turn of "Maintain connection" on the data source. I usually get this error after i alter the datatable. Its like the system caches the db connection and structure or something. I don't really know about this stuff, but in the development server i tend to leave that turned off all the time and i never get that issue at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617941">10</a> by J Ditty
		posted on 12/14/2005 at 11:42 PM
		</div>
		<div class="comment_text"><p>With Robust error reporting off I think I've got an even better one.</p><p>" Error Occurred While Processing Request: 9 "</p><p>With robust error reporting on I'm still just as baffled:</p><p>java.lang.ArrayIndexOutOfBoundsException: 9</p><p>I'm trying to use the administrator API, setting a MySQL datasource.  It craps out everytime I try to set the password.  I can't find any info on this, kind of looks like a bug / driver JDBC issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617945">11</a> by Brent Gravelle
		posted on 10/17/2006 at 11:40 PM
		</div>
		<div class="comment_text"><p>I keep getting these oracle errors that are causing our server to hang, we're running CFMX7 connecting to an Oracle 10g database. Thinking of fidling with the MAX POOLED STATEMENTS, TIMEOUT, INTERVAL settings, but I'm not sure if that will do anything. If anyone can give me some advice it would be greatly appreciated!!</p><p>Errors like:<br>"Error Executing Database Query.[Macromedia][Oracle JDBC Driver][Oracle]ORA-01407: cannot update (""XXX"".""X_FORM_DOCS"".""X_TITLE"") to NULL</p><p>AND</p><p>"Error Executing Database Query.[Macromedia][Oracle JDBC Driver][Oracle]ORA-00911: invalid character</p></div>
	</div>
</div>
		