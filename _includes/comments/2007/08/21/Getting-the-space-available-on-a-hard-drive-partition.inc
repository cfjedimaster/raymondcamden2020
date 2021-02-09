
<div class="comment" id="c_1713670699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670699">1</a> by todd sharp
		posted on 8/21/2007 at 10:19 PM
		</div>
		<div class="comment_text"><p>Ben has a way to get this info using the new .NET integration features in CF 8.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.forta.com%2Fblog%2Findex.cfm%2F2007%2F5%2F30%2FGetDriveInfo-UDF-Powered-By-NET%3A3ZeA5shElZC3szlfEC3gS9zPmC0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.forta.com/blog/index.cfm/2007/5/30/GetDriveInfo-UDF-Powered-By-NET">http://www.forta.com/blog/i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670696">2</a> by Cliff Pearson
		posted on 8/22/2007 at 2:51 PM
		</div>
		<div class="comment_text"><p>I've used the Java GetTotalSpace method you describe to successfully create a system called 'ServerWatch', which my main client uses to monitor the disc space on their production servers - it does exactly what it says on the tin!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670694">3</a> by Boyan
		posted on 8/25/2007 at 3:38 AM
		</div>
		<div class="comment_text"><p>It might be worth mentioning that for those of us not using CF8 and not upgrading to jre 6, this could be done with a simple .net web service (assuming of course that you are using a windows web server with .net installed). There might be just too many assumptions for this post :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670695">4</a> by Patrick
		posted on 12/22/2007 at 5:58 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>i tried this example on my local system. I'm running CF8 on Leopard. And it tells me that there is no method getFreeSpace(). So i dumped the var fileOb and it's right. There are none of the methods you called. Any idea, why I don't have this methods?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670698">5</a> by Raymond Camden
		posted on 12/22/2007 at 6:24 PM
		</div>
		<div class="comment_text"><p>Are you using Java 6?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670697">6</a> by Patrick
		posted on 12/22/2007 at 7:57 PM
		</div>
		<div class="comment_text"><p>Oh, that's the issue. I run Java 5. Tried to download 6 from <a href="http://disq.us/url?url=http%3A%2F%2Fjava.sun.com%3ADCX1SUmAj3NnkiOlFuM2zHCFvoM&amp;cuid=3321886" rel="nofollow noopener" title="java.sun.com">java.sun.com</a>, but it redirects me to the Apple Website. Seems Java 6 is only available for Tiger.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670700">7</a> by Adam
		posted on 9/23/2011 at 8:48 PM
		</div>
		<div class="comment_text"><p>Hi Ray -</p><p>How may I collect multiple directories with cfdirectory to create an output showing the disk space used by each directory?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670703">8</a> by Raymond Camden
		posted on 9/23/2011 at 8:57 PM
		</div>
		<div class="comment_text"><p>You would just loop over your list of directories. It's my first code example put inside a cfloop.</p></div>
	</div>
</div>
		