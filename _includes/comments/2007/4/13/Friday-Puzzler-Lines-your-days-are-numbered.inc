
<div class="comment" id="c_1713664051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664051">1</a> by Steve Bryant
		posted on 4/13/2007 at 6:59 PM
		</div>
		<div class="comment_text"><p>Well, I am clearly cheating here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bryantwebconsulting.com%2Fclients%2Fsamples%2FNumberLines.txt%3AM9Iht2OXoD4mSjaPWkxVloelsFM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bryantwebconsulting.com/clients/samples/NumberLines.txt">http://www.bryantwebconsult...</a><br>(code and example of use)</p><p>I just took this from the code I wrote long ago for the advanced coding contest and simplified it a bit to make a simple UDF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664052">2</a> by Tom Litt
		posted on 4/13/2007 at 7:22 PM
		</div>
		<div class="comment_text"><p>Neat, Steve! Quick response, and I like the line separator bit - haven't seen that before</p><p>I prefer something like the following for padding the label, personally:</p><p>&lt;cfset MaxLabelLen = Len(ArrayLen(aLines))&gt;<br>&lt;cfset Padding = RepeatString(" ",MaxLabelLen)&gt;<br>&lt;!--- Loop through each line and add a line number ---&gt;<br>&lt;cfloop index="i" from="1" to="#ArrayLen(aLines)#" step="1"&gt;<br>	&lt;cfset label = i&gt;<br>	&lt;cfset label = Right("#Padding##label#",MaxLabelLen) &amp; ": "&gt;<br>	&lt;cfset result = result &amp; "#label##aLines[i]#" &amp; linedelim&gt;<br>&lt;/cfloop&gt;</p><p>Gets a nested loop out of the way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664035">3</a> by Aaron Benton
		posted on 4/13/2007 at 8:06 PM
		</div>
		<div class="comment_text"><p>Here is my contribution, I tested it a little but not fully.</p><p>&lt;cfscript&gt;<br> /*<br>  Author - Aaron Benton (bentonam@gmail.com) <br>  Description -  Reads a file and returns it with line numbers</p><p>  Params<br>  ------------------- <br>  fileName - string - full path to file<br>  encoding - string - file encoding<br>  buffer - int - buffer size<br>  html - boolean - returns an html representation of the string<br>  padding - int - padding length of highest line number<br> */<br> function numberLines(fileName) {<br>  var argLen = arrayLen(arguments);<br>  var line = 0;<br>  var encoding = "";<br>  var buffer = 8192;<br>  var html = false;<br>  var padding = 5;<br>  var result = "";<br>  var fileInputStream = "";<br>  var inputStreamReader = "";<br>  var bufferedReader = "";<br>  var ioFile = createObject("java","java.io.File").init(arguments.fileName);<br>  var charSet = createObject("java","java.nio.charset.Charset");<br>  var stringBuffer = createObject("java","java.lang.StringBuffer").init();<br>  switch(argLen) {<br>   case 2:<br>    encoding = arguments[2];<br>   break;<br>   case 3:<br>    encoding = arguments[2];<br>    buffer = arguments[3];<br>   break;<br>   case 4: <br>    encoding = arguments[2];<br>    buffer = arguments[3];<br>    html = arguments[4];<br>   break;<br>   case 5: <br>    encoding = arguments[2];<br>    buffer = arguments[3];<br>    html = arguments[4];<br>    padding = arguments[5];<br>  }<br>  if(not ioFile.exists()) {<br>   stringBuffer.append("File Does not Exist");<br>  }<br>  else if(not ioFile.isFile()) {<br>   stringBuffer.append("Is not a File");<br>  }<br>  else if(not charSet.isSupported(javaCast("string",encoding))) {<br>   stringBuffer.append("Unsupported Charset");<br>  }<br>  else {<br>   fileInputStream = createObject("java","java.io.FileInputStream").init(javaCast("string",arguments.fileName));<br>   inputStreamReader = createObject("java","java.io.InputStreamReader").init(fileInputStream,javaCast("string",encoding));<br>   bufferedReader = createObject("java","java.io.BufferedReader").init(inputStreamReader,javaCast("int",buffer));<br>   bufferedReader.mark(buffer);<br>   while(<a href="http://disq.us/url?url=http%3A%2F%2FbufferedReader.read%3AYQOZUtTvbK2lw42ZVqHw_CwDqBE&amp;cuid=3321886" rel="nofollow noopener" title="bufferedReader.read">bufferedReader.read</a>() neq -1) {<br>    bufferedReader.reset();<br>    line = line + 1;<br>    stringBuffer.append(line &amp; "." &amp; repeatString(" ",padding - len(line)) &amp; bufferedReader.readLine() &amp; chr(13) &amp; chr(10));<br>    bufferedReader.mark(buffer);<br>   }<br>   fileInputStream.close();<br>   inputStreamReader.close();<br>   bufferedReader.close();<br>  }<br>  if(html) {<br>   result  = htmlCodeFormat(stringBuffer.toString());<br>  }<br>  else {<br>   result = stringBuffer.toString();<br>  }<br>  return result;<br> }<br>&lt;/cfscript&gt; <br>&lt;cfset test = numberLines(expandPath("/test.cfm"),'UTF-8',8192,true,4)/&gt;<br>&lt;cfoutput&gt;#test#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664049">4</a> by Steve Bryant
		posted on 4/13/2007 at 8:08 PM
		</div>
		<div class="comment_text"><p>Tom,</p><p>That is pretty nice! Makes the code faster and cleaner.</p><p>Thanks,</p><p>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664048">5</a> by Dave Ferguson
		posted on 4/13/2007 at 8:22 PM
		</div>
		<div class="comment_text"><p>Here is my contribution to the fun.  I made it possible to declare start and end rows as well as an output format.  I also took into consideration human error in transposing the start and end.</p><p>&lt;CFFUNCTION NAME="genFileOutput" RETURNTYPE="STRING" OUTPUT="TRUE"&gt;<br>	&lt;CFARGUMENT NAME="fileData" REQUIRED="YES" TYPE="STRING"&gt;<br>	&lt;CFARGUMENT NAME="isPath" REQUIRED="NO" TYPE="NUMERIC" DEFAULT="0" &gt;<br>	&lt;CFARGUMENT NAME="startNum" REQUIRED="NO" TYPE="NUMERIC" DEFAULT="0"&gt;<br>	&lt;CFARGUMENT NAME="endNum" REQUIRED="NO" TYPE="NUMERIC" DEFAULT="0"&gt;<br>	&lt;CFARGUMENT NAME="outformat" REQUIRED="NO" TYPE="NUMERIC" DEFAULT="1" HINT="1=normal, 2=table"&gt;</p><p>	&lt;CFIF isPath and NOT fileExists(filedata)&gt; <br>		&lt;CFRETURN "Unable to read file"&gt;		<br>	&lt;/CFIF&gt;</p><p>	&lt;CFIF isPath&gt;<br>		&lt;CFFILE ACTION="READ" FILE="#fileData#" VARIABLE="theFile"&gt;<br>	&lt;CFELSE&gt;<br>		&lt;CFSET theFile = fileData&gt;<br>	&lt;/CFIF&gt;</p><p>	&lt;CFIF startNum NEQ 0 and endNum NEQ 0&gt;<br>		&lt;CFIF startNum GT endNum&gt;<br>			&lt;CFSET rowCT = startNum - endNum&gt;				<br>			&lt;CFSET startNum = endNum&gt;<br>		&lt;CFELSE&gt;<br>			&lt;CFSET rowCT = endNum - startNum&gt;<br>		&lt;/CFIF&gt;<br>	&lt;CFELSEIF startNum NEQ 0&gt;<br>		&lt;CFSET rowCT = ListLen(theFile, chr(10))-startNum&gt;		<br>	&lt;CFELSEIF endNum NEQ 0&gt;<br>		&lt;CFSET rowCT = endNum&gt;<br>	&lt;CFELSE&gt;<br>		&lt;CFSET rowCT = ListLen(theFile, chr(10))&gt;<br>	&lt;/CFIF&gt;</p><p>	&lt;CFIF rowCT LTE 0&gt;<br>		&lt;CFRETURN "No rows in file to read. #rowCT#"&gt;<br>	&lt;/CFIF&gt;</p><p>	&lt;CFIF startNum EQ 0&gt;<br>		&lt;CFSET startNum = 1&gt;<br>	&lt;/CFIF&gt;		<br>	&lt;CFSET maxLoop = startNum+rowCT&gt;<br>	&lt;CFSET charCT = len(maxLoop)&gt;</p><p>	&lt;CFSAVECONTENT VARIABLE="theResult"&gt;<br>		&lt;CFIF outformat EQ 1&gt;<br>		&lt;CFLOOP INDEX="i" FROM="#startNum#" TO="#maxLoop#"&gt;<br>		###i##RepeatString("&amp;nbsp;&amp;nbsp;", charCT-len(i))#:  #listGetAt(theFile, i, chr(10))#&lt;BR&gt;<br>		&lt;/CFLOOP&gt;<br>		&lt;CFELSE&gt;<br>			&lt;TABLE BORDER="1"&gt;<br>			&lt;CFLOOP INDEX="i" FROM="#startNum#" TO="#maxLoop#"&gt;<br>			&lt;TR&gt;&lt;TD&gt;###i#:&lt;/TD&gt;&lt;TD&gt;#listGetAt(theFile, i, chr(10))#&lt;/TD&gt;&lt;/TR&gt;<br>			&lt;/CFLOOP&gt;<br>			&lt;/TABLE&gt;<br>		&lt;/CFIF&gt;<br>	&lt;/CFSAVECONTENT&gt;</p><p>	&lt;CFRETURN theResult&gt;<br>&lt;/CFFUNCTION&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664053">6</a> by Jeremy French
		posted on 4/13/2007 at 10:35 PM
		</div>
		<div class="comment_text"><p>Here's my entry.  I went for elegance over readability...and run-time performance...and code security...and pretty much everything else that makes good code.</p><p>&lt;cffunction name="nl"&gt;<br>	&lt;cfset inCode=Arguments[1]&gt;<br>	&lt;cfset outCode=""&gt;<br>	&lt;cfset cr=chr(13)&amp;chr(10)&gt;<br>	&lt;cfloop from="1" to="#listLen(Arguments[1],cr)#" index="i"&gt;<br>		&lt;cfset outCode = listAppend(outCode,right(repeatString(' ',listLen(Arguments[1],cr))&amp;i,len(listLen(Arguments[1],cr)))&amp;": "&amp;listFirst(inCode,cr),cr)&gt; <br>		&lt;cfset incode = listRest(inCode, cr)&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfreturn outCode&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664057">7</a> by Tom Mollerus
		posted on 4/13/2007 at 10:50 PM
		</div>
		<div class="comment_text"><p>I wrote this first, then took a look at Steve's work. I like how he split the string into arrays, very elegant.</p><p>&lt;cffunction name="addLineNums"&gt;<br>	&lt;cfargument name="input" type="string" required="yes"&gt;&lt;cfsilent&gt;</p><p>	&lt;!--- If the string corresponds to a file, retrieve the file ---&gt;<br>	&lt;cfif FileExists(ARGUMENTS.input)&gt;<br>		&lt;cffile action="read" file="#ARGUMENTS.input#" variable="ARGUMENTS.input"&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;!--- Initialize parameters ---&gt;<br>	&lt;cfset VARIABLES.lines = ListLen(ARGUMENTS.input, '#Chr(10)##Chr(13)#')&gt;<br>	&lt;cfset VARIABLES.padding = repeatString(' ', Len(VARIABLES.lines))&gt;<br>	&lt;cfset currentRow = 1&gt;</p><p>	&lt;!--- For each line in the string ---&gt;<br>	&lt;cfsavecontent variable="VARIABLES.output"&gt;&lt;cfoutput&gt;&lt;cfloop index="line" from="1" to="#VARIABLES.lines#"&gt;&lt;cfif Len(VARIABLES.lines) gt Len(currentRow)&gt;#Left(VARIABLES.padding, Len(VARIABLES.lines) - Len(currentRow))#&lt;/cfif&gt;#currentRow#. #ListGetAt(ARGUMENTS.input, line, '#Chr(10)##Chr(13)#')#&lt;cfset currentRow = IncrementValue(currentRow)&gt;<br>&lt;/cfloop&gt;&lt;/cfoutput&gt;&lt;/cfsavecontent&gt;</p><p>	&lt;cfreturn VARIABLES.output&gt;<br>	&lt;/cfsilent&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664060">8</a> by Elliott Sprehn
		posted on 4/14/2007 at 7:02 AM
		</div>
		<div class="comment_text"><p>Tom,</p><p>You probably don't want to use the variables scope in the UDF. That's going to give some nasty bugs anywhere there happens to be conflicting output, lines or padding variables in the enclosing scope. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664059">9</a> by Tim Smith
		posted on 4/14/2007 at 7:02 AM
		</div>
		<div class="comment_text"><p>What about using a stringbuffer instead of CF concatenation. I get MUCH! better performance on very large concats.</p><p>[code]<br>&lt;cfset sb = createObject("java", "java.lang.StringBuffer")&gt;<br>.	<br>.<br>&lt;cfset sb.append("#label##aLines[i]#")&gt; <br>&lt;cfset sb.append(linedelim)&gt;<br>.<br>.<br>&lt;cfset result=sb.toString()&gt;<br>&lt;cfreturn result&gt;<br>[/code]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664037">10</a> by Ryan Magnusson
		posted on 4/14/2007 at 9:32 AM
		</div>
		<div class="comment_text"><p>Although I could have used (and probably should have) used java objects for performance, I intentionally tried to stay with using CFML objects instead.  So here's my two cents worth: <br>&lt;cffunction <br>    name="cfnl" <br>    returntype="string" <br>    output="false"&gt;<br>    &lt;cfargument <br>        name="filePath" <br>        required="yes" <br>        type="string"&gt;<br>    &lt;!--- declare local variable storage ---&gt;<br>    &lt;cfset var fileRex      = arrayNew(2) /&gt;<br>    &lt;cfset var inStream     = ""          /&gt;<br>    &lt;cfset var outStream    = ""          /&gt;<br>    &lt;cfset var recNum       = 0           /&gt;<br>    &lt;cfset var numberDigits = 0           /&gt;<br>    &lt;cfset var digitLen     = 0           /&gt;<br>    &lt;cfset var recPtr       = 0           /&gt;<br>    &lt;cfset var recCountStr  = ""          /&gt;<br>    &lt;cfset var lineSpaces   = ""          /&gt;<br>    &lt;!--- open the file, read the data ---&gt;<br>    &lt;cffile action="read" <br>            variable="inStream" <br>            file="#arguments.filePath#" /&gt;<br>    &lt;!--- loop over the file contents as a list loop ---&gt;<br>    &lt;!--- and store it in a local array object ---&gt;<br>    &lt;cfloop list="#arguments.filePath#" <br>            index="lineBrk" delimiters="#chr(10)#"&gt;<br>        &lt;cfset recNum = recNum + 1          /&gt;<br>        &lt;cfset fileRex[recNum][1] = recNum  /&gt;<br>        &lt;cfset fileRex[recNum][2] = lineBrk /&gt;<br>    &lt;/cfloop&gt;<br>    &lt;!--- the purist in me wanted to convert this to a proper string ---&gt;<br>    &lt;cfset recCountStr  = lsNumberFormat(recNum) /&gt;<br>    &lt;!--- count the number of digits in string of total record count ---&gt;<br>    &lt;cfset numberDigits = len(recCountStr)       /&gt;<br>    &lt;!--- now loop back over the contents of the file content array ---&gt;<br>    &lt;cfloop from="1" to="#recNum#" index="recPtr"&gt;<br>    &lt;!--- what is our current digit count ---&gt;<br>        &lt;cfset recCountStr = lsNumberFormat(recPtr) /&gt;<br>        &lt;!--- what is the difference between our current and max digits count ---&gt;<br>        &lt;cfset digitLen    = len(recCountStr) - numberDigits /&gt;<br>        &lt;!--- if the digit-length is greater than zero ---&gt;<br>        &lt;!--- loop from one to the digit-length concatenating spaces ---&gt;<br>        &lt;cfif digitLen &gt;<br>            &lt;cfloop from="1" to="#digitLen#" index="chrPtr"&gt;<br>                &lt;cfset lineSpaces = lineSpaces &amp; " " /&gt;<br>            &lt;/cfloop&gt;<br>        &lt;cfelse&gt;<br>            &lt;!--- otherwise, leave it an empty string ---&gt;<br>            &lt;cfset lineSpaces = "" /&gt;<br>        &lt;/cfif&gt;<br>        &lt;!--- concatenate the string of the current array object to the previous ---&gt;<br>        &lt;cfset outStream = outStream &amp; recCountStr &amp; fileRex[recPtr][2] &amp; chr(10) /&gt;<br>    &lt;/cfloop&gt;			<br>    &lt;!--- return the string object to the user ---&gt;<br>    &lt;cfreturn outStream /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664038">11</a> by db
		posted on 4/14/2007 at 5:39 PM
		</div>
		<div class="comment_text"><p>for padding the line numbers, is there some reason not to use RJustify?<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfquickdocs.com%2F%3FgetDoc%3DRJustify%3AzSpKZs4y680NvoE97v_N7zd7QlI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfquickdocs.com/?getDoc=RJustify">http://www.cfquickdocs.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664039">12</a> by Raymond Camden
		posted on 4/19/2007 at 6:06 PM
		</div>
		<div class="comment_text"><p>A few notes: Some of you returned strings for errors. Personally I don't like this. If my UDF has an error state, I always use tag based UDFs and do a proper CFTHROW.</p><p>Tim is right - you should always try to use StringBuffers when working with large strings. It has MUCH better performance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664040">13</a> by Steve Bryant
		posted on 4/20/2007 at 6:39 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>This was a great one! I will definitely refer back to this when it is time to update CodeCop.</p><p>Speaking of, I think I never put it out in full release...</p></div>
	</div>
</div>
		