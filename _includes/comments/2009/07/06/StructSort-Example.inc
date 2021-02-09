
<div class="comment" id="c_1713716642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716642">1</a> by Dmitry
		posted on 6/18/2013 at 12:35 AM
		</div>
		<div class="comment_text"><p>Thanks Ray! This is just what I was looking for. Sadly, coldfusion doesn't seem to have a built-in function to return a sorted structure instead of array.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716647">2</a> by Raymond Camden
		posted on 6/18/2013 at 1:31 AM
		</div>
		<div class="comment_text"><p>Structs in CF don't have order.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716648">3</a> by Stephen Berkenkotter
		posted on 7/7/2013 at 11:16 PM
		</div>
		<div class="comment_text"><p>Good afternoon Raymond,<br>I'm trying to rank total sales results of salespeople.<br>Would the structSort be the best way to do so? If so how would I populate the Struct? With a list?<br>Thanks in advance,<br>Stephen</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716653">4</a> by Raymond Camden
		posted on 7/7/2013 at 11:21 PM
		</div>
		<div class="comment_text"><p>Can you share some of your data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716652">5</a> by Stephen Berkenkotter
		posted on 7/8/2013 at 4:53 AM
		</div>
		<div class="comment_text"><p>Sure thanks for the quick reply .....<br>Using MySQL I have this query<br>&lt;!--- need to get the counts of invoices and dollars for salespersons for two weeks back. ---&gt;<br>&lt;cfquery name="qryTwoWeeksBackSales" datasource="#application.mainDSN#"&gt;<br>SELECT COUNT(*) AS invoice_count, SUM(invoices.invoice_amount) AS invoice_totals, invoices.salesperson_id,payee.payee_last_name<br>FROM invoices, payee<br>WHERE payee.payee_id = invoices.salesperson_id<br>AND invoices.corp_id = #variables.currentCorpId#<br>AND invoices.customer_id &lt;&gt; 1<br>AND invoices.invoice_amount &gt; 0.00<br>AND invoices.invoice_date BETWEEN #CreateODBCDate(variables.twoWeeksBackStartDate)#<br>AND #CreateODBCDate(variables.twoWeeksBackEndDate)#<br>GROUP BY invoices.salesperson_id, payee.payee_last_name<br>ORDER BY payee.payee_last_name, invoices.salesperson_id<br>&lt;/cfquery&gt;</p><p>Then I tried this query of queries ..<br>&lt;cfquery name="qryTwoWeeksBackSalesRank" dbtype="query"&gt;<br>SELECT SUM(invoice_totals) AS rank, payee_last_name, invoice_totals<br>FROM qryTwoWeeksBackSales<br>GROUP BY payee_last_name, invoice_totals<br>ORDER BY invoice_totals DESC<br>&lt;/cfquery&gt;</p><p>My goal is to rank the invoice totals by payee last name. In this report we don't want to show the total dollars just the rank of each salesperson (payee).<br>This QofQ only returns the rank back as total values. So I was headed towards a StructSort to show the 'rank' but can't seem to figure out how to add the data to the Struct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716654">6</a> by Raymond Camden
		posted on 7/8/2013 at 4:58 AM
		</div>
		<div class="comment_text"><p>What I meant was, could you give me an example of the data you want to sort. As I can't run your query, it doesn't really help. Also - this blog entry is about sorting structs, not queries. Do you have a structure actually?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716651">7</a> by Stephen Berkenkotter
		posted on 7/8/2013 at 5:14 AM
		</div>
		<div class="comment_text"><p>Sorry about that Raymond, I do not have a Structure but want to build one with the query data.<br>Here is the dump from a sample query, can I put this into a Structure and then output the 'rank'?<br>As you see below the rank is the same value as the invoice_count.<br>  INVOICE_COUNT, LAST_NAME, RANK, SALESPERSON_ID <br>60  Bear  60  18027  <br>5  Byran  5  7398  <br>5  Smith  5  8151  <br>83  Marley  83  7948  <br>1  Mbama  1  15560  <br>2  Tender  2  11383</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716658">8</a> by Raymond Camden
		posted on 7/8/2013 at 5:25 AM
		</div>
		<div class="comment_text"><p>If you want to sort the results by rank, why not use another QofQ and sort it by rank?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716657">9</a> by Stephen Berkenkotter
		posted on 7/8/2013 at 3:22 PM
		</div>
		<div class="comment_text"><p>Do or do not. There is no try.   ......... I hate to say this, but I've tried and tried.<br>I spent hours yesterday combing the web for the answer. Even if I sort the QofQ by rank it still pull back the same values of that which I'm trying to rank.<br>In all my searching, your blog entry here is the only hint of completing my task. If you were to create a new blog on Rank using MySQL and CF that would be awesome!<br>Sorry I was off kilter on your structure blog but, even your first comment was looking for the ability to sort. <br>CF is awesome, can't believe good info on such a basic function does not exist :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716660">10</a> by Raymond Camden
		posted on 7/8/2013 at 3:49 PM
		</div>
		<div class="comment_text"><p>So to be clear, you tried another QofQ where you did:</p><p>select * from qryTwoWeeksBackSalesRank<br>order by rank desc</p><p>and it did NOT work? How did it not work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716661">11</a> by Stephen Berkenkotter
		posted on 7/8/2013 at 4:49 PM
		</div>
		<div class="comment_text"><p>Yes I tried the QofQ many different ways. Here is the error using your suggestion.<br>Query Of Queries runtime error.<br> The select column reference [rank] is not a column in any of the tables of the FROM table list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716662">12</a> by Stephen Berkenkotter
		posted on 7/8/2013 at 5:28 PM
		</div>
		<div class="comment_text"><p>I'm thinking there is no way to quickly rank data from a query in CF?<br>Searching for rank query data with coldfusion results in a dead end.<br>I found many frustrated people trying to just show query results in a ranked order, lots of business owners don't want to show actual sales results just who is ahead of whom.</p><p>This is why I was thinking to push the query results into a structure and output the rank as in your example above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716663">13</a> by Raymond Camden
		posted on 7/8/2013 at 6:36 PM
		</div>
		<div class="comment_text"><p>Actually this is very possible. Stephen, please send me an email so we can work on this off this blog entry. As it isn't really on topic anymore, I'd like to continue the discussion via email. Note that I'm on the road today so may be very slow to respond. But to be clear - you can absolutely do what you want here - you are just making a small mistake someplace we can fix.</p></div>
	</div>
</div>
		