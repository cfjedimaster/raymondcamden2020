
<div class="comment" id="c_1713732835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732835">1</a> by Rob Barthle
		posted on 6/2/2011 at 6:40 AM
		</div>
		<div class="comment_text"><p>I like that, good for a basic spreadsheet. Much nicer than using CFHEADER and CFCONTENT to convert an HTML table into one ugly spreadsheet.</p><p>But these spreadsheet tags aren't going to be able to work with a real stylized spreadsheet, are they? We have to create the template in Excel then save it as Excel XML and then have our CFML output filled in XML that the user can open in Excel and have look all pretty. It becomes a real pain though if you have to tweak anything, you can real easily mess up the Excel XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732836">2</a> by Joshua Miller
		posted on 6/2/2011 at 6:57 AM
		</div>
		<div class="comment_text"><p>I was working with the new spreadsheet functions for the first time today, so this article is quite timely for me! I really like the power and flexibility of CFSpreadsheet, but I found that there appear to be some limitations to the amount of data that it can handle. I generated a minimally styled Excel spreadsheet using a sample dataset of about 100 rows and everything worked fine. I then used the full dataset of 11,000+ rows and, despite the CFSetting RequestTimeout being set unbelievably high, the task simply never finished. I waited literally hours and nothing ever happened. The page spun and spun and no error was generated, but no Excel file was generated either. I tested a few times using smaller datasets and it always worked fine until I ran with the full set. Do you know if there is a physical limit to how much data the functions can handle? I was well below Excel's limit, but obviously above ColdFusion's.</p><p>I'm running a 64-bit install and have 12GB of memory allocated to CF. I don't think that memory is an issue - could there be something else?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732834">3</a> by Raymond Camden
		posted on 6/2/2011 at 6:26 PM
		</div>
		<div class="comment_text"><p>@Rob: It depends on what you mean by "real stylized" ;) I'd check the docs to see what their formatting/etc options are. It seems pretty complex but I've just scratched the surface.</p><p>@Joshua: I'm going to try to replicate that test later today. Do you really want one sheet with 11K rows though? What about multiple sheets?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732837">4</a> by Joshua Miller
		posted on 6/2/2011 at 6:42 PM
		</div>
		<div class="comment_text"><p>@Ray: Granted, it's not ideal, but it's the business requirement I was given.</p><p>As a follow-up to my post, I did receive an error message about 10 hours after kicking off the task:</p><p>An exception occurred while calling the function formatColumn.<br>An exception occurred while calling the function formatColumn. java.lang.ClassCastException: org.apache.poi.hssf.record.WindowOneRecord cannot be cast to org.apache.poi.hssf.record.ExtendedFormatRecord <br>The error occurred on line 248.</p><p>This is line 248: &lt;cfset SpreadsheetFormatColumn(sheet,fCenter,5)&gt;</p><p>fCenter is a structure:</p><p>fCenter = StructNew();<br>fCtrNum.dataformat = "@";<br>fCenter.alignment = "center";</p><p>Probably has something to do with the datatype represented and the "@" formatting, although the bigger issue is the 10 hour time lapse between execution and error reporting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732838">5</a> by Raymond Camden
		posted on 6/2/2011 at 6:44 PM
		</div>
		<div class="comment_text"><p>You know, 11k really doesn't seem like a lot. How many columns were you using?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732840">6</a> by Scott Busche
		posted on 6/2/2011 at 6:55 PM
		</div>
		<div class="comment_text"><p>I've ran into similar issues as Josh, except the page would finish, but never output the excel file. It would then never write an excel file until I restarted CF. I haven't had the problem occur since they released 9.0.1 though.</p><p>@Rob you can read in a 'stylized' xlsx file into CF, but if you write to existing cells the formatting will be overwritten for that cell. In that case you're better off using the apache poi directly instead of the CF tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732842">7</a> by Michael Oliver
		posted on 6/2/2011 at 7:18 PM
		</div>
		<div class="comment_text"><p>@Joshua: In regards to the speed, when you run the 11,000+ record attempt, have you watched the memory usage of jrun?</p><p>A coworker had a similar problem when working with the apache POI in Java.  He explained that the issue was that the JVM has to store the entire document in memory while it's building the file.  As the file takes up more of the JVM's memory, everything will slow to a crawl.  The more you do with the cells in memory (formatting, functions, etc), the more resources it pulls from the JVM.</p><p>This behavior is different from when you write to a text file (to create a CSV), because the JVM writes the line to the file, but doesn't keep the file in memory.</p><p>For us, the end result was to switch to CSV files exclusively when working with potentially large recordsets, and only writing to XLS when working with small sets of data.  The writing to XLS just doesn't seem to scale well.  We never tried using the built in functions though, but since it also uses the POI, I would think it would have the same problems.</p><p>I have been wondering though if writing to XLSX would be any different since supposedly the file format is significantly different (I haven't tried though).  Looking at the livedocs for spreadsheetNew(), it looks like you can tell it to do that using the "xmlFormat" parameter.  If that's enabled, does the performance improve for you on the 11,000+ file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732849">8</a> by James Moberg
		posted on 6/2/2011 at 8:23 PM
		</div>
		<div class="comment_text"><p>Does "dataformat" work at all?<br><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FCFMLRef%2FWSc3ff6d0ea77859461172e0811cbec22c24-6747.html%3AVAnyElnmarPp5_7agvRav94ge4E&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/CFMLRef/WSc3ff6d0ea77859461172e0811cbec22c24-6747.html">http://help.adobe.com/en_US...</a></p><p>I converted one of the columns to a date datatype, but it is incorrectly outputted as a text string in the Excel file and doesn't retain the specified formatting.  (If I click in the cell, Excel automagically converts it to a date datatype.)</p><p>Here's the function I'm using:<br>&lt;cfset SpreadsheetFormatColumns(s, {dataformat="m/d/yy h:mm"}, 2)&gt;<br>I've done this before &amp; after calling spreadsheetAddRows() and the results are the same.  I've also removed the header row to no avail.</p><p>Is this a bug, am I doing something wrong or do I just not properly understand how this should work?  What's the recommended way to output formatted date values to Excel using CFSpreadsheet?  (This seems trivial, but I haven't been able to figure it out.)  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732848">9</a> by jeff
		posted on 6/2/2011 at 9:02 PM
		</div>
		<div class="comment_text"><p>Is this for does 9.0.1? and does it handle large sheets better than 9.0.  Anything over a few hundred lines would take forever to run for me so I switched to Ben's POI code.  I haven't had any problems with several thousands of lines using it. Coldfusion 9.0 not so much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732846">10</a> by jeff
		posted on 6/2/2011 at 9:10 PM
		</div>
		<div class="comment_text"><p>@rob Doing the HTML trick for EXCEL supports style sheets and formulas.  The only downside really is that it's not "really" an excel file and I never figured out a way to do multiple sheets.  Microsoft EXCEL works great with it, but Open Office and Google Docs doesn't like it :).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732847">11</a> by Joshua Miller
		posted on 6/2/2011 at 9:21 PM
		</div>
		<div class="comment_text"><p>@Ray: There are a total of 7 columns - so I wouldn't really consider it a significant amount of data for Excel to handle.</p><p>@Michael: Thanks for the note. My original version of this used no formatting whatsoever and in that case generating 11,000 rows took just a few seconds. It wasn't until I added the SpreadsheetX() functions to do custom formatting that things started slowing down. Since I need custom formatting the CSV option is a no-go.</p><p>@James: I'm starting to wonder the same thing myself. None of the formatting that I've tried appears to have any effect whatsoever. I was attempting to protect leading zeros in a column, but no combination of formatting statements - even with only 20 records in the output - resulted in any change in display.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732850">12</a> by Ryan Harper
		posted on 6/3/2011 at 11:34 PM
		</div>
		<div class="comment_text"><p>I too have had mixed success with the spreadsheet tags/functions. For a simple spreadsheet it works great.</p><p>Dumping a query out to excel with thousands of rows also worked just fine (as long as you're ok with the column headers coming straight from the db).</p><p>BUT opening or trying to format an excel file that has thousands of lines caused problems.</p><p>Also trying to add 1000's of rows with any of the spreadsheet functions would also cause it to hang.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732852">13</a> by Raymond Camden
		posted on 6/4/2011 at 11:02 PM
		</div>
		<div class="comment_text"><p>So I was going to do a demo of a huge spreadsheet, but it seems as if the agreement is that the issue is with custom formatting. That seems odd to me. If I were to apply a format to a column, I'd assume it wouldn't matter if I had 10 or a million rows.</p><p>Is this something you've reported Joshua?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732851">14</a> by Raymond Camden
		posted on 6/4/2011 at 11:22 PM
		</div>
		<div class="comment_text"><p>"Dumping a query out to excel with thousands of rows also worked just fine (as long as you're ok with the column headers coming straight from the db). "</p><p>In my example, I did the headers manually. You don't have to use them from the query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732854">15</a> by Joshua Miller
		posted on 6/6/2011 at 4:52 PM
		</div>
		<div class="comment_text"><p>@Ray - I haven't reported as a bug yet. I've not worked with CFSpreadsheet much and before reporting this thought I would see if maybe I was doing something wrong.</p><p>As a side note to the column names, you can also give them custom names in your query and then get the benefit of "pretty names" without having to specify them in the CFSpreadsheet tag:</p><p>SELECT [foo] AS [My Pretty Name]<br>FROM [dbo].[tblFoo]</p><p>CFSpreadsheet seems to handle the column names properly when rendered. If all you want is a simple query and dump to Excel it works really well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732855">16</a> by Ryan Harper
		posted on 6/6/2011 at 6:58 PM
		</div>
		<div class="comment_text"><p>I should have clarified my comment in saying that the column headers come straight from the query. That's what I've been doing lately also.</p><p>The only other problem that I've had with dealing with cfspreadsheet is when working with date/time fields. Opening a csv file into excel works better for interpreting the cells correctly as dates.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732856">17</a> by James Moberg
		posted on 6/6/2011 at 7:13 PM
		</div>
		<div class="comment_text"><p>Here's a quick test that I wrote that allows you to format dates and download the Excel spreadsheet.<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FaQnembR3%3AeU-7xrAJ-VvpUAkvrTipIkRbKgE&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/aQnembR3">http://pastebin.com/aQnembR3</a></p><p>It doesn't appear as though spreadsheetFormatColumn() works when combined with spreadsheetAddRows().  The only time I've been able to successfully format a date cell is when the cell is manually populated using spreadsheetSetCellValue().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732857">18</a> by Joe
		posted on 6/11/2011 at 12:25 AM
		</div>
		<div class="comment_text"><p>I've found a few things relating to cfspreadsheet and ColdFusion 9.0 vs ColdFusion 9.0.1.<br>In CF9 formatting more than just a few rows and columns would result in an "...maximum number of fonts was exceeded" error. The solution was to install CF 9.0.1. If you are still getting the error try to change any loops which format by cell (spreadSheetFormatCell) to the SpreadsheetFormatColumns or SpreadsheetFormatRows (plural). From what I've read Excel stores formatting information for whole columns or for cells and nothing in between. Furthermore, try to use the 9.0.1 function SpreadsheetFormatCellRange which is also less memory intensive for Excel. See this thread for more detail: <a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fmessage%2F3450807%3ACnWtvNAFVkx_o1inJ5DciP1BMEg&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/message/3450807">http://forums.adobe.com/mes...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732860">19</a> by James Moberg
		posted on 6/11/2011 at 12:29 AM
		</div>
		<div class="comment_text"><p>Please test the following code on CF 9/9.01 and post regarding whether or not anyone is able to successfully format Excel dates using spreadsheetAddRows() and spreadsheetFormatColumn().<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FaQnembR3%3AeU-7xrAJ-VvpUAkvrTipIkRbKgE&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/aQnembR3">http://pastebin.com/aQnembR3</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732858">20</a> by Joe
		posted on 6/11/2011 at 12:54 AM
		</div>
		<div class="comment_text"><p>Just from taking a quick glance at the code, I'm not seeing a spreadsheetWrite command anywhere, perhaps that method might be able to format correctly?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732859">21</a> by James Moberg
		posted on 6/11/2011 at 1:38 AM
		</div>
		<div class="comment_text"><p>I've used spreadsheetWrite() and the result is the same.  I'm using spreadsheetReadBinary() so that I can return the spreadsheet directly in the browser without having to resort to a file write, read and/or redirect function.</p><p>Please change it to spreadsheetWrite() and let me know if the behavior is any different.  I'm guessing that the results would be the same as that's what I was doing before I rewrote this to use an immediate download method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732863">22</a> by Rob Barthle
		posted on 6/13/2011 at 8:05 PM
		</div>
		<div class="comment_text"><p>In a small stroke of irony, the day after posting my comments on this I found a chance to use CFSPREADSHEET. A legacy application was timing out after 5 minutes creating a 1500 row HTML table and streaming it out as an Excel file using CFHEADER and CFCONTENT. It was a basic data dump so I gave CFSPREADSHEET a try. After a runtime of six seconds a native Excel file was created, something Excel doesn't have to parse and convert like it would an HTML table. Very happy with that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732864">23</a> by Les Konley
		posted on 6/17/2011 at 10:36 PM
		</div>
		<div class="comment_text"><p>I'm struggling with the issue that using CFSPREADSHEET to generate an Excel (.xls) file does not format date columns as DATES.  I was hoping that using the new CFSPREADSHEET tag would eliminate our need to install MS Office on the production servers and retire the use of the CFX_EXCEL tag.  Since we're only on CF 9.0, we can't use the AddSpreadsheetRow functions because it's too slow for pruduction environments.  No matter how I format the date fields using QuerySetCell to reformat my query object before passing it to the CFSPREADSHEET tag, Excel just doesn't recognize dates AS DATES.  What a bummer.  I don't see any evidence that CF9.0.1 addresses this issue, except that I might then be able to create a spreadsheet object without performance issues and do formatting that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732862">24</a> by Raymond Camden
		posted on 6/19/2011 at 12:49 AM
		</div>
		<div class="comment_text"><p>Dumb question - if your data is query based, can you ensure the column is a date type? And if  not - maybe try a query object instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732865">25</a> by James Moberg
		posted on 6/19/2011 at 6:53 AM
		</div>
		<div class="comment_text"><p>Ray... Been there, done that.  Nothing works.  Please research this yourself and see if you are successful. In CF9, you can't appear to format values (even date values) as dates in Excel unless you format each cell individually.  Here's some proof on concept code where no SpreadsheetFormatColumn() functions seem to work.<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FaQnembR3%3AeU-7xrAJ-VvpUAkvrTipIkRbKgE&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/aQnembR3">http://pastebin.com/aQnembR3</a></p><p>If this hasn't been officially reported as a bug yet, please do so.  It's kinda of a show stopper for me for using CFSpreadsheet to create database updates.  (Ben Nadel's POI Utility CFC seems to work fine even though it's slower at times.)</p><p>I always hope that it's me that's doing something wrong... since I've upgraded to CF9, it hasn't been me as often. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732875">26</a> by Raymond Camden
		posted on 6/19/2011 at 6:21 PM
		</div>
		<div class="comment_text"><p>I can confirm it's not working. Just to be sure, I added a color key to your dfStyle structure and it worked ok. Best I can recommend is to ensure you've got it logged as a bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732867">27</a> by James Moberg
		posted on 6/20/2011 at 6:30 PM
		</div>
		<div class="comment_text"><p>What is the code that you used and what is a color "key"?  Did passing a "color" fix the date format and add the time or did it just pass the correct color?  (I can live with the column being a different color if it is passing/formatting the correct data.)  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732868">28</a> by Raymond Camden
		posted on 6/20/2011 at 6:33 PM
		</div>
		<div class="comment_text"><p>Sorry I wasn't clear. What I meant was - I modified your struct to ALSO include a color change. I verified the color DID change, but the date formatting did NOT work. This implies you were doing the right thing, but it didnt work. Hence me saying you should file a bug report. Your CFM is perfect too so be sure to include the link or the code itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732871">29</a> by James Moberg
		posted on 6/20/2011 at 7:49 PM
		</div>
		<div class="comment_text"><p>ok.  I wanted to make sure that I was reporting the correct issue &amp; didn't need to add that date formats were correctly formatted only when additional color attributes were added.  I've reported it.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732872">30</a> by Les Konley
		posted on 6/20/2011 at 8:12 PM
		</div>
		<div class="comment_text"><p>Ray &amp; James, I have additional information about the CFSPREADSHEET and Excel not recognizing resulting date fields.  First of all, our code is both using a query object as well as setting explicit date formats [i.e, cfset temp = QuerySetCell(GetExcelReport, "FollowUpDate", "DateFormat(GetResult.FollowUpDate, "MM/DD/YYYY")) ].  When we open the spreadsheet in Excel (built using CFSPREADSHEET), the date column is formatted as regular text or general (left-justified).  On this site (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.appnitro.com%2Fforums%2Ftopic%2Fexcel-does-not-identify-field-in-correct-date-format-after-import%29%3AD-xN1cE0UIxjRQjaMPGDi_sioe4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.appnitro.com/forums/topic/excel-does-not-identify-field-in-correct-date-format-after-import)">http://www.appnitro.com/for...</a> a work-around is offered, so the business users can highlight the column (within Excel), then select Data &gt; Text to Columns, then click FINISH on the Wizard (without needing to step through it)... and date fields are now recognized by Excel as a DATE.  We may need to revert back to installing MS Office on the production servers and continue using the old CFX_Excel tag if the business users decide they don't want this added minor inconvenience, at least until that particular bug is corrected on a future release.  Thanks for submitting a bug report to Adobe about this issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732877">31</a> by Joshua Miller
		posted on 6/27/2011 at 11:13 PM
		</div>
		<div class="comment_text"><p>Update on this discussion. I've installed the CF 9.0.1 update, removed all references to SpreadsheetFormatX functions and I still can't get more than ~400 rows before CF dies. I'm using grouped output and using SpreadsheetAddRow() for each row of data because I need a custom formatted "header" row before each section in the file.</p><p>I know, I know, I could make each "section" it's own sheet or change the formatting of the Excel doc to make it work with CF, but the formatting is a business requirement and I'd rather CF just work that me have to work around it.</p><p>It seems unlikely that someone didn't run into this when testing the new features in CF9. How is it that I can't even get 500 rows of data out without the server dying? I've got 12GB of RAM, all but 2 of which are dedicated to CF (64 bit) and on two different servers I see the same behavior.</p><p>Using SpreadsheetAddRow() with 7 columns and 500 rows of data with no formatting would presumably not be outside of the testing parameters of the new functions.</p><p>Has anyone else used group output with SpreadsheetAddRow()? Did it work for you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732869">32</a> by James Moberg
		posted on 6/28/2011 at 5:08 AM
		</div>
		<div class="comment_text"><p>I wrote a quick test script and it worked with 500 rows and 7 columns (using Windows 2003 with only 4Gb total RAM.)<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FVmF2r7Rz%3AvXZvNKWN-4hmVfInKvq-PjC1Cks&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/VmF2r7Rz">http://pastebin.com/VmF2r7Rz</a></p><p>I added getTickCount() as one of the column values and generation does appear to start to slow down after about 150 rows.  Here are the incremental averages to generate 500 rows using SpreadsheetAddRow():<br>Rows 1-100 12.34ms per row.  Total = 1,234ms<br>Rows 101-200 37.66ms per row.  Total = 3,766ms<br>Rows 201-300 60ms per row.  Total = 6,000ms<br>Rows 301-400 83.9ms per row.  Total = 8,390ms<br>Rows 401-500 107.51ms per row.  Total = 10,751ms</p><p>It looks like CF9 increases processing by 2.5 seconds for each increment of 100 rows. I attempted to export 2,000 rows and it took 477,890 milleseconds.  The final rows took 485 milleseconds each to individually add.  The overall average is 239ms per row. Ouch!</p><p>Maybe a better technique would be to format your rows and save them to a query object and then use SpreadsheetAddRows() (with the "s")... but you can then probably kiss your data format &amp; styles good-bye. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732873">33</a> by Joshua Miller
		posted on 6/28/2011 at 7:13 PM
		</div>
		<div class="comment_text"><p>FWIW I went back and rewrote the routine using Java POI and the entire 12,245 row file takes 742ms to generate with formatting and proper data types intact.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732874">34</a> by Raymond Camden
		posted on 6/28/2011 at 7:14 PM
		</div>
		<div class="comment_text"><p>Bit behind on all this - but guys - don't forget to record/note issues with the public bug tracker. Adobe needs to be aware in order to reply.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732876">35</a> by James Moberg
		posted on 6/29/2011 at 1:21 AM
		</div>
		<div class="comment_text"><p>In the process of reporting it, I discovered that it was reported back in December 2009 (bug #81154).  I added a comment with the code I posted at PasteBin &amp; voted it up.<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%3F%23bugId%3D81154%3ANrxw97A5O89WuuV0uC9Dg-rccsk&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html?#bugId=81154">http://cfbugs.adobe.com/cfb...</a></p><p>Any idea if Adobe looks at <a href="http://disq.us/url?url=http%3A%2F%2FCFbugs.Adobe.com%3F%3Ai9RXT17R3mpCRTQPxXqDsW-DrNI&amp;cuid=3321886" rel="nofollow noopener" title="CFbugs.Adobe.com?">CFbugs.Adobe.com?</a>  There's no status on this bug other than "verified" and I believe that this may have been provided by the submitter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732879">36</a> by Raymond Camden
		posted on 6/29/2011 at 1:22 AM
		</div>
		<div class="comment_text"><p>Can't speak for the CF team but as far as I know, yes, it IS taken seriously.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732884">37</a> by James Moberg
		posted on 6/29/2011 at 1:24 AM
		</div>
		<div class="comment_text"><p>Wait a minute... I just realized that Adobe has the status on bug  #81154 as "closed".  I don't want to submit a duplicate bug.  Any idea on how to get them to re-open a bug that hasn't been fixed?  (Any idea regarding how to identify who prematurely marked this as "closed"?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732878">38</a> by Raymond Camden
		posted on 6/29/2011 at 1:31 AM
		</div>
		<div class="comment_text"><p>Hmm. If I were in a bad mood, I'd post a comment AND post a new bug. Just to make it a bit more... vocal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732881">39</a> by Dan Murphy
		posted on 7/22/2011 at 7:44 PM
		</div>
		<div class="comment_text"><p>James, Ray, and Les - I know I'm a bit late to the game here, but I think I just found a workaround for the date formats in Excel that has been working out well for me. First, I'm creating my own query with querynew based on another query and using that to export to Excel.  If I make the datatype in the querynew to cf_sql_varchar instead of date or cf_sql_timestamp and then output the query to the Excel spreadsheet, it will take whatever format you give it. If you stop there, Excel will still see the data as just text, not an actual date (although formatted correctly). Second, just set the dataformat using spreadsheetFormatColumns to match the format you specified in the query, and Excel now recognizes it all as a date.  Ray, I'm using your DateTimeFormat function from CFLib, so here is how it all worked out for me. (this is just part of it all obviously, but you'll catch the idea).</p><p>Here's the query...<br>&lt;cfset mys = QueryNew("OrderNumber,InScan,OutScan","cf_sql_varchar,cf_sql_varchar,cf_sql_varchar")&gt;<br>    &lt;cfloop query="qryThroughputScans"&gt;<br>      &lt;cfset queryAddRow(mys)&gt;<br>      &lt;cfset querySetCell(mys,"OrderNumber",NumberFormat(qryThroughputScans.OrderNumber,000000))&gt;  <br>      &lt;cfset querySetCell(mys,"InScan",DateTimeFormat(qryThroughputScans.InScan))&gt;  <br>      &lt;cfset querySetCell(mys,"OutScan",DateTimeFormat(qryThroughputScans.OutScan))&gt;<br>    &lt;/cfloop&gt;</p><p>And then the column format that I use after creating the Excel spreadsheet...<br>&lt;cfset spreadsheetFormatColumns(s,<br>                {<br>                  alignment="center",<br>                  dataformat="m/d/yyyy h:mm AM/PM"<br>                }, <br>                "2-3")&gt;</p><p>I tested this out with all sorts of weird formats just to make sure it works, and I had great success with it.  Maybe this is already well known but I couldn't find anything when I was looking for a fix.  Hopefully this helps someone out when they go looking for an answer to the date issue.</p><p>Thanks,<br>Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732882">40</a> by Raymond Camden
		posted on 7/24/2011 at 2:16 AM
		</div>
		<div class="comment_text"><p>Thanks for sharing this, Dan.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732885">41</a> by James Moberg
		posted on 7/24/2011 at 6:41 PM
		</div>
		<div class="comment_text"><p>"m/d/yyyy h:mm AM/PM" isn't one of the allowable formats listed here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FCFMLRef%2FWSc3ff6d0ea77859461172e0811cbec22c24-6747.html%3AVAnyElnmarPp5_7agvRav94ge4E&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/CFMLRef/WSc3ff6d0ea77859461172e0811cbec22c24-6747.html">http://help.adobe.com/en_US...</a></p><p>Are you able to generate any custom format you desire? If so, is there any documentation anywhere?  (Adobe doesn't provide any direction regarding this on their website.)</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732883">42</a> by Raymond Camden
		posted on 7/24/2011 at 6:46 PM
		</div>
		<div class="comment_text"><p>Well, the docs _do_ list supported formats. And his looks real close to what's listed. The time portion is definitely there. So maybe it's just implied that you can mix the date/time ones together like that. Either way - one of you guys should mention this format in a comment to the Livedoc edition.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732886">43</a> by Dan Murphy
		posted on 7/26/2011 at 6:38 PM
		</div>
		<div class="comment_text"><p>So I'm not sure if this is a matter of allowable formats, or just a way to create whatever custom format you want.  I tried this with several formats that were not defined on the docs (ie - "m/yyyy h AM/PM") and they all came in as dates to the Excel spreadsheet if I followed the same process I outlined previously. I'm not aware of any documentation on it - this was just me goofing around to try to get the format I wanted.</p><p>I guess I'll just put something similar to my previous comment on this post in the comments of the docs as Ray suggested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732887">44</a> by Tony Weeg
		posted on 7/29/2011 at 9:05 AM
		</div>
		<div class="comment_text"><p>hey ray, have you had any luck adding a second sheet to an excel doc created by cfspreadsheet?  im getting a null pointer exception on the update call?</p><p>thanks<br>tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732889">45</a> by Raymond Camden
		posted on 7/29/2011 at 3:26 PM
		</div>
		<div class="comment_text"><p>Haven't tried it. Create a simple CFM that replicates the issue and fire it off to me. I can try hacking it on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732888">46</a> by Jonathan
		posted on 11/27/2011 at 10:38 PM
		</div>
		<div class="comment_text"><p>Anyone know how to make the spreadsheet recalculate?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732891">47</a> by Raymond Camden
		posted on 11/28/2011 at 12:41 AM
		</div>
		<div class="comment_text"><p>What do you mean exactly?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732895">48</a> by Josh Tischer
		posted on 2/18/2012 at 3:12 AM
		</div>
		<div class="comment_text"><p>in CF8; I need to export an excel document from a HUGE data set. The code is using a cfcontent variable to write the file to a folder.</p><p>I keep getting a timeout 500 jRun servlet 500 error. I am thinking about appending 500-1000 records on an automated page refresh. Is there a better way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732896">49</a> by Raymond Camden
		posted on 2/18/2012 at 10:05 PM
		</div>
		<div class="comment_text"><p>You may not be able to use CF for this (or CF's cfspreadsheet tag). You may want to look at using POI (the underlying Java library) directly instead. I believe Ben Nadel has a wrapper library for it. You may also want to consider NOT sending the file to user. Instead, try using cfspreadsheet to create the file, save it, and then provide a link to it. That removes the 'stream' to the user where things may time out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732899">50</a> by misty
		posted on 3/6/2012 at 2:29 AM
		</div>
		<div class="comment_text"><p>Hi ray, I tried using an ajax request to the page and using the cfsavecontent variable to create the excel, but i am unable to either store the file as excel on the disk, am i missing something</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732897">51</a> by Raymond Camden
		posted on 3/6/2012 at 9:59 AM
		</div>
		<div class="comment_text"><p>You can't use Ajax to render binary data like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732898">52</a> by misty
		posted on 3/6/2012 at 10:39 AM
		</div>
		<div class="comment_text"><p>btw, the things are happening on the server page, i am just getting a response from the page in the form of an alert, should i try with iframes or something</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732900">53</a> by Raymond Camden
		posted on 3/6/2012 at 10:41 AM
		</div>
		<div class="comment_text"><p>Not quite sure what you are asking then. Maybe back up and explain again?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732902">54</a> by Misty
		posted on 3/6/2012 at 5:43 PM
		</div>
		<div class="comment_text"><p>As your previous commnet, u are saying i cannot render the cfsavecontent tag to generate an excel for me, but is there any way like using an iframe in the server page i mean where i am writing my cfsavecontent to generate the excel for me and save it to the disk and show the message to the user. The thing is i am using a serialize() of jquery to send form values to the submission page and using cfsavecontent to create a table and write that values in the excel file</p><p>is this a possiblity</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732901">55</a> by Raymond Camden
		posted on 3/6/2012 at 6:37 PM
		</div>
		<div class="comment_text"><p>Ah, so you want to use an Ajax request that fires off a server side script to generate Excel, and then simply have that downloaded to the user, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732903">56</a> by Misty
		posted on 3/6/2012 at 9:32 PM
		</div>
		<div class="comment_text"><p>Yes, it should just create an excel with cfsavecontent variable and store on the disk and show a message Thanks message to the user</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732908">57</a> by Raymond Camden
		posted on 3/6/2012 at 10:26 PM
		</div>
		<div class="comment_text"><p>If you use a simple document.location=X, where X is a CFM that uses cfcontent to serve up binary data, you get the same rule - a download.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732907">58</a> by Misty
		posted on 3/7/2012 at 2:13 AM
		</div>
		<div class="comment_text"><p>Um, Getting little confused, if you tell me properly that will be gr8</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732905">59</a> by Raymond Camden
		posted on 3/7/2012 at 4:37 AM
		</div>
		<div class="comment_text"><p>Well, first off, are you aware of the technique of using cfcontent to serve up binary files to the user? (Don't think about Ajax, let's keep it simple first.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732906">60</a> by Misty
		posted on 3/7/2012 at 10:52 AM
		</div>
		<div class="comment_text"><p>yes, here is the code, i am using</p><p>&lt;cfsavecontent variable="a"&gt;</p><p>&lt;/cfsavecontent&gt;<br>&lt;cfset theDir = GetDirectoryFromPath(GetCurrentTemplatePath())&gt;<br>&lt;cfcontent type="application/vnd.msexcel" variable="#ToBinary(ToBase64(a.Trim()))#" file="#theDir#/#Dateformat(now(),'dd_mm_yyyy')#_#TimeFormat(now(),'hh_mm_ss_tt')#.xls"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732910">61</a> by Raymond Camden
		posted on 3/7/2012 at 11:48 PM
		</div>
		<div class="comment_text"><p>Ok - so you understand how that works, right? Like if that file was ray.cfm, if you link to it, when the user clicks the link, they get prompted to download. To them, it looks like they didn't leave the page.</p><p>So to do the same in JavaScript, you would use document.location.href = 'ray.cfm';</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732911">62</a> by Misty
		posted on 3/8/2012 at 12:21 PM
		</div>
		<div class="comment_text"><p>Ok, i think thigs are going over the head now, you said use document.location.href:</p><p>i am using like this,</p><p>var str = $("form").serialize();<br>			$.ajax({<br>				type:"POST",<br>				url:"submit.cfm",<br>				data:str<br>			});</p><p>where i use the document.location.href</p><p>i do not want the user to get page reloaded and then show them a message</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732913">63</a> by Raymond Camden
		posted on 3/8/2012 at 6:04 PM
		</div>
		<div class="comment_text"><p>Hmm. If that isn't working - then I'll need to look at this later. I'm traveling today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732909">64</a> by Raymond Camden
		posted on 3/8/2012 at 8:04 PM
		</div>
		<div class="comment_text"><p>Ok, let's imagine test.cfm, a page that accepts dynamic input to generate a pdf.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FQZ1LB7im%3AW0OULk8kdlF9HF8Dw49cWJFNVXg&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/QZ1LB7im">http://pastebin.com/QZ1LB7im</a></p><p>Now let's look at front end code to hit this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fyrzk2DFx%3AOZgq9plklbGpJFMKaEeosx4YIws&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/yrzk2DFx">http://pastebin.com/yrzk2DFx</a></p><p>Notice I use document.location.href to "Push" the user to the CFM. What they experience though is simply a download.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732912">65</a> by Misty
		posted on 3/9/2012 at 1:48 AM
		</div>
		<div class="comment_text"><p>Hi Ra, Made it work, No need to use the document.location: here is my version</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FvvqVhsju%3AGeUTG7PX91YI-gxAgPyLdsSxTYw&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/vvqVhsju">http://pastebin.com/vvqVhsju</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732916">66</a> by Misty
		posted on 3/9/2012 at 1:49 AM
		</div>
		<div class="comment_text"><p>oops! sorry missed (Y) from ur name, Apologies</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732915">67</a> by Raymond Camden
		posted on 3/9/2012 at 6:36 AM
		</div>
		<div class="comment_text"><p>So wait - that worked for you? Your success.cfm is _exactly_ like my CFM? (Well, not exactly, but same technique of generating binary data and sending via cfcontent.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732914">68</a> by Albert Aynbinder
		posted on 5/10/2012 at 7:32 PM
		</div>
		<div class="comment_text"><p>Hi, Ray,<br>Thanks for your example how to use &lt;cfspreadsheet&gt;<br>Finally I’ve build and save excel file.<br>But I have problem with headers, I have to use variables Like Current Year and Prior as a column name.<br>Do you have any idea how it solve.<br>Thanks for Help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732919">69</a> by Raymond Camden
		posted on 5/10/2012 at 8:07 PM
		</div>
		<div class="comment_text"><p>If you wanted dynamic headers, you would change how you make the query. In mine, it is hard coded to Name, Beers, etc. Just make it dynamic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732920">70</a> by Albert Aynbinder
		posted on 5/10/2012 at 8:37 PM
		</div>
		<div class="comment_text"><p>Raymond,<br>Is it posible to say:<br>&lt;cfset q = queryNew("RUN,DATE, TY_#dataQuery_R1.TAX_YR#,CURRENT_TY_POSTED,TY_2009_TOTAL,TY_2010_TOTAL,PR2009,PR2010,DIFFERENCE",<br>                     "cf_sql_varchar,<br>                                                                                  cf_sql_varchar,<br>                                                                                  cf_sql_varchar,<br>                                                                                  cf_sql_integer,<br>                                                                                  cf_sql_integer,<br>                                                                                  cf_sql_integer,<br>                                                                                  cf_sql_decimal,<br>                                                                                  cf_sql_decimal,<br>                                                                                  cf_sql_varchar" )&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732921">71</a> by Raymond Camden
		posted on 5/11/2012 at 3:12 PM
		</div>
		<div class="comment_text"><p>Sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732922">72</a> by Monique
		posted on 8/24/2012 at 12:10 AM
		</div>
		<div class="comment_text"><p>Very nice. Is it possible to have the file open up directly vs the user clicking on a link to open it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732925">73</a> by Raymond Camden
		posted on 8/24/2012 at 12:39 AM
		</div>
		<div class="comment_text"><p>Two ways. You could just cflocation to the XLS file you made, or, don't save to the file system at all. Just use cfcontent to serve up the binary data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732928">74</a> by Ron Randall
		posted on 9/5/2012 at 12:39 AM
		</div>
		<div class="comment_text"><p>How can I generate a spreadsheet with:</p><p>a.  Colheads on Row 2?</p><p>b.  Filtering already ON (when downloaded, opened)?</p><p>c.  Print set to "Fit to Page"?</p><p>Thanks?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732924">75</a> by Raymond Camden
		posted on 9/5/2012 at 1:29 AM
		</div>
		<div class="comment_text"><p>I don't think you can do the colheads on row 2. Not as far as I know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732926">76</a> by James Moberg
		posted on 9/5/2012 at 1:39 AM
		</div>
		<div class="comment_text"><p>You may have to start with pre-existing empty Excel template w/Row 2 headers, filtering already enabled and print already set to "fit to page" and then use SpreadsheetAddRows() to populate the rest of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732927">77</a> by Branden deBuhr
		posted on 12/3/2012 at 9:26 PM
		</div>
		<div class="comment_text"><p>I see this post goes a bit way back but I've been working with a cfspreadsheet app for a classified company in which we're uploading allot of data via cfcfspreadsheet.  My first iterations of the app dealt with loading the data and then looping through it as I've seen others talk about in this thread.  I'm working here with a very smart guy who is literally a sql genious...  He introduced me to a sql statement that is an "insert into tablename select statement".  In this situation the coldfusion server makes one single call to the database to insert all the data without running separate loops.  We've inserted thousands of rows in less than a second or two and then redirected to a review page all taking less than a few seconds...  It's pretty amazing to see the performance gains!</p><p>&lt;br&gt;&lt;br&gt;<br>Actually for more detail, we go to a global temporary table first with the data, and then move it to the actual destination table.  While coming from the GTT so we can do the joins we need for the business right when we actually do the insert.  To make all this happen, the SQL must be perfect and the load and destination field order has to be perfectly in sync to work.  But when you do, the performance is off the charts!  So I hope this tid bit helps someone else here...&lt;br&gt;&lt;br&gt;</p><p>The problem I'm trying to figure out is that some of our users are trying to upload encrypted spreadsheets and I need to be able to either detect this or ask for a password or somehow intelligently account for all of this.&lt;br&gt;&lt;br&gt;</p><p>Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732933">78</a> by Raymond Camden
		posted on 12/4/2012 at 2:54 AM
		</div>
		<div class="comment_text"><p>As far as I can tell, we do not support opening password protected sheets. We support adding them to a sheet. I'd file an ER for it.</p><p>You could handle it at least by wrapping your read with a try/catch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732931">79</a> by Jay Rizzi
		posted on 4/11/2013 at 11:23 PM
		</div>
		<div class="comment_text"><p>For anyone looking for an answer to the SpreadsheetAddRows performance on medium to larger queries I thought I would add this:</p><p>dont use SpreadsheetAddRows or any of those related functions like SpreadsheetFormatRows, the performance hit on the JVM is staggering</p><p>My solution to this was to execute the query, create an xls file, use the tag cfspreadsheet to write to the newly created xls file, then serve to the browser, deleting after serving</p><p>Using SpreadsheetAddRows, Runtime went from crashing server on 1000+ rows, 5+mins on 700 rows</p><p>Using the method outlined above 1-1.5 secs</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732929">80</a> by yonaker
		posted on 5/31/2013 at 8:37 PM
		</div>
		<div class="comment_text"><p>Has any one completed the Homework - Modify this template to instead serve the content to the user immediately. I can't seem to get it to render without saving it to my server first.  Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732930">81</a> by yonaker
		posted on 5/31/2013 at 9:05 PM
		</div>
		<div class="comment_text"><p>Nevermind... I found it under Quick followup to my CFSpreadSheet Samples<br>Just what I was looking for!!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732932">82</a> by Russ
		posted on 6/6/2013 at 10:47 AM
		</div>
		<div class="comment_text"><p>Jay,</p><p>Does your solution allow formatting of individual cells? That's the reason I need to build the spreadsheet a cell at a time.</p><p>Maybe construct the spreadsheet via Query, then go back through it and do the formatting in a 2nd pass?</p><p>Thanks,<br>Russ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732936">83</a> by WebYoda
		posted on 7/16/2013 at 6:18 PM
		</div>
		<div class="comment_text"><p>Thank you for your random act of kindness in posting this sample code. It worked the first try and made it possible to complete my task of converting a table we have to excel simply using your sample and the example.</p><p>Russ #, check the previous comments, there were suggestions of how to use other data types. If every cell in every row in your spreadsheet was to be of different types, then you would have to craft the code to be manual rows instead of a loop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732935">84</a> by Faisal
		posted on 7/23/2013 at 7:41 PM
		</div>
		<div class="comment_text"><p>Hi Ray, Thanks for the article. It was really helpful. Btw, at this moment I am stuck at one point. Actually was trying to get account numbers by a query and displaying those account numbers as column header after exporting into excel.</p><p>The following code is working fine but displaying wrongly:</p><p>&lt;cfset variables.setHeader = ""&gt;<br>&lt;cfoutput query="myLoop"&gt; <br>    &lt;cfset variables.setHeader = variables.setHeader &amp; ", C_#myLoop.acc#&gt; <br>&lt;/cfoutput&gt;</p><p>The above code is displaying column header (just one sample data I am showing here) but it is showing as 'C_000391'. Which is wrong! For display, 'C_' should not be with account number, it is the account number which should create the column header alone. However, as soon as I am taking off 'C_' from infront of #myLoop.acc# it is giving the following error:</p><p>The column name 000391 is invalid. If possible, please let me know what will be the best solution(s) to resolve this toughest problem on the earth :)</p><p>Thanks always Sir</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732934">85</a> by Raymond Camden
		posted on 7/23/2013 at 10:31 PM
		</div>
		<div class="comment_text"><p>I'm afraid I do not have enough information here. What exactly is setHeader and how exactly are you using it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732937">86</a> by Russ LaValle
		posted on 7/23/2013 at 11:54 PM
		</div>
		<div class="comment_text"><p>I don't see a closing double-quote in the second cfset line in Faisal's code snippet...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732942">87</a> by Garrett Neisler
		posted on 8/27/2013 at 7:12 PM
		</div>
		<div class="comment_text"><p>I know this is an old thread but wanted to weigh in a solution I have come across for the date format issue.</p><p>Ran into this issue and was hard to duplicate until I upgraded to 2013 excel and was able to duplicate.  My first attempt was a success at upgrading the output for spreadsheetNew to output XLSX using the xmlFormat attribute.  Bam, dates are properly formatted!</p><p>&lt;cfset sheet = SpreadSheetNew('CustomerData', "TRUE")</p><p>&lt;cfheader name="Content-Disposition" value="attachment; filename=CustomerData.xlsx"&gt;<br>&lt;cfcontent type="application/vnd.openxmlformats-officedocument.spreadsheetml.sheet" variable="#spreadSheetReadBinary(sheet)#"&gt;</p><p>Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732938">88</a> by James Moberg
		posted on 8/27/2013 at 7:35 PM
		</div>
		<div class="comment_text"><p>According to the ColdFusion 9 documentation, SpreadsheetNew() accepts a second optional boolean value (but the docs display it passed as a text string) and this doesn't seem to have any effect.</p><p>I've posted sample code here.  Adding XLSX support for Microsoft Office Excel 2007 and changing the cfcontent type didn't generate the desired date formatting I requested:<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FaQnembR3%3AeU-7xrAJ-VvpUAkvrTipIkRbKgE&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/aQnembR3">http://pastebin.com/aQnembR3</a></p><p>What datetime format are you using?  According to Adobe, "m/d/yy h:mm" is a valid date format, but it returns date-only values (without the time) when using ColdFusion 9 or 10.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732941">89</a> by Garrett Neisler
		posted on 8/27/2013 at 9:14 PM
		</div>
		<div class="comment_text"><p>James, I am using the "m/d/yy" dataformat.</p><p>I now understand your issue as times do not display for me either,  I had a similar issue where my dates would display at 5 random numbers in excel.</p><p>Using your test I still get a custom dataformat in Excel with the following in all rows: 8/27/2013 0:00</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732940">90</a> by Laurie
		posted on 2/26/2014 at 3:49 AM
		</div>
		<div class="comment_text"><p>Thanks for this code!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732939">91</a> by ion
		posted on 4/1/2014 at 6:19 PM
		</div>
		<div class="comment_text"><p>i'm trying to avoid making an extra trip to the server just to get a spreadsheet. I mean, i already have the data and display it soon as the page loads. If user wants to save it as excel, i don't want to reload the page and rerun the query, but rather use the original data, saved in a form field. is there a way to translate that cfsavecontent mechanism into a javascript function? Generating the html table would be pretty straightforward, but how do i pop the last part 		<br>&lt;cfheader name="Content-Disposition"<br>		value="attachment; filename=machineList.xls"	/&gt;</p><p>&lt;cfcontent type="application/msexcel"<br>		variable="#ToBinary( ToBase64( myVar) )#" /&gt;</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732944">92</a> by Raymond Camden
		posted on 4/1/2014 at 10:18 PM
		</div>
		<div class="comment_text"><p>Modern browsers can create files on the client side and even stream them to download, but you would need to handle creating XLS-compatible binary data client-side, which is not something I think is possible. In theory you could make a CSV file, and I think most computers w/ Excel installed will open a CSV in Excel.</p><p>But again - the "create a file you can download" is *very* much limited to modern browsers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732947">93</a> by Raymond Camden
		posted on 4/3/2014 at 2:44 PM
		</div>
		<div class="comment_text"><p>I created a demo of dynamically generating CSV and downloading it. I'll be blogging it today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732946">94</a> by Siva
		posted on 4/18/2014 at 6:55 PM
		</div>
		<div class="comment_text"><p>Hi ,</p><p>We have migrated from Microsoft Office to Open Office. My current logic of writing to an excel sheet in MS Office is not working in Open Office . When i try to open the .xls file in the word pad, i am getting lot of blank spaces before the html content. once i have removed the blank spaces, i could be able to open the .xls file using Open Office. May i know what can be  down to fix this issue ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732949">95</a> by Raymond Camden
		posted on 4/18/2014 at 8:01 PM
		</div>
		<div class="comment_text"><p>I'm sorry, but I don't quite understand what you are saying. In theory, the binary generated by cfspreadsheet should work in OpenOffice as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732950">96</a> by Siva
		posted on 4/18/2014 at 10:11 PM
		</div>
		<div class="comment_text"><p>&lt;cfsavecontent variable="a"&gt;</p><p>&lt;/cfsavecontent&gt;<br>&lt;cfcontent type="application/<a href="http://disq.us/url?url=http%3A%2F%2Fvnd.ms%3ARIbA8soTuCEGDF4hWftV-Un4ZfU&amp;cuid=3321886" rel="nofollow noopener" title="vnd.ms">vnd.ms</a>-excel" reset="no" variable="#ToBinary(ToBase64(a.Trim()))#"&gt;</p><p>I have used the above logic from you blog discussion and the problem has been resolved now.</p><p>HTML content had lot of blank spaces which i have trimmed off using the above logic from your blog.</p><p>Thank You very much for you blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732953">97</a> by Siva
		posted on 4/18/2014 at 10:13 PM
		</div>
		<div class="comment_text"><p>I did not use cfspreadsheet , but i have used the following logic</p><p>&lt;cfcontent type="application/<a href="http://disq.us/url?url=http%3A%2F%2Fvnd.ms%3ARIbA8soTuCEGDF4hWftV-Un4ZfU&amp;cuid=3321886" rel="nofollow noopener" title="vnd.ms">vnd.ms</a>-excel"&gt;</p><p>&lt;cfsavecontent variable="a"&gt;<br>&lt;!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN"&gt;<br>&lt;html&gt;<br>&lt;head&gt;<br>.......................<br>..........................<br>......................<br>&lt;/head&gt;<br>.............<br>....................<br>&lt;/body&gt;&lt;/html&gt;<br>&lt;/cfsavecontent&gt;<br>&lt;cfcontent type="application/<a href="http://disq.us/url?url=http%3A%2F%2Fvnd.ms%3ARIbA8soTuCEGDF4hWftV-Un4ZfU&amp;cuid=3321886" rel="nofollow noopener" title="vnd.ms">vnd.ms</a>-excel" reset="no" variable="#ToBinary(ToBase64(a.Trim()))#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732954">98</a> by Raymond Camden
		posted on 4/19/2014 at 1:24 AM
		</div>
		<div class="comment_text"><p>Um, well, this blog post is about cfspreadsheet. If your question is not related to the topic, I'd ask you please post it to Stack Overflow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732952">99</a> by Niva Le
		posted on 5/10/2014 at 4:42 AM
		</div>
		<div class="comment_text"><p>I used the following code to create multiple sheets, but I can't get the getPrintSetup() function to work on these sheet. <br>&lt;cfset i=1&gt;<br>&lt;CFLOOP query="getproducttypeid"&gt;<br>  &lt;cfset sObj = "sObj"&amp;"#i#"&gt;<br>    &lt;cfset sObj=SpreadsheetNew("#getproducttypeid.description#")&gt;<br>    &lt;cfset poiSheet = sObj.getWorkBook().getSheet("#getproducttypeid.description#")&gt;<br>    &lt;cfset ps = poiSheet.getPrintSetup()&gt;<br>    &lt;cfset ps.setLandscape(true)&gt;<br>    &lt;cfset poiSheet.setAutobreaks(true)&gt;<br>&lt;!--- fit to one page ---&gt;    <br>    &lt;cfset ps.setFitWidth(1)&gt;<br>    &lt;cfspreadsheet action="update" name="sObj" filename="#thefile#"&gt;<br>    &lt;cfset i = i+1&gt;<br>&lt;/cfloop&gt;<br>Do you know why? Am I missing something here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732951">100</a> by Jarlath Eoin Gallagher
		posted on 7/9/2014 at 1:53 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Firstly, thank you for this tutorial on the use of spreadsheetNew(). We have been able to implement this to provide us with an excel export in very few lines of code, unlike some of what we experienced with poiutility approaches.</p><p>We have run into one issue with spreadsheetFormatRow. Is there a known issue in Coldfusion 10 for this? I have attempted to take an exact replica of what you have done in this tutorial above and run it upon Apache and ColdFusion 10,286680 with Tomcat 7.0.23.0.</p><p>We are running into an issue however where the process fails at spreadsheetFormatRow with an issue here 500 org.apache.poi.ss.usermodel.Font.getCharSet()...</p><p>It may be a long shot but hoping someone has experienced this and resolved it, i will keep investigating and reply when i know more.</p><p>Thanks,</p><p>Jarlath</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732955">101</a> by Raymond Camden
		posted on 7/9/2014 at 3:39 PM
		</div>
		<div class="comment_text"><p>I just tested and my code worked ok. Using build 10,0,13,287689 which I think is above yours. You may want to ensure you are 100% updated. If it still doesn't work you need to file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732957">102</a> by Jarlath Eoin Gallagher
		posted on 7/9/2014 at 7:45 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond,</p><p>I have, as suggested, updated my CF10 and have discovered that there are 2 poi jar variants in my lib folder. The poi.jar distributed in update 12 and one named  poi-3.8-20120326.jar. It turns out a fellow developer included this poi-3.8-20120326 for a specific purpose and it appears to be in conflict with the distributed jar.</p><p>Using poi.jar alone allowed the above code to work correctly so it is now down to the infrastructure team to ascertain what the risk is of having the 2 different jars in the one lib folder.</p><p>Thank you for your help and pointers in the right direction.</p><p>Regards,</p><p>Jarlath</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732956">103</a> by Bob Baader
		posted on 11/17/2014 at 10:09 PM
		</div>
		<div class="comment_text"><p>I am running cf10 on Linux. I am not using cfspreadsheet because it is not a straight output due to conditions. I am generating the excel file just fine and it prompts download. What I need to do is save the excel file to the server and have my email script pick it up and email as an attachment. If I manually place an excel file in the server my script emails it. Otherwise, the file is not written to the server. Is it a permissions issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732959">104</a> by Raymond Camden
		posted on 11/18/2014 at 5:02 PM
		</div>
		<div class="comment_text"><p>I'd guess so. That should be easy to confirm though, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732960">105</a> by Bob Baader
		posted on 11/18/2014 at 7:23 PM
		</div>
		<div class="comment_text"><p>Nice to meet you! Got it all sorted. Thanks. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2111186253">
	<div>
		<img src="https://disqus.com/api/users/avatars/haysfluid.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2111186253">106</a> by haysfluid
		posted on 7/1/2015 at 7:45 PM
		</div>
		<div class="comment_text"><p>Using the code above, how can you also repeat the header row on each printed page.  This is needed if the number of rows exceeds the size of a page when printing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2111363076">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2111363076">107</a> (In reply to <a href="#c_2111186253">#106</a>) by Raymond Camden
		posted on 7/1/2015 at 9:26 PM
		</div>
		<div class="comment_text"><p>Hmm, not sure. If you build a simple XLS sheet in Excel itself, does it do this automatically?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2113195853">
	<div>
		<img src="https://disqus.com/api/users/avatars/haysfluid.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2113195853">108</a> (In reply to <a href="#c_2111363076">#107</a>) by haysfluid
		posted on 7/2/2015 at 7:18 PM
		</div>
		<div class="comment_text"><p>Thanks for getting back to me.  I was hoping to build off of this example.  I have seen other places where they used XML, then opened that XML in Excel, added the repeating header and then compared XML to see what XML code was added.  They then added that code to their ColdFusion and I am guessing it worked.  I prefer this example,  I am not very familiar with XML.  That's why I was hoping you or someone else had accomplished this using your example as a base.</p><p>I was abled to change the layout from portrait to landscape with some code I found. (POI??)  It looks like using this same code will work, but I can't figure it out.  Just can't seem to get it to work.  Here is the Code for both the Landscape change and the Repeating code that I can't get to work.</p><p>__________________________________________________________</p><p>&lt;cfset poisheet="s.getWorkBook().getSheet("Schedule")"&gt;<br>&lt;cfset ps="poiSheet.getPrintSetup()"&gt;<br>&lt;cfset ps.setlandscape(true)=""&gt;</p><p>&lt;cfset ps.setfitheight(1)=""&gt;<br>&lt;cfset ps.setfitwidth(1)=""&gt;</p><p>&lt;cfset poisheet.setrepeatingrowsandcolumns(int="" sheetindex,="" int="" startcolumn,="" int="" endcolumn,="" int="" startrow,="" int="" endrow)=""&gt;</p><p>&lt;cfset test="poiSheet.setRepeatingRowsAndColumns(int" sheetindex,="" int="" startcolumn,="" int="" endcolumn,="" int="" startrow,="" int="" endrow)=""&gt;</p><p>&lt;cfset test.setrepeatingrowsandcolumns(0,="" 0,="" 7,="" 0,="" 0)=""&gt;</p><p>______________________________________________________</p><p>It doesn't like the setRepeatingRowsAndColumns(....)  It either says it's not a defined function or tells me it's expecting (sheetIndex) which is there, but has the int in front of it. But if I remove the int from all of the items, it then tells me they are not defined.  With just this code added to your code I get this error when trying to load the page.</p><p>Invalid CFML construct found on line 578 at column 48.ColdFusion was looking at the following text:</p><p>sheetIndex</p><p>The CFML compiler was processing:&lt;ul&gt;&lt;li&gt;An expression beginning with poiSheet.setRepeatingRowsAndColumns, on line 578, column 8.This message is usually caused by a problem in the expressions structure.&lt;li&gt;A cfset tag beginning on line 578, column 2.&lt;li&gt;A cfset tag beginning on line 578, column 2.&lt;/ul&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2113209040">
	<div>
		<img src="https://disqus.com/api/users/avatars/haysfluid.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2113209040">109</a> (In reply to <a href="#c_2111363076">#107</a>) by haysfluid
		posted on 7/2/2015 at 7:23 PM
		</div>
		<div class="comment_text"><p>Here is the information on the POI that I talked about. <br>Webpage:<br>)<a href="https://disq.us/url?url=https%3A%2F%2Fpoi.apache.org%2Fapidocs%2Forg%2Fapache%2Fpoi%2Fhssf%2Fusermodel%2FHSSFSheet.html%23setRepeatingRows%28org.apache.poi.ss.util.CellRangeAddress%29%3AVkRt8_JJVPt_4bGgKE-3BICoMWU&amp;cuid=3321886" rel="nofollow noopener" title="https://poi.apache.org/apidocs/org/apache/poi/hssf/usermodel/HSSFSheet.html#setRepeatingRows(org.apache.poi.ss.util.CellRangeAddress)">https://poi.apache.org/apid...</a></p><p>Below is the content that I think will do the trick, just can't figure out how to get it working in my ColdFusion code.<br>setRepeatingRowsAndColumns</p><p>void setRepeatingRowsAndColumns(int sheetIndex,<br>                              int startColumn,<br>                              int endColumn,<br>                              int startRow,<br>                              int endRow)</p><p>Deprecated. use Sheet.setRepeatingRows(CellRangeAddress)        or Sheet.setRepeatingColumns(CellRangeAddress)</p><p>Sets the repeating rows and columns for a sheet (as found in File-&gt;PageSetup-&gt;Sheet).  This is function is included in the workbook because it creates/modifies name records which are stored at the workbook level.</p><p> To set just repeating columns:</p><p>  workbook.setRepeatingRowsAndColumns(0,0,1,-1-1);<br>  To set just repeating rows:</p><p>  workbook.setRepeatingRowsAndColumns(0,-1,-1,0,4);<br>  To remove all repeating rows and columns for a sheet.</p><p>  workbook.setRepeatingRowsAndColumns(0,-1,-1,-1,-1);</p><p>Parameters:sheetIndex - 0 based index to sheet.startColumn - 0 based start of repeating columns.endColumn - 0 based end of repeating columns.startRow - 0 based start of repeating rows.endRow - 0 based end of repeating rows.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2114575145">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2114575145">110</a> (In reply to <a href="#c_2113195853">#108</a>) by Raymond Camden
		posted on 7/3/2015 at 2:24 PM
		</div>
		<div class="comment_text"><p>Yeah, sorry, I can't really help here. I haven't worked with Poi in years. Best I can do is wish you luck. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2119667198">
	<div>
		<img src="https://disqus.com/api/users/avatars/haysfluid.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2119667198">111</a> (In reply to <a href="#c_2114575145">#110</a>) by haysfluid
		posted on 7/6/2015 at 4:23 PM
		</div>
		<div class="comment_text"><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2805418815">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2805418815">112</a> (In reply to <a href="#c_1713732939">#91</a>) by dawesi
		posted on 7/27/2016 at 1:47 AM
		</div>
		<div class="comment_text"><p>For anyone who implemented the HTML table generated excel file, from July 2016 msoffiec will no longer open .xls files created as tables</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.infoworld.com%2Farticle%2F3098898%2Fmicrosoft-windows%2Fexcel-refusing-to-open-files-blame-the-kb-3115322-3115262-security-updates.html%3ACZMWNaV0xazQhQ8fjElYvwoeVfc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.infoworld.com/article/3098898/microsoft-windows/excel-refusing-to-open-files-blame-the-kb-3115322-3115262-security-updates.html">http://www.infoworld.com/ar...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3386295872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3386295872">113</a> by Alec
		posted on 6/26/2017 at 2:09 PM
		</div>
		<div class="comment_text"><p>Hi Ray, your code example is great! thank you! but I can only generate an excel file when the records are below 20K. When I tested it with 20K records coldfusion 10 crashed. The application.log says something about java heap. I did not see any error message but the process just stopped!<br>Java heap space The specific sequence of files included or processed is: .. pointing to my cfm file.</p><p>      &lt;cfquery name="q" datasource="#application.Main_DSN#"&gt;<br>       select *<br>       from address<br>       where rownum &lt; 20001<br>      &lt;/cfquery&gt;<br>  &lt;cfset filename="expandPath("./myexcel.xls")"&gt;<br>  &lt;cfspreadsheet action="write" query="q" filename="#filename#" overwrite="true"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_3386330145">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3386330145">114</a> (In reply to <a href="#c_3386295872">#113</a>) by Raymond Camden
		posted on 6/26/2017 at 2:33 PM
		</div>
		<div class="comment_text"><p>I'm guessing maybe it ran out of memory? You can try increasing the max available memory in the settings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3386361169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3386361169">115</a> (In reply to <a href="#c_3386330145">#114</a>) by Alec
		posted on 6/26/2017 at 2:53 PM
		</div>
		<div class="comment_text"><p>Current setting is : Minimum JVM Heap Size (in MB)</p><p> Maximum JVM Heap Size  (in MB)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3386362403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3386362403">116</a> (In reply to <a href="#c_3386361169">#115</a>) by Alec
		posted on 6/26/2017 at 2:54 PM
		</div>
		<div class="comment_text"><p>min is 256 and max is 512</p></div>
	</div>
</div>
		
<div class="comment" id="c_3386382869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3386382869">117</a> (In reply to <a href="#c_3386330145">#114</a>) by Alec
		posted on 6/26/2017 at 3:07 PM
		</div>
		<div class="comment_text"><p>Ray, from your example codes, which objects occupy the most portions of heap? I mean, I only have three lines, the query and two cfsets. Is cfspreadsheet writing to excel file the one occupying the largest postion of heap???</p></div>
	</div>
</div>
		
<div class="comment" id="c_3386403981">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3386403981">118</a> (In reply to <a href="#c_3386382869">#117</a>) by Raymond Camden
		posted on 6/26/2017 at 3:21 PM
		</div>
		<div class="comment_text"><p>No idea. If it doesn't crash w/ just the query, than it's probably cfspreadsheet.</p></div>
	</div>
</div>
		