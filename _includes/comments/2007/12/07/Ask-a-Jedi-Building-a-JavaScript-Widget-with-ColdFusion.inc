
<div class="comment" id="c_1713675252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675252">1</a> by Randy Johnson
		posted on 12/7/2007 at 7:35 PM
		</div>
		<div class="comment_text"><p>This is cool.  I always had my cfm page cffile the new js file.  This an awesome solution!</p><p>-Randy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675239">2</a> by Joshua Curtiss
		posted on 12/7/2007 at 9:29 PM
		</div>
		<div class="comment_text"><p>This is also the [ugly and not recommended] way to handle AJAX. Create a new script block, have it call a CF page that generates some JavaScript with the dynamic values. Very clunky now with all the frameworks (and CF8), but back in the day, it was pretty cool. :-)</p><p>Isn't this approach particularly handy for client/widget kind of scenario since the AJAX domain security doesn't apply? I haven't played with it for awhile, but pretty sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675251">3</a> by Hatem Jaber
		posted on 10/6/2008 at 8:48 PM
		</div>
		<div class="comment_text"><p>Here is an alternate solution that can be used with a single document.write call:</p><p>data.cfm</p><p>&lt;cfset news = queryNew("articleurl,title,category")&gt;<br>&lt;cfloop index="x" from="1" to="20"&gt;<br>   &lt;cfset newurl = "<a href="http://disq.us/url?url=http%3A%2F%2Fsomeurl.com%2F%23x%23.html%3ArZGJEPD_vzPvgnprR-bJzj6G6nQ&amp;cuid=3321886" rel="nofollow noopener" title="http://someurl.com/#x#.html">http://someurl.com/#x#.html</a>"&gt;<br>   &lt;cfset newtitle = "News Story #x#"&gt;<br>   &lt;cfset newcategory = listGetAt("Cats,Dogs",randRange(1,2))&gt;<br>   &lt;cfset queryAddRow(news)&gt;<br>   &lt;cfset querySetCell(news, "articleurl", newurl)&gt;<br>   &lt;cfset querySetCell(news, "title", newtitle)&gt;<br>   &lt;cfset querySetCell(news, "category", newcategory)&gt;<br>&lt;/cfloop&gt;</p><p>&lt;cfparam name="url.max" default="10"&gt;<br>&lt;cfparam name="url.category" default=""&gt;</p><p>&lt;!--- handle getting right data ---&gt;<br>&lt;cfquery name="news" dbtype="query" maxrows="#url.max#"&gt;   <br>	select *<br>	from news<br>	&lt;cfif url.category is not ""&gt;<br>		where lower(category) = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#lcase(url.category)#"&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfquery&gt;</p><p>&lt;cfsavecontent variable="result"&gt;<br>	&lt;cfoutput&gt;<br>	&lt;div id="myDiv"&gt;<br>		&lt;table border="1" bgcolor="yellow"&gt;<br>			&lt;cfloop query="news"&gt;<br>				&lt;tr&gt;<br>					&lt;td&gt;&lt;a href='#articleurl#'&gt;#title#&lt;/a&gt; [#category#]&lt;/td&gt;<br>				&lt;/tr&gt;<br>			&lt;/cfloop&gt;<br>		&lt;/table&gt;<br>	&lt;/div&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/cfsavecontent&gt;</p><p>&lt;cfoutput&gt;document.write('#jsStringFormat(result)#')&lt;/cfoutput&gt;</p><p>index.cfm</p><p>&lt;script src="http://localhost/data.cfm?max=4"&gt;&lt;/script&gt;</p><p>Now load in the browser and make sure the correct url is pointing in the js call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675254">4</a> by Anon
		posted on 2/28/2009 at 6:31 AM
		</div>
		<div class="comment_text"><p>I have been looking for something like this forever! Thanks so much!!!!</p></div>
	</div>
</div>
		