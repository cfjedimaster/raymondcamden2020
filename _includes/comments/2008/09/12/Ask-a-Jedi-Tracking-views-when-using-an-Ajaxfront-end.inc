
<div class="comment" id="c_1713685745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685745">1</a> by Paul
		posted on 9/16/2008 at 2:15 PM
		</div>
		<div class="comment_text"><p>Re: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bargainz.co.nz%3AnxFyFyvb-d35ZMah4eCZg1ceaI8&amp;cuid=3321886" rel="nofollow noopener" title="www.bargainz.co.nz">www.bargainz.co.nz</a></p><p>Just discovered a queer anomaly with the JSON result sets I'm getting on my computer vs my wife's computer.</p><p>In fact, on anybody else's computer I've tried so far, EXCEPT MINE, when I select a new city from the left-hand drop-down menu, it returns the correct recordcount shown in the brackets at the top, but the actual number of listings does not match that recordcount. Could someone give that a test and tell me if they're getting the same thing happening? On my laptop, everything works perfectly, whether in IE6, IE7, firefox.</p><p>There are two functions involved to get the data (Don't ask me why. It's complicated.). There is a mismatch in returned records between the two, but the second function is merely converting the first function to JSON, so they should both be returning the same recordcount.</p><p>If someone could vet my code and at least eliminate that as a problem, I would greatly appreciate it. It could be session-related, but that'll be phase two after eliminating the following code as the problem. And I've no idea why it works on my computer but no-one else's.</p><p>The following function gets the record count shown in the brackets next to the city name at the top:</p><p>&lt;cffunction name="getAllSalesByCity" access="remote" returntype="query" output="false" hint="returns all sales by city"&gt; <br>  &lt;cfargument name="thecity" type="string" required="true" /&gt; <br>  &lt;cfset var AllSalesByCity = 0 /&gt; <br>  &lt;cfquery name="AllSalesByCity" datasource="ds"&gt; <br>       SELECT  <br>        sales.record_id, <br>        sales.retailer_id,  <br>        sales.startdate, <br>        sales.enddate, <br>        sales.title, <br>        sales.hours, <br>        sales.description, <br>        sales.pdf, <br>        sales.pdf_url, <br>        sales.details, <br>        sales.keywords, <br>        sales.disabled, <br>        sales.branches, <br>        sales.photo1, <br>        retailers.company_name, <br>        <a href="http://disq.us/url?url=http%3A%2F%2Fretailers.city%3AvB8VMtC4UKuVSlrAFBvOvbeplFQ&amp;cuid=3321886" rel="nofollow noopener" title="retailers.city">retailers.city</a>, <br>        retailers.logo1, <br>        retailers.logo2, <br>        retailers.image1, <br>        retailers.image2 <br>   FROM  sales <br>   INNER JOIN  retailers <br>   ON   retailers.record_id = sales.retailer_id <br>   WHERE  sales.disabled &lt;&gt; 1 <br>   AND   enddate &gt; &lt;cfqueryparam cfsqltype="cf_sql_timestamp" value="#DateAdd("d",-1,Now())#"&gt;  <br>   &lt;cfif arguments.thecity neq ''&gt;  <br>       AND   (branches LIKE &lt;cfqueryparam value="%#arguments.thecity#%" cfsqltype="char" /&gt; &lt;cfif arguments.thecity IS 'Auckland'&gt; OR branches LIKE &lt;cfqueryparam value="%North Shore%" cfsqltype="char" /&gt;&lt;/cfif&gt;) <br>   &lt;/cfif&gt; <br>   ORDER BY sales.startdate <br>  &lt;/cfquery&gt; <br>  &lt;cfreturn AllSalesByCity /&gt; <br> &lt;/cffunction&gt;</p><p>The following function gets the records in JSON format for use with the Spry:</p><p>&lt;cffunction name="getJSONSalesByCity" access="remote" returntype="query" output="false" hint="calls GetAllSalesByCity and changes to JSON format"&gt; <br>      &lt;cfargument name="city" type="string" required="true" default="#<a href="http://disq.us/url?url=http%3A%2F%2Fsession.city%3AhTx4EYzi0FXq6HKQ9ZkZfCMGTm8&amp;cuid=3321886" rel="nofollow noopener" title="session.city">session.city</a>#" /&gt; <br>      &lt;cfset var thecity = <a href="http://disq.us/url?url=http%3A%2F%2Farguments.city%3AWEqXMALf8O6ulhuoTwGtujqEj-M&amp;cuid=3321886" rel="nofollow noopener" title="arguments.city">arguments.city</a>&gt; <br>      &lt;cfset var gasbc = getAllSalesByCity(thecity)&gt; <br>      &lt;cfset var JSONResults = 0&gt; <br>      &lt;cfset JSONResults = QueryNew("RECORD_ID, COMPANY_NAME, RETAILER_ID, TITLE, STARTDATE, ENDDATE, HOURS, KEYWORDS, PHOTO1, LOGO2, DESCRIPTION, PDF, PDF_URL", "Integer, VarChar, Integer, VarChar, VarChar, VarChar, VarChar, VarChar, VarChar, VarChar, VarChar, VarChar, VarChar")&gt; <br>      &lt;cfset newRow = QueryAddRow(JSONResults, #gasbc.recordcount#)&gt; <br>      &lt;cfoutput query="gasbc"&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "RECORD_ID", "#gasbc.record_id#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "COMPANY_NAME", "#gasbc.company_name#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "RETAILER_ID", "#gasbc.retailer_id#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "TITLE", "#gasbc.title#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "STARTDATE", "#dateformat(gasbc.startdate,"dd mmm")#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "ENDDATE", "#dateformat(gasbc.enddate,"dd mmm")#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "HOURS", "#gasbc.hours#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "KEYWORDS", "#left(gasbc.keywords,20)#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "PHOTO1", "#gasbc.photo1#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "LOGO2", "#gasbc.logo2#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "DESCRIPTION", "#gasbc.description#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "PDF", "#gasbc.pdf#", #currentrow#)&gt; <br>       &lt;cfset temp = QuerySetCell(JSONResults, "PDF_URL", "#gasbc.pdf_url#", #currentrow#)&gt; <br>  &lt;/cfoutput&gt; <br>  &lt;cfreturn JSONResults /&gt; <br>&lt;/cffunction&gt;</p><p>I don't know if I've explained that properly. Hope it's understood.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685734">2</a> by Paul
		posted on 9/16/2008 at 2:16 PM
		</div>
		<div class="comment_text"><p>login for the site is username and password: guestshopper.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685749">3</a> by Raymond Camden
		posted on 9/16/2008 at 3:31 PM
		</div>
		<div class="comment_text"><p>For me, I see 31 results. So it works fine for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685746">4</a> by Paul
		posted on 9/16/2008 at 3:42 PM
		</div>
		<div class="comment_text"><p>If you select "Hamilton" from the left-hand nav drop-down menu, does the recordcount still match the number of records?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685748">5</a> by Raymond Camden
		posted on 9/16/2008 at 3:43 PM
		</div>
		<div class="comment_text"><p>Yep, 14. Two pages of 7.</p></div>
	</div>
</div>
		