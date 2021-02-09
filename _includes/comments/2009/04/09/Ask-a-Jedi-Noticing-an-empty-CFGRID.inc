
<div class="comment" id="c_1713714581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714581">1</a> by Scott Stroz
		posted on 4/9/2009 at 9:52 PM
		</div>
		<div class="comment_text"><p>@Ray - the 'empty' rows are a result of using QueryConvertForGrid(). When you use that function, CF will 'pad' the results with empty rows. If you have 20 items per page and the last page only has 12 items, your query will have 8 empty rows.</p><p>Seems kind of odd to me, but there are ways around it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714574">2</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 4/9/2009 at 10:01 PM
		</div>
		<div class="comment_text"><p>Ext 2.0 added the ability to set options for the GridView, including an 'emptyText' attribute allowing a developer to define text to display in the grid when the record count is 0. (Different issue, as Scott pointed out. Hopefully there's an Ext upgrade in Centaur.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714568">3</a> by Justin Carter
		posted on 4/9/2009 at 10:04 PM
		</div>
		<div class="comment_text"><p>Yep Scott is spot on, QueryConvertForGrid() is the culprit. The only way I know to work around it is to do you own paging and JSON serialisation instead of using QueryConvertForGrid().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714572">4</a> by Raymond Camden
		posted on 4/9/2009 at 10:09 PM
		</div>
		<div class="comment_text"><p>I wonder what would happen if you manipulated the result from queryConvertForGrid before returning it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714567">5</a> by Raymond Camden
		posted on 4/9/2009 at 10:15 PM
		</div>
		<div class="comment_text"><p>Well well well. I wrote this very horrible, non var scoped, code to copy the query into a new query. The new query only has the proper amount of rows:</p><p>	&lt;cfset foo = queryConvertForGrid(q,<a href="http://disq.us/url?url=http%3A%2F%2Farguments.page%3A0Fw4DOBsJ-BeUlWgf8cltSXNqNs&amp;cuid=3321886" rel="nofollow noopener" title="arguments.page">arguments.page</a>,arguments.pagesize)&gt;<br>	&lt;cfset zoo = queryNew(foo.query.columnList)&gt;<br>	&lt;cfloop index="x" from="1" to="#foo.totalrowCount#"&gt;<br>		&lt;cfset queryAddRow(zoo)&gt;<br>		&lt;cfloop index="l" list="#zoo.columnlist#"&gt;<br>			&lt;cfset theval = foo.query[l][x]&gt;<br>			&lt;cfset querySetCell(zoo, l, theval)&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cfloop&gt;<br>	&lt;!---<br>	&lt;cfdump var="#zoo#"&gt;<br>	&lt;cfdump var="#queryConvertForGrid(q,<a href="http://disq.us/url?url=http%3A%2F%2Farguments.page%3A0Fw4DOBsJ-BeUlWgf8cltSXNqNs&amp;cuid=3321886" rel="nofollow noopener" title="arguments.page">arguments.page</a>,arguments.pagesize)#"&gt;&lt;cfabort&gt;<br>	&lt;cfreturn queryConvertForGrid(q,<a href="http://disq.us/url?url=http%3A%2F%2Farguments.page%3A0Fw4DOBsJ-BeUlWgf8cltSXNqNs&amp;cuid=3321886" rel="nofollow noopener" title="arguments.page">arguments.page</a>,arguments.pagesize)&gt;<br>	---&gt;<br>	&lt;cfset foo.query = zoo&gt;<br>	&lt;cfreturn foo&gt;</p><p>When run, the grid now actually shrinks to the size of the result set.</p><p>Hmm. That may be bad for times when the record larger than page count.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714580">6</a> by Raymond Camden
		posted on 4/9/2009 at 10:16 PM
		</div>
		<div class="comment_text"><p>Changing the loop to:</p><p>&lt;cfloop index="x" from="1" to="#min(foo.totalrowCount,arguments.pagesize)#"&gt;</p><p>actually works. Kinda cool. Not sure if that is 'better' or not.</p><p>Will do a second blog entry today showing this method as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714577">7</a> by Justin Carter
		posted on 4/9/2009 at 10:39 PM
		</div>
		<div class="comment_text"><p>It's probably nicer to do your own paging at the database level (if performance was a concern), but this is at least a good hack to remove those pesky blank rows :) I'm guessing this is something that will get cleaned up in a future CF release though too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714566">8</a> by Raymond Camden
		posted on 4/9/2009 at 10:42 PM
		</div>
		<div class="comment_text"><p>To be fair, I think a grid that always shows X rows is better than one that shrinks. The UI is just wonky (to me anyway). You would think there would be a nicer solution though. The grid itself should have an option to NOT shrink when rows returned &lt; page size. CF could then return smaller data which would help improve performance. I'm putting the blame back on Ext. You going to stand for that Steve? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714573">9</a> by Justin Carter
		posted on 4/9/2009 at 10:47 PM
		</div>
		<div class="comment_text"><p>Usually with paging grids I set a static height in pixels so that the grid doesn't shrink when the result page doesn't have "enough" records, works a treat. I'd guess the &lt;cfgrid&gt; tag has a height attribute, but to be honest I've never used it in production code :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714582">10</a> by Raymond Camden
		posted on 4/9/2009 at 10:49 PM
		</div>
		<div class="comment_text"><p>Oh snap - you are right. Setting the height works. The only issue is that you have to supply an initial height that works well with 10 rows. Which isn't horrible.</p><p>All fodder for the next blog entry. Thanks Justin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714578">11</a> by Michael Schmidt
		posted on 4/9/2009 at 11:12 PM
		</div>
		<div class="comment_text"><p>I actually had to tackle the QueryConvertForGrid for another developer the other day and had to write this quick work around hack<br>&lt;cfset iCount = Max(0,(rs.RecordCount - ((<a href="http://disq.us/url?url=http%3A%2F%2FArguments.page%3ArEHc-Rdu2Ydbcm62AjvouG0M1Uc&amp;cuid=3321886" rel="nofollow noopener" title="Arguments.page">Arguments.page</a> -1 )* arguments.pagesize) ) )&gt;<br>&lt;cfset retStr = QueryConvertForGrid(rs,<a href="http://disq.us/url?url=http%3A%2F%2Farguments.page%3A0Fw4DOBsJ-BeUlWgf8cltSXNqNs&amp;cuid=3321886" rel="nofollow noopener" title="arguments.page">arguments.page</a>,min(arguments.pagesize, iCount))&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714576">12</a> by Sean Sekora
		posted on 5/1/2009 at 6:02 PM
		</div>
		<div class="comment_text"><p>Thanks Michael Schmidt your idea worked in my case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714587">13</a> by Adam
		posted on 7/20/2009 at 11:50 PM
		</div>
		<div class="comment_text"><p>Forgive my newb-ness.  I am wondering what the edit is with the cfc to enable the "filter" to filter.  I am new to cfcs and find this entry well-suited for my needs.</p><p>Thank you,<br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714569">14</a> by Adam
		posted on 7/21/2009 at 12:35 AM
		</div>
		<div class="comment_text"><p>I was able to solve this on my own.  Thanks for the helpful post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714571">15</a> by kelli
		posted on 10/10/2009 at 5:10 AM
		</div>
		<div class="comment_text"><p>Has anyone noticed that the 'load' listener function is ran twice?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714570">16</a> by James Lamar
		posted on 5/21/2010 at 5:22 PM
		</div>
		<div class="comment_text"><p>Could you provide the CFC code? I am getting the error:  Error invoking CFC /test.cfc : Error Executing Database Query. I am also using CF9.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714579">17</a> by Raymond Camden
		posted on 5/21/2010 at 5:25 PM
		</div>
		<div class="comment_text"><p>I can, but it won't help you. The code was specific to BlogCFC. There are other examples though of CFCs hooked up to CFGRID.  Here is one: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.garyrgilbert.com%2Fblog%2Findex.cfm%2F2007%2F6%2F14%2FColdfusion-8s-CFGRID%3AUwFjfmWGd-XfrJ8dDGZhbpv_92Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.garyrgilbert.com/blog/index.cfm/2007/6/14/Coldfusion-8s-CFGRID">http://www.garyrgilbert.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714583">18</a> by sainisha
		posted on 6/23/2010 at 11:45 PM
		</div>
		<div class="comment_text"><p>iam trying to use cfgrid with bind and all i get back is grid with no data in it. i have tried the basic simple example and it doesnt work. however it works great with the query but not when i use the bind attribute. please help. i need to be able to complete my task quickly and this has been dragging me down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714575">19</a> by Raymond Camden
		posted on 6/28/2010 at 5:17 PM
		</div>
		<div class="comment_text"><p>What does Firebug show you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714585">20</a> by Michael Appenzellar
		posted on 7/21/2010 at 5:16 PM
		</div>
		<div class="comment_text"><p>You have helped me more than enough lately but when I go to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Femptygrid%2Fm2%2Ftest.cfm%3AkSqVuiP9DzxhJzJuvGgvjVb92-0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/emptygrid/m2/test.cfm">http://www.coldfusionjedi.c...</a> I don't see a message displayed, only a blank cfgrid..tested in firefox, and in ie I get the console firebug error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714584">21</a> by Raymond Camden
		posted on 7/23/2010 at 6:23 AM
		</div>
		<div class="comment_text"><p>This was written for CF8. The JS API changed for grids in CF9.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714589">22</a> by Misty
		posted on 9/25/2011 at 2:57 PM
		</div>
		<div class="comment_text"><p>Hi Ray, it still does not work, even after loading and if cfgrid comes as empty, it shows both the messages</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714590">23</a> by Raymond Camden
		posted on 9/26/2011 at 8:30 PM
		</div>
		<div class="comment_text"><p>Please see the comment above. This is an older blog post for CF8. It would need to be updated for CF9. As I don't really make use of CFGRID, I have no plans to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714591">24</a> by Fernando Lins
		posted on 11/23/2011 at 10:44 PM
		</div>
		<div class="comment_text"><p>Just completing Steve's suggestion, in CF9 you can do this:</p><p>ColdFusion.Grid.getGridObject('my_grid').view.emptyText = "No Records were found with the specified search criteria";</p><p>And the message will appear if the grid is empty.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714593">25</a> by Mike Weisert
		posted on 1/5/2012 at 12:07 AM
		</div>
		<div class="comment_text"><p>For CF9, you will want to change where it says .getDataSource() to just .getStore().</p><p>I display the records this way, but the above works too.  Mine is based on CF9.0.1 which is using Ext Grid 3.1.  Not sure if it will work on out of the box 9:<br>mygrid = ColdFusion.Grid.getGridObject('yourGridName');</p><p>	   // FOR CF 9 ROW COUNTING<br>		var mds = mygrid.getStore()<br>		mds.addListener('load', function() {<br>			$("h2").html(mds.getTotalCount() + ' ');<br>		});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714592">26</a> by Robert
		posted on 5/23/2013 at 11:03 PM
		</div>
		<div class="comment_text"><p>I wondered why my cfgrid was empty when it moved to production.  Turns out it doesn't like some data.  When a company name ends in something like /W/ it halts and throws an error in firebug: "missing ] after element list"  If I take out the slashes it moves on until it encounters another /whatever/ and halts.  Is there a way to escape characters?  This is just an html grid from a query. No cfc or binding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714594">27</a> by Raymond Camden
		posted on 5/23/2013 at 11:16 PM
		</div>
		<div class="comment_text"><p>All I can suggest is ensuring you are patched to latest. This is one more reason why I recommend folks not use any CF UI stuff.</p></div>
	</div>
</div>
		