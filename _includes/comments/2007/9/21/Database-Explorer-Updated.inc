
<div class="comment" id="c_1713672081">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672081">1</a> by Aaron Longnion
		posted on 9/21/2007 at 11:49 PM
		</div>
		<div class="comment_text"><p>it's cool, but <a href="http://disq.us/url?url=http%3A%2F%2Fdbx.riaforge.org%2F%3AXIzG_82G7iwywACR5Lp3vwsQL0Q&amp;cuid=3321886" rel="nofollow noopener" title="http://dbx.riaforge.org/">http://dbx.riaforge.org/</a> is much more feature-rich (for SQL 2000 and 2005 at least) and supports MX 6.1+ instead of CF 8 only...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672085">2</a> by Pat Buchanan
		posted on 9/22/2007 at 1:54 AM
		</div>
		<div class="comment_text"><p>For those of us that use multiple backends, such as Oracle, SQL Server, Access, etc - this is much nicer than DBX.  Just my 2 cents, and but thanks for the info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672084">3</a> by Michael Kirby
		posted on 9/26/2007 at 2:38 AM
		</div>
		<div class="comment_text"><p>It looks great but when I try to use it on my CF8 installation, I get logged into the Administrator and choose a datasource.  It shows the table names on the left but nothing else.  I try the page with ?cfdebug and I can see where a<br> info:widget: Firing selection change event for tree id: tabletree<br>is firing but nothing is showing up.  No field names, nothing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672091">4</a> by Raymond Camden
		posted on 9/26/2007 at 5:13 PM
		</div>
		<div class="comment_text"><p>Odd. Feel like digging into the code to see if anything is up? Also - maybe add some cflog - ensure that cfdbinfo is actually finding the column names.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672086">5</a> by Michael Kirby
		posted on 9/26/2007 at 5:22 PM
		</div>
		<div class="comment_text"><p>Absolutely, where would be the best use of cflog?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672089">6</a> by Raymond Camden
		posted on 9/26/2007 at 5:32 PM
		</div>
		<div class="comment_text"><p>Look where I get the cols - and perhaps just log the # of records returned in the query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672090">7</a> by Michael Kirby
		posted on 9/26/2007 at 6:08 PM
		</div>
		<div class="comment_text"><p>Hate to say it, but you're dealing with a relative nubbie.  I put <br>   &lt;cflog text="#cols#" file="db-cols"&gt;<br>after the</p><p>    &lt;cfdbinfo datasource="#session.dsn#" type="columns" table="#table_name#" name="cols"&gt;</p><p>line.  I logout and log back in and try to access the tables and no log file shows up.</p><p>Where would the log files be for the YAHOO widget??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672087">8</a> by Tony Garcia
		posted on 9/27/2007 at 6:59 PM
		</div>
		<div class="comment_text"><p>Another newb here with the same problem as Michael -- can't browse the tables at all. The Ajax Debug Log window isn't turning up any errors.<br>Don't know if this has anything to do with it, but sometimes (when I use the 'forward' and 'back' buttons on the browser) I get a popup window with this message: "Error processing JavaScript in markup for element main: [Enable debugging by adding 'cfdebug' to your URL perameters to see more information]" But, like Michael, adding cfdebug isn't giving me any info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672094">9</a> by Raymond Camden
		posted on 9/28/2007 at 2:35 AM
		</div>
		<div class="comment_text"><p>All I can think of is to try a script using &lt;cfdbinfo&gt; on the dsn. See if it works outside my application.</p></div>
	</div>
</div>
		