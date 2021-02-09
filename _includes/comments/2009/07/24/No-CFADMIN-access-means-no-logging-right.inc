
<div class="comment" id="c_1713717430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717430">1</a> by Scott Stroz
		posted on 7/24/2009 at 6:55 PM
		</div>
		<div class="comment_text"><p>&lt;shamelessPlug&gt;</p><p>Also, you can use &lt;cflog&gt; and then use Flogr <a href="http://disq.us/url?url=http%3A%2F%2Fflogr.riaforge.org%3AnXzKuwrHZBzU8oFpsHE25xTJIi8&amp;cuid=3321886" rel="nofollow noopener" title="http://flogr.riaforge.org">http://flogr.riaforge.org</a> . There is no need for CFADMIN access, and you can drop Flogr into any directory in any CF8 app and it will just work.</p><p>&lt;/shamelessPlug&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717432">2</a> by Tom Chiverton
		posted on 7/24/2009 at 7:04 PM
		</div>
		<div class="comment_text"><p>In Railo you could replace the default CFLOG implementation with your own one :-)</p><p>P.S. the new theme looks nice, but everything is shifted half a column left in konqueror so all cut off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717433">3</a> by Raymond Camden
		posted on 7/24/2009 at 7:07 PM
		</div>
		<div class="comment_text"><p>@Scott: I'd be worried about logging to the public dir, but as you say (well you did on IM) folks on shared hosting shouldn't expect too much privacy.</p><p>@Tom: It's your fault for using Linux. You aren't contributing to the economy. Get off my site you OS FAN BOI!!! (Sorry....)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717435">4</a> by JC
		posted on 7/25/2009 at 12:04 AM
		</div>
		<div class="comment_text"><p>Don't you need to use a transaction or something to lock the file? I've had file lock issues in the past trying to write text files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717434">5</a> by Raymond Camden
		posted on 7/25/2009 at 12:06 AM
		</div>
		<div class="comment_text"><p>Not that I know of - and you mean cflock. If you were worried though, you could always CFLOCK the call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717428">6</a> by zac spitzer
		posted on 7/25/2009 at 9:02 AM
		</div>
		<div class="comment_text"><p>i've seen bad locking issues with self rolled loggers too</p><p>checkout coldbox's LogBox, can be used standalone from coldbox</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.coldbox.org%2Farchives.cfm%2Fcategory%2Flogbox%3AjjcdFVluDNA5_SUy1HsaQO9WfyY&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.coldbox.org/archives.cfm/category/logbox">http://blog.coldbox.org/arc...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fortus.svnrepository.com%2Fcoldbox%2Ftrac.cgi%2Fwiki%2FcbLogBox%3At40gg5I7fHDKFD_7baVNy-Fv79k&amp;cuid=3321886" rel="nofollow noopener" title="http://ortus.svnrepository.com/coldbox/trac.cgi/wiki/cbLogBox">http://ortus.svnrepository....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717425">7</a> by Raymond Camden
		posted on 7/25/2009 at 11:08 PM
		</div>
		<div class="comment_text"><p>Can you clarify more about 'bad issues'? Also, I'm going to ask some Adobe engineers about file/append, and what's used underneath (to see if we need locking).</p></div>
	</div>
</div>
		