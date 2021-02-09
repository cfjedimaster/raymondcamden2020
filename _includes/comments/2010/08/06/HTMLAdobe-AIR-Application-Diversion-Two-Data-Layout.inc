
<div class="comment" id="c_1713725860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725860">1</a> by Hatem Jaber
		posted on 8/7/2010 at 2:12 AM
		</div>
		<div class="comment_text"><p>Does this not work:</p><p>[code]<br>&lt;xsl:stylesheet version="1.0" xmlns:xsl="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2FXSL%2FTransform%3ASYrxbYQeNd53Zij5_1EYieiw088&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/XSL/Transform">http://www.w3.org/1999/XSL/...</a>"&gt;</p><p>&lt;xsl:template match="/"&gt; <br>&lt;xsl:variable name="res" select="//Result" /&gt;<br>  &lt;h2&gt;Traffic Report&lt;/h2&gt; <br>    &lt;table border="1" width="100%"&gt; <br>      &lt;tr bgcolor="#9acd32"&gt; <br>	  	&lt;th&gt;Type&lt;/th&gt;<br>        &lt;th&gt;Incident&lt;/th&gt; <br>      &lt;/tr&gt; <br>      &lt;xsl:for-each select="$res"&gt; <br>      &lt;tr&gt; <br>	  	&lt;td&gt;&lt;xsl:value-of select="@type"/&gt;&lt;/td&gt;<br>        &lt;td&gt;&lt;xsl:value-of select="Title"/&gt;&lt;/td&gt; <br>	  &lt;/tr&gt;<br>	  &lt;tr bgcolor="yellow"&gt;<br>        &lt;td colspan="2"&gt;<br>        	&lt;xsl:value-of select="Description"/&gt;<br>			&lt;br/&gt;&lt;b&gt;Severity:&lt;/b&gt; &lt;xsl:value-of select="Severity" /&gt;<br>		&lt;xsl:choose&gt;<br>          &lt;xsl:when test="Severity='1'"&gt;<br>          	Not very<br>          &lt;/xsl:when&gt;<br>          &lt;xsl:when test="Severity='2'"&gt;<br>          	Mildly Annoying<br>          &lt;/xsl:when&gt;<br>          &lt;xsl:when test="Severity='3'"&gt;<br>          	Annoying<br>          &lt;/xsl:when&gt;<br>          &lt;xsl:when test="Severity='4'"&gt;<br>          	Pain in the Rear<br>          &lt;/xsl:when&gt;<br>          &lt;xsl:when test="Severity='5'"&gt;<br>          	You ain't going nowhere<br>          &lt;/xsl:when&gt;<br>          &lt;xsl:otherwise&gt;<br>          	Unknown. Consult Fringe department.<br>          &lt;/xsl:otherwise&gt;<br>        &lt;/xsl:choose&gt;<br>		&lt;/td&gt; <br>      &lt;/tr&gt; <br>      &lt;/xsl:for-each&gt; <br>    &lt;/table&gt; <br>&lt;/xsl:template&gt; <br>&lt;/xsl:stylesheet&gt;<br>[/code]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725859">2</a> by Raymond Camden
		posted on 8/7/2010 at 2:32 AM
		</div>
		<div class="comment_text"><p>I'm sorry what? You just posted a large XSL sheet w/ no explanation as to why and what - if anything - doesn't work. Please use pastebin in the future for large blocks of code. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725856">3</a> by Hatem Jaber
		posted on 8/9/2010 at 7:11 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>In reference to the //*[local-name()='....'], you can eliminate that entirely by creating a variable:</p><p>&lt;xsl:variable name="res" select="//Result" /&gt; and placing it after the &lt;xsl:template match="/"&gt;</p><p>In your for-each loop you would do this:</p><p>&lt;xsl:for-each select="$res"&gt;</p><p>and than for each node you would just refer to the name for example:</p><p>&lt;xsl:value-of select="Title"/&gt;<br>&lt;xsl:when test="Severity='1'"&gt;</p><p>this is how i've done the xml/xsl transforms in the past and it should work for this case as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725862">4</a> by Raymond Camden
		posted on 8/9/2010 at 7:13 PM
		</div>
		<div class="comment_text"><p>Very interesting. But - are you saying it works w/o using local-name? What I mean is- don't you need local-name still when you make the variable? Did you test and it worked ok? (My source code isn't near me - sorry.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725846">5</a> by Hatem Jaber
		posted on 8/9/2010 at 7:14 PM
		</div>
		<div class="comment_text"><p>This is how i've transformed docs when doing code gen, i've done quite a bit of xml/xsl transforms and never used local-name() in the way that you did. I have been trying to test it on this but for some reason i'm not getting traffic reports with your code or mine, not sure if i missed something when creating the project on my end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725867">6</a> by Raymond Camden
		posted on 8/9/2010 at 7:17 PM
		</div>
		<div class="comment_text"><p>Try the address embedded here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flocal.yahooapis.com%2FMapsService%2FV1%2FtrafficData%3Fappid%3DYdnDemo%26street%3D701%2BFirst%2BAve%26city%3DSunnyvale%26state%3DCA%3As0OZxR-JpC3d_-TiZBLe0nbCer8&amp;cuid=3321886" rel="nofollow noopener" title="http://local.yahooapis.com/MapsService/V1/trafficData?appid=YdnDemo&amp;street=701+First+Ave&amp;city=Sunnyvale&amp;state=CA">http://local.yahooapis.com/...</a></p><p>I think your _idea_ will work, but I think when you make the variable you will need to use local-name.</p><p>Either way - if this works, it will go a long way to cleaning up the XSL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725864">7</a> by Raymond Camden
		posted on 8/9/2010 at 7:17 PM
		</div>
		<div class="comment_text"><p>Ugh, my darn blog kinda hid the URL:</p><p>street=701+First+Ave&amp;city=Sunnyvale&amp;state=CA</p></div>
	</div>
</div>
		