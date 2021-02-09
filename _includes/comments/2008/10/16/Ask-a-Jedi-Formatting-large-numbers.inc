
<div class="comment" id="c_1713709189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709189">1</a> by Rick O
		posted on 10/17/2008 at 6:12 AM
		</div>
		<div class="comment_text"><p>Cheat and fall back on your high school math classes:</p><p>function byteFormat(b) {<br>	var sign = "";<br>	var suffix = "B";<br>	var groups = 0;<br>	if(b lt 0) { sign = "-"; b = -b; }<br>	if(b neq 0) groups = int(int(log10(b)) / 3);<br>	b = round(b / (1000 ^ groups));<br>	if(groups gt 0) suffix = mid("KMGTEP",groups,1) &amp; suffix;<br>	return sign &amp; b &amp; suffix;<br>}</p><p>For extra credit, make a base-1024 version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709182">2</a> by Rick O
		posted on 10/17/2008 at 6:14 AM
		</div>
		<div class="comment_text"><p>Hmm.  I misread your original post and though you were going for byte formatting.  Still, the change to your system is pretty straightforward.  (Suffix starts empty, then the list of suffixes is "KMB", etc.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709190">3</a> by Rick O
		posted on 10/17/2008 at 6:37 AM
		</div>
		<div class="comment_text"><p>Okay, last post.  Really.  Cross my heart.  How about a version that lets you specify not only the base (such as 1000 or 1024) but also the possible suffixes?</p><p>function byteFormat() {<br>	var b = arguments[1];<br>	var base = 1000;<br>	var sign = "";<br>	var suffix = "B";<br>	var groups = 0;<br>	var suffixes = listToArray("B,KB,MB,GB,TB,PB,EB,ZB,YB");<br>	if(not isNumeric(b)) b = 0;<br>	if((arrayLen(arguments) gte 2) and isNumeric(arguments[2])) base = int(arguments[2]);<br>	if((arrayLen(arguments) gte 3) and isArray(arguments[3])) suffixes = arguments[3];<br>	if(b lt 0) { sign = "-"; b = -b; }<br>	if(b neq 0) groups = min(int(log(b) / log(base)),arrayLen(suffixes)-1);<br>	b = round(b / (base ^ groups));<br>	return sign &amp; numberFormat(b) &amp; suffixes[groups+1];<br>	return groups;<br>}</p><p>Tests:</p><p>// negatives work<br>byteFormat(-12345): -12KB</p><p>// zero works<br>byteFormat(0): 0B</p><p>// base-1000 vs base-1024<br>byteFormat(1000): 1KB<br>byteFormat(1000,1024): 1,000B<br>byteFormat(1024,1024): 1KB</p><p>// custom suffixes<br>byteFormat(1024,1024,listToArray("B,KiB")): 1KiB</p><p>// numbers that exceed the list of custom suffixes<br>byteFormat(1234567,1024,listToArray("B,KiB")): 1,206KiB</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709192">4</a> by Steve Withington
		posted on 10/17/2008 at 7:55 AM
		</div>
		<div class="comment_text"><p>Wouldn't something like this be just as easy:</p><p>&lt;cfif x GT "1000000000"&gt;<br>	#x#=#numberformat(x*.000000001, 9.99)#GB<br>	&lt;cfelseif x GT "1000000"&gt;<br>	#x#=#numberformat(x*.000001, 9.99)#MB<br>	&lt;cfelse&gt;<br>	#x#=#numberformat(x*.001, 9)#KB<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709191">5</a> by shag
		posted on 10/17/2008 at 8:36 AM
		</div>
		<div class="comment_text"><p>i'm thinking one of us has misread the post... this is what i came up with... although reading rick's post, i like the array approach as opposed to the case approach i did.<br>--<br>&lt;cfscript&gt;<br>function formatNumberName(value){<br>	var returnVal = "";<br>	var modulus = "";<br>	modulus = len(value) mod 3;<br>	if (modulus eq 0){<br>		modulus = 3;<br>	}<br>	returnVal = round(value/10^(len(value)-modulus));<br>	returnVal = returnVal &amp; NumberName(len(value));<br>	return returnVal;<br>}<br>// used to return the name <br>function NumberName(place){<br>	var returnVal = "";<br>	var modulus = "";<br>	switch(place) {<br>		case 1: case 2: case 3:<br>			returnVal = "";<br>			break;<br>	    case 4: case 5: case 6:<br>	        returnVal = "K";<br>	        break;<br>	    case 7: case 8: case 9:<br>	        returnVal = "M";<br>	        break;<br>	    case 10: case 11: case 12:<br>	        returnVal = "B";<br>	        break;<br>	    default: <br>	    	modulus = place mod 3;<br>			if (modulus eq 0){<br>				modulus = 3;<br>			}<br>	        returnVal = " x 10&lt;SUP&gt;" &amp; place - modulus &amp; "&lt;/SUP&gt;";<br>}<br>return returnVal;<br>}<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		