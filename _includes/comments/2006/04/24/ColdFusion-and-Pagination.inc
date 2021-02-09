
<div class="comment" id="c_1713652239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652239">1</a> by Michael Walker II
		posted on 4/24/2006 at 9:33 PM
		</div>
		<div class="comment_text"><p>Great!</p><p>I've been using the pagination that was supplied in the CF WACK book, but this is another way for me to learn what's going on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652240">2</a> by djuggler
		posted on 4/24/2006 at 10:31 PM
		</div>
		<div class="comment_text"><p>&lt;blockquote&gt;I use queryNew to create a "fake" query.&lt;/blockquote&gt;<br>I prefer to call it a "manual" query or more appropriately a "manual query result set". Bah. Semantics.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652243">3</a> by Raymond Camden
		posted on 4/24/2006 at 10:37 PM
		</div>
		<div class="comment_text"><p>Nah, you are right. I'll start using that term as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652244">4</a> by Teddy Payne
		posted on 4/24/2006 at 10:56 PM
		</div>
		<div class="comment_text"><p>I like to do a variation upon this theme:</p><p>&lt;cfparam name="startRow" default="1"&gt;<br>&lt;cfparam name="rowsPerPage" default="20"&gt;</p><p>... cfquery or cfstoredproc ...</p><p>&lt;cfset totalRecords = query.recordcount&gt;</p><p>&lt;cfset endRow = (startRow + rowsPerPage) - 1&gt;</p><p>&lt;!--- If the endrow is greater than the total, set the end row to to total ---&gt;<br>&lt;cfif endRow GT totalRecords&gt;<br>	&lt;cfset endRow = totalRecords&gt;<br>&lt;/cfif&gt;</p><p>&lt;!--- Add an extra page if you have leftovers ---&gt;<br>&lt;cfif (totalRecords MOD rowsPerPage) GT 0&gt;<br>	&lt;cfset totalPages = totalPages + 1&gt;<br>&lt;/cfif&gt;</p><p>&lt;!--- Display all of the pages ---&gt;<br>&lt;cfloop from="1" to="#totalPages#" index="i"&gt;</p><p>	&lt;cfset startRow = ((i - 1) * rowsPerPage) + 1&gt;</p><p>	&lt;a href="foo.cfm?startRow=#startRow#"&gt;#i#&lt;/a&gt;</p><p>&lt;/cfloop&gt;</p><p>A little verbose, but it manages extra pages just fine.  You can refine the process to calculate the boundaries, but the practice is similar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652242">5</a> by Raymond Camden
		posted on 4/24/2006 at 11:01 PM
		</div>
		<div class="comment_text"><p>A little trick for your end row logic. Don't forget the max/min functions:</p><p>&lt;cfset endRow = max(startRow+rowsperpage-1, totalrecords)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652247">6</a> by Raymond Camden
		posted on 4/24/2006 at 11:01 PM
		</div>
		<div class="comment_text"><p>Oops, I meant min(...)    :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652246">7</a> by Teddy Payne
		posted on 4/24/2006 at 11:46 PM
		</div>
		<div class="comment_text"><p>That is exactly the refinement I was referring to.  =)</p><p>Good stuff, RC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652245">8</a> by Fernando da Silva Trevisan
		posted on 4/25/2006 at 3:11 AM
		</div>
		<div class="comment_text"><p>The problem is: it breaks when the result set has 21 records.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652251">9</a> by Fernando da Silva Trevisan
		posted on 4/25/2006 at 3:13 AM
		</div>
		<div class="comment_text"><p>(that is the problem with those #@#*@# "paginations" ever.<br>There's a lot of ways to solve it, like use ceiling(recordcount/perpage) to know the exact number of pages you will have - just to say, as I don't like to be the guy who points the problem and don't solve it ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652248">10</a> by Raymond Camden
		posted on 4/25/2006 at 3:25 AM
		</div>
		<div class="comment_text"><p>Dang it. I had meant to test an 'edge' condition like that and forgot. I'm very sorry to all my readers! I will try to fix this asap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652252">11</a> by Raymond Camden
		posted on 4/25/2006 at 3:28 AM
		</div>
		<div class="comment_text"><p>Ok, I kinda remember this issue. This change to the cfif will fix it:</p><p>&lt;cfif (url.start + perpage - 1) lt data.recordCount&gt;</p><p>I'm going to update the blog entry in an hour or so. (Since printing doesn't show comments.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652254">12</a> by Rob Gonda
		posted on 4/25/2006 at 4:15 AM
		</div>
		<div class="comment_text"><p>I try to keep pagination in the SQL level, never in CF. It is extremely inefficient to transfer 50k records each time I want to display the next block of 20... SQL is much more efficient in fetching only the block I need and transfer only the minimum required information back to the application server.</p><p>The advantage of doing it within CF is that it is generalized for all datasources, but IMO the consequences are not worth it. I use a generic stored proc (mssql) to paginate any of my tables or views. It's been working like a charm for years.</p><p>The code works perfectly for small datasets, but if you have anything in the thousands (or millions like me) ... not such a good idea :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652255">13</a> by Raymond Camden
		posted on 4/25/2006 at 5:21 AM
		</div>
		<div class="comment_text"><p>Fernando, thanks for the bug report. I edited the entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652258">14</a> by Fernando da Silva Trevisan
		posted on 4/25/2006 at 6:45 AM
		</div>
		<div class="comment_text"><p>You're welcome, Ray. Your work for the community is memorable, *I* thank you!<br>Best wishes!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652257">15</a> by Jacob
		posted on 4/25/2006 at 4:40 PM
		</div>
		<div class="comment_text"><p>Rob, care to share your generic MSSQL implementation with any of us?  I'm very curious as to how you chose to implement it.  We've played around with doing that here at our company, but never got it quite right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652256">16</a> by Teddy Payne
		posted on 4/25/2006 at 6:49 PM
		</div>
		<div class="comment_text"><p>I am curious as well about the MSSQL solution.  I ahve seen pagination with dynamic SQL statements, numbered aggregated tables that are searched often and data hierarchies that resemble Celko's data hierarchy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652260">17</a> by Pete Freitag
		posted on 4/25/2006 at 9:53 PM
		</div>
		<div class="comment_text"><p>If your using MySQL or PostgreSQL you can use the LIMIT and OFFSET in your SQL I have an example here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F451.cfm%3A6qidSqoT_vtKW8GJd4JuvJEogt4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/451.cfm">http://www.petefreitag.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652259">18</a> by Tidy Technologies (Adam Fairba
		posted on 4/26/2006 at 1:46 AM
		</div>
		<div class="comment_text"><p>For the equivalent of LIMIT and OFFSET with MS SQL Server, see this article:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmsdn.microsoft.com%2Flibrary%2Fdefault.asp%3Furl%3D%2Flibrary%2Fen-us%2Fdnpag%2Fhtml%2Fscalenethowto05.asp%3AhYqxvZCPH0AJj-wyNtOsbvpSI8k&amp;cuid=3321886" rel="nofollow noopener" title="http://msdn.microsoft.com/library/default.asp?url=/library/en-us/dnpag/html/scalenethowto05.asp">http://msdn.microsoft.com/l...</a></p><p>It includes various methods for doing pagination in MSSQL Server:</p><p>- Select Top (usually not practical)<br>- User-Specific Records (SQL Query or Stored Procedure)<br>- Application-Wide Records (Stored Procedure)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652261">19</a> by Rob Gonda
		posted on 4/26/2006 at 7:56 AM
		</div>
		<div class="comment_text"><p>just posted my solution. Feel free to check it out:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.robgonda.com%2Fblog%2Findex.cfm%2F2006%2F4%2F25%2FMSSQL-and-Pagination%3AwrkzpOBLUBk15U2Ik8EHAHRWjUQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.robgonda.com/blog/index.cfm/2006/4/25/MSSQL-and-Pagination">http://www.robgonda.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652262">20</a> by Deepika
		posted on 5/2/2006 at 1:40 PM
		</div>
		<div class="comment_text"><p>hi<br> i need ur help. I want to implement pagination using flash forms...<br>Can u please guide me in this matter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652263">21</a> by imstillatwork
		posted on 8/14/2006 at 9:18 AM
		</div>
		<div class="comment_text"><p>pagination is swell. there ar a tons of ways to do it, and it kind of depands on how fresh you need your data (caching or not, etc..)</p><p>I have a DELIMA!</p><p>How can I EFFICIENTLY implement a pagination system with the query has a 1 to many JOIN and the output is using GROUP?</p><p>The record count and start rows are NOT accurate to the groups of data being worked with....</p><p>for example, I could have a query that returns 5 rows, but in reality, it is 2 main rows, one with 2 JOINED rows and the other with 3 joined rows... pagination goes to hell real quickly!</p><p>Anyone go t a suggestion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652264">22</a> by Mircea
		posted on 9/26/2006 at 3:41 AM
		</div>
		<div class="comment_text"><p>How to you add the number of the pages and on which page are you?</p><p>For example the initial page would be "Page 1 from 10", when you hit Next you would have "Page 2 from 10"...and so on...</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652266">23</a> by imstillatwork
		posted on 9/26/2006 at 4:22 AM
		</div>
		<div class="comment_text"><p>You know what row you are starting on, it's the url variable..</p><p>you know how many rows per page...it's a variable in the script...</p><p>so if perpage = 10, and start = 21 (page 3) is:</p><p>Records #perpage# to #perpage+url.start#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652265">24</a> by Ryan LeTulle
		posted on 1/21/2008 at 9:12 PM
		</div>
		<div class="comment_text"><p>Thanks, Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652267">25</a> by Gene
		posted on 1/30/2008 at 11:35 PM
		</div>
		<div class="comment_text"><p>How would I add a button to this schema to show "All" records on one page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652268">26</a> by Raymond Camden
		posted on 1/31/2008 at 2:18 AM
		</div>
		<div class="comment_text"><p>The form would simply pass a value that you would check for, and when you display the query, you wouldn't filter by a page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652269">27</a> by CODY RUSH
		posted on 7/24/2008 at 12:39 AM
		</div>
		<div class="comment_text"><p>I have a similar problem as 'imstillatwork'.  I have a query that returns data that has one-to-many relationships.  To output correctly, I use group="[variable]" to keep rows from outputting twice.</p><p>However, the RecordCount counts those double records, before I group and output.  So, even though my page says</p><p>Records 1 - 50 of 250 records, when it really should say something like 1-50 of 185 records.  The difference of 65 records is directly related to the fact that some records are foreign keys in a different table, and may refer to the 'main' record more than once.  Is there an efficient way to count the rows after the query and the grouping?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652270">28</a> by CODY RUSH
		posted on 7/25/2008 at 12:01 AM
		</div>
		<div class="comment_text"><p>Ok, so I have a work around for my question above.</p><p>After my [query of a] query, I am simply looping through a &lt;CFOUTPUT&gt; grouping and setting a variable of how many actual rows (after being grouped) are to be displayed.</p><p>I know this can't be the most efficient way to do this, but it works for now.  Any suggestions/improvements would be appreciated.</p><p>&lt;cfset groupedRows = 0&gt;<br>&lt;cfoutput query="FilterDocs" group="fulldoc_id"&gt;<br>  &lt;cfset groupedRows = groupedRows+1&gt;<br>&lt;/cfoutput&gt;</p><p>Raymond, thanks for your website and your CF work.</p><p>Cody R.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652271">29</a> by Raymond Camden
		posted on 7/25/2008 at 5:22 AM
		</div>
		<div class="comment_text"><p>I'm in vacation mode now so my brain isn't all hear, but if I grok you right, I think keeping a simple counter is a fine way to do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652273">30</a> by walt
		posted on 8/25/2008 at 10:53 PM
		</div>
		<div class="comment_text"><p>thanks for this, Ray. It just helped me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652274">31</a> by John Manoah
		posted on 6/15/2009 at 5:45 PM
		</div>
		<div class="comment_text"><p>Very simple and easy to follow. Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652275">32</a> by Richard Siebels
		posted on 8/12/2009 at 3:40 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. That is a nice little pager.</p><p>For applications that fall between the thousands or millions of records like Rob Gonda needs where you would want to do it in SQL and for just a few pages of records where Ray's pagination would work well and be very efficient, I use the cf_pager that is available in the CF exchange.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fexchange%2Findex.cfm%3Fevent%3DextensionDetail%26extid%3D1024330%3AlIh5b1X_vKxhwQGeICgQnocRz04&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/exchange/index.cfm?event=extensionDetail&amp;extid=1024330">http://www.adobe.com/cfusio...</a></p><p>This allows users to jump to pages in between first, last and next. It is very easy to deploy and reproduce on list pages through out your application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652277">33</a> by Leslie Giles
		posted on 10/30/2009 at 1:31 PM
		</div>
		<div class="comment_text"><p>Hi Ray<br>Many thanks for your help with this one.<br>You mention in your conclusion that "This link doesn't handle other URL variables" <br>Would you be able to point me in the direction of one of your other "blog entries" that would cover this, or be able to post an example that covers multiple URL variables?<br>I would like to pass a URL variable to each page when a user clicks on the "Next Page" link.<br>Apologies for asking what may be a simple question, but I'm struggling at the momment.<br>Thanks for a great site and your help in the community. Its very much appreaciated.<br>Regards<br>Les</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652276">34</a> by Raymond Camden
		posted on 10/30/2009 at 3:20 PM
		</div>
		<div class="comment_text"><p>Additional variables would simply be passed along the URL. So if you were viewing a set of pages for category 1 (all products in category 1) which is based on url.category, then you simply assure all links add &amp;category=#url.category# to them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652278">35</a> by Leslie Giles
		posted on 10/30/2009 at 4:45 PM
		</div>
		<div class="comment_text"><p>Hi Ray and thanks for the prompt help.</p><p>I had used the option you suggested but based on my line of code as shown below:</p><p>&lt;cfset link = cgi.script_name &amp; "?ShopTypeID=#URL.shoptypeid#&amp;?start=" &amp; (url.start + perpage)&gt;   (where i have added the variable to be passed on)</p><p>When the page is first run and say I have the default set to show 9 results out of a db of 10, the page shows 9 results as you would expect. But when I click on the "next page" link it returns those same 9 results instead of the next page with just the 1 result.</p><p>Any suggested would be greatly appreaciated.</p><p>Confused at this time in the morning:)</p><p>Les</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652280">36</a> by Richard
		posted on 10/30/2009 at 4:49 PM
		</div>
		<div class="comment_text"><p>Hey Leslie, looks like this may just be a type-o. In your code you have an extra '?' which may be breaking the link and not allowing the start variable to be passed and acknowledged by the script.</p><p>"?ShopTypeID=#URL.shoptypeid#&amp;?start=" &amp;</p><p>should be <br>"?ShopTypeID=#URL.shoptypeid#&amp;start=" &amp;</p><p>Try that and see if it ficxes your problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652279">37</a> by Leslie Giles
		posted on 10/30/2009 at 8:19 PM
		</div>
		<div class="comment_text"><p>Hi Richard<br>Thanks for the suggestion above. It works perfectly.</p><p>I'm now off to the opticians:)</p><p>Thanks<br>Les</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652281">38</a> by Brian
		posted on 11/24/2009 at 3:22 AM
		</div>
		<div class="comment_text"><p>Awesome.  Easy.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652282">39</a> by Brian M Falls
		posted on 11/24/2009 at 3:54 AM
		</div>
		<div class="comment_text"><p>&lt;style type="text/css"&gt;<br>a { color: #444; font-size: 11px; text-decoration: none; }<br>a:hover { color: #777; text-decoration: underline; }<br>.pagination { color: #222; font-weight: bold; font-size: 12px; }<br>&lt;/style&gt;<br>&lt;cfparam name="url.startRow" default="1"&gt;<br>&lt;cfparam name="url.rowsPerPage" default="10"&gt;<br>&lt;cfset totalRecords = getInventory.recordcount&gt;<br>&lt;cfset totalPages = totalRecords / rowsPerPage&gt;<br>&lt;cfset endRow = (startRow + rowsPerPage) - 1&gt;<br>&lt;cfparam name="currentPage" default="1"&gt;</p><p>&lt;!--- If the endrow is greater than the total, set the end row to to total ---&gt;<br>&lt;cfif endRow GT totalRecords&gt;<br>	&lt;cfset endRow = totalRecords&gt;<br>&lt;/cfif&gt;</p><p>&lt;!--- Add an extra page if you have leftovers ---&gt;<br>&lt;cfif (totalRecords MOD rowsPerPage) GT 0&gt;<br>	&lt;cfset totalPages = totalPages + 1&gt;<br>&lt;/cfif&gt;</p><p>&lt;!--- Display all of the pages ---&gt;<br>&lt;cfif totalPages gte 2&gt;<br>	&lt;cfloop from="1" to="#totalPages#" index="i"&gt;<br>		&lt;cfset startRow = ((i - 1) * rowsPerPage) + 1&gt;<br>		&lt;cfif currentPage neq i&gt;<br>			&lt;a href="foo.cfm?startRow=#startRow&amp;currentPage=#i#"&gt;<br>		&lt;cfelse&gt;<br>			&lt;span class="pagination"&gt;<br>		&lt;/cfif&gt;<br>		#i#<br>		&lt;cfif currentPage neq i&gt;<br>			&lt;/a&gt;<br>		&lt;cfelse&gt;<br>			&lt;/span&gt;<br>		&lt;/cfif&gt; <br>	&lt;/cfloop&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652283">40</a> by Liyakat Shaikh
		posted on 3/19/2010 at 12:05 AM
		</div>
		<div class="comment_text"><p>Works like a chime.<br>Thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652284">41</a> by kevin le
		posted on 3/19/2010 at 12:25 AM
		</div>
		<div class="comment_text"><p>Wow, It look very good.<br>I will post my code as the reference when time allows me. by the way, please go to <a href="http://disq.us/url?url=http%3A%2F%2Fnewgugu.com%2FSoftwares.cfm%3APNfal8fSBM06BRjcHJewo-IijcY&amp;cuid=3321886" rel="nofollow noopener" title="http://newgugu.com/Softwares.cfm">http://newgugu.com/Software...</a> to see my pagination sample.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652285">42</a> by Adam
		posted on 5/31/2011 at 9:48 PM
		</div>
		<div class="comment_text"><p>I am using this method for judges to paginate though lists of poems in order to score them.  There are 500+ poems to go through.  Once the judge submits his score, I have been trying to use cflocation to send the judge from the scoring page back to the list of poems and return to the same spot he was.  In other words if the judge is on ?start=301 and selects a poems, scores it, how can I use cflocation to send him back to the listing page with ?start=301 appended to the URL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652286">43</a> by Raymond Camden
		posted on 5/31/2011 at 10:04 PM
		</div>
		<div class="comment_text"><p>When you link to the judge page from your paging page (sorry, your page that has paging ;) pass along the current page #. When judging and you link back, just pass it back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652287">44</a> by ulises
		posted on 5/31/2012 at 7:48 PM
		</div>
		<div class="comment_text"><p>i have a problem when i want make the pagination, my query is built dinamically, so when i clic on next to reload my action form i lost the values, can you help me ??</p><p>&lt;cfquery name="bepapf2" datasource="sibapro"<br>			CACHEDWITHIN="#CreateTimeSpan(0,0,15,0)#" result="result"&gt;<br>			SELECT LICITACION, ESTADO, LOCALIDAD, TIPO, DESCRIPCION, RUBRO, ESTUDIOS, PROYECTO,<br>			CATALOGO_CONCEPTOS, MATRIZ_MUDA, ESPECIFICACIONES, RUTA<br>			FROM catalogo<br>			where DEPENDENCIA LIKE 'API VER'<br>			&lt;!---Buscamos por Tipo ---&gt;<br>			&lt;cfif FORM.Tipo IS NOT ""&gt;<br>			AND Tipo LIKE '%#FORM.Tipo#%'  &lt;!---Aqui es donde yo le digo que tipo desde el form ---&gt;</p><p>			&lt;/cfif&gt;<br>			&lt;!---Buscamos por Rubro ---&gt;<br>			&lt;cfif FORM.Rubro IS NOT ""&gt;<br>			and rubro like '%#FORM.Rubro#%'<br>			&lt;/cfif&gt;<br>			&lt;!---Buscamos por Subrubro ---&gt;<br>			&lt;cfif FORM.SubRubro IS NOT ""&gt;<br>			and SubRubro like '%#FORM.SubRubro#%'<br>			&lt;/cfif&gt;<br>			&lt;!---Buscamos por anio ---&gt;<br>			&lt;cfif FORM.anio IS NOT ""&gt;<br>			and fecha like '%#FORM.anio#%'<br>			&lt;/cfif&gt;<br>			&lt;!---Buscamos por Subrubro ---&gt;<br>			&lt;cfif FORM.Estado IS NOT ""&gt;<br>			and Estado like '%#FORM.Estado#%'<br>			&lt;/cfif&gt;<br>			&lt;!---Nos traemos la ruta ---&gt;<br>			&lt;/cfquery&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652288">45</a> by Raymond Camden
		posted on 5/31/2012 at 7:59 PM
		</div>
		<div class="comment_text"><p>You will want to either store the values in the session scope or include them in the URL as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652289">46</a> by ulises
		posted on 5/31/2012 at 8:32 PM
		</div>
		<div class="comment_text"><p>sorry Raymond im very new in CF, can u give me an example for pass the values and for a session scope ??</p><p>this is my url<br>&lt;a href="form_action_veracruz.cfm?start=#Evaluate("start + disp")#"&gt;Next #next# records&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652291">47</a> by Raymond Camden
		posted on 5/31/2012 at 10:46 PM
		</div>
		<div class="comment_text"><p>Are you familiar with how to create query strings, ie, the proper way to form a URL?</p><p>Are you familiar with ColdFusion's session scope?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652290">48</a> by ulises
		posted on 6/7/2012 at 6:32 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, sorry, im very busy with my job, i have to make to many different things, im returning to ColdFusion now and i will search information about URL and session Scope like u advise, thanks a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652292">49</a> by ulises
		posted on 6/11/2012 at 8:24 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, i was studying your book "Adobe ColdFusion 9 Web Application Construction Kit" and i resolve my problem!! using the session variables, thanks a lot Raymond :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652293">50</a> by Raymond Camden
		posted on 6/11/2012 at 8:25 PM
		</div>
		<div class="comment_text"><p>Glad to help. To be clear though, the CFWACK is written by many people. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652294">51</a> by Scott
		posted on 6/18/2012 at 1:01 PM
		</div>
		<div class="comment_text"><p>This solution is only really suitable for small recordsets though isn't it?.</p><p>If you, for example, wanted to return the results of a search on a large database where the search results could run into 1000's or 10000's then returning the entire recordset each time is not very efficient.</p><p>In such a case you're looking at limiting the records brought back by the database but, in order to get each 'page' of records you need to sort and get the top x etc. whilst still respecting the sort order of the records - i.e. you're criteria needs to pass the last/first value of each 'page' (depending on which way you are going) in order to get the next group.</p><p>Also means that giving a total number of pages and links to specific pages become difficult then since you'd have to return at least a count of the entire recordset initially in order to calculate them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652297">52</a> by Raymond Camden
		posted on 6/19/2012 at 5:48 AM
		</div>
		<div class="comment_text"><p>Yep. But to be clear, I don't expect someone to page through 100K records 10 at a time. If you use MySQL you can get a page at a time using limit, and with others you can at least get a MAX result set.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652295">53</a> by ulises
		posted on 6/22/2012 at 8:04 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, do you have an example of pagination, with number of page, total of pages, with next  options ??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652296">54</a> by Raymond Camden
		posted on 6/22/2012 at 8:07 PM
		</div>
		<div class="comment_text"><p>So I can tell you how to do total pages and show the current page. Not sure what you mean by 'next options'?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652298">55</a> by ulises
		posted on 6/22/2012 at 8:32 PM
		</div>
		<div class="comment_text"><p>sorry Raymond my english its so bad, yeah i want that: total pages, the current page, "previous page" and "next page".<br>Thanks :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652301">56</a> by Raymond Camden
		posted on 6/22/2012 at 8:43 PM
		</div>
		<div class="comment_text"><p>Ok, I can do the first two. But my demo already allows you to  go to the previous and next page. Are you not seeing that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652302">57</a> by ulises
		posted on 6/22/2012 at 9:02 PM
		</div>
		<div class="comment_text"><p>yes Raymond i see it, only i want to be more clear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652304">58</a> by Raymond Camden
		posted on 6/22/2012 at 9:05 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure what to tell you then. If you want it more 'visible', then edit the HTML portion. The point of this blog entry was to focus on the basic mechanics of using ColdFusion to do the paging. Design issues are separate.</p><p>I do have your other two requests done - will blog it a bit later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652306">59</a> by ulises
		posted on 6/22/2012 at 9:52 PM
		</div>
		<div class="comment_text"><p>ok, thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652308">60</a> by Raymond Camden
		posted on 6/23/2012 at 1:08 AM
		</div>
		<div class="comment_text"><p>Posted an update here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F6%2F22%2FColdFusion-and-Pagination--Six-Years-Later%3AG799hWHXcLyN_yj9RK9ItwnMErM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/6/22/ColdFusion-and-Pagination--Six-Years-Later">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652310">61</a> by Marcel Moser
		posted on 8/17/2012 at 12:01 PM
		</div>
		<div class="comment_text"><p>Ray, thanks for this big code. One question i have again. i have my query but this query is group by like this;<br>&lt;cfoutput query="qry_Name" group="NameID" startrow="#url.start#" maxrows="#perpage#"&gt;</p><p>The "next page" presents me back the same rows?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652312">62</a> by Raymond Camden
		posted on 8/17/2012 at 2:50 PM
		</div>
		<div class="comment_text"><p>It's got to be the grouping. I'm not sure you can combine the two here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652309">63</a> by Marcel Moser
		posted on 8/17/2012 at 3:20 PM
		</div>
		<div class="comment_text"><p>ok thanks so i look for a other solutions .. Ray thanks for all ideas and for all codes on your website! ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652311">64</a> by Anj
		posted on 3/12/2013 at 4:12 PM
		</div>
		<div class="comment_text"><p>I am new to cf,</p><p>what I did is :<br>   &lt;cfif  ! IsDefined("URL.start") || #URL.start# eq ""&gt; <br>         &lt;cfset from="1"&gt;<br>         &lt;cfelse&gt;<br>         &lt;cfset from=#URL.start#&gt;<br>         &lt;/cfif&gt;<br>          &lt;cfset to=#from#+5&gt;<br>          &lt;cfset toP="0"&gt;<br>          &lt;cfloop from="#from#" to="#to#" index="i"&gt;<br>          &lt;cfset toP=#toP#+1&gt;<br>		  &lt;cfoutput&gt;&lt;a class="paging" id="pages#toP#" href="?start=#i#"&gt;#i# |&lt;/a&gt;&lt;/cfoutput&gt; <br>		  &lt;/cfloop&gt;    <br>          &lt;cfset toP=0&gt; <br>              	of &lt;span class="maxPages"&gt; &lt;/span&gt;<br>                &lt;a id="NextPage" title="Next"&gt; Next&lt;/a&gt;&lt;/span&gt;<br>            &lt;/div&gt;</p><p>I tried with Jquery .. Code is similar to the code given below.</p><p>$(document).ready(function(){</p><p>  $("#NextPage").click(function(){</p><p>	  $("#pages1").text("6 | ");	  <br>	  ///$("#pages1").attr("href","?start=150");</p><p>	  $("#pages2").text("7 | ");<br>	  ///$("#pages2").attr("href","?start=175");</p><p>	  $("#pages3").text("8 | ");<br>	  ///$("#pages3").attr("href","?start=200");</p><p>	  $("#pages4").text("9 | ");<br>	  ///$("#pages4").attr("href","?start=225");</p><p>	  $("#pages5").text("10 | ");<br>	  ///$("#pages5").attr("href","?start=250");</p><p>  });<br>});</p></div>
	</div>
</div>
		