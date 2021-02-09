
<div class="comment" id="c_1713670299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670299">1</a> by todd sharp
		posted on 8/15/2007 at 6:21 AM
		</div>
		<div class="comment_text"><p>Credits #3:</p><p>The guy who showed you CodePress ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670294">2</a> by todd sharp
		posted on 8/15/2007 at 6:22 AM
		</div>
		<div class="comment_text"><p>I'm teasing of course...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670297">3</a> by Chad
		posted on 8/15/2007 at 4:55 PM
		</div>
		<div class="comment_text"><p>Ray, how many hours do you have in this app?</p><p>The way you describe it, CF had a nifty little tag to accomplish every feature of this app.</p><p>CFWindow<br>CFLayout<br>CFTree<br>CFDBinfo (i am going to have to check this one out!)<br>CFContent</p><p>I wonder if anyone has compiled a list of new Tags and Functions in CF8.  I had no idea about CFDBinfo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670306">4</a> by Raymond Camden
		posted on 8/15/2007 at 5:05 PM
		</div>
		<div class="comment_text"><p>dbinfo has gotten little to no attention. Now I will admit that it isn't a tag you will use often - but it is pretty darn cool.</p><p>How many hours... maybe 10-15. But a good part of that was me learning stuff (this app was written before CF8 went final), and a good part was 'polish', like adding images, etc. The core part could be done in one hour by someone who knows the tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670298">5</a> by Sam Farmer
		posted on 8/15/2007 at 6:06 PM
		</div>
		<div class="comment_text"><p>Incredibly cool app and use of the new CF8 features.  Do you plan on releasing this on riaforge?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670295">6</a> by Bruce
		posted on 8/15/2007 at 6:45 PM
		</div>
		<div class="comment_text"><p>Ray -</p><p>  Tested this out on my CF 8 box.  Worked fine with my data sources that point to SQL Server databases.  However, I encountered an error when trying it with a data source for a Microsoft Access database.</p><p>  This line fails in main.cfm:</p><p> The error occurred in C:\ColdFusion8\wwwroot\CF8Test\dbexplorer\main.cfm: line 44</p><p>42 : <br>43 : 	&lt;cflayoutarea position="left" size="250" name="tabletree" title="Tables" splitter="true"&gt;<br>44 : 		&lt;cfdbinfo datasource="#session.dsn#" name="tables" type="tables"&gt;<br>45 : <br>46 : 		&lt;cfif tables.recordCount&gt;</p><p>I tried using the cfdbinfo tag in my own test page with the datasource pointing to my Microsoft Access database and I get this error:</p><p>rror Executing Database Query.<br>[Macromedia][SequeLink JDBC Driver][ODBC Socket][Microsoft][ODBC Microsoft Access Driver]Optional feature not implemented</p><p>The error occurred in C:\ColdFusion8\wwwroot\CF8Test\teststfmpresenter.cfm: line 9</p><p>7 : <br>8 : &lt;body&gt;<br>9 : &lt;cfdbinfo datasource="stfm_presenter" name="tables" type="tables"&gt;<br>10 : <br>11 : &lt;cfquery datasource="stfm_presenter" name="test"&gt;</p><p>The driver is Microsoft Access.  Testing using the datasource with a cfquery tag works fine.</p><p>Any idea why cfdbinfo fails for me when the datasource is one with a driver of Microsoft Access?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670296">7</a> by Raymond Camden
		posted on 8/15/2007 at 7:25 PM
		</div>
		<div class="comment_text"><p>@Bruce: Smells like a bug. I'd file it at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%3AeVByS_kB5f-F_Xb5m4vrRNXZtoA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/wish">http://www.adobe.com/go/wish</a>. I don't test on Access.</p><p>@Sam: You are the third person to ask this. I didn't see the point as it was mostly a POC (proof concept), but, what the heck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670305">8</a> by Bruce
		posted on 8/15/2007 at 7:39 PM
		</div>
		<div class="comment_text"><p>Ray - I should have researched cfdbinfo tag and Microsoft Access further before posting the above problem I had.  The following is from the CF 8 Release Notes in the known issues section:</p><p>Quote</p><p>The cfdbinfo tag does not support data sources created with the Microsoft Access driver (which depends on the ODBC Socket<br>driver).</p><p>Unquote</p><p>Thanks again for posting the code.  I learned alot just reading through your code about how to use the various CF 8 tags (cfdbinfo, cftree, cfgrid, etc).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670300">9</a> by David C-L
		posted on 8/16/2007 at 2:26 AM
		</div>
		<div class="comment_text"><p>You know what would be cool?  Modifying this so you can update data elements within the grid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670312">10</a> by Dale Fraser
		posted on 8/24/2007 at 3:06 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>This is a really cool tool, especially as I don't know of any other way to browse the Apache Derby databases. It would be extra cool if it allowed you to create databases in Apache Derby.</p><p>Anyway, I can't get it to work! I donwloaded it and extracted it, I can browse it, login and then in IE: I get a javascript error and when I select a datasource nothing happens. In FireFox I don't get any javascript errors, but when I try to select a DB nothing happens.</p><p>I'm probably doing something stupid, any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670311">11</a> by Dale Fraser
		posted on 8/24/2007 at 3:10 PM
		</div>
		<div class="comment_text"><p>I knew I was stupid.</p><p>Make sure you have a CFIDE mapping or virtual directory.</p><p>PS: This is good, it should be built into CF Administrator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670293">12</a> by Dale Fraser
		posted on 8/24/2007 at 3:16 PM
		</div>
		<div class="comment_text"><p>Two bugs.</p><p>1. The SQL Editor is only about two lines high in IE7 under Vista, works fine in Firefox.<br>2. The system will not show tables for datasources that contain a full stop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670303">13</a> by Raymond Camden
		posted on 8/24/2007 at 5:10 PM
		</div>
		<div class="comment_text"><p>I don't have Vista so I can't really test it. I do have IE7... but IE7 is evil. ;) If anyone knows a good fix for IE7 then I'll happily include it in the code.</p><p>2. I use dbinfo - so if the table doesn't show up - you need to log a bug w/ Adobe. What are "full stops" in datasources?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670309">14</a> by Dale Fraser
		posted on 8/25/2007 at 3:40 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>1. Since about 80% of people are on IE7, might be a good idea to get things working with it but I don't know a fix, however it still works in Ie7, just can't see more than 2 lines of your SQL statement.</p><p>2. the datasource was called "<a href="http://disq.us/url?url=http%3A%2F%2Fcamden.com%3AOkgaLAJaoqKowjBc3d5zLrYBNrY&amp;cuid=3321886" rel="nofollow noopener" title="camden.com">camden.com</a>" for example, I changed it to not have a full stop and it worked.</p><p>Having the domain as the datasouce is probably not a good idea. But I thought i'd let you know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670310">15</a> by Raymond Camden
		posted on 8/27/2007 at 5:27 PM
		</div>
		<div class="comment_text"><p>Dale, so by "full stop", all you mean is that you put a dot in your DSN name, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670302">16</a> by Dale Fraser
		posted on 8/28/2007 at 3:22 AM
		</div>
		<div class="comment_text"><p>Yes datasoucrce name had a full stop in it.</p><p>Actually the databsae and datasource were both the domain name</p><p>For example <a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusionjedi.com%3AJ8pERI_trwqQzNfJuj3ekUNZkfU&amp;cuid=3321886" rel="nofollow noopener" title="coldfusionjedi.com">coldfusionjedi.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670304">17</a> by Raymond Camden
		posted on 8/28/2007 at 5:11 PM
		</div>
		<div class="comment_text"><p>I've never heard it referred to as a 'full stop'. To me it is just a period. ;) Ok, I'll test locally to see if I can reproduce.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670301">18</a> by Raymond Camden
		posted on 8/28/2007 at 5:16 PM
		</div>
		<div class="comment_text"><p>Sorry, I can't reproduce this. I made a DSN named <a href="http://disq.us/url?url=http%3A%2F%2Fblog.com%3ADq529sYph-POmuCK77bUMr4KJto&amp;cuid=3321886" rel="nofollow noopener" title="blog.com">blog.com</a> and it worked fine. Perhaps you can do some testing on your own with cfdbinfo and see if you find a particular problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670308">19</a> by Dale Fraser
		posted on 8/29/2007 at 3:10 AM
		</div>
		<div class="comment_text"><p>Ok,</p><p>I will, it's using Sql Express 2005, i'll see what happens.</p><p>FYI: <a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FFull_stop%3A0VsaMZgtfUU8AiI5681IIdroQXw&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Full_stop">http://en.wikipedia.org/wik...</a></p><p>If you had said Period I would have had no idea what you were talking about.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670307">20</a> by Dale Fraser
		posted on 8/29/2007 at 3:12 AM
		</div>
		<div class="comment_text"><p>Ohh,</p><p>Brain wave! The database it's self also had a . in it. Perhaps the problem is there rather that the datasource, I will test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670314">21</a> by Raymond Camden
		posted on 8/29/2007 at 7:52 PM
		</div>
		<div class="comment_text"><p>Guys - see the new code here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F8%2F29%2FDatabase-Explorer-Updated%3A5-vKMMctJmOds5DFuqEg5O5wnw8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/8/29/Database-Explorer-Updated">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670315">22</a> by Kebab Dylan
		posted on 8/29/2007 at 9:42 PM
		</div>
		<div class="comment_text"><p>are there any known issues with Oracle? I installed this but when i choose a datasource i just get the loading message and nothing happens. We are running 10g I believe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670318">23</a> by Raymond Camden
		posted on 8/29/2007 at 10:06 PM
		</div>
		<div class="comment_text"><p>Not that I know of. If you have trouble, I'll recommend what I told others - play with cfdbinfo outside of my app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670317">24</a> by Chad
		posted on 8/30/2007 at 4:30 PM
		</div>
		<div class="comment_text"><p>I created a similar app a while back although not as purty as yours.  The one thing I didn't see mentioned in yours is the ability to save queries.  I added some AJAX code where I could save my common queries and then have them in a drop-down list when I need them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670319">25</a> by Charlie Arehart
		posted on 9/5/2007 at 1:47 AM
		</div>
		<div class="comment_text"><p>Hey Ray, great stuff as always. One thing: I notice that the download in this entry is the old one, and only if one reads the comments would they learn to go to the later entry to get the new one. I suppose there may be value in keeping the old one for some reason, but perhaps you could put a box at the bottom of this entry pointing out the other (or change the download here to the later, and have the box offer the older version for whatever reason someone may have to want it).</p><p>Just so people know of the difference (I had errors running the older, and was reading the comments to see what others had experienced when I saw the link.)</p><p>Just trying to help, as always.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670316">26</a> by cf_kiddie
		posted on 8/8/2008 at 5:26 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>In MSSQL 2005, cfdbinfo type="tables" shows the system views and system tables also. It would be great if there is one parameter that we can specify for hiding them.</p><p>cf_kiddie</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670320">27</a> by Raymond Camden
		posted on 8/8/2008 at 5:29 PM
		</div>
		<div class="comment_text"><p>Since the result is a query, you could always use QofQ to filter em out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670321">28</a> by James
		posted on 9/15/2008 at 10:34 PM
		</div>
		<div class="comment_text"><p>Does this Supports OBDC Datasources?</p><p>I'm guessing no, since a datasource of mine that is set as an OBDC doesn't display. Actually I get the error: Error retrieving Markup for element main: Error Executing Database Query.</p><p>Funny, Access and MySQL work just fine. Anyhow, thanks Ray.</p></div>
	</div>
</div>
		