
<div class="comment" id="c_1713673993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673993">1</a> by todd sharp
		posted on 11/7/2007 at 7:40 PM
		</div>
		<div class="comment_text"><p>Coolness!</p><p>Here's a client side solution using JavaScript for those who may want to do the same:</p><p>&lt;html&gt;<br>&lt;head&gt;<br>&lt;script&gt;<br>getLabels = function(){<br>	var labels = document.getElementsByTagName('a');<br>	var container = document.getElementById('linkLabels');<br>	for(var i = 0; i&lt;labels.length; i++){<br>	container.innerHTML += labels[i].innerHTML + '&lt;br /&gt;';<br>	}<br>}<br>&lt;/script&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>&lt;p&gt;<br>This is some text. It is true that &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Az62k3PiARI51d8u5PVuObV9SJJI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cnn.com">http://www.cnn.com</a>"&gt;Harry Potter&lt;/a&gt; is a good<br>magician, but the real &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%3ASnQdkTPhxh9LZ0EYImp7Dl7Dx-o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com">http://www.coldfusionjedi.com</a>"&gt;question&lt;/a&gt; is how he would stand up<br>against Godzilla. That is what I want to &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>"&gt;see&lt;/a&gt; - a Harry Potter vs Godzilla<br>grudge match. Harry has his wand, Godzilla has his &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfsilence.com%3Af5qrr2U-6nXr31p7cw0Q4inWa-k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfsilence.com">http://www.cfsilence.com</a>"&gt;breath&lt;/a&gt;, it would<br>be &lt;i&gt;so&lt;/i&gt; cool.<br>&lt;/p&gt;<br>&lt;h1&gt;Link labels:&lt;/h1&gt;<br>&lt;div id="linkLabels"&gt;&lt;/div&gt;<br>&lt;input type="button" name="getLabelBtn" onclick="javascript:getLabels();" value="Get labels!" /&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673994">2</a> by Raymond Camden
		posted on 11/7/2007 at 7:47 PM
		</div>
		<div class="comment_text"><p>Does JS allow you to do a getElementsByTagName - but restrict it to crap inside a specific div/span? Ie, imagine that P was wrapped in div id="content", and I only wanted to scan that.</p><p>Doable?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673999">3</a> by Doug
		posted on 11/7/2007 at 8:02 PM
		</div>
		<div class="comment_text"><p>Those link "labels" are usually called "link text" :-) I had to click through from the goog just to see if that's what you meant.</p><p>On the JS question, if you're using one of the many advanced  JS libraries these days (mootools, jquery, etc), you can target the script using CSS selector notation, so it's very possible to target an element or specific elements within an element based on some pretty complex criteria.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674000">4</a> by todd sharp
		posted on 11/7/2007 at 8:04 PM
		</div>
		<div class="comment_text"><p>Yep.  Instead of document.getElementsByTagName you just reference it as element.getElementsByTagName like so:</p><p>&lt;html&gt;<br>&lt;head&gt;<br>&lt;script&gt;<br>getLabels = function(){<br>	var p = document.getElementById('pContainer');<br>	var labels = p.getElementsByTagName('a');<br>	var container = document.getElementById('linkLabels');<br>	for(var i = 0; i&lt;labels.length; i++){<br>	container.innerHTML += labels[i].innerHTML + '&lt;br /&gt;';<br>	}<br>}<br>&lt;/script&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>&lt;p id="pContainer"&gt;<br>This is some text. It is true that &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Az62k3PiARI51d8u5PVuObV9SJJI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cnn.com">http://www.cnn.com</a>"&gt;Harry Potter&lt;/a&gt; is a good<br>magician, but the real &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%3ASnQdkTPhxh9LZ0EYImp7Dl7Dx-o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com">http://www.coldfusionjedi.com</a>"&gt;question&lt;/a&gt; is how he would stand up<br>against Godzilla. That is what I want to &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>"&gt;see&lt;/a&gt; - a Harry Potter vs Godzilla<br>grudge match. Harry has his wand, Godzilla has his &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfsilence.com%3Af5qrr2U-6nXr31p7cw0Q4inWa-k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfsilence.com">http://www.cfsilence.com</a>"&gt;breath&lt;/a&gt;, it would<br>be &lt;i&gt;so&lt;/i&gt; cool.<br>&lt;/p&gt;<br>&lt;p id="ignoreMe"&gt;There are &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%3ASnQdkTPhxh9LZ0EYImp7Dl7Dx-o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com">http://www.coldfusionjedi.com</a>"&gt;links&lt;/a&gt; in &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>"&gt;here&lt;/a&gt; but they are ignored.&lt;/p&gt;<br>&lt;h1&gt;Link labels:&lt;/h1&gt;<br>&lt;div id="linkLabels"&gt;&lt;/div&gt;<br>&lt;input type="button" name="getLabelBtn" onclick="javascript:getLabels();" value="Get labels!" /&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673997">5</a> by todd sharp
		posted on 11/7/2007 at 8:06 PM
		</div>
		<div class="comment_text"><p>Good point Doug.  Here is the Spry selector reference doc:  <a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Farticles%2Felement_selector%2F%3A2H_AEmQxQ6rOGdLGIYn0rNC6xPo&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/articles/element_selector/">http://labs.adobe.com/techn...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674001">6</a> by Kam
		posted on 11/7/2007 at 8:07 PM
		</div>
		<div class="comment_text"><p>You can call getElementsByTagName() on any instance of a DOM element, so this is valid:</p><p>var foo = document.getElementById("foo");<br>var aInFoo = foo.getElementsByTagName("a");</p><p>Or using jquery, $("#foo a") :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673995">7</a> by Raymond Camden
		posted on 11/7/2007 at 8:11 PM
		</div>
		<div class="comment_text"><p>Nice guys. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673998">8</a> by H Jaber
		posted on 11/7/2007 at 8:14 PM
		</div>
		<div class="comment_text"><p>This regex &lt;[aA].*?&gt;.*?&lt;/[aA]&gt; could also go like this &lt;(a).*?&gt;(.*?)&lt;/\&gt;. By placing the (a) in parenthesis, we can use back referencing to match the closing tag, &lt;/\1&gt; which refers to the (a). Also, placing the (.*?) like so will allow us to access the label without having to use the 2nd loop in your example, that would be back reference \2.</p><p>So we can just do the following: &lt;cfset matches = rereplacenocase(s,"&lt;(a).*?&gt;(.*?)&lt;/\&gt;","\2","ALL")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674004">9</a> by Raymond Camden
		posted on 11/7/2007 at 8:18 PM
		</div>
		<div class="comment_text"><p>HJ - THe problem though is that your code will return ALL the text labels mushed together. It will work fine if there is one link, but not if there are multiple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674002">10</a> by H Jaber
		posted on 11/7/2007 at 8:47 PM
		</div>
		<div class="comment_text"><p>A more complete example:</p><p>&lt;cfset a = arraynew(1)&gt;<br>&lt;cfset start = 1&gt;<br>&lt;cfloop condition="true"&gt;<br>	&lt;cfset match = refindnocase("&lt;(a).*?&gt;(.*?)&lt;/\1&gt;",s,start,true)&gt;<br>	&lt;cfif match.pos[1] eq 0&gt;<br>		&lt;cfbreak&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset start = match.pos[1] + match.len[1]&gt;<br>		&lt;cfset lbl = mid(s,match.pos[3],match.len[3])&gt;<br>		&lt;cfset arrayappend(a,lbl)&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>&lt;cfdump var="#a#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674005">11</a> by James Allen
		posted on 11/7/2007 at 9:15 PM
		</div>
		<div class="comment_text"><p>As an alternative approach to this problem, which works in CF7 (and possibly older versions) here is the type of code I generally use:</p><p>&lt;cfsavecontent variable="s"&gt;<br>This is some text. It is true that &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Az62k3PiARI51d8u5PVuObV9SJJI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cnn.com">http://www.cnn.com</a>"&gt;Harry Potter&lt;/a&gt; is a good<br>magician, but the real &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%3ASnQdkTPhxh9LZ0EYImp7Dl7Dx-o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com">http://www.coldfusionjedi.com</a>"&gt;question&lt;/a&gt; is how he would stand up<br>against Godzilla. That is what I want to &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%3AwWEnJ56Zx1aKjc1BtUIClubPNMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com">http://www.adobe.com</a>"&gt;see&lt;/a&gt; - a Harry Potter vs Godzilla<br>grudge match. Harry has his wand, Godzilla has his &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfsilence.com%3Af5qrr2U-6nXr31p7cw0Q4inWa-k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfsilence.com">http://www.cfsilence.com</a>"&gt;breath&lt;/a&gt;, it would<br>be &lt;i&gt;so&lt;/i&gt; cool.<br>&lt;/cfsavecontent&gt;</p><p>&lt;cfset regEx = "&lt;a[^&gt;]*?&gt;([^&lt;]*?)&lt;/a&gt;"&gt;<br>&lt;cfset matchData = REFindNoCase(regEx,s,0,true)&gt;</p><p>&lt;cfset labels = ArrayNew(1)&gt;</p><p>&lt;cfloop condition="matchData.pos[1] neq 0"&gt;<br>	&lt;cfset labels[ArrayLen(labels)+1] = Mid(s,matchData.pos[2],matchData.len[2])&gt;		<br>	&lt;cfset matchData = REFindNoCase(regEx,s,matchData.len[1] + matchData.pos[1],true)&gt;<br>&lt;/cfloop&gt;</p><p>I didn't know reMatch in CF8 actually returns a list of the data matched, rather than the position and length as in older versions. Very cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674024">12</a> by Lola LB
		posted on 11/8/2007 at 1:04 AM
		</div>
		<div class="comment_text"><p>The code samples are coming in a bit on the small side in Safari 3 - could you jack it up a little bit more? Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674019">13</a> by Raymond Camden
		posted on 11/8/2007 at 1:21 AM
		</div>
		<div class="comment_text"><p>Confirmed. The CSS says this for font:</p><p>  font: 500 1em/1.5em 'Lucida Console', 'courier new', monospace ;</p><p>That makes NO sense to me. 500.. 500 what? Any ideas folks?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674025">14</a> by Steven Levithan
		posted on 11/8/2007 at 2:32 AM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>500 in this case is the font-weight. Most people just set font-weight to "normal" or "bold", but according to spec you could also use "bolder", "lighter", and the numeric values 100 - 900, where 400 is the same as normal, and 700 is the same as bold (see <a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2FREC-CSS1%23font-weight%3AwT6gdGWRaPB6y0nN1dbMtWaNmFk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/REC-CSS1#font-weight">http://www.w3.org/TR/REC-CS...</a> ).</p><p>As for the regex in this post, in will incorrectly match things like "&lt;abbr&gt;LASER&lt;/abbr&gt;...&lt;a&gt;...&lt;/a&gt;" as a single match. You can fix this by changing the leading "&lt;[aA]" to "&lt;[aA]\b". The regex is also quite inefficient, especially with invalid data. One easy change to avoid backtracking pitfalls when the data contains unclosed opening &lt;a&gt; tags would be to change "&lt;[aA]\b.*?&gt;" to "&lt;[aA]\b[^&gt;]*&gt;".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674020">15</a> by Raymond Camden
		posted on 11/8/2007 at 2:35 AM
		</div>
		<div class="comment_text"><p>Steven: Thanks for thew CSS.</p><p>Good catch on &lt;abbr&gt; - but why would you say it is inefficient? If the fix is done like you said \b, are you saying it is still bad?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674022">16</a> by Steven Levithan
		posted on 11/8/2007 at 4:11 AM
		</div>
		<div class="comment_text"><p>Yes, but only if efficiency is an important concern. If you are only working with small amounts of valid data, it won't make much difference either way.</p><p>Basically, in most cases where people use ".*" or ".*?" in a regex, it is not the most efficient way to accomplish their goal since it is not what they really mean (unless they're trying to match until the end of the string or line, in which case the former would be ideal). It works because of backtracking and other regex functionality which compensates for the impreciseness, but that has performance overhead. Take the equivalent patterns "&lt;.*?&gt;" and "&lt;[^&gt;]*&gt;". The latter more accurately describes what is really meant, and will typically be faster as a result (I could break down the actual step processes your average regex engine takes when working with lazy vs. greedy quantification, and get into the nitty-gritty of backtracking and internal engine optimizations, etc., but this is probably not the best place for that). In fact, you might want to change that to "&lt;[^&lt;&gt;]*&gt;" so that when running against input like "&lt;...&lt;...&gt;", it will fail invalid starting positions faster.</p><p>The inner ".*?" in the regex "&lt;a&gt;.*?&lt;/a&gt;" could be significantly optimized using Jeffrey Friedl's "unrolling the loop" pattern. However, that will have some impact on readability, and hence wouldn't be a good tradeoff in simple cases.</p><p>&lt;rant&gt;<br>In any case, although I love ColdFusion, I despise it's implementation of regular expressions ... both the fact that it uses a weak flavor when the more powerful java.util.regex engine underlies, and the dearth of useful regex functions and functionality (pronounced by CF8's lame implementation of REMatch).<br>&lt;/rant&gt;</p><p>Here are a couple ways you could implement this in JavaScript using a single iteration over the string (I'm using "[\S\s]" to match any character because in JavaScript dots don't match newlines like in ColdFusion):</p><p>var match, matches = [];<br>while (match = /&lt;a\b[^&gt;]*&gt;([\S\s]*?)&lt;/a&gt;/gi.exec(input)) {<br>    matches.push(match[1]);<br>}</p><p>-- OR --</p><p>var matches = [];<br>input.replace(/&lt;a\b[^&gt;]*&gt;([\S\s]*?)&lt;/a&gt;/gi, function ($0, $1) {<br>    matches.push($1);<br>});</p><p>In CF, you could do something quite similar using underlying Java objects and methods.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674018">17</a> by Steven Levithan
		posted on 11/8/2007 at 4:18 AM
		</div>
		<div class="comment_text"><p>If anyone tries to run my JavaScript code, they will quickly discover that I forgot to escape my forward slashes inside the regex literals (i.e., "&lt;/a&gt;" should be "&lt;\/a&gt;"). :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674023">18</a> by Steven Levithan
		posted on 11/8/2007 at 5:35 AM
		</div>
		<div class="comment_text"><p>Oh, and James Allen's CF code above is also obviously very similar to the JavaScript code I posted. The main difference is that it has to mid() the match text from the full string each time it finds a link, rather than just using a backreference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674021">19</a> by Johan Steenkamp
		posted on 11/8/2007 at 7:52 AM
		</div>
		<div class="comment_text"><p>If the string content is XHTML then you could also use XML functions:</p><p>&lt;cfset xmlObj = xmlParse("&lt;string&gt;#s#&lt;/string&gt;")/&gt;<br>&lt;cfset arrLinks = xmlSearch(xmlObj,"//*/a")/&gt;</p><p>Now you can get any part of the link you want via XmlText and XmlAttributes of arrLinks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674026">20</a> by James Allen
		posted on 11/8/2007 at 2:10 PM
		</div>
		<div class="comment_text"><p>@Steven:<br>Thanks for your detailed clarifications and suggestions. I didn't realise you could use backreferences like that - very useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674029">21</a> by Emmet
		posted on 11/10/2007 at 11:54 PM
		</div>
		<div class="comment_text"><p>Don't forget <a href="http://disq.us/url?url=http%3A%2F%2Fregexlib.com%3Ao7JwiGuU4eQ5plYx-cmLwyS3AkE&amp;cuid=3321886" rel="nofollow noopener" title="regexlib.com">regexlib.com</a> for regex n00bs like myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674028">22</a> by Steven Levithan
		posted on 11/13/2007 at 10:19 AM
		</div>
		<div class="comment_text"><p>Better yet, forget regexlib and spend time improving your regex skillz. :-P Otherwise, how will you know which of the nearly 100 different email/e-mail regexes currently listed there are a good fit for your needs?</p></div>
	</div>
</div>
		