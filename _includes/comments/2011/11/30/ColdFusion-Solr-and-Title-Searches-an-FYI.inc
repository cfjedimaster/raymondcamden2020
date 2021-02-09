
<div class="comment" id="c_1713737043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737043">1</a> by dcs
		posted on 12/23/2011 at 7:38 AM
		</div>
		<div class="comment_text"><p>When you create a Solr collection in ColdFusion it creates the title field using the "text_ws" type. What you can do if you want the title field to act more or less like it did under Verity is to change that "text_ws" (a case-sensitive type) to "text" (a case-insensitive type) in the schema.xml file (under Windows this can be found under C:\ColdFusion9\collections\&lt;collection_name&gt;\conf\schema.xml, assuming it was created in the default location) and restart the Solr service. That might be more than most people are prepared to do. The only issue with using the custom1 field or another custom field is that it keeps you from using that field for some other piece of data. Hope this helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737045">2</a> by dcs
		posted on 1/11/2012 at 8:13 PM
		</div>
		<div class="comment_text"><p>Just as a followup, I blogged on this issue here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.thefaberfamily.org%2Fsearch-smith%2F2011%2F12%2Fcoldfusion-9-upgrading-from-verity-to-solr%2F%3AmPr5Sie-YDz7XAaHXHYssCX5C6c&amp;cuid=3321886" rel="nofollow noopener" title="http://www.thefaberfamily.org/search-smith/2011/12/coldfusion-9-upgrading-from-verity-to-solr/">http://www.thefaberfamily.o...</a></p><p>Truthfully, I think it is a bug in the way CF creates the Solr collection (why should "title" all of a sudden be case-sensitive?) but it is easy enough to fix schema.xml, restart the Solr service, and index the collection.</p></div>
	</div>
</div>
		