
<div class="comment" id="c_1713722028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722028">1</a> by Daniel Harvey
		posted on 2/15/2010 at 11:55 PM
		</div>
		<div class="comment_text"><p>I think the most difficult part of this would be trying to order them in order of most relevant.  I can think of several ways and it can get complicated fast.</p><p>Here are some ways you can try to order them:</p><p>-How many words are actually matched out of the total words searched.<br>-Order of the words in relation to the search string.<br>-How many times the words show up in the document.<br>-In this case, possibly an artname has more relevance than the description?<br>-If the first word had a match it would have more relevance than if the last word matched.<br>-Can you weight results in the database that would be most popular or more sought after?</p><p>I don't know if this adds to what you were getting at but I think for better use it does deserve to be in the conversation.  I think just finding matches would be a simple problem to actually giving the users the best result first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722027">2</a> by Raymond Camden
		posted on 2/16/2010 at 1:58 AM
		</div>
		<div class="comment_text"><p>Agreed - providing a score of some kind would be useful. Mine simply finds them all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722031">3</a> by Wade miller
		posted on 2/16/2010 at 3:10 AM
		</div>
		<div class="comment_text"><p>This highlights the many complexities in building a search app. You want the results to be as precise as possible, but at the same time you want it to accommodate the possibilities that exist for any one search.</p><p>For instance, what if you liked the painting but had mixed up the title and thought it was "Dude in Jeans" or "Guy in Jeans?" Using the AND prefix, you don't get that result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722015">4</a> by OlPeculier
		posted on 2/16/2010 at 4:46 PM
		</div>
		<div class="comment_text"><p>I did something like this t'other day:</p><p>&lt;cfquery name="search" datasource="#application.datasource#"&gt;<br>	select etc.<br>	from etc.<br>	where 1=1<br>	&lt;cfloop index="i" list="#form.keywords#" delimiters=" "&gt;<br>		and (product_description1 like '%#i#%' or<br>			 product_description2 like '%#i#%') <br>	&lt;/cfloop&gt;<br>&lt;/cfquery&gt;</p><p>which removes the need for the listlen and listgetat...</p><p>...for what it's worth</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722033">5</a> by Daniel Harvey
		posted on 2/16/2010 at 6:34 PM
		</div>
		<div class="comment_text"><p>This actually sounds like a fun project.  Maybe once I get my current work done I will give this a shot and see what I can come up with.  I would be interested in ideas from other people on how they think the rankings should be done.</p><p>I know I studied Google's PageRank algorithm before and I think this would be great for me to use my experience from that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722026">6</a> by Steve Nelson
		posted on 2/16/2010 at 8:19 PM
		</div>
		<div class="comment_text"><p>One of my favorite searches I wrote, probably 10 years ago,  took all the permutations of the search terms and did separate searches for each combination of words, the unioned them all together. It was a bit processor intensive, but after a bit of caching, that wasn't a big deal.</p><p>For example, search for: "red clown shoes"<br>would search for:</p><p>red and clown and shoes<br>red and clown<br>red and shoes<br>clown and shoes<br>red<br>clown<br>shoes</p><p>So:</p><p>select * from table where description like '%red%' and description like '%clown%' and description like '%shoes%'<br>union<br>select * from table where description like '%red%' and '%clown%'<br>union<br>select * from table where description like '%red%' and '%shoes%'<br>union<br>select * from table where description like '%clown%' and '%shoes%'<br>union<br>select * from table where description like '%red%'<br>union<br>select * from table where description like '%clown%'<br>union<br>select * from table where description like '%shoes%'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722032">7</a> by Daniel Harvey
		posted on 2/16/2010 at 8:25 PM
		</div>
		<div class="comment_text"><p>@Steve</p><p>I think that would give you anything related to what you are searching for and does limited amount of relevance sorting.  What I am interested is coming up with more of a function or plugin that would allow dynamic tables and column names to be search, such as the name and description in the example.  I think any good search needs to balance performance and quality results.  I feel most people would rather see something a little less quality and get it quicker rather than wait to see the best quality.  As the best quality is only relative if you can truly understand what they are searching for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722030">8</a> by Steve Nelson
		posted on 2/16/2010 at 9:23 PM
		</div>
		<div class="comment_text"><p>This permutation search is neat in that it puts the most relevant (i.e. the results with the most search terms) at the top of the list while still not ignoring the semi-relevant.</p><p>It makes it much harder to do when including multiple fields though. Well not harder, but more queries. Of course you could just put ORs in between each field, but AND filters tend to give you better results. One possible solution (I'm not sure if this is allowed with a like search, try it)  is to combine multiple fields together on the left side of a like statement. i.e.:</p><p>where name + ' ' + description like '%red%' and name + ' ' + description like '%clown%' and name + ' ' + description like '%shoes%'</p><p>Anyone know if that is that legal SQL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722025">9</a> by jlig
		posted on 2/8/2012 at 9:19 PM
		</div>
		<div class="comment_text"><p>Ray, Nice search that works perfectly with just two tables, but when I add in the third table (v_ac_srv_address) as below, my search just runs forever and never returns any results?</p><p>When I replace your WHERE/CFLOOP clause with just a simple <br>WHERE ac_srv_phoneno.SERVICE_NUMBER LIKE &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#<a href="http://disq.us/url?url=http%3A%2F%2Furl.search%3AoUPwa4qnI-fIAD7OTC7z-3GJgJM&amp;cuid=3321886" rel="nofollow noopener" title="url.search">url.search</a>#"&gt; it works fine?</p><p>---------------------------------------<br>&lt;cfparam name="<a href="http://disq.us/url?url=http%3A%2F%2Furl.search%3AoUPwa4qnI-fIAD7OTC7z-3GJgJM&amp;cuid=3321886" rel="nofollow noopener" title="url.search">url.search</a>" default=""&gt;<br>&lt;cfparam name="<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>" default="#<a href="http://disq.us/url?url=http%3A%2F%2Furl.search%3AoUPwa4qnI-fIAD7OTC7z-3GJgJM&amp;cuid=3321886" rel="nofollow noopener" title="url.search">url.search</a>#"&gt;<br>&lt;cfparam name="url.start" default="1"&gt;<br>&lt;cfparam name="getCust.recordcount" default="0"&gt;</p><p>&lt;cfset perpage = 10&gt;<br>&lt;cfif len(trim(<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>))&gt;<br>	&lt;cfset search = "%" &amp; trim(<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>) &amp; "%"&gt;<br>	&lt;cfquery name="getCust" datasource="mbs"&gt;<br>SELECT   AC_ACCT.SUBSCRIBER_ID AS SubID<br>    , AC_ACCT.ACCT_ID AS ActID<br>    , DATE_FORMAT(AC_ACCT.ACTIVATION_DATE,'%m-%d-%Y') AS ActDT<br>    , AC_ACCT.ACCT_TYPE AS ActType<br>    , AC_ACCT.ACCOUNT_DESC AS ActDes<br>    , v_ac_srv_address.ADDRESS AS PhyAdd <br>    , v_ac_srv_address.CITY_NAME AS PhyCty<br>    , AC_ACCT.ACTIVE_SERVICES AS ActSta <br>    , v_ac_srv_address.POSTAL_CODE AS AddZip<br>    , v_ac_srv_address.COUNTY_NAME AS AddCnty<br>    , ac_srv_phoneno.SERVICE_NUMBER AS PhoNum</p><p>FROM      ac_srv_phoneno RIGHT OUTER JOIN ac_acct ON ac_srv_phoneno.ACCT_ID = ac_acct.ACCT_ID LEFT OUTER JOIN v_ac_srv_address ON v_ac_srv_address.ACCT_ID = ac_acct.ACCT_ID</p><p>	WHERE</p><p>    	&lt;cfloop index="x" from="1" to="#listLen(<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>, " ")#"&gt;<br>			&lt;cfset word = listGetAt(<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>, x, " ")&gt;<br>			&lt;cfset word = "%" &amp; ucase(word) &amp; "%"&gt;<br>			&lt;cfif x neq 1&gt;<br>			and<br>			&lt;/cfif&gt;	<br>			(	<br>			ucase(AC_ACCT.ACCT_ID) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>			or<br>			ucase(AC_ACCT.ACCOUNT_DESC) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>            or<br>            ucase(v_ac_srv_address.ADDRESS) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>			or<br>			ucase(v_ac_srv_address.CITY_NAME) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>            or<br>            ucase(v_ac_srv_address.POSTAL_CODE) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>            or<br>            ucase(ac_srv_phoneno.SERVICE_NUMBER) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>			)<br>		&lt;/cfloop&gt;<br>        GROUP BY  AC_ACCT.ACCT_ID<br>    ORDER BY AC_ACCT.ACCOUNT_DESC ASC</p><p>	&lt;/cfquery&gt;<br>-------------------------------------------</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722029">10</a> by Raymond Camden
		posted on 2/8/2012 at 9:38 PM
		</div>
		<div class="comment_text"><p>What I'd do is check the generated SQL. See if something looks wrong there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722034">11</a> by jlig
		posted on 2/8/2012 at 9:49 PM
		</div>
		<div class="comment_text"><p>SQL is correct.. I use ColdFusion Report builder to generate &amp; test my SQL visually and it runs fast &amp; returns correct results, for example this SQL works just fine: <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2Fsm1_search.jpg%3Agkevpz4zYq0ncqEVKu8nuszwrGU&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/sm1_search.jpg">http://cerberus.clearwave.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722036">12</a> by Raymond Camden
		posted on 2/8/2012 at 9:51 PM
		</div>
		<div class="comment_text"><p>It is correct SQL, but when you _run_ it, how many results do you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722035">13</a> by jlig
		posted on 2/8/2012 at 9:59 PM
		</div>
		<div class="comment_text"><p>I tested the WHERE to search for 'jabber' and it returns 4 results (see here) <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2Fsm1_search2.jpg%3Amhnwy7R3gRyoW-yzDfmlRT5c8-c&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/sm1_search2.jpg">http://cerberus.clearwave.c...</a></p><p>It's interesting that it works in CFRB for a single criteria, but not at all in a CFM page with multiple criteria?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722016">14</a> by Raymond Camden
		posted on 2/8/2012 at 10:43 PM
		</div>
		<div class="comment_text"><p>But what happens, in your SQL Server, when you multiple criteria. Your test was for single. I want you to get the SQL from CF when multiple are used and try that. Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722017">15</a> by jlig
		posted on 2/8/2012 at 11:00 PM
		</div>
		<div class="comment_text"><p>Here is multiple criteria in CFRB (works fine): <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2Fsm1_search3.jpg%3AoXAQmYi0x4WTER1oe8X02bVrnmw&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/sm1_search3.jpg">http://cerberus.clearwave.c...</a></p><p>- On the MySQL server, it shows the query executing forever..<br>- When I use EXPLAIN, it shows me the query w/variables</p><p>USE `mbs`;<br>EXPLAIN<br>SELECT   AC_ACCT.SUBSCRIBER_ID AS SubID<br>    , AC_ACCT.ACCT_ID AS ActID<br>    , DATE_FORMAT(AC_ACCT.ACTIVATION_DATE,'%m-%d-%Y') AS ActDT<br>    , AC_ACCT.ACCT_TYPE AS ActType<br>    , AC_ACCT.ACCOUNT_DESC AS ActDes<br>    , v_ac_srv_address.ADDRESS AS PhyAdd <br>    , v_ac_srv_address.CITY_NAME AS PhyCty<br>    , AC_ACCT.ACTIVE_SERVICES AS ActSta <br>    , v_ac_srv_address.POSTAL_CODE AS AddZip<br>    , v_ac_srv_address.COUNTY_NAME AS AddCnty<br>    , ac_srv_phoneno.SERVICE_NUMBER AS PhoNum</p><p>FROM      ac_srv_phoneno RIGHT OUTER JOIN ac_acct ON ac_srv_phoneno.ACCT_ID = ac_acct.ACCT_ID LEFT OUTER JOIN v_ac_srv_address ON v_ac_srv_address.ACCT_ID = ac_acct.ACCT_ID</p><p>	WHERE</p><p>			(	<br>			ucase(AC_ACCT.ACCT_ID) like '%JA%'<br>			or<br>			ucase(AC_ACCT.ACCOUNT_DESC) like '%JA%'<br>            or<br>            ucase(v_ac_srv_address.ADDRESS) like '%JA%'<br>			or<br>			ucase(v_ac_srv_address.CITY_NAME) like '%JA%'<br>            or<br>            ucase(v_ac_srv_address.POSTAL_CODE) like '%JA%'<br>            or<br>            ucase(ac_srv_phoneno.SERVICE_NUMBER) like '%JA%'<br>			)</p><p>			and</p><p>			(	<br>			ucase(AC_ACCT.ACCT_ID) like '%618%'<br>			or<br>			ucase(AC_ACCT.ACCOUNT_DESC) like '%618%'<br>            or<br>            ucase(v_ac_srv_address.ADDRESS) like '%618%'<br>			or<br>			ucase(v_ac_srv_address.CITY_NAME) like '%618%'<br>            or<br>            ucase(v_ac_srv_address.POSTAL_CODE) like '%618%'<br>            or<br>            ucase(ac_srv_phoneno.SERVICE_NUMBER) like '%618%'<br>			)</p><p>        GROUP BY  AC_ACCT.ACCT_ID<br>    ORDER BY AC_ACCT.ACCOUNT_DESC ASC</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722018">16</a> by Raymond Camden
		posted on 2/8/2012 at 11:04 PM
		</div>
		<div class="comment_text"><p>Not sure what CFRB is. Hmm. Nothing looks terribly odd here. I'd start by removing stuff. Like maybe the entire second clause. See if you can get it down to the basics.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722019">17</a> by jlig
		posted on 2/8/2012 at 11:59 PM
		</div>
		<div class="comment_text"><p>CFRB = ColdFusion Report Builder (those image links I reference before are snapshots from the Query Builder)</p><p>Anyway, some observances..<br>- If I remove all WHERE criteria referencing the 3rd table, it works?<br>- If I add back even one of the criteria for that 3rd table, it doesn't work?<br>- The issue is definitely in the WHERE clause..</p><p>Looks like there is an issue with the OR/AND/variables code when using more than two tables since it works with only two, (and all three in CFRB?)</p><p>Thanks again for cool code..<br>I may just forgo the fancy "multiple word search"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722024">18</a> by Raymond Camden
		posted on 2/10/2012 at 4:21 AM
		</div>
		<div class="comment_text"><p>Sorry I couldn't help here. Got to be something simple. If you do figure it out, please post back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722022">19</a> by jlig
		posted on 3/19/2013 at 5:12 PM
		</div>
		<div class="comment_text"><p>Ray, I'm using your query above with my own table &amp; fields (see below)</p><p>- This search works great except in the case of an apostrophe<br>- It will not find any records that contain apostrophe's<br>- How do I handle cases when there might be an apostrophe in the AC_ACCT.ACCOUNT_DESC field?<br>- I do not have the option to change the data fed into this query, so I have to deal with the apostrophe in my query.</p><p>------------------------------------------<br>&lt;cfparam name="<a href="http://disq.us/url?url=http%3A%2F%2Furl.search%3AoUPwa4qnI-fIAD7OTC7z-3GJgJM&amp;cuid=3321886" rel="nofollow noopener" title="url.search">url.search</a>" default=""&gt;<br>&lt;cfparam name="<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>" default="#<a href="http://disq.us/url?url=http%3A%2F%2Furl.search%3AoUPwa4qnI-fIAD7OTC7z-3GJgJM&amp;cuid=3321886" rel="nofollow noopener" title="url.search">url.search</a>#"&gt;<br>&lt;cfparam name="url.start" default="1"&gt;<br>&lt;cfparam name="getCust.recordcount" default="0"&gt;</p><p>&lt;cfset perpage = 10&gt;<br>&lt;cfif len(trim(<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>))&gt;<br>	&lt;cfset search = "%" &amp; trim(<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>) &amp; "%"&gt;<br>	&lt;cfquery name="getCust" datasource="mbs"&gt;<br>SELECT    ac_acct.ACCT_ID AS ActID<br>, AC_ACCT.SUBSCRIBER_ID AS SubID<br>, DATE_FORMAT(AC_ACCT.ACTIVATION_DATE,'%m-%d-%Y') AS ActDT<br>, ac_acct.NUM_ACTIVE_SRV<br>, AC_ACCT.ACTIVE_SERVICES AS ActSta<br>, AC_ACCT.ACCT_TYPE AS ActType<br>, AC_ACCT.ACCOUNT_DESC AS ActDes<br>, v_ac_srv_address.ADDR_TYPE<br>, v_ac_srv_address.ADDRESS AS PhyAdd<br>, v_ac_srv_address.CITY_NAME AS PhyCty<br>, v_ac_srv_address.STATE_PROV_ABBR<br>, v_ac_srv_address.POSTAL_CODE AS AddZip<br>, v_ac_srv_address.COUNTY_NAME AS AddCnty<br>, v_ac_srv_address.EFF_FROM_DATE<br>, v_ac_srv_address.EFF_THRU_DATE</p><p>FROM      ac_acct LEFT OUTER JOIN v_ac_srv_address ON ac_acct.ACCT_ID = v_ac_srv_address.ACCT_ID</p><p>	WHERE</p><p>    	&lt;cfloop index="x" from="1" to="#listLen(<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>, " ")#"&gt;<br>			&lt;cfset word = listGetAt(<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>, x, " ")&gt;<br>			&lt;cfset word = "%" &amp; ucase(word) &amp; "%"&gt;<br>			&lt;cfif x neq 1&gt;<br>			and<br>			&lt;/cfif&gt;	<br>			(	<br>			ucase(AC_ACCT.ACCT_ID) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>			or<br>            ucase(AC_ACCT.SUBSCRIBER_ID) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>			or<br>			ucase(AC_ACCT.ACCOUNT_DESC) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>            or<br>            ucase(v_ac_srv_address.ADDRESS) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>			or<br>			ucase(v_ac_srv_address.CITY_NAME) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>            or<br>            ucase(v_ac_srv_address.POSTAL_CODE) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>            or<br>            ucase(v_ac_srv_address.COUNTY_NAME) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#word#"&gt;<br>			)<br>		&lt;/cfloop&gt;<br>       GROUP BY  AC_ACCT.ACCT_ID<br>ORDER BY AC_ACCT.ACCOUNT_DESC ASC</p><p>	&lt;/cfquery&gt;<br>&lt;cfelse&gt;<br>	&lt;cfset noSearch = true&gt;<br>&lt;/cfif&gt;<br>-----------------------------------</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722023">20</a> by Raymond Camden
		posted on 3/19/2013 at 6:48 PM
		</div>
		<div class="comment_text"><p>Um, wow, you got me. An apostrophe shouldn't cause an issue.</p></div>
	</div>
</div>
		