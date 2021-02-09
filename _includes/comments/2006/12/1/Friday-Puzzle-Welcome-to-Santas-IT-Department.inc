
<div class="comment" id="c_1713659813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659813">1</a> by todd sharp
		posted on 12/1/2006 at 8:17 PM
		</div>
		<div class="comment_text"><p>just names on the lists?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659816">2</a> by Raymond Camden
		posted on 12/1/2006 at 8:18 PM
		</div>
		<div class="comment_text"><p>Nod. Just names. Santa is smart enough to know one John Smith from another. (Or maybe he isn't. Maybe next Friday... ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659835">3</a> by Tim
		posted on 12/1/2006 at 8:35 PM
		</div>
		<div class="comment_text"><p>Originally my lists contained a name on each line, but was having trouble converting that to a list, what would be the delimiter? \r?  Once I made my good and bad lists comma delimited it worked.</p><p>&lt;cffile action="read" file="D:\path\good.txt" variable="goodkids" /&gt;<br>&lt;cffile action="read" file="D:\path\bad.txt" variable="badkids" /&gt;<br>&lt;cfloop list="#goodkids#" index="i"&gt;<br>	&lt;cfif listFindNoCase(badkids, i) neq 0&gt;<br>		&lt;cffile action="write" file="D:\path\tobedeterminded.txt" output="#i#" addnewline="yes"&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>&lt;cffile action="read" file="D:\path\tobedeterminded.txt" variable="tbd" /&gt;<br>&lt;cfoutput&gt;&lt;pre&gt;#tbd#&lt;/pre&gt;&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659836">4</a> by Raymond Camden
		posted on 12/1/2006 at 8:40 PM
		</div>
		<div class="comment_text"><p>Good start Tim - but don't forget you also need to remove (from both lists) the names of kids on both. The second task of removing dupes in general isn't quite as important.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659838">5</a> by todd sharp
		posted on 12/1/2006 at 8:44 PM
		</div>
		<div class="comment_text"><p>Since I got distracted I'll concede victory to Tim.</p><p>Tim, to convert to a list, just steal - er borrow - some of ray's blog cfc code -</p><p>&lt;cfset theList = replace(str, chr(10), ",", "all")&gt;<br>&lt;cfset theList = replace(str, chr(13), ",", "all")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659839">6</a> by todd sharp
		posted on 12/1/2006 at 8:45 PM
		</div>
		<div class="comment_text"><p>Also Tim, I'd maybe save the output in a variable and write to file once rather than for each iteration of the loop.  &amp;lt;/myTwoCents&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659840">7</a> by Ben Nadel
		posted on 12/1/2006 at 9:20 PM
		</div>
		<div class="comment_text"><p>Here is my method. It tags the good and naughty FILE PATHS and creates the tobedecided.txt in the same directory.</p><p>&lt;cffunction name="FixSantasList" access="public" returntype="void" output="false"&gt;</p><p>	&lt;!--- Define arguments. ---&gt;<br>	&lt;cfargument name="GoodFile" type="string" required="true" /&gt;<br>	&lt;cfargument name="NaughtyFile" type="string" required="true" /&gt;</p><p>	&lt;!--- Define the local scope. ---&gt;<br>	&lt;cfset var LOCAL = StructNew() /&gt;</p><p>	&lt;!--- Read in good text. ---&gt;<br>	&lt;cffile<br>		action="READ"<br>		file="#ARGUMENTS.GoodFile#"<br>		variable="LOCAL.GoodData"<br>		/&gt;</p><p>	&lt;!--- Read in the naughty text. ---&gt;<br>	&lt;cffile<br>		action="READ"<br>		file="#ARGUMENTS.NaughtyFile#"<br>		variable="LOCAL.NaughtyData"<br>		/&gt;</p><p>	&lt;!--- <br>		Create a file path for the undecided data. We will be putting <br>		this in the same directory as the other files.<br>	---&gt;<br>	&lt;cfset LOCAL.UndecidedFile = (<br>		GetDirectoryFromPath( ARGUMENTS.GoodFile ) &amp;<br>		"tobedecided.txt"<br>		) /&gt;</p><p>	&lt;!--- Create indexes for the good, naugty, and undecided. ---&gt;<br>	&lt;cfset LOCAL.GoodIndex = StructNew() /&gt;<br>	&lt;cfset LOCAL.NaughtyIndex = StructNew() /&gt;<br>	&lt;cfset LOCAL.UndecidedIndex = StructNew() /&gt;</p><p>	&lt;!--- Loop over the good names and add to index. ---&gt;<br>	&lt;cfloop index="LOCAL.Name" list="#LOCAL.GoodData#" delimiters="#Chr( 13 )##Chr( 10 )#"&gt;</p><p>		&lt;cfset LOCAL.GoodIndex[ LOCAL.Name ] = LOCAL.Name /&gt;</p><p>	&lt;/cfloop&gt;</p><p>	&lt;!--- Loop over the naughty names and add to index. ---&gt;<br>	&lt;cfloop index="LOCAL.Name" list="#LOCAL.NaughtyData#" delimiters="#Chr( 13 )##Chr( 10 )#"&gt;</p><p>		&lt;cfset LOCAL.NaughtyIndex[ LOCAL.Name ] = LOCAL.Name /&gt;</p><p>	&lt;/cfloop&gt;</p><p>	&lt;!--- <br>		ASSERT: At this point, the good and naughty indexes should<br>		ONLY have unique name entries. However, there may be names <br>		that exist in both. <br>	---&gt;</p><p>	&lt;!--- <br>		Loop over the keys in the good index to see if they exist in <br>		the naughty index. If they do, they have to be removed from<br>		both and put into the undecided index. <br>	---&gt;<br>	&lt;cfloop item="LOCAL.Name" collection="#LOCAL.GoodIndex#"&gt;</p><p>		&lt;!--- Check to see if it exists in naughty as well. ---&gt;<br>		&lt;cfif StructKeyExists( LOCAL.NaughtyIndex, LOCAL.Name )&gt;</p><p>			&lt;!--- Add the name to the undecided index. ---&gt;<br>			&lt;cfset LOCAL.UndecidedIndex[ LOCAL.Name ] = LOCAL.Name /&gt;</p><p>			&lt;!--- Remove from the good and naughty index. ---&gt;<br>			&lt;cfset StructDelete( LOCAL.GoodIndex, LOCAL.Name ) /&gt;<br>			&lt;cfset StructDelete( LOCAL.NaughtyIndex, LOCAL.Name ) /&gt;</p><p>		&lt;/cfif&gt;</p><p>	&lt;/cfloop&gt;</p><p>	&lt;!--- <br>		ASSERT: At this point, all names should be in the appropriate <br>		indexes and should only appear one. Now, they need to be <br>		commited to file. <br>	---&gt;</p><p>	&lt;!--- Write the good names to the file. ---&gt;<br>	&lt;cffile<br>		action="WRITE"<br>		file="#ARGUMENTS.GoodFile#"<br>		output="#ArrayToList( StructKeyArray( LOCAL.GoodIndex ), '#Chr( 13 )##Chr( 10 )#' ).Trim()#"<br>		/&gt;</p><p>	&lt;!--- Write the naughty names to the file. ---&gt;<br>	&lt;cffile<br>		action="WRITE"<br>		file="#ARGUMENTS.NaughtyFile#"<br>		output="#ArrayToList( StructKeyArray( LOCAL.NaughtyIndex ), '#Chr( 13 )##Chr( 10 )#' ).Trim()#"<br>		/&gt;</p><p>	&lt;!--- Write the undecided names to the file. ---&gt;<br>	&lt;cffile<br>		action="WRITE"<br>		file="#LOCAL.UndecidedFile#"<br>		output="#ArrayToList( StructKeyArray( LOCAL.UndecidedIndex ), '#Chr( 13 )##Chr( 10 )#' ).Trim()#"<br>		/&gt;</p><p>	&lt;!---<br>		***NOTE: I made this because I do NOT trust the case sensitivity of the<br>		key list returned by the structure. However, for short hand, I will use<br>		the above which does rely on sturct key last maintaining case sensitivity.<br>	---&gt;<br>	&lt;!---<br>	&lt;!--- Create a string buffer for the good names. ---&gt;<br>	&lt;cfset LOCAL.NameBuffer = CreateObject( "java", "java.lang.StringBuffer" ).Init() /&gt;</p><p>	&lt;!--- Loop over good names and add to string buffer. ---&gt;<br>	&lt;cfloop item="LOCAL.Name" collection="#LOCAL.GoodIndex#"&gt;</p><p>		&lt;cfset LOCAL.NameBuffer.Append(<br>			LOCAL.GoodIndex[ LOCAL.Name ] &amp;<br>			Chr( 13) &amp; Chr( 10 )<br>			) /&gt;</p><p>	&lt;/cfloop&gt;</p><p>	&lt;!--- Write the buffer to the file. ---&gt;<br>	&lt;cffile<br>		action="WRITE"<br>		file="#ARGUMENTS.GoodFile#"<br>		output="#LOCAL.NameBuffer.ToString().Trim()#"<br>		/&gt;</p><p>	&lt;!--- Create a string buffer for the good names. ---&gt;<br>	&lt;cfset LOCAL.NameBuffer = CreateObject( "java", "java.lang.StringBuffer" ).Init() /&gt;</p><p>	&lt;!--- Loop over naughty names and add to string buffer. ---&gt;<br>	&lt;cfloop item="LOCAL.Name" collection="#LOCAL.NaughtyIndex#"&gt;</p><p>		&lt;cfset LOCAL.NameBuffer.Append(<br>			LOCAL.NaughtyIndex[ LOCAL.Name ] &amp;<br>			Chr( 13) &amp; Chr( 10 )<br>			) /&gt;</p><p>	&lt;/cfloop&gt;</p><p>	&lt;!--- Write the buffer to the file. ---&gt;<br>	&lt;cffile<br>		action="WRITE"<br>		file="#ARGUMENTS.NaughtyFile#"<br>		output="#LOCAL.NameBuffer.ToString().Trim()#"<br>		/&gt;</p><p>	&lt;!--- Create a string buffer for the good names. ---&gt;<br>	&lt;cfset LOCAL.NameBuffer = CreateObject( "java", "java.lang.StringBuffer" ).Init() /&gt;</p><p>	&lt;!--- Loop over undecided names and add to string buffer. ---&gt;<br>	&lt;cfloop item="LOCAL.Name" collection="#LOCAL.UndecidedIndex#"&gt;</p><p>		&lt;cfset LOCAL.NameBuffer.Append(<br>			LOCAL.UndecidedIndex[ LOCAL.Name ] &amp;<br>			Chr( 13) &amp; Chr( 10 )<br>			) /&gt;</p><p>	&lt;/cfloop&gt;</p><p>	&lt;!--- Write the buffer to the file. ---&gt;<br>	&lt;cffile<br>		action="WRITE"<br>		file="#LOCAL.UndecidedFile#"<br>		output="#LOCAL.NameBuffer.ToString().Trim()#"<br>		/&gt;</p><p>	---&gt;</p><p>	&lt;!--- Return out. ---&gt;<br>	&lt;cfreturn /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659849">8</a> by Raymond Camden
		posted on 12/1/2006 at 9:29 PM
		</div>
		<div class="comment_text"><p>Nice Ben. Also - people - note how his use of structs to suck in the names will also take care of dupes in the same list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659846">9</a> by Ben Nadel
		posted on 12/1/2006 at 9:36 PM
		</div>
		<div class="comment_text"><p>Thanks. I learned the Struct() as a look-up from Rick Osborne (one smart dude). Also, afterwards, I realize, I didn't need to convert to StructKeyArray() then to list. I could have gone right to StructKeyList() and passed in the same delimiters. I forgot that that function takes delimiters :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659848">10</a> by todd sharp
		posted on 12/1/2006 at 9:41 PM
		</div>
		<div class="comment_text"><p>OK, I changed my mind - here's my entry.</p><p>Since Santa loves reusability we decided to build an entire component for him.  I hope someone catches my obscure RUN-DMC reference.</p><p>&lt;cfcomponent displayname="santa"&gt;<br>	&lt;cffunction name="toLines" returntype="string" hint="i make a list into lines" output="false"&gt;<br>		&lt;cfargument name="str" hint="the list to turn into lines" required="true"&gt;<br>		&lt;cfreturn replace(arguments.str, ",", chr(10), "all") /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="toList" returntype="string" hint="i get the txt file and turn it into a list" output="false"&gt;<br>		&lt;cfargument name="str" hint="the string to make a list out of" type="string" required="true"&gt;<br>		&lt;cfset var returnStr = ""&gt;<br>		&lt;cfset returnStr = replace(arguments.str, chr(10), ",", "all")&gt;<br>		&lt;cfset returnStr = replace(arguments.str, chr(13), ",", "all")&gt;<br>		&lt;cfreturn returnStr /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="readFile" returntype="string" hint="i read the files" output="false"&gt;<br>		&lt;cfargument name="fileToRead" hint="the full path to the file to read" required="true"&gt;<br>		&lt;cfset var returnStr = ""&gt;<br>		&lt;cffile action="read" file="#arguments.fileToRead#" variable="returnStr"&gt;<br>		&lt;cfreturn returnStr /&gt;	<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="listNoDups" hint="i return a list with no duplicate items" output="false" returntype="string"&gt;<br>		&lt;cfargument name="theList" hint="the list to clean up" required="true"&gt;<br>		&lt;cfset var returnStr = ""&gt;<br>		&lt;cfset var i = ""&gt;</p><p>		&lt;cfloop from="1" to="#listLen(arguments.theList)#" index="i"&gt;<br>			&lt;cfif NOT listContainsNoCase(returnStr, listGetAt(arguments.theList, i))&gt;<br>				&lt;cfset returnStr = listAppend(returnStr, listGetAt(arguments.theList, i))&gt;<br>			&lt;/cfif&gt; <br>		&lt;/cfloop&gt;<br>		&lt;cfreturn returnStr /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="listCompare" hint="i compare two lists" output="false" returntype="string"&gt;<br>		&lt;cfargument name="listOne" type="string" hint="the first list" required="true"&gt;<br>		&lt;cfargument name="listTwo" type="string" hint="the second list" required="true"&gt;<br>		&lt;cfset var tbdList = ""&gt;<br>		&lt;cfset var i = ""&gt;<br>		&lt;cfset var cleanListOne = listNoDups(arguments.listOne)&gt;<br>		&lt;cfset var cleanListTwo = listNoDups(arguments.listTwo)&gt;<br>		&lt;cfdump var="#listOne#"&gt;&lt;cfdump var="#listTwo#"&gt;<br>		&lt;cfloop from="1" to="#listLen(arguments.listOne)#" index="i"&gt;<br>			&lt;cfif listContainsNoCase(cleanListTwo, listGetAt(cleanListOne, i))&gt;<br>				&lt;cfset tbdList = listAppend(tbdList, listGetAt(cleanListOne, i))&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfloop&gt;<br>		&lt;cfreturn tbdList /&gt;<br>	&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p><p>christmasInHollis.cfm<br>---------------------<br>&lt;cfset variables.goodTxt = expandPath("good.txt")&gt;<br>&lt;cfset variables.naughtyTxt = expandPath("naughty.txt")&gt;<br>&lt;cfset variables.goodList = readFile(variables.goodTxt)&gt;<br>&lt;cfset variables.naughtyList = readFile(variables.naughtyTxt)&gt;<br>&lt;cfset variables.tbd = listCompare(toList(variables.goodList), toList(variables.naughtyList))&gt;<br>&lt;cffile action="write" file="#expandPath("tbd.txt")#" output="#toLines(variables.tbd)#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659847">11</a> by Tuyen
		posted on 12/1/2006 at 10:55 PM
		</div>
		<div class="comment_text"><p>Happy Friday everyone! :-) I don't think that Santa's machine has enough memory to read 2 HUGES text files (trillian records) then combine them. Beside, Coldfusion will take a lot of time to read them LINE-BY-LINE.... I'll show Santa to use free MySQL to do it... :-)</p><p>Please read this post from Ben Forta:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.forta.com%2Fblog%2Findex.cfm%2F2006%2F12%2F1%2FColdFusion-Is-Not-A-DBMS%3AXO3141vBrTafmYiukG2XfzXg3AQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.forta.com/blog/index.cfm/2006/12/1/ColdFusion-Is-Not-A-DBMS">http://www.forta.com/blog/i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659843">12</a> by Ben Nadel
		posted on 12/1/2006 at 11:01 PM
		</div>
		<div class="comment_text"><p>But you have to remember that Santa's computer is only limited by the amount of Christmas Cheer in the world, not by RAM and Processing speed ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659850">13</a> by Joe Rinehart
		posted on 12/2/2006 at 3:25 AM
		</div>
		<div class="comment_text"><p>Wow, this beats the heck out of real work.</p><p>&lt;!-- Read ---&gt;<br>&lt;cffile action="read" file="#expandPath("./good.txt")#" variable="goodFileContent" /&gt;<br>&lt;cffile action="read" file="#expandPath("./bad.txt")#"  variable="badFileContent" /&gt;</p><p>&lt;!--- Maps elim dups ---&gt;<br>&lt;cfset tbd = structNew() /&gt;<br>&lt;cfset good = structNew() /&gt;<br>&lt;cfset bad = structNew() /&gt;</p><p>&lt;!--- Bad -&gt; map ---&gt;<br>&lt;cfloop list="#badFileContent#" index="i" delimiters="#chr(10)#"&gt;<br>	&lt;cfset bad[i] = "" /&gt;<br>&lt;/cfloop&gt;</p><p>&lt;!--- Good -&gt; filtered into approp. maps ---&gt;<br>&lt;cfloop list="#goodFileContent#" index="i" delimiters="#chr(10)#"&gt;<br>	&lt;cfset dupPosition = listFindNoCase(badFileContent, i, chr(10)) /&gt;<br>	&lt;cfif dupPosition&gt;<br>		&lt;cfset tbd[i] = "" /&gt;<br>		&lt;cfset structDelete(bad, i) /&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset good[i] = "" /&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;</p><p>&lt;!--- Write ---&gt;<br>&lt;cffile action="write" file="#expandPath("./newGood.txt")#" output="#listChangeDelims(structKeyList(good), chr(10))#" /&gt;<br>&lt;cffile action="write" file="#expandPath("./newBad.txt")#" output="#listChangeDelims(structKeyList(bad), chr(10))#" /&gt;<br>&lt;cffile action="write" file="#expandPath("./newTbd.txt")#" output="#listChangeDelims(structKeyList(tbd), chr(10))#" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659845">14</a> by Tony Brandner
		posted on 12/2/2006 at 4:24 AM
		</div>
		<div class="comment_text"><p>I agree with Tuyen and the Forta reference. Two large lists (hundreds of millions of rows apiece?), perfect fodder for a DBMS.</p><p>In my case, do two BULK INSERT statements, which would insert the data from the two lists into a SQL Server table in no time. Then, write one SQL query to generate the results you want.</p><p>Awesome ideas on the use of structures in this case to help handle duplicates!</p><p>Tony</p><p>PS - This page <a href="http://disq.us/url?url=http%3A%2F%2Fwww.un.org%2Fesa%2Fsocdev%2Fageing%2Fagewpop1.htm%3AP_Y3xKxQbZrhX6qhlStj08ojIsg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.un.org/esa/socdev/ageing/agewpop1.htm">http://www.un.org/esa/socde...</a> seems to indicate that as of the year 2000, 30% of the population was 15 years old or younger. It doesn't say how many were "good" and "bad". :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659844">15</a> by Christopher Bradford
		posted on 12/2/2006 at 5:01 AM
		</div>
		<div class="comment_text"><p>If Santa doesn't have a database handy, CF provides a workaround. CFHTTP to read in the files as queries, QoQ to extract distincts as well as any that appear in both lists, then write the files back out. Like this:</p><p>&lt;cfset thisFileName = listLast(CGI.SCRIPT_NAME, "/") /&gt;<br>&lt;cfset baseFolder = replace(CGI.SCRIPT_NAME, thisFileName, "") /&gt;<br>&lt;cfset baseURL = "http://" &amp; CGI.SERVER_NAME &amp; ":" &amp; CGI.SERVER_PORT &amp; baseFolder /&gt;<br>&lt;cfset baseFilePath = replace(CGI.CF_TEMPLATE_PATH, thisFileName, "") /&gt;</p><p>&lt;cfset goodURL = baseURL &amp; "good.txt" /&gt;<br>&lt;cfset naughtyURL = baseURL &amp; "naughty.txt" /&gt;</p><p>&lt;cfset goodFile = baseFilePath &amp; "good.txt" /&gt;<br>&lt;cfset naughtyFile = baseFilePath &amp; "naughty.txt" /&gt;<br>&lt;cfset undecidedFile = baseFilePath &amp; "tobedecided.txt" /&gt;</p><p>&lt;cfhttp method="get" columns="name" firstrowasheaders="false" url="#goodURL#" name="goodKids" /&gt;<br>&lt;cfhttp method="get" columns="name" firstrowasheaders="false" url="#naughtyURL#" name="naughtyKids" /&gt;</p><p>&lt;cfquery dbtype="query" name="uniqueGoodKids"&gt;<br>	SELECT DISTINCT name<br>	FROM goodKids<br>	WHERE name NOT IN (#quotedValueList(<a href="http://disq.us/url?url=http%3A%2F%2FnaughtyKids.name%3AC-TRmpBEZoR-DwH_AlTPbr8DX5g&amp;cuid=3321886" rel="nofollow noopener" title="naughtyKids.name">naughtyKids.name</a>)#)<br>&lt;/cfquery&gt;</p><p>&lt;cfquery dbtype="query" name="uniqueNaughtyKids"&gt;<br>	SELECT DISTINCT name<br>	FROM naughtyKids<br>	WHERE name NOT IN (#quotedValueList(<a href="http://disq.us/url?url=http%3A%2F%2FgoodKids.name%3ALMiyPeaWTgxxhej4aUmFn9R4RkA&amp;cuid=3321886" rel="nofollow noopener" title="goodKids.name">goodKids.name</a>)#)<br>&lt;/cfquery&gt;</p><p>&lt;cfquery dbtype="query" name="undecidedKids"&gt;<br>	SELECT DISTINCT name<br>	FROM goodKids<br>	WHERE name IN (#quotedValueList(<a href="http://disq.us/url?url=http%3A%2F%2FnaughtyKids.name%3AC-TRmpBEZoR-DwH_AlTPbr8DX5g&amp;cuid=3321886" rel="nofollow noopener" title="naughtyKids.name">naughtyKids.name</a>)#)<br>&lt;/cfquery&gt;</p><p>&lt;cfset newLine = "<br>" /&gt;</p><p>&lt;cffile action="write" file="#goodFile#" addnewline="false" output="#valueList(<a href="http://disq.us/url?url=http%3A%2F%2FuniqueGoodKids.name%3AT38oPHffX3xamH0arGn8ji7pa28&amp;cuid=3321886" rel="nofollow noopener" title="uniqueGoodKids.name">uniqueGoodKids.name</a>, newLine)#" fixnewline="true" /&gt;<br>&lt;cffile action="write" file="#naughtyFile#" addnewline="false" output="#valueList(<a href="http://disq.us/url?url=http%3A%2F%2FuniqueNaughtyKids.name%3AnexETOEbVc4ZDPqhvuM6OxOz1wE&amp;cuid=3321886" rel="nofollow noopener" title="uniqueNaughtyKids.name">uniqueNaughtyKids.name</a>, newLine)#" fixnewline="true" /&gt;<br>&lt;cffile action="write" file="#undecidedFile#" addnewline="false" output="#valueList(<a href="http://disq.us/url?url=http%3A%2F%2FundecidedKids.name%3Au3L9IzO7E_IDeegJea3cnUWGfIk&amp;cuid=3321886" rel="nofollow noopener" title="undecidedKids.name">undecidedKids.name</a>, newLine)#" fixnewline="true" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659851">16</a> by MikerRoo
		posted on 12/2/2006 at 11:23 AM
		</div>
		<div class="comment_text"><p>My approach:<br>--------------</p><p>&lt;!--- Configuration settings ---&gt;<br>&lt;CFSCRIPT&gt;<br>    sGoodFileName   = "good";<br>    sBadFileName    = "naughty";<br>    sFileExtension  = "txt";<br>    sTBD_FileName   = "tobedecided." &amp; sFileExtension;</p><p>    sDSN            = "MySQL_Test";<br>    sDataBaseName   = "SantySnoop";</p><p>    /*--- Actually use different filenames for testing ease. ---<br>    */<br>    sGoodFileIn     = sGoodFileName &amp; "_src." &amp; sFileExtension;<br>    sBadFileIn      = sBadFileName  &amp; "_src." &amp; sFileExtension;<br>    sGoodFileOut    = sGoodFileName &amp; "_out." &amp; sFileExtension;<br>    sBadFileOut     = sBadFileName  &amp; "_out." &amp; sFileExtension;</p><p>    sBasePath       = GetDirectoryFromPath (GetCurrentTemplatePath ());<br>&lt;/CFSCRIPT&gt;</p><p>&lt;CFOUTPUT&gt;<br>&lt;title&gt;Fixes Santa's naughty/nice lists&lt;/title&gt;<br>&lt;h1&gt;Fixes Santa's naughty/nice lists&lt;/h1&gt;<br>&lt;p&gt;<br>    This application cleans up Santa's "Do not cry" and "Terrible Tot watch" lists to comply with NSA requirements<br>    and USC BR-549 (13)(b)(ii) and TSA "whim of the week" TSA-88961473-5657-223.<br>&lt;/p&gt;</p><p>&lt;h3&gt;Operation:&lt;/h3&gt;<br>&lt;ol&gt;<br>    &lt;li&gt; Read two source files, &lt;i&gt;#sGoodFileIn#&lt;/i&gt; and &lt;i&gt;#sBadFileIn#&lt;/i&gt;.<br>    &lt;li&gt; Remove duplicate names (case insensitive) from each list.<br>    &lt;li&gt; If any name appears on both lists, remove it to a third list, "TBD".<br>    &lt;li&gt; Write out the cleaned up "good" list to &lt;i&gt;#sGoodFileOut#&lt;/i&gt;.<br>    &lt;li&gt; Write out the cleaned up "bad" list to &lt;i&gt;#sBadFileOut#&lt;/i&gt;.<br>    &lt;li&gt; Write out any "TBD" names to &lt;i&gt;#sTBD_FileName#&lt;/i&gt;.<br>    &lt;li&gt; Done!<br>&lt;/ol&gt;</p><p>&lt;h3&gt;Important!&lt;/h3&gt;<br>&lt;ul&gt;<br>    &lt;li&gt; Almost all of the work here is done in SQL (as it should be).<br>    &lt;li&gt; In this case, we use MySQL only but ANY RDBMS will do this better than a pure Coldfusion approach.<br>    &lt;li&gt; This code requires a valid MySQL datasource.<br>    &lt;li&gt; It Creates 5 tables in a database named "#sDataBaseName#".<br>    &lt;li&gt; The text files are plain text with one name per line (EG "Jim Johnson").<br>&lt;/ul&gt;<br>&lt;/CFOUTPUT&gt;</p><p>&lt;!--- Create the database and tables if they do not already exist.<br>---&gt;<br>&lt;CFSCRIPT&gt;<br>    oDB_Func    = CreateObject ("component", "cfcSantaListDB").oInit (sDSN, sDataBaseName);<br>    oDB_Func.SetupDataBase ();<br>    oDB_Func.CreateStandardNameTable ('tGoodListRaw',    'no');<br>    oDB_Func.CreateStandardNameTable ('tBadListRaw',     'no');<br>    oDB_Func.CreateStandardNameTable ('tGoodListFinal',  'yes');<br>    oDB_Func.CreateStandardNameTable ('tBadListFinal',   'yes');<br>    oDB_Func.CreateStandardNameTable ('tTBD_ListFinal',  'yes');<br>&lt;/CFSCRIPT&gt;</p><p>&lt;!--- Get the initial stats. ---&gt;<br>&lt;CFSET  iGoodRowsInitial= oDB_Func.iGetRowCount ('tGoodListFinal')&gt;<br>&lt;CFSET  iBadRowsInitial = oDB_Func.iGetRowCount ('tBadListFinal')&gt;<br>&lt;CFSET  iTBDRowsInitial = oDB_Func.iGetRowCount ('tTBD_ListFinal')&gt;</p><p>&lt;!--- Import the raw lists. ---&gt;<br>&lt;CFSET  iGoodRowsRaw    = oDB_Func.iImportTextData ('tGoodListRaw',    '#sBasePath##sGoodFileIn#')&gt;<br>&lt;CFSET  iBadRowsRaw     = oDB_Func.iImportTextData ('tBadListRaw',     '#sBasePath##sBadFileIn#')&gt;</p><p>&lt;!--- Clean up duplicates in each list. ---&gt;<br>&lt;CFSET  iGoodRowsNew    = oDB_Func.iAddNewNamesToList ('tGoodListRaw',  'tGoodListFinal')&gt;<br>&lt;CFSET  iBadRowsNew     = oDB_Func.iAddNewNamesToList ('tBadListRaw',   'tBadListFinal')&gt;</p><p>&lt;!--- Find the "TBD" names ---&gt;<br>&lt;CFSET  iNumTBD_Names   = oDB_Func.iStripOutNiceNaughtyDoers ('tGoodListFinal', 'tBadListFinal', 'tTBD_ListFinal')&gt;</p><p>&lt;!--- Write the final files ---&gt;<br>&lt;CFSET  iGoodRowsFinal  = oDB_Func.iExportTextData ('tGoodListFinal',   '#sBasePath##sGoodFileOut#')&gt;<br>&lt;CFSET  iBadRowsFinal   = oDB_Func.iExportTextData ('tBadListFinal',    '#sBasePath##sBadFileOut#')&gt;<br>&lt;CFSET  iTBDRowsFinal   = oDB_Func.iExportTextData ('tTBD_ListFinal',   '#sBasePath##sTBD_FileName#')&gt;</p><p>&lt;!--- Report ---&gt;<br>&lt;CFOUTPUT&gt;<br>&lt;h3&gt;Results:&lt;/h3&gt;<br>&lt;table class="SantasJudgement"&gt;<br>    &lt;tr&gt;<br>        &lt;th&gt;&amp;nbsp;&lt;/th&gt;<br>        &lt;th scope="col"&gt;Nice&lt;/th&gt;<br>        &lt;th scope="col"&gt;Naughty&lt;/th&gt;<br>        &lt;th scope="col"&gt;Need more snooping&lt;/th&gt;<br>    &lt;/tr&gt;<br>    &lt;tr&gt;<br>        &lt;th scope="row"&gt;Initial unique names:&lt;/th&gt;<br>        &lt;td&gt;#iGoodRowsInitial#&lt;/td&gt;<br>        &lt;td&gt;#iBadRowsInitial#&lt;/td&gt;<br>        &lt;td&gt;#iTBDRowsInitial#&lt;/td&gt;<br>    &lt;/tr&gt;<br>    &lt;tr&gt;<br>        &lt;th scope="row"&gt;Raw lines read:&lt;/th&gt;<br>        &lt;td&gt;#iGoodRowsRaw#&lt;/td&gt;<br>        &lt;td&gt;#iBadRowsRaw#&lt;/td&gt;<br>        &lt;td&gt;na&lt;/td&gt;<br>    &lt;/tr&gt;<br>    &lt;tr&gt;<br>        &lt;th scope="row"&gt;Duplicate, blank, or preexisting names:&lt;/th&gt;<br>        &lt;td&gt;#iGoodRowsRaw - iGoodRowsNew#&lt;/td&gt;<br>        &lt;td&gt;#iBadRowsRaw - iBadRowsNew#&lt;/td&gt;<br>        &lt;td&gt;na&lt;/td&gt;<br>    &lt;/tr&gt;<br>    &lt;tr&gt;<br>        &lt;th scope="row"&gt;New names added:&lt;/th&gt;<br>        &lt;td&gt;#iGoodRowsNew#&lt;/td&gt;<br>        &lt;td&gt;#iBadRowsNew#&lt;/td&gt;<br>        &lt;td&gt;na&lt;/td&gt;<br>    &lt;/tr&gt;<br>    &lt;tr&gt;<br>        &lt;th scope="row"&gt;Names appearing on both lists:&lt;/th&gt;<br>        &lt;td&gt;#iGoodRowsInitial   + iGoodRowsNew  - iGoodRowsFinal#&lt;/td&gt;<br>        &lt;td&gt;#iBadRowsInitial    + iBadRowsNew   - iBadRowsFinal#&lt;/td&gt;<br>        &lt;td&gt;#iNumTBD_Names# new&lt;/td&gt;<br>    &lt;/tr&gt;<br>    &lt;tr&gt;<br>        &lt;th scope="row"&gt;Final number of unique names:&lt;/th&gt;<br>        &lt;td&gt;#iGoodRowsFinal#&lt;/td&gt;<br>        &lt;td&gt;#iBadRowsFinal#&lt;/td&gt;<br>        &lt;td&gt;#iTBDRowsFinal#&lt;/td&gt;<br>    &lt;/tr&gt;<br>&lt;/table&gt;<br>&lt;/CFOUTPUT&gt;</p><p>&lt;!---<br>&lt;CFDUMP var="#variables#"&gt;<br>---&gt;</p><p>*****************************************************************************<br>*****   Source for cfcSantaListDB.cfc starts here.                      *****<br>*****************************************************************************<br>&lt;CFCOMPONENT<br>    displayname = "SantaList_DB_Object"<br>    output      = "no"<br>    hint        = "Encapsulates the DB functions for our Santa list application."<br>&gt;<br>&lt;!--- For this Q&amp;D example code, we avoid the data abstraction layer and just<br>    use MySQL syntax (Version 5.0).<br>---&gt;</p><p>&lt;!--- Private object globals. ---&gt;<br>&lt;CFSCRIPT&gt;<br>    sDSN        = "";<br>    sDB_Name    = "";<br>    sLineTerm   = "\r\n";</p><p>    oRunTime    = CreateObject ("java", "java.lang.Thread");<br>&lt;/CFSCRIPT&gt;</p><p>&lt;CFFUNCTION<br>    name        = "oInit"<br>    displayname = "Initialize function/constructor"<br>    output      = "no"<br>    returntype  = "cfcSantaListDB"<br>    hint        = "Creates the object with the specified DSN and DB name."<br>&gt;<br>    &lt;CFARGUMENT  name="sDataSourceName" type="variablename"  required="yes"  hint="MySQL only for now."&gt;<br>    &lt;CFARGUMENT  name="sDatabaseName"   type="variablename"  default="SantySnoop"&gt;</p><p>    &lt;CFSET  Variables.sDSN      = Arguments.sDataSourceName&gt;<br>    &lt;CFSET  Variables.sDB_Name  = Arguments.sDatabaseName&gt;</p><p>    &lt;CFRETURN this&gt;<br>&lt;/CFFUNCTION&gt;</p><p>&lt;CFFUNCTION  name="SetupDataBase"  output="no"  returntype="void"&gt;</p><p>    &lt;CFQUERY name="qDB_Setup"  datasource="#Variables.sDSN#"&gt;<br>        CREATE DATABASE IF NOT EXISTS #Variables.sDB_Name#;<br>    &lt;/CFQUERY&gt;</p><p>    &lt;!--- Avoid race problems.  Wait until DB shows up.<br>    ---&gt;<br>    &lt;CFLOOP condition="1 EQ 1"&gt;<br>        &lt;CFSET  Variables.oRunTime.sleep (200)&gt;   &lt;!--- We often need to allow some time for MySQL to REALLY finish DB Alter ops. ---&gt;</p><p>        &lt;CFQUERY name="qDB_SetupChk"  timeout="5"  datasource="#Variables.sDSN#"&gt;<br>            SHOW DATABASES LIKE '#LCase (Variables.sDB_Name)#';<br>        &lt;/CFQUERY&gt;</p><p>        &lt;CFIF   qDB_SetupChk.RecordCount GTE 1&gt;<br>            &lt;CFBREAK&gt;<br>        &lt;/CFIF&gt;<br>    &lt;/CFLOOP&gt;<br>&lt;/CFFUNCTION&gt;</p><p>&lt;CFFUNCTION  name="CreateStandardNameTable" output="no"         returntype="void"&gt;<br>    &lt;CFARGUMENT name="sTableName"           type="variablename" required="yes"&gt;<br>    &lt;CFARGUMENT name="bAddUniqueConstraint" type="boolean"      default="no"&gt;</p><p>    &lt;CFQUERY name="qTableSetup"  datasource="#Variables.sDSN#"&gt;<br>        CREATE TABLE IF NOT EXISTS<br>            #Variables.sDB_Name#.#Arguments.sTableName#<br>            (<br>              iId           mediumint(9) NOT NULL auto_increment,<br>              sName         char(65) NOT NULL,<br>              PRIMARY KEY   (iId),<br>              #IIf (Arguments.bAddUniqueConstraint, DE ("UNIQUE KEY sNameIdx "), DE ("INDEX "))# (sName)<br>            );<br>    &lt;/CFQUERY&gt;</p><p>    &lt;!--- We don't seem to need to allow any extra time or checks for table creation.<br>        SHOW TABLES FROM SantySnoop LIKE 'tGoodListRaw'<br>    ---&gt;<br>&lt;/CFFUNCTION&gt;</p><p>&lt;CFFUNCTION  name="iImportTextData" output="no"         returntype="numeric"&gt;<br>    &lt;CFARGUMENT name="sTableName"   type="variablename" required="yes"&gt;<br>    &lt;CFARGUMENT name="sFilePath"    type="string"       required="yes"&gt;<br>    &lt;CFARGUMENT name="bResetTable"  type="boolean"      default="yes"&gt;</p><p>    &lt;!--- Escape path slashes. ---&gt;<br>    &lt;CFSET  var sEscFilePath    = Replace (Arguments.sFilePath, "\", "\\", "ALL")&gt;</p><p>    &lt;CFTRANSACTION&gt;<br>        &lt;!--- CF BUG!  The trailing select in the first query is not handled by CF!!<br>            Thus we need to split the queries -- which we can do because we stay in<br>            the same MySQL session.<br>        ---&gt;<br>        &lt;CFQUERY name="qTextImport"  datasource="#Variables.sDSN#"&gt;<br>            &lt;!--- Note that row_count() does not work with INFILE.<br>                Also, spaces before () cause weird errors.<br>            ---&gt;<br>            &lt;CFIF   Arguments.bResetTable&gt;<br>                TRUNCATE TABLE  #Variables.sDB_Name#.#Arguments.sTableName#;<br>            &lt;/CFIF&gt;</p><p>            &lt;!--- If we don't truncate the table, get the initial row count. ---&gt;<br>            SET @iBeforeRaw = (SELECT Count(iID) FROM #Variables.sDB_Name#.#Arguments.sTableName#);</p><p>            LOAD DATA INFILE '#sEscFilePath#' INTO TABLE #Variables.sDB_Name#.#Arguments.sTableName#<br>            LINES TERMINATED BY '#Variables.sLineTerm#'<br>             (sName);</p><p>            SET @iAfterRaw  = (SELECT Count(iID) FROM #Variables.sDB_Name#.#Arguments.sTableName#);</p><p>            SELECT  @iAfterRaw - @iBeforeRaw AS iRowsInserted;    &lt;!--- CF ignores!!! ---&gt;<br>        &lt;/CFQUERY&gt;</p><p>        &lt;CFQUERY name="qTextImportStat"  datasource="#Variables.sDSN#"&gt;<br>            SELECT  @iAfterRaw - @iBeforeRaw AS iRowsInserted;<br>        &lt;/CFQUERY&gt;<br>    &lt;/CFTRANSACTION&gt;</p><p>    &lt;CFRETURN   qTextImportStat['iRowsInserted'][1]&gt;<br>&lt;/CFFUNCTION&gt;</p><p>&lt;CFFUNCTION  name="iExportTextData" output="no"         returntype="numeric"&gt;<br>    &lt;CFARGUMENT name="sTableName"   type="variablename" required="yes"&gt;<br>    &lt;CFARGUMENT name="sFilePath"    type="string"       required="yes"&gt;</p><p>    &lt;!--- Escape path slashes. ---&gt;<br>    &lt;CFSET  var sEscFilePath    = Replace (Arguments.sFilePath, "\", "\\", "ALL")&gt;</p><p>    &lt;CFIF   FileExists (sEscFilePath)&gt;<br>        &lt;CFFILE action="delete"  file="#Arguments.sFilePath#"&gt;<br>    &lt;/CFIF&gt;</p><p>    &lt;CFTRANSACTION&gt;<br>        &lt;!--- CF BUG!  The trailing select in the first query is not handled by CF!!<br>            Thus we need to split the queries -- which we can do because we stay in<br>            the same MySQL session.<br>        ---&gt;<br>        &lt;CFQUERY name="qTextExport"  datasource="#Variables.sDSN#"&gt;<br>            &lt;!--- Note that row_count() does not work well here.<br>            ---&gt;<br>            SELECT<br>                sName<br>            FROM<br>                #Variables.sDB_Name#.#Arguments.sTableName#<br>            INTO OUTFILE<br>                '#sEscFilePath#'<br>            LINES TERMINATED BY<br>                '#Variables.sLineTerm#'<br>            ;</p><p>            SET @iWriteCnt  = (SELECT ROW_COUNT()); &lt;!--- This is wrong for many mysql versions! ---&gt;<br>        &lt;/CFQUERY&gt;</p><p>        &lt;CFQUERY name="qTextExportStat"  datasource="#Variables.sDSN#"&gt;<br>            SELECT<br>                Count(iID)  AS iRowsInserted<br>            FROM<br>                #Variables.sDB_Name#.#Arguments.sTableName#;<br>        &lt;/CFQUERY&gt;<br>    &lt;/CFTRANSACTION&gt;</p><p>    &lt;CFRETURN   qTextExportStat['iRowsInserted'][1]&gt;<br>&lt;/CFFUNCTION&gt;</p><p>&lt;CFFUNCTION  name="iGetRowCount"    output="no"         returntype="numeric"&gt;<br>    &lt;CFARGUMENT name="sTableName"   type="variablename" required="yes"&gt;</p><p>    &lt;CFQUERY name="qGetRowCount"  datasource="#Variables.sDSN#"&gt;<br>        SELECT<br>            Count(iID)  AS iNumRows<br>        FROM<br>            #Variables.sDB_Name#.#Arguments.sTableName#;<br>    &lt;/CFQUERY&gt;</p><p>    &lt;CFRETURN   qGetRowCount['iNumRows'][1]&gt;<br>&lt;/CFFUNCTION&gt;</p><p>&lt;CFFUNCTION  name="iAddNewNamesToList"  output="no"         returntype="numeric"&gt;<br>    &lt;CFARGUMENT name="sSrcTableName"    type="variablename" required="yes"&gt;<br>    &lt;CFARGUMENT name="sDestTableName"   type="variablename" required="yes"&gt;<br>    &lt;CFARGUMENT name="bResetTable"      type="boolean"      default="no"&gt;</p><p>    &lt;CFTRANSACTION&gt;<br>        &lt;!--- CF BUG!  The trailing select in the first query is not handled by CF!!<br>            Thus we need to split the queries -- which we can do because we stay in<br>            the same MySQL session.<br>        ---&gt;<br>        &lt;CFQUERY name="qNameClean"  datasource="#Variables.sDSN#"&gt;<br>            &lt;CFIF   Arguments.bResetTable&gt;<br>                TRUNCATE TABLE  #Variables.sDB_Name#.#Arguments.sDestTableName#;<br>            &lt;/CFIF&gt;</p><p>            Use #Variables.sDB_Name#;</p><p>            INSERT INTO<br>                #Arguments.sDestTableName# (sName)<br>            SELECT DISTINCT<br>                tRaw.sName<br>            FROM<br>                #Arguments.sSrcTableName#   tRaw<br>            LEFT JOIN<br>                #Arguments.sDestTableName#  tFin    ON tRaw.sName   = tFin.sName<br>            WHERE<br>                tFin.sName                  IS NULL<br>            AND<br>                tRaw.sName                  IS NOT NULL<br>            AND<br>                Trim(tRaw.sName)            &lt;&gt; ''<br>            ;</p><p>            SET @iNewRows                   = (SELECT ROW_COUNT());<br>        &lt;/CFQUERY&gt;</p><p>        &lt;CFQUERY name="qNameCleanStat"  datasource="#Variables.sDSN#"&gt;<br>            SELECT  IFNULL(@iNewRows, 0)    AS iRowsInserted;<br>        &lt;/CFQUERY&gt;<br>    &lt;/CFTRANSACTION&gt;</p><p>    &lt;CFRETURN   qNameCleanStat['iRowsInserted'][1]&gt;<br>&lt;/CFFUNCTION&gt;</p><p>&lt;CFFUNCTION  name="iStripOutNiceNaughtyDoers"   output="no"         returntype="numeric"&gt;<br>    &lt;CFARGUMENT name="sGoodTableName"           type="variablename" required="yes"&gt;<br>    &lt;CFARGUMENT name="sBadTableName"            type="variablename" required="yes"&gt;<br>    &lt;CFARGUMENT name="sTBD_TableName"           type="variablename" required="yes"&gt;<br>    &lt;CFARGUMENT name="bResetTable"              type="boolean"      default="no"&gt;</p><p>    &lt;CFTRANSACTION&gt;<br>        &lt;!--- CF BUG!  The trailing select in the first query is not handled by CF!!<br>            Thus we need to split the queries -- which we can do because we stay in<br>            the same MySQL session.<br>        ---&gt;<br>        &lt;CFQUERY name="qTBD_Name"  datasource="#Variables.sDSN#"&gt;<br>            &lt;CFIF   Arguments.bResetTable&gt;<br>                TRUNCATE TABLE  #Variables.sDB_Name#.#Arguments.sTBD_TableName#;<br>            &lt;/CFIF&gt;</p><p>            Use #Variables.sDB_Name#;</p><p>            INSERT INTO<br>                #Arguments.sTBD_TableName# (sName)<br>            SELECT<br>                tBad.sName<br>            FROM<br>                #Arguments.sBadTableName#   tBad<br>            INNER JOIN<br>                #Arguments.sGoodTableName#  tGood   ON tBad.sName   = tGood.sName<br>            LEFT JOIN<br>                #Arguments.sTBD_TableName#  tTBD    ON tBad.sName   = tTBD.sName<br>            WHERE<br>                tTBD.sName                  IS NULL<br>            ;</p><p>            SET @iNewRows                   = (SELECT ROW_COUNT());</p><p>            DELETE FROM<br>                tBad<br>            USING<br>                #Arguments.sBadTableName#   tBad,<br>                #Arguments.sTBD_TableName#  tTBD<br>            WHERE<br>                tBad.sName                  = tTBD.sName<br>            ;</p><p>            DELETE FROM<br>                tGood<br>            USING<br>                #Arguments.sGoodTableName#  tGood,<br>                #Arguments.sTBD_TableName#  tTBD<br>            WHERE<br>                tGood.sName                 = tTBD.sName<br>            ;<br>        &lt;/CFQUERY&gt;</p><p>        &lt;CFQUERY name="qTBD_NameStat"  datasource="#Variables.sDSN#"&gt;<br>            SELECT  IFNULL(@iNewRows, 0)    AS iRowsInserted;<br>        &lt;/CFQUERY&gt;<br>    &lt;/CFTRANSACTION&gt;</p><p>    &lt;CFRETURN   qTBD_NameStat['iRowsInserted'][1]&gt;<br>&lt;/CFFUNCTION&gt;</p><p>&lt;/CFCOMPONENT&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659852">17</a> by Tuyen
		posted on 12/3/2006 at 3:58 PM
		</div>
		<div class="comment_text"><p>Totally agree with you, Tony, about BULK INSERT. Wow, that was my first solution. Whenever dealing with MILLION records, BULK INSERT would be the best solution.... Or we can use PERL HASH TABLE (run on windows comnand) which is much faster than Coldfusion Struct (I guess)...</p><p>Great Post!</p></div>
	</div>
</div>
		