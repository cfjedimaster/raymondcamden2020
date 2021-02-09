
<div class="comment" id="c_1713654994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654994">1</a> by Ed
		posted on 7/13/2006 at 5:42 PM
		</div>
		<div class="comment_text"><p>As an CF-native alternative it should be possible to achieve a similar result using cfsavecontent to build the XML string - I'm pretty sure it uses Java stringBuffer behind the scenes - it's certainly orders of magnitude faster than using standard CF string concatenation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655005">2</a> by Raymond Camden
		posted on 7/13/2006 at 5:54 PM
		</div>
		<div class="comment_text"><p>I could have done that - but the white space would have been a bit much, not that it would have mattered between xml entities (afaik). I think for me it's more a stylistic choice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655004">3</a> by Nathan Dintenfass
		posted on 7/13/2006 at 6:05 PM
		</div>
		<div class="comment_text"><p>Would it have been as slow using an actual CF-native XML instance using XMLNew()?  Something similar to the &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fudf.cfm%3Fid%3D648%3AEb-Ox55jcaLLLXGt1C-PcRD83C4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/udf.cfm?id=648">http://www.cflib.org/udf.cf...</a>"&gt;QueryToXML UDF&lt;/a&gt;?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655002">4</a> by Raymond Camden
		posted on 7/13/2006 at 6:11 PM
		</div>
		<div class="comment_text"><p>Interesting. Btw - don't forget you don't need to use html here. You can't actually. But URLs are auto-hot linked.</p><p>Anyway, as you know, when I wrote the CFC I did it from scratch ignoring the CFLib one. (Because I was bored. ;)</p><p>If you run a speed test, I'd love to know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655015">5</a> by John Farrar
		posted on 7/19/2006 at 10:15 PM
		</div>
		<div class="comment_text"><p>Found an issue and here is the fix.</p><p>When you have a date time that CF recognizes (at least with this oracle system this project is running on) it changes it to a ODBC style datestamp in the XML output! I changed your line ...</p><p>	&lt;cfelseif isSimpleValue(txt)&gt;</p><p>to this...</p><p>	&lt;cfif isDate(txt)&gt;<br>		&lt;cfset txt = dateFormat(txt,arguments.dateFormat) &amp; " " &amp; timeFormat(txt,arguments.timeFormat)&gt;<br>	&lt;cfelseif isSimpleValue(txt)&gt;</p><p>and of course added two cfargument tags with defaults.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655014">6</a> by Troy Pullis
		posted on 7/20/2006 at 12:39 AM
		</div>
		<div class="comment_text"><p>Much better! I had downloaded your first toxml.cfc, and with a recordset of 2000 records, it was taking over 1 minute at 107000 ms. I couldn't understand what caused it to take so long. Glad I found your new download today, as it now runs much faster at about 500 ms. Thanks for the fix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655013">7</a> by Raymond Camden
		posted on 7/20/2006 at 12:44 AM
		</div>
		<div class="comment_text"><p>Troy, my new web site will have an easier project page for me to update, so stuff like this won't get lost as much.</p><p>John, I'll take a look at this later in the week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655006">8</a> by Raymond Camden
		posted on 7/21/2006 at 12:25 AM
		</div>
		<div class="comment_text"><p>John, I'm not seeing that. I passed in April 2, 2009 as a value, and it didn't mess with it. All I do is an XMLFormat. Maybe the Oracle output isn't XML safe? Can you send me a sample string?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655011">9</a> by John Farrar
		posted on 7/31/2006 at 7:16 PM
		</div>
		<div class="comment_text"><p>OK... did you pass the value from an Oracle database?</p><p>Also... Oracle has the ability now to output XML based structure... and I am looking at doing that (just for Oracle at this point, based on Ben's famous.... "If you can do it in the database..." concept.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655010">10</a> by Carrie
		posted on 7/31/2007 at 8:28 PM
		</div>
		<div class="comment_text"><p>Any ideas why I might be getting this error when using toxml.cfc?</p><p>XML Parsing Error: xml declaration not at start of external entity<br>Location: http://localhost:8300/reportsV2/runreport.cfm?CFID=2300&amp;CFTOKEN=93572396<br>Line Number 2, Column 2:	&lt;?xml version="1.0" encoding="UTF-8"?&gt;<br>--------^</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655020">11</a> by Raymond Camden
		posted on 7/31/2007 at 8:39 PM
		</div>
		<div class="comment_text"><p>This isn't an issue with toXML, but how you are displaying your XML. Your XML needs to be the very first thing output on a page. If you use</p><p>&lt;cfcontent type="text/xml" reset="true"&gt;YOURXMLHERE</p><p>You should be ok. Note the reset="true",that nukes the earlier output, if any. Don't forget CF likes to output whitespace.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655012">12</a> by Carrie
		posted on 8/1/2007 at 12:29 AM
		</div>
		<div class="comment_text"><p>thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655021">13</a> by Malik Robinson
		posted on 8/23/2007 at 3:19 AM
		</div>
		<div class="comment_text"><p>Just wanted to say thanks for the CFC to convert various ColdFusion datatypes to XML packets.  I am just getting into Spry now that I actually have some time at work and I was able to get the Auto Suggest feature to work and this CFC helped me quite a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655018">14</a> by Paul
		posted on 10/26/2007 at 6:40 PM
		</div>
		<div class="comment_text"><p>I too am trying to use the spry suggest widget with the output from your excellent query to xml function, but spry does not seem to like the syntax I am using. Could you post and example of the correct syntax?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655016">15</a> by Raymond Camden
		posted on 10/27/2007 at 12:29 AM
		</div>
		<div class="comment_text"><p>I believe I did another blog post on Spry's suggest widget. I'd look there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655027">16</a> by Warren
		posted on 11/10/2007 at 9:04 PM
		</div>
		<div class="comment_text"><p>Thanks for the the great code!  I extended it a bit for a different purpose.  I use Oracle and stored procedures to send data back to Flex via a CFC.  The stored procs use refcursors to send query data to the CFC which results in an array of objects in Flex.  The problem comes in when I try to send a similar array back to Oracle.  There are no cfargument types that let me do this easily.  But I can convert the array into xml in the CFC and send it to Oracle as a CLOB!  I  load the data into an Oracle table or into a generic (temporary) table for further processing using the new 10g dbms_xmlstore PL/SQL utility.  Problem solved!<br>I extended your code into someting that would convert an array of structures into Oracle XML format.  I have included this function and an example using the generic approach.  I need to do a bit more error trapping but I think you'll get the concept from what I've done.</p><p>ORACLE CODE:</p><p>Generic table Creation</p><p>CREATE TABLE XMLTABLE<br>(<br>  ITEM_001  VARCHAR2(2000),<br>  ITEM_002  VARCHAR2(2000),<br>  ITEM_003  VARCHAR2(2000)<br>)</p><p>Procedure to upload XML</p><p>CREATE OR REPLACE PROCEDURE testxml(<br>   indata   IN       CLOB,<br>   status   OUT      VARCHAR2<br>)<br>IS<br>   v_context   DBMS_XMLSTORE.ctxtype;<br>   v_rows      NUMBER;<br>BEGIN<br>   v_context := DBMS_XMLSTORE.newcontext('xmltable');<br>   v_rows := DBMS_XMLSTORE.insertxml(v_context, indata);<br>   DBMS_XMLSTORE.closecontext(v_context);<br>   status := 'SUCCESS  ' || TO_CHAR(v_rows);<br>EXCEPTION<br>   WHEN OTHERS<br>   THEN<br>      status := 'UNKNOWN ERROR - ' || SQLERRM || ' (' || TO_CHAR(SQLCODE) || ')';<br>END testxml;</p><p>COLD FUSION CODE:</p><p>CONVERSION FUNCTION</p><p>&lt;cffunction name="FlexArrayToOracleXML" <br>					returnType="string" <br>					access="public" <br>					output="false" <br>					hint="Converts an array of structures into XML for use with dbms_xmlstore"&gt;<br>	&lt;cfargument name="data"<br>						type="array"<br>						required="true"<br>						hint="data array to convert"&gt;<br>	&lt;cfargument name="usekeys"<br>						type="string"<br>						default="YES"<br>						hint="Use keys from structure or create generic ones (ITEM_xxx)"&gt;&gt;<br>	&lt;cfargument name="setcase"<br>						type="string"<br>						default=""<br>						hint="MIXED, LOWER, or '' (ucase)  Sets case of all elements"&gt;&gt;<br>	&lt;cfargument name="keyfilter"<br>						type="string"<br>						default=""<br>	hint="Selects which keys from the structure to convert"&gt;&gt;<br>	&lt;cfset var s = createObject('java','java.lang.StringBuffer').init("&lt;?xml version=""1.0"" encoding=""UTF-8""?&gt;")&gt;</p><p>	&lt;cfset var keys = structKeyList(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a>[1])&gt;<br>	&lt;cfset var KeyList = ""&gt;<br>	&lt;cfset var key = ""&gt;<br>	&lt;cfset var keylabel = 1&gt;<br>	&lt;cfset KeyLabels = StructNew()&gt;</p><p>	&lt;!-- filter which elements to move into xml --&gt;<br>	&lt;cfif trim(keyfilter) NEQ ""&gt;<br>		&lt;cfset KeyList = ""&gt;		<br>		&lt;cfloop index="key" list="#keyfilter#"&gt;<br>			&lt;cfif StructKeyExists(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a>[1], "#trim(key)#")&gt;<br>				&lt;cfset KeyList = ListAppend(KeyList,"#key#")&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfif trim(KeyList) EQ ""&gt;<br>		&lt;cfset KeyList = keys&gt;		<br>	&lt;/cfif&gt;</p><p>	&lt;!-- use keys in xml or make generic items --&gt;<br>	&lt;cfif trim(usekeys) EQ "YES" OR trim(usekeys) EQ "Y"&gt;<br>		&lt;cfloop index="key" list="#KeyList#"&gt;<br>			&lt;cfswitch expression="#Trim(UCase(setcase))#"&gt;<br>				&lt;cfcase value="MIXED"&gt;<br>					&lt;cfset KeyLabels[key]=key&gt;<br>				&lt;/cfcase&gt;<br>				&lt;cfcase value="LOWER"&gt;<br>					&lt;cfset KeyLabels[key]=LCase(key)&gt;<br>				&lt;/cfcase&gt;<br>				&lt;cfdefaultcase&gt;<br>					&lt;cfset KeyLabels[key]=UCase(key)&gt;<br>				&lt;/cfdefaultcase&gt;<br>			&lt;/cfswitch&gt;<br>		&lt;/cfloop&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfloop index="key" list="#KeyList#"&gt;<br>			&lt;cfset KeyLabels[key] = "ITEM_" &amp; RepeatString("0", 3-LEN(keylabel)) &amp; keylabel&gt;<br>			&lt;cfset keylabel = keylabel + 1&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;!-- create XML --&gt;<br>	&lt;cfset s.append("&lt;ROWSET&gt;")&gt;	<br>	&lt;cfloop index="x" from="1" to="#arrayLen(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a>)#"&gt;<br>		&lt;cfset s.append("&lt;ROW&gt;")&gt;<br>		&lt;cfset keylabel = 1&gt;<br>		&lt;cfswitch expression="#Trim(UCase(setcase))#"&gt;<br>			&lt;cfcase value="MIXED"&gt;<br>				&lt;cfloop index="key" list="#KeyList#"&gt;<br>					&lt;cfset s.append("&lt;#KeyLabels[key]#&gt;#xmlFormat(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a>[x][key])#&lt;/#KeyLabels[key]#&gt;")&gt;<br>				&lt;/cfloop&gt;<br>			&lt;/cfcase&gt;<br>			&lt;cfcase value="LOWER"&gt;<br>				&lt;cfloop index="key" list="#KeyList#"&gt;<br>					&lt;cfset s.append("&lt;#KeyLabels[key]#&gt;#xmlFormat(LCase(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a>[x][key]))#&lt;/#KeyLabels[key]#&gt;")&gt;<br>				&lt;/cfloop&gt;<br>			&lt;/cfcase&gt;<br>			&lt;cfdefaultcase&gt;<br>				&lt;cfloop index="key" list="#KeyList#"&gt;<br>					&lt;cfset s.append("&lt;#KeyLabels[key]#&gt;#xmlFormat(UCase(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a>[x][key]))#&lt;/#KeyLabels[key]#&gt;")&gt;<br>				&lt;/cfloop&gt;<br>			&lt;/cfdefaultcase&gt;<br>		&lt;/cfswitch&gt;<br>		&lt;cfset s.append("&lt;/ROW&gt;")&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfset s.append("&lt;/ROWSET&gt;")&gt;</p><p>	&lt;cfreturn s.toString()&gt;		<br>&lt;/cffunction&gt;</p><p>TEST CODE</p><p>&lt;cfset myArray=ArrayNew(1)&gt;</p><p>&lt;cfset myStruct=StructNew()&gt;<br>&lt;cfset myStruct.FNAME="a"&gt;<br>&lt;cfset myStruct.BEMSID="1"&gt;<br>&lt;cfset myStruct.LNAME="b"&gt;<br>&lt;cfset ArrayAppend(myArray,myStruct)&gt;</p><p>&lt;cfset myStruct=StructNew()&gt;<br>&lt;cfset myStruct.FNAME="c"&gt;<br>&lt;cfset myStruct.BEMSID="2"&gt;<br>&lt;cfset myStruct.LNAME="d"&gt;<br>&lt;cfset ArrayAppend(myArray,myStruct)&gt;</p><p>&lt;cfset xmlStruct = FlexArrayToOracleXML(myArray,"NO")&gt;<br>&lt;cfdump var="#xmlParse(xmlStruct)#"&gt;</p><p>&lt;CFTRY&gt;<br>	&lt;cfset status = "TEST" /&gt;</p><p>	&lt;CFSTOREDPROC procedure = "mis.testxml"<br>				datasource = "yourDSN <br>				blockfactor="100" <br>				returncode = "No"&gt;<br>		&lt;CFPROCPARAM type = "IN" 	cfsqltype = "CF_SQL_CLOB" value  = "#xmlStruct#"&gt;<br>		&lt;CFPROCPARAM type = "OUT"	cfsqltype = "CF_SQL_VARCHAR" variable="STATUS"&gt;<br>	&lt;/CFSTOREDPROC&gt;</p><p>	&lt;BR/&gt;&lt;CFOUTPUT&gt;#Now()# #status#&lt;/CFOUTPUT&gt;<br>	&lt;CFCATCH type="any"&gt;<br>		&lt;CFDOCUMENT format="PDF" overwrite="yes" filename="Error.pdf"&gt;<br>			&lt;CFDUMP var="#cfcatch#"/&gt;<br>		&lt;/CFDOCUMENT&gt;<br>		&lt;CFTHROW message="ERROR" /&gt;<br>	&lt;/CFCATCH&gt;<br>&lt;/CFTRY&gt;</p></div>
	</div>
</div>
		