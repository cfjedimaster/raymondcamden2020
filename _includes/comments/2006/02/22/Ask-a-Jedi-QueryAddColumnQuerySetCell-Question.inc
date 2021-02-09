
<div class="comment" id="c_1713650432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650432">1</a> by Beth
		posted on 2/22/2006 at 5:29 PM
		</div>
		<div class="comment_text"><p>Why handbuild a query? One reason is to create recordset for a unit test. Another use is in coding when you haven't built the database yet. The famed "querysim" function does this task very well. More info at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fudf.cfm%3FID%3D255%3ARGQZUJ4ZpK2Qpj1iN-ot0BQ2MoA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/udf.cfm?ID=255">http://www.cflib.org/udf.cf...</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fwww.halhelms.com%2Findex.cfm%3Ffuseaction%3Dtutorials.detail%3Ah_oRi7JywH_iflr3diGtflECPvQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.halhelms.com/index.cfm?fuseaction=tutorials.detail">http://www.halhelms.com/ind...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650433">2</a> by Justice
		posted on 2/22/2006 at 6:15 PM
		</div>
		<div class="comment_text"><p>I love case statements, and use them everywhere.  Here are a few quickies for MS SQL 2000:</p><p>Lets say you want to get a total number of orders with a certain dollar value or higher, you can do a case inside of a sum like this:</p><p>SELECT SUM(CASE WHEN A.ORVAL &gt; 500 THEN 1 ELSE 0 END) as RecordsOver500</p><p>You can also do sub-selects inside of a case statement, like this:</p><p>SELECT<br>  CASE WHEN (SELECT SUM(ORVAL) FROM ORDER WHERE State = A.STATE) &gt; 250 THEN A.STATE ELSE 'blank' END as StateList</p><p>I use SQL for logic far more than CF, as the results come back sooo fast (either against my MS SQL server, or my iSeries AS400), and loops are just too slow =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650426">3</a> by Jeff Houser
		posted on 2/22/2006 at 6:28 PM
		</div>
		<div class="comment_text"><p>I've used these functions to get around poor database design. You know the kind of tables with<br> "data1" "data2" "Data3" etc..</p><p> Business reasons dictated that the DB could not be changed, so this was the only solution I could come up with to get a total count of 'data', was to loop over the query, create an in-memory query using the query functions, then use query of query with aggregate functions to get the query.</p><p> Just yesterday I used these functions for a more 'respectable' purpose.  I had a scheduling app where each user goes through a series of ~8 steps, in sequential order.  The database only knows the steps they've gone through, not the ones they haven't.  Until the appointment is schedule, an entry in the database doesn't exist yet.  The database doesn't know what the next appointment is.</p><p> As such, we had written business logic to display a list of all users and their next appointment.  It went something like this:</p><p>If currentappointment is 'x appointment' and currentappointment is 'completed' {<br> next appointment must be 'y appointment'<br>} else<br> display current appointment<br>}</p><p> Yesterday they requested a feature to sort the view by the next appointment.  I took the "display code" business logic, and used it to hand create a query, which could then be sorted using query of query.  I don't believe there would have been a way to write the business logic in straight SQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650425">4</a> by Raymond Camden
		posted on 2/22/2006 at 6:59 PM
		</div>
		<div class="comment_text"><p>Just to be clear, Jeff - even if you can't change the db, you could use sql to rewrite those columns into nicer names. I think a slightly better example would be a case where not only the db can't change, but you can only use stored procedures written by a DBA.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650435">5</a> by Nic Tunney
		posted on 2/22/2006 at 7:15 PM
		</div>
		<div class="comment_text"><p>Good post and some solid advice.  Recently on a large project we were having some processing issues, and sure enough, all related to post processing of the queries.  Some rewriting of the initial SQL took processing time for 30 seconds to under 3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650431">6</a> by JimJay
		posted on 2/22/2006 at 7:33 PM
		</div>
		<div class="comment_text"><p>Good topic Ray, but not too long ago I noticed a QuerySetCell in your blog.cfc, specifically for your entries query and your comments query.  So, what is the purpose in that situation?  (sorry if this is one of those, I don't practice what I preach).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650434">7</a> by Raymond Camden
		posted on 2/22/2006 at 7:42 PM
		</div>
		<div class="comment_text"><p>JimJay - didn't you see what I said? Listen to what I say - not what I code. ;) Seriously - if I remember right, it was a case of not wanting to have super complex SQL since I support 3 database types in blogcfc. Again, if I remember right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650417">8</a> by Jeff Houser
		posted on 2/22/2006 at 9:09 PM
		</div>
		<div class="comment_text"><p>Ray, just to clarify; I didn't mean specifically that the names of the columns were poorly named.</p><p> I meant that data was stored, like this, in one table:</p><p>User(UserID, Data1, Data2, Data3, Data4)</p><p> Instead of like this:</p><p>User (UserID)</p><p>Data (DataID, UserID, Data)</p><p> Aliasing the column names would not have addressed that issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650421">9</a> by Raymond Camden
		posted on 2/22/2006 at 10:35 PM
		</div>
		<div class="comment_text"><p>That makes a bit more sense. Thanks for the clarification Jeff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650423">10</a> by Scott Stroz
		posted on 2/22/2006 at 10:39 PM
		</div>
		<div class="comment_text"><p>I have long been a proponent of doing data processing on teh DB server...that is what it was designed for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650424">11</a> by Sami Hoda
		posted on 2/22/2006 at 10:41 PM
		</div>
		<div class="comment_text"><p>I may be wrong, but off the top of my head, when you have a query of queries, you can run an update or insert statement upon it, but you add columns, row, and set data using queryAddColumn, querySetCell, etc...</p><p>This is what I remember off the top of my head.</p><p>Sami</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650437">12</a> by Raymond Camden
		posted on 2/22/2006 at 10:49 PM
		</div>
		<div class="comment_text"><p>I'm sure Sami meant "can't" there, not "can", and yes, you are right. You can't insert/delete into a in-memory query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650438">13</a> by Sami Hoda
		posted on 2/22/2006 at 10:54 PM
		</div>
		<div class="comment_text"><p>Oops. Yes, its "can't". Thanks Ray.</p><p>Add we use this technique sometimes for reports. There is also a useful UDF at cflib called queryAddColumnWithValue which adds a column with a default value which works great as well.</p><p>Sami</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650436">14</a> by Sami Hoda
		posted on 2/22/2006 at 10:55 PM
		</div>
		<div class="comment_text"><p>Man, my spelling today is horrible. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650439">15</a> by Phillip Senn
		posted on 2/23/2006 at 8:01 PM
		</div>
		<div class="comment_text"><p>queryAddColumn is useful for example code.</p><p>I can see where you might want to populate a dropdown list from a table and make the first entry be "Please make a selection", which of course is not in the table, but there's probably a way to do this with a view.</p></div>
	</div>
</div>
		