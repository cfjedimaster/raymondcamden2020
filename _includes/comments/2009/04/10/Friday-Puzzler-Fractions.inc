
<div class="comment" id="c_1713714607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714607">1</a> by Dave Babbitt
		posted on 4/10/2009 at 5:40 PM
		</div>
		<div class="comment_text"><p>Does orbiting a planet count as being on that planet? ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714612">2</a> by Rick O
		posted on 4/10/2009 at 5:43 PM
		</div>
		<div class="comment_text"><p>function reduceFraction(a,b) {<br>  if(a gt b) throw("omgwtf");<br>  var c = b / a;<br>  if(int(c) eq c) return (a/c) &amp; "/" &amp; (b/c);<br>  return "";<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714609">3</a> by Raymond Camden
		posted on 4/10/2009 at 5:44 PM
		</div>
		<div class="comment_text"><p>Love the error message Rick. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714598">4</a> by Prasanth
		posted on 4/10/2009 at 5:47 PM
		</div>
		<div class="comment_text"><p>Please see my solution. This may not be a good one.</p><p>&lt;cfset a = 50&gt;<br>&lt;cfset b = 50&gt;</p><p>&lt;cfif a GT b&gt;<br>	&lt;cfthrow message="a cannot be greater than b"&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfif a EQ b&gt;<br>	&lt;cfoutput&gt;1&lt;/cfoutput&gt;<br>	&lt;cfabort&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfif (b MOD a) EQ 0&gt;<br>	&lt;cfoutput&gt;1/#b/a#&lt;/cfoutput&gt;<br>&lt;cfelse&gt;<br>	&lt;cfoutput&gt;Not a perfect fraction&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714613">5</a> by Rick O
		posted on 4/10/2009 at 5:49 PM
		</div>
		<div class="comment_text"><p>Oh blarg.  Strike that entry.  It doesn't do anything like what you asked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714611">6</a> by Scott Stroz
		posted on 4/10/2009 at 5:50 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="stupidFractionThing"&gt;<br>	&lt;cfargument name="m" type="numeric" required="true" /&gt;<br>	&lt;cfargument name="n" type="numeric" required="true" /&gt;<br>	&lt;cfset var ret = "" /&gt;<br>	&lt;cfset var check = 0 /&gt;<br>	&lt;cfif n EQ 0&gt;<br>		&lt;cfthrow message="Silly developer, you can't divide by zero" /&gt; <br>	&lt;/cfif&gt;<br>	&lt;cfif m GT n&gt;<br>		&lt;cfthrow message="You can't do that because Ray said not to allow it."&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfset check = 100/((m/n) * 100) /&gt;<br>	&lt;cfif check EQ int(check)&gt;<br>		&lt;cfset ret = "1/"&amp;check /&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfreturn ret /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714605">7</a> by Peter Mattes
		posted on 4/10/2009 at 5:56 PM
		</div>
		<div class="comment_text"><p>Is that what you mean?<br>&lt;cfscript&gt;<br>arrVorlage=array(array("2","4"),array("3","9"),array("5","25"));<br>for(a=1; a lte arraylen(arrVorlage);a++){<br> writeoutput("(#arrVorlage[a][1]#,#arrVorlage[a][2]#)==#fractions(arrVorlage[a][1],arrVorlage[a][2])#&lt;br&gt;");<br>}<br>function fractions(m,n){<br>	var f=0;<br>	var returnvalue="0";<br>	if(m gt n) return returnvalue;<br>	if(n mod m neq 0) return returnvalue;<br>	f=n/m;<br>	return "1/#f#";</p><p>}</p><p>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714606">8</a> by Raymond Camden
		posted on 4/10/2009 at 5:58 PM
		</div>
		<div class="comment_text"><p>@Peter: That array() function - isn't that Railo only?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714616">9</a> by Rick O
		posted on 4/10/2009 at 6:07 PM
		</div>
		<div class="comment_text"><p>function factors(n) {<br>  // return a structure of the factors of the number<br>  var i = 2;<br>  var f = structNew();<br>  while(i lte n) {<br>    if((n mod i) eq 0) {<br>      n = n / i;<br>      if(not structKeyExists(f,i)) f[i] = 0;<br>      f[i] = f[i] + 1;<br>      i = 1;<br>    }<br>    i = i + 1;<br>  }<br>  return f;<br>}</p><p>function combineFactors(s) {<br>  // recombine the factors into the reduced number<br>  var r = 1;<br>  var k = "";<br>  for (k in s) {<br>    r = r * (k ^ s[k]);<br>  }<br>  return r;<br>}</p><p>function reduceFraction(a, b) {<br>  var f = factors(a);<br>  var g = factors(b);<br>  var k = "";<br>  var c = 0;<br>  for(k in f) {<br>    if(structKeyExists(g,k)) {<br>      // eliminate common factors<br>      c = min(f[k], g[k]);<br>      f[k] = f[k] - c;<br>      g[k] = g[k] - c;<br>    }<br>  }<br>  a = combineFactors(f);<br>  b = combineFactors(g);<br>  return a &amp; "/" &amp; b;<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714614">10</a> by Ron
		posted on 4/10/2009 at 6:08 PM
		</div>
		<div class="comment_text"><p>Ray, does the function need to deal with cases like "(4,10) == 2/5" or just cases where the numerator is 1?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714620">11</a> by Ron
		posted on 4/10/2009 at 6:10 PM
		</div>
		<div class="comment_text"><p>Never mind... just saw Rick's solution. He was thing the same way I was...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714608">12</a> by Raymond Camden
		posted on 4/10/2009 at 6:11 PM
		</div>
		<div class="comment_text"><p>It just needs to handle cases where the numerator is 1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714615">13</a> by Cyborgirl
		posted on 4/10/2009 at 6:14 PM
		</div>
		<div class="comment_text"><p>Probably not the easiest way, but...</p><p>&lt;cfif IsDefined("FORM.submit")&gt;<br>	&lt;cfif FORM.m GT FORM.n&gt;<br>		&lt;p&gt;Error!&lt;/p&gt;<br>		&lt;cfabort&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfif SQR(FORM.n) EQ FORM.m&gt;<br>		&lt;cfoutput&gt;&lt;p&gt;1/#FORM.m#&lt;/p&gt;&lt;/cfoutput&gt;<br>	&lt;cfelse&gt;<br>		&lt;p&gt;Error!&lt;/p&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfif&gt;</p><p>(Assuming there's a form there for numbers m and n.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714621">14</a> by Peter Mattes
		posted on 4/10/2009 at 6:14 PM
		</div>
		<div class="comment_text"><p>Yes array() is railo only; pherhaps openBD,too.<br>But the array() has no effect for the solution.<br>If you need a adobe-like solution. Let it know me ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714619">15</a> by Chris Schofield
		posted on 4/10/2009 at 6:36 PM
		</div>
		<div class="comment_text"><p>Thought I'd give it a try:</p><p>&lt;cffunction name="reduceFraction" access="public" returntype="string"&gt;<br>&lt;cfargument name="m" required="true" type="numeric" /&gt;<br>&lt;cfargument name="n" required="true" type="numeric" /&gt;</p><p>&lt;cfset var numerator = arguments.m /&gt;<br>&lt;cfset var denominator = arguments.n /&gt;<br>&lt;cfset var fraction = "#numerator#/#denominator#" /&gt;<br>&lt;cfset var i = 0 /&gt;<br>&lt;cfset var gcd = 1 /&gt;</p><p>&lt;!--- Throw message if numerator is greater than denominator. CMS ---&gt;<br>&lt;cfif m GT n&gt;<br>	&lt;cfthrow message="(m) cannot be larger than (n)." /&gt;<br>&lt;cfelseif n MOD m EQ 0&gt;<br>	&lt;cfset denominator = n / m /&gt;<br>	&lt;cfset numerator = 1 /&gt;<br>	&lt;cfreturn "#numerator#/#denominator#" /&gt;<br>&lt;/cfif&gt;</p><p>&lt;!--- Find the greatest common denominator. CMS ---&gt;<br>&lt;cfloop from="#numerator#" to="1" index="i" step="-1"&gt;<br>	&lt;cfif numerator MOD i EQ 0 AND denominator MOD i EQ 0&gt;<br>		&lt;cfset gcd = i /&gt;<br>		&lt;cfbreak /&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;</p><p>&lt;cfset numerator = numerator / gcd /&gt;<br>&lt;cfset denominator = denominator / gcd /&gt;</p><p>&lt;cfreturn "#numerator#/#denominator#" /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714622">16</a> by jon messer
		posted on 4/10/2009 at 6:50 PM
		</div>
		<div class="comment_text"><p>function fractionalize(m,n)<br>{<br>	var v = gcd(m,n);</p><p>	if(m&gt;n)<br>		return "not!";<br>	else<br>		return "#m/v# / #n/v#";<br>}</p><p>function gcd(m,n)<br>{<br>	if(m == 0)<br>		return n;<br>	else if(n &lt; m)<br>		return gcd(n,m);<br>	else<br>		return gcd(n mod m, m);<br>}</p><p>i'll admit i stole gcd from one of my own old computer science assignments</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714617">17</a> by Robert Gatti
		posted on 4/10/2009 at 6:52 PM
		</div>
		<div class="comment_text"><p>&lt;cfscript&gt;<br>function math(m,n) {<br>if(m gt n or m lt 1 or m gt 9 or n lt 0 or n gt 9)<br>	r = 'bad input';<br>else if(n mod m eq 0) <br>	r='1/#n/m#';<br>else <br>	r='not whole fraction';<br>return r;<br>}</p><p>for(i = 1; i lte 9; i++)<br>for(j = i; j lte 9; j++)<br>	writeoutput('m=#i#, n=#j#: #math(i,j)#&lt;br&gt;');<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714618">18</a> by Barney
		posted on 4/10/2009 at 7:51 PM
		</div>
		<div class="comment_text"><p>&lt;cfimport prefix="g" taglib="cfgroovy/tags" /&gt;<br>&lt;g:script&gt;<br>variables.reduce = { int n, int d -&gt;<br>  def factor = ((BigInteger) n).gcd(d);<br>  return n / factor + "/" + d / factor;<br>}<br>&lt;/g:script&gt;<br>#<a href="http://disq.us/url?url=http%3A%2F%2Freduce.call%3APolCsQDpPgdB1tfkItt6MLNkFes&amp;cuid=3321886" rel="nofollow noopener" title="reduce.call">reduce.call</a>(2, 4)#&lt;br /&gt;<br>#<a href="http://disq.us/url?url=http%3A%2F%2Freduce.call%3APolCsQDpPgdB1tfkItt6MLNkFes&amp;cuid=3321886" rel="nofollow noopener" title="reduce.call">reduce.call</a>(3, 9)#&lt;br /&gt;<br>#<a href="http://disq.us/url?url=http%3A%2F%2Freduce.call%3APolCsQDpPgdB1tfkItt6MLNkFes&amp;cuid=3321886" rel="nofollow noopener" title="reduce.call">reduce.call</a>(5, 25)#&lt;br /&gt;<br>#<a href="http://disq.us/url?url=http%3A%2F%2Freduce.call%3APolCsQDpPgdB1tfkItt6MLNkFes&amp;cuid=3321886" rel="nofollow noopener" title="reduce.call">reduce.call</a>(49, 98)#&lt;br /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714600">19</a> by Raymond Camden
		posted on 4/10/2009 at 7:53 PM
		</div>
		<div class="comment_text"><p>@Barney:</p><p>Show off.</p><p>;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714599">20</a> by Barney
		posted on 4/10/2009 at 7:57 PM
		</div>
		<div class="comment_text"><p>Bah.  Just because I'd rather use a method that Sun wrote and unit tests instead of my own (likely jacked) code, doesn't mean I'm a showoff.  But if you prefer CFML you can do it like this:</p><p>&lt;cfscript&gt;<br>function reduce(n, d) {<br>	var factor = createObject("java", "java.math.BigInteger").init(n).gcd(createObject("java", "java.math.BigInteger").init(d));<br>	return n / factor &amp; "/" &amp; d / factor;<br>}<br>&lt;/cfscript&gt;</p><p>Such a mess with all those createObject() calls though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714601">21</a> by Teddy R. Payne
		posted on 4/10/2009 at 8:40 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="fractionAsString"&gt;</p><p>	&lt;cfargument name="numerator" <br>		type="numeric"<br>		required="true"&gt;<br>	&lt;cfargument name="denominator" <br>		type="numeric"<br>		required="true"&gt;</p><p>	&lt;cfset var strFraction = "" /&gt;</p><p>	&lt;cfif numerator gt denominator&gt;</p><p>		&lt;cfset strFraction = "Error: Numerator and Denominator do not create a whole fraction." /&gt;</p><p>	&lt;cfelse&gt;</p><p>		&lt;cfif (denominator mod numerator) EQ 0&gt;</p><p>			&lt;cfset strFraction = "1/#numerator mod denominator#" /&gt;</p><p>		&lt;/cfif&gt;</p><p>	&lt;/cfif&gt;</p><p>	&lt;cfreturn strFraction /&gt;</p><p>&lt;/cffunction&gt;</p><p>&lt;cfoutput&gt;<br>#fractionAsString(4,16)#<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714603">22</a> by Teddy R. Payne
		posted on 4/10/2009 at 9:06 PM
		</div>
		<div class="comment_text"><p>10 minute solution:</p><p>&lt;cffunction name="fractionAsString"&gt;</p><p>	&lt;cfargument name="numerator" <br>		type="numeric"<br>		required="true"&gt;<br>	&lt;cfargument name="denominator" <br>		type="numeric"<br>		required="true"&gt;</p><p>	&lt;cfset var strFraction = "" /&gt;<br>	&lt;cfset var isValid = false /&gt;</p><p>	&lt;cfif arguments.denominator eq 0&gt;</p><p>		&lt;cfset strFraction = "Error: Divide by zero." /&gt;</p><p>	&lt;cfelseif abs(arguments.numerator) gt abs(arguments.denominator)&gt;</p><p>		&lt;cfset strFraction = "Error: Numerator and Denominator do not create a whole fraction." /&gt;</p><p>	&lt;cfelse&gt;</p><p>		&lt;cfif (abs(arguments.denominator) mod abs(arguments.numerator)) EQ 0&gt;</p><p>			&lt;!--- If the fraction equals 1 ---&gt;<br>			&lt;cfif (abs(arguments.numerator) mod abs(arguments.denominator)) EQ 0&gt;</p><p>				&lt;cfset strFraction = "1" /&gt;</p><p>			&lt;cfelseif abs(numerator) EQ 1&gt;</p><p>				&lt;cfset strFraction = "1/#abs(arguments.denominator)#" /&gt;</p><p>			&lt;cfelse&gt;</p><p>				&lt;cfset strFraction = "1/#abs(arguments.numerator) mod abs(arguments.denominator)#" /&gt;</p><p>			&lt;/cfif&gt;</p><p>			&lt;cfset isValid = true /&gt;</p><p>		&lt;/cfif&gt;</p><p>	&lt;/cfif&gt;</p><p>	&lt;!--- Add negative sign if either numerator or denominator are negative values ---&gt;<br>	&lt;cfif isValid AND (arguments.numerator LT 0 OR arguments.denominator LT 0)&gt;</p><p>		&lt;cfset strFraction = "-" &amp; strFraction /&gt;</p><p>	&lt;/cfif&gt;</p><p>	&lt;cfreturn strFraction /&gt;</p><p>&lt;/cffunction&gt;</p><p>&lt;cfoutput&gt;<br>[#fractionAsString(6,5)#]&lt;br /&gt;<br>[#fractionAsString(5,6)#]&lt;br /&gt;<br>[#fractionAsString(1,5)#]&lt;br /&gt;<br>[#fractionAsString(5,5)#]&lt;br /&gt;<br>[#fractionAsString(-4,16)#]&lt;br /&gt;<br>[#fractionAsString(0,0)#]&lt;br /&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714602">23</a> by Teddy R. Payne
		posted on 4/10/2009 at 9:09 PM
		</div>
		<div class="comment_text"><p>I will stop here as I see one logic error in my code for handling negative numbers.  -4/-16 = 1/4 not -1/4.</p><p>That is what I get for a 10 minute solution that needed further testing.  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714604">24</a> by Rick O
		posted on 4/10/2009 at 10:01 PM
		</div>
		<div class="comment_text"><p>Barney-</p><p>That's awesome.  I bow before you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714626">25</a> by Teddy R. Payne
		posted on 4/10/2009 at 11:30 PM
		</div>
		<div class="comment_text"><p>Rick,<br>Too funny =)</p><p>I looked briefly at the logic error:</p><p>   &lt;cfif isValid AND (arguments.numerator LT 0 OR arguments.denominator LT 0)&gt;</p><p>Needs to be:</p><p>   &lt;cfif isValid AND (arguments.numerator LT 0 XOR arguments.denominator LT 0)&gt;</p><p>A legit usage of XOR.  Now that is geeky.  =)</p></div>
	</div>
</div>
		