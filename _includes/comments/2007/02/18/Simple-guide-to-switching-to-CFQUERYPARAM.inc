
<div class="comment" id="c_1713662351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662351">1</a> by Scott Stroz
		posted on 2/19/2007 at 12:00 AM
		</div>
		<div class="comment_text"><p>Ray - It might be worth mentioning that you should use &lt;cfqueryparam&gt; for dynamic data when inserting and updating data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662350">2</a> by Raymond Camden
		posted on 2/19/2007 at 12:09 AM
		</div>
		<div class="comment_text"><p>Big DUH there. Thanks Scott. I updated the main quote. Is it clear now? Should I add an update/insert example as well?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662352">3</a> by Ben Nadel
		posted on 2/19/2007 at 2:28 AM
		</div>
		<div class="comment_text"><p>I cannot remember where I saw it, but I read a blog post a few months back that would argue that the last example above would in fact be a candidate for cfqueryparam:</p><p>select #somecol#<br>from #sometable#<br>where x = &lt;cfqueryparam value="1" /&gt;</p><p>While I can't remember who wrote it, they argued that putting the cfqueryparam in the WHERE clause in the above example would actually speed up the query by forcing the query to using value binding. So, while this is not a matter of security, apparently CFQueryParam will bring about a performance increase in simple queries.</p><p>Forgive me if this information is wrong, but it is what I recall.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662353">4</a> by Jochem van Dieten
		posted on 2/19/2007 at 3:12 AM
		</div>
		<div class="comment_text"><p>You can use cfqueryparam outside the WHERE too. Consider for instance:<br>SELECT<br>  price * &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#form.qtty#"&gt; AS amount<br>FROM<br>  orders</p><p>You can not use cfqueryparam to substitute identifiers, but you can use it for values everywhere in the SQL Nstatement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662356">5</a> by Raymond Camden
		posted on 2/19/2007 at 3:19 AM
		</div>
		<div class="comment_text"><p>Ben - while that may be true - I was using it as an example to tell folks they can't use cfqp to replace dynamic portions OUTSIDE of where/set/update.</p><p>Jochem - Good example there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662355">6</a> by Rachel Maxim
		posted on 2/19/2007 at 3:32 AM
		</div>
		<div class="comment_text"><p>Thanks for the example, I didn't realize you could use cfqueryparam with a list like that - cool!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662357">7</a> by Scott P
		posted on 2/19/2007 at 4:26 AM
		</div>
		<div class="comment_text"><p>lists, not having to remember adding quotes to my queries and it handling quotes in the data sold me on using queryparams.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662360">8</a> by Geoff
		posted on 2/19/2007 at 4:58 AM
		</div>
		<div class="comment_text"><p>I always wondered about:</p><p>select id, name, email<br>from users<br>where name like '%#<a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a>#%'<br>and active=1</p><p>Where the active is a bit column... Would it be necessary to queryparam the active bit, since it isn't really dynamic? (i.e. the <a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a> is likely to change for every user of the website, but the active bit might not change...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662361">9</a> by Raymond Camden
		posted on 2/19/2007 at 5:06 AM
		</div>
		<div class="comment_text"><p>Ben spoke to this, and while he said he wasn't 100% sure (right Ben?) I belive he is right as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662378">10</a> by Ben Nadel
		posted on 2/19/2007 at 5:54 AM
		</div>
		<div class="comment_text"><p>Yeah, I am not 100% sure. However, from what I can remember, it was not necessary to have all the "static" values query-paramed. So, in the above, the <a href="http://disq.us/url?url=http%3A%2F%2FFORM.name%3Ay9K-ZT02gA2R_lWPXi_g9HrMWsE&amp;cuid=3321886" rel="nofollow noopener" title="FORM.name">FORM.name</a> value would be good as a cfqueryparam. Then, the active bit could stay as is.  The point of the blog post was to show the difference between a SQL statement that had no query params and a SQL statement that had at least one. The one that had at least one SQL statement performed better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662379">11</a> by Scott P
		posted on 2/19/2007 at 6:03 AM
		</div>
		<div class="comment_text"><p>Correct me if I'm wrong but this is true in my testing.</p><p>If active was always (or most often) = 1, you would not want to use queryparam for it.</p><p>If you use SQL Server, start SQL Profiler - New Trace to see what is happening under the hood.</p><p>The SQL server is caching the query as a stored procedure.  Items that are in queryparams are dynamically passed in and evaluated on every query.  The other items, such as active = 1, would be built-in to the procedure.</p><p>For example, the query in CF written as:<br>select id, name, email<br>from users<br>where name like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="%#<a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a>#%"&gt;<br>and active=1</p><p>would actually be passed to the sql server as:<br>exec sp_execute 1, 'Smith'</p><p>If you added queryparam to the active bit, it would called like this:<br>exec sp_execute 1, 'Smith',1</p><p>That is why there is a performance gain using queryparams (and why it is slower on first run - or if the query is not used often)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662377">12</a> by Jim
		posted on 2/19/2007 at 8:59 AM
		</div>
		<div class="comment_text"><p>There is also the null value hack - can't remember where I saw this but it's neat:</p><p>&lt;cfqueryparam value="#trim(<a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a>)#" cfsqltype="CF_SQL_VARCHAR" null="#YesNoFormat(Len(Trim(<a href="http://disq.us/url?url=http%3A%2F%2FFORM.name%3Ay9K-ZT02gA2R_lWPXi_g9HrMWsE&amp;cuid=3321886" rel="nofollow noopener" title="FORM.name">FORM.name</a>)))#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662380">13</a> by Geoff
		posted on 2/19/2007 at 3:07 PM
		</div>
		<div class="comment_text"><p>&lt;cfqueryparam value="#trim(<a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a>)#" cfsqltype="CF_SQL_VARCHAR" null="#YesNoFormat(not Len(Trim(<a href="http://disq.us/url?url=http%3A%2F%2FFORM.name%3Ay9K-ZT02gA2R_lWPXi_g9HrMWsE&amp;cuid=3321886" rel="nofollow noopener" title="FORM.name">FORM.name</a>)))#"&gt;</p><p>(If <a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a> has a length, null should be "no")...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662385">14</a> by Testing
		posted on 2/19/2007 at 6:46 PM
		</div>
		<div class="comment_text"><p>Hey, this is a test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662384">15</a> by James, F.E.
		posted on 2/19/2007 at 8:36 PM
		</div>
		<div class="comment_text"><p>When you are using cfqueryparam for a list, isn't the separator attribute required? So it would look something like this:</p><p>&lt;cfqueryparam cfsqltype="cf_sql_integer" value="#form.categorylist#" list="true" separator=","&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662382">16</a> by Raymond Camden
		posted on 2/19/2007 at 8:39 PM
		</div>
		<div class="comment_text"><p>Comma is the default.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662386">17</a> by Robert Owen
		posted on 2/20/2007 at 3:03 AM
		</div>
		<div class="comment_text"><p>Thanks for this post Ray. This helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662387">18</a> by johnb
		posted on 2/21/2007 at 3:02 PM
		</div>
		<div class="comment_text"><p>With regards to the whole CFQUERYPARAM and Caching etc etc, I've been wondering recently why CF doesn't support the two together yet BlueDragon does? How do they get round it yet CF doesn't support them together?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662390">19</a> by Raymond Camden
		posted on 2/21/2007 at 4:05 PM
		</div>
		<div class="comment_text"><p>Well, I think it is just priorities. Maybe wait and see what CF8 offers. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662395">20</a> by Vincent Collins
		posted on 9/18/2007 at 12:29 AM
		</div>
		<div class="comment_text"><p>What's the most elegant way to protect the following from SQL Injection?</p><p>Select * from tablename<br>order by #fieldname#</p><p>Since you can't put fieldname inside a cfqueryparam, currently I've only come up with testing #fieldname# inside if or case/switch statements but with a lot of fieldnames, it gets ugly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662394">21</a> by Raymond Camden
		posted on 9/18/2007 at 12:54 AM
		</div>
		<div class="comment_text"><p>VC - That's actually what I do normally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662392">22</a> by Vincent Collins
		posted on 9/18/2007 at 1:13 AM
		</div>
		<div class="comment_text"><p>OK, thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662393">23</a> by Eric Bader
		posted on 10/22/2007 at 3:02 AM
		</div>
		<div class="comment_text"><p>I have one query that is killing me with the cfqueryparam tag.  The query is a search query for products that contain words a customer is searching on. The column to be searched is a text column, so the cfqueryparam needs to be:  CF_SQL_VARCHAR.  <br>A simple version of this query would look like this:<br>SELECT DescribeName, RETAIL, Longdescribe<br>From Table<br>Where longdecribe like "%kids%" or longdescribe like "%toy%" or longdescribe like "%8%" or longdescribe like "%years%" or longdescribe like "%old%"<br>This query would be from a customer search where they typed in "Kids toy 8 years"  Then the query would return the the records with these words in them.  I have the customer's search in a list.  How would you convert this where statement to using the cfqueryparam tag?</p><p>Thanks for any help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662397">24</a> by Raymond Camden
		posted on 10/22/2007 at 10:25 PM
		</div>
		<div class="comment_text"><p>Just cfloop over the value like a list.</p><p>cfloop index="word" list="#form.something#"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662396">25</a> by Lance VL
		posted on 1/26/2008 at 1:18 AM
		</div>
		<div class="comment_text"><p>I saw how you and Vincent Collins were stating that you use case/switch or if statements for testing order by parameters.  I was wondering if you had an example of this.  Are you just testing for data type, and business logic or are you also testing for injections?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662398">26</a> by Jason
		posted on 7/25/2008 at 6:59 PM
		</div>
		<div class="comment_text"><p>Has anyone discovered a more eloquent way to handle values passed to the 'Order By' clause?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662399">27</a> by Raymond Camden
		posted on 7/29/2008 at 5:54 PM
		</div>
		<div class="comment_text"><p>Jason, I'm not sure you can, outside of manually checking the values against a valid list. Which isn't too hard of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662401">28</a> by Jason
		posted on 7/29/2008 at 6:15 PM
		</div>
		<div class="comment_text"><p>Of course, I'm a gnat amongst giants and am still learning the ways of CF.</p><p>It seems that checking against a valid list adds quite a bit of extra markup to protected the Order By clause.   Naturally, my head might not be screwed on straight. :)</p><p>For example, lets say you allow the list to be sorted by more than one column.  You'll have to designate all of the potential columns the user can sort by and then loop through that list for each value passed in for sorting.</p><p>Would perhaps, a more eloquent solution be to use a function to strip out SQL buzz words (update/drop/create/whatever)?  Should new vulnerabilities be discovered, making a change to that function would be swift and simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662403">29</a> by Raymond Camden
		posted on 7/29/2008 at 6:19 PM
		</div>
		<div class="comment_text"><p>Well, if you have a model CFC, for lets say Products, you can say that the valid sort by options are a specific list (name, price, quantity). You can definite these in the Variables scope of the CFC, and build a private validSort() function. You could have validSort() simply return adefault (name) if an invalid sort is passed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662402">30</a> by Jason
		posted on 7/29/2008 at 6:29 PM
		</div>
		<div class="comment_text"><p>That's the ticket! Thanks Ray. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662400">31</a> by steve
		posted on 8/15/2008 at 8:31 PM
		</div>
		<div class="comment_text"><p>Here's an example of how I've done ORDER BY<br>Like Ray said, You should pre determine what columns are valid sorting columns, and then I use 1 parameter pOrderBy to determine my actualy Dynamic order by statement...<br>that way the only thing that can be passed into my query are values that I have pre-determined.</p><p>&lt;cfelseif pOrderBy EQ "Contact"&gt;<br>	&lt;cfset OrderByLine = "ORDER BY Contact #OrderByAscDesc#"&gt;<br>&lt;cfelseif pOrderBy EQ "City"&gt;<br>	&lt;cfset OrderByLine = "ORDER BY City #OrderByAscDesc#"&gt;<br>&lt;cfelseif pOrderBy EQ "State"&gt;<br>	&lt;cfset OrderByLine = "ORDER BY State #OrderByAscDesc#"&gt;<br>&lt;cfelse&gt;<br>	&lt;cfset OrderByLine = "ORDER BY Company #OrderByAscDesc#"&gt;<br>&lt;/cfif&gt;</p><p>&lt;CFQUERY ...&gt;<br>	SELECT someCols....<br>	From CompanyAddresses<br>	#OrderByLine#<br>&lt;/CFQUERY&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662404">32</a> by JC
		posted on 3/25/2009 at 9:43 PM
		</div>
		<div class="comment_text"><p>thread necromancy, I know... but I ran across this searching for how the hell to use sql user defined functions with cfqueryparam (anyone know??) and saw the bit about order by. A safe, agnostic way to do it would be something like...</p><p>&lt;cfdbinfo <br>	datasource="#myDSN#" <br>	name="tblinfo" <br>	type="columns" <br>	dbname="#myDB#" <br>	table="#myTable#"&gt;<br>&lt;cfset cols = listtoarray(lcase(valuelist(tblinfo.column_name)))&gt;<br>&lt;cfset index = cols.indexOf(lcase(orderby))&gt;<br>&lt;cfif index LT 0&gt;<br>	&lt;cfset index = 1&gt;</p><p>ORDER BY #cols[index]#</p><p>that may need some tweaking to run, I typed up the last bit by hand instead of copying it from working code... but there's a built-in method in CF to get the column names, so you can easily grab those and test your input against them.</p><p>That could be much simpler, of course... just a listcontains or something to test if it's kosher and then using it... but we have anal auditors and it's easier to write a bit of extra code and not allow the user input.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662412">33</a> by Kevin Staton
		posted on 3/23/2010 at 12:03 AM
		</div>
		<div class="comment_text"><p>What we've done to protect against SQL injection is to perform the initial query with query params:<br>&lt;cfquery name="qryName" datasource="#variables.dsn#"&gt;<br>SELECT<br>  fieldName<br>FROM tableName<br>WHERE<br>  fieldName2 = &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#form.field#"&gt;<br>&lt;/cfquery&gt;</p><p>And then we do a query of queries with the Order By clause using CF substitution:<br>&lt;cfquery name="qryOrdered" dbtype="query"&gt;<br>SELECT<br>  fieldName<br>FROM qryName<br>ORDER BY #form.orderBy#<br>&lt;/cfquery&gt;</p><p>By doing this we remove the possibility of performing any illicit activity against the database since the only time we used non-paramaterized values is against a ColdFusion query result set which has no direct connection to the database.  We haven't seen any adverse performance since the source is already in memory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662407">34</a> by Cody Kratzer
		posted on 10/31/2013 at 7:03 AM
		</div>
		<div class="comment_text"><p>Hey, Ray. I know this blog post is ancient but I didn't see too many newer cfqueryparam related posts (some sort of datetime filter in your search would be nice even if only something simple like: within the last day, week, month, year,...)</p><p>Anyway, my company was seriously humbled on the security end of things at the 2013 ColdFusion Summit and I have a question about cfqueryparam. We now have cfqueryparam implemented across our code but there are certain portions of our code where we were building the where clause in a local variable and then plugging that local variable into the cfquery:</p><p>SELECT *<br>FROM table<br>#local.where#</p><p>I've reached the conclusion that I must place the where conditions into my cfquery tag rather than building it out in a local variable. But there is one particular part of my code where I build out a where clause in a function and then pass it into several other functions. I do this because the where clause is the same among many other functions and I wanted to prevent duplicate code. Is there any solution to this problem or am I stuck with transferring my where clause to each function?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662406">35</a> by JC
		posted on 10/31/2013 at 10:59 AM
		</div>
		<div class="comment_text"><p>You can use a case statement if the number of possible options is manageable.</p><p>You can break it into tablename and whereclause criteria, validate the tablename against a list of known tablenames like my post above, and then do a query of queries against that result set as in Kevin's post above, if the result set without filtering isn't too terrible and the filtering is all stuff that a query of query will allow.</p><p>You can parse out the string and split it into the parts you know are safe and include those without cfqueryparam (iif(myRowName is "foo=",de("foo="),de("")) or whatever) and wrap the user entered data in cfqueryparam.</p><p>Probably some other options, but those are the ones I thought of when I got the notification email. Maybe Ray will have a better one. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662410">36</a> by Raymond Camden
		posted on 10/31/2013 at 5:58 PM
		</div>
		<div class="comment_text"><p>I don't have much better to offer on top of what JC said. I'd lean towards the CASE block to help possibly manage it and see if that would also let you switch to cfqueryparam. I don't think I'd go the QoQ route though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662409">37</a> by Cody Kratzer
		posted on 10/31/2013 at 6:05 PM
		</div>
		<div class="comment_text"><p>Solid advice, guys. Thank you. My concern wasn't so much in how I would put it into the cfquery but finding out if there is a way I could build the where clause once and insert it into each query while still using cfqueryparam. I don't like the idea of having to duplicate the where clause in each function but if that is what is necessary for the sake of security then I'll suck it up and do it haha.</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662408">38</a> by Raymond Camden
		posted on 10/31/2013 at 6:08 PM
		</div>
		<div class="comment_text"><p>It would be possible - just difficult I suppose depending on how complex your code is for creating the where clause.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662411">39</a> by Cody Kratzer
		posted on 10/31/2013 at 6:32 PM
		</div>
		<div class="comment_text"><p>Currently I am building the where clause in one function and then passing it into other functions like so:</p><p>&lt;cffunction ...&gt;<br>     &lt;cfset where = "" /&gt;<br>     &lt;cfif filter1 neq 0&gt;<br>          &lt;cfset where = where &amp; " AND column_name = filter1" /&gt;<br>     &lt;/cfif&gt;<br>     &lt;cfif filter2 neq 0&gt;<br>          &lt;cfset where = where &amp; " AND ..." /&gt;<br>     &lt;/cfif&gt;<br>     ...<br>     &lt;return where /&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction ...&gt;<br>     &lt;cfargument name="where" /&gt;<br>     &lt;cfquery name="myQuery"&gt;<br>          SELECT *<br>          FROM table_name<br>         #where#<br>     &lt;/cfquery&gt;</p><p>     &lt;return myQuery /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662414">40</a> by JC
		posted on 10/31/2013 at 8:33 PM
		</div>
		<div class="comment_text"><p>Hmm. I wonder if you could put the CFQueryParam code in the function and then call the function from inside the query… or change it to a custom tag, or just a CFINCLUDE. I'm 99% sure doing a cfinclude would work… then you'd just put the cfqueryparam around any of the user-entered data. Much easier than having to maintain the code in every single query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662413">41</a> by Brian O
		posted on 6/17/2014 at 7:53 PM
		</div>
		<div class="comment_text"><p>Cody, Did you ever find a solution to your problem above from 10-31-2013? I ran across the same issue in a very complex query.</p></div>
	</div>
</div>
		