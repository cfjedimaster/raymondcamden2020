
<div class="comment" id="c_1713681282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681282">1</a> by Stefan
		posted on 5/30/2008 at 7:22 PM
		</div>
		<div class="comment_text"><p>An other way is to enable the "Enable Request Debugging Output" in the CF-Administrator --&gt; Debugging with the option "Database Activity".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681283">2</a> by Raul Riera
		posted on 5/30/2008 at 7:38 PM
		</div>
		<div class="comment_text"><p>The other method would be to use that thing SOMEONE did for FireBug :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681285">3</a> by Raymond Camden
		posted on 5/30/2008 at 7:43 PM
		</div>
		<div class="comment_text"><p>To both your comments - it was my impression he wanted the SQL for code reasons, not debugging.</p><p>If he wants it for debugging, you can just dump it. Even easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681286">4</a> by Doug
		posted on 5/30/2008 at 8:14 PM
		</div>
		<div class="comment_text"><p>awesome!!</p><p>I was working on a fairly complicated query awhile back. It had a bunch of LEFT JOINS and was pulling data from multiple tables. It wasn't throwing and error, but it wasn't returning the results I expected, so I was looking for a way to see the SQL string that was generated.</p><p>Also, most of my clients are on shared hosting, so I don't have access to any ColdFusion admin stuff.</p><p>Thanks Ray, you made my Friday!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681297">5</a> by TomdeMan
		posted on 5/30/2008 at 8:54 PM
		</div>
		<div class="comment_text"><p>There is one other way a co-worker of mine showed me not too long ago. Throw an abort inside the CFQUERY. I posted about it &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Ftomdeman.com%2Fblog%2F2008%2F2%2F1%2FGetting-more-then-just-records-from-CFQUERY-in-CF7-and-CF8%3Art7_jgbAdVy7EkLKqoPZGYYBGKo&amp;cuid=3321886" rel="nofollow noopener" title="http://tomdeman.com/blog/2008/2/1/Getting-more-then-just-records-from-CFQUERY-in-CF7-and-CF8">http://tomdeman.com/blog/20...</a>"&gt;here &lt;/a&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681296">6</a> by TomdeMan
		posted on 5/30/2008 at 8:55 PM
		</div>
		<div class="comment_text"><p>sorry bad link - <a href="http://disq.us/url?url=http%3A%2F%2Ftomdeman.com%2Fblog%2F2008%2F2%2F1%2FGetting-more-then-just-records-from-CFQUERY-in-CF7-and-CF8%3Art7_jgbAdVy7EkLKqoPZGYYBGKo&amp;cuid=3321886" rel="nofollow noopener" title="http://tomdeman.com/blog/2008/2/1/Getting-more-then-just-records-from-CFQUERY-in-CF7-and-CF8">http://tomdeman.com/blog/20...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681298">7</a> by Frederic Fortier
		posted on 5/31/2008 at 9:54 PM
		</div>
		<div class="comment_text"><p>Something I also do is for viewing super quickly what was generated in the cfquery is to put an cfabort right before the end of the cfquery,</p><p>Like that</p><p>&lt;cfquery&gt;<br>     "the query"<br>&lt;cfabort&gt;<br>&lt;/cfquery&gt;</p><p>That is of course if you just want to have what was generated between the cfquery tags</p><p>also you can add a &lt;pre&gt;&lt;/pre&gt; around that, to keep to formating.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681302">8</a> by Peter Hoopes
		posted on 6/3/2008 at 12:24 AM
		</div>
		<div class="comment_text"><p>This is what I use CFDUMP for. &lt;cfdump var="#queryvar#"&gt; and it shows the query and the data received.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681303">9</a> by Ryan
		posted on 6/4/2008 at 12:25 AM
		</div>
		<div class="comment_text"><p>Is there a similar way to get the SQL in an insert/update/delete type query?  I assume the solutions above (except for the cfabort) only work on Select queries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681304">10</a> by Raymond Camden
		posted on 6/4/2008 at 12:30 AM
		</div>
		<div class="comment_text"><p>No, I believe it works for all. Did you try? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681305">11</a> by ike
		posted on 6/7/2008 at 7:07 AM
		</div>
		<div class="comment_text"><p>One of the things I like personally about the SQL abstraction layer I built into the onTap framework (yes I'm biased) is that in addition to imo just plain nice syntax that allows you to do a lot of things easily that would be rather difficult with standard ad-hoc queries, is that once you've configured your SQL statement object, you can output just the SQL it will generate easily by calling the getSyntax() method. I.e. &lt;cfoutput&gt;&lt;pre&gt;#datasource.getStatement("select").init("mytable").andOrFilter("some,columns",<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>).getSyntax()#&lt;/pre&gt;&lt;/cfoutput&gt;</p><p>It's useful for generating SQL scripts and other automation type tasks like Ray mentioned.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681308">12</a> by dcs
		posted on 4/7/2009 at 12:49 AM
		</div>
		<div class="comment_text"><p>I wanted to take time out and thank you for this. I used it to execute a query that I had already executed previously (getting different results the second time, of course ;) as there were queries in between).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681307">13</a> by Chris Ulrich
		posted on 5/7/2009 at 3:42 PM
		</div>
		<div class="comment_text"><p>Ray - I saw a technique you've posted using GetMetaData(queryname) - very neat.  Didn't know it existed.</p><p>When I CFDUMP it I get the field name, the data type, and in the order it appears in the table (unlike a CFDUMP of a query which alpha sorts the columns).  However, what I also need is the size of the field - varchar(50), char(6), etc...</p><p>I can see that it is not in the meta data.  Is there another way to retrieve this?</p><p>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681306">14</a> by Chris Ulrich
		posted on 5/7/2009 at 4:21 PM
		</div>
		<div class="comment_text"><p>Found it ... for those interested ...</p><p>SELECT column_name 'Column Name',<br>data_type 'Data Type',<br>CHARacter_maximum_length 'Maximum Length'<br>FROM information_schema.columns<br>WHERE table_name = 'table-name-here'</p><p>Couple that with a list of all of your tables:</p><p>select TABLE_NAME from INFORMATION_SCHEMA.[TABLES]</p><p>and you've got a quick and dirty inspector to look up your tables, field names, data types and sizes.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681309">15</a> by dcs
		posted on 5/7/2009 at 4:34 PM
		</div>
		<div class="comment_text"><p>That will work for MySQL but that sort of query is DBMS-specific. MS SQL Server has a set of system tables and accompanying stored procedures and views if you need to query them. (I haven't used MS SQL in a while so I don't recall the names.) Similarly in Oracle - you have views like ALL_TABLES, USER_TABLES, ALL_TAB_COLUMNS, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681311">16</a> by Chris Ulrich
		posted on 5/7/2009 at 6:47 PM
		</div>
		<div class="comment_text"><p>You're right ... I'm using SQL 2000 and 2005 and it works with both, but it may not work for other databases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681313">17</a> by Jeff Reese
		posted on 7/8/2014 at 2:41 AM
		</div>
		<div class="comment_text"><p>You can also do a cfdump with format="text" and it will dump the actual SQL that is generated, so you can paste it right into your sql tool and run it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681312">18</a> by Raymond Camden
		posted on 7/8/2014 at 4:51 AM
		</div>
		<div class="comment_text"><p>Regular CFDUMP in CF10 and higher shows SQL too.</p></div>
	</div>
</div>
		