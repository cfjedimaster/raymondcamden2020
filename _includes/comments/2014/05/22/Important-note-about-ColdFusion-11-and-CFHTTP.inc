
<div class="comment" id="c_1714082990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082990">1</a> by Ben Reid
		posted on 6/3/2014 at 10:25 AM
		</div>
		<div class="comment_text"><p>We have also experienced this issue and have not yet managed to find a work-around.</p><p>We are connecting to non-standard ports (not port 80 or 443) on localhost.</p><p>I tried your suggestion of providing the http header for HOST, but that did not work for us.</p><p>The URL we use is something like http://localhost:9292/path/</p><p>Note also that we are not requesting a specific file in the URL.</p><p>Please re-post if you find out more information on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082989">2</a> by Raymond Camden
		posted on 6/3/2014 at 6:35 PM
		</div>
		<div class="comment_text"><p>I'm not able to replicate that. I've got a Node server up on 3333 and my CF11 server can cfhttp it just fine. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082991">3</a> by Ben Reid
		posted on 6/5/2014 at 8:02 AM
		</div>
		<div class="comment_text"><p>I have since worked out that the 3rd-party web server we are trying to connect to is a Jetty v6.1.14 http server (which was released in November 2008).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082992">4</a> by Ben Reid
		posted on 6/5/2014 at 8:05 AM
		</div>
		<div class="comment_text"><p>Also, whilst the GET request is failing with "I/O Exception: null", making a HEAD request responds with "200 OK", and making an POST request responds with "405 Method Not Allowed".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082997">5</a> by Pete Freitag
		posted on 6/11/2014 at 8:15 PM
		</div>
		<div class="comment_text"><p>Ray - FYI the bug on for HttpClient is here: <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FHTTPCLIENT-1513%3AP9PlC6VYev3w5vc-SoYIE3_t0iA&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/HTTPCLIENT-1513">https://issues.apache.org/j...</a> and they marked it as Resolved - Not a Problem. So it looks like they are leaving it up to adobe to fix on their end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082994">6</a> by Raymond Camden
		posted on 6/11/2014 at 8:21 PM
		</div>
		<div class="comment_text"><p>I wonder what their logic is. (They being the Apache-side folks, not the CF team.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082993">7</a> by Pete Freitag
		posted on 6/11/2014 at 8:31 PM
		</div>
		<div class="comment_text"><p>It sounds to me like CF is always appending the port to the url and then passing that url to HttpClient. The guy that commented on the bug seams to be saying that if you don't put the port in the url it won't add it to the host header.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082996">8</a> by Raymond Camden
		posted on 6/11/2014 at 8:32 PM
		</div>
		<div class="comment_text"><p>Hmmm. I thought CF wasn't, but the library was?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082998">9</a> by Private Uly
		posted on 6/27/2014 at 8:13 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for this blog post.  It saved me much hair pulling.  We had a problem connecting with amazon mws from CF11, except that the error message that came back was that the request signature was wrong.  So I spent quite a bit of time debugging that part to no avail.  After I added the host parameter to the cfhttp everything was fine again.</p><p>It's not clear who is appending the port number.  Are CF10 and CF11 running the same version of HttpClient?  If it's CF11 then Adobe should fix it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083001">10</a> by Raymond Camden
		posted on 6/27/2014 at 6:02 PM
		</div>
		<div class="comment_text"><p>From what I know it was Apache doing it, but they closed the bug and said it was our fault. Not sure I agree with that, but from what I know, we will be doing a workaround. (Not that I speak for the CF team.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083000">11</a> by P Mascari
		posted on 7/29/2014 at 6:36 PM
		</div>
		<div class="comment_text"><p>Thanks for the blog post.</p><p>We have an application that makes numerous API calls and have found several that fail with the 404 error.</p><p>In some cases we have resolved the issue by removing URL variables from the web address and placing them as CFHTTPPARAM tags instead.</p><p>For instance, <br>&lt;cfhttp url="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.apicall.com%2F%3Fkey%3Dxxx%3Ak67IaWouBFR4hsM6uAXDfWqMEp4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.apicall.com/?key=xxx">http://www.apicall.com/?key...</a>" method="get" result="apiResult"&gt;&lt;/cfhttp&gt;</p><p>Would be changed to:<br>&lt;cfhttp url="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.apicall.com%2F%3A9GEgKM2pHt3Jm1prsk7Wf2DCEy0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.apicall.com/">http://www.apicall.com/</a>" method="get" result="apiResult"&gt;<br>    &lt;cfhttpparam type="url" name="key" value="xxx"&gt;<br>&lt;/cfhttp&gt;</p><p>One such API where this worked is: <a href="http://disq.us/url?url=http%3A%2F%2Furl2png.com%3A-Wl7GUemw7col24aWkqQ8LFMSQg&amp;cuid=3321886" rel="nofollow noopener" title="url2png.com">url2png.com</a>.</p><p>Hope this helps someone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083002">12</a> by Jon Kocen
		posted on 8/12/2014 at 11:18 PM
		</div>
		<div class="comment_text"><p>I am trying to CFHTTP to a SharePoint site and get the dreaded 404 Not Found. I can't use the CFSHAREPOINT because we are all SSL. I have tried all of the above suggestions with no luck. I can CFHTTP to other servers with success.</p><p>Another other tips/tricks?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083003">13</a> by Oz
		posted on 11/19/2014 at 12:24 AM
		</div>
		<div class="comment_text"><p>Thanks! This seems to resolve an issue I was having connecting to the Instagram API. Adding <a href="http://disq.us/url?url=http%3A%2F%2Fapi.instagram.com%3AXZzzMoE2dTiOCJkWelPhLK6nW1E&amp;cuid=3321886" rel="nofollow noopener" title="api.instagram.com">api.instagram.com</a> as the value fixed the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1996264981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1996264981">14</a> (In reply to <a href="#c_1714083001">#10</a>) by Kumar
		posted on 4/30/2015 at 5:06 PM
		</div>
		<div class="comment_text"><p>Hi Raymond - I was looking at this blog about CF11 CFHTTP issue and looks like I have the similar problem. I tried few solutions mentioned above with no luck. We are upgrading from CF9 to CF11 on LINUX with Apache web server. Our current application pages works fine in CF9 but if I use the same page in CF11 server, I'm getting "404 Not Found" with "COM.Allaire.ColdFusion.HTTPNotFound" error message. Thought it was CFHTTP issue but now I'm not so sure. Any pointers will be appreciated. - Kumar</p></div>
	</div>
</div>
		
<div class="comment" id="c_1996277032">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1996277032">15</a> (In reply to <a href="#c_1714082990">#1</a>) by Raymond Camden
		posted on 4/30/2015 at 5:13 PM
		</div>
		<div class="comment_text"><p>I'd suggest calling up Adobe support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2421050518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2421050518">16</a> by Jules Gravinese
		posted on 12/22/2015 at 6:34 AM
		</div>
		<div class="comment_text"><p>I wish I had found this 4 hours ago! Thanks again, Mr. Camden.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2430477574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2430477574">17</a> by Ahmed Moustapha
		posted on 12/29/2015 at 1:21 PM
		</div>
		<div class="comment_text"><p>I am trying to send sms messages via <a href="http://disq.us/url?url=http%3A%2F%2Fmessagebird.com%3AzJP8eNk9cMVfwhpBWGBa7QOwqi4&amp;cuid=3321886" rel="nofollow noopener" title="messagebird.com">messagebird.com</a>. On my old coldfusion 10 server everything was working fine but now we get Connection failure messages on coldfusion 11 update 7. I have tried<br> all of the above suggestions with no luck. Any suggestions? Anybody using messagebird with coldfusion 11?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2791667555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2791667555">18</a> (In reply to <a href="#c_2430477574">#17</a>) by Amy
		posted on 7/19/2016 at 5:07 PM
		</div>
		<div class="comment_text"><p>How to use message bird API with ColdFusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2791708134">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2791708134">19</a> (In reply to <a href="#c_2791667555">#18</a>) by Raymond Camden
		posted on 7/19/2016 at 5:28 PM
		</div>
		<div class="comment_text"><p>This isn't on topic for this blog post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4304253444">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_rsmvX4Rvdo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4304253444">20</a> by Andy Matthews
		posted on 1/24/2019 at 2:07 AM
		</div>
		<div class="comment_text"><p>Nice one Ray, I just noticed I'm having this issue with Github. A call to my user accounts repo JSON feed is failing with a Java error:<br>`I/O Exception: Received fatal alert: protocol_version`<br>Oddly enough though my host is running CF 10.x</p></div>
	</div>
</div>
		
<div class="comment" id="c_4304944341">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4304944341">21</a> (In reply to <a href="#c_4304253444">#20</a>) by Raymond Camden
		posted on 1/24/2019 at 2:53 PM
		</div>
		<div class="comment_text"><p>Hope this helped then. :)</p></div>
	</div>
</div>
		