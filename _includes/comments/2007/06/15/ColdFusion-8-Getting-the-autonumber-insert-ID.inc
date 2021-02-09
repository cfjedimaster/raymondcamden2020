
<div class="comment" id="c_1713667214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667214">1</a> by Scott P
		posted on 6/16/2007 at 7:24 AM
		</div>
		<div class="comment_text"><p>agreed - pretty cool.  Would have been extra nice if they returned the same field regardless of db type.  Still cool though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667217">2</a> by Raymond Camden
		posted on 6/16/2007 at 7:41 AM
		</div>
		<div class="comment_text"><p>Agreed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667216">3</a> by Jake Munson
		posted on 6/16/2007 at 8:03 AM
		</div>
		<div class="comment_text"><p>I agree.  It's really too bad that they decided to name them differently per database.  It's very nice anyway, but it would have been the ultimate solution to this problem if you didn't have to care what DB you were using.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667219">4</a> by Raymond Camden
		posted on 6/16/2007 at 8:10 AM
		</div>
		<div class="comment_text"><p>Well, since only one will exist, you could easily look for each in the struct, and when you find one, you have your ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667218">5</a> by Dale Fraser
		posted on 6/16/2007 at 9:16 AM
		</div>
		<div class="comment_text"><p>Dam,</p><p>That's nice, can't believe I never knew about result in 7</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667220">6</a> by Barney
		posted on 6/16/2007 at 9:34 AM
		</div>
		<div class="comment_text"><p>Just for reference, in MySQL you use the LAST_INSERT_ID() function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667222">7</a> by Justin Lewis
		posted on 6/16/2007 at 11:42 AM
		</div>
		<div class="comment_text"><p>CF8 lets us dump G.W?!!!!! Best release evar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667240">8</a> by Adam
		posted on 6/16/2007 at 4:44 PM
		</div>
		<div class="comment_text"><p>Just trying to think of another way to get the ID: Wouldn't wrapping the insert and then a SELECT MAX(id) in a &lt;CFTransaction&gt; accomplish the same thing? Or would the DBMS allow this and other transactions to get into a race condition? Maybe it differs between DBMS'?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667239">9</a> by andrea
		posted on 6/16/2007 at 6:31 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I do not want your secrets but how to you use UUID now in your apps?</p><p>Thanks</p><p>Andrea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667242">10</a> by Barney
		posted on 6/16/2007 at 7:38 PM
		</div>
		<div class="comment_text"><p>Adam,</p><p>Yes, that'd work, but it's pretty inefficient, because you have to use serializable isolation level (which single-threads access to resources).  Much better to use metadata from the INSERT statement itself.  Not only is it faster, it doesn't drop your concurrency support to "no concurrency".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667248">11</a> by Phillip Senn
		posted on 6/16/2007 at 9:06 PM
		</div>
		<div class="comment_text"><p>In SQL Server, there's a subtle difference between identity() and scope_identity().<br>Identity() will simply give you the primary key of the last row inserted, whereas scope_identity() will give you the last primary key YOU inserted.<br>I wonder which one the developer's used.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667244">12</a> by Sam Farmer
		posted on 6/16/2007 at 9:14 PM
		</div>
		<div class="comment_text"><p>This is a very cool new feature to CF8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667249">13</a> by Jeff Coughlin
		posted on 6/16/2007 at 10:18 PM
		</div>
		<div class="comment_text"><p>@Phillip,</p><p>Thats really interesting.  I didn't know that.  I can see how that can be extremely handy if used correctly in applications.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667251">14</a> by Tony G
		posted on 6/17/2007 at 1:07 AM
		</div>
		<div class="comment_text"><p>@Andrea,</p><p>I think Ray means that, instead of using an automatically incremented ID number as a primary key, he sets the ID himself by using CreateUUID() and therefore doesn't need to worry about retrieving the ID of the last inserted record from the database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667250">15</a> by Phillip Senn
		posted on 6/17/2007 at 1:29 AM
		</div>
		<div class="comment_text"><p>There are advantages to using a GUID over an integer as well.<br>Suppose all your tables have a primary key starting with 1.<br>So during your development, you see the following values in a row:</p><p>1, 1, 1, 1.</p><p>I'm laughing just typing that!<br>Anyway, with a GUID, you immediately see, "Oh wait, there's no use to looking at the values of the primary keys 'cause they're too hard to look."<br>That actually is a good thing because the less you have to think about the primary key the better.  It's just a way to identity a row, and for the computer to keep track of relationships.  Don't try to make it mean anything else.</p><p>One way to solve the 1,1,1,1 problem is to start each table with it's own identity seed.  But then you start thinking too hard about giving meaning to the primary key.<br>It's just an identifier.  Don't even display it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667253">16</a> by Phillip Senn
		posted on 6/17/2007 at 1:35 AM
		</div>
		<div class="comment_text"><p>Here's what I meant by the 1,1,1,1 example:</p><p>You have a row in tblOrderDetail with the following values:<br>OrderDetailID: 1<br>OrderHeaderID: 1<br>ItemID: 1<br>SpecialInstructionsID: 1</p><p>During development, this is a very likely scenario.<br>So you could create OrderDetailID Identity(1000,1), OrderHeaderID Identity(100,1), ItemID Identity(10000,1), SpecialInstructionsID Identity(10,1).<br>But then again, it's best to just think of the primary key as a concept, a pointer if you will, and not try to make sense of it's value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667252">17</a> by Jake Munson
		posted on 6/17/2007 at 3:32 AM
		</div>
		<div class="comment_text"><p>@Philip,</p><p>You got it a little wrong.  @@identity will return the most recent ID that YOU created in your session, not from anybody else.  The problem is that you might have created another one you didn't think of.  For example, if your table has a trigger that inserts a record into a separate logging table, @@identity will return the ID from that logging table, not the one from the original insert.  scope_identity() avoids this problem by returning the most recent ID from your current scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667255">18</a> by Will Tomlinson
		posted on 6/17/2007 at 5:27 AM
		</div>
		<div class="comment_text"><p>I always loved creating my own GUID's for PK's. Except I screwed up and used them for invoice ID's. :)</p><p>Our customers were NOT happy with those Invoice #'s.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667254">19</a> by Mike Rankin
		posted on 6/17/2007 at 4:44 PM
		</div>
		<div class="comment_text"><p>With MSSQL, I think it's just easier to always use scope_identity() and just forget about the other two methods.  It will always give you what you want when working with cf.  Can anybody think of a reason why you would want to use either @@identity or table_ident?</p><p>I have to admit, I prefer working with integers instead of uuids, especially when you testing or in development mode.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667256">20</a> by Cutter
		posted on 6/18/2007 at 5:37 PM
		</div>
		<div class="comment_text"><p>The advantage of using a GUID is that it is a unique value to tie into. The disadvantage is that it is a 36(?) character string that the database must index, which can slow down queries and takes up a lot more disk space. Each approach has it's pros and cons, so you have to use what makes sense for your situation/application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667259">21</a> by Andrew Deren
		posted on 6/18/2007 at 6:56 PM
		</div>
		<div class="comment_text"><p>Also, GUIDs are a pain to pass by url.<br>Having Product.cfm?id=3 is easier to remember and more pleasing than Product.cfm?id=ABCDEF....</p><p>Do you know which method cf8 will use to retrieve this value? I hope it's scope_identity()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667258">22</a> by Tom Mollerus
		posted on 6/18/2007 at 7:21 PM
		</div>
		<div class="comment_text"><p>@Andrew: Having GUIDs in your URLs may not be as "pretty", but they're also a bit more secure, since no one can guess what a GUID is.  However, if you're using integer ID's, someone could start incrementing the ID in the URL to see what information they can get access to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667262">23</a> by David
		posted on 6/19/2007 at 3:45 AM
		</div>
		<div class="comment_text"><p>This seems as good a place as any to ask my question:</p><p>I've been thinking of using GUIDS in an application, where I'm thinking that would be advantageious - user information, for example, not the afore mentioned "productID" example (where I can see simple integers working).</p><p>Thing is, I can't pull the trigger on it - I just feel that somewhere along the line, it's going to bite me! Can anyone convince me otherwise, or point to some articles online?</p><p>I would most likely use createUUID(), for uniqueness. I'm worried about indexing, sizes of indexes, and general ease of use.</p><p>Any thoughts?</p><p>Cheers,</p><p>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667257">24</a> by randy
		posted on 6/20/2007 at 3:13 AM
		</div>
		<div class="comment_text"><p>Here is a good story on MSSQL and ID values:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.sqlservercentral.com%2Fcolumnists%2Fawarren%2Fcheckyoursqlserveridentity.asp%3AMj9QlQPyZZKRPWsgRy0UJKXqNqQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sqlservercentral.com/columnists/awarren/checkyoursqlserveridentity.asp">http://www.sqlservercentral...</a></p><p>Here is one issue/problem we have seen in CF8:<br>We have a table with a trigger that runs on insert - select @@Identity as newID</p><p>In our CFC we do the insert and when we try to ref insertqueryname.newID we get an error - the code runs fine on our CF7 production server.</p><p>As for url passing id values - we use both db/table id values and sometimes we use guids - one thing you can do when using simple ids like (1,2,3 auto increm db keys) is pass that value and a hash of the value/key in/on the url then check/compare the two values as first thing on the new page - if they match run the code if they do not send them back to that last page</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667260">25</a> by Bill Cupps
		posted on 8/6/2007 at 2:15 AM
		</div>
		<div class="comment_text"><p>This would have been even nicer, if they didn't break something that has worked since CF4.  In previous versions you could do a cfquery, and name it just like a select query, and then on the database add an insert trigger like this:</p><p>SELECT accountId FROM INSERTED</p><p>and it used to work.  As of CF8 this stopped dead in it's tracks.  Any ideas how to make this work, without re-doing every application I've used this on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667261">26</a> by Raymond Camden
		posted on 8/6/2007 at 2:37 AM
		</div>
		<div class="comment_text"><p>I may not get what you mean. How do you name a query like a select query? Query names, in CF, have nothing to do with what they do. Maybe you could post a little code snippet? To be honest I'd be shocked if this really was broken as Adobe is super anal about backwards compatability type issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667263">27</a> by Bill Cupps
		posted on 8/6/2007 at 2:46 AM
		</div>
		<div class="comment_text"><p>You could do this:</p><p>&lt;cfquery datasource="dsn" name="q1"&gt;<br>INSERT INTO accounts<br>  (accountName, balance)<br>VALUES<br>   ('My Account', 123.00)<br>&lt;/cfquery&gt;</p><p>and then on the table accounts you would have an insert trigger like this:<br>SELECT accountId FROM INSERTED</p><p>after the above query would run you could reference q1.accountId, this stopped working on CF8.</p><p>This sounds like the same problem the previous poster, Randy, is having.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667265">28</a> by Raymond Camden
		posted on 8/6/2007 at 3:07 AM
		</div>
		<div class="comment_text"><p>Interesting. I wonder if it is new drivers? Either way - file a bug report for sure.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%3AeVByS_kB5f-F_Xb5m4vrRNXZtoA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/wish">http://www.adobe.com/go/wish</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667266">29</a> by randy
		posted on 8/6/2007 at 3:42 AM
		</div>
		<div class="comment_text"><p>You are correct - Ben has a post about this and CF8 has new built in functions that can replace this process but it does require changing your code so while it works not idea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667267">30</a> by Scott P
		posted on 9/8/2007 at 2:33 AM
		</div>
		<div class="comment_text"><p>access returns USE_REAL_DB_KEY</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667271">31</a> by Laurent
		posted on 9/12/2008 at 3:22 PM
		</div>
		<div class="comment_text"><p>sql server express doesn't return anything!?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667269">32</a> by Dale Fraser
		posted on 9/12/2008 at 3:44 PM
		</div>
		<div class="comment_text"><p>@Laurent,</p><p>Yes it does, used it many times. Same as full MS SQL. Make sure the table has an identity column and that you use the result attribute</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667272">33</a> by Chris Luksha
		posted on 2/19/2009 at 9:45 PM
		</div>
		<div class="comment_text"><p>Ray - can this be turned off on the server in some way?</p><p>I am using a process flawlessly on my local machine - but when I try it on my shared server I can dump the trap and get the following: Element GENERATED_KEY is undefined in RINSERTBUS.</p><p>My query sets the return var = RINSERTBUS</p><p>Any ideas how I might 'turn it on'?</p><p>Thanks,<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667273">34</a> by Raymond Camden
		posted on 2/19/2009 at 9:47 PM
		</div>
		<div class="comment_text"><p>Why turn it off? If you don't want to use it, then don't use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667274">35</a> by Chris Luksha
		posted on 2/19/2009 at 10:16 PM
		</div>
		<div class="comment_text"><p>I think you misread - I don't want to turn it off I want to turn it ON.  It seems that it just doesn't work when I put the page live.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667270">36</a> by Raymond Camden
		posted on 2/19/2009 at 10:23 PM
		</div>
		<div class="comment_text"><p>Oh - don't forget GENERATED_KEY is just for one dbtype (mysql I think). Are you using the same db type? If you dunp RINSERTBUS, what do you see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667275">37</a> by Chris Luksha
		posted on 2/19/2009 at 10:36 PM
		</div>
		<div class="comment_text"><p>I am using MySQL - in fact I am using the exact same mySQL db - from the live server  ( I know bad boy)</p><p>dumping gets me :<br>CACHED<br>EXECUTIONTIME<br>RECORDCOUNT<br>SQL<br>SQLPARAMETERS</p><p>Is this cf 7 maybe?  Or maybe the mysql driver is wrong?  I am grasping at straws  -but it seems reasonable to think the live server is stuck on cf7 maybe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667280">38</a> by Raymond Camden
		posted on 2/19/2009 at 10:40 PM
		</div>
		<div class="comment_text"><p>Check your server version. &lt;cfdump var="#server#"&gt;</p><p>This is definitely a CF8 feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667279">39</a> by Chris Luksha
		posted on 2/19/2009 at 10:59 PM
		</div>
		<div class="comment_text"><p>I was trying that immediately after I responded the last time</p><p>My server  is 8,0,1,195765</p><p>I would guess that I can use what we need  - but the cfdump is not returning any unique key identifier.</p><p>I will email support next and see if they know of anything - but I am stumped.  It should work...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667282">40</a> by Raymond Camden
		posted on 2/19/2009 at 11:04 PM
		</div>
		<div class="comment_text"><p>What driver did they use for the connection? MySQL 3 I bet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667278">41</a> by Chris Luksha
		posted on 2/20/2009 at 12:22 AM
		</div>
		<div class="comment_text"><p>It was :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667281">42</a> by Raymond Camden
		posted on 2/20/2009 at 12:34 AM
		</div>
		<div class="comment_text"><p>Cool. Adobe should just delete the MySQL 3 driver. It causes more trouble then you can imagine. I'm always running into people using my OS stuff and accidentally running the wrong driver.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667283">43</a> by Nery R. Gonzalez
		posted on 3/26/2009 at 2:09 AM
		</div>
		<div class="comment_text"><p>Is this feature avaible with Oracle. I have an insert statament executing and inmediately after I make a cfdump and I get the message error : query (name) is not defined</p><p>Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667286">44</a> by Raymond Camden
		posted on 3/26/2009 at 7:31 PM
		</div>
		<div class="comment_text"><p>Did you use the RESULT attribute? If your query was so:</p><p>&lt;cfquery name="foo" result="result"&gt;</p><p>You would want to do</p><p>&lt;cfdump var="#result#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667284">45</a> by dcs
		posted on 4/7/2009 at 2:27 AM
		</div>
		<div class="comment_text"><p>Oracle returns the ROWID of the inserted record rather than a sequence value (if that is how one is generating keys for one's table). So I guess one might use the ROWID (which is a pseudo-column in Oracle, all tables have it) to get the primary key that was generated by the insert, e.g.:</p><p>&lt;cfquery name="myinsert" datasource="#myDSN#" result="myresult"&gt;<br>    INSERT INTO mytable (mycolumn)<br>    VALUES ('Faber')<br>&lt;/cfquery&gt;</p><p>&lt;cfquery name="getmykey" datasource="#myDSN#"&gt;<br>    SELECT my_id FROM mytable<br>     WHERE rowid = '#myresult.rowid#'<br>&lt;/cfquery&gt;</p><p>Hope this helps. I'm not sure I would use this method myself - I would probably just query sequence.currval - but it's there if you need it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667288">46</a> by James Holmes
		posted on 5/6/2009 at 7:48 AM
		</div>
		<div class="comment_text"><p>"I would probably just query sequence.currval"</p><p>If someone inserts and commits while your transaction is still running, you'll get the wrong ID that way. The ROWID is the best way to get the right value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667285">47</a> by dcs
		posted on 5/6/2009 at 4:14 PM
		</div>
		<div class="comment_text"><p>sequence.currval is session-specific so there's no reason that the value should be affected by someone else inserting and committing in between your insert and your call to sequence.currval. In fact, sequence.currval will only exist for your session if it has been preceded by a call to sequence.nextval.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667287">48</a> by Brad
		posted on 3/6/2012 at 12:31 PM
		</div>
		<div class="comment_text"><p>Thank you Ray! I've spent about an trying to figure this out. Thanks again for the post!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667291">49</a> by Matthew
		posted on 1/31/2014 at 8:35 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond. Very handy! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667289">50</a> by Sam Daams
		posted on 9/19/2014 at 12:42 PM
		</div>
		<div class="comment_text"><p>I realize this is an old post, but if, like me, you were trying to do an "insert ... on duplicate key update", note there appears to be a bug in Coldfusion (version 10). I'm on MySQL, so it might be specific to that, but thought I'd document it here if you happen to be on the same. In the case of an *update*, the generatedkey that is returned will NOT be the autoincrement value. It appears to in fact be a list containing two items: the autoincrement value AND the following value, regardless of if this is an existing row or not. MySQL supports returning the last_insert_id on duplicate key update, so that is probably a better bet until this is fixed, or use listfirst, though test this to ensure that result is actually always correct!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667290">51</a> by Sam Daams
		posted on 10/30/2014 at 5:56 PM
		</div>
		<div class="comment_text"><p>Follow up on that last comment. It's not actually a bug, but based on the fact that an update in MySQL actually auto increments the PK value. Coldfusion is thus returning both the original value (which will be the one in the table) as well as the newly generated (unused) value. I should also add that there is a third option and that is that generatedkey is not returned at all. This happens if all the values being updated match what is already in the db. Then essentially nothing happens and generatedkey is not a part of the var returned. You can work around this by always updating the table, ie. a last_edit field or something like this UPDATE id=LAST_INSERT_ID(id).</p><p>Watch out for these options if you are using the returned key to update a different table!</p></div>
	</div>
</div>
		