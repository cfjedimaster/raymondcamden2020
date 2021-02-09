
<div class="comment" id="c_1713719852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719852">1</a> by JC
		posted on 11/20/2009 at 1:33 AM
		</div>
		<div class="comment_text"><p>probably useless, but wouldn't wddx let you log complex data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719849">2</a> by Raymond Camden
		posted on 11/20/2009 at 4:26 AM
		</div>
		<div class="comment_text"><p>I find JSON easier to read than WDDX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719855">3</a> by Ben Nadel
		posted on 11/21/2009 at 1:13 AM
		</div>
		<div class="comment_text"><p>Now that CFDump can be written to a file, I feel like it's functionality is complete :) I think it even appends to files (during the dump process).</p><p>The one thing that I never liked about the CFLog (and I may be off base here) is that you could not specify a location for the log file, only the name, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719856">4</a> by Raymond Camden
		posted on 11/21/2009 at 1:34 AM
		</div>
		<div class="comment_text"><p>Yep, cflog only logs to files within the CF logs folder. Obviously you can use cffile instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719854">5</a> by Budd Wright
		posted on 11/21/2009 at 9:43 AM
		</div>
		<div class="comment_text"><p>This might be slightly off topic, so I apologize ahead of time...</p><p>While I write to the CF logs, I sometimes opt for CFDump because of one reason: CF Log cleanup... I have the hardest time deleting log files through CF Administrator.  Click delete, say OK, and get back the Log Files screen showing my log file still there, undeleted!  A lot of times, during development, I want to start fresh with the log files after doing something that caused a lot of entries, and the server seems to lock the files and prevent deletion of the log files.  (Yes, you can shut down the CF service and delete the files, but that's a worse pain.)</p><p>Often times, I've figured out that if you just sit there and continuously click the delete button, eventually you can get lucky and have it deleted, but this is a problem I've noticed from CF7 all the way to CF9!</p><p>Any thoughts on this, Ray?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719853">6</a> by Raymond Camden
		posted on 11/21/2009 at 6:58 PM
		</div>
		<div class="comment_text"><p>I've seen that too. :( It seems mainly to be an issue with the default logs - so I'm wondering if its just hard to get a clean lock on the file to perform the delete.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719857">7</a> by Brian H.
		posted on 11/21/2009 at 9:16 PM
		</div>
		<div class="comment_text"><p>I am surprised Raymond. You are the maintainer of Coldfire Firefox plugin. I would have expected that you use &lt;cftrace/&gt; to debug text/complex data with ColdFire?  True that you don't get the disk logging that you can review at a later date, but being able to sprinkle in &lt;cftrace var="somevar"/&gt; and then see it expanded at the bottom of my screen is awfully nice.</p><p>Cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719851">8</a> by Raymond Camden
		posted on 11/21/2009 at 9:22 PM
		</div>
		<div class="comment_text"><p>I was one of the two creators of ColdFire, but Nathan Mische is now the maintainer.</p><p>Nothing at all wrong with cftrace - I'm just digging cflog more now. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719860">9</a> by Don
		posted on 2/2/2010 at 9:55 AM
		</div>
		<div class="comment_text"><p>on an only slightly related issue. I have found that in CF8 if you use trace in a cfc which is called via Ajax it throws an exception "Debugger not found" I don't know if this is a known issue or if I have configured something incorrectly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719859">10</a> by Raymond Camden
		posted on 2/2/2010 at 5:11 PM
		</div>
		<div class="comment_text"><p>Have you tried it with CF9? I'd suggest doing so - and if you replicate it - file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719864">11</a> by Don
		posted on 2/3/2010 at 8:24 AM
		</div>
		<div class="comment_text"><p>Tested trace in cf9, no error thrown but trace is ignored and not written to trace.log. writelog appears to work fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719875">12</a> by Don
		posted on 2/3/2010 at 8:57 AM
		</div>
		<div class="comment_text"><p>Spoke too soon. If you have "enable request debugging on" in cfadmin the ajax call fails when you have a trace even if inline is false. If you have enable request debugging off the ajax call works but the trace is not written to the tracelog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719874">13</a> by Don
		posted on 2/3/2010 at 9:53 AM
		</div>
		<div class="comment_text"><p>I have explained this in a bit more detail: <a href="http://disq.us/url?url=http%3A%2F%2Fblog.vawterconsultingservices.com%2Findex.cfm%2F2010%2F2%2F2%2FTrace-and-ajax-in-CF9%3AjOjGpgkqEM2vFQDcWzRDoy7v_ds&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.vawterconsultingservices.com/index.cfm/2010/2/2/Trace-and-ajax-in-CF9">http://blog.vawterconsultin...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719870">14</a> by Ramakrishna
		posted on 2/11/2014 at 3:21 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I am facing a problem in log file, in our application. Logs are deleting itself, is there any size constraint for log files. The deleted  logs were important for tracing a issue, is there any way to get back logs which are deleted</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719869">15</a> by Raymond Camden
		posted on 2/11/2014 at 9:22 PM
		</div>
		<div class="comment_text"><p>There is a feature in CF to delete logs. See the logging settings in the admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719873">16</a> by Misty
		posted on 3/2/2014 at 11:33 AM
		</div>
		<div class="comment_text"><p>Hi ray, I am using CFLOG and Coldfsuion10, I want to Log the logs in my external file specified by me the location.</p><p>It is unable to doing it, How can i do that, I am using the file attribute to it and using expandpath to locate the folder and log the issues there, but it is not doing that</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719877">17</a> by Raymond Camden
		posted on 3/2/2014 at 8:56 PM
		</div>
		<div class="comment_text"><p>CFLOG only logs to the main CF logs directory. If you want similar behavior outside of that dir, you need to use cffile.</p></div>
	</div>
</div>
		