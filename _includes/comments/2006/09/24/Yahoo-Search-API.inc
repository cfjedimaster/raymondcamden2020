
<div class="comment" id="c_1713657756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657756">1</a> by Jeff Gladnick
		posted on 9/25/2006 at 1:08 AM
		</div>
		<div class="comment_text"><p>We use the yahoo search API at work.  When we first tested it, to my surprise, we found it to be faster then google's, and the search results were about the same.  plus yahoo gives you like 3-5 more searches per day then google.</p><p>If anyone would like to code, shoot me an email or reply here.</p><p>jeff -dot- gladnick -at- gmail -dot- com</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657752">2</a> by Joe Mastroianni
		posted on 9/25/2006 at 6:35 PM
		</div>
		<div class="comment_text"><p>I had the same issue about a year ago with the Amazon REST API. Needless to say it took some time to figure out I had to set the charset attribute in excatly the same way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657755">3</a> by Raymond Camden
		posted on 9/25/2006 at 6:37 PM
		</div>
		<div class="comment_text"><p>Interesting that the same issue applies with Amazon!</p><p>Ok - later today I'll be posting a real world example. (Well, I'm making it up, but it will still bea bit more useful I think.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657757">4</a> by Jeff Gladnick
		posted on 9/25/2006 at 6:42 PM
		</div>
		<div class="comment_text"><p>Here is the example our intern whipped up:</p><p>----------------------------------<br>&lt;cfoutput&gt;&lt;form method="get" action="search_yahoo.cfm"&gt;&lt;input type="Text" size="35" name="query" value="#url.query#"&gt;&lt;input type="submit" value="Search"&gt;&lt;/form&gt;&lt;/cfoutput&gt;<br>&lt;!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN"&gt;<br>	&lt;!--- Set your unique Yahoo! Application ID ---&gt;<br>	&lt;cfset appID = "&lt;&lt;&lt;&lt;YOUR ID HERE&gt;&gt;&gt;&gt;&gt;"&gt;</p><p>	&lt;!--- Grab the incoming search query ---&gt;<br>	&lt;cfset query = "#URL.query#"&gt;</p><p>	&lt;!--- Construct a Yahoo! Search Query with only required options ---&gt;<br>	&lt;cfset req_url = "<a href="http://disq.us/url?url=http%3A%2F%2Fapi.search.yahoo.com%2F%3AVIbJ363Yd6K1BWH2u4HCNvK2MYc&amp;cuid=3321886" rel="nofollow noopener" title="http://api.search.yahoo.com/">http://api.search.yahoo.com/</a>"&gt;<br>	&lt;cfset req_url = req_url &amp; "WebSearchService/V1/webSearch?"&gt;<br>	&lt;cfset req_url = req_url &amp; "appid=#appID#"&gt;<br>	&lt;cfset req_url = req_url &amp; "&amp;query=#query#"&gt;<br>	&lt;cfset req_url = req_url &amp; "&amp;language=en"&gt;<br>	&lt;cfset req_url = req_url &amp; "&amp;site=<a href="http://disq.us/url?url=http%3A%2F%2Fwww.pma.com%3AaBKdMyT9xypPvD-eD8bJMl8PCKU&amp;cuid=3321886" rel="nofollow noopener" title="www.pma.com">www.pma.com</a>"&gt;<br>	&lt;cfset req_url = req_url &amp; "&amp;results=10"&gt;<br>	&lt;cfset req_url = req_url &amp; "&amp;start=#url.start#"&gt;</p><p>	&lt;cfset tick = GetTickCount()&gt;		<br>	&lt;!--- Make Request ---&gt;<br>	&lt;cfhttp url="#req_url#" method="GET" charset="utf-8"&gt;<br>		&lt;cfhttpparam type="Header" name="charset" value="utf-8" /&gt;<br>	&lt;/cfhttp&gt;</p><p>	&lt;!--- Parse Response ---&gt;<br>	&lt;cfset passed=false&gt;<br>	&lt;cfset response = #XMLParse(cfhttp.fileContent)#&gt;<br>		&lt;cfif IsDefined("response.resultset.result")&gt;<br>		&lt;cfset results = #response.ResultSet.Result#&gt;		<br>		&lt;cfset passed=true&gt;<br>		&lt;/cfif&gt;</p><p>	&lt;cfset tock = GetTickCount()&gt;<br>	&lt;cfset cfx_searchtime = (tock - tick)/1000&gt;<br>	&lt;cfoutput&gt;Search Took &lt;b&gt;#cfx_searchtime#&lt;/b&gt; (locally) seconds.&lt;br&gt;&lt;br&gt;&lt;/cfoutput&gt;</p><p>	&lt;!--- Loop Through Response ---&gt;<br>	&lt;cfif passed&gt;<br>	&lt;cfoutput&gt;<br>	&lt;cfloop from="1" to="#ArrayLen(results)#" index="i"&gt;<br>		&lt;a href="#results[i].ClickUrl.xmlText#" class="title"&gt;#results[i].Title.xmlText#&lt;/a&gt;&lt;br&gt;<br>		&lt;div style="width:500px;"&gt;#results[i].Summary.xmlText#&lt;/div&gt;<br>		&lt;span class="info"&gt;#results[i].Url.xmlText# - #results[i].Cache.xmlText# &lt;/span&gt;&lt;br&gt;&lt;br&gt;<br>	&lt;/cfloop&gt;<br>	&lt;/cfoutput&gt;</p><p>	&lt;!--- output pages ---&gt;<br>	&lt;center&gt;<br>		&lt;cfset lstart = 0&gt;<br>		&lt;cfset n = 0&gt;<br>		&lt;cfoutput&gt;<br>		&lt;cfif url.start&gt;<br>			&lt;cfset p = url.start-url.max&gt;&amp;laquo; &lt;A href="?query=#URLEncodedFormat(query)#&amp;start=#p#&amp;max=#url.max#"&gt;Previous&lt;/A&gt;&amp;nbsp;&amp;nbsp;&amp;nbsp;<br>		&lt;/cfif&gt;<br>		&lt;cfloop from="1" to="#maxpages#" index="i"&gt;<br>			&lt;cfif lstart neq url.start&gt;<br>				 &lt;A href="?query=#URLEncodedFormat(query)#&amp;start=#lstart#&amp;max=#url.max#"&gt;#i#&lt;/A&gt;<br>			&lt;cfelse&gt;#i# <br>				&lt;cfset n = lstart + url.max&gt;<br>			&lt;/cfif&gt;<br>				&lt;cfset lstart = lstart + url.max&gt;<br>		&lt;/cfloop&gt;<br>			&lt;cfif n&gt;<br>				&amp;nbsp;&amp;nbsp;&amp;nbsp;&lt;A href="?query=#URLEncodedFormat(query)#&amp;start=#n#&amp;max=#url.max#"&gt;Next&lt;/A&gt; &amp;raquo;<br>			&lt;/cfif&gt;<br>		&lt;/cfoutput&gt;<br>	&lt;/center&gt;<br>&lt;cfelse&gt;<br>No Results Found<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657759">5</a> by Dan G. Switzer, II
		posted on 9/25/2006 at 7:17 PM
		</div>
		<div class="comment_text"><p>Just curious, but is there a way to filter results not to just a site (domain), but also to url pattern?</p><p>I know you could filter out the ClickUrl node, but I'm wondering if the Yahoo search results has a method of doing this internally so that the total results found number is accurate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657760">6</a> by Raymond Camden
		posted on 9/25/2006 at 7:20 PM
		</div>
		<div class="comment_text"><p>I'm not seeing anything like that in the doc. I could be wrong of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657767">7</a> by arun
		posted on 9/25/2006 at 7:39 PM
		</div>
		<div class="comment_text"><p>where is the source??</p></div>
	</div>
</div>
		