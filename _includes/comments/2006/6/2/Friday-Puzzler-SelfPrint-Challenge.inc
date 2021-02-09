
<div class="comment" id="c_1713653738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653738">1</a> by Hilary Bridel
		posted on 6/2/2006 at 3:32 PM
		</div>
		<div class="comment_text"><p>It's called a "Quine"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653760">2</a> by Frank Centinos
		posted on 6/2/2006 at 3:38 PM
		</div>
		<div class="comment_text"><p>The name you're thinking of is "quine".</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FQuine%3AeQgrJfJXWAz7XiO4FBhXqw_LttQ&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Quine">http://en.wikipedia.org/wik...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653740">3</a> by Raymond Camden
		posted on 6/2/2006 at 3:46 PM
		</div>
		<div class="comment_text"><p>Thanks all. Now let's see if someone can build one in CF. It can't be that hard, can it? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653743">4</a> by Justice
		posted on 6/2/2006 at 4:15 PM
		</div>
		<div class="comment_text"><p>Well, I started going down the road of hiijacking the CF error handling, as it shows a few lines of code when an error happens and you have debugging turned on.  Tracked down where this is happening at, and it turns out they are using a java class file reader, so it breaks the rules of not using any file manipulation code.  Dang it, and I thought I was on to something =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653746">5</a> by Kris Brixon
		posted on 6/2/2006 at 4:18 PM
		</div>
		<div class="comment_text"><p>Do you mean something like this:</p><p>&lt;cfif isdefined("showcode")&gt;<br>&lt;cfcontent file="#ExpandPath(CGI.SCRIPT_NAME)#" deletefile="no" type="text/plain"&gt;<br>&lt;cfelse&gt;</p><p>&lt;html&gt;<br>&lt;head&gt;<br>&lt;title&gt;Display content&lt;/title&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;</p><p>&lt;a href="&lt;cfoutput&gt;#CGI.SCRIPT_NAME#&lt;/cfoutput&gt;?showcode=Y"&gt;Show Me The C O D E ! ! ! &lt;/a&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;</p><p>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653745">6</a> by Raymond Camden
		posted on 6/2/2006 at 4:21 PM
		</div>
		<div class="comment_text"><p>Kris, two problems. I said no file operations, and your cfcontent is using one, and secondly, it should print the code automatically, not as a result of a user clicking on something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653748">7</a> by Edward T
		posted on 6/2/2006 at 5:20 PM
		</div>
		<div class="comment_text"><p>Ok, I can't help posting the trivial solution:</p><p>Hello, World.</p><p>Sorry, I'll take a real stab at it after I stomp some fires.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653747">8</a> by Martin
		posted on 6/2/2006 at 5:28 PM
		</div>
		<div class="comment_text"><p>After more than 5 minutes (this can't be done in 5 minutes right?) here's my solution:</p><p>&lt;cfsetting enablecfoutputonly="true" /&gt;</p><p>&lt;cfset sourceCode = '&lt;cfsetting enablecfoutputonly="true" /&gt;</p><p>&lt;cfset sourceCode = ''@@'' /&gt;</p><p>&lt;cfset writeOutput( reReplace( sourceCode, "@{2}", replace( sourceCode, chr(39) &amp; chr(64) &amp; chr(64) &amp; chr(39), chr(39) &amp; chr(39) &amp; chr(64) &amp; chr(64) &amp; chr(39) &amp; chr(39), "ALL" ) ) ) /&gt;' /&gt;</p><p>&lt;cfset writeOutput( reReplace( sourceCode, "@{2}", replace( sourceCode, chr(39) &amp; chr(64) &amp; chr(64) &amp; chr(39), chr(39) &amp; chr(39) &amp; chr(64) &amp; chr(64) &amp; chr(39) &amp; chr(39), "ALL" ) ) ) /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653749">9</a> by Raymond Camden
		posted on 6/2/2006 at 5:38 PM
		</div>
		<div class="comment_text"><p>Edward: Wow. There is nothing wrong with a trivial solution. I think Edward "wins" this one (although I have no prizes ;).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653750">10</a> by Marcos Placona
		posted on 6/2/2006 at 5:49 PM
		</div>
		<div class="comment_text"><p>I think it's more a trick than a solution isn't it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653752">11</a> by Martin
		posted on 6/2/2006 at 5:54 PM
		</div>
		<div class="comment_text"><p>It's still a valid CFML file although it doesn't involve any CFML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653751">12</a> by Raymond Camden
		posted on 6/2/2006 at 5:54 PM
		</div>
		<div class="comment_text"><p>Heh, but this series is meant to be puzzling. A solution is a solution. Although I do want to see if folks can "really" solve it. Martin, your solution didn't work for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653754">13</a> by Raymond Camden
		posted on 6/2/2006 at 5:55 PM
		</div>
		<div class="comment_text"><p>I stand corrected. Stupid me forgot to view source. I think Martin got it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653753">14</a> by Demian
		posted on 6/2/2006 at 6:13 PM
		</div>
		<div class="comment_text"><p>How about this solution?</p><p>&lt;cfset testVar = '&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" /&gt;<br>&lt;title&gt;Untitled Document&lt;/title&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>&lt;p&gt;The current date is: &lt;cfoutput&gt;#DateFormat(Now(), "dd-mmm-yy")#&lt;/cfoutput&gt;&lt;/p&gt;<br>&lt;p&gt;The current time is: &lt;cfoutput&gt;#TimeFormat(Now(), "h:mm:ss tt")#&lt;/cfoutput&gt;&lt;/p&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;' /&gt;<br>&lt;cfsavecontent variable="daSourceCode"&gt;&lt;cfoutput&gt;#testVar#&lt;/cfoutput&gt;&lt;/cfsavecontent&gt;</p><p>&lt;cfoutput&gt;#daSourceCode#&lt;/cfoutput&gt;<br>&lt;cfoutput&gt;#HTMLCodeFormat(daSourceCode)#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653756">15</a> by Raymond Camden
		posted on 6/2/2006 at 6:18 PM
		</div>
		<div class="comment_text"><p>Demian, nope. When you run the file, the result on screen must be the exact same as the source code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653755">16</a> by brian
		posted on 6/2/2006 at 7:51 PM
		</div>
		<div class="comment_text"><p>&lt;cfset source = "&lt;cfset source = ""^""&gt;</p><p>&lt;cfset replacements = StructNew()&gt;<br>&lt;cfset replacements['""'] = '""""'&gt;<br>&lt;cfset replacements['####'] = '########'&gt;<br>&lt;cfset newsource = source&gt;<br>&lt;cfloop collection='##replacements##' item='x'&gt;<br>	&lt;cfset newsource = Replace(newsource,x,replacements[x],'ALL')&gt;<br>&lt;/cfloop&gt;<br>&lt;cfset source = Replace(source,'^',newsource)&gt;</p><p>&lt;cfcontent type='text/plain'&gt;<br>&lt;cfoutput&gt;##source##&lt;/cfoutput&gt;"&gt;</p><p>&lt;cfset replacements = StructNew()&gt;<br>&lt;cfset replacements['"'] = '""'&gt;<br>&lt;cfset replacements['##'] = '####'&gt;<br>&lt;cfset newsource = source&gt;<br>&lt;cfloop collection='#replacements#' item='x'&gt;<br>	&lt;cfset newsource = Replace(newsource,x,replacements[x],'ALL')&gt;<br>&lt;/cfloop&gt;<br>&lt;cfset source = Replace(source,'^',newsource)&gt;</p><p>&lt;cfcontent type='text/plain'&gt;<br>&lt;cfoutput&gt;#source#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653758">17</a> by Edward T
		posted on 6/2/2006 at 8:00 PM
		</div>
		<div class="comment_text"><p>Thanks, Ray, but I don't think it deserves a "win."  I do like playing with boundary conditions.  Marcos, it isn't exactly a "trick" - it's the base case where the CF used is the null set.  There are probably some fun infinite scripts that would also work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653757">18</a> by Eric
		posted on 6/2/2006 at 8:38 PM
		</div>
		<div class="comment_text"><p>It should be noted that the origin of this exercise is the old fear of trusted compilers.</p><p>To wit: with a program that can produce its own source code as its output, one can compile this as a trojan into the current version of the compiler, then remove all reference from it.  This new compiler will continue to reproduce the same trojan when it is used to compile future versions of itself.</p><p>This is a wonky thought, and I don't know if I've explained it coherently, but read this paper (from the Association for Computing Machinery [ACM], circa 1984):<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.acm.org%2Fclassics%2Fsep95%2F%3A6WGwPQVuYagIYb5VPMZo_oEoiJE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.acm.org/classics/sep95/">http://www.acm.org/classics...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653759">19</a> by Tom Chiverton
		posted on 6/9/2006 at 1:02 PM
		</div>
		<div class="comment_text"><p>You should read 'Godel, Escher, Bach' if you enjoy this sort of thing.</p></div>
	</div>
</div>
		