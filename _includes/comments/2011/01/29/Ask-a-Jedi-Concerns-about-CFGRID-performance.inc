
<div class="comment" id="c_1713729305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729305">1</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 1/30/2011 at 12:08 AM
		</div>
		<div class="comment_text"><p>Can you show me an example of that linked method with a scripted query?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729316">2</a> by Raymond Camden
		posted on 1/30/2011 at 12:10 AM
		</div>
		<div class="comment_text"><p>Sorry - linked method?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729315">3</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 1/30/2011 at 12:14 AM
		</div>
		<div class="comment_text"><p>The link you provided in the post.</p><p>I came up with this</p><p>&lt;code&gt;<br>function getEntries(numeric start = 0,numeric numRec = 10,string orderby = "posted asc") {<br>        var retVal = {};<br>        retVal['success'] = true;<br>        var sql = "SELECT   SQL_CALC_FOUND_ROWS id,<br>                            title,<br>                            posted,<br>                            views<br>            	    FROM    tblblogentries<br>                    ORDER BY :orderby<br>                    LIMIT   :start,:numRec";<br>        var q = new Query(name="entries",datasource=VARIABLES.instance.dsn,sql=sql);<br>        q.addParam(name = "start", value = ARGUMENTS.start, cfsqltype = "cf_sql_integer");<br>        q.addParam(name = "numRec", value = ARGUMENTS.numRec, cfsqltype = "cf_sql_integer");<br>        q.addParam(name = "orderby", value = ARGUMENTS.orderby, cfsqltype = "cf_sql_varchar");<br>        try {<br>            var result = q.execute().getResult();<br>            q.setSql("SELECT FOUND_ROWS() as TotalCount");<br>            var totResult = q.execute().getResult();<br>            if (result.recordCount){<br>                retVal['totalCount'] = totResult.totalCount;<br>                retVal['result'] = result;<br>            } else {<br>                throw(type="My_Custom",errorcode="0001",message="No records were returned");<br>            }<br>        } catch (any excpt) {<br>            retVal['success'] = false;<br>            retVal['message'] = excpt.message;<br>        }<br>        return retVal;<br>}<br>&lt;/code&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729320">4</a> by Raymond Camden
		posted on 1/30/2011 at 12:21 AM
		</div>
		<div class="comment_text"><p>Looks right to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729317">5</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 1/30/2011 at 9:40 PM
		</div>
		<div class="comment_text"><p>My only worry with that solution is thread safety from MySQL perspective. We can run multiple queries in a single prepared statement (if it's added to the settings for the datasource), but I haven't found a way to retrieve the results of the additional queries when using a scripted query. By executing my sample code in two separate hits, my worry in a high traffic environment would be in getting the 'count' from a different session's query. I don't know if that would be the case (and can't really test it here). Any ideas on how one would get the additional results of a multi-statement query natively?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729318">6</a> by Raymond Camden
		posted on 1/30/2011 at 9:47 PM
		</div>
		<div class="comment_text"><p>You could just skip the 'special' SQL and do a normal select(count) type SQL. Cache it and when you page over it you won't be rerunning it. Shoot, even if you don't cache it's just two queries per request which won't take more than a gnat's fart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729319">7</a> by Andy Sandefer
		posted on 1/31/2011 at 5:57 AM
		</div>
		<div class="comment_text"><p>@Ray<br>If you're ever looking for a rainy day blog topic I would love you see a CF/jqGrid blog entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729321">8</a> by Raymond Camden
		posted on 1/31/2011 at 5:59 AM
		</div>
		<div class="comment_text"><p>Someone in our community already did - and if I remember right - a good 3 parter. Last time I googled I couldn't find it out - but it has been done - and done well if I remember right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729324">9</a> by Raymond Camden
		posted on 1/31/2011 at 6:00 AM
		</div>
		<div class="comment_text"><p>And of course, now that I look _again_ I find it immediately: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusion-ria.com%2FBlog%2Findex.cfm%2F2009%2F1%2F27%2FUsing-jQuery-based-jqGrid-with-ColdFusion-Part-1%3Aw6tp_nT4OgWRWEKnWf1obkLdpRk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusion-ria.com/Blog/index.cfm/2009/1/27/Using-jQuery-based-jqGrid-with-ColdFusion-Part-1">http://www.coldfusion-ria.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729323">10</a> by Dan Parker
		posted on 2/1/2011 at 1:43 AM
		</div>
		<div class="comment_text"><p>I've used jqGrid w/CF and MS SQL pagination using info from:<br><a href="http://disq.us/url?url=http%3A%2F%2Fblog.pengoworks.com%2Findex.cfm%2F2008%2F6%2F10%2FPagination-your-data-in-MSSQL-2005%3A-EIlydmhPJIO_rzujc9-2Q1144c&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.pengoworks.com/index.cfm/2008/6/10/Pagination-your-data-in-MSSQL-2005">http://blog.pengoworks.com/...</a></p><p>&lt;code&gt;<br>&lt;cfparam name="<a href="http://disq.us/url?url=http%3A%2F%2Fform.page%3A5FQx7xo1S9HCrk46A5Ji5l1Un0g&amp;cuid=3321886" rel="nofollow noopener" title="form.page">form.page</a>" default="1"&gt;<br>&lt;cfparam name="form.rows" default="20"&gt;<br>&lt;cfparam name="form.sidx" default=""&gt;<br>&lt;cfparam name="form.sord" default="desc"&gt;<br>&lt;cfparam name="form.export" default="false"&gt;</p><p>&lt;cfquery name="myquery" datasource="#APPLICATION.Datasource#"&gt;<br>		with pagination as<br>(SELECT row_number() over (ORDER BY <br>	&lt;cfif len(form.sidx)&gt;#form.sidx# #form.sord#&lt;cfelse&gt;Default&lt;/cfif&gt;) as rowNo,<br>...query...<br>) <br>select *, (select count(*) from pagination) as totalResults<br>from pagination<br>&lt;cfif NOT form.export&gt;where <br>    RowNo between #NumberFormat((form.rows*<a href="http://disq.us/url?url=http%3A%2F%2Fform.page%3A5FQx7xo1S9HCrk46A5Ji5l1Un0g&amp;cuid=3321886" rel="nofollow noopener" title="form.page">form.page</a>)-form.rows+1,99999999999999999999)# and #NumberFormat(form.rows*(<a href="http://disq.us/url?url=http%3A%2F%2Fform.page%3A5FQx7xo1S9HCrk46A5Ji5l1Un0g&amp;cuid=3321886" rel="nofollow noopener" title="form.page">form.page</a>),99999999999999999999)#   <br>	&lt;/cfif&gt;<br>order by<br>    rowNo<br>&lt;/cfquery&gt;<br>&lt;/code&gt;</p><p>export was our own option, for using the tabletogrid method w/o pagination, or reusing the query for csv export, etc. Probably not the best code, but should hopefully be a start for someone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729322">11</a> by Dan Parker
		posted on 2/1/2011 at 1:49 AM
		</div>
		<div class="comment_text"><p>We also have a wrapper for jqGrid that takes a CF Query, and a list of columns to create the JSON for the grid. Again probably not the best code, but maybe useful to someone as a start.<br>(Also has a debug variable check to optionally show the query and results in page for troubleshooting, we add it to our URLs)</p><p>&lt;code&gt;<br>&lt;cfsetting enablecfoutputonly="yes" showdebugoutput="no"&gt;<br>&lt;cfparam name="MyQuery" type="query"&gt;<br>&lt;cfparam name="Columns" default="#MyQuery.ColumnList#"&gt;<br>&lt;cfif isDefined("Columns") and Len(Columns)&gt;<br>&lt;!--- &lt;cfheader name="Pragma" value="public"&gt;<br>&lt;cfheader name="Cache-control" value="private"&gt;<br>&lt;cfheader name="Expires" value="-1"&gt; ---&gt;</p><p>&lt;cfset jsonstr = createObject("java","java.lang.StringBuffer")&gt;<br>&lt;cfscript&gt;<br>	jsonstr.append("{" &amp; Chr(13));<br>	if(MyQuery.Recordcount gt 0) {<br>		jsonstr.append('"total": ' &amp; ceiling(MyQuery.TOTALRESULTS/form.rows) &amp; ',' &amp; Chr(13));<br>	} else {<br>		jsonstr.append('"total": 0,' &amp; Chr(13));<br>	}<br>	jsonstr.append('"page": ' &amp; <a href="http://disq.us/url?url=http%3A%2F%2Fform.page%3A5FQx7xo1S9HCrk46A5Ji5l1Un0g&amp;cuid=3321886" rel="nofollow noopener" title="form.page">form.page</a> &amp; ',' &amp; Chr(13));<br>	if(MyQuery.Recordcount gt 0) {<br>		jsonstr.append('"records": ' &amp; val(MyQuery.TOTALRESULTS) &amp; ',' &amp; Chr(13) &amp; '"rows": [' &amp; Chr(13));<br>	} else {<br>		jsonstr.append('"records": 0' &amp; ',' &amp; Chr(13) &amp; '"rows": [' &amp; Chr(13));<br>	}<br>&lt;/cfscript&gt;<br>	&lt;cfloop query="MyQuery"&gt;<br>	&lt;cfscript&gt;<br>		if(IsDefined("qCounter")){qCounter = IncrementValue(qCounter);}else{qCounter = 1;}<br>		jsonstr.append('{"id":"' &amp; rowno &amp; '","cell":[');<br>		rc = false;<br>	&lt;/cfscript&gt;<br>		&lt;cfloop index="i" list="#Columns#"&gt;<br>			&lt;cfscript&gt;<br>				if(IsDefined("vCounter")){vCounter = IncrementValue(vCounter);}else{vCounter = 1;}<br>				if(rc){jsonstr.append(",");}<br>			&lt;/cfscript&gt;<br>			&lt;cfset jsonstr.append('"' &amp; replace(replace(replace(Evaluate(i),Chr(13),"\n","all"),Chr(10),"","all"),"""","\""","all") &amp; '"')&gt;<br>			&lt;cfscript&gt;rc=true;&lt;/cfscript&gt;<br>		&lt;/cfloop&gt;<br>		&lt;cfscript&gt;<br>			jsonstr.append("]}");<br>			if (qCounter != MyQuery.RecordCount) jsonstr.append("," &amp; Chr(13));<br>		&lt;/cfscript&gt;	<br>	&lt;/cfloop&gt;<br>		&lt;cfscript&gt;<br>			jsonstr.append("]" &amp; Chr(13) &amp; "}");<br>		&lt;/cfscript&gt;<br>&lt;cfif NOT isDefined("debug")&gt;<br>	&lt;cfcontent type="application/json" variable="#ToBinary(ToBase64(jsonstr.toString()))#" reset="yes" /&gt;<br>&lt;cfelse&gt;<br>	&lt;cfsetting enablecfoutputonly="no" showdebugoutput="True"&gt;<br>	&lt;cfoutput&gt;#jsonstr.toString()#&lt;/cfoutput&gt;<br>	&lt;cfdump var="#MyQuery#"&gt;<br>&lt;/cfif&gt;<br>&lt;cfelse&gt;<br>Columns empty or not defined!<br>&lt;/cfif&gt;<br>&lt;/code&gt;</p></div>
	</div>
</div>
		