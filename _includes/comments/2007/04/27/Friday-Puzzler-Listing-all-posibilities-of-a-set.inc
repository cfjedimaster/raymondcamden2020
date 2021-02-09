
<div class="comment" id="c_1713664524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664524">1</a> by Tom Litt
		posted on 4/27/2007 at 4:18 PM
		</div>
		<div class="comment_text"><p>This is my first go at entering one of these things, so go easy on me...</p><p>Is it considered cheating to write two UDFs? Have I _way_ overcomplicated things?</p><p>&lt;cffunction name="setfunc" access="public" output="true"&gt;<br>	&lt;cfargument name="SetList" required="yes" type="string"&gt;<br>	&lt;cfargument name="Depth" required="yes" type="numeric" default="1"&gt;<br>	&lt;cfif Arguments.Depth EQ 1&gt;<br>		&lt;cfreturn ListToArray(Arguments.SetList)&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfreturn ArrayCrossJoin(ListToArray(Arguments.SetList),setfunc(Arguments.SetList,Arguments.Depth-1))&gt;<br>	&lt;/cfif&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="ArrayCrossJoin" access="private" output="false"&gt;<br>	&lt;cfargument name="Array1" required="yes" type="array"&gt;<br>	&lt;cfargument name="Array2" required="yes" type="array"&gt;<br>	&lt;cfset var OutputArray = ArrayNew(1)&gt;<br>	&lt;cfset var joinloop = 0&gt;<br>	&lt;cfset var arrayloop = 0&gt;<br>	&lt;cfloop from="1" to="#ArrayLen(Arguments.Array1)#" index="joinloop"&gt;<br>		&lt;cfloop from="1" to="#ArrayLen(Arguments.Array2)#" index="arrayloop"&gt;<br>			&lt;cfset ArrayAppend(OutputArray,Arguments.Array1[joinloop] &amp; Arguments.Array2[arrayloop])&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfreturn OutputArray&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfset ThisList = "A,B,C,D"&gt;<br>&lt;Cfset ThisDepth = 2&gt;</p><p>&lt;cfdump var="#setfunc(ThisList,ThisDepth)#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664525">2</a> by Brian Panulla
		posted on 4/27/2007 at 4:51 PM
		</div>
		<div class="comment_text"><p>I assume recursion is fair game? How's this:</p><p>&lt;cffunction name="getPermutations" output="false" returntype="array"&gt;<br>	&lt;cfargument name="srcArray" type="array" required="true" /&gt;<br>	&lt;cfargument name="destItemlength" type="numeric" required="true" /&gt;<br>	&lt;cfargument name="destArray" type="array" required="false" default="#arrayNew(1)#" /&gt;</p><p>	&lt;cfset var tempArray = arrayNew(1) /&gt;<br>	&lt;cfset var outArray = arrayNew(1) /&gt;</p><p>	&lt;cfset var i = 0 /&gt;<br>	&lt;cfset var j = 0 /&gt;</p><p>	&lt;cfif arguments.destItemLength GT 1&gt;<br>		&lt;!--- Go recursive... set aside the results in a temp array as we build the array returned by this invocation ---&gt;<br>		&lt;cfset tempArray = getPermutations(arguments.srcArray, arguments.destItemLength - 1, arguments.destArray) /&gt;</p><p>		&lt;!--- Build the output array, prepending each of the original items to the items<br>			 in the result of the previous invocation ---&gt;<br>		&lt;cfloop index="i" from="1" to="#arrayLen(arguments.srcArray)#"&gt;<br>			&lt;cfloop index="j" from="1" to="#arrayLen(tempArray)#"&gt;<br>				&lt;cfset arrayAppend(outArray, arguments.srcArray[i] &amp; tempArray[j]) /&gt;<br>			&lt;/cfloop&gt;<br>		&lt;/cfloop&gt;</p><p>	&lt;cfelseif arguments.destItemLength EQ 1&gt;<br>		&lt;!--- The result is just the source array ---&gt;<br>		&lt;cfset outArray = arguments.srcArray /&gt;</p><p>	&lt;cfelse&gt;<br>		&lt;!--- In case the recursion goes awry, don't do anything ---&gt;<br>		&lt;cfset outArray = arguments.destArray /&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfreturn outArray /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664526">3</a> by JohnEric
		posted on 4/27/2007 at 5:55 PM
		</div>
		<div class="comment_text"><p>@Brian - I would hope that recursion is allowed.</p><p>Here's my answer.</p><p>&lt;cffunction name="getCombinations" returntype="array" output="false"&gt;<br>	&lt;cfargument name="originalSet" type="any" required="true" /&gt;<br>	&lt;cfargument name="combinationLen" type="numeric" required="true" /&gt;<br>	&lt;cfargument name="delimiter" type="string" default="," /&gt;</p><p>	&lt;cfscript&gt;<br>		var unCombined = '';<br>		var previousResult = '';<br>		var combinations = arrayNew(1);<br>		var i = 0;<br>		var j = 0;</p><p>		if (isSimpleValue(arguments.originalSet)) {<br>			unCombined = listToArray(arguments.originalSet);<br>		} else if (isArray(arguments.originalSet)) {<br>			unCombined = arguments.originalSet;<br>		}<br>	&lt;/cfscript&gt;</p><p>	&lt;cfif NOT isArray(unCombined)&gt;<br>		&lt;cfthrow errorcode="invalidArg" message="The original set argument must be either an array or a list" /&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfscript&gt;<br>		//Inductive step, n=1<br>		if (arguments.combinationLen EQ 1)<br>			return unCombined;</p><p>		//Solve for step n<br>		for(i=1; i LTE arrayLen(unCombined); i=i+1) {<br>				//Solve for step n-1<br>				previousResult = getCombinations(originalSet=unCombined, combinationLen=arguments.combinationLen-1);<br>				for (j=1; j LTE arrayLen(previousResult); j=j+1) {<br>					arrayAppend(combinations, unCombined[i] &amp; previousResult[j]);<br>				}<br>		}</p><p>		return combinations;<br>	&lt;/cfscript&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664527">4</a> by JohnEric
		posted on 4/27/2007 at 6:00 PM
		</div>
		<div class="comment_text"><p>Oops.  Should have kept the previousResult just before the loop instead of inside it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664535">5</a> by JanVC
		posted on 4/27/2007 at 6:01 PM
		</div>
		<div class="comment_text"><p>Here's my solution:</p><p>&lt;cffunction name="pairGen"&gt;<br>	&lt;cfargument name="chars" required="yes" type="string"&gt;<br>  	&lt;cfargument name="depth" required="yes" type="numeric" default="1"&gt;<br>	&lt;cfset var letters= arguments.chars&gt;<br>	&lt;cfset var pairs= arguments.depth&gt;<br>	&lt;cfset var result=letters/&gt;<br>	&lt;cfset var n = 0/&gt;<br>	&lt;cfset var m = 0/&gt;<br>	&lt;cfset var o = 0/&gt;<br>	&lt;cfset var tmp = ""/&gt;</p><p>	&lt;cfloop index="n" from="1" to="#DecrementValue(pairs)#"&gt;<br>	&lt;cfset tmp = ""&gt;<br>	&lt;cfloop index="m" list="#letters#"&gt;<br>		&lt;cfloop index="o" list="#result#"&gt;<br>			&lt;cfset tmp = ListAppend(tmp,m&amp;o)&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfset result = tmp&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfreturn ListToArray(result)&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfdump var="#pairGen('A,B,C',2)#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664534">6</a> by JohnEric
		posted on 4/27/2007 at 6:16 PM
		</div>
		<div class="comment_text"><p>And here's a non-recursive method.</p><p>&lt;cffunction name="getCombinationsNonRecursive" returntype="array" output="false"&gt;<br>	&lt;cfargument name="originalSet" type="any" required="true" /&gt;<br>	&lt;cfargument name="combinationLen" type="numeric" required="true" /&gt;<br>	&lt;cfargument name="delimiter" type="string" default="," /&gt;</p><p>	&lt;cfscript&gt;<br>		var unCombined = '';<br>		var previousResult = '';<br>		var combinations = arrayNew(1);<br>		var i = 0;<br>		var j = 0;<br>		var k = 0;</p><p>		if (isSimpleValue(arguments.originalSet)) {<br>			unCombined = listToArray(arguments.originalSet, arguments.delimiter);<br>		} else if (isArray(arguments.originalSet)) {<br>			unCombined = arguments.originalSet;<br>		}<br>	&lt;/cfscript&gt;</p><p>	&lt;cfif NOT isArray(unCombined)&gt;<br>		&lt;cfthrow errorcode="invalidArg" message="The original set argument must be either an array or a list" /&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfscript&gt;<br>		previousResult = unCombined;<br>		combinations = previousResult;<br>		for(i=2; i LTE arguments.combinationLen; i=i+1) {<br>			combinations = arrayNew(1);<br>			for (j=1; j LTE arrayLen(unCombined); j=j+1) {<br>				for (k=1; k LTE arrayLen(previousResult); k=k+1) {<br>					arrayAppend(combinations, unCombined[j] &amp; previousResult[k]);<br>				}<br>			}<br>			previousResult = combinations;<br>		}</p><p>		return combinations;<br>	&lt;/cfscript&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664533">7</a> by Rick Osborne
		posted on 4/27/2007 at 6:54 PM
		</div>
		<div class="comment_text"><p>Just for your wtf-of-the-day, here's another way to do it:</p><p>&lt;cffunction name="combinations" returntype="array" output="false" description="Return an array that is all possible combinations of the given input strings"&gt;<br>	&lt;cfargument name="strList" type="string" required="true"&gt;<br>	&lt;cfargument name="intLength" type="numeric" required="true"&gt;<br>	&lt;cfset var result=ArrayNew(1)&gt;<br>	&lt;cfset var Q1=QueryNew("i")&gt;<br>	&lt;cfset var Q0=Q1&gt;<br>	&lt;cfset var i=0&gt;<br>	&lt;cfif Arguments.intLength GT 0&gt;<br>		&lt;cfset Q0=QueryNew("i")&gt;<br>		&lt;cfloop list="#Arguments.strList#" index="i"&gt;<br>			&lt;cfset QueryAddRow(Q0)&gt;<br>			&lt;cfset QuerySetCell(Q0,"i",i,Q0.RecordCount)&gt;<br>		&lt;/cfloop&gt;<br>		&lt;cfset Q=Q0&gt;<br>		&lt;cfloop from="2" to="#Arguments.intLength#" index="i"&gt;<br>			&lt;cfset Q1=Q0&gt;<br>			&lt;cfquery dbtype="query" name="Q"&gt;<br>			SELECT q.i AS i, q1.i AS r<br>			FROM q, q1<br>			ORDER BY q.i, q1.i<br>			&lt;/cfquery&gt;<br>			&lt;cfloop query="Q"&gt;<br>				&lt;cfset QuerySetCell(Q,"i",Q.i &amp; r,CurrentRow)&gt;<br>			&lt;/cfloop&gt;<br>		&lt;/cfloop&gt;<br>		&lt;cfset result=ListToArray(ValueList(Q.i))&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfreturn result&gt;<br>&lt;/cffunction&gt;</p><p>Having the QoQ in a loop instead of just a dynamic QoQ with a bunch of aliased tables is necessary because CF doesn't like joining more than 2 tables.  Similarly, the cfloop after the QoQ is because CF doesn't like doing string concatenation, so we have to do it manually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664532">8</a> by JanVC
		posted on 4/27/2007 at 6:58 PM
		</div>
		<div class="comment_text"><p>@Rick : Awesome... : )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664538">9</a> by Ben Nadel
		posted on 4/27/2007 at 9:41 PM
		</div>
		<div class="comment_text"><p>Here is my solution:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Findex.cfm%3Fdax%3Dblog%3A661.view%3ATq5deq_EtWcHA5MO7y3lxC3IxaA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/index.cfm?dax=blog:661.view">http://www.bennadel.com/ind...</a></p><p>It uses two loops and the MOD operator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664542">10</a> by Raymond Camden
		posted on 4/27/2007 at 10:10 PM
		</div>
		<div class="comment_text"><p>All nice answers guys. I promise next week it will "really" be a 5 minute answer. ;)</p><p>Oh wait - I'll be at cf.Objective. Never mind then. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664536">11</a> by Phil
		posted on 4/27/2007 at 10:14 PM
		</div>
		<div class="comment_text"><p>Here's mine, purely mathematical:</p><p>&lt;cffunction name="getSet" returntype="array" output="false"&gt;<br>	&lt;cfargument name="set" type="string" required="true"&gt;<br>	&lt;cfargument name="length" type="numeric" required="true"&gt;</p><p>	&lt;cfset var rows = ListLen(arguments.set)^arguments.length&gt;<br>	&lt;cfset var result = ArrayNew(1)&gt;<br>	&lt;cfset var wholeNum = rows/ListLen(arguments.set)&gt;</p><p>	&lt;cfloop from="1" to="#rows#" index="i"&gt;<br>		&lt;cfset result[i] = ""&gt;<br>		&lt;cfloop from="1" to="#arguments.length#" index="j"&gt;<br>			&lt;cfset result[i] = result[i] &amp; ListGetAt(arguments.set, Fix(i / (rows/(ListLen(arguments.set)^j))) mod ListLen(arguments.set) + 1)&gt;			<br>		&lt;/cfloop&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfset ArraySort(result,"text")&gt;<br>	&lt;cfreturn result&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfdump var="#getSet('A,B,C',2)#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664537">12</a> by Ben Nadel
		posted on 4/27/2007 at 10:20 PM
		</div>
		<div class="comment_text"><p>@Phil,</p><p>Sweeet, glad to see someone else using the MOD operator. When I see a sequence, the first thing I think is MOD. I was a little surprised that no one else tried it.</p><p>@Ray,</p><p>What fun would 5 minutes be :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664531">13</a> by Phil Duba
		posted on 4/27/2007 at 10:34 PM
		</div>
		<div class="comment_text"><p>@Ben - I saw yours right after I posted mine. I guess it was my engineering background that made me go to a math solution, :).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664539">14</a> by Ben Nadel
		posted on 4/27/2007 at 10:41 PM
		</div>
		<div class="comment_text"><p>@Phil,</p><p>Yeah, I'm engineering too, but computer science (not hard core engineering). The MOD stuff was KILLING me at first. My sequence was always one off. I almost gave up - luckily some Chinese food helped refuel the brain :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664540">15</a> by jason
		posted on 4/28/2007 at 8:54 AM
		</div>
		<div class="comment_text"><p>sorry to interrupt, but can you guys explain mod to a CF newbie?</p><p>thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664543">16</a> by Ben Nadel
		posted on 4/28/2007 at 8:28 PM
		</div>
		<div class="comment_text"><p>Sure thing, MOD is an mathematical operator like * or /. What MOD does is it divides one number into the other and returns what ever remains.</p><p>For example, 7 MOD 2 = 1. 2 divides into 7 three times (2*3=6). After 2 goes into t7 3 times, only 1 is left (7-6=1).</p><p>To say it another way, it's the remainder of one number evenly divided into another number.</p><p>You can never do anything MOD 0 (zero) because numbers cannot be divided by zero. Anthing MOD 1 is zero since 1 evenly divides into any number.</p><p>Does that help at all?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664541">17</a> by Raymond Camden
		posted on 4/28/2007 at 8:40 PM
		</div>
		<div class="comment_text"><p>To follow up on this - one common use of mod is to do something for even odd rows:</p><p>&lt;cfif x mod 2&gt;<br>even<br>&lt;cfelse&gt;<br>odd<br>&lt;/cfif&gt;</p><p>This is useful when looping over a query and doing alternating background colors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664545">18</a> by Elliott Sprehn
		posted on 4/30/2007 at 1:43 PM
		</div>
		<div class="comment_text"><p>I know I'm late to this, but I thought I'd be nice to share my solution so other people who happen to read the entry can see different ways to do it, and share some performance findings as well.</p><p>The results of some benchmarking showed the below results in relation to the permute() solution shown at the end of this post:</p><p>-3x getCombinationsNonRecursive<br>-2x GetPermutations<br>1x  permute<br>2x  getSetOp<br>3x  getSet <br>5x  AllSets<br>10x pairGen</p><p>Such that on average this method was 10x faster than pairGen() and 3x slower than getCombinationsNonRecursive().</p><p>GetPermutations() and getCombinationsNonRecursive() were both very close (~1.5x) and upon inspection look to be O(n) which means the performance difference was likely related to the recursive nature of GetPermutations().</p><p>pairGen() was by far the slowest, however this is probably the result of using lists instead of arrays since CF has to determine the position of the elements of the list by parsing the string each time.</p><p>getSetOp() was just an optimized version of getSet(), done by removing some of the extraneous mathematical logic, which showed to be about twice as fast as getSet() on average.</p><p>[1] <a href="http://disq.us/url?url=http%3A%2F%2Fenfinitystudios.thaposse.net%2Fpersonal%2Fpermutation%2Ftestcase.cfm%3A7tfjI1YXwAebEVQWPtfhsa0ZgZQ&amp;cuid=3321886" rel="nofollow noopener" title="http://enfinitystudios.thaposse.net/personal/permutation/testcase.cfm">http://enfinitystudios.thap...</a></p><p>Anyway, Kudos to JohnEric and Brian Panulla for the awesome O(n) solutions! :)</p><p>&lt;cffunction name="permute" returntype="array" output="false"&gt;<br>    &lt;cfargument name="list" type="string" required="true"&gt;<br>    &lt;cfargument name="len" type="numeric" required="true"&gt;</p><p>    &lt;cfscript&gt;  <br>        var set = listToArray(arguments.list);<br>        var length = arrayLen(set);<br>        var total = length^len;<br>        var result = arrayNew(1);<br>        var shift = total;<br>        var i = 0;<br>        var j = 1;</p><p>        arraySort( set, "text" );<br>        arraySet( result, 1, total, "" );</p><p>        for( i=1; i lte arguments.len; i = i + 1 ) {<br>            shift = shift / length;<br>            for( j=1; j lte total; j = j + 1 ) {<br>                result[j] = result[j] &amp; set[1];<br>                if( not (j mod shift) ) {<br>                    arrayAppend( set, set[1] );<br>                    arrayDeleteAt( set, 1 );<br>                }<br>            }<br>        }</p><p>        return result;<br>    &lt;/cfscript&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664544">19</a> by Rick Osborne
		posted on 5/9/2007 at 1:37 AM
		</div>
		<div class="comment_text"><p>For completeness, I should point out that I was wrong about QoQ not being able to do string concatenation.  It can do it, it's just grumpy about it.</p><p>For qualified table names and columns (table_name.column_name) if you try to do string concatenation the official way you might get the error "Incorrect select column, {whatever} cannot be followed by ||".  The way around this is to wrap the fully-qualified column in parenthesis.</p><p>That is, this generates the error:<br>SELECT q.i || q1.i AS i</p><p>But this does not:<br>SELECT (q.i) || q1.i AS i</p><p>In tests against getCombinationsNonRecursive above, the QoQ version is about 6x-8x slower.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664546">20</a> by vyp
		posted on 6/7/2007 at 1:18 PM
		</div>
		<div class="comment_text"><p>A nice one...</p><p>Was wondering if possible not to show repeating letters..</p><p>Example: A,B,C</p><p>Shows:</p><p>ABC<br>ACB<br>... so on</p><p>and not</p><p>AAA<br>BBB<br>AAC<br>... so on</p><p>Thanks in advance...</p></div>
	</div>
</div>
		