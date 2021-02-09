
<div class="comment" id="c_1713734014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734014">1</a> by Robert Zehnder
		posted on 7/1/2011 at 8:43 PM
		</div>
		<div class="comment_text"><p>Yeah, I probably shouldn't publicly admit this, but generally I abs() the difference to make sure it is a positive number, especially if I am just checking the difference in days and don't care if it is days before or days after.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734013">2</a> by Sharon
		posted on 7/1/2011 at 9:15 PM
		</div>
		<div class="comment_text"><p>Seeing as the topic is dates and unexpected behavior, I've gotten caught in the "#isDate(dateVar)#" function because CF is *very* forgiving about what constitutes a date.  CF liked it, but the date still needed to be separately validated and formatted for anything outside of CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734011">3</a> by PaulH
		posted on 7/1/2011 at 9:57 PM
		</div>
		<div class="comment_text"><p>since cf datetimes are decimal days, you could also do something like int(d1)-int(d2).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734018">4</a> by Phillip Senn
		posted on 7/1/2011 at 10:18 PM
		</div>
		<div class="comment_text"><p>In Microsoft SQL Server, select DateDiff(d,'6/21/2011 18:09:06','6/22/2011')<br>yields 1.<br>Also notice that the d is not inside quotation marks because the syntax for SQL Server is different from ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734012">5</a> by Richard Hefter
		posted on 7/1/2011 at 10:57 PM
		</div>
		<div class="comment_text"><p>As the goofball who recommended this topic to Ray, I just want to clarify.  No mater what date part you are subtracting, DateDiff uses the time.  So 1/22/2011 2pm to 1/22/2012 1pm is 0 years,  11 months etc.  My solution was to use a Dateformat on the "from date" which can eliminate the time.  It's not technically a date object but ColdFusion is very kind with it's typeless nature and treats it like one.</p><p>Ray: FYI.  12 midnight is the beginning of a new day (happy new year at 12 midnight).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734015">6</a> by Raymond Camden
		posted on 7/1/2011 at 10:59 PM
		</div>
		<div class="comment_text"><p>Ah yeah - that does make sense. So the end of the day is 11:59:59:999 PM. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734017">7</a> by Grumpy CFer
		posted on 7/6/2011 at 2:17 PM
		</div>
		<div class="comment_text"><p>I think it's generally accepted that 2011-06-06 24:00:00 is the exact same moment as 2011-06-07 00:00:00.  People tend not to use 24, tho.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FISO_8601%23Times%3A4DyltKZMHATfyNG4ZOmJjry9plM&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/ISO_8601#Times">http://en.wikipedia.org/wik...</a> has a mention of midnight.</p><p>I also DateFormat to get rid of times instead of CreateDate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2059885012">
	<div>
		<img src="https://disqus.com/api/users/avatars/gfbj.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2059885012">8</a> by gfbj
		posted on 6/3/2015 at 2:16 PM
		</div>
		<div class="comment_text"><p>I needed to use a date no later than today. This works for me: &lt;cfif 10*(tenddate-now())="" gt="" 1="" gt="" 0=""&gt;&lt;cfset tenddate="dateFormat(now()," "mm="" dd="" yyyy")=""&gt;&lt;/cfif&gt;</p></div>
	</div>
</div>
		