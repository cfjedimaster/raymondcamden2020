
<div class="comment" id="c_1713654330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654330">1</a> by dickbob
		posted on 6/21/2006 at 4:04 PM
		</div>
		<div class="comment_text"><p>Or you could just use QuotedValueList()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654333">2</a> by Raymond Camden
		posted on 6/21/2006 at 4:09 PM
		</div>
		<div class="comment_text"><p>Duh. Can I blame the coffee for missing that? I like to tell people to read the function/tag list every now and then just to refresh your memory. I need to heed my own advice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654332">3</a> by Raymond Camden
		posted on 6/21/2006 at 4:09 PM
		</div>
		<div class="comment_text"><p>Although, to be fair, that function forces you to use single quotes. If you wanted control over the "wrapper", you would need to use listQualify.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654334">4</a> by Phillip Senn
		posted on 6/21/2006 at 5:00 PM
		</div>
		<div class="comment_text"><p>Wow Ray! This entry has unbelievable timing!<br>Just yesterday I wrote a function that required a string argument for the IN clause.<br>Now instead of passing "'A','B','C'", I can pass "A,B,C".<br>QuotedValueList expects a query column, whereas ListQualify can work with a string.</p><p>One other thing to keep in mind is it's sometimes necessary to use #preserveSingleQuotes(SQLstr)# instead of #SQLstr# inside a &lt;cfquery&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654335">5</a> by Raymond Camden
		posted on 6/21/2006 at 5:05 PM
		</div>
		<div class="comment_text"><p>Phil, if you use cfqueryparam, you don't need to worry. If X is a list of items like so: a,b,c</p><p>Then you can pass it as is to cfqueryparam, and use the list=true attribute.</p><p>I use this all the time for IN clauses.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654336">6</a> by Phillip Senn
		posted on 6/21/2006 at 5:25 PM
		</div>
		<div class="comment_text"><p>Well............<br>I rarely use cfquery anymore.<br>I pass parameters to a stored procedure that <br>A. Logs the SQL stmt to be run (along with who's attempting to run it). <br>B. Checks to see if that person has rights for what they're trying to do.<br>C. If so, it runs the SQL stmt and<br>D. Logs that the SQL stmt ran successfully (There was no @@Error condition)<br>E. If it's an INSERT, the stored procedure then does a SELECT on SCOPE_IDENTITY so that the defaults are returned.</p><p>I should blog about all this one day (after cfUnited).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654338">7</a> by Tony Petruzzi
		posted on 6/21/2006 at 9:02 PM
		</div>
		<div class="comment_text"><p>@Phillip</p><p>Please don't think that I'm being a wisea**, but why are you doing this inside a stored procedure? You are creating additional work for yourself and putting additional load on your server that can be totally avoided by using SQL Profiler. You can filter the data you want to capture using the events and filters tab. Additional you can have the output saved into a table on a seperate SQL server so you can perform queries against it.</p><p>Also you can grab the SCOPE_IDENTITY from within cfquery by just putting in on additional line in your statement:</p><p>&lt;cfquery name="q" datasource="#dsn#"&gt;<br>INSERT INTO TABLE<br>(col1)<br>VALUES('something')</p><p>SELECT SCOPE_IDENTITY() AS id<br>&lt;/cfquery&gt;</p><p>&lt;cfoutput&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Fq.id%3AZrq8QCNRress3lmAtRCeR-7VUIc&amp;cuid=3321886" rel="nofollow noopener" title="q.id">q.id</a>#&lt;/cfoutput&gt;</p><p>I'm not saying what you're doing is wrong, I'm just saying that if you use the tools that are already avaiable to you, you can avoid a tremendous amount of work and capture more percise information. Readup and play with SQL Profiler, it's an invaluable tool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654337">8</a> by Tony Petruzzi
		posted on 6/21/2006 at 9:04 PM
		</div>
		<div class="comment_text"><p>BTW, I should also mention that by using SQL Profile it doesn't add any load to the server that you are profiling. It works just like a packet sniffer for SQL Server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654343">9</a> by Phillip Senn
		posted on 6/22/2006 at 12:57 AM
		</div>
		<div class="comment_text"><p>Tony,</p><p>Thanks for the advice.<br>I will look into it, definately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654341">10</a> by tof
		posted on 6/22/2006 at 4:09 AM
		</div>
		<div class="comment_text"><p>Tony,</p><p>Using "select scope_identity() as" or "SELECT @@Identity AS" can crash if you don't turn no count on. like so:</p><p>SET NOCOUNT ON</p><p>INSERT INTO...<br>VALUES (...)</p><p>SELECT @@Identity AS newId</p><p>SET NOCOUNT OFF</p><p>But i'm with you I use it all the time. It's much better than setting a transaction and getting the max(id), or worse having an extra unique ID in your table that you generate before the insert, and re-use to get the new ID.</p><p>Tof</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654339">11</a> by tony weeg
		posted on 6/22/2006 at 5:18 PM
		</div>
		<div class="comment_text"><p>i was always taught that if the select list comprises a large amount of the columns, that * would be best to use.  if you are selecting 5 out of 30 columns, yes, then naming is best.  was i taught wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654344">12</a> by Raymond Camden
		posted on 6/22/2006 at 5:23 PM
		</div>
		<div class="comment_text"><p>Yes. I'm no DBA, but I've been told that select * is never a good idea. Now - I wouldn't be too concerned about it. I doubt the performance impact will matter for 99.99% of us, but still.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654342">13</a> by Tony Petruzzi
		posted on 6/22/2006 at 11:41 PM
		</div>
		<div class="comment_text"><p>@tony</p><p>It doesn't matter if you use SELECT * or name every column when you are selecting all the columns in a table, they yield the EXACT same execution plan. (if you don't believe me, test it out for yourself.) Thus there is NO PERFORMACE DIFFERENCE between the two. Again, this is ONLY if you are selecting every column in the database.</p><p>The bottom line is that SELECT * is a matter of perference. Some like to use it and some don't, I don't. So whoever tells you that using it to select all the columns in a table is a bad idea and causes performance hits, is lying through their teeth to push their opinion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654340">14</a> by Raymond Camden
		posted on 6/22/2006 at 11:43 PM
		</div>
		<div class="comment_text"><p>Tony, interesting. I'd probably still recommend against it for a readability perspective.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654346">15</a> by tony weeg
		posted on 6/22/2006 at 11:46 PM
		</div>
		<div class="comment_text"><p>i use the list of fields, unless its like 3 columns, and they are the only three, and i need all three.</p><p>having them listed out makes it easier to reference them in code if you can see them in the same screen as the screen you are on. i believe ya a 100% that it doesnt matter, and im sure the person was being honest and true, just his opinion.</p><p>oddly enough it was a Microsh*t DBA person teaching a class I was in learning SQL and SQL Admin like 4 years ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654345">16</a> by Paul
		posted on 2/27/2012 at 11:25 PM
		</div>
		<div class="comment_text"><p>"Phil, if you use cfqueryparam, you don't need to worry. If X is a list of items like so: a,b,c..."</p><p>Bingo!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654347">17</a> by Shannon Ryan
		posted on 10/5/2012 at 7:51 PM
		</div>
		<div class="comment_text"><p>Raymond, just wanted to say thanks. I often get awesome info off your blog.</p><p>I wasn't even aware this function existed, and it worked like a charm. It's a very elegant solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654354">18</a> by Raymond Camden
		posted on 10/5/2012 at 7:58 PM
		</div>
		<div class="comment_text"><p>Wow, this was an old blog entry. :) Glad it helped you, Shannon!</p></div>
	</div>
</div>
		