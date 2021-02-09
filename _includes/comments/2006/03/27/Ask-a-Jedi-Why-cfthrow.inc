
<div class="comment" id="c_1713651149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651149">1</a> by Ryan Guill
		posted on 3/28/2006 at 4:05 AM
		</div>
		<div class="comment_text"><p>We have used cfrethrow to throw a different sort of custom exception when a plain vanilla exception occurs.  Say for instance that for database exceptions and one other sort of exception, I want to show this error page, but for all others, show this one.  You catch the exceptions, and if it is one of your two, throw a different exception, otherwise, rethrow and let your error handling template take care of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651131">2</a> by Paul Roe
		posted on 3/28/2006 at 4:37 AM
		</div>
		<div class="comment_text"><p>I use rethrow all the time in a similar situation to the one you described.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651148">3</a> by Ulf Unger
		posted on 3/28/2006 at 4:30 PM
		</div>
		<div class="comment_text"><p>I think the possibility to throw errors is necessary for any (modern ?) programming language. Why? Because return values from methods should return something for what the method was made for - and nothing else. I totally agree with your opinion. It's time to forget those old C days with negative numerical values as return statements if an error occured.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651144">4</a> by Terrence Ryan
		posted on 3/28/2006 at 8:45 PM
		</div>
		<div class="comment_text"><p>I recently used cfrethrow to help with debugging.  I was running individual LDAP processes on 38,000 records, and getting an error halfway through.  However the LDAP error was pretty cryptic.  So, I caught the error, logged the details of the current record being processed, then rethrew the error to let standard error handling deal with the error. I was then able to figure out the error based on the content of the record.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651147">5</a> by Justin Judd
		posted on 3/29/2006 at 1:56 AM
		</div>
		<div class="comment_text"><p>I use &lt;cfrethrow&gt; to help debug an application. Often I will catch specific exceptions and handle them appropriately, but will also have a &lt;cfcatch type="any"&gt; to handle unexpected exceptions. The user gets a friendly "An unexpected error occurred" message, but the details are hidden. Within these &lt;cfcatch&gt; blocks I will have the following:</p><p>&lt;cfif session.showdebug&gt;&lt;cfrethrow /&gt;&lt;/cfif&gt;</p><p>When I am debugging a problem I can turn on my showdebug flag and see the raw exception information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651145">6</a> by todd
		posted on 3/30/2006 at 3:43 AM
		</div>
		<div class="comment_text"><p>i use cfrethrow within my cfc's that are called from flash remoting.  this allows me to catch the error, log it, email it (or whatever) and then rethrow the error to the result handler in the actionscript of the caller which has it's own handler for errors (unlike a typical cf page where you may redirect to a custom error page or what have you).  if the exception is not rethrown (and the return type is configured properly) then the error is returned to the calling page which is certainly not desirable.</p></div>
	</div>
</div>
		