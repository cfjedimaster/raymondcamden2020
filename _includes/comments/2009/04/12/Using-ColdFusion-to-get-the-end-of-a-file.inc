
<div class="comment" id="c_1713714630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714630">1</a> by Mark Stephens
		posted on 4/14/2009 at 6:01 PM
		</div>
		<div class="comment_text"><p>What about using the linux tail command via CFEXECUTE, this works fine with very large files..</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.computerhope.com%2Funix%2Futail.htm%3A5W2JXh67U2per4AkbWDEGZFkH6A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.computerhope.com/unix/utail.htm">http://www.computerhope.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714636">2</a> by Raymond Camden
		posted on 4/14/2009 at 6:03 PM
		</div>
		<div class="comment_text"><p>Won't work tell well on Windows. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714635">3</a> by JC
		posted on 4/16/2009 at 1:59 AM
		</div>
		<div class="comment_text"><p>The code I use for one app is basically this (with foo being the file and crlf being a line break):</p><p>#listgetat(foo,listlen(foo,crlf),crlf)#</p><p>but didn't CF8 add some new functions that are better for this?</p><p>FileOpen()<br>FileRead()<br>FileReadLine()<br>FileIsEOF()<br>FileClose()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714634">4</a> by Srinivas
		posted on 12/7/2011 at 12:31 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You saved again so much time.<br>Pls post in <a href="http://disq.us/url?url=http%3A%2F%2FCFLib.org%3AWOdcErJNG97LPvefvtc2ezLtDsI&amp;cuid=3321886" rel="nofollow noopener" title="CFLib.org">CFLib.org</a></p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714637">5</a> by Raymond Camden
		posted on 12/7/2011 at 12:54 AM
		</div>
		<div class="comment_text"><p>In CF9 you do not need this anymore. We added fileSeek().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714633">6</a> by Oye
		posted on 3/7/2012 at 7:24 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Below error I am getting in CFMX 6.1.<br>When I dump rafile, seek method is there but not invoking.Any clues.</p><p>The selected method seek was not found.</p><p>Either there are no methods with the specified method name and argument types, or the method seek is overloaded with arguments types that ColdFusion can't decipher reliably. If this is a Java object and you verified that the method exists, you may need to use the javacast function to reduce ambiguity.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714632">7</a> by Raymond Camden
		posted on 3/7/2012 at 7:47 PM
		</div>
		<div class="comment_text"><p>Maybe your JRE is old enough to not include the Seek method. Best I can recommend is check your JRE version and then check the JavaDocs for that.</p></div>
	</div>
</div>
		