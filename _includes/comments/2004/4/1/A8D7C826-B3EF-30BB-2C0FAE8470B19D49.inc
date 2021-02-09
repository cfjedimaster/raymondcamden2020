
<div class="comment" id="c_1713615570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615570">1</a> by pedram
		posted on 4/6/2004 at 4:34 PM
		</div>
		<div class="comment_text"><p>hi , <br>i need free coldFusion host<br>can help me ? <br>please email to me</p><p>tnx &amp; bye</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615577">2</a> by Damon Gentry
		posted on 4/8/2004 at 9:26 PM
		</div>
		<div class="comment_text"><p>Yep, we're still seeing the problem after testing the (2nd) hotfix update.  Message from my developers (I'm an admin).</p><p>   This code fails:</p><p>&lt;CFIF IsDefined("attributes.sortby") AND attributes.reorder AND qryList.RecordCount&gt;</p><p>&lt;CFLOCK scope="SESSION" type="EXCLUSIVE" throwontimeout="No" timeout="5"&gt;</p><p>                        &lt;CFQUERY name="session.stListView.Query" dbtype="query"&gt;</p><p>                                    select *</p><p>                                    from session.stListView.Query</p><p>                                    order by #attributes.sortby#</p><p>                        &lt;/CFQUERY&gt;</p><p>&lt;CFSET qryList = Duplicate(session.stListView["Query"])&gt;</p><p>            &lt;/CFLOCK&gt;</p><p>&lt;/CFIF&gt;</p><p>   This code works (replace duplicate() with a query w/in a query to duplicate a recordset)</p><p>&lt;CFIF IsDefined("attributes.sortby") AND attributes.reorder AND qryList.RecordCount&gt;</p><p>&lt;CFLOCK scope="SESSION" type="EXCLUSIVE" throwontimeout="No" timeout="5"&gt;</p><p>                        &lt;CFQUERY name="session.stListView.Query" dbtype="query"&gt;</p><p>                                    select *</p><p>                                    from session.stListView.Query</p><p>                                    order by #attributes.sortby#</p><p>                        &lt;/CFQUERY&gt;</p><p>&lt;CFQUERY name="qryList" dbtype="query"&gt;</p><p>                                    select * from session.stListView.Query</p><p>                        &lt;/CFQUERY&gt;</p><p>            &lt;/CFLOCK&gt;</p><p>&lt;/CFIF&gt;</p></div>
	</div>
</div>
		