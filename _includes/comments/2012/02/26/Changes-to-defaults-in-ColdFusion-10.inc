
<div class="comment" id="c_1713739243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739243">1</a> by MikeZ
		posted on 2/27/2012 at 2:17 AM
		</div>
		<div class="comment_text"><p>Did they finally eliminate that old legacy problem due to automated variable validation for variables which follow a certain pattern? <br>That's the classic which everyone that ever built a Facebook app in CF probably has run into at least once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739247">2</a> by Raymond Camden
		posted on 2/27/2012 at 2:25 AM
		</div>
		<div class="comment_text"><p>Are you talking about the automatic form validation? That was 'fixed' in CF9. You can disable it in your app.cfc settings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739242">3</a> by Mark
		posted on 2/27/2012 at 5:43 AM
		</div>
		<div class="comment_text"><p>That maximum number of simultaneous template requests = 10 really, really worked for me. Unless your hardware suddenly improved I would not change that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739244">4</a> by Kerr
		posted on 2/27/2012 at 5:49 AM
		</div>
		<div class="comment_text"><p>I believe the maximum number of simultaneous template requests is a very server / app-specific issue.  We have a well tuned CF9 application set at 25, and don't run into issues under load.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739248">5</a> by Aaron Greenlee
		posted on 2/27/2012 at 9:00 AM
		</div>
		<div class="comment_text"><p>Really is a shame if people are not using event gateways.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739245">6</a> by Raymond Camden
		posted on 2/27/2012 at 9:39 PM
		</div>
		<div class="comment_text"><p>Aaron: Agreed. I don't think features should be used "just because", but at the same time, I do wish there were more usage out there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739251">7</a> by Kerr
		posted on 2/27/2012 at 11:36 PM
		</div>
		<div class="comment_text"><p>@Aaron - Out of curiosity, how are you leveraging event gateways in your project(s)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739252">8</a> by Aaron Greenlee
		posted on 2/28/2012 at 12:09 AM
		</div>
		<div class="comment_text"><p>Anytime I want something to be asynchronous, I use an Event Gateway. This typically means long running operations, logging, app metrics, or processes I want to be triggered by a remote user but that don't need to furnish a result when the processes started. I've found there are lots of areas in my applications where Event Gateways have helped me to accelerate response times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739249">9</a> by Aaron Greenlee
		posted on 2/28/2012 at 12:10 AM
		</div>
		<div class="comment_text"><p>I should note that I also use threads, but, only if I need parallel operations to re-join (like the furnish data for a request.).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739250">10</a> by Raymond Camden
		posted on 2/28/2012 at 12:11 AM
		</div>
		<div class="comment_text"><p>Any reason why you don't use threads for times when you _don't_ want to join? I use them cfbloggers and it works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739254">11</a> by Kerr
		posted on 2/28/2012 at 12:16 AM
		</div>
		<div class="comment_text"><p>Ahh ok, I've been using threads for some of those operations.  That has helped with response times, but then consumes the thread pool.  I see how the event gateway would be best if there's no need to re-join the asynchronous process.  Thanks for the feedback.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739253">12</a> by Wes Byrd
		posted on 2/28/2012 at 8:17 AM
		</div>
		<div class="comment_text"><p>An interesting change in path issues with CFINCLUDE results in incorrect paths generating a 404 error.  Oddly enough, for as long as I can remember, ColdFusion would allow you to have extra "/" marks in a path and still include the page.  For example:</p><p>include "/path/to//file.txt";</p><p>This works in CF9 and earlier versions but not CF10.  The usual cause of this kind of path is dynamic path information from a database that might include the "/" mark and then so does your code.</p><p>Good news... it makes us do it right.  Bad news, errors may arise when you upgrade your CF9 app to CF10 if you include files via dynamic file paths.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739255">13</a> by Raymond Camden
		posted on 2/28/2012 at 8:20 AM
		</div>
		<div class="comment_text"><p>Wes, while I agree that it is good to make us "do it right", this kind smells like something that will bite a _lot_ of people. Can you file a bug report please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739257">14</a> by Wes Byrd
		posted on 2/29/2012 at 12:04 AM
		</div>
		<div class="comment_text"><p>Added bug to <a href="http://disq.us/url?url=http%3A%2F%2Fbugbase.adobe.com%3AzmeDe-59Lqa9jzRNhLuWbt8Beec&amp;cuid=3321886" rel="nofollow noopener" title="bugbase.adobe.com">bugbase.adobe.com</a>.  Bug #: 3125367</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739260">15</a> by Wes Byrd
		posted on 4/3/2012 at 1:43 AM
		</div>
		<div class="comment_text"><p>Looks like they posted a fix to the CFINCLUDE path issue.  The cool new built in update tool found and installed that bug fix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739262">16</a> by Raymond Camden
		posted on 4/3/2012 at 1:46 AM
		</div>
		<div class="comment_text"><p>Nice. Glad to see it being useful already.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739259">17</a> by Henry Ho
		posted on 7/4/2013 at 5:09 AM
		</div>
		<div class="comment_text"><p>Maximum number of simultaneous template requests is "0" in CF10 standard.  Any idea what does "0" mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739261">18</a> by Raymond Camden
		posted on 7/4/2013 at 5:23 AM
		</div>
		<div class="comment_text"><p>No limit maybe? Check the help (click the ?).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739263">19</a> by Henry Ho
		posted on 7/4/2013 at 5:31 AM
		</div>
		<div class="comment_text"><p>@Raymond There's no (?).  No limit doesn't seem to make sense because if I click Submit Changes: Simultaneous Request limit must be numeric and greater than zero.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739266">20</a> by Raymond Camden
		posted on 7/4/2013 at 5:37 AM
		</div>
		<div class="comment_text"><p>Look in the upper right corner. Every CF Admin for a while not has had built in contextual help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739265">21</a> by Steve Fentriss
		posted on 11/13/2013 at 11:47 AM
		</div>
		<div class="comment_text"><p>Ray, thank you so much for writing so many great articles and being such a ridiculously source of CF knowledge.  Like Henry Ho, I'm wondering what the "zero simultaneous requests" in Coldfusion 10 means.  I read the help as you suggested here, and did not see anything specifically about the "0" value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739267">22</a> by Steve Fentriss
		posted on 11/13/2013 at 11:48 AM
		</div>
		<div class="comment_text"><p>* a ridiculously awesome source of CF knowledge</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739270">23</a> by Raymond Camden
		posted on 11/13/2013 at 4:10 PM
		</div>
		<div class="comment_text"><p>It almost sounds like a bug - as Henry says he wasn't able to save the page. If you still see this, and if you also can't save the page, best I can suggest is to log a bug, and then obviously change the value - 10 should be fine until you can test for better values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739268">24</a> by Jim
		posted on 5/6/2014 at 11:38 PM
		</div>
		<div class="comment_text"><p>Hi Ray - I have a web service that gets invoked just fine in CF9.  We upgraded to CF10 and now if the size of the data goes above a certain amount (which is not a lot of data), the service call errors and returns:</p><p>An existing connection was forcibly closed by the remote host.</p><p>Any ideas or thoughts on tuning or where to look?  Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739269">25</a> by Raymond Camden
		posted on 5/6/2014 at 11:42 PM
		</div>
		<div class="comment_text"><p>Check the Admin settings for the max post setting. That could be it.</p></div>
	</div>
</div>
		