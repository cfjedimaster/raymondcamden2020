
<div class="comment" id="c_1713618873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618873">1</a> by Steven Erat
		posted on 6/23/2005 at 9:02 PM
		</div>
		<div class="comment_text"><p>The closest, most recent bug for this is 57260 logged agains CFMX 6.1 Updater 1, and is still listed as open.  Its targeted for one of the future CFMX 7 bug fix buckets, probably to be done and rolled out in one of the cumulative updaters. The bug detail doesn't list anything that would be immediately useful to you, other than always keeping a backup copy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618874">2</a> by Tom Jordahl
		posted on 6/23/2005 at 10:37 PM
		</div>
		<div class="comment_text"><p>I fixed the null pointer exception for the CFMX7 updater.  Now we will fail more gracefully.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618880">3</a> by Raymond Camden
		posted on 6/23/2005 at 11:09 PM
		</div>
		<div class="comment_text"><p>Tom, I read this to say, "We make the error a bit nicer." Does that mean, though, you haven't fixed the issue that _causes_ the license file to 0 itself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618882">4</a> by Jeff Gladnick
		posted on 11/1/2005 at 7:31 PM
		</div>
		<div class="comment_text"><p>I have the same error 500 null on every page.  Can't get into administrator, no debug info at the bottom.</p><p>However, I checked the logs, and there is absolutely no indiciation taht something is messed up.  Do i have to reinstall?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618881">5</a> by MD
		posted on 8/8/2006 at 11:49 PM
		</div>
		<div class="comment_text"><p>I changed 1 of the bottom "false or true" settings in the adminconfig.xml in cf_root/lib/ folder and it works.<br>It cost me 3 days of hard work.<br>Don't ask me which one I changed, did so many changes and back but this is the file that works:(replace content of that file by this)<br>&lt;?xml version="1.0" encoding="UTF-8"?&gt;<br>&lt;setupconfig&gt;<br>    &lt;runsetupwizard&gt;false&lt;/runsetupwizard&gt;<br>    &lt;runmigrationwizard&gt;false&lt;/runmigrationwizard&gt;<br>    &lt;runmxmigrationwizard&gt;false&lt;/runmxmigrationwizard&gt;<br>    &lt;migratecf5&gt;false&lt;/migratecf5&gt;<br>    &lt;migratecf6&gt;false&lt;/migratecf6&gt;<br>    &lt;setupoptions&gt;<br>        &lt;sampleapps&gt;true&lt;/sampleapps&gt;<br>        &lt;odbc&gt;false&lt;/odbc&gt;<br>        &lt;enablerds&gt;true&lt;/enablerds&gt;<br>    &lt;/setupoptions&gt;<br>&lt;/setupconfig&gt;</p><p>P.S. on mac G5 PPC with CF 7.02 as standard and developpers mode.</p><p>Have fun and hope to save you a lot of work : )</p></div>
	</div>
</div>
		