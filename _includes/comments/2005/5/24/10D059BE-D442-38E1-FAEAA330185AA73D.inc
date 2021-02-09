
<div class="comment" id="c_1713618600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618600">1</a> by jehiah
		posted on 5/25/2005 at 7:19 AM
		</div>
		<div class="comment_text"><p>I ran into the same problem recently when trying to parse &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.crockford.com%2FJSON%2Findex.html%3Aog7ATDAntVyYAhBYgZCaVaBH_jY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.crockford.com/JSON/index.html">http://www.crockford.com/JS...</a>"&gt;JSON&lt;/a&gt; data in ColdFusion. I ended up implementing an almost identical solution in my &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fjehiah.com%2Fprojects%2Fcfjson%2F%3Ajw7BaFvDgRJ0jHcl_6sZkXig9f0&amp;cuid=3321886" rel="nofollow noopener" title="http://jehiah.com/projects/cfjson/">http://jehiah.com/projects/...</a>"&gt;CFJSON&lt;/a&gt; functions where I ignore comma delminators when inside a quoted string.</p><p>... looks like you only deal with double quotes but I'm assuming you could have the same problem with single quotes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618594">2</a> by john ivanoff
		posted on 5/25/2005 at 8:42 AM
		</div>
		<div class="comment_text"><p>like this? (sort of)<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rsscalendar.com%2Frss%2F%3AZTsGFc7XNa9R4FtfsRCUzD401os&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rsscalendar.com/rss/">http://www.rsscalendar.com/...</a><br>it generates a rss feed and can export to ical and outlook. I don't think you can import.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618602">3</a> by rob
		posted on 5/25/2005 at 10:14 AM
		</div>
		<div class="comment_text"><p>This is exactly what i have been trying to do for ages!!!! would you be so nice to release it??</p><p>Thanks for the heads up, thanks man.</p><p>Rob.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618597">4</a> by Nathan Dintenfass
		posted on 5/25/2005 at 10:52 AM
		</div>
		<div class="comment_text"><p>So, only the params side can have colons in quotes?  Why not just get the listLast() of a colon-delimited list to get the "right side" of the colon?</p><p>Then for the params, I'd think it would be cleaner to just do a listToArray, then loop the array looking for quotes, reassembling params based on the existence of quotes inside the array item inside your loop -- then you aren't looping inside of a loop with multiple conditionals.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618595">5</a> by Roland Collins
		posted on 5/25/2005 at 11:57 AM
		</div>
		<div class="comment_text"><p>That's exactly how I approached it Nathan!  It works like a charm.  The benefit is that this method has very few iterations, and properly handles empty parameters and "=" signes inside of parameter values.  Here's the code.  Works like a champ and returns a tidy little structure containing the parameters.  If it doesn't post correctly, I'll email it.</p><p>//The basic idea is that we create an array from the list, ignoring the quotes until<br>//we're rebuilding the parameters.  Only when we have found a new parameter do we worry<br>//about quotes.<br>//<br>//This method has the advantage that it uses a very small number of iterations and realtivley<br>//little string parsing and allocation as ooposed to looping over every character in the string.<br>//<br>//Parameter: s - the *complete* string description in the format: param=val,param=val:Name<br>//Returns: A Struct indexed by parameter name.<br>function getParameters(s) {<br>	var data = ListLast(s, ":");<br>	var paramArray = ListToArray(Left(s, Len(s) - (Len(data) + 1)));<br>	var paramStruct = StructNew();<br>	var paramName = "";<br>	var paramVal = "";<br>	var paramTmp = "";<br>	var inQuote = false;<br>	var i = 1;</p><p>	//Loop over each token in the array.<br>	for (i = 1; i lte ArrayLen(paramArray); i = i + 1) {<br>		paramTmp = paramArray[i];</p><p>		//We know we have a new parameter when we find an "=" sign in the token<br>		//*and* we're not currently in a quoted section.  In theory, "=" is<br>		//perfectly valid inside a value (URLS, for example <a href="http://disq.us/url?url=http%3A%2F%2Fcnn.com%2F%3Ffoo%3D1%29%3A5_u9QZgHwOOaHy22zs9npv3XlEI&amp;cuid=3321886" rel="nofollow noopener" title="http://cnn.com/?foo=1)">http://cnn.com/?foo=1)</a><br>		if (Find("=", paramTmp) and not inQuote) {<br>			if (i is not 1) {<br>				paramStruct[paramName] = Replace(paramVal, """", "", "all");<br>				paramVal = "";<br>			}</p><p>			paramName = ListFirst(paramTmp, "=");<br>			paramVal = ListAppend(paramVal, ListRest(paramTmp, "="));</p><p>			//If this parameter begins with quote, we know to ignore any<br>			//subsequent "=" until the quote has been closed<br>			if (Left(paramVal, 1) is """") inQuote = true;<br>		}<br>		//If we didn't have a new parameter, just append the value to the rest<br>		//of the value string we have compiled since the last new parameter<br>		else {<br>			paramVal = ListAppend(paramVal, paramTmp);</p><p>			//If this parameter ends in a quote, we know we've hit the end of the<br>			//value string, and the next "=" will denote a new parameter<br>			if (Right(paramVal, 1) is """") inQuote = false;<br>		}<br>	}</p><p>	//Catch the results of the last iteration<br>	paramStruct[paramName] = Replace(paramVal, """", "", "all");</p><p>	return paramStruct;<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618598">6</a> by Roland Collins
		posted on 5/25/2005 at 12:04 PM
		</div>
		<div class="comment_text"><p>Oops - there's a harmless extra step in there....when the paramName and paramValue are being reset, it just needs the following:</p><p>paramName = ListFirst(paramTmp, "=");<br>paramVal = ListRest(paramTmp, "=");</p><p>I had an extra ListAppend in there that was harmless, but unnecessary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618603">7</a> by Roland Collins
		posted on 5/25/2005 at 5:03 PM
		</div>
		<div class="comment_text"><p>It was bugging me last night that this could utilize a regex to do the pattern matching, so I revisited it this AM.  Sure enough, regex's do the trick quite nicely, even though the regex required is a beast.  It's debatable whether this code is any easier to follow than the last version I posted.  I'm pretty sure the performance difference between the two is negligible.</p><p>Anyway, here's the same function using RegEx:</p><p>//This function uses regular expressions to parse the string<br>function getParameters(s) {<br>	var data = ListLast(s, ":");<br>	var paramStruct = StructNew();</p><p>	//This regex will match the subsequent params in the string<br>	var regEx = ",\w*(?!"")=""{0,1}[^""]*""{0,1}[,:]{1}";<br>	var i = 1;</p><p>	//The offset is used to compensate for the "," which appears in subsequent<br>	//matches using the regex.  It just simplifies the conditionals a bit.<br>	var offset = 0;<br>	var posStart = 1;<br>	var posNext = 1;</p><p>	//When posStart = 0, we haven't found any more matches<br>	while (posStart neq 0) {<br>		posNext = ReFind(regEx, s, posStart + 1);</p><p>		//If we found another match after this one, parse out the current<br>		if (posNext gt 0)<br>			paramTmp = Mid(s, posStart + offset, posNext - posStart - offset);<br>		//If we didn't find another match after this one, it was the last one<br>		else<br>			paramTmp = Mid(s, posStart + offset, Len(s) - Len(data) - posStart - offset);</p><p>		//Split the name=value pairs<br>		paramStruct[ListFirst(paramTmp, "=")] = Replace(ListRest(paramTmp, "="), """", "", "all");</p><p>		posStart = posNext;<br>		posNext = ReFind(regEx, s, posStart);</p><p>		//This is done to compensate for the comma in all matches other than the first.<br>		offset = 1;<br>	}</p><p>	return paramStruct;<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618599">8</a> by Roland Collins
		posted on 5/25/2005 at 5:09 PM
		</div>
		<div class="comment_text"><p>D'Oh.  I've decided to spam your blog all night.</p><p>J/K.</p><p>Actually, I forgot to remove some test code from that last one.  You don't need the "var i = 0;" declaration, and you don't need the "posNext = ReFind(regEx, s, posStart);" that occurs right before the end of the loop.  It was for testing and is completely redundant.</p><p>Sorry for the blog spam!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618596">9</a> by Raymond Camden
		posted on 5/25/2005 at 6:24 PM
		</div>
		<div class="comment_text"><p>Wow, I go to sleep and lots of comments show up. :)</p><p>Nathan: Sorry - colons can also appear in the value area, if they are also wrapped in quotes. Therefore, to 'split' the string, I need to get the first non-quoted colon. Actually... wait... so the value CAN have a colon and not be wrapped. So - you must find the first non quoted colon and split there.</p><p>I'll be posting the cfc later today. I got the main guts done. I'm now just working on a 'helper' function that translates iCal duration values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618601">10</a> by Roland Collins
		posted on 5/25/2005 at 11:08 PM
		</div>
		<div class="comment_text"><p>Actually Ray, all you need to worry about is the last colon, not any colons in the params/values.  That's why I parsed off the last "data" chunk before splitting on the commas in my first go at this.</p><p>Actually, the more I play with the RegEx version, the more I would personally avoid it and go with the comma-based parsing.  There are too many ways to trick the regex, and building a bullet-proof one is proving to be pretty nasty.  Not to metnion do you really want to have to remember what that thing does when you come back to the code later? (shudder).  The comma-based parsing method that Nathan suggested and I posted seems to be pretty bullet-proof.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618607">11</a> by Raymond Camden
		posted on 5/25/2005 at 11:29 PM
		</div>
		<div class="comment_text"><p>Roland: I disagree. You could have this....</p><p>param=x:my value has a : in it</p><p>In this case, the data is:</p><p>my value has a : in it</p><p>Again, I have to find the first colon that is not in a quote.</p><p>As for Nathan's approach - it makes sense, but I don't see it as any better than mine - just different. In my approach, I search for a string not in quotes to know where to split. But involve "workk" to handle.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618605">12</a> by Roland Collins
		posted on 5/26/2005 at 12:09 AM
		</div>
		<div class="comment_text"><p>I think I'm missing something Ray.  In your original example, you say strings can be formatted like so:</p><p>kidnames="jacon,lynn,noah",foo="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cn.com%3AAigbgHFZTtFl_EXlXIZyxDwYoXA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cn.com">http://www.cn.com</a>":CNN</p><p>This means the generic format is:<br>(comma-separated list of params):(data)</p><p>Is that correct?  If that assumption is correct, then the only significant colon is the last one - you can have as many colons as you want before that last one, and it won't matter because if you parse off the "data" chunk first, you no longer need to worry whether a colon is quoted or unquoted.  That's easily accomplished by a ListLast(s, ":").</p><p>If I'm reading you correct, you're saying you could have a string that looks like this:</p><p>kidnames="jacon,lynn,noah",foo="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cn.com%3AAigbgHFZTtFl_EXlXIZyxDwYoXA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cn.com">http://www.cn.com</a>",param=x:my:CNN</p><p>If you've already parsed off the "data" segment, then the colon in teh param name is completely insignificant.  When parsed, you'd expect:</p><p>Data:<br>   CNN<br>Parameters:<br>   kidnames = jacon,lynn,noah <br>   foo=<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Fboo%3D1%2C2%2C3%26bleh%3D1%2C2%2C3%3Ag_O-H1rerl8nA_CI9AUhGeCnx0k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cnn.com?boo=1,2,3&amp;bleh=1,2,3">http://www.cnn.com?boo=1,2,...</a><br>   param = x:my</p><p>Is this correct, or am I completely misreading your post?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618606">13</a> by Raymond Camden
		posted on 5/26/2005 at 12:16 AM
		</div>
		<div class="comment_text"><p>No, sorry, the format for the "right hand portion" _does_ allow colons as well. So again, you cut things off at the first colon not in quotes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618608">14</a> by Raymond Camden
		posted on 5/26/2005 at 12:17 AM
		</div>
		<div class="comment_text"><p>Here is a sample from the RFC - note the mailto value:</p><p>ATTENDEE;RSVP=TRUE;ROLE=REQ-PARTICIPANT:MAILTO:<br>      jsmith@host.com</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618612">15</a> by Roland Collins
		posted on 5/26/2005 at 12:57 AM
		</div>
		<div class="comment_text"><p>Ohhhhhhhhh.</p><p>Well if you're just looking for the first colon that's not enclosed in quotes, that's easy!  Just use this regex:</p><p>"(?!"".*):(?!.*"")"</p><p>Then you find the first unquoted colon this way:</p><p>pos = ReFind("(?!"".*):(?!.*"")", myString)</p><p>One liner! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618613">16</a> by Roland Collins
		posted on 5/26/2005 at 1:06 AM
		</div>
		<div class="comment_text"><p>Nevermind.  I give up.  I read the RFC and this is perfectly valid too:</p><p>ORGANIZER;SENT-BY:"<a href="http://disq.us/url?url=MAILTO%3Asray%40host.com%3AermuJBQJwZlmD3OI4KZafBtQU6M&amp;cuid=3321886" rel="nofollow noopener" title="MAILTO:sray@host.com">MAILTO:sray@host.com</a>":<a href="http://disq.us/url?url=MAILTO%3Ajsmith%40host.com%3Al_StEda4RLm-lPKihglTg_tNjFw&amp;cuid=3321886" rel="nofollow noopener" title="MAILTO:jsmith@host.com">MAILTO:jsmith@host.com</a></p><p>which breaks the regex. :( I don't know that you're going to get any better than character by character, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618611">17</a> by John Farrar
		posted on 8/3/2008 at 1:29 AM
		</div>
		<div class="comment_text"><p>Any progress on an effective iCal tool?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618610">18</a> by Raymond Camden
		posted on 8/4/2008 at 2:29 PM
		</div>
		<div class="comment_text"><p>Is that to me? If so, I haven't worked on anything ical related in a while.</p></div>
	</div>
</div>
		