
<div class="comment" id="c_1713717667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717667">1</a> by Susan
		posted on 8/15/2009 at 5:49 AM
		</div>
		<div class="comment_text"><p>Does this ORM paging fix the problem with Maxrows in cfquery?  Can ORM handle retrieving joins or subqueries?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717669">2</a> by Raymond Camden
		posted on 8/15/2009 at 3:15 PM
		</div>
		<div class="comment_text"><p>I don't think it is a _problem_ in cfquery. It is expected behavior (now that I've learned about it working at the JDBC level). But as to how the paging is done, I'm not sure. I need to get a tool to inspect the queries coming into MySQL - or start logging SQL via CF9 (which is possible, but I can't remember the setting yet - will blog it when I find it).</p><p>HQL can do joins. Not sure on subqueries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717668">3</a> by Raymond Camden
		posted on 8/15/2009 at 3:17 PM
		</div>
		<div class="comment_text"><p>Bam: <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jboss.org%2Fhibernate%2Fstable%2Fcore%2Freference%2Fen%2Fhtml%2Fqueryhql.html%23queryhql-subqueries%3AWgKKkv_RotXBhKwTSiZc9PLBJJI&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jboss.org/hibernate/stable/core/reference/en/html/queryhql.html#queryhql-subqueries">http://docs.jboss.org/hiber...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717670">4</a> by Rupesh Kumar
		posted on 8/17/2009 at 11:07 AM
		</div>
		<div class="comment_text"><p>@Susan, ORM does not use the driver's maxrows but generates the DB specific query for maxrows. So the filtering happens at the database level instead of the driver. Also, hql can handle joins as well as subqueries.</p><p>@Ray,For a quick ref, here is my post for sql logging :-)<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rupeshk.org%2Fblog%2Findex.php%2F2009%2F07%2Fcoldfusion-orm-how-to-log-sql%2F%3AcYln_4A152YinRs-Dhqj7SJODkw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rupeshk.org/blog/index.php/2009/07/coldfusion-orm-how-to-log-sql/">http://www.rupeshk.org/blog...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717671">5</a> by Raymond Camden
		posted on 8/18/2009 at 1:56 AM
		</div>
		<div class="comment_text"><p>Thanks for sharing this Rupesh. I knew you had blogged it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717672">6</a> by Susan
		posted on 8/19/2009 at 4:04 PM
		</div>
		<div class="comment_text"><p>Ray, thanks for the ORM demo.  I can't wait until CF9 is out.</p><p>@Rupesh, thanks for the info on subqueries.  I'll have to give it a try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717673">7</a> by Patrick Heppler
		posted on 5/26/2010 at 3:17 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>nice demo. Would be a nice feature if the cfc could return all entries. Instead of &lt;cfset total = ormExecuteQuery("select count(id) from person", true)&gt; there should be something like <br>&lt;cfset items = entityLoad("person", {},url.sort &amp; " " &amp; url.sortdir, {maxresults=pageSize,offset=url.start-1})&gt; <br>&lt;cfset total= items.getCount()&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717677">8</a> by Tom Jenkins
		posted on 10/16/2012 at 2:57 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>Sorry to bump this article from the grave but I was wondering if you could help with something kind of related.</p><p>I have two tables, constructed via ORM property's and linked with one-to-many fieldtype.</p><p>On my output I select the EntityLoad:</p><p>&lt;cfset exhibitorObj=EntityLoad("obj_Addon_EX_Exhibitors", ExID ,true)&gt;</p><p>Check to see if it has records belonging to it:</p><p>&lt;cfif exhibitorObj.hasContractsObj()&gt;</p><p>and then loop through those items</p><p>&lt;cfloop array="#exhibitorObj.getContractsObj()#" index="contract"&gt;</p><p>The problem comes from trying to paginate these attached records as it simply pulls back everything ... which could be hundreds. Is there a simple way of only pulling back X amount of records or would I have to manually sort through the one-to-many array that is returned and pull back what I wish to show e.g 10 items per page?</p><p>Hope you can help</p><p>Kind regards</p><p>Tom Jenkins</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717675">9</a> by Raymond Camden
		posted on 10/16/2012 at 3:07 PM
		</div>
		<div class="comment_text"><p>Please take this with a grain of salt. It has actually been a long time since I've worked in CF9 ORM so I'm a bit rusty.</p><p>I checked the docs, and while we offer options for lazy loading and batching in properties, none of these do what you want.</p><p>I think you would need to write a method on the CFC, like getMyContracts, that allows for a page number. The code behind this would need to use HQL to do the paging. Basically from contracts where owner=me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717676">10</a> by Tom Jenkins
		posted on 10/16/2012 at 3:53 PM
		</div>
		<div class="comment_text"><p>That's what I thought Ray, thanks for confirming it (pinch of salt confirmation at least).</p><p>Kind regards</p><p>Tom</p></div>
	</div>
</div>
		