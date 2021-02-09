
<div class="comment" id="c_1713651451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651451">1</a> by Gatzby
		posted on 4/7/2006 at 3:46 PM
		</div>
		<div class="comment_text"><p>Why?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651466">2</a> by Raymond Camden
		posted on 4/7/2006 at 3:51 PM
		</div>
		<div class="comment_text"><p>Why not?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651460">3</a> by Kris Brixon
		posted on 4/7/2006 at 4:59 PM
		</div>
		<div class="comment_text"><p>You mean something like:</p><p>&lt;cfset initalString = "Friday Puzzler: First steps to the NSA..."&gt;</p><p>&lt;cffunction name="NSA" output="false" returntype="string"&gt;<br>	&lt;cfargument name="orginialString" type="string" required="yes"&gt;</p><p>	&lt;cfset newString = ""&gt;</p><p>	&lt;cfloop index="i" from="1" to="#len(orginialString)#"&gt;</p><p>		&lt;cfset currentChar = Asc(Mid(orginialString,i,1))&gt;</p><p>		&lt;!--- Captials ---&gt;<br>		&lt;cfif currentChar GTE 65 AND currentChar LTE 90&gt;<br>			&lt;cfset currentChar = (90 - (currentChar - 65))&gt;<br>			&lt;cfset newString = newString &amp; Chr(currentChar)&gt;<br>		&lt;!--- Lower Case ---&gt;<br>		&lt;cfelseif currentChar GTE 97 AND currentChar LTE 122&gt;<br>			&lt;cfset currentChar = (122 - (currentChar - 97))&gt;<br>			&lt;cfset newString = newString &amp; Chr(currentChar)&gt;<br>		&lt;!--- Non Letters ---&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfset newString = newString &amp; Chr(currentChar)&gt;<br>		&lt;/cfif&gt;</p><p>	&lt;/cfloop&gt;</p><p>	&lt;cfreturn newString&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfoutput&gt;#NSA(initalString)#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651464">4</a> by Raymond Camden
		posted on 4/7/2006 at 5:20 PM
		</div>
		<div class="comment_text"><p>Kris, interesting. If I read write, is it "flipping"? Ie, A to Z, Z to A, B to Y, Y to B?</p><p>Also the specs asked you to return a struct that shows the lookup. Not that I care, but just saying. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651461">5</a> by Craig
		posted on 4/7/2006 at 5:58 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="cypher" access="public" returntype="struct" hint="Returns an encoded version of the input string, as well as a struct containing the cypher"&gt;</p><p>	&lt;cfargument name="input" type="string" required="true" hint="String to encode" /&gt;</p><p>	&lt;cfset var i = 0 /&gt;<br>	&lt;cfset var char = '' /&gt;<br>	&lt;cfset var done = false /&gt;<br>	&lt;cfset var output = StructNew() /&gt;<br>	&lt;cfset output.cypher = StructNew() /&gt;<br>	&lt;cfset output.str = '' /&gt;</p><p>	&lt;!--- Initialize the cypher ---&gt;<br>	&lt;cfloop from="97" to="122" index="i"&gt; &lt;!--- 97 to 122 are the ASCII codes for a-z ---&gt;			<br>		&lt;cfif not StructKeyExists(output.cypher, Chr(i))&gt;			<br>			&lt;cfset done = false /&gt;<br>			&lt;cfloop condition="not #done#"&gt;<br>				&lt;cfset char = Chr(RandRange(97, 122)) /&gt;<br>				&lt;cfif not StructKeyExists(output.cypher, char)&gt;<br>					&lt;cfset output.cypher[Chr(i)] = char /&gt;<br>					&lt;cfset output.cypher[char] = Chr(i) /&gt;<br>					&lt;cfset done = true /&gt;<br>				&lt;/cfif&gt;	<br>			&lt;/cfloop&gt;		<br>		&lt;/cfif&gt;</p><p>	&lt;/cfloop&gt;</p><p>	&lt;!--- Encode the string ---&gt;<br> 	&lt;cfloop from="1" to="#Len(input)#" index="i"&gt;	<br>		&lt;cfset char = LCase(Mid(input,i,1)) /&gt;<br>		&lt;cfif Asc(char) gte 97 and Asc(char) lte 122&gt;<br>			&lt;cfset output.str = '#output.str##output.cypher[char]#' /&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfset output.str = '#output.str##char#' /&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfreturn output /&gt;</p><p>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651458">6</a> by tony weeg
		posted on 4/7/2006 at 5:58 PM
		</div>
		<div class="comment_text"><p>the best part about Kris' entry is that he/she incorrectly spells original multiple times!</p><p>nice :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651459">7</a> by Raymond Camden
		posted on 4/7/2006 at 6:01 PM
		</div>
		<div class="comment_text"><p>Craig: Nice!<br>Tony: Yeah, but I bet he/she can find the download link. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651463">8</a> by tony weeg
		posted on 4/7/2006 at 6:09 PM
		</div>
		<div class="comment_text"><p>never stops i guess...</p><p>focker!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651468">9</a> by Rick Osborne
		posted on 4/7/2006 at 6:18 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="Encypher" output="No" returntype="string"&gt;<br>	&lt;cfargument name="In" required="Yes" type="string"&gt;<br>	&lt;cfargument name="Rot" required="No" type="numeric" default="13"&gt;<br>	&lt;cfargument name="Alphabet" required="No" type="string" default="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"&gt;	<br>	&lt;cfset var Out=""&gt;<br>	&lt;cfset var i=0&gt;<br>	&lt;cfset var c=""&gt;<br>	&lt;cfset var n=0&gt;<br>	&lt;cfset var AlphaLen=Len(Alphabet)&gt;<br>	&lt;cfif Rot LT 0&gt;<br>		&lt;cfset Rot=Rot + AlphaLen - 1&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfloop from="1" to="#Len(In)#" index="i"&gt;<br>		&lt;cfset c=Mid(In,i,1)&gt;<br>		&lt;cfset n=Find(c,Alphabet)&gt;<br>		&lt;cfif n GT 0&gt;<br>			&lt;cfset n=n + Rot&gt;<br>			&lt;cfif n GT AlphaLen&gt;&lt;cfset n=(n MOD AlphaLen) + 1&gt;&lt;/cfif&gt;<br>			&lt;cfset c=Mid(Alphabet,n,1)&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfset Out=Out &amp; c&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfreturn Out&gt;<br>&lt;/cffunction&gt;<br>&lt;cffunction name="Decypher" output="No" returntype="string"&gt;<br>	&lt;cfargument name="In" required="Yes" type="string"&gt;<br>	&lt;cfargument name="Rot" required="No" type="numeric" default="13"&gt;<br>	&lt;cfargument name="Alphabet" required="No" type="string" default="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"&gt;<br>	&lt;cfreturn Encypher(In,-Rot,Alphabet)&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfset v="This is a test."&gt;<br>&lt;cfset vv=Encypher(v,4)&gt;<br>&lt;cfset vvv=Decypher(vv,4)&gt;<br>&lt;cfoutput&gt;<br>&lt;p&gt;#v#&lt;/p&gt;<br>&lt;p&gt;#vv#&lt;/p&gt;<br>&lt;p&gt;#vvv#&lt;/p&gt;<br>&lt;/cfoutput&gt;</p><p>&lt;!---<br>Yeah, I know, I don't return a struct.  Wah.<br>---&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651452">10</a> by Raymond Camden
		posted on 4/7/2006 at 6:32 PM
		</div>
		<div class="comment_text"><p>Rick, I like the rotation. Not as "complex", but a different approach. Cool</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651455">11</a> by Teddy Payne
		posted on 4/7/2006 at 7:37 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="LCRCypher" access="public" returntype="struct" hint="lower case random offset cypher"&gt;</p><p>	&lt;cfargument name="strSource" type="string" required="true" default="" /&gt;<br>	&lt;cfargument name="key" type="numeric" required="no" default="#RandRange(1, 25)#" /&gt;</p><p>	&lt;cfset lc_floor = asc('a')&gt;<br>	&lt;cfset lc_ceiling = asc('z')&gt;</p><p>	&lt;cfset encoded = StructNew()&gt;<br>	&lt;cfset encoded.key = arguments.key&gt;<br>	&lt;cfset encoded.strSource = LCase(arguments.strSource)&gt;<br>	&lt;cfset encoded.encString = ""&gt;<br>	&lt;cfset encoded.primer = StructNew()&gt;<br>	&lt;cfset encoded.primer.decCypher = ArrayNew(1)&gt;</p><p>	&lt;cfif key LT (lc_ceiling - lc_floor) AND key GTE 1&gt;</p><p>		&lt;cfloop from="0" to="#lc_ceiling - lc_floor#" index="i"&gt;</p><p>			&lt;cfset lc_loc = asc('a') + i&gt;<br>			&lt;cfset lc_delta = lc_loc + encoded.key&gt;</p><p>			&lt;cfif lc_delta gt lc_ceiling&gt;<br>				&lt;cfset lc_delta = lc_delta - (lc_ceiling - lc_floor)&gt;<br>			&lt;/cfif&gt;</p><p>			&lt;cfset encoded.primer.decCypher[lc_loc] = Chr(lc_delta)&gt;</p><p>		&lt;/cfloop&gt;</p><p>		&lt;cfset strReplace = ""&gt;</p><p>		&lt;cfloop from="1" to="#Len(encoded.strSource)#" index="k"&gt;</p><p>			&lt;cfset chrLoc = lcase(mid(encoded.strSource,k,1)) /&gt;</p><p>			&lt;cfset strReplace = strReplace &amp; encoded.primer.decCypher[Asc(chrLoc)]&gt;</p><p>		&lt;/cfloop&gt;</p><p>		&lt;cfset encoded.encString = strReplace&gt;</p><p>	&lt;cfelse&gt;</p><p>		&lt;cfset encoded.encString = "error: key outside the boundaries of the working set"&gt;</p><p>	&lt;/cfif&gt;</p><p>	&lt;cfreturn encoded /&gt;</p><p>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651456">12</a> by Edward T
		posted on 4/7/2006 at 7:40 PM
		</div>
		<div class="comment_text"><p>Ready to be used as a UDF....</p><p>&lt;cfscript&gt;<br>	function fxSubsCipher(strToConvert) {<br>		// function to create a substitution cipher<br>		// we'll be case insensitive; chr(97) is an "a"</p><p>		var lLets = 'a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z';<br>		var sctCipher = structNew();<br>		sctCipher["strCipherTxt"] = '';<br>		sctCipher["sctCodeBlock"] = structNew();</p><p>		// build a permuted-alphabet struct<br>		randomize(right(getTickCount(), 3)); // this fails for the first second after midnight.  Oh well.</p><p>		iCtr = 0;<br>		while (listLen(lLets)) {<br>			iCtr = incrementValue(iCtr);<br>			i = randRange(1,listLen(lLets));<br>			cNxtLet = 96 + iCtr;<br>			sctCipher.sctCodeBlock["#chr(cNxtLet)#"] = listGetAt(lLets,i);<br>			lLets = listDeleteAt(lLets, i);<br>		}</p><p>		// encode the passed string<br>		for (j=1; j lte len(strToConvert); j=incrementValue(j)) {<br>			cNxtLet = mid(strToConvert, j, 1);<br>			if (structKeyExists(sctCipher.sctCodeBlock, "#cNxtLet#")) {<br>				sctCipher.strCipherTxt = sctCipher.strCipherTxt &amp; sctCipher.sctCodeBlock["#cNxtLet#"];<br>			} else {<br>				sctCipher.strCipherTxt = sctCipher.strCipherTxt &amp; cNxtLet;<br>			}<br>		}</p><p>		return sctCipher;<br>	}<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651454">13</a> by Tom Mollerus
		posted on 4/7/2006 at 7:42 PM
		</div>
		<div class="comment_text"><p>Here's a shot at the puzzle generator, although as an added challenge it would be fun to make this preserve uppercase letters.</p><p>&lt;cfscript&gt;<br>function oneTimePad(secret) {<br>	var alphabet = 'a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z';<br>	var usedCyphers = '';<br>	var puzzle = StructNew();<br>	puzzle.pad = StructNew();<br>	puzzle.secret = secret;<br>	puzzle.code = '';</p><p>	// Create the one-time pad<br>	do {<br>		cypher = ListGetAt(alphabet, RandRange(1, 26)); <br>		if(not ListFind(usedCyphers, cypher)) {<br>			temp = StructInsert(puzzle.pad, ListGetAt(alphabet, ListLen(usedCyphers) + 1), cypher, 0);<br>			usedCyphers = ListAppend(usedCyphers, cypher);<br>		}<br>	} <br>	while (ListLen(usedCyphers) LT 26);</p><p>	// Encrypt the secret<br>	for(i = 1; i LTE Len(puzzle.secret); i = i + 1) {<br>		thisLetter = Mid(puzzle.secret, i, 1);<br>		if(ListFindNoCase(alphabet, thisLetter))<br>			puzzle.code = puzzle.code &amp; puzzle.pad[thisLetter];<br>		else<br>			puzzle.code = puzzle.code &amp; thisLetter;<br>	}</p><p>	return puzzle;<br>}<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651467">14</a> by Teddy Payne
		posted on 4/7/2006 at 7:43 PM
		</div>
		<div class="comment_text"><p>I am aware of the 96 undefined elements.  The goal with the cypher library would be to put the entire translated ascii table into the decCypher array.  That way 1-255 would be defined and translated.  The function can work randomly or you can pass in a key that is from 1-25.  A quick change would be to change the boundaries of the function from 1-255 to fit the core ascii table.  It is also a sequential replacement and not as random.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651465">15</a> by Tom Mollerus
		posted on 4/7/2006 at 7:58 PM
		</div>
		<div class="comment_text"><p>Edward T, your solution is pretty elegant-- interpreting the ASCII values of the letters instead of the letters themselves (like I did) is a good way to handle multiple character sets including uppercase.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651470">16</a> by Edward T
		posted on 4/8/2006 at 1:03 AM
		</div>
		<div class="comment_text"><p>Thanks, Tom - I just logged back on to check other soln's and remarked how similarly we solved the problem!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651469">17</a> by Edward T
		posted on 4/8/2006 at 1:05 AM
		</div>
		<div class="comment_text"><p>@Teddy:</p><p>Or, a more generic problem: how to permute in place a string of n characters.  The core ASCII table just needs to be permuted, but I still think you need to ignore the non-printable elements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651473">18</a> by Simon Horwith
		posted on 4/8/2006 at 11:10 AM
		</div>
		<div class="comment_text"><p>You may not have seen it, but I'd suggest looking at my Enigma Machine toy as an example of how best to do this.  What you're asking for should really be accomplished via a single UDF - not if you want to use it in various production scenarios.  Anyway -  when you're done gathering samples, take a look at the enigma machine that I wrote... it's simple but meets any reasonable requirements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651472">19</a> by Nathan D
		posted on 4/9/2006 at 10:16 AM
		</div>
		<div class="comment_text"><p>Damn you for causing me to waste time on this ;)</p><p>Seems that if you want to "return" two different things a single UDF is not appropriate -- having a return value with multiple values seems a hack, at best.  This belongs in a CFC that looks something like this:</p><p>&lt;cfcomponent name="SimpleStringCypher" hint="Each instance takes a string and creates a simple cypher by replacing letters on a random basis.  You can then return the original string, the cyphered string, and the key in the form of a struct."&gt;</p><p>	&lt;cffunction name="init" access="public" output="false" returntype="SimpleStringCypher"&gt;<br>		&lt;cfargument name="stringToCypher" type="string" required="true"&gt;<br>		&lt;cfscript&gt;<br>			var ii = 0;<br>			var thisChar = "";<br>			variables.instance = structNew();<br>			generateKey();<br>			instance.originalString = createObject("java","java.lang.StringBuffer").init(arguments.stringToCypher);<br>			instance.cypheredString = createObject("java","java.lang.StringBuffer").init(instance.originalString.length());<br>			//loop over the cyphered string, using the reverse key to do the replacement -- preserve case in the string</p><p>			for(ii = 0; ii LT instance.originalString.length(); ii = ii + 1){<br>				ii = javacast("int",ii);<br>				thisChar = instance.originalString.charAt(ii).toString();<br>				//if the character is a letter, look it up in the reverse key, then replace it, preserving case.<br>				if(REFind("[A-Z]",thisChar)){<br>					thisChar = instance.reverseKey[thisChar];<br>				}<br>				else{if(REFind("[a-z]",thisChar)){<br>					thisChar = lcase(instance.reverseKey[thisChar]);<br>				}}<br>				instance.cypheredString.append(thisChar);<br>			}<br>		&lt;/cfscript&gt;<br>		&lt;cfreturn this/&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="getCypher" hint="Get the string in cypher format" access="public" output="false" returntype="string"&gt;<br>		&lt;cfreturn instance.cypheredString.toString()/&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="getKey" hint="Returns the key for this cypher, where the keys are the cyphered versions and the values are the ""real"" versions" access="public" output="false" returntype="struct"&gt;<br>		&lt;cfreturn duplicate(instance.key)/&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="getOriginalString" hint="Get the uncyphered string, as it was passed in" access="public" output="false" returntype="string"&gt;<br>		&lt;cfreturn instance.originalString.toString()/&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="generateKey" access="private" output="false" returntype="void"&gt;<br>		&lt;cfscript&gt;<br>			var ii = 0;<br>			var alphabet = createObject("java","java.lang.StringBuffer").init("ABCDEFGHIJKLMNOPQRSTUVWXYZ");<br>			var thisLetter = "";<br>			var thisKey = "";<br>			var thisIndex = "";<br>			instance.key = structNew();<br>			instance.reverseKey = structNew();<br>			//loop over the ascii equivalents of the upper case alphabet, for each build a key in the struct, then grab a random element out of the alphabetArray and make that the corresponding letter (deleting out of the original alphabet array as we go).<br>			for(ii = 65; ii LTE 90; ii = ii + 1){<br>				thisIndex = randRange(0,alphabet.length()-1);<br>				thisLetter = alphabet.charAt(thisIndex).toString();<br>				thisKey = chr(ii);<br>				instance.key[thisKey] = thisLetter;<br>				instance.reverseKey[thisLetter] = thisKey;<br>				alphabet.deleteCharAt(thisIndex);<br>			}<br>		&lt;/cfscript&gt;<br>		&lt;cfreturn /&gt;<br>	&lt;/cffunction&gt;	<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651474">20</a> by Raymond Camden
		posted on 4/10/2006 at 5:26 PM
		</div>
		<div class="comment_text"><p>Just a quick note - thank you everyone for participating! I hope folks enjoyed it. I'll do another small puzzler this Friday as well.</p></div>
	</div>
</div>
		