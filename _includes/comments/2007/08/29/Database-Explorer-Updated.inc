
<div class="comment" id="c_1713671082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671082">1</a> by Dale Fraser
		posted on 9/7/2007 at 8:46 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I've just installed this on my server and it does work better now in ie7. Although that fix has just set that text area size to a fixed height by the look of it. It used to resize when the div was resized in firefox but doesn't any more. Still it is better than before for ie7.</p><p>One suggestion is that if you do a select * from parks for example off the cfdocexamples and try to column sort, it's really slow. Perhaps you could change the table view to page using say max of 100 records, or have a drop down where a user can set the max.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671094">2</a> by Raymond Camden
		posted on 9/7/2007 at 3:12 PM
		</div>
		<div class="comment_text"><p>Dale, I don't need to add a max - you can just do a max in the sql. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671099">3</a> by Dale Fraser
		posted on 9/8/2007 at 2:11 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>How? Did you know Derby doesn't support TOP perhaps there is another method i'm missing for Derby.</p><p>Also, I'd like to see the hide system tables ticked by default as I think most people would rarely query them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671097">4</a> by Raymond Camden
		posted on 9/8/2007 at 2:19 AM
		</div>
		<div class="comment_text"><p>You are right. It only allows for limits via JDBC. I'll consider it. I mean I have to be honest here - I didn't actually expect people to _use_ this in production, or use it outside of to play with CF8 stuff.</p><p>If you think it warrants inclusion in RIAFOrge, I'll add it. That way these suggestions can be added to a bug tracker because honestly - I don't have time now to work on it and I'll probably forget unless it is documented.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671087">5</a> by Dale Fraser
		posted on 9/8/2007 at 2:24 AM
		</div>
		<div class="comment_text"><p>I really think it's worth it. When writing tutorials for <a href="http://disq.us/url?url=http%3A%2F%2Flearncf.com%3Ac9NsUtE6wkftAGnAJhWLn8latng&amp;cuid=3321886" rel="nofollow noopener" title="learncf.com">learncf.com</a> which need to use the included databases, how else would you browse them and play.</p><p>I was also thinking about hacking it so that I could give others access for select only. ie. No delete, insert or update statements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671096">6</a> by Raymond Camden
		posted on 9/12/2007 at 6:27 AM
		</div>
		<div class="comment_text"><p>Because Dale wouldn't stop bugging me (kidding!), I uploaded it:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfdbexplorer.riaforge.org%2F%3AmKfslzOPtN5NBri7drMgbjHdao0&amp;cuid=3321886" rel="nofollow noopener" title="http://cfdbexplorer.riaforge.org/">http://cfdbexplorer.riaforg...</a></p><p>Dale found a bug that is fixed in the RIAForge version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671101">7</a> by Brian O
		posted on 12/27/2008 at 8:16 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I am trying to generate an Excel spreadsheet from my cfgrid at the click of a button. I've added a button to the grid using EXT that onclick calls a Javascript function to generate the Excel. My problem is in that Javascript. If it were query-based I see the approach you used here. However, mine is a bound datagrid, which does not allow use of the query attribute. It is also type=html (not flash), but I don't think that matters here. So I tried to tackle it from 2 angles, but am just not smart enough. Probably something simple I'm missing. My google search returned nothing useful.</p><p>1) A bound datagrid I think returns a JSON string, so I thought about using the new cf8 function ColdFusion.JSON.decode(json), but what variable is the grid coming back with since my CFC return is "queryConvertForGrid(qread, intGridPage, intPageSize)"? I played with Firebug, but couldn't find the answer. I'm still learning to use it.</p><p>2) I thought about using the grid datasource which I already use for various EXT operations. I have the datasource defined by a global variable, but not sure how to tap the query results embedded in it. I looked at the EXT docs, no help.</p><p>Another less attractive alternative would be to regenerate the query seperately, but that is just wrong. Another would be to remove the bindings and go with a query-based approach as you did here, but that is not my preference, since it seems to be cleaner to go directly to the CFC and back, but where I'm headed if I don't get another option.</p><p>Ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671105">8</a> by Raymond Camden
		posted on 12/29/2008 at 6:25 PM
		</div>
		<div class="comment_text"><p>Brian: I'd probably attack this problem another way. You are trying to get access to the data shown in the grid. That is probably possible if you dig enough into the Ext API. However, at the end of the day, you will need CF to spit out the data in Excel format which means going back to the server.</p><p>I'd consider looking at how the grid is bound. It is getting data from either a simple URL or a CFC, right? If so, you could simply use the button to load a CFM that gets the same data as a the grid and spits it out in the right format.</p><p>If you are concerned about sorting, then you need to examine the grid and figure out which column is currently being sorted. That is definitely possible via the API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671103">9</a> by Brian O
		posted on 12/29/2008 at 6:41 PM
		</div>
		<div class="comment_text"><p>Are are suggesting as in my #1 approach of using the JSON string that the bound datagrid is pulling from my CFC? Not sure how to do that. Also I discovered that since I have paging turned on that I'd only get a subset of my desired results. Unless you have another idea, I'm thinking now that I need a similar CFC to what I use for the grid, but modified to bring back a query of all the grid data, not just the page. I hate to duplicate the call, but if needed I can. I suppose I could pass another arguement to the CFC that would determine whether to return the JSON string or a query to minimize the code duplication at least. Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671104">10</a> by Raymond Camden
		posted on 12/29/2008 at 6:43 PM
		</div>
		<div class="comment_text"><p>No, I'm not suggesting you use the JSON string _currently_ in the grid, ie, the data on the client side. What I said was, if your grid is bound, as you said it is, it is fetching data from the server, right? Either url:something.cfm or cfc:etc. You can use the same data in another CFM easily enough. Just make a new CFM, call the same url or CFC your grid is, and format the results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671107">11</a> by Brian O
		posted on 12/29/2008 at 7:04 PM
		</div>
		<div class="comment_text"><p>I believe I understand you and it is a CFC, I guess the issue is I don't know how to format the results. To call the same CFC outside the grid still returns "queryConvertForGrid(qread, intGridPage, intPageSize)" which is a JSON string. How do you convert that into a spreadsheet without passing a seperate argument that returns a query, array or struct instead? I'm a JSON neophyte. Also wouldn't I still have the paging problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671108">12</a> by Raymond Camden
		posted on 12/29/2008 at 8:25 PM
		</div>
		<div class="comment_text"><p>So, you have a CFC method that gets the data and then uses queryConvertForGrid. I'd split this into two methods. One method to just get the query, and the second method (the one your cfgird calls) that uses the first method for it's data, and then use queryConvertForGrid.</p><p>Your new CFM would just make use of the first CFC method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671109">13</a> by Brian O
		posted on 12/29/2008 at 9:29 PM
		</div>
		<div class="comment_text"><p>Good idea. Shall do. I often get good ideas from your blogs. Thanks and Happy New Year!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671113">14</a> by Brian O
		posted on 12/30/2008 at 1:48 AM
		</div>
		<div class="comment_text"><p>That worked fine for one of my grids where I had only 2 arguments to be passed, but I have another where I pass 63 variables bound to a search form. Not all variables have values, but I never know which ones will be populated. My trouble (may not be impossible) I think is when my excel button is clicked I need to use Javascript to get each of those 63 variables using getElementByID, then pass them as URL variables to my CFM that does an invoke of my CFC (passing those variables as arguments) that queries the database and returns the results. Then the query results are passed from the CFC to the CFM for display. Seems like I'm passing the variables around too much (3 times here), plus at one time I recall hitting a limit trying to send too much as URL parameters. Is there a better way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671083">15</a> by Raymond Camden
		posted on 12/30/2008 at 2:29 AM
		</div>
		<div class="comment_text"><p>Well, if you truly do have 63 things that impact the view of data, then yes, you need to pass them all to generate the Excel. I can't think of a better way. I can say you may want to rethink things. I can't imagine using a data viewer with 63 different variables. My brain would melt into a pile of goo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671084">16</a> by Raymond Camden
		posted on 12/30/2008 at 2:29 AM
		</div>
		<div class="comment_text"><p>Oh, and if you are worried about URL size (you should be), you can always do a POST operation using Ajax. If your CFM uses cfcontent to spit out the Excel-formatted data, then the user won't even leave the current screen.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671089">17</a> by Brian O
		posted on 12/30/2008 at 2:40 AM
		</div>
		<div class="comment_text"><p>The Excel content is showing up in a new window using the method you proposed in this blog entry. Can you point to or provide an example how to "do a POST operation using Ajax"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671091">18</a> by Brian O
		posted on 12/30/2008 at 2:55 AM
		</div>
		<div class="comment_text"><p>Part of the reason I need to pass 63 variables is that currently cfgrid binding to a CFC does not allow optional variables. I wish they did. If they did, then I'd only send those variables that were being used by creating the grid on the fly and set most of the CFC arguments as not required. I could probably break my grid into 2 grids, which would also mean 2 seperate CFCs, but so far I've not needed to do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671088">19</a> by Raymond Camden
		posted on 12/30/2008 at 2:58 AM
		</div>
		<div class="comment_text"><p>Brian - For something as complex as your needs, I'd make a CFC method with one (or a few) args where the main argument is a structure. For example, imagine you had an arg for sort col, and one for sort dir (I know that's "special" for cfgrid, but pretend it isn't). Instead of using 2 args, sortdir and sortcol, you coul dhave an argument named sort that is a complex object with 2 keys, col and dir.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671090">20</a> by Brian O
		posted on 12/30/2008 at 3:11 AM
		</div>
		<div class="comment_text"><p>So you are saying instead of:<br>bind="cfc:#strcomponentpath#.readdiadocumentgrid({cfgridpage}, {cfgridpagesize}, {cfgridsortcolumn}, {cfgridsortdirection}, {frmSearch:c1@none}, {frmSearch:c2@none}, {frmSearch:c3@none}, {frmSearch:c4@none}, {frmSearch:c6@none}, {frmSearch:c7@none}, {frmSearch:c8@none},...</p><p>I could send structs like:<br>bind="cfc:#strcomponentpath#.readdiadocumentgrid({cfgridpage}, {cfgridpagesize}, {cfgridsortcolumn}, {cfgridsortdirection}, {frmSearch:c@none}, ...</p><p>where c1 is defined in my CFM as c.c1, c2 is c.c2, etc <br>and then deconstructed in the CFC from the passed argument "c"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671098">21</a> by Brian O
		posted on 12/30/2008 at 3:46 AM
		</div>
		<div class="comment_text"><p>Or even better, just pass the form: bind="cfc:#strcomponentpath#.readdiadocumentgrid({cfgridpage}, {cfgridpagesize}, {cfgridsortcolumn}, {cfgridsortdirection}, {frmSearch})"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671112">22</a> by Raymond Camden
		posted on 12/30/2008 at 8:46 PM
		</div>
		<div class="comment_text"><p>No, you can't do it that simply. You would have to use something else instead of the bind, or bind to a JavaScript function and in that JS function use Ajax to do the form posts.</p><p>You may be in a situation where you need to use something completely native as opposed to CF8's ajax stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671110">23</a> by Brian O
		posted on 12/31/2008 at 3:46 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I think I'm close for the spreadsheet part. When the Excel button is clicked I have a JS that simplified looks like this:</p><p>function exportExcel() {<br>   ColdFusion.Ajax.submitForm('frmSearch', 'showexcel.cfm', handleExcelResult, errorHandlerAJAX);<br>}</p><p>submitForm uses POST by default. showexcel.cfm invokes a CFC (using cfinvokeargument like &lt;cfinvokeargument name="c1" value="#form.c1#" /&gt;) and correctly returns query results and using your approach to showing excel has the following:</p><p>   &lt;cfif isDefined("rstQuery.RecordCount") and rstQuery.RecordCount&gt;<br>      &lt;cfsetting showdebugoutput=false&gt;  <br>      &lt;cfcontent type="application/msexcel" reset="true"&gt;  <br>      &lt;cfheader name="content-disposition" value="attachment;filename=#strFilename#.xls"&gt;      <br>	&lt;cfoutput&gt;<br>         &lt;table border="1"&gt;<br>            &lt;tr&gt;<br>            &lt;cfloop index="c" list="#rstQuery.columnlist#"&gt;<br>               &lt;th&gt;#ReplaceNoCase(c,'DIA','')#&lt;/th&gt;<br>            &lt;/cfloop&gt;<br>            &lt;/tr&gt;<br>            &lt;cfloop query="rstQuery"&gt;<br>            &lt;tr&gt;<br>               &lt;cfloop index="c" list="#rstQuery.columnlist#"&gt;<br>                  &lt;td&gt;#rstQuery[c][currentRow]#&lt;/td&gt;<br>               &lt;/cfloop&gt;<br>            &lt;/tr&gt;<br>            &lt;/cfloop&gt;<br>         &lt;/table&gt;<br>      &lt;/cfoutput&gt;<br>...</p><p>All works great except the spreadsheet fails to show up. Firebug showed me that the POST response is almost what I want (&lt;table border="1"&gt;&lt;tr&gt;&lt;th&gt;DOCNO&lt;/th&gt;...) but the cfcontent is getting ignored. If I add an alert to the handleExcelResult function, it returns the html code as I saw in Firebug. For my other grid the cfcontent worked fine, but I was not doing the ColdFusion.Ajax.submitForm function. Ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671111">24</a> by Brian O
		posted on 12/31/2008 at 7:41 PM
		</div>
		<div class="comment_text"><p>I can get an html table to popup if I change the handleExcelResult function to the following, but it it is not generating the Excel open/save dialog that I need:</p><p>function handleExcelResult(sResult){<br>	var sOption="toolbar=yes,location=no,directories=yes,menubar=yes,";<br>		sOption+="scrollbars=yes,width=750,height=600,left=100,top=25";<br>	var win=<a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>("","",sOption);<br>	var doc=win.document;<br>		<a href="http://disq.us/url?url=http%3A%2F%2Fdoc.open%3AA9C7uNZurkhUA4E-QI1F9vn5FNY&amp;cuid=3321886" rel="nofollow noopener" title="doc.open">doc.open</a>();<br>		doc.write('&lt;html&gt;&lt;head&gt;')<br>		doc.write('&lt;meta http-equiv="Content-Type" content="application/msexcel"&gt;')<br>		doc.write('&lt;meta http-equiv="Content-disposition": attachment;filename="SearchData.xls"&gt;')<br>		doc.write('&lt;/head&gt;&lt;body&gt;')<br>		doc.write(sResult);<br>		doc.write('&lt;/body&gt;&lt;/html&gt;');<br>		doc.close();<br>		win.focus();<br>}</p><p>This seems like it would be a basic need out there, but my google search failed to get me a good Javascript approach.</p></div>
	</div>
</div>
		