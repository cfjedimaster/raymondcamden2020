
<div class="comment" id="c_1713685672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685672">1</a> by Dave Ferguson
		posted on 9/12/2008 at 6:16 PM
		</div>
		<div class="comment_text"><p>This is probably cheating but hey why reinvent the wheel?</p><p>&lt;CFSCRIPT&gt;<br>	a.testvar1 = 'this is part 1';<br>	a.testvar2 = 'this is part 2';<br>	a.testvar3  = [1,2,9,20];	<br>	writeoutput(inspect(a));	<br>&lt;/CFSCRIPT&gt;</p><p>&lt;CFFUNCTION NAME="inspect" RETURNTYPE="STRING"&gt;<br>	&lt;CFARGUMENT NAME="item" REQUIRED="YES"&gt;	<br>	&lt;CFSAVECONTENT VARIABLE="contRet"&gt;	<br>		&lt;CFDUMP VAR="#arguments.item#" FORMAT="TEXT"&gt;<br>	&lt;/CFSAVECONTENT&gt;<br>	&lt;CFRETURN contRet&gt;<br>&lt;/CFFUNCTION&gt;</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685689">2</a> by Raymond Camden
		posted on 9/12/2008 at 6:18 PM
		</div>
		<div class="comment_text"><p>I don't mind cheating (if it is good enough for Captain Kirk, it is good enough for me), but that doesn't solve the problem. The result should be a string that could be executed to create the same data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685698">3</a> by Ben Nadel
		posted on 9/12/2008 at 6:43 PM
		</div>
		<div class="comment_text"><p>How about:</p><p>&lt;cffunction name="Inspect"&gt;<br>&lt;cfreturn (<br>"DeserializeJSON(" &amp; <br>SerializeJSON( ARGUMENTS[ 1 ] ) &amp; <br>")" <br>) /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685679">4</a> by Elliott Sprehn
		posted on 9/12/2008 at 6:47 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>The inspect() method on objects in Groovy is actually stolen from ruby. :)</p><p>The fact that you can't create implicit queries and that implicit arrays and structs aren't allowed in expression contexts reduces the value of the CF kind of function quite a lot.</p><p>Instead you'd end up with tons of temporary variables. :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685683">5</a> by Raymond Camden
		posted on 9/12/2008 at 6:50 PM
		</div>
		<div class="comment_text"><p>@Ben - Nice. :)</p><p>@Elliott - Thanks for the info re: inspect. As for the usefulness - please remember - this is for fun, nothing more. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685685">6</a> by todd sharp
		posted on 9/12/2008 at 6:54 PM
		</div>
		<div class="comment_text"><p>Ben stole my idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685684">7</a> by todd sharp
		posted on 9/12/2008 at 7:09 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="inspect"&gt;<br>	&lt;cfargument name="ob" required="true" type="any" /&gt;<br>	&lt;cfset var ret = "" /&gt;<br>	&lt;cfwddx action="cfml2wddx" input="#arguments.ob#" output="ret" /&gt;<br>	&lt;cfreturn toString(ret) /&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfset a = arrayNew(1) /&gt;</p><p>&lt;cfset b = structNew() /&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fb.name%3A569YpjOMX1p-GhV6ZQPfy8Re-r0&amp;cuid=3321886" rel="nofollow noopener" title="b.name">b.name</a> = "todd" /&gt;<br>&lt;cfset b.skillLevel = "superior" /&gt;</p><p>&lt;cfset arrayAppend(a,b) /&gt;</p><p>&lt;cfquery name="c" datasource="cfartgallery"&gt;<br>select *<br>from artists<br>&lt;/cfquery&gt;</p><p>&lt;cfset arrayAppend(a,c) /&gt;<br>&lt;cfdump var="#a#"&gt;</p><p>&lt;cfset i = inspect(a) /&gt;<br>&lt;cfoutput&gt;#i#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685688">8</a> by Ben Nadel
		posted on 9/12/2008 at 7:10 PM
		</div>
		<div class="comment_text"><p>@Todd,</p><p>:P ... I like the WDDX approach also.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685692">9</a> by Raymond Camden
		posted on 9/12/2008 at 7:16 PM
		</div>
		<div class="comment_text"><p>@Todd - Your solution is as wrong as the first commenter. It needs to be something that can be executed or run via cfinclude.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685691">10</a> by todd sharp
		posted on 9/12/2008 at 7:28 PM
		</div>
		<div class="comment_text"><p>OK so then what im i doing wrong then - I can't get Ben's solution to do what you're looking for either?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685694">11</a> by Ben Nadel
		posted on 9/12/2008 at 7:36 PM
		</div>
		<div class="comment_text"><p>Whoa, whoa, don't pick on me :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685695">12</a> by todd sharp
		posted on 9/12/2008 at 7:54 PM
		</div>
		<div class="comment_text"><p>OK I'm sure I over complicated this (I'm medicated today) :)  But this works --</p><p>&lt;cffunction name="inspect"&gt;<br>	&lt;cfargument name="ob" required="true" type="any" /&gt;<br>	&lt;cfset var towddx = "" /&gt;<br>	&lt;cfset var ret = "" /&gt;</p><p>	&lt;cfwddx action="cfml2wddx" input="#arguments.ob#" output="towddx" /&gt;</p><p>	&lt;cfsavecontent variable="ret"&gt;<br>	&amp;lt;cfwddx action="wddx2cfml" input="&lt;cfoutput&gt;#towddx#&lt;/cfoutput&gt;" output="cfml" /&amp;gt;<br>	&amp;lt;cfdump var="#cfml#" /&amp;gt;<br>	&lt;/cfsavecontent&gt;</p><p>	&lt;cfreturn replace(replace(ret, "&amp;lt;", "&lt;", "all"), "&amp;gt;", "&gt;", "all") /&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfset a = arrayNew(1) /&gt;</p><p>&lt;cfset b = structNew() /&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fb.name%3A569YpjOMX1p-GhV6ZQPfy8Re-r0&amp;cuid=3321886" rel="nofollow noopener" title="b.name">b.name</a> = "todd" /&gt;<br>&lt;cfset b.skillLevel = "superior" /&gt;</p><p>&lt;cfset arrayAppend(a,b) /&gt;</p><p>&lt;cfquery name="c" datasource="cfartgallery"&gt;<br>select *<br>from artists<br>&lt;/cfquery&gt;</p><p>&lt;cfset arrayAppend(a,c) /&gt;</p><p>&lt;cfset i = inspect(a) /&gt;<br>&lt;cfdump var="#i#"&gt;</p><p>&lt;cfset tempfile = "#getDirectoryFromPath(getCurrentTemplatePath())#/inspect.cfm" /&gt;</p><p>&lt;cffile action="write" file="#tempfile#" output="#i#" /&gt;</p><p>&lt;cfinclude template="inspect.cfm" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685693">13</a> by Justice
		posted on 9/12/2008 at 8:18 PM
		</div>
		<div class="comment_text"><p>OK, I took a stab at it.  Got it working for strings, arrays, and structures.  Anyone wanna extend to queries? =)</p><p>&lt;!---// Code //---&gt;</p><p>&lt;cfscript&gt;<br>function inspect(obj) {<br>	var result = { dataType = '', code = '' };<br>	result.dataType = getDataType(obj);</p><p>	switch (result.dataType) {<br>		case 'array':<br>			result.code = '&lt;cfset theVar = {';<br>			for (x = 1; x LTE arrayLen(obj); x++) {<br>				result.code = result.code &amp; obj[x];<br>				if (x != arrayLen(obj)) {<br>					result.code = result.code &amp; ',';<br>				} 	<br>			}<br>			result.code = result.code &amp; '} /&gt;';<br>		break;</p><p>		case 'struct':<br>			result.code = '&lt;cfset theVar = { ';<br>			structKeyArr = structKeyArray(obj);<br>			for (x=1; x LTE arrayLen(structKeyArr); x++) {<br>				result.code = result.code &amp; structKeyArr[x] &amp; '=' &amp; obj[structKeyArr[x]];<br>				if (x != arrayLen(structKeyArr)) {<br>					result.code = result.code &amp; ',';<br>				}<br>			}<br>			result.code = result.code &amp; '} /&gt;';<br>		break;</p><p>		case 'string':<br>			result.code = '&lt;cfset theVar = "' &amp; obj &amp; '" /&gt;';<br>		break;<br>	}</p><p>	return result;<br>}</p><p>function getDataType(obj) {<br>	var dataType = 'unknown';</p><p>	if (isSimpleValue(obj)) {<br>		dataType = 'string';<br>	}<br>	if (isArray(obj)) {<br>		dataType = 'array';<br>	}<br>	if (isStruct(obj)) {<br>		dataType = 'struct';<br>	}<br>	if (isQuery(obj)) {<br>		dataType = 'query';<br>	}</p><p>	return dataType;<br>}</p><p>&lt;/cfscript&gt;</p><p>&lt;cfset theArray = [12,23,23,345,56] /&gt;<br>&lt;cfset theStruct = { test="yes", age=45, message="hello" } /&gt;<br>&lt;cfset theString = "Hello" /&gt;</p><p>&lt;cfoutput&gt;<br>String Result:  &lt;cfdump var="#inspect(theString)#"&gt;&lt;br /&gt;<br>Array Result:  &lt;cfdump var="#inspect(theArray)#"&gt;&lt;br /&gt;<br>Structure Result:  &lt;cfdump var="#inspect(theStruct)#"&gt;&lt;br /&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685700">14</a> by Justice
		posted on 9/12/2008 at 8:20 PM
		</div>
		<div class="comment_text"><p>and I posted it too fast, revised code to fix missing quotes in the structure creation =)</p><p>&lt;!---// Code //---&gt;</p><p>&lt;cfscript&gt;<br>function inspect(obj) {<br>	var result = { dataType = '', code = '' };<br>	result.dataType = getDataType(obj);</p><p>	switch (result.dataType) {<br>		case 'array':<br>			result.code = '&lt;cfset theVar = {';<br>			for (x = 1; x LTE arrayLen(obj); x++) {<br>				result.code = result.code &amp; obj[x];<br>				if (x != arrayLen(obj)) {<br>					result.code = result.code &amp; ',';<br>				} 	<br>			}<br>			result.code = result.code &amp; '} /&gt;';<br>		break;</p><p>		case 'struct':<br>			result.code = '&lt;cfset theVar = { ';<br>			structKeyArr = structKeyArray(obj);<br>			for (x=1; x LTE arrayLen(structKeyArr); x++) {<br>				result.code = result.code &amp; structKeyArr[x] &amp; '= "' &amp; obj[structKeyArr[x]] &amp; '"';<br>				if (x != arrayLen(structKeyArr)) {<br>					result.code = result.code &amp; ',';<br>				}<br>			}<br>			result.code = result.code &amp; '} /&gt;';<br>		break;</p><p>		case 'string':<br>			result.code = '&lt;cfset theVar = "' &amp; obj &amp; '" /&gt;';<br>		break;<br>	}</p><p>	return result;<br>}</p><p>function getDataType(obj) {<br>	var dataType = 'unknown';</p><p>	if (isSimpleValue(obj)) {<br>		dataType = 'string';<br>	}<br>	if (isArray(obj)) {<br>		dataType = 'array';<br>	}<br>	if (isStruct(obj)) {<br>		dataType = 'struct';<br>	}<br>	if (isQuery(obj)) {<br>		dataType = 'query';<br>	}</p><p>	return dataType;<br>}</p><p>&lt;/cfscript&gt;</p><p>&lt;cfset theArray = [12,23,23,345,56] /&gt;<br>&lt;cfset theStruct = { test="yes", age=45, message="hello" } /&gt;<br>&lt;cfset theString = "Hello" /&gt;</p><p>&lt;cfoutput&gt;<br>String Result:  &lt;cfdump var="#inspect(theString)#"&gt;&lt;br /&gt;<br>Array Result:  &lt;cfdump var="#inspect(theArray)#"&gt;&lt;br /&gt;<br>Structure Result:  &lt;cfdump var="#inspect(theStruct)#"&gt;&lt;br /&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685697">15</a> by Sean Corfield
		posted on 9/12/2008 at 9:43 PM
		</div>
		<div class="comment_text"><p>Nice Justice! Now, how about making it work for nested structs of structs and arrays and nested arrays of arrays and structs? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685701">16</a> by shag
		posted on 9/12/2008 at 11:30 PM
		</div>
		<div class="comment_text"><p>sounds like someone's being used for free broadchoice development to me.......</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685702">17</a> by Raymond Camden
		posted on 9/12/2008 at 11:32 PM
		</div>
		<div class="comment_text"><p>@shag - heh, Groovy already supports this. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685703">18</a> by shag
		posted on 9/12/2008 at 11:41 PM
		</div>
		<div class="comment_text"><p>thats groovy, but it was funny that @sean piped in.  his comments sounded kinda like, "yeah, but we needed it to do this".  i just thought it was funny.. shoulda taged it with a wink. ;-)</p></div>
	</div>
</div>
		