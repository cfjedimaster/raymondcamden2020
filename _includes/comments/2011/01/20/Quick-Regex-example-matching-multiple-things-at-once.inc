
<div class="comment" id="c_1713729009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729009">1</a> by James Moberg
		posted on 1/21/2011 at 4:38 AM
		</div>
		<div class="comment_text"><p>Are you able to add the ability to identify and flag non-ASCII characters in the regex or would that require an additional step?<br><a href="http://disq.us/url?url=http%3A%2F%2Flifehacker.com%2F5721610%2Fwhy-you-should-avoid-non%2Bascii-characters-in-your-passwords%3APDP4eWabZ09ZJpLnKskbd4cvCuM&amp;cuid=3321886" rel="nofollow noopener" title="http://lifehacker.com/5721610/why-you-should-avoid-non+ascii-characters-in-your-passwords">http://lifehacker.com/57216...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729008">2</a> by cygro
		posted on 1/21/2011 at 11:39 AM
		</div>
		<div class="comment_text"><p>@James: Of course you can.<br>RegEx support character codes by using the \x__ format (where __ is replaced by the Hex-Code of the character, e.g "\x65" equals "A").</p><p>To get all characters with a character code greater than or equal 128 you may use this expression: "[^\x00-\x7F]".<br>Try it out by copy the following line to the Firebug console in Firefox (or the JS-console of any other useful browser): <br>('test ?? and some other characters &gt; x7F').match(/[^\x00-\x7F]/gi)</p><p>In CF: <br>&lt;cfif reFind("[^\x00-\x7F]", "test ?? and some other characters &gt; x7F")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729007">3</a> by cygro
		posted on 1/21/2011 at 11:43 AM
		</div>
		<div class="comment_text"><p>Hey Ray why does your blog does not support Chinese characters? :-(</p><p>Please replace the questionmarks in my comment above by any other characters &gt; x7F, such as ©®¼½¾Øø</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729010">4</a> by Tom Eldredge
		posted on 1/21/2011 at 7:26 PM
		</div>
		<div class="comment_text"><p>The only downside to this is that you cannot tell your user what the problem is, just "I don't like your password."</p><p>PS:  And, if someone tells you they are a RegEx expert, they're probably lying.  I understand the lookahead (and lookback), but still get surprised by some regular expression behaviors.  I've used them since my early days, and there are still things to learn.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729012">5</a> by Raymond Camden
		posted on 1/21/2011 at 7:32 PM
		</div>
		<div class="comment_text"><p>@Tom: Agreed. (To both points. ;)</p><p>@cygro: Sorry about that. It may be a BlogCFC bug. I'll look into it. Cool gravatar btw. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729011">6</a> by cygro
		posted on 1/21/2011 at 9:09 PM
		</div>
		<div class="comment_text"><p>@Tom:<br>Why can't you tell the user what's wrong with the password?<br>By using reReplace(...) with backreferences you could flag the matching characters (for example '&lt;span class="bad-character"&gt;\1&lt;/span&gt;') and display a message to the user. <br>You even can do it in JavaScript.</p><p>What you say about the RegExperts is absolutely true. I know only two so far: Ben Forta and Jeffery Friedl whose book "Mastering Regular Expressions" is my main ressource of RegEx knowledge.</p><p>@Ray: Thanks for the compliment. You may create one for yourself here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.sp-studio.de%2F%3Aa8QZB7LUR0Xe7W9fxJMEamO_r0A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sp-studio.de/">http://www.sp-studio.de/</a> (cool South Park style avatar generator) ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729013">7</a> by Tom Eldredge
		posted on 1/21/2011 at 9:52 PM
		</div>
		<div class="comment_text"><p>@cygro:  Yes, but he's looking for the absence of characters, or no minimum length.  True, if you were looking for "bad characters" you could flag one (or loop through and show all of them), but putting all of the checks into a single "can you find this RegEx" means you don't know WHY it was bad, just that it was not found.</p><p>This may not be a problem, just pointing out a downside.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729015">8</a> by James Moberg
		posted on 1/21/2011 at 11:55 PM
		</div>
		<div class="comment_text"><p>@cygro: Thanks for the non-ASCII regex info.</p><p>When I received the notification via email on my iPhone, the Chinese characters were viewable.  Is it possible that the database sanitized them while the email was sent separately?</p><p>Do you have to add anything to a website's header in order to enable the rendering of these characters?  (I had to do this on a multi-language website I once worked on.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729017">9</a> by Raymond Camden
		posted on 1/22/2011 at 8:18 PM
		</div>
		<div class="comment_text"><p>It's just a simple issue to fix - but my blog here is a bit out of date compared to stock BlogCFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729016">10</a> by LearningCF
		posted on 1/25/2011 at 2:59 AM
		</div>
		<div class="comment_text"><p>I do not think the regular expression you are using is quite correct (but perhaps I've misunderstood something). For one, your requirements say "Must be N characters long", but the regular expression and your long-hand solution allow for 7 or more characters. Secondly, it's possible to create some input strings that pass your long-hand solution, but not your regular expression. Two examples are "aaAbbcc" and "AAAbbaa". I tried changing your regular expression to &lt;cfset regex = "^(?=.{7,})(?=.*[a-z])(?=.*[A-Z]).*$"&gt; and it seemed to more closely match the behavior of your long-hand solution--but I won't guarantee that it's correct! :-)<br>I wrote a sample program to display the results of some tests:<br>&lt;cffunction name="setDebugAbort" access="private" returntype="void" output="false"&gt;<br>	&lt;cfdump var="#arguments#"/&gt;&lt;cfabort&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfset NL="#Chr(13)##Chr(10)#"&gt;</p><p>&lt;cfset testStrings = {<br>	'AAAbbaa' = { valid = true, reason = "Valid" },<br>	'aaAbb' = { valid = false, reason = "&lt; 7 chars" },<br>	'aaAbbcc' = { valid = true, reason = "Valid" },<br>	'9Aa9999' = { valid = true, reason = "Valid" },<br>	'aaaaaaa' = { valid = false, reason = "all lowercase" },<br>	'aAa' = { valid = false, reason = "&lt; 7 chars" },<br>	'AAAAAAA' = { valid = false, reason = "all uppercase" },<br>	'a9aaaaa' = { valid = false, reason = "no uppercase" },<br>	'A9AAAAA' = { valid = false, reason = "no lowercase" },<br>	'9bbbbbb' = { valid = false, reason = "no uppercase" },<br>	'9BBBBBB' = { valid = false, reason = "no lowercase" },<br>	'aA9' = { valid = false, reason = "&lt; 7 chars" },<br>	'9aA' = { valid = false, reason = "&lt; 7 chars" },<br>	'aaaAAA7' = { valid = true, reason = "Valid" },<br>	'9999999' = { valid = false, reason = "no upper or lower" },<br>	'A99a99999' = { valid = true, reason = "Valid" }<br>} /&gt;</p><p>&lt;cfset functionNames = [ "simpleWay", "camdenWay", "anotherWay" ] /&gt;</p><p>&lt;cffunction name="simpleWay" returnType="boolean"&gt;<br>	&lt;cfargument name="test" required="yes" type="string"&gt;<br>	&lt;cfif len(test) gte 7 and reFind("[a-z]", test) and reFind("[A-Z]", test)&gt;<br>		&lt;cfreturn true&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfreturn false&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="camdenWay" returnType="boolean"&gt;<br>	&lt;cfargument name="test" required="yes" type="string"&gt;<br>	&lt;cfset regex = "^.*(?=.{7,})(?=.*\d)(?=.*[a-z])(?=.*[A-Z]).*$"&gt;<br>	&lt;cfif reFind(regex, test)&gt;<br>		&lt;cfreturn true&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfreturn false&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="anotherWay" returnType="boolean"&gt;<br>	&lt;cfargument name="test" required="yes" type="string"&gt;<br>	&lt;cfset regex = "^(?=.{7,})(?=.*[a-z])(?=.*[A-Z]).*$"&gt;<br>	&lt;cfif reFind(regex, test)&gt;<br>		&lt;cfreturn true&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfreturn false&gt;<br>&lt;/cffunction&gt;</p><p>&lt;!--- End Function definitions ---&gt;</p><p>&lt;cfscript&gt;<br>	WriteOutput("&lt;html&gt;" &amp; NL);<br>	WriteOutput("&lt;head&gt;" &amp; NL);<br>	WriteOutput('&lt;style type = "text/css"&gt;' &amp; NL);<br>	WriteOutput('table { border:1px solid black; border-collapse: collapse; }' &amp; NL);<br>	WriteOutput('th { border: 1px solid black; }' &amp; NL);<br>	WriteOutput('td { border: 1px solid black; }' &amp; NL);<br>	WriteOutput('.correct { background-color:green; }' &amp; NL);<br>	WriteOutput('.incorrect { background-color:red; }' &amp; NL);<br>	WriteOutput("&lt;/style&gt;" &amp; NL);<br>	WriteOutput("&lt;/head&gt;" &amp; NL);<br>	WriteOutput("&lt;body&gt;" &amp; NL);<br>	WriteOutput("&lt;table&gt;" &amp; NL);<br>	WriteOutput("&lt;tr&gt;" &amp; NL);<br>	WriteOutput("&lt;th&gt;Test String&lt;/th&gt;" &amp; NL);</p><p>	iter = functionNames.iterator();<br>	while (iter.hasNext()) {<br>		functionName = <a href="http://disq.us/url?url=http%3A%2F%2Fiter.next%3ANHon6ppu6lhZOd091pTLittoaVQ&amp;cuid=3321886" rel="nofollow noopener" title="iter.next">iter.next</a>();<br>		WriteOutput("&lt;th&gt;#functionName#&lt;/th&gt;" &amp; NL);<br>	}<br>	WriteOutput("&lt;/tr&gt;" &amp; NL);</p><p>	for (testString in testStrings) {<br>		correctAnswer = testStrings[testString]["valid"];<br>		reason = testStrings[testString]["reason"];<br>		answers = ArrayNew(1);</p><p>		WriteOutput("&lt;tr&gt;" &amp; NL);<br>		WriteOutput('&lt;td title="#reason#"&gt;#testString#&lt;/td&gt;' &amp; NL);</p><p>		ArrayAppend(answers, simpleWay(testString));<br>		ArrayAppend(answers, camdenWay(testString));<br>		ArrayAppend(answers, anotherWay(testString));</p><p>		answerIterator = answers.iterator();<br>		while (answerIterator.hasNext()) {<br>			answer = <a href="http://disq.us/url?url=http%3A%2F%2FanswerIterator.next%3AHFWdQzP6Gy-22GnSJomb0hdIKy0&amp;cuid=3321886" rel="nofollow noopener" title="answerIterator.next">answerIterator.next</a>();<br>			if (answer EQ correctAnswer) {<br>				WriteOutput('&lt;td class="correct"&gt;#answer#&lt;/td&gt;' &amp; NL);<br>			} else {<br>				WriteOutput('&lt;td class="incorrect"&gt;#answer#&lt;/td&gt;' &amp; NL);<br>			}<br>		}</p><p>		WriteOutput("&lt;/tr&gt;" &amp; NL);<br>	}</p><p>	WriteOutput("&lt;/table&gt;" &amp; NL);<br>	WriteOutput("&lt;/body&gt;" &amp; NL);<br>	WriteOutput("&lt;/html&gt;" &amp; NL);</p><p>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729014">11</a> by Raymond Camden
		posted on 1/25/2011 at 3:03 AM
		</div>
		<div class="comment_text"><p>Are you saying that the regex fails because it allows for &gt;7? If so - that was a miscommunication. I'd never demand -exactly- N characters. I've seen that one time before and it was a royal pain i the rear.</p><p>As to my 'hack' solution, it was just to give you the _idea_ of how I would solve the 'how do I check for N things in one string' solution. I didn't mean for it to be as fully 'locked down' as the regex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729022">12</a> by Raymond Camden
		posted on 1/25/2011 at 3:04 AM
		</div>
		<div class="comment_text"><p>Btw - cfdump supports abort as an argument. No need to write a UDF for it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729026">13</a> by LearningCF
		posted on 1/25/2011 at 3:10 AM
		</div>
		<div class="comment_text"><p>Yes, my CF is probably bad. :-)</p><p>As for the requirements, your first paragraph says:</p><p>Normally this requires a string pass multiple rules:</p><p>    * Must be N characters long<br>    * Must contain lower case characters<br>    * Must container upper case characters</p><p>The part of the regular expression in your solution that I'm talking about is {7,} which means match at least 7 occurrences of the pattern. Since there's no number after the comma you can have as &gt;= 7 characters. If you want to limit it, it would be, for example, {7,11}, which is equivalent to x &gt;= 7 and x &lt;= 11.</p><p>Anyways, just trying to be helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729025">14</a> by Raymond Camden
		posted on 1/25/2011 at 3:17 AM
		</div>
		<div class="comment_text"><p>Yeah - I coulda been more precise. I shoulda said: Must be at least N characters long.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729023">15</a> by LearningCF
		posted on 1/25/2011 at 3:30 AM
		</div>
		<div class="comment_text"><p>Actually, my example erred. All you really need to match is the following:</p><p>&lt;cfset regex = "^(?=.{7,})(?=.*[a-z])(?=.*[A-Z])"&gt;</p><p>The reason for this is that the ?= constructs are look ahead assertions. They consume no characters in the string; they merely return true or false when their assertion is evaluated.</p><p>So, there are 3 separate assertions: Firstly, that the string is 7 or more characters in length. Secondly, that the string contains at least one lower case character in the range a-z, and lastly, that the string contains at least one upper case character in the range A-Z. The original solution also had an assertion that the string contain one or more digits (the \d).</p><p>Once you've got that, there's no need for the .*$, which meant only "match zero or more characters until the end of the line". Anything modified with * is tricky since it always matches, so it often something that can be dispensed with in the regular expression.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729021">16</a> by Raymond Camden
		posted on 1/25/2011 at 3:36 AM
		</div>
		<div class="comment_text"><p>I guess my question is - why in the lookaheads is .* required? To me, I would have written it as</p><p>(?=.{7,})(?=[a-z])(?=[A-Z])</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729027">17</a> by LearningCF
		posted on 1/25/2011 at 3:47 AM
		</div>
		<div class="comment_text"><p>Ah! Good question. The reason for that is when you remove the .*, the assertion is essentially saying that the very next character will be *both* an uppercase letter and a lower-case letter. Since both (?=[a-z]) and (?=[A-Z]) consume no characters, they will both evaluate against the first character of the string, and at best only one will return true. The .* in this context is necessary to allow the assertion to examine the entire string.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729024">18</a> by Raymond Camden
		posted on 1/25/2011 at 3:52 AM
		</div>
		<div class="comment_text"><p>Ok... I don't get that 100%. But I get it maybe 51% which is 51% more than before. :) So thank you!</p></div>
	</div>
</div>
		