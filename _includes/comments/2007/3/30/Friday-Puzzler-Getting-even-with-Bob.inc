
<div class="comment" id="c_1713663694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663694">1</a> by Justice
		posted on 3/30/2007 at 5:16 PM
		</div>
		<div class="comment_text"><p>I know this isnt a specific answer to your question, but in the spirit of this friday puzzler, here is an idea to mess with Bob.  =)</p><p>Create a folder under a mapped path COM called tagLib<br>Make a file under it called a.cfm</p><p>Anywhere you can hide it in his code, add &lt;cfimport taglib="/com/tagLib"&gt;</p><p>Now, for the source of a.cfm:</p><p>&lt;cfif thistag.executionMode eq 'Start'&gt;&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.owned.com%3AKpX1qB5Hi0aRAZnUH96nzayTN6Q&amp;cuid=3321886" rel="nofollow noopener" title="www.owned.com">www.owned.com</a>"&gt;&lt;/cfif&gt;<br>&lt;cfif thistag.executionMode eq 'End'&gt;&lt;/a&gt;&lt;/cfif&gt;</p><p>Now watch him rip his (thinning) hair out trying to figure out why his simple non-coldfusion &lt;a href&gt; tags are being re-written.  =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663697">2</a> by Torgo
		posted on 3/30/2007 at 5:33 PM
		</div>
		<div class="comment_text"><p>This is my first time trying out one of the puzzlers.  hmm...</p><p>&lt;cffunction name="confusinator" returntype="string" hint="Removes random letters from all words in a string that are not contained within HTML tags"&gt;<br>	&lt;cfargument name="theString" required="yes" type="string"&gt;</p><p>	&lt;cfloop condition="find('&lt;', theString, 1) NEQ 0"&gt;<br>		&lt;cfset startPos = find('&lt;', theString, 1)&gt;<br>		&lt;cfset endPos = find('&gt;', theString, startPos) + 1&gt;<br>		&lt;cfset tagLen = endPos - startPos&gt;<br>		&lt;cfset theString = removeChars(theString, startPos, tagLen)&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfset newString = listToArray(theString, " ")&gt;</p><p>	&lt;cfloop index="theWord" from="1" to="#arrayLen(newString)#"&gt;<br>		&lt;cfset stripCount = randRange(1, 3)&gt;<br>		&lt;cfloop from="1" to="#stripCount#" index="i"&gt;<br>		  &lt;cfif len(newString[theWord]) GT 0&gt;<br>				&lt;cfset stripChar = randRange(1, len(newString[theWord]))&gt;<br>				&lt;cfset newString[theWord] = removeChars(newString[theWord], stripChar, 1)&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfset theString = arrayToList(newString, " ")&gt;<br>	&lt;cfreturn theString&gt;</p><p>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663676">3</a> by Torgo
		posted on 3/30/2007 at 5:35 PM
		</div>
		<div class="comment_text"><p>Next time, I'll pay attention.  I deleted all of the HTML tags out of the string.  Oops.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663696">4</a> by Dave Ferguson
		posted on 3/30/2007 at 7:13 PM
		</div>
		<div class="comment_text"><p>This was a fun way to start my Friday.  Here is my contribution.</p><p>code start =======================================</p><p>&lt;CFFUNCTION NAME="tweakoutput" RETURNTYPE="STRING"&gt;<br>	&lt;CFARGUMENT NAME="theString" REQUIRED="YES" TYPE="STRING"&gt;<br>	&lt;CFSCRIPT&gt;		<br>		var theResult = '';<br>		var bodyFound = 0;<br>		var scriptHit = 0;<br>		var randRows = 0;<br>		var theRows = '';</p><p>		total = ListLen(theString, chr(10) &amp; chr(13));<br>		for (i = 1; i lt total; i = i + 1){<br>			thisItem = listGetat(theString, i, chr(10) &amp; chr(13));<br>			if (thisItem does not contain "body" AND NOT bodyFound){<br>				 // we do not want to muck with anyting till we pass the body tag	<br>				theResult = theResult &amp; chr(10) &amp; chr(13) &amp; thisItem;			<br>				continue;<br>			} else {<br>				bodyFound = 1;<br>				if (randRows EQ 0){			<br>					// generate a random row numbers to alter<br>					for (r = 1; r lt 50; r = r + 1){<br>						thisNum = randRange(i, total); <br>						if (listfind(theRows, thisNum)){ <br>							continue; <br>						}<br>						randRows = listAppend(randRows, thisNum);<br>					}				<br>				}<br>			}<br>			if (thisItem contains "&lt;script" AND Thisitem does not contain "/script"){<br>				scriptHit = 1; // we do not want to edit the contents of a script<br>				theResult = theResult &amp; chr(10) &amp; chr(13) &amp; thisItem;<br>				continue;<br>			}<br>			if (scriptHit AND thisItem contains "/script"){<br>				scriptHit = 0; // found end of script;<br>			}		<br>			if (NOT listfind(randRows, i)){<br>				theResult = theResult &amp; chr(10) &amp; chr(13) &amp; thisItem;			<br>				continue;		<br>			}</p><p>			noTags = ReReplaceNoCase(thisItem, "&lt;(.|\n)+?&gt;", " ", "ALL");<br>			if (listLen(noTags, " ")){<br>				 thisWord = ListGetAt(noTags, RandRange(1, listLen(noTags, " ")), " ");<br>				 if (len(thisWord) gt 3){<br>					 newWord = thisWord;<br>					 for(s=1; s lt randRange(1,3); s = s + 1){<br>						newWord = removeChars(newWord, RandRange(1, len(newWord)), 1);<br>					 }<br>					 thisItem = replace(thisItem, thisWord, newWord);<br>				 }<br>			}<br>			theResult = theResult &amp; chr(10) &amp; chr(13) &amp; thisItem;<br>		}	<br>		return theResult;<br>	&lt;/CFSCRIPT&gt;<br>&lt;/CFFUNCTION&gt;</p><p>code end   =======================================</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663698">5</a> by Dave Ferguson
		posted on 3/30/2007 at 7:31 PM
		</div>
		<div class="comment_text"><p>My Bad.  There is a backwards piece if logic.</p><p>Replace this:<br>if (scriptHit AND thisItem contains "/script"){<br>	scriptHit = 0; // found end of script;<br>}</p><p>with this:<br>if (scriptHit AND thisItem DOES NOT contain "/script"){<br>	theResult = theResult &amp; chr(10) &amp; chr(13) &amp; thisItem;<br>	continue;<br>} <br>scriptHit = 0; // found end of script;</p><p>Sorry about that.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663695">6</a> by Matt Osbun
		posted on 3/30/2007 at 7:32 PM
		</div>
		<div class="comment_text"><p>Here's mine.<br>=======================================================<br>&lt;cffunction name="messWithBob" access="public" returntype="string"&gt;<br>	&lt;cfargument name="textToDestroy" required="true" type="string" /&gt;</p><p>	&lt;cfscript&gt;<br>		var regex="&lt;/?\w+((\s+\w+(\s*=\s*(?:"".*?""|'.*?'|[^'""&gt;\s]+))?)+\s*|\s*)/?&gt;";<br>		var arModContent = ArrayNew(1);<br>		var lModContent = REReplaceNoCase(arguments.textToDestroy,regex," ","all");<br>		var killList = "";<br>		var wordstokill = 0;<br>		var numLetters = 0;<br>		var newWord = "";	<br>	&lt;/cfscript&gt;</p><p>	&lt;cfloop list="#lModContent#" index="i" delimiters=" "&gt;<br>		&lt;cfif Len(Trim(i))&gt;<br>			&lt;cfset ArrayAppend(arModContent,i)&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfif ArrayLen(arModContent) GT 15&gt;<br>		&lt;cfset WordsToKill = RandRange(10,15,"SHA1PRNG")&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset WordsToKill = RandRange(1,ArrayLen(arModContent),"SHA1PRNG")&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfloop from="1" to="#WordsToKill#" index="j"&gt;<br>		&lt;cfset killWord = RandRange(1,ArrayLen(arModContent),"SHA1PRNG")&gt;<br>		&lt;cfif NOT ListFindNoCase("cylon,borg",arModContent[killword])&gt;<br>			&lt;cfset numLetters = RandRange(1,3,"SHA1PRNG")&gt;<br>			&lt;cfset newWord = arModContent[killword]&gt;<br>			&lt;cfloop from="1" to="#numLetters#" index="i"&gt;<br>				&lt;cfset newWord = RemoveChars(arModContent[killword],RandRange(1,Len(arModContent[killword]),"SHA1PRNG"),1)&gt;<br>				&lt;cfif Len(newWord) LT (numLetters - i)&gt;<br>					&lt;cfbreak&gt;<br>				&lt;/cfif&gt;		<br>			&lt;/cfloop&gt;<br>			&lt;cfset arguments.textToDestroy = Replacenocase(arguments.textToDestroy,arModContent[killword],newWord)&gt;	<br>		&lt;cfelse&gt;<br>			&lt;cfset arguments.textToDestroy = Replacenocase(arguments.textToDestroy,arModContent[killword],"Dalek","all")&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfreturn arguments.textToDestroy /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663699">7</a> by Cozmo
		posted on 3/30/2007 at 10:12 PM
		</div>
		<div class="comment_text"><p>&lt;B&gt;Justice&lt;/B&gt;<br>That was one of the most delightfully evil things I have ever seen.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663700">8</a> by Raymond Camden
		posted on 3/31/2007 at 12:31 AM
		</div>
		<div class="comment_text"><p>yeah, I think Justice wins, even though it isn't the real answer. ;) Good responses all though. Shall we mess with Bob again next week as well?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663701">9</a> by Mike Kear
		posted on 4/2/2007 at 5:10 AM
		</div>
		<div class="comment_text"><p>What worries me about this Ray, is that you are the source of so much of the code that people use around the ColdFusion community.</p><p>This isnt to be a "feature" in the next version of Blog.cfc is it??</p><p>Is "Bob" really a code name for "Those mugs in the CF world who dont write their own code but sponge off me instead"??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663690">10</a> by Raymond Camden
		posted on 4/2/2007 at 5:03 PM
		</div>
		<div class="comment_text"><p>It is all part of my master plan. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663704">11</a> by Justice
		posted on 4/3/2007 at 5:13 PM
		</div>
		<div class="comment_text"><p>I vote we mess with Bob some more next week.  =)  It makes it all so much better that I work with a guy named Bob, and I need ways to mess with him!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663705">12</a> by Dan Sorensen
		posted on 4/6/2007 at 8:36 PM
		</div>
		<div class="comment_text"><p>I know this comment is a week late...</p><p>However, I like 'messing with Bob' because ironically you have to understand quite a bit of CF to see what's really going on with these fun little exercises.</p><p>Justice's entry is the kind of evil that would happen in Spy vs. Spy (if they were programmers). ;-)</p></div>
	</div>
</div>
		