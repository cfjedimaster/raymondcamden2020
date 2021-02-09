
<div class="comment" id="c_1713614521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614521">1</a> by Hilary Bridel
		posted on 3/26/2003 at 6:11 AM
		</div>
		<div class="comment_text"><p>Great stuff Ray,<br>Thanks again for supplying source code. I am learning a lot from your coding:)</p><p>Just a thought --  MM may not be too happy that you are distributing the datagrid source code which they are selling under license!</p><p>Hilary<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bridel.org%2F%3AN561Ank4zlo_TgTV1lDe5t8ZVwE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bridel.org/">http://www.bridel.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614514">2</a> by Raymond Camden
		posted on 3/26/2003 at 4:40 PM
		</div>
		<div class="comment_text"><p>Oops - didn''t think about that. I removed the FLA from the zip. The SWF is still there, and I''ll see about extracting the AS code from the FLA so I can share that at least.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614513">3</a> by Leonardo
		posted on 6/2/2003 at 7:55 PM
		</div>
		<div class="comment_text"><p>How should i use the swf file?</p><p>i tried to embed it in the page (with no sucess of course).</p><p>Thks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614518">4</a> by Brian Chignoli
		posted on 8/17/2006 at 3:02 AM
		</div>
		<div class="comment_text"><p>I think that I have tried everything to get this to work and I now know a bit more about structs than I did two days ago, but apparently not enough to get this to output what I want.  I can't figure out how to display the complex data elements in a table format.</p><p>I added the following to my Application.cfm:<br>&lt;cfinvoke component="gateway.sessiontracker" <br>		method="registerSession" <br>		pk="#session.urlToken#" <br>		data="#duplicate(session)#"&gt;</p><p>I added the following to my display page:<br>&lt;cfinvoke component="gateway.sessiontracker" <br>		method="getSessions" <br>		returnvariable="sessions"&gt;</p><p>The following works to display all of the data that I need to access:<br>&lt;cfdump var="#sessions#"&gt;</p><p>Now how do I display the individual data elements such as HTTP_COOKIE and PATH_INFO from CGI for each user?  Also, how do I access the individual values from DATA and the date from STORED?</p><p>When I used the following, it displays what appears to be the urltoken from DATA.<br>&lt;cfoutput&gt;<br>	#Replace("#StructKeyList(sessions)#",",","&lt;br/&gt;","All")#&lt;br/&gt;&lt;br/&gt;<br>&lt;/cfoutput&gt;</p><p>I then tried the following, but it outputs the same data.<br>&lt;cfloop collection="#application.sessionTracker#" item="s"&gt;<br>	&lt;cfoutput&gt;<br>		#s#&lt;br/&gt;	<br>	&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p><p>I inserted cgi.HTTP_COOKIE and cgi.PATH_INFO into the loop, but that displays my information instead of the users.</p><p>Any help is greatly appreciated.  If this is not the correct forum for this type of support, please let me know.</p><p>Thank you,<br>Brian</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614520">5</a> by Raymond Camden
		posted on 8/17/2006 at 5:27 AM
		</div>
		<div class="comment_text"><p>This is some old code. I'll answer in general. To get the pieces of a struct, use structKeyList or structKeyArray. This returns the keys of the array. If s is an array, and k is a key, you can get the value by using bracket notation: &lt;cfset value = s[k]&gt;. That's really all there is to it. Just break the struct down to get the values you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614528">6</a> by Brian Chignoli
		posted on 8/17/2006 at 11:22 PM
		</div>
		<div class="comment_text"><p>I believe that my cfinvoke on my output page is correct.<br>&lt;cfinvoke component="gateway.sessionTracker" <br>		method="getSessions" <br>		returnvariable="sessions"&gt;</p><p>And my cfloop outputs the keys correctly.<br>&lt;cfloop collection="#application.sessionTracker#" item="k"&gt;<br>	&lt;cfoutput&gt;<br>		Key: #k#&lt;br/&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p><p>So, why doesn't this work to display the PATH_INFO for each key?<br>&lt;cfloop collection="#application.sessionTracker#" item="k"&gt;<br>	&lt;cfoutput&gt;<br>		Key: #k#&lt;br/&gt;<br>		Path: #k[sessions.cgi.PATH_INFO]#&lt;br/&gt;&lt;br/&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p><p>Instead, I get the error "Element CGI.PATH_INFO is undefined in SESSIONS".</p><p>Thank you for your assitance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614524">7</a> by Raymond Camden
		posted on 8/17/2006 at 11:29 PM
		</div>
		<div class="comment_text"><p>K is just the struct key name. COnsider array indexes. You can't just do #1#, right? you must do #thearray[1]#. Structs are the say way:</p><p>#sessions[k].XXXXX#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614517">8</a> by Brian Chignoli
		posted on 8/17/2006 at 11:34 PM
		</div>
		<div class="comment_text"><p>It's always the little things, that's what I was missing.  Thank you so much for your time and help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614527">9</a> by JOSH
		posted on 9/30/2006 at 6:45 AM
		</div>
		<div class="comment_text"><p>I currently have an existing session tracker in place that is a little simpler that yours, however I was finding that it is adding more sessions than what are truely online.</p><p>So, in checking out your CFC I kind of found the same thing:</p><p>41 <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>69.93.17.28 CFSCHEDULE  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>69.93.17.28 CFSCHEDULE  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>64.158.31.158 CFSCHEDULE  <br>69.93.17.28 CFSCHEDULE  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>24.73.220.34 Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1; SV1; Media Center PC 3.0; .NET CLR 1.0.3705)  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>69.93.17.28 CFSCHEDULE  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>216.220.208.237 Mozilla/5.0 (Danger hiptop 2.0; U; AvantGo 3.2)  <br>24.90.100.63 Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1; {6E28147D-8B3B-A24F-81C8-58BFF15E220A})  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>152.163.100.67 Mozilla/4.0 (compatible; MSIE 6.0; AOL 9.0; Windows NT 5.1; SV1; .NET CLR 1.1.4322)  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>64.158.31.158 CFSCHEDULE  <br>64.180.37.184 Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.7.12) Gecko/20050915 Firefox/1.0.7 (ax)  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>69.93.17.28 CFSCHEDULE  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>64.158.31.158 CFSCHEDULE  <br>216.12.222.108 Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1; SV1; .NET CLR 1.1.4322)  <br>66.249.72.230 Mediapartners-Google/2.1  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a>  <br>66.249.72.230 Mozilla/5.0 (compatible; Googlebot/2.1; +<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fbot.html%29%3AHvxWhapK4flFCyFy3UCBAV3lYZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/bot.html)">http://www.google.com/bot.h...</a></p><p>In the example above, google bot is swarming be, but you'll see tat it has actually added his IP in as multiple sessions. Im curious why this is.</p><p>I actually have both your CFC session tracker and my session tracking in place in my application.cfm. Yours says there are 41 users online, mine says 18.</p><p>Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614522">10</a> by Raymond Camden
		posted on 9/30/2006 at 7:08 AM
		</div>
		<div class="comment_text"><p>Not really sure if I can answer w/o seeing your code as well.</p></div>
	</div>
</div>
		