
<div class="comment" id="c_1713734113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734113">1</a> by Andrew Scott
		posted on 7/12/2011 at 8:16 AM
		</div>
		<div class="comment_text"><p>As much as this is a great tip, I would like to add that there are times you might want to keep a copy of the file as well. Most of the time these type of files are when a user has been logged in, so what you can do is use such things as the name of the user, as well as the name of the file to make it unique for the user as well.</p><p>But if you don't need to have a copy for archiving purposes, then this is a great tip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734114">2</a> by Raymond Camden
		posted on 7/12/2011 at 2:26 PM
		</div>
		<div class="comment_text"><p>Ahem....</p><p>"If you don't need to save the Excel file on the server,..."</p><p>;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734120">3</a> by Andrew Scott
		posted on 7/12/2011 at 4:32 PM
		</div>
		<div class="comment_text"><p>Yes you did, but in case others read this that are not familiar I thought I would mention it anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734121">4</a> by Raymond Camden
		posted on 7/12/2011 at 4:42 PM
		</div>
		<div class="comment_text"><p>Another option would be to store the binary in the db. I've never been a big fan of that, but you could save the BLOB too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734117">5</a> by Ben B
		posted on 7/13/2011 at 1:14 AM
		</div>
		<div class="comment_text"><p>Pros and cons of storing files in the DB... There's a discussion I'd be interested in seeing.  Maybe even a separate post.</p><p>I've toyed with the idea but haven't tried it.  I thought it might be an alternative way I could avoid storing sensitive files in web root.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734119">6</a> by Raymond Camden
		posted on 7/13/2011 at 1:21 AM
		</div>
		<div class="comment_text"><p>I'm no DBA. My only real thought is that a file system is _built_ for storing files, so why _not_ use it. Web root shouldn't matter. A proper web app has access to more than just web root. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734118">7</a> by Jason Fisher
		posted on 7/14/2011 at 7:15 PM
		</div>
		<div class="comment_text"><p>@Ben B</p><p>I have worked the storage of (image) files as CLOBs in the database, and it works pretty well, BUT the files become huge, as the string format is larger than the tight binary.  Never had much luck with the actual binary in the BLOB, and CF made it easy to do the stream into the CLOB.</p><p>Abandoned it pretty quickly, though, as the DB size grew astronomically, and, as Ray points out, the filesystem really is quite good at storing and managing files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734122">8</a> by Rick Hazen
		posted on 7/14/2011 at 8:46 PM
		</div>
		<div class="comment_text"><p>Very helpful post, Ray. I am using this in my current project but have run into an error when trying to create spreadsheets with more than 256 columns: "An exception occurred while calling the function addRow. java.lang.IllegalArgumentException: Invalid column index (256). Allowable column range for BIFF8 is (0..255) or ('A'..'IV')".  This is a definite problem because I need to generate some pretty large spreadsheets. Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734127">9</a> by Raymond Camden
		posted on 7/24/2011 at 6:53 PM
		</div>
		<div class="comment_text"><p>@Rick: Outside of filing a bug report - no. Sorry. You could try Nadel's CFPOI to see if that gets around it though. (Sorry for delay - was on vacation.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734128">10</a> by Walt
		posted on 4/16/2012 at 10:24 PM
		</div>
		<div class="comment_text"><p>I may or may not be confused about formatting functionality.<br>I'm wanting to add a background color to a row, irrespective of whether there is text or not.<br>I use 'fgcolor' as the attribute to change in the formatting structure I send to the formatting function (SpreadsheetFormatRow) but no formatting occurs unless there is text or a value in the cell itself.<br>Should I not be able to change the color of a row?<br>Confused and addled.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734126">11</a> by Raymond Camden
		posted on 4/16/2012 at 10:36 PM
		</div>
		<div class="comment_text"><p>What about a value of ""?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734130">12</a> by Tom Van Schoor
		posted on 6/19/2012 at 10:52 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>We met on the cf-objective 2012 ;)</p><p>SpreadsheetAddRow has proven to be very slow when handling a  lot of rows, whereas the tag &lt;cfspreadsheet&gt; is very fast.</p><p>Therefore I would suggest:</p><p>&lt;!--- create unique filename ---&gt;<br>&lt;cfset filename = expandPath("./#createUUID()#-myexcel.xls")&gt;</p><p>&lt;!--- Create some query and fill it up ---&gt;<br>&lt;cfset q = queryNew("Date,Description,Load,Deduct,Balance", "cf_sql_timestamp,cf_sql_varchar,cf_sql_decimal,cf_sql_decimal,cf_sql_decimal")&gt;</p><p>&lt;!--- Write the file to disc ---&gt;<br>&lt;cfspreadsheet action="write" query="q" filename="#filename#" overwrite="true"&gt;</p><p>&lt;!--- Read the file and pass it to cfcontent ---&gt;<br>&lt;cffile action="readbinary" file="#filename#" variable="mySheet"&gt;</p><p>&lt;!--- Delete the file in same request ---&gt;<br>&lt;cffile action="delete" file="#filename#"&gt;</p><p>&lt;!--- Pass the binary to cfcontent ---&gt;<br>&lt;cfcontent type="application/x-msexcel" reset="true" variable="#mySheet#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734124">13</a> by Raymond Camden
		posted on 6/19/2012 at 5:42 PM
		</div>
		<div class="comment_text"><p>Interesting. What if you skip addRow and use addRows instead?  It will take a query. You can also - probably - skip the 'real' file system and write to RAM using VFS instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734131">14</a> by Tom Van Schoor
		posted on 6/20/2012 at 9:55 AM
		</div>
		<div class="comment_text"><p>addRows is supposedly just as slow, but I haven't tested it personally. I will benchmark it and will post the results.</p><p>Cheers,<br>Tom</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734132">15</a> by Dylan
		posted on 7/19/2012 at 9:41 PM
		</div>
		<div class="comment_text"><p>@Ray &amp; @Tom:</p><p>I know it's late to the thread, but I wanted to post here so others don't run into the same issue I did.  SpreadsheetAddRow() and SpreadsheetFormatRow() are not only crazy slow (even on relatively small spreadsheets, like 500 rows), but they also use HUGE amounts of memory.  We kept running into an issue on the server where JRun would consume massive amounts of memory as it tried to build a large spreadsheet one row at a time.  Refactoring the code the push all the content for the spreadsheet into a query, then using SpreadsheetAddRows() with the query (on 9.0.1), then running SpreadsheetFormatCellRange(), sped things up by a factor of 10-100x.  Plus JRun is happy.  So our clients are happy.  So I'm happy.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734133">16</a> by Charles Higgins
		posted on 2/9/2013 at 4:39 PM
		</div>
		<div class="comment_text"><p>Quick note about performance, it still sucks on CF10. As does the issue with Comma only demli. <br>I a found solution to my little problem, and just posting up for anybody else googling the issue. <br>It can generate a 10,000 row xls file (3mb+ in just over second with default server settings).</p><p>1. Generate a CSV file using coldfusion (cfsavecontent various outputs) (as i I have a few dynamic labels, and use a none COMMA delimiter!).<br>2. Convert CSV into a query (I used the cfx text2query as that allows you to spec a none comma delmi).<br>3. Use cfspreadsheet to convert the query into xls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734135">17</a> by Misty
		posted on 4/4/2013 at 4:28 PM
		</div>
		<div class="comment_text"><p>Hi ray, I am working on Spreadsheets, but i am stuck at two points. the one being give a hyperlink in one of my Workbook sheet to link and open the second sheet of the same workbook. I am using the following code, but it creates the link but always says, unable to load file</p><p>&lt;cfset SpreadsheetSetCellFormula(s, 'HYPERLINK("[Tickets Summary]TicketID_#mainTickets.ticketID#!A1","Click Here")',#k#,12)&gt;</p><p>#k# is the rowline number as this code runs inside the loop.</p><p>I am lost here why here link is not working</p><p>Another thing is: the Function &lt;cfset spreadsheetAddRows(s, queryName)&gt;</p><p>Can't I Pass the Column names of what i need to show and i do not want to show in this rather than it asks for complete queryName</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734137">18</a> by Raymond Camden
		posted on 4/8/2013 at 6:35 PM
		</div>
		<div class="comment_text"><p>1) Um, no idea. I don't use Excel that much and when I do, my formulas are super simple. Best I can say is to look at the result XLS file and compare it to one you made yourself where it works. See what's different.</p><p>2) You can either skip this function and do it more manually or use a Query of Query to create a new query with just the columns you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734139">19</a> by Al Schwarz
		posted on 10/1/2013 at 5:57 PM
		</div>
		<div class="comment_text"><p>Thanks for your samples. <br>I have cloned them and tweaked to suit my needs. <br>I had some fields that in my data were ones or zeros. <br>the user wants to see yes or no in those columns. <br>a minor tweak to my code,</p><p>CASE <br>     	 WHEN  a.[MaintenanceAudit] ='1' THEN 'Yes'<br>     	 ELSE 'No'<br>     	 END as MaintenanceAudit</p><p>that works fine, when the spreadsheet shows on the screen,</p><p>but once it gets converted to the Excel, it has true or false in those fields instead of the yes or no...</p><p>any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734134">20</a> by Raymond Camden
		posted on 10/1/2013 at 6:20 PM
		</div>
		<div class="comment_text"><p>Hmm. I assume you are passing a query object to the Excel sheet. Check the metadata of the query columns and see if that column has a boolean type. If so, try casting it to varchar in a QofQ.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734140">21</a> by Mike Rankin
		posted on 3/11/2014 at 9:49 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Have you had a chance to try out saving an excel spreadsheet with a password and some protected cells?  From the docs, it looks like it should just work, but for me, nothing seems to do anything.  Do you know if it's just really quirky or if it simply doesn't work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734141">22</a> by Raymond Camden
		posted on 3/12/2014 at 7:43 AM
		</div>
		<div class="comment_text"><p>I haven't tried it. Do you have a CFM I can run here to test?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734144">23</a> by David Knighton
		posted on 3/14/2014 at 10:13 PM
		</div>
		<div class="comment_text"><p>Late to the game here, but wanted to add my two cents for posterity, and because the comments here REALLY helped me out.</p><p>I also had a problem with spreadsheet generation being extremely slow. Anything over 600 records or so would always timeout, and generate a really funky spreadsheet to boot.  In the end, it was the same issue others described here with using SpreadsheetFormatCell vs. SpreadsheetFormatCellRange.  Once I switched to the latter, large spreadsheets generate in just a few seconds with no funk.</p><p>Separate subject....with regard to the protected cells issue, I have not personally needed to implement password protection, but the sheets I'm generating do have several columns with information we do not want the users altering. Through a lot of painful googling, I found the only combination that seems to work is protecting the entire sheet by using the password parameter in cfspreadsheet, as well as explicitly locking and unlocking columns or cells within SpreadsheetFormatCell and SpreadsheetFormatCellRange, using locked=true or locked=false. In my case my password value is blank to simply accomplish locking the cells initially, but I would think in theory providing a password would result in the sheet being password protected.</p><p>Hope that helps, though admittedly I could be making it worse. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734142">24</a> by Raymond Camden
		posted on 3/14/2014 at 10:37 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing David.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734143">25</a> by Brig
		posted on 5/21/2014 at 5:06 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Very helpful and clear post. I've been looking high and low with no luck - is there any way to create cfspreadsheet with password protection? I don't just mean cell protection - I mean the user must enter a password to open the spreadsheet.</p><p>Thanks for any help you can provide!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734147">26</a> by Raymond Camden
		posted on 5/21/2014 at 11:19 PM
		</div>
		<div class="comment_text"><p>Afaik, you can password protect it from being modified, but not being opened. Does Excel even offer that? I don't think I've seen it. You could use cfzip in ColdFusion 11 to password protect a zip of the file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734145">27</a> by Ronan Campbell
		posted on 7/9/2014 at 12:47 PM
		</div>
		<div class="comment_text"><p>Hi, <br>this is a really nice piece of code but Im having a slight issue with this part in CF10</p><p>    &lt;!--- format header ---&gt;    <br>48    &lt;cfset spreadsheetFormatRow(s,<br>49            {<br>50                bold=true,<br>51                fgcolor="lemon_chiffon",<br>52                fontsize=14<br>53            }, <br>54            1)&gt;</p><p>I was wondering if you had any issues with applying formatting to the excel sheet. I have tried varying approaches but I can't seem to get the output to adhere to any styling at all.</p><p>Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734146">28</a> by Raymond Camden
		posted on 7/9/2014 at 3:40 PM
		</div>
		<div class="comment_text"><p>Nope, the formatting works for me. Tested in CF10, build 10,0,13,287689.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734148">29</a> by Ronan Campbell
		posted on 7/11/2014 at 4:24 PM
		</div>
		<div class="comment_text"><p>Thanks for the reply, it turns out we had the native cf10 poi, as well as poi3.8 in the lib, inherited from the transition from cf8 to c10, and it was causing issues, so scripts working great now, thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2805414059">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2805414059">30</a> by dawesi
		posted on 7/27/2016 at 1:44 AM
		</div>
		<div class="comment_text"><p>For anyone who implemented this technique, from July 2016 msoffice will no longer open .xls files created as tables</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.infoworld.com%2Farticle%2F3098898%2Fmicrosoft-windows%2Fexcel-refusing-to-open-files-blame-the-kb-3115322-3115262-security-updates.html%3ACZMWNaV0xazQhQ8fjElYvwoeVfc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.infoworld.com/article/3098898/microsoft-windows/excel-refusing-to-open-files-blame-the-kb-3115322-3115262-security-updates.html">http://www.infoworld.com/ar...</a></p></div>
	</div>
</div>
		