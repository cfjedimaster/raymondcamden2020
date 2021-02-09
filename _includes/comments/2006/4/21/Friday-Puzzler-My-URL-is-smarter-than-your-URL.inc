
<div class="comment" id="c_1713652210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652210">1</a> by Teddy Payne
		posted on 4/21/2006 at 7:26 PM
		</div>
		<div class="comment_text"><p>Are we searchin for the word length in just the &lt;body&gt;?</p><p>If the site has client side scripting, should we exclude anything in &lt;script&gt; and &lt;head&gt; areas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652214">2</a> by Raymond Camden
		posted on 4/21/2006 at 7:34 PM
		</div>
		<div class="comment_text"><p>I think the stuff inside the body would be fine, but to be honest, if all you do is remove all html, I won't care. You know, JavaScript with long variable names must mean you are smart, right? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652212">3</a> by Justin Carter
		posted on 4/21/2006 at 7:34 PM
		</div>
		<div class="comment_text"><p>Totally untested but I had to stay within that 5 mins... :P</p><p>&lt;cffunction name="GetSmartScore"&gt;<br>	&lt;cfargument name="u" type="string" required="yes"&gt;</p><p>	&lt;cfhttp url="#arguments.u"&gt;&lt;/cfhttp&gt;<br>	&lt;cfset content = REReplace(cfhttp.FileContent,"&lt;[.]*&gt;","", "all")&gt;</p><p>	&lt;cfset wordcount = 0&gt;<br>	&lt;cfset letters = 0&gt;</p><p>	&lt;cfloop index="word" list="#content#" delimiters="#chr(32)#"&gt;<br>		&lt;cfset wordcount = wordcount + 1&gt;<br>		&lt;cfset letters = letters + Len(word)&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfreturn letters / wordcount&gt;</p><p>&lt;/cffunction&gt;</p><p>Didn't see Teddy's post before I wrote this, so no fancy regex to exclude stuff outside the body or inside script tags. Should only be a couple of lines to add that though.</p><p>I'll also qualify this simple code by saying its almost 1:30am ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652213">4</a> by Raymond Camden
		posted on 4/21/2006 at 8:08 PM
		</div>
		<div class="comment_text"><p>Typo in your cfhttp call. Once fixed, I wrote this code to test it:</p><p>NOTE - I added spaces to my url list just so it would wrap on the blog.</p><p>&lt;cfset urls = "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Az62k3PiARI51d8u5PVuObV9SJJI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cnn.com">http://www.cnn.com</a>, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.microsoft.com%3A0d6-NFK56wKkKHF8NFgve5K0tBM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.microsoft.com">http://www.microsoft.com</a>,<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.apple.com%3AW-YLTE3c4p3XyiyRBi3z8Mvd384&amp;cuid=3321886" rel="nofollow noopener" title="http://www.apple.com">http://www.apple.com</a>"&gt;<br>&lt;cfloop index="u" list="#urls#"&gt;<br>	&lt;cfoutput&gt;<br>	The "SmartScore" for #u# is #getSmartScore(u)#&lt;br&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p><p>The results are fun:</p><p>The "SmartScore" for <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Az62k3PiARI51d8u5PVuObV9SJJI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cnn.com">http://www.cnn.com</a> is 20.6005671902<br>The "SmartScore" for <a href="http://disq.us/url?url=http%3A%2F%2Fwww.microsoft.com%3A0d6-NFK56wKkKHF8NFgve5K0tBM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.microsoft.com">http://www.microsoft.com</a> is 34.0781954887<br>The "SmartScore" for <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a> is 12.7126494024<br>The "SmartScore" for <a href="http://disq.us/url?url=http%3A%2F%2Fwww.apple.com%3AW-YLTE3c4p3XyiyRBi3z8Mvd384&amp;cuid=3321886" rel="nofollow noopener" title="http://www.apple.com">http://www.apple.com</a> is 15.4345047923</p><p>Adobe comes in dead last, and MS wins. (Sigh)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652218">5</a> by Rick Osborne
		posted on 4/21/2006 at 8:20 PM
		</div>
		<div class="comment_text"><p>Justin's entry is pretty close to what I would do, however ...</p><p>1. The regex is flawed, in that it encloses a period within brackets, making a character class.  I think he meant to use "&lt;[^&gt;]*&gt;".<br>1a. Also, you probably want to replace tags with spaces, as eliminating the tags altogether might make words run together, such as:<br>one&lt;br/&gt;two&lt;br/&gt;three<br>2. Stripping out extraneous non-human data would only require a few more regexes, placed before the first of course:<br>REReplaceNoCase(Content,".*&lt;body","&lt;body","ONE")<br>REReplaceNoCase(Content,"&lt;/body.*","&lt;/body&gt;","ONE")<br>REReplaceNoCase(Content,"&amp;[##[:alnum:]]+;"," ","ALL")<br>REReplaceNoCase(Content,"[^[:alnum:]]+"," ","ALL")<br>REReplaceNoCase(Content,"[[:space:]]+"," ","ALL")<br>3. Unfortunately, stripping out the content in script and style tags cannot be done in one line with CF's built-in regular expressions, as they don't support non-greedy matching.  If you have a regex replacement (such as my PCRegex CFX tag, *cough*blatantplug*cough*), then the following would work:<br>"&lt;(script|style).+?&lt;/(script|style)[^&gt;]*&gt;"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652217">6</a> by Raymond Camden
		posted on 4/21/2006 at 8:24 PM
		</div>
		<div class="comment_text"><p>Rick, CF does support non greedy regex. It has since 6 I believe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652215">7</a> by Rick Osborne
		posted on 4/21/2006 at 8:34 PM
		</div>
		<div class="comment_text"><p>Incidentally, the scores I get when I add in all of my adjusted regexes are:</p><p>Adobe: 6.05<br>Apple: 5.97<br>MS: 5.76<br>CNN: 4.99</p><p>This seems much more reasonable than the 12-30 range that you got before.  How many 30-letter words do you know?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652220">8</a> by Tom Mollerus
		posted on 4/21/2006 at 9:45 PM
		</div>
		<div class="comment_text"><p>Here's my contribution, written before I looked at the previous comments (although I will admit changing my replacement string to a space instead of nothing per Rick's suggestion). I don't think that all of the header needs to be removed; after all, the contents of the title tag could reasonably be included as page content. I suppose that the full contents between script tags should be removed, though...</p><p>&lt;CFFUNCTION NAME="avgChars"&gt;<br>	&lt;CFARGUMENT NAME="URL" TYPE="string" REQUIRED="yes"&gt;<br>	&lt;CFSET VARIABLES.wordCount = 0&gt;<br>	&lt;CFSET VARIABLES.charCount = 0&gt;</p><p>	&lt;!--- Get the contents of the URL ---&gt;<br>	&lt;CFHTTP URL="#URL#" METHOD="GET" RESOLVEURL="false"&gt;&lt;/CFHTTP&gt;</p><p>	&lt;!--- For each of the words in the result ---&gt;<br>	&lt;CFLOOP INDEX="word" LIST="#ReReplace(CFHTTP.FileContent, '&lt;[^&gt;]*&gt;', ' ', 'ALL')#" DELIMITERS="#Chr(10)##Chr(13)# "&gt;<br>		&lt;!--- Count the words and letters ---&gt;<br>		&lt;CFSET VARIABLES.wordCount = IncrementValue(VARIABLES.wordCount)&gt;<br>		&lt;CFSET VARIABLES.charCount = VARIABLES.charCount + Len(Trim(word))&gt;<br>	&lt;/CFLOOP&gt;</p><p>	&lt;CFRETURN VARIABLES.charCount / VARIABLES.wordCount&gt;<br>&lt;/CFFUNCTION&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652226">9</a> by Rick Osborne
		posted on 4/21/2006 at 10:19 PM
		</div>
		<div class="comment_text"><p>Raymond said: "Rick, CF does support non greedy regex. It has since 6 I believe."</p><p>Ah yes, I had heard about this.  Once I get out of the land of supporting apps on old servers, it'd be nice to get to use all of the wiz-bang new features you hipsters get to use.  You know, little things like "var" scoping.  Sadly, I'm still supporting 4.0 and 4.5 and 5.0 servers ... and still think first in terms of what will work on them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652223">10</a> by Teddy Payne
		posted on 4/22/2006 at 1:13 AM
		</div>
		<div class="comment_text"><p>Ok, work and lunch got in the way of my puzzler submission!</p><p>&lt;cffunction name="HTTPGetSmartScore" returntype="numeric" hint="I return the smart score of the content body."&gt;</p><p>   &lt;cfargument name="strURL" type="string" required="yes"&gt;</p><p>	&lt;cfhttp url="#arguments.strURL#"&gt;&lt;/cfhttp&gt;</p><p>	&lt;cfscript&gt;</p><p>		strContent = cfhttp.FileContent;</p><p>		reScript = "&lt;[\/]?[A-Za-z \=#chr(34)##chr(96)#]*&gt;";<br>		strContent = ReReplace(strContent,reScript,"","ALL");<br>		reScript = "^[ \n\r\t]+?";<br>		strContent = ReReplace(strContent,reScript,"","ALL");<br>		reScript = "[ \n\r\t]+$";<br>		strContent = ReReplace(strContent,reScript,"","ALL");<br>		reScript = "[#chr(10)##chr(13)#]";<br>		strContent = ReReplace(strContent,reScript,"","ALL");</p><p>		intWords = 0;<br>		intLetters = 0;</p><p>		for(i = 1;i LT ListLen(strContent,'#chr(32)#');i = i + 1)<br>		{<br>			intWords = intWords + 1;<br>			intLetters = intLetters + Len(ListGetAt(strContent,i,'#chr(32)#'));<br>		}</p><p>		dblAverage = intLetters / intWords;</p><p>	&lt;/cfscript&gt;</p><p>	&lt;cfreturn dblAverage&gt;</p><p>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652222">11</a> by Tim Blair
		posted on 4/24/2006 at 3:20 PM
		</div>
		<div class="comment_text"><p>A quicker way of work out the average (after you've stripped everything down to just a string of all the words you want to count, no HTML etc) is something like the following:</p><p>&lt;cfset words = arraylen(trim(content).split(chr(32)))&gt;<br>&lt;cfset content = rereplace(content, "[^[:alnum:]]+", "", "ALL")&gt;<br>&lt;cfreturn len(content) / words&gt;</p><p>In other words, work out the total number of words by splitting down to an array and using arraylen() then strip out all non-alpha/numeric characters and use the lengh of that string as the count of letters.</p><p>This method avoids any looping.</p><p>Tim.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652225">12</a> by Teddy Payne
		posted on 4/24/2006 at 6:30 PM
		</div>
		<div class="comment_text"><p>Tim,<br>You are absolutely correct.  If there wasn't a time limit, I would have thought of a more elegant solution for the average.</p><p>An actual more efficient way would be to get the list length of the cfhttp content variable instead of creating an additional array to store the data.</p><p>The memory on the server saved would be negligible, but it would depend on the frequency of use.</p></div>
	</div>
</div>
		