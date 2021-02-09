
<div class="comment" id="c_1713734970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734970">1</a> by Tim Leach
		posted on 9/3/2011 at 9:32 PM
		</div>
		<div class="comment_text"><p>It there any way, or list to see what the complete list is? Or is it all trial and error?</p><p>I'm guessing the CGI scope comes from the web server,so would that be where I'd look to see what information it makes available?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734971">2</a> by Seb Duggan
		posted on 9/3/2011 at 10:35 PM
		</div>
		<div class="comment_text"><p>I found the same thing, but with ISAPI_Rewrite instead of Apache rewriting. The only difference is that the useful URL is CGI.HTTP_X_REWRITE_URL.</p><p>I wrote a post about it a while back:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsebduggan.com%2Fposts%2Fuseful-header-in-isapi-rewrite-http-x-rewrite-url%3AJwAjcpF_x_r-FwyZ4agDH2BXrHw&amp;cuid=3321886" rel="nofollow noopener" title="http://sebduggan.com/posts/useful-header-in-isapi-rewrite-http-x-rewrite-url">http://sebduggan.com/posts/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734972">3</a> by Raymond Camden
		posted on 9/3/2011 at 10:48 PM
		</div>
		<div class="comment_text"><p>@Tim: I don't know. You would think it would be available via Java (remember you can get the low level page object via getPageContext()), but I'm not seeing any method that gets everything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734976">4</a> by Jaana Gilbert
		posted on 9/4/2011 at 1:21 AM
		</div>
		<div class="comment_text"><p>One that is pretty important for me with one client who is has clustered and load balanced servers.</p><p>CGI.X_FORWARDED_FOR</p><p>This gives us the correct remote_addr value instead of the network IP (10.10.16.10).</p><p>Jaana</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734974">5</a> by Fernando da Silva Trevisan
		posted on 9/4/2011 at 4:14 AM
		</div>
		<div class="comment_text"><p>So, you can USE a variable in the CGI scope that isn't showing up in cfdump? That's odd - if you can use, I would bet it should appear in the dump!</p><p>Maybe looping through the CGI collection instead of dumping?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734975">6</a> by Edward Beckett
		posted on 9/4/2011 at 6:26 AM
		</div>
		<div class="comment_text"><p>This will definitely come in handy as very soon need to do quite a bit of 301 RegEx work on a CF 8 site ...</p><p>:-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734973">7</a> by Raymond Camden
		posted on 9/4/2011 at 6:46 AM
		</div>
		<div class="comment_text"><p>@Fernando - my understanding is that the CGI scope you see in the dump (and looping over the collection won't change it - that's what cfdump does under the covers) is based on a set of known common CGI vars.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734978">8</a> by Fernando da Silva Trevisan
		posted on 9/4/2011 at 6:53 AM
		</div>
		<div class="comment_text"><p>"Known" and "common" as in "CGI vars that surely exists among environments", isn't it?</p><p>Now I remember reading something about it in the past (about 4-5 years ago), in some studies I did, probably before trying (and passing) my CF6 certification exam... makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734979">9</a> by Raymond Camden
		posted on 9/4/2011 at 6:54 AM
		</div>
		<div class="comment_text"><p>Yeah. I think I've blogged on this before too. You can also output ANY cgi variable, like cgi.ray. We just output an empty string if there is nothing there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734977">10</a> by Jules Gravinese
		posted on 9/4/2011 at 9:39 AM
		</div>
		<div class="comment_text"><p>And for those on IIS7, you can get the original request from CGI.HTTP_X_ORIGINAL_URL.</p><p>Ex:<br>[!--- IIS7 ---]<br>[cfif CGI.HTTP_X_ORIGINAL_URL neq '']<br>	[cfset request.urlStrings= listToArray(spanExcluding(CGI.HTTP_X_ORIGINAL_URL, '?'), '/')]<br>[/cfif]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734980">11</a> by Jules Gravinese
		posted on 9/4/2011 at 9:43 AM
		</div>
		<div class="comment_text"><p>Forgot to mention... if you wanted to make your app more portable, do this:</p><p>[!--- IIS7 ---]<br>[cfif CGI.HTTP_X_ORIGINAL_URL neq '']<br>	[cfset request.urlStrings= listToArray(spanExcluding(CGI.HTTP_X_ORIGINAL_URL,"?"), "/")]<br>[/cfif]<br>[!--- ISAPI_rewrite ---]<br>[cfif CGI.HTTP_X_REWRITE_URL neq '']<br>	[cfset request.urlStrings= listToArray(spanExcluding(CGI.HTTP_X_REWRITE_URL ,"?"), "/")]<br>[/cfif]<br>[!--- APACHE ---]<br>[cfif CGI.REDIRECT_URL neq '']<br>	[cfset request.urlStrings= listToArray(spanExcluding(CGI.REDIRECT_URL ,"?"), "/")]<br>[/cfif]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734987">12</a> by Ian Turton
		posted on 9/4/2011 at 2:57 PM
		</div>
		<div class="comment_text"><p>Given the mutually exclusive nature of these (?!) plus the fact that referencing non-existent CGI vars returns an empty string (and exchanging commentary for brevity),  the above could just be...</p><p>&lt;cfset request.urlStrings= listToArray(spanExcluding(CGI.HTTP_X_ORIGINAL_URL &amp; CGI.HTTP_X_REWRITE_URL &amp; CGI.REDIRECT_URL,"?"), "/")<br>/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734984">13</a> by MikeG
		posted on 9/6/2011 at 8:36 PM
		</div>
		<div class="comment_text"><p>If you have one of the older WACK books, there used to be a reference in the back that contained a pretty good list of common, though not neccessarily available everywhere CGI variables.  I found it in Appendix D and D.2 in the MX WACK (Sorry Ray)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734985">14</a> by Raymond Camden
		posted on 9/6/2011 at 8:37 PM
		</div>
		<div class="comment_text"><p>Remember - every time you don't buy the latest WACK, I can't afford a new video game.</p><p>And I cry.</p><p>A lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734989">15</a> by MikeG
		posted on 9/7/2011 at 1:56 AM
		</div>
		<div class="comment_text"><p>I do buy the latest WACK, but I keep the old ones too, otherwise my bookshelves don't look like I have been coding CF for as long as I have &lt;grin&gt;; and besides, you don't need book income any more, you are getting rich building Nook apps now and those don't take near as long to write as a book does..</p></div>
	</div>
</div>
		