
<div class="comment" id="c_1713653147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653147">1</a> by Anj
		posted on 5/19/2006 at 6:19 PM
		</div>
		<div class="comment_text"><p>Before I write any code, I'd say the most common would be cfset, cfif and cfoutput... probably in that order.</p><p>Once I run my solution against a few thousand pages, I'll let you know what I see in practice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653148">2</a> by Anj
		posted on 5/19/2006 at 8:03 PM
		</div>
		<div class="comment_text"><p>I got 1.5 of 3 right... on a large pile of rather poorly-engineered code --</p><p>&lt;cfset&gt;	40788<br>&lt;cfoutput&gt;	31384<br>&lt;cfelse&gt;	16145<br>&lt;cfquery&gt;	9770<br>&lt;cfif&gt;	6592</p><p>My code - also probably rather poorly engineered.  Feel free to suggest improvements.</p><p>&lt;cffunction name="CountTagsInCode" access="private" output="yes"&gt;<br>	&lt;cfargument name="tags" required="yes" type="struct"&gt;<br>	&lt;cfargument name="code" required="yes" type="string"&gt;</p><p>	&lt;cfset var TAGSTART = "&lt;c" &amp; "f"&gt;<br>	&lt;cfset var TAGENDCHARS = " &gt;" &amp; Chr(12) &amp; Chr(9)&gt;</p><p>	&lt;cfset thisLoc = FindNoCase(TAGSTART, arguments.code, 1)&gt;</p><p>	&lt;cfloop condition="thisLoc NEQ 0"&gt;<br>		&lt;cfset tagEnd = FindOneOf(TAGENDCHARS, arguments.code, thisLoc+3)&gt;<br>		&lt;cfset tagname = LCase(Mid(arguments.code, thisLoc+3, tagEnd - (thisLoc+3)))&gt;<br>		&lt;cftry&gt;<br>			&lt;cfif StructKeyExists(tags, tagname)&gt;<br>				&lt;cfset "arguments.tags.#tagname#" = evaluate("arguments.tags.#tagname#") + 1&gt;<br>			&lt;cfelse&gt;<br>				&lt;cfset "arguments.tags.#tagname#" = 1&gt;<br>			&lt;/cfif&gt;<br>			&lt;cfcatch&gt;Found invalid tag name '&lt;cfoutput&gt;#HtmlEditFormat(tagstart)##tagname#&lt;/cfoutput&gt;'&lt;br/&gt;&lt;/cfcatch&gt;<br>		&lt;/cftry&gt;<br>		&lt;cfset thisLoc = FindNoCase(TAGSTART, arguments.code, thisLoc+3)&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="CountTagsInFile" access="public" output="yes"&gt;<br>	&lt;cfargument name="tags" required="yes" type="struct"&gt;<br>	&lt;cfargument name="filename" required="yes" type="string"&gt;</p><p>	&lt;cffile action="read" file="#arguments.filename#" variable="codeblock"&gt;<br>	&lt;cfset CountTagsInCode(arguments.tags, codeblock)&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="CountTagsInDirectory" access="public" output="yes"&gt;<br>	&lt;cfargument name="tags" required="yes" type="struct"&gt;<br>	&lt;cfargument name="directory" required="yes" type="string"&gt;</p><p>	&lt;cfset var myDir = ""&gt;<br>	&lt;cfdirectory action="list" directory="#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.directory%3AuSrP0K2CHwirw1MvMxQEIjr671g&amp;cuid=3321886" rel="nofollow noopener" title="arguments.directory">arguments.directory</a>#" name="myDir" recurse="yes"&gt;<br>	&lt;cfloop query="myDir"&gt;<br>		&lt;cfif myDir.type EQ "file" AND <br>			((Right(<a href="http://disq.us/url?url=http%3A%2F%2FmyDir.name%3AzDaGEhhk5WfHw29oH_PohbVUSVs&amp;cuid=3321886" rel="nofollow noopener" title="myDir.name">myDir.name</a>,4) EQ ".cfm") OR (Right(<a href="http://disq.us/url?url=http%3A%2F%2FmyDir.name%3AzDaGEhhk5WfHw29oH_PohbVUSVs&amp;cuid=3321886" rel="nofollow noopener" title="myDir.name">myDir.name</a>, 5) EQ ".cfml") OR (Right(<a href="http://disq.us/url?url=http%3A%2F%2FmyDir.name%3AzDaGEhhk5WfHw29oH_PohbVUSVs&amp;cuid=3321886" rel="nofollow noopener" title="myDir.name">myDir.name</a>,4) EQ ".cfc"))&gt;<br>			&lt;cfset CountTagsInFile(tags, <a href="http://disq.us/url?url=http%3A%2F%2Farguments.directory%3AuSrP0K2CHwirw1MvMxQEIjr671g&amp;cuid=3321886" rel="nofollow noopener" title="arguments.directory">arguments.directory</a> &amp; "\" &amp; <a href="http://disq.us/url?url=http%3A%2F%2FmyDir.name%3AzDaGEhhk5WfHw29oH_PohbVUSVs&amp;cuid=3321886" rel="nofollow noopener" title="myDir.name">myDir.name</a>)&gt;<br>		&lt;cfelseif myDir.type EQ "dir"&gt;<br>			&lt;cfset CountTagsInDirectory(tags, <a href="http://disq.us/url?url=http%3A%2F%2Farguments.directory%3AuSrP0K2CHwirw1MvMxQEIjr671g&amp;cuid=3321886" rel="nofollow noopener" title="arguments.directory">arguments.directory</a> &amp; "\" &amp; <a href="http://disq.us/url?url=http%3A%2F%2FmyDir.name%3AzDaGEhhk5WfHw29oH_PohbVUSVs&amp;cuid=3321886" rel="nofollow noopener" title="myDir.name">myDir.name</a>)&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="CountTags" access="public" output="yes"&gt;<br>	&lt;cfargument name="input" required="yes" type="string"&gt;</p><p>	&lt;cfset var tags = StructNew()&gt;</p><p>	&lt;cfif FileExists(arguments.input)&gt;<br>		&lt;cfset CountTagsInFile(tags, arguments.input)&gt;<br>	&lt;cfelseif FileExists(ExpandPath(arguments.input))&gt;<br>		&lt;cfset CountTagsInFile(tags, ExpandPath(arguments.input))&gt;<br>	&lt;cfelseif DirectoryExists(arguments.input)&gt;<br>		&lt;cfset CountTagsInDirectory(tags, arguments.input)&gt;<br>	&lt;cfelseif DirectoryExists(ExpandPath(arguments.input))&gt;<br>		&lt;cfset CountTagsInDirectory(tags, ExpandPath(arguments.input))&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset CountTagsInCode(tags, arguments.input)&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfoutput&gt;<br>		&lt;cfloop collection="#tags#" item="thisTag"&gt;<br>			&lt;cf#thisTag#&gt;#Chr(9)##tags[thisTag]#&lt;br/&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653133">3</a> by Anj
		posted on 5/19/2006 at 8:05 PM
		</div>
		<div class="comment_text"><p>CountTagsInFile() and CountTagsInDirectory() should both be private.</p><p>Call as</p><p>&lt;cfset CountTags(fred)&gt;</p><p>Where 'fred' can be a string containing CF code, a filename, or a directory name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653144">4</a> by Martin
		posted on 5/19/2006 at 8:05 PM
		</div>
		<div class="comment_text"><p>My entry: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.1pixelout.net%2Fcounttags.cfm%3AqXhwmW0U7CL_EbkeEQpKjdaKCsc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.1pixelout.net/counttags.cfm">http://www.1pixelout.net/co...</a></p><p>I did the directory thing but the UDF doesn't count cfmodule calls as custom tags.</p><p>Thanks Ray, I was just about to die of acute boredom when you posted today's contest. You saved my Friday afternoon (UK time)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653146">5</a> by Anj
		posted on 5/19/2006 at 8:06 PM
		</div>
		<div class="comment_text"><p>I skipped the "Ray Points" because I don't actually have any code using CFMODULE handy, and because I'm lazy.  Shouldn't be too hard to add though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653141">6</a> by Raymond Camden
		posted on 5/19/2006 at 8:13 PM
		</div>
		<div class="comment_text"><p>Explain to me how you had more cfelse tags than cfif?? :) That seems..... off. :) I can see more cfelseif, but not cfelse.</p><p>Martin, have a good drink for me. I've been to London once - and man did I like the beer there. Very different from what we have over here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653142">7</a> by Tom Mollerus
		posted on 5/19/2006 at 8:16 PM
		</div>
		<div class="comment_text"><p>I suppose to parse through a directory I should have done this with CFFUNCTION. Oh well... here's the results of my 5 minutes:</p><p>&lt;CFSCRIPT&gt;<br>function cfTagFreq(string) {<br>	var start = 1;<br>	var stTags = StructNew();<br>	var thisTag = '';<br>	do {<br>		tag = ReFindNoCase('&lt;cf\_?[0-9,a-z,]*', string, start, 1);<br>		if(Val(tag.pos[1])) {<br>			thisTag = Mid(string, tag.pos[1] + 1, Max(0, tag.len[1] - 1));<br>			if(StructKeyExists(stTags, thisTag))<br>				stTags[thisTag] = IncrementValue(Val(stTags[thisTag]));<br>			else<br>				stTags[thisTag] = 1;<br>		}<br>		start = tag.pos[1] + tag.len[1];<br>	} while (start lt len(string) and start gt 0);</p><p>	return stTags;<br>}<br>&lt;/CFSCRIPT&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653145">8</a> by Raymond Camden
		posted on 5/19/2006 at 8:17 PM
		</div>
		<div class="comment_text"><p>FYI Tom, you forgot to var scope tag. (Sorry, couldn't resist.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653156">9</a> by Martin
		posted on 5/19/2006 at 8:29 PM
		</div>
		<div class="comment_text"><p>Ray: If you're after good beer, you should try the Belgian stuff. These guys really know what they're doing. I went to a bar in Brussels where they have 2000 different beers on their menu!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653151">10</a> by ErikG
		posted on 5/19/2006 at 8:30 PM
		</div>
		<div class="comment_text"><p>My entry uses two UDFs, I don't know if that disqualifies me.</p><p>Just call GetTagCount(input).</p><p>The "input" can be:<br> - Raw code to parse<br> - Full Path of a Directory to search and parse<br> - Full Path of a single file to parse</p><p>Returns a structure with tag names and counts.</p><p>--begin code--<br>&lt;cffunction name="GetTagCount" returntype="struct" output="true"&gt;<br>	&lt;cfargument name="parseMe" required="Yes" type="string"&gt;<br>	&lt;cfargument name="result" type="struct" default="#StructNew()#"/&gt;</p><p>	&lt;cfif FileExists(parseMe)&gt;<br>		&lt;!--- FILE ---&gt;<br>		&lt;cffile action="READ" file="#parseMe#" variable="myCode"/&gt;<br>		&lt;cfset result = GetTagCountCore(myCode,result)/&gt;<br>	&lt;cfelseif DirectoryExists(parseMe)&gt;<br>		&lt;!--- DIR ---&gt;<br>		&lt;cfdirectory action="LIST" directory="#parseMe#" name="dirListing"&gt;<br>		&lt;cfloop query="dirListing"&gt;<br>		&lt;cfswitch expression="#type#"&gt;<br>			&lt;cfcase value="file"&gt;<br>				&lt;cffile action="READ" file="#parseMe#\#name#" variable="fileCode"/&gt;<br>				&lt;cfset fileResult = GetTagCountCore(fileCode,result)/&gt;<br>			&lt;/cfcase&gt;<br>			&lt;cfcase value="dir"&gt;<br>				&lt;cfset dirResult = GetTagCount(parseMe &amp; "\" &amp; name,result)/&gt;<br>			&lt;/cfcase&gt;<br>		&lt;/cfswitch&gt;<br>		&lt;/cfloop&gt;<br>	&lt;cfelse&gt;<br>		&lt;!--- MUST BE SENDING RAW CODE ---&gt;<br>		&lt;cfset result = GetTagCountCore(parseMe,result)/&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfreturn result/&gt;<br>&lt;/cffunction&gt;<br>&lt;cffunction name="GetTagCountCore" returntype="struct" output="false"&gt;<br>	&lt;cfargument name="inputCode" required="Yes" type="string"/&gt;<br>	&lt;cfargument name="result" type="struct" default="#StructNew()#"/&gt;<br>	&lt;cfset var stopLooping = 0/&gt;<br>	&lt;cfset var startPos = 1/&gt;<br>	&lt;cfset var findPos = 0/&gt;<br>	&lt;cfset var findEndPos = 0/&gt;<br>	&lt;cfset var findEndTagPos = 0/&gt;<br>	&lt;cfset var findEndPosTemp = 0/&gt;</p><p>	&lt;cfloop condition="stopLooping EQ 0"&gt;<br>		&lt;!--- find the CF tags ---&gt;<br>		&lt;cfset findPos = ReFindNoCase("&lt;cf[^&gt;]*&gt;",inputCode,startPos) + 1/&gt;<br>		&lt;cfif findPos LT 2&gt;<br>			&lt;cfset stopLooping = 1/&gt;<br>			&lt;cfbreak/&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfset findEndPos = FindOneOf(" /&gt;	",inputCode,findPos)/&gt;<br>		&lt;cfset findEndTagPos = FindNoCase("&gt;",inputCode,findPos)/&gt;<br>		&lt;cfset findEndPosTemp = FindNoCase(Chr(10),inputCode,findPos)/&gt;<br>		&lt;cfif findEndPosTemp GT 0&gt;<br>			&lt;cfset findEndPos = Min(findEndPos,findEndPosTemp)/&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfset findEndPosTemp = FindNoCase(Chr(13),inputCode,findPos)/&gt;<br>		&lt;cfif findEndPosTemp GT 0&gt;<br>			&lt;cfset findEndPos = Min(findEndPos,findEndPosTemp)/&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfset thisTagName = UCase(Mid(inputCode,findPos,findEndPos-findPos))/&gt;<br>		&lt;cfset startPos = findEndTagPos/&gt;<br>		&lt;!--- end - find the CF tags ---&gt;<br>		&lt;!--- update struct ---&gt;<br>		&lt;cfif StructKeyExists(result,thisTagName)&gt;<br>			&lt;cfset StructUpdate(result, thisTagName, StructFind(result,thisTagName)+1)/&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfset StructInsert(result,thisTagName,1,true)/&gt;<br>		&lt;/cfif&gt;<br>		&lt;!--- end - update struct ---&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfreturn result/&gt;<br>&lt;/cffunction&gt;<br>--end code--</p></div>
	</div>
</div>
		