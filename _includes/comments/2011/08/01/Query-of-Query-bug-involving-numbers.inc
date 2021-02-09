
<div class="comment" id="c_1713734454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734454">1</a> by Raymond Camden
		posted on 8/2/2011 at 1:40 AM
		</div>
		<div class="comment_text"><p>I filed this bug report: <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D87004%3AMx-BPD04Hc6ReCQHA3EhmCUmA1E&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=87004">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734455">2</a> by Andrew Scott
		posted on 8/2/2011 at 7:01 AM
		</div>
		<div class="comment_text"><p>This is not a bug, and something a lot of people including myself have fallen too. The problem is that unless you add the type of data it is, ColdFusion will assume it is something else.</p><p>So what you need to do is something like this.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Fhtmldocs%2Fhelp.html%3Fcontent%3Dusing_recordsets_8.html%3AjiEaezbXzSlM4H9s3GycHyCmBlo&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/htmldocs/help.html?content=using_recordsets_8.html">http://livedocs.adobe.com/c...</a></p><p>And when you add the type of data, the QoQ qill behave in the correct manner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734457">3</a> by Raymond Camden
		posted on 8/2/2011 at 7:03 AM
		</div>
		<div class="comment_text"><p>Eh? Isn't that what the code does? The very first line?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734460">4</a> by Andrew Scott
		posted on 8/2/2011 at 7:10 AM
		</div>
		<div class="comment_text"><p>Hmm, you are right how did I miss that :-(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734456">5</a> by Raymond Camden
		posted on 8/2/2011 at 7:10 AM
		</div>
		<div class="comment_text"><p>Yeah, I've never done that. Ever. (Um....)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734459">6</a> by Andreas Schuldhaus
		posted on 8/2/2011 at 10:27 AM
		</div>
		<div class="comment_text"><p>It's not the query itself that's to blame for the wrong sort, it's the way you populate the query rows.</p><p>In my experience, using querySetCell() takes perfectly care of the data type, while array notation obviously doesn't. For whatever reason.</p><p>&lt;cfset q = queryNew("number","decimal")&gt;<br>&lt;cfset queryAddRow(q, 5)&gt;<br>&lt;cfset querySetCell(q, "number", 10.1, 1)&gt;<br>&lt;!--- &lt;cfset queryAddRow(q)&gt; ---&gt;<br>&lt;cfset querySetCell(q, "number", 0.01, 2)&gt;<br>&lt;!--- &lt;cfset queryAddRow(q)&gt; ---&gt;<br>&lt;cfset querySetCell(q, "number", 22.75, 3)&gt;<br>&lt;!--- &lt;cfset queryAddRow(q)&gt; ---&gt;<br>&lt;cfset querySetCell(q, "number", 21.05, 4)&gt;<br>&lt;!--- &lt;cfset queryAddRow(q)&gt; ---&gt;<br>&lt;cfset querySetCell(q, "number", 8.33, 5)&gt;</p><p>&lt;cfquery name="q" dbtype="query"&gt;<br>SELECT number<br>FROM q<br>ORDER BY number<br>&lt;/cfquery&gt;</p><p>&lt;cfdump var="#q#"&gt;</p><p>This should work without the need of casting an tweaking in the select clause.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734461">7</a> by Raymond Camden
		posted on 8/2/2011 at 6:05 PM
		</div>
		<div class="comment_text"><p>Wow - you are right. I don't normally use the format above - that's how he sent me his test code. That must be why I haven't run into this before. Good find there Andreas!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734458">8</a> by Doug
		posted on 8/2/2011 at 6:54 PM
		</div>
		<div class="comment_text"><p>Hey Andreas, how come you commented out the add row lines?  (Or why were they there in the first place?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734464">9</a> by Raymond Camden
		posted on 8/2/2011 at 7:13 PM
		</div>
		<div class="comment_text"><p>You don't have to add the rows since 5 were added initially.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734463">10</a> by Andreas Schuldhaus
		posted on 8/2/2011 at 7:15 PM
		</div>
		<div class="comment_text"><p>@Doug No special meaning, in there. I realized right after pressing the post button, that I had forgotten to delete them. They were there in the first place, because in my scribble I first added line by line to the query and then did some refactoring and switched to adding 5 rows at once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734465">11</a> by Doug
		posted on 8/2/2011 at 7:24 PM
		</div>
		<div class="comment_text"><p>aha.  Thanks.</p><p>Yeah, I always thought QuerySet was kind of a nuisance, but you raise a good reason to make sure we are thorough when we're creating our own queries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734466">12</a> by Raymond Camden
		posted on 8/2/2011 at 7:37 PM
		</div>
		<div class="comment_text"><p>Back in the day Hal Helms (I believe) had a custom tag so you could do stuff like:</p><p>&lt;cf_newquery name="q"&gt;<br>id,name,age<br>1,Raymond,38<br>2,Jacob,9<br>&lt;/cf_newquery&gt;</p><p>Obviously not ideal, but for quick stuff it was simpler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734462">13</a> by Andreas Schuldhaus
		posted on 8/2/2011 at 8:26 PM
		</div>
		<div class="comment_text"><p>I agree! Hal's cf_querysim was a great and very useful tool. I even used it to import text data, such as e-mail addresses and the like and mainly for quickly populating dropdowns while developing an application. Some (read: more than I would admit :) of these sims survived the development process, have never been replaced by 'real' queries and are still in use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734469">14</a> by Raymond Camden
		posted on 8/2/2011 at 8:27 PM
		</div>
		<div class="comment_text"><p>I'm doing a presentation at RIAUnleashed - a 3 hour one on extending CF. In my custom tags section I'll mention this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734467">15</a> by Aaron Neff
		posted on 8/4/2011 at 3:12 AM
		</div>
		<div class="comment_text"><p>This trips me up sometimes, as I prefer fewer chars (array notation vs querySetCell). When used within a list of query cell assignments, querySetCell is an _ok_ workaround:</p><p>q.stringCol1[1] = "foo";<br>querySetCell(q, "numberCol", 10.1, 1);<br>q.stringCol2[1] = "bar";</p><p>However, querySetCell is not so helpful when it's just a single dynamic query cell assignment being looped over:</p><p>[begin loop]<br>q[colName][rowNum] = cellValue;<br>[end loop]</p><p>Also, when all columns are needed, "SELECT *" is shorter than "SELECT col1,col2,col3,CAST(col4 AS castType) AS Col4,..,col19,col20".</p><p>Array notation should respect query column datatype. (IMNSHO)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734470">16</a> by AXL
		posted on 8/6/2011 at 8:58 AM
		</div>
		<div class="comment_text"><p>This tip also helped a question that just came to the Japanese CFUG a couple of days ago.  The person was trying to insert a huge data into a database, but it seemed that the data was somehow truncated when retrieving.  So I tried to replicate the issue by using the following code.  It's basically creating a text that contains 50,000 letters and inserting it into a database, and then retrieving it.</p><p>&lt;cfset letters = "abcde"&gt;<br>&lt;cfset text = ''&gt;</p><p>&lt;cfloop index="i" from="1" to="10000"&gt;<br>  &lt;cfset text &amp;= letters&gt;<br>&lt;/cfloop&gt;</p><p>Text Length: &lt;cfoutput&gt;#len(text)#&lt;/cfoutput&gt;&lt;br /&gt;</p><p>&lt;cfquery name="qInsert" datasource="cfjp" result="result"&gt;<br>  INSERT INTO test(content)<br>  VALUES(&lt;cfqueryparam cfsqltype="cf_sql_longvarchar" value="#text#"&gt;)<br>&lt;/cfquery&gt;</p><p>Queryparam Length: &lt;cfoutput&gt;#len(result.sqlparameters[1])#&lt;/cfoutput&gt;&lt;br /&gt;</p><p>&lt;cfquery name="qRead" datasource="cfjp"&gt;<br>  SELECT content<br>  FROM test<br>  WHERE id = #result.identitycol#<br>&lt;/cfquery&gt;</p><p>Content Length: &lt;cfoutput&gt;#len(qRead.content)#&lt;/cfoutput&gt;</p><p>Then the output was:</p><p>Text Length: 50000<br>Queryparam Length: 50000<br>Content Lengh: 32000 (This should be 50000, right?)</p><p>So first I thought my SQL server (MS SQL 2008 R2) might be the issue, but I used the data type varchar(max) for the field named "content" to store the data, and according to MSDN(<a href="http://disq.us/url?url=http%3A%2F%2Fmsdn.microsoft.com%2Fen-us%2Flibrary%2Fms176089.aspx%29%3Aq1YMafDBGQuB6Rb_qoPevin1hDM&amp;cuid=3321886" rel="nofollow noopener" title="http://msdn.microsoft.com/en-us/library/ms176089.aspx)">http://msdn.microsoft.com/e...</a>, it can hold up to 2^31-1 bytes.<br>There shouldn't be a problem for this test and sure enough when I checked the data in the database, exact 50,000 letters I inserted were there.<br>So what's the heck?</p><p>After for a while trying to figure this thing out, I remembered this tip and applied it.  Bingo. That fixed the problem.  All I needed to do was to change the second cfquery to this.</p><p>&lt;cfquery name="qRead" datasource="cfjp"&gt;<br>  SELECT CAST(content as varchar(max)) as c<br>  FROM test<br>  WHERE id = #result.identitycol#<br>&lt;/cfquery&gt;</p><p>Content Length: &lt;cfoutput&gt;#len(qRead.c)#&lt;/cfoutput&gt;</p><p>Then the output was:</p><p>Text Length: 50000<br>Queryparam Length: 50000<br>Content Lengh: 50000 (Fixed it)</p><p>Thanks for the tip.</p></div>
	</div>
</div>
		