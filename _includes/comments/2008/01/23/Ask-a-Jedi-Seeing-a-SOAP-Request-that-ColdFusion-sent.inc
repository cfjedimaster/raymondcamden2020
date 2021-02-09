
<div class="comment" id="c_1713676530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676530">1</a> by Ken Sykora
		posted on 1/24/2008 at 8:51 PM
		</div>
		<div class="comment_text"><p>It might also be worth mentioning that you can use any sort of decent packet inspection program to piece together a request. My favorite is the windows app Ethereal - it will break out a web service request by by HTTP **and** SOAP. It's a good way to learn about network stacks, as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676551">2</a> by Mike
		posted on 1/24/2008 at 10:55 PM
		</div>
		<div class="comment_text"><p>Thanks for both answers.. Initially I had installed wireshark but was having problems with the filters. I'll check out Ethereal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676555">3</a> by Tero Pikala
		posted on 1/25/2008 at 4:12 AM
		</div>
		<div class="comment_text"><p>Axis TCP monitor is quite ok as well, check URL</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fws.apache.org%2Faxis%2Fjava%2Fuser-guide.html%23AppendixUsingTheAxisTCPMonitorTcpmon%3ADiwVE1K6M7UA1856AMwLwcWCJ0Q&amp;cuid=3321886" rel="nofollow noopener" title="http://ws.apache.org/axis/java/user-guide.html#AppendixUsingTheAxisTCPMonitorTcpmon">http://ws.apache.org/axis/j...</a></p><p>Since CF uses Axis it's actually installed with CF...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676559">4</a> by MrBuzzy
		posted on 1/25/2008 at 2:23 PM
		</div>
		<div class="comment_text"><p>SoapUI (free) is the ducks nuts... <a href="http://disq.us/url?url=http%3A%2F%2Fsoapui.org%2F%3AL7QUw3CTCvXDG9WakDcGv3EHY_4&amp;cuid=3321886" rel="nofollow noopener" title="http://soapui.org/">http://soapui.org/</a> although I only use the basics, not sure if it 'sniffs' your requests. It probably does.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676561">5</a> by Raymond Camden
		posted on 1/25/2008 at 5:08 PM
		</div>
		<div class="comment_text"><p>Duck's nutts? That's a new one on me. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676564">6</a> by Casey
		posted on 2/13/2008 at 3:32 AM
		</div>
		<div class="comment_text"><p>Another way to see SOAP Requests and Responses is to edit client-config.wsdd in /coldfusion/wwwroot/WEB-INF/ and remove the comments around the &lt;requestFlow&gt; and &lt;responseFlow&gt; lines, then restart Coldfusion, and the request/response should show up in /coldfusion/runtime/logs/coldfusion-out.log</p><p>(Tested in ColdFusion 8)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676563">7</a> by Nick Battell
		posted on 4/1/2009 at 1:30 AM
		</div>
		<div class="comment_text"><p>Here is an interesting article about advanced tools for soap monitoring - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.correlsense.com%2Fcto-blog%2Fmuch-more-than-a-soap-monitor-gain-full-visibility-of-your-soa-application-performance%2F%3AXX8qAiO077Yn7SqQGoW3uyQrOI0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.correlsense.com/cto-blog/much-more-than-a-soap-monitor-gain-full-visibility-of-your-soa-application-performance/">http://www.correlsense.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676562">8</a> by Henry Ho
		posted on 11/4/2014 at 6:00 AM
		</div>
		<div class="comment_text"><p>Does anyone know how to log SOAP requests in ColdFusion (from which IP and which method?)  <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F26725539%2Fhow-to-log-soap-requests-in-coldfusion%3A0d-wYN-ZNnsjJOYgGr8TsnUEJX8&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/26725539/how-to-log-soap-requests-in-coldfusion">http://stackoverflow.com/qu...</a></p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676566">9</a> by Raymond Camden
		posted on 11/4/2014 at 7:29 AM
		</div>
		<div class="comment_text"><p>I answered.</p></div>
	</div>
</div>
		