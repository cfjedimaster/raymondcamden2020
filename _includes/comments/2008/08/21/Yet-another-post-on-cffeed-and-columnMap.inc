
<div class="comment" id="c_1713685267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685267">1</a> by Paul
		posted on 1/5/2009 at 10:04 AM
		</div>
		<div class="comment_text"><p>I've only just taken a look at CFFEED and adapted some code I found on someone's website. But something's amiss and I'm sure it's just something stupid I've done. Can some CFFEED aficionado help me out here?</p><p>Webpage is <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bargainz.co.nz%2Findex.cfm%3Fevent%3Drss%3AtRp8EpgX-EjNAiwx3haamo63Ja4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bargainz.co.nz/index.cfm?event=rss">http://www.bargainz.co.nz/i...</a></p><p>It showing all the text running together with no formatting, links etc. I can see the XML in the source though.</p><p>Code is as follows:</p><p>&lt;cfset qry_sales = "#request.qry_allSalesByCity#"&gt;</p><p>&lt;cfset myStruct = StructNew() /&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fmystruct.link%3AaFYmqV9u9I2mIxBTCT4fuoMHugE&amp;cuid=3321886" rel="nofollow noopener" title="mystruct.link">mystruct.link</a> = "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.bargainz.co.nz%3AnxFyFyvb-d35ZMah4eCZg1ceaI8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bargainz.co.nz">http://www.bargainz.co.nz</a>" /&gt;<br>&lt;cfset myStruct.title = "Sales" /&gt;<br>&lt;cfset mystruct.description = "Sales at <a href="http://disq.us/url?url=http%3A%2F%2FBargainz.co.nz%3ADOk5u2-_MPtU43TprrSvA46auEA&amp;cuid=3321886" rel="nofollow noopener" title="Bargainz.co.nz">Bargainz.co.nz</a>" /&gt;<br>&lt;cfset mystruct.pubDate = Now() /&gt;<br>&lt;cfset mystruct.version = "rss_2.0" /&gt;<br>&lt;cfset myStruct.item = ArrayNew(1) /&gt;</p><p>&lt;cfloop query="qry_sales"&gt;<br>	&lt;cfset myStruct.item[currentRow] = StructNew() /&gt;<br>	&lt;cfset myStruct.item[currentRow].guid = structNew() /&gt;<br>	&lt;cfset myStruct.item[currentRow].guid.isPermaLink="NO" /&gt;<br>	&lt;cfset myStruct.item[currentRow].guid.value = '<a href="http://disq.us/url?url=http%3A%2F%2Fwww.bargainz.co.nz%2Findex.cfm%3Fevent%3DpreviewSaleDetail%26CFGRIDKEY%3D%23record_id%23%26id%3D%23retailer_id%23%26usercity%3D%23usercity%23%27%3AFi5DnSLJGnDR7wrIs1xKGxbNkFI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bargainz.co.nz/index.cfm?event=previewSaleDetail&amp;CFGRIDKEY=#record_id#&amp;id=#retailer_id#&amp;usercity=#usercity#'">http://www.bargainz.co.nz/i...</a> /&gt;<br>	&lt;cfset myStruct.item[currentRow].saleDates = #dateFormat(startDate,"dd mm yyy")# - #dateFormat(endDate,"dd mm yyy")# /&gt;<br>	&lt;cfset myStruct.item[currentRow].title = xmlFormat(#title#) /&gt;<br>	&lt;cfset myStruct.item[currentRow].description = StructNew() /&gt;<br>	&lt;cfset myStruct.item[currentRow].description.value = xmlFormat(#description#) /&gt;<br>	&lt;cfset myStruct.item[currentRow].link = '<a href="http://disq.us/url?url=http%3A%2F%2Fwww.bargainz.co.nz%2Findex.cfm%3Fevent%3DpreviewSaleDetail%26CFGRIDKEY%3D%23record_id%23%26id%3D%23retailer_id%23%26usercity%3D%23usercity%23%27%3AFi5DnSLJGnDR7wrIs1xKGxbNkFI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bargainz.co.nz/index.cfm?event=previewSaleDetail&amp;CFGRIDKEY=#record_id#&amp;id=#retailer_id#&amp;usercity=#usercity#'">http://www.bargainz.co.nz/i...</a>  /&gt;<br>&lt;/cfloop&gt;</p><p>&lt;!--- Generate the feed and save it to a file and variable. ---&gt;<br>&lt;cffeed action="create" name="#myStruct#" overwrite="true" xmlVar="myXML" /&gt;</p><p>&lt;cfoutput&gt;#myXML#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685268">2</a> by Raymond Camden
		posted on 1/6/2009 at 7:07 AM
		</div>
		<div class="comment_text"><p>You need your cfcontent tag.</p><p>&lt;cfcontent type="text/xml; charset=utf-8" reset="true"&gt;&lt;cfoutput&gt;#myXML#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685271">3</a> by Misty
		posted on 3/1/2014 at 2:09 PM
		</div>
		<div class="comment_text"><p>Hi, I think this still is not fixed in CF10, any alternative to this</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685250">4</a> by Raymond Camden
		posted on 3/1/2014 at 9:12 PM
		</div>
		<div class="comment_text"><p>To this? By this you mean the issue where you can't map to an invalid RSS key? The bug is just bad error reporting. You don't work around this, you just don't do it. If you are talking about something else, please let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685270">5</a> by Misty
		posted on 3/2/2014 at 8:27 AM
		</div>
		<div class="comment_text"><p>Hi Ray, Yes that seems to be throwing an error, by this does it have some specific set of cfmap values which can be used only, or does it need al columns to be in Upper case</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685263">6</a> by Raymond Camden
		posted on 3/2/2014 at 8:30 AM
		</div>
		<div class="comment_text"><p>.... eh?</p></div>
	</div>
</div>
		