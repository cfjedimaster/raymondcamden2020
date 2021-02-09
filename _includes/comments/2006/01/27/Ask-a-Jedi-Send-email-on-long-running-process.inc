
<div class="comment" id="c_1713649699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649699">1</a> by scott
		posted on 1/27/2006 at 9:33 PM
		</div>
		<div class="comment_text"><p>Now that could be useful.</p><p>How many of these ask jedi questions would be useful to put on coldfusioncookbook?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649688">2</a> by Raymond Camden
		posted on 1/27/2006 at 9:44 PM
		</div>
		<div class="comment_text"><p>Maybe so. There will definitely be some overlap at times. I kinda feel like this question is a bit -too- unique for the cookbook. As I've said before though, I'm still feeling it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649700">3</a> by Jim
		posted on 1/27/2006 at 10:16 PM
		</div>
		<div class="comment_text"><p>I think ideally you could answer these questions here and get comments, suggestions, alternative solutions, etc - and then condense that info into one concise Cookbook entry.</p><p>Jim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649705">4</a> by Steven Erat
		posted on 1/27/2006 at 10:24 PM
		</div>
		<div class="comment_text"><p>Just a reminder, ColdFusion will generally *not* timeout requests that are waiting for a response from a database.</p><p>The exception to this rule is that Oracle and SQLServer JDBC drivers should obey a CFQUERY timeout attribute if one is provided (while still ignoring the general CF Admin timeout).  Other database drivers generally will not timeout while waiting for a database to respond to a query.</p><p>In my experience, most reports of ColdFusion server hanging can be attributed to queuing that occurs when the database is slow or unresponsive.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.talkingtree.com%2Fblog%2Findex.cfm%2F2006%2F1%2F16%2FDatasource-Timeouts-and-Support-for-CFQUERY-Timeout-Attribute%3AsEHm6JHc9LpxxFvMkPH4zMh52gI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.talkingtree.com/blog/index.cfm/2006/1/16/Datasource-Timeouts-and-Support-for-CFQUERY-Timeout-Attribute">http://www.talkingtree.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649704">5</a> by Steve Bryant
		posted on 1/27/2006 at 11:04 PM
		</div>
		<div class="comment_text"><p>Hey! That was me!</p><p>Thanks for the answer. Is it possible to get the email message and still allow the long-running process to complete?</p><p>I am hoping to let things like this work, I just want to know that they are taking too long so that I can optimize them.</p><p>In any event, thanks for taking the time to answer my question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649701">6</a> by Raymond Camden
		posted on 1/27/2006 at 11:09 PM
		</div>
		<div class="comment_text"><p>Steve, no, once the exception is thrown, that should be it. What you can do, however, is simply time the problem code. You can do this using getTicketCount. If the result is bigger than some value, send an email. This assumes you DONT have the option turned on i the admin to throw an error, or it is set to a higher value, and you want to check for a lower value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649702">7</a> by Christopher Wigginton
		posted on 1/27/2006 at 11:41 PM
		</div>
		<div class="comment_text"><p>Since the responses to Steve's question are based on throwing an error, I'd like to point out another way to look at the question, Steve wants a report on when a page takes too long, not necessarily terminate a process.</p><p>This gets into performance tuning and monitoring.  There is an attribute for logSlowRequests in the coldfusion.server.ServiceFactory.RuntimeService, though I've never played with the logs to find out what actually gets logged if the boolean is set true.  Essentially, you would need a service that tails the log and notifies via email whenever a slow request was logged.</p><p>Steve might also want to look into stress testing and monitoring products such as</p><p>Mercury LoadRunner<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mercury.com%2Fus%2Fproducts%2Fperformance-center%2Floadrunner%2F%3AAmXgp2GMKXuwMb478BhgxP05V5Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mercury.com/us/products/performance-center/loadrunner/">http://www.mercury.com/us/p...</a></p><p>Microsoft Stress Testing page<br><a href="http://disq.us/url?url=http%3A%2F%2Fsupport.microsoft.com%2Fkb%2F231282%2Fen-us%3AqoL57mvVujKTvCwLi2gjA0pIMmQ&amp;cuid=3321886" rel="nofollow noopener" title="http://support.microsoft.com/kb/231282/en-us">http://support.microsoft.co...</a></p><p>Segue Silk Performer<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.segue.com%2Fproducts%2Fload-stress-performance-testing%2Fsilkperformer.asp%3AIcfzTqw1TCAXjIhbJ5ST9KtpEsI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.segue.com/products/load-stress-performance-testing/silkperformer.asp">http://www.segue.com/produc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649698">8</a> by Steve Bryant
		posted on 1/27/2006 at 11:51 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>getTickCount! I have used that several times, but it didn't occur to me for this. This is absolutely what I was looking for.</p><p>Christopher,</p><p>Thanks for the suggestion. I will look into that ServiceFactory at some point. It certainly sounds interesting. For now, I think the getTickCount solution will suffice.</p><p>I am using Microsoft's old Web Application Stress Tool right now and it seems to meet my needs.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649706">9</a> by John Blayter
		posted on 1/28/2006 at 2:36 AM
		</div>
		<div class="comment_text"><p>If your goal is to keep a eye on the health of ColdFusion take a look at SeeFusion. Use this in combination with a monitoring application like IPMonitor to notify you if there is a trend in long execution times. This way you have a log of what exactly were the templates that took a long time to run as well as way to monitor if your site is starting to crawl. Take a look at the Breeze presentation that the guys from Webapper did for the Phoenix ColdFusion users group.<br><a href="http://disq.us/url?url=http%3A%2F%2Fmmusergroup.breezecentral.com%2Fp49144440%2F%3AcZQOrGCGUSgVSFyHFKEbjpGX4r0&amp;cuid=3321886" rel="nofollow noopener" title="http://mmusergroup.breezecentral.com/p49144440/">http://mmusergroup.breezece...</a></p></div>
	</div>
</div>
		