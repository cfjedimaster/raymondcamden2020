
<div class="comment" id="c_1713675241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675241">1</a> by Joe Rinehart
		posted on 12/7/2007 at 9:26 PM
		</div>
		<div class="comment_text"><p>Worse than I thought!  It seems that QoQ doesn't like subqueries in the WHERE clause, so I had to do some nastiness, esp. in accounting for recursion (computing relative file names, etc.)</p><p>Here's what I've got:</p><p>&lt;cfif thisTag.executionMode eq "start"&gt;</p><p>&lt;cfparam name="<a href="http://disq.us/url?url=http%3A%2F%2Fattributes.name%3AxQv9zW9qBPnz4C5I5g_EfzeAVB4&amp;cuid=3321886" rel="nofollow noopener" title="attributes.name">attributes.name</a>" type="string" default="directoryCompare" /&gt;<br>&lt;cfparam name="attributes.directoryOne" type="string" /&gt;<br>&lt;cfparam name="attributes.directoryTwo" type="string"&gt;</p><p>&lt;cfset result = structNew() /&gt;</p><p>&lt;cfif not directoryExists(attributes.directoryOne)&gt;<br>	&lt;cfthrow message="'#attributes.directoryOne#' doesn't exist." /&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfif not directoryExists(attributes.directoryTwo)&gt;<br>	&lt;cfthrow message="'#attributes.directoryTwo#' doesn't exist." /&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfdirectory name="filesOne" action="list" recurse="true" directory="#attributes.directoryOne#" /&gt;<br>&lt;cfdirectory name="filesTwo" action="list" recurse="true" directory="#attributes.directoryTwo#" /&gt;</p><p>&lt;!--- <br>	Ray's a mean bastard.  It looks like you can't use subqueries in the WHERE clause of a QoQ,<br>	so my initial idea of just using SQL is bunk.</p><p>	So I says to myself:  create a simple list and do an "IN".</p><p>	Doesn't help much with size/date comparison, though.</p><p>	Final answer = map keyed by relative path.<br>---&gt;</p><p>&lt;cfloop list="One,Two" index="i"&gt;<br>	&lt;cfloop query="files#i#"&gt;<br>		&lt;cfif variables["files" &amp; i].type eq "File"&gt;<br>			&lt;cfif i eq "One"&gt;<br>				&lt;cfset origDir = attributes.directoryOne /&gt;<br>			&lt;cfelse&gt;<br>				&lt;cfset origDir = attributes.directoryTwo /&gt;<br>			&lt;/cfif&gt;<br>			&lt;cfset key = right(variables["files" &amp; i].directory &amp; "/", len(variables["files" &amp; i].directory) - len(origDir) + 1)  &amp; variables["files" &amp; i].name /&gt;<br>			&lt;cfset variables["fileMap" &amp; i][key] = structNew() /&gt;<br>			&lt;cfset variables["fileMap" &amp; i][key].dateLastModified = variables["files" &amp; i].dateLastModified /&gt;<br>			&lt;cfset variables["fileMap" &amp; i][key].size = variables["files" &amp; i].size /&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cfloop&gt;</p><p>&lt;!--- Build unique list of files. ---&gt;<br>&lt;cfset result.uniqueInFirstDirectory = "" /&gt;<br>&lt;cfloop collection="#fileMapOne#" item="i"&gt;<br>	&lt;cfif not structKeyExists(fileMapTwo, i)&gt;<br>		&lt;cfset result.uniqueInFirstDirectory = listAppend(result.uniqueInFirstDirectory, i) /&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>&lt;cfset result.uniqueInSecondDirectory = "" /&gt;<br>&lt;cfloop collection="#fileMapTwo#" item="i"&gt;<br>	&lt;cfif not structKeyExists(fileMapOne, i)&gt;<br>		&lt;cfset result.uniqueInSecondDirectory = listAppend(result.uniqueInSecondDirectory, i) /&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>&lt;cfset similarFileMap = structNew() &gt;<br>&lt;cfloop collection="#fileMapOne#" item="i"&gt;<br>	&lt;cfif structKeyExists(fileMapTwo, i)<br>				and (<br>					fileMapTwo[i].size neq fileMapOne[i].size<br>					or fileMapTwo[i].dateLastModified neq fileMapOne[i].dateLastModified<br>				)<br>				and not structKeyExists(similarFileMap, i)<br>	&gt;<br>		&lt;cfset similarFileMap[i] = i /&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;</p><p>&lt;cfset result.similarFiles = structKeyList(similarFileMap) /&gt;</p><p>&lt;cfset caller[<a href="http://disq.us/url?url=http%3A%2F%2Fattributes.name%3AxQv9zW9qBPnz4C5I5g_EfzeAVB4&amp;cuid=3321886" rel="nofollow noopener" title="attributes.name">attributes.name</a>] = result /&gt;</p><p>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675262">2</a> by Ben Nadel
		posted on 12/7/2007 at 9:38 PM
		</div>
		<div class="comment_text"><p>I gave ColdFusion query of queries a shot:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Findex.cfm%3Fdax%3Dblog%3A1074.view%3AH2-SV0b7Qg5IVl-ll60QzrygOb8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/index.cfm?dax=blog:1074.view">http://www.bennadel.com/ind...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675258">3</a> by Ben Nadel
		posted on 12/7/2007 at 9:42 PM
		</div>
		<div class="comment_text"><p>I like Joe's approach. His Struct-key indexing will be faster and more scalable than my Query of queries approach :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675260">4</a> by Raymond Camden
		posted on 12/7/2007 at 10:00 PM
		</div>
		<div class="comment_text"><p>Joe, one comment. When writing a custom tag that only runs in start mode, I thnk it is must better to simply end your tag with</p><p>&lt;cfexit method="exittag"&gt;</p><p>Instead of wrapping your entire tag in a CFIF. Not only is it less code, I think whole pages wrapped in one CFIF are bad form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675256">5</a> by DanaK
		posted on 12/7/2007 at 10:11 PM
		</div>
		<div class="comment_text"><p>I was about to type this up but basically I would have done the same thing as Ben except:</p><p>* instead of looping in the QoQ I would have done a NOT IN and valuelisted the column with a queryparam of list=true.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675255">6</a> by C.Gratz
		posted on 12/7/2007 at 10:15 PM
		</div>
		<div class="comment_text"><p>Not to bad at all.  This could actually come in handy from time to time, so a very useful challange Ray.</p><p>Here we go...</p><p>&lt;cffunction name="comparedirs" access="public" returntype="struct"&gt;</p><p>	&lt;cfargument name="firstdir" type="string" required="yes"&gt;<br>	&lt;cfargument name="seconddir" type="string" required="yes"&gt;</p><p>	&lt;cfset returnvar = structNew() /&gt;</p><p>	&lt;cfif not directoryExists(arguments.firstdir)&gt;<br>		&lt;cfthrow message="'Hey, this directory #arguments.firstdir# doesn't exist!'" /&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfif not directoryExists(arguments.seconddir)&gt;<br>		&lt;cfthrow message="'Hey, this directory #arguments.seconddir# doesn't exist!." /&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfdirectory name="myfisrtdir" action="list" recurse="true" directory="#arguments.firstdir#" /&gt;<br>	&lt;cfdirectory name="myseconddir" action="list" recurse="true" directory="#arguments.seconddir#" /&gt;</p><p>	&lt;cfset firstdirnameslist = "" /&gt;<br>	&lt;cfset seconddirnameslist = "" /&gt;</p><p>	&lt;!--- Setup the name list for both dirs ---&gt;<br>	&lt;cfoutput query="myfisrtdir"&gt;<br>		&lt;cfset firstdirnameslist = listappend(firstdirnameslist,name)&gt;<br>	&lt;/cfoutput&gt;<br>	&lt;cfoutput query="myseconddir"&gt;<br>		&lt;cfset seconddirnameslist = listappend(seconddirnameslist,name)&gt;<br>	&lt;/cfoutput&gt;</p><p>	&lt;!--- Find all the unique names and put them in a list to return ---&gt;<br>	&lt;cfset returnvar.uniqueTofirstdir = "" /&gt;<br>	&lt;cfoutput query="myfisrtdir"&gt;<br>		&lt;cfif listfindnocase(seconddirnameslist,name) is "No"&gt;<br>			&lt;cfset returnvar.uniqueTofirstdir = listAppend(returnvar.uniqueTofirstdir, name) /&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfoutput&gt;<br>	&lt;cfset returnvar.uniqueToseconddir = "" /&gt;<br>	&lt;cfoutput query="myseconddir"&gt;<br>		&lt;cfif listfindnocase(firstdirnameslist,name) is "No"&gt;<br>			&lt;cfset returnvar.uniqueToseconddir = listAppend(returnvar.uniqueToseconddir, name) /&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfoutput&gt;</p><p>	&lt;!--- Find all the files that almost match, but not quite and put them in a list to return ---&gt;<br>	&lt;cfset returnvar.almostmatching = "" /&gt;<br>	&lt;cfoutput query="myfisrtdir"&gt;<br>		&lt;cfif listfindnocase(seconddirnameslist,name)&gt;<br>			&lt;cfquery name="getseconddirinfo" dbtype="query"&gt;<br>				SELECT dateLastModified, size FROM myseconddir<br>				WHERE Name = '#Name#'<br>			&lt;/cfquery&gt;<br>			&lt;!--- Compare the last modified and sizes of the file that existed in both dirs ---&gt;<br>			&lt;cfif (dateLastModified NEQ getseconddirinfo.dateLastModified) OR (size NEQ getseconddirinfo.size)&gt;<br>				&lt;cfset returnvar.almostmatching = listAppend(returnvar.almostmatching, name) /&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfoutput&gt;<br>	&lt;cfreturn returnvar /&gt;</p><p>&lt;/cffunction&gt;</p><p>&lt;cfset result = comparedirs(#ExpandPath( './A/' )#, #ExpandPath( './B/' )#)&gt;<br>&lt;cfdump var="#result#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675261">7</a> by Ben Nadel
		posted on 12/7/2007 at 10:19 PM
		</div>
		<div class="comment_text"><p>@Dana,</p><p>My only concern with the CFQueryParam approach is that I *have* run into problems where I max out the number parameter bindings that a query can have :) That has only happened on direct SQL queries, so it might not pertain to query of queries, but I think anything over 3,000 bindings crashes the request (I have some NOT so well though out approaches!!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675264">8</a> by DanaK
		posted on 12/7/2007 at 10:50 PM
		</div>
		<div class="comment_text"><p>@Ben - fair point. I've encountered the same thing in the past. I would just never allow a top level folder to reach that amount of files without some kind of re-organization. Personal habit though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675268">9</a> by Ben Nadel
		posted on 12/7/2007 at 10:56 PM
		</div>
		<div class="comment_text"><p>@DanaK,</p><p>Agreed. If for no other reason (of which there are plenty), it would take my Explorer too long to load the list.</p><p>Where I have run into the upper limit on param binding is when using massive ID lists. Sometimes I try to lump too much stuff into a single query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675267">10</a> by Rick O
		posted on 12/7/2007 at 11:05 PM
		</div>
		<div class="comment_text"><p>QoQ solution:</p><p>&lt;cffunction name="DirDiff" returntype="query"&gt;<br>	&lt;cfargument name="L" type="string" required="true"&gt;<br>	&lt;cfargument name="R" type="string" required="true"&gt;<br>	&lt;cfset var Result=QueryNew("Name,Side")&gt;<br>	&lt;cfset var LQ=""&gt;<br>	&lt;cfset var RQ=""&gt;<br>	&lt;cfif DirectoryExists(Arguments.L) AND DirectoryExists(Arguments.R)&gt;<br>		&lt;cfdirectory name="LQ" directory="#Arguments.L#" action="LIST"&gt;<br>		&lt;cfdirectory name="RQ" directory="#Arguments.R#" action="LIST"&gt;<br>		&lt;cfquery dbtype="query" name="Result"&gt;<br>		SELECT LQ.Name AS Name, 'LEFT' AS Side FROM LQ<br>		UNION ALL<br>		SELECT RQ.Name AS Name, 'RIGHT' AS Side FROM RQ<br>		UNION ALL<br>		SELECT LQ.Name AS Name, 'BOTH' AS Side FROM LQ, RQ WHERE (LQ.Name = RQ.Name)<br>		&lt;/cfquery&gt;<br>		&lt;cfquery dbtype="query" name="Result"&gt;<br>		SELECT Name AS Name, MIN(Side) AS Side FROM Result GROUP BY Name ORDER BY Name<br>		&lt;/cfquery&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfreturn Result&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675253">11</a> by Rick O
		posted on 12/7/2007 at 11:39 PM
		</div>
		<div class="comment_text"><p>To handle the case where the files are in both places but are different, modify the first QoQ to:</p><p>SELECT LQ.Name AS Name, 'LEFT' AS Side FROM LQ<br>UNION ALL<br>SELECT RQ.Name AS Name, 'RIGHT' AS Side FROM RQ<br>UNION ALL<br>SELECT LQ.Name AS Name, 'BOTH' AS Side FROM LQ, RQ WHERE (LQ.Name = RQ.Name) AND (LQ.Size = RQ.Size) AND (LQ.DateLastModified = RQ.DateLastModified)<br>UNION ALL<br>SELECT LQ.Name AS Name, 'DIFFERENT' AS Side FROM LQ, RQ WHERE (LQ.Name = RQ.Name)</p><p>It's totally cheating, I know.  But I wonder how it scales in comparison with the Struct-indexed method ... ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675265">12</a> by Elliott Sprehn
		posted on 12/8/2007 at 5:07 AM
		</div>
		<div class="comment_text"><p>RickO's method looks the cleanest so far. Very slick way of doing it.</p><p>RickO and Ben's are the only ones that don't fail badly when there's a comma in the file name too.</p><p>With some performance testing, Joe's method vs RickO's I get the following averages:</p><p>Joe: 177.565ms, 317.96ms, 155.65ms<br>Joe (UDF): 155.5ms, 407.205ms, 100.025 <br>RickO: 104.63ms, 287.545ms, 71.435ms</p><p>So I'd say it scales very well RickO! Also of importance is that custom tags aren't that much slower than functions.</p><p>(Test was done on a Powerbook G4 1.33Ghz, 1.25GB of RAM, 4200RPM HD, CF8 Java 1.5, Dir1 Size: 140, Dir2 Size: 12, Executions: 200, Runs: 3)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675266">13</a> by Kris Brixon
		posted on 12/8/2007 at 7:08 AM
		</div>
		<div class="comment_text"><p>Here is a link to my original solution. <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mediafire.com%2F%3F6yttt3x1kdt%3As8Gj3tJiL5TnDy8n2d3Ul6hNLRs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mediafire.com/?6yttt3x1kdt">http://www.mediafire.com/?6...</a><br>I look forward to comparing it to the posts above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675269">14</a> by Ben Nadel
		posted on 12/9/2007 at 1:43 AM
		</div>
		<div class="comment_text"><p>Rick rocks the ColdFusion hard core style :) I always learn something really cool from him.</p></div>
	</div>
</div>
		