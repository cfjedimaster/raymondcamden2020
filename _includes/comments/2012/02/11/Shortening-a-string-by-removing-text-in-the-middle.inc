
<div class="comment" id="c_1713738953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738953">1</a> by Duncan Nisbett
		posted on 2/15/2012 at 12:59 AM
		</div>
		<div class="comment_text"><p>Ray, this blog inspired me to create a JavaScript version of your function. It was a fun little exercise. Thanks for the post!</p><p>function shrinkText(iStr, iLen){<br>    if(!iLen){<br>         var vMaxStr = 50;<br>    } else {<br>         var vMaxStr = iLen;<br>    }<br>    var vStr = iStr.trim();</p><p>    if(vStr.length &lt;= vMaxStr){<br>        return vStr;<br>    }</p><p>    var side = Math.round((vMaxStr-3)/2)-1;</p><p>    return vStr.substr(0,side)+'...'+vStr.substr(vStr.length-side,vStr.length);<br>};</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738955">2</a> by Raymond Camden
		posted on 2/15/2012 at 1:09 AM
		</div>
		<div class="comment_text"><p>Is trim part of JavaScript? I didn't think it was standard yet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738957">3</a> by Duncan Nisbett
		posted on 2/15/2012 at 1:18 AM
		</div>
		<div class="comment_text"><p>A quick bit of research that there will most likely be problems in IE. When I tested it out, I ran it in Firefox 10.0.1. Looks like I'll still be using $.trim() in my applications for a while yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738956">4</a> by Lana
		posted on 4/29/2013 at 3:36 PM
		</div>
		<div class="comment_text"><p>Hi Ray :) While writing my new script, been looking for such snippet in Perl. So I converted this one to Perl. Here is it in case somebody need it.</p><p>sub trim {<br>        my $string = shift;<br>        $string =~ s/^\s+//g;<br>        $string =~ s/\s+$//g;<br>        return $string;<br>} ## end sub trim</p><p>sub shrink_anchor {<br>        my $string    = shift;<br>        my $maxlength = shift;<br>        my $separator = shift;</p><p>        if ( length($string) &lt;= $maxlength ) {<br>                return $string;<br>        } else {<br>                my $side = int( ( $maxlength - length($separator) ) / 2 );<br>                $string = trim( substr( $string, 0, $side ) ) . $separator . trim( substr( $string, length($string) - $side, length($string) ) );<br>        }</p><p>        return $string;<br>} ## end sub shrink_anchor</p><p>#usage:<br>$str = "While checking my email on my phone yesterday, I took note of how GMail will shorted labels in the top level display.";<br>print shrink_anchor($str, 50, '...');<br>While checking my email...the top level display.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738954">5</a> by Raymond Camden
		posted on 4/29/2013 at 6:08 PM
		</div>
		<div class="comment_text"><p>Nice. I began my 'web app' career doing Perl CGI scripts.</p></div>
	</div>
</div>
		