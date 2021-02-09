
<div class="comment" id="c_1713677748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677748">1</a> by Nolan Erck
		posted on 3/4/2008 at 12:22 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks for the post -- I've been meaning to look into this for a while and havent had the time.  If you have a sec, I'd like to see the "add action" code via an AjaxProxy that you mentioned.  I've yet to see a good "real world" example of cfajaxproxy out there anywhere in blogland.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677747">2</a> by todd sharp
		posted on 3/4/2008 at 12:44 AM
		</div>
		<div class="comment_text"><p>If you're doing this on every row, wouldn't it be more of an 'Edit' button then an 'Add'?  Yeah, I know...semantics ;)</p><p>Another cool option that Stroz thought of is to add a double click listener to each row and open a cfwindow on double click...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677749">3</a> by Raymond Camden
		posted on 3/4/2008 at 12:48 AM
		</div>
		<div class="comment_text"><p>I don't think his intent was to be an Edit, but more a 'Here is a list of data. Select the ones you want on your page', so Add would make sense. You would then want to change the button on the fly to a remove.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677750">4</a> by Patrick Whittingham
		posted on 3/4/2008 at 1:01 AM
		</div>
		<div class="comment_text"><p>Ray -</p><p>  I don't believe you want "javascript:" on the onclick event.</p><p>Pat</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677752">5</a> by todd sharp
		posted on 3/4/2008 at 1:02 AM
		</div>
		<div class="comment_text"><p>Ray:  I get ya now...</p><p>Patrick:  Why doesn't he want that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677753">6</a> by Sam Farmer
		posted on 3/4/2008 at 1:03 AM
		</div>
		<div class="comment_text"><p>Nice.  Anyone know how to turn paging off for cfgrid?  Yeah, yeah, I know thats one of the main points of cfgrid but my client wants to see it all on one page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677754">7</a> by Raymond Camden
		posted on 3/4/2008 at 1:05 AM
		</div>
		<div class="comment_text"><p>@Pat - you are right - although it seemed to work.</p><p>@Sam - use the pagesize attribute. You would need to do a CF query before hand though to get the count, but that is a very small query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677760">8</a> by Patrick Whittingham
		posted on 3/4/2008 at 1:16 AM
		</div>
		<div class="comment_text"><p>Ray -</p><p>  The only time you need it is with the "Href" part of the anchor tag &lt;a href="javascript:x(); " &gt;aaa&lt;/a&gt;</p><p>Actually, the onclick for that tag is better..that "href="javascript:" is part of IE 5 and Netscape 4+.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677755">9</a> by Jim Ruzicka
		posted on 3/4/2008 at 1:26 AM
		</div>
		<div class="comment_text"><p>Somewhat off topic, but do you get hyphen hyperlinks in your cfgrid rows that are empty?  If the grid accepts 10 rows, but the resultset only has 8 rows...the last two rows will be filled with hyperlinked hyphens with a cfgridkey=null. Do you know how to get rid of them? Any assistance is greatly appreciated. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677756">10</a> by Ron McKay
		posted on 3/4/2008 at 1:58 AM
		</div>
		<div class="comment_text"><p>Hey, I was the one that originally asked about this capability and Ray I appreciate you addressing it so quickly.  I am going to take your suggestion and see if I can apply it into my logic.  I will update you on the attempt.</p><p>For those that was asking why...The intended use of something like this is to allow someone to pick an item from a cfgrid result list and by selecting the "ADD" button from a cfgridcolumn it would insert that item into their "basket" which in this case is an associated database table insert.  The basket display box would have a bind statement that would asynchronously pull what was current in their basket.  I felt that the cfgrid was a better/easier display method opposed to just a standard &lt;table&gt; layout.  Right or wrong...I was attempting to let the cfgrid be my "table layout".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677774">11</a> by Ron McKay
		posted on 3/4/2008 at 2:05 AM
		</div>
		<div class="comment_text"><p>Oh...and the &lt;cfajaxproxy&gt; concept would also be helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677772">12</a> by Ron McKay
		posted on 3/4/2008 at 2:53 AM
		</div>
		<div class="comment_text"><p>This is working great!!!  I wanted to post an example of my code up to this point, and following along with the "art theme" that Ray used.</p><p>/*** ART_LIST.CFM file contents ***/<br>	&lt;script&gt;<br>		function testit(x) { alert(x);}<br>	&lt;/script&gt;</p><p>	&lt;cfform name="form" action="act_art.cfm" method="post" format="html"&gt;<br>		&lt;table&gt;<br>			&lt;tr&gt;<br>				&lt;th&gt;Module Categories&lt;/th&gt;<br>				&lt;td&gt;<br>				&lt;cfselect bindonload="true" name="varCategory" bind="cfc:cfc.art.GetCategories()"/&gt;<br>				&lt;/td&gt;<br>			&lt;/tr&gt;<br>		&lt;/table&gt;</p><p>		&lt;cfgrid name="ArtList" bindonload="false" format="html" pagesize="20" striperows="yes" width="700" <br>			bind="cfc:cfc.art.GetArt({cfgridpage},{cfgridpagesize},{cfgridsortcolumn},{cfgridsortdirection},{varCategory})"&gt;<br>			&lt;cfgridcolumn name="art_id" display="false"/&gt;<br>			&lt;cfgridcolumn name="art_title" header="Title" width="300" select="false" /&gt;<br>			&lt;cfgridcolumn name="artist_name" header="Lang" width="50" select="false" /&gt;<br>			&lt;cfgridcolumn name="add" header="ADD IT!" width="50" /&gt;<br>		&lt;/cfgrid&gt;<br>	&lt;/cfform&gt;</p><p>/*** ART.CFC file contents ***/<br>	&lt;cffunction name="GetCategories" access="remote"&gt;<br>		&lt;cfset var data=""&gt;<br>		&lt;cfset var result=ArrayNew(2)&gt;<br>		&lt;cfset var i=0&gt;<br>		&lt;cfquery name="data" datasource="art_db"&gt;<br>			SELECT 	art_categories.categoryid,<br>					art_categories.category_name<br>			FROM art_categories<br>			ORDER BY category_name<br>		&lt;/cfquery&gt;<br>		&lt;cfloop index="i" from="1" to="#data.RecordCount#"&gt;<br>			&lt;cfset result[i][1]=data.categoryid[i]&gt;<br>			&lt;cfset result[i][2]=data.category_name[i]&gt;<br>		&lt;/cfloop&gt;<br>		&lt;cfreturn result&gt;<br>	&lt;/cffunction&gt;<br>	&lt;cffunction name="GetArt" access="remote" returntype="struct"&gt;<br>		&lt;cfargument name="page" type="numeric" required="yes"&gt;<br>		&lt;cfargument name="pageSize" type="numeric" required="yes"&gt;<br>		&lt;cfargument name="gridsortcolumn" type="string" required="no" default=""&gt;<br>		&lt;cfargument name="gridsortdir" type="string" required="no" default=""&gt;<br>		&lt;cfargument name="varCategory" type="any" required="yes" default="0"&gt;</p><p>		&lt;cfquery name="data" datasource="art_db"&gt;<br>			SELECT 	art_id,<br>				art_title,<br>				artist_name<br>			FROM art<br>			WHERE categoryid=#varCategory#<br>			&lt;cfif ARGUMENTS.gridsortcolumn NEQ "" and ARGUMENTS.gridsortdir NEQ ""&gt;<br>				ORDER BY #ARGUMENTS.gridsortcolumn# #ARGUMENTS.gridsortdir#<br>			&lt;cfelse&gt;<br>				ORDER BY artist_name,art_title<br>			&lt;/cfif&gt;<br>		&lt;/cfquery&gt;<br>		&lt;cfset queryAddColumn(data, "add", arrayNew(1))&gt;<br>		&lt;cfloop query="data"&gt;<br>		   &lt;cfset querySetCell(data, "add", "&lt;input value='Add' type='button' onclick='javascript:testit(#module_id#)'&gt;", currentrow)&gt;<br>		&lt;/cfloop&gt;<br>		&lt;cfreturn QueryConvertForGrid(data, <a href="http://disq.us/url?url=http%3A%2F%2FARGUMENTS.page%3AxGxcS5RwC5aaPtsNy9S2zclx1b4&amp;cuid=3321886" rel="nofollow noopener" title="ARGUMENTS.page">ARGUMENTS.page</a>, ARGUMENTS.pageSize)&gt;<br>	&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677773">13</a> by Raymond Camden
		posted on 3/4/2008 at 2:56 AM
		</div>
		<div class="comment_text"><p>Cool. Do folks still want to see me expand on my code to show hooking it up with cfajaxproxy?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677776">14</a> by Ron McKay
		posted on 3/4/2008 at 3:02 AM
		</div>
		<div class="comment_text"><p>Ray, I think it would help provide a total scenario for others looking how to do this.  I say this after searching the web for a couple of days on implementing &lt;cfgrid&gt; mixed with form types of uses.  There was not a lot being directly said about it and I think others would find it helpful.</p><p>Ron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677775">15</a> by Ron McKay
		posted on 3/4/2008 at 3:04 AM
		</div>
		<div class="comment_text"><p>one fix on my post....</p><p>&lt;cfset querySetCell(data, "add", "&lt;input value='Add' type='button' onclick='javascript:testit(#module_id#)'&gt;",currentrow)&gt;</p><p>should say #art_id# instead of #module_id#<br>&lt;cfset querySetCell(data, "add", "&lt;input value='Add' type='button' onclick='javascript:testit(#art_id#)'&gt;",currentrow)&gt;</p><p>Sorry about that...bad copy/paste from my orig code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677777">16</a> by Sam Farmer
		posted on 3/4/2008 at 3:12 AM
		</div>
		<div class="comment_text"><p>Nice.</p><p>You could also just append to the original column the add button:</p><p>SELECT art_ID, art_name, '&lt;input type="button" value="Add"&gt;' as addButton<br>FROM artists</p><p>thats scratch code not sure exactly what the syntax is for Derby db</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677779">17</a> by Raymond Camden
		posted on 3/4/2008 at 3:30 AM
		</div>
		<div class="comment_text"><p>The followup:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F3%2F3%2FAdding-an-ADD-button-for-cfgrid--Part-Deux%3AxPxlUnxiWAKS5jVndj5trl_kabM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/3/3/Adding-an-ADD-button-for-cfgrid--Part-Deux">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677778">18</a> by Ron McKay
		posted on 3/4/2008 at 3:36 AM
		</div>
		<div class="comment_text"><p>Sam, by adding the button as part of your SELECT I don't think you are able to pass the "ART_ID" variable within the javascrip statement...</p><p>onclick="javascript:testit(#art_id#)"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677781">19</a> by Raymond Camden
		posted on 3/4/2008 at 3:42 AM
		</div>
		<div class="comment_text"><p>He could mod it to use concatation and add the artid value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677784">20</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 3/4/2008 at 7:16 PM
		</div>
		<div class="comment_text"><p>@Ray - I put up a similar entry on this exact issue back in November, but took a slightly different approach:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.cutterscrossing.com%2Findex.cfm%2F2007%2F11%2F30%2FCF8-Ajax-Grid-Renderers-and-Events%3APpk8OGcHYgzSS_Y1cAyOI1brbQY&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.cutterscrossing.com/index.cfm/2007/11/30/CF8-Ajax-Grid-Renderers-and-Events">http://blog.cutterscrossing...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677782">21</a> by Chaz
		posted on 2/23/2009 at 9:47 PM
		</div>
		<div class="comment_text"><p>When displaying a button in cfgrid does the format have to be ‘html’?</p><p>When I us flash as the format I see the string value of the cell, but when I change it to html I get an error saying ‘Attribute validation error for tag CFGRID.The value of the attribute FORMAT, which is currently "html", must be one of the values: APPLET,FLASH,XML.’</p><p>What am I doing wrong!!!</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677783">22</a> by Raymond Camden
		posted on 2/23/2009 at 9:49 PM
		</div>
		<div class="comment_text"><p>Flash form grids are a completely different beast. I recommend you don't use them. If you want a Flash based grid, use Flex.</p><p>The error you get sounds like you aren't on CF8.</p></div>
	</div>
</div>
		