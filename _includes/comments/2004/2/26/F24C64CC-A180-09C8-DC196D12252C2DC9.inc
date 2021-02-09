
<div class="comment" id="c_1713615425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615425">1</a> by Andrew Scott
		posted on 2/26/2004 at 6:38 PM
		</div>
		<div class="comment_text"><p>&lt;p&gt;<br>Insofar as I know, SQL Server does not have a utility akin to the mysqldump. However, you can create stored procedure to accomplish the same thing.<br>&lt;/p&gt;<br>&lt;p&gt;<br>For examples, see:<br>&lt;/p&gt;<br>&lt;p&gt;<br>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fvyaskn.tripod.com%2Fcode.htm%23inserts%3Aw5NzDEYW_s1T2MS4s2qAJ1nYtqY&amp;cuid=3321886" rel="nofollow noopener" title="http://vyaskn.tripod.com/code.htm#inserts">http://vyaskn.tripod.com/co...</a>"&gt;Information about SP&lt;/a&gt;<br>&lt;br /&gt;<br>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fvyaskn.tripod.com%2Fcode%2Fgenerate_inserts.txt%3AWofT0-lQY0NruJeVUy4FuqMhBkA&amp;cuid=3321886" rel="nofollow noopener" title="http://vyaskn.tripod.com/code/generate_inserts.txt">http://vyaskn.tripod.com/co...</a>"&gt;SP Code&lt;/a&gt;<br>&lt;/p&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615424">2</a> by Andrew Scott
		posted on 2/26/2004 at 6:39 PM
		</div>
		<div class="comment_text"><p>Oops. Sorry for the extraneous HTML code.</p><p>Just trying to make the comment look nice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615423">3</a> by Steven Ringo
		posted on 2/26/2004 at 6:48 PM
		</div>
		<div class="comment_text"><p>Have a look at RedGate's SQL Data Compare - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.red-gate.com%2FSQL_Data_Compare.htm%3AMPRqCwO4d8umfWU1Ge1Kzb2UwPk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.red-gate.com/SQL_Data_Compare.htm">http://www.red-gate.com/SQL...</a>.  If you "compare" to an identical, yet empty table, all the insert statements will be there.  It is costly, but if you use SQL Server a lot, it is really useful, especially SQL Compare (used for synchrinising Data Schemas).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615417">4</a> by Ted
		posted on 2/26/2004 at 9:04 PM
		</div>
		<div class="comment_text"><p>BCP ( a command line util) has and is the only export/import utility that SQL has.</p><p>Other than that there is DTS - data transformation services that can transfer the data to another data source.</p><p>I ended up making my own script to generate Insert Statements. It uses the ADO to find the type of data being passed back and if the column is a primary key or not. I ended up doning this due to the transfer of data between Oracle and SQL server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615421">5</a> by Jeff Wilkinson
		posted on 2/27/2004 at 1:10 AM
		</div>
		<div class="comment_text"><p>The 2eNetWorX TableEditoR ASP db admin program has a feature for exporting in SQL insert format.  We're working on the next version with improvements, let me know if you'd like to see or test what we have so far.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615419">6</a> by Jeff Wilkinson
		posted on 2/27/2004 at 1:11 AM
		</div>
		<div class="comment_text"><p>whoops, forgot to post the url:<a href="http://disq.us/url?url=http%3A%2F%2Fwww.2enetworx.com%2Fdev%2Fprojects%2Ftableeditor.asp%3Aaym5TjAWcKRVCJyfVCGSsRwBdFg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.2enetworx.com/dev/projects/tableeditor.asp">http://www.2enetworx.com/de...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615420">7</a> by David Fekke
		posted on 2/27/2004 at 11:05 PM
		</div>
		<div class="comment_text"><p>I use the Red Gate software to make sure my code tables are up to date between my dev, qa and live environments. SQL Data Compare is just one of three tools they ship for SQL. We use it for structural comparisons as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615422">8</a> by Pedro Vieira
		posted on 9/29/2005 at 12:26 AM
		</div>
		<div class="comment_text"><p>I used the script in "<a href="http://disq.us/url?url=http%3A%2F%2Fvyaskn.tripod.com%2Fcode%2Fgenerate_inserts.txt%3AWofT0-lQY0NruJeVUy4FuqMhBkA&amp;cuid=3321886" rel="nofollow noopener" title="http://vyaskn.tripod.com/code/generate_inserts.txt">http://vyaskn.tripod.com/co...</a>" as Andrew Scott said.<br>Here you can replace the line</p><p>EXEC (@Actual_Values)</p><p>by</p><p>PRINT (@Actual_Values)</p><p>then get the SELECT string and create a view with it.<br>You can then open with enterprise manager, and you'll have no restrictions with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615428">9</a> by SAS
		posted on 10/19/2005 at 1:40 PM
		</div>
		<div class="comment_text"><p>You shoul try this nice little c# app:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.eggheadcafe.com%2Farticles%2F20040913.asp%3Am6wUqSuV19yLoBqmFYq2SNfSzkc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.eggheadcafe.com/articles/20040913.asp">http://www.eggheadcafe.com/...</a></p><p>It lacks some advanced features but it solves the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615427">10</a> by Kurt Bonnet
		posted on 3/20/2007 at 6:08 PM
		</div>
		<div class="comment_text"><p>I know this post is super old, but I thought I'd post my work around for this problem. What I do is I setup an ODBC Data Source on my computer that points to the SQL server database I want to backup data for. Then I create an empty mysql database. Then I use SQLYog's ODBC Import functionality to import the tables I want from SQL server into my empty MySQL database. From there, you just to a good old MySQL dump to get the data as insert statements.</p><p>You can get SQLYog at: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.webyog.com%3A6eDXqOemmaM53frFWU4vpcNU_LM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.webyog.com">http://www.webyog.com</a></p><p>You may be able to accomplish this with the mysql tools that are available now. I'm not sure. You can download the MySQL tools here. Post your results to this blog entry if it's possible.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysql.com%2Fproducts%2Ftools%2F%3ADDwW9mH9VCLpmmj4QdyKNnU-Abs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysql.com/products/tools/">http://www.mysql.com/produc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615426">11</a> by Thomas
		posted on 7/9/2007 at 7:35 PM
		</div>
		<div class="comment_text"><p>Try <a href="http://disq.us/url?url=http%3A%2F%2Fwww.sqlscripter.com%3AKUQ5-KkdxZMV_LxjmrnF_W3CqHw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sqlscripter.com">http://www.sqlscripter.com</a> to export data to T-SQL (generate Insert, Update, Delete commands) or to CSV/Text.<br>It's free.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615433">12</a> by GM
		posted on 10/29/2007 at 4:37 PM
		</div>
		<div class="comment_text"><p>I use Embarcadero DBArtisan Schema Extraction for script all the desired objects and then "Generate Insert Statements" for the data. Nice and easy. I miss my mysqldump anyway...</p><p>Best Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615429">13</a> by JG
		posted on 1/16/2009 at 5:50 PM
		</div>
		<div class="comment_text"><p>MSSQL 2008 has this feature<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.kodyaz.com%2Farticles%2Fsql-server-script-data-with-generate-script-wizard.aspx%3Afzb31jA2qSDmT6hQCsbBX_vpbAg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.kodyaz.com/articles/sql-server-script-data-with-generate-script-wizard.aspx">http://www.kodyaz.com/artic...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615430">14</a> by Gerard
		posted on 5/5/2009 at 5:13 PM
		</div>
		<div class="comment_text"><p>The "Publish to provider" option in the Visual Studio server explorer can generate a SQL script with table definitions and data (insert statements).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615432">15</a> by müzso
		posted on 1/5/2010 at 5:04 PM
		</div>
		<div class="comment_text"><p>As mentioned before, MSSQL 2008 already has this capability (a so called "Database Publishing Wizard" utility) built in.<br>For MSSQL 2005 it's available as a seperate download:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.microsoft.com%2Fdownloads%2Fdetails.aspx%3FFamilyId%3D56E5B1C5-BF17-42E0-A410-371A838E570A%26displaylang%3Den%3AMewmsznecm2YJ8TBevos34W0_C8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.microsoft.com/downloads/details.aspx?FamilyId=56E5B1C5-BF17-42E0-A410-371A838E570A&amp;displaylang=en">http://www.microsoft.com/do...</a></p><p>It has only very basic functionality. Doesn't even let you filter ... you can export only a whole table with all of it's records.<br>But it works. Most of the time. :-)<br>And it's damned slow. :-(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615431">16</a> by Mike
		posted on 9/27/2010 at 12:20 AM
		</div>
		<div class="comment_text"><p>Most data bases can generate DDL for any object but not a lot of them allow generation of INSERT statements for the table data.<br>The workaround is to make use of ETL Tools for transferring data across servers. However, there exists a need to generate INSERT statements from the tables for porting data.<br>Simplest example is when small or large amount of data needs to be taken out on a removable storage media and copied to a remote location, INSERT..VALUES statements come handy.</p><p>There is a number of scripts available to perform this data transformation task. The problem with those scripts that all of them database specific and they do not work with textiles</p><p>Advanced ETL processor can generate Insert scripts from any data source including text files<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.dbsoftlab.com%2Fgenerating-insert-statements.html%3A8iSXjasq3-rxO4i5vCIvY2qF4Y0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dbsoftlab.com/generating-insert-statements.html">http://www.dbsoftlab.com/ge...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615435">17</a> by Derwin
		posted on 4/8/2011 at 7:49 PM
		</div>
		<div class="comment_text"><p>Need help:</p><p>1. I need to write sql to create and index on each of the following tables and columns<br>nce_cbt_incfolder-- inc, folder<br>nce_cbt_incpfcomplete--empid,inc,lastnm<br>nce_cbt_incpfingest--empid, inc, lastnm<br>nce_cbt_incpfunknown--empid, inc<br>The index name should be the tablename_index.</p><p>This is what I have:<br>CREATE TABLE nce_cbt_incfolder<br>(inc char(50), folder char(50));</p><p>CREATE TABLE nce_cbt_incpfcomplete<br>(empid char(50), inc char(50), lastnm char(50));</p><p>CREATE TABLE nce_cbt_incpfingest<br>(empid char(50), inc char(50), lastnm char(50));</p><p>CREATE TABLE nce_cbt_incpfunknown<br>(empid char(50), inc char(50));</p><p>CREATE INDEX nce_cbt_incfolder_index<br>on nce_cbt_incfolder (inc, folder);</p><p>CREATE INDEX nce_cbt_incpfcomplete_index<br>on nce_cbt_incpfcomplete (empid, inc, lastnm);</p><p>CREATE INDEX nce_cbt_incpfingest_index<br>on nce_cbt_incpfingest (empid, inc, lastnm);</p><p>CREATE INDEX nce_cbt_incpfunknown_index<br>on nce_cbt_incpfunknown (empid, inc, lastnm);</p><p>END</p><p>Is this correct?</p><p>Next,</p><p>2. I need to  write the script to optimize these 4 tables.</p><p>This is what I have so far:</p><p>OPTIMIZE TABLE nce_cbt_incfolder;<br>OPTIMIZE TABLE nce_cbt_incpfcomplete;<br>OPTIMIZE TABLE nce_cbt_incpfingest;<br>OPTIMIZE TABLE nce_cbt_incpfunknown;</p><p>END</p><p>Is this correct?</p><p>3. I need to create coldfusion page to execute the scripts.</p><p>How do I do that?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615436">18</a> by Raymond Camden
		posted on 4/8/2011 at 8:14 PM
		</div>
		<div class="comment_text"><p>1) No idea on 1. My SQL sucks.<br>2) Ditto.<br>3) You can run SQL via cfquery statements.</p></div>
	</div>
</div>
		