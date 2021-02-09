
<div class="comment" id="c_1713724098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724098">1</a> by Grant
		posted on 5/4/2010 at 1:50 AM
		</div>
		<div class="comment_text"><p>Haha, I'll add the first comment, since it was my question.  :)   Just some examples / clarification of the different types of errors the ORM is throwing where I've thought, "huh... I wonder what's best".</p><p>Some are pretty fairly obvious, like form validation-type errors.  These include errors like: ( of course ) data format validation that could have gotten by javascript, duplicate data errors [ thrown by DB indexes ], that CF should react to after the submission.  These should be handled by display code.</p><p>The funny thing I noticed was that if I programmed my ORM to catch all the database errors with transactions and roll them back automatically, then nothing would happen on the form side.</p><p>The form would submit, and since my forms are so rockin' they would show the data the user just submitted, making it look like the user had a "good save". But really, the database rejected the submission and everything went "poof".</p><p>So, I realized that I had to let my Data Access Objects throw big nasty errors and let the form [ or hopefully in later versions ] some sort of event object collect those errors and do something with them, be it logging, alerting or what have you.</p><p>All of this seems pretty straightforward.  We've probably all dealt with this many times.  But the idea still floating around my head is a the need for a "error-catching design pattern".</p><p>I could go on about all the different types of errors and when they can happen, but that's outside the scope of this discussion.  If I had a pattern, some way to classify errors, subclass them, and / or deal with them programatically, I'd feel a lot better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724105">2</a> by Grant
		posted on 5/4/2010 at 1:59 AM
		</div>
		<div class="comment_text"><p>@Ray... I think we're asking the wrong question man.  I'm not very smart, but I've got that inking in the back of my head.</p><p>Something is saying to me, "some smart guy is going to read this and scoff, saying, 'you're asking the wrong question here'".</p><p>I'm not smart enough to predict what said smart guy is going to say the real question is, but I thought I'd throw it out there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724103">3</a> by Jason Fisher
		posted on 5/4/2010 at 2:19 AM
		</div>
		<div class="comment_text"><p>I don't think it's the wrong question at all, Grant.</p><p>When trapping a bad form input (invalid date got past the JavaScript, for example), then the error has to get back to the View layer in one way or another.</p><p>When trapping a bad data input (we already have that username in use in the DB ... valid format, but invalid data, for example), then we still need to throw a useful error back to the View, but we have to get down into the Controller and into the DB and back to the Controller to realize it's bad data.</p><p>There can be others, though, and sometimes I don't know there's going to be a problem until things are running, like Ray's example of a the bad RSS feed.  The user really doesn't need to know "this URL is not available or doesn't appear to be valid XML or valid RSS format", but they probably would like to know something happened, like "Your news feed is currently unavailable".  So, in the try/catch that's generically looking for 'problems with this feed', I like to return a standard message to the event model or the View, but I will also have a Notification widget that gets triggered on those, so that I can get the full cfcatch struct ... maybe I made my RSS parser too strict, or maybe this feed moved or maybe they switched to Atom and I didn't catch it.  In those cases, I can do something about it, fix the problem, but again the user never saw the raw error AND it didn't really fail silently.</p><p>At the same time, I do NOT want an email every time someone tries to enter 2/30/2010 as a valid date ... I just need to make that one the user's problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724104">4</a> by Tyler Clendenin
		posted on 5/4/2010 at 5:08 AM
		</div>
		<div class="comment_text"><p>Something I'm always wrestling with is how to gracefully show an error page when the error is in the framework.</p><p>For example, lets say that the main layout template has some variables that are initialized during some preprocess event, but the framework throws an error before those variables are created.  i can't just show my error page (which uses the main template layout) then can I.  Any good suggestions here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724106">5</a> by Russ S.
		posted on 5/7/2010 at 2:41 AM
		</div>
		<div class="comment_text"><p>I think that best practice is not to use try/catch except:<br>1. When accessing remote resources<br>2. When processing needs to continue even if there are errors<br>In all other cases, your code should be allowed to raise an exception to the application level. In the case of Coldfusion, that is Application.cfc's onError event handler.</p><p>It is important to remember that errors impact performance, whether you are using onError or try/catch.</p><p>When using try/catch blocks, I recommend setting up a notification system so that you know when those errors occur (since they won't be raised to the application level.) If an error occurs every time a piece of code is run, it should be fixed even if the error is "hidden" by a try/catch block.</p><p>When should you throw an error?<br>This is useful for logical errors, if you can anticipate them. Carefully consider the range of input your variables might have and the acceptable range of output. For example, a simple function that calculates BMI should throw an error if the result would be negative, rather than returning a value that makes absolutely no sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724100">6</a> by Grant
		posted on 7/14/2010 at 7:06 PM
		</div>
		<div class="comment_text"><p>I think I just discovered a "rule" for the "try/catch" practice.</p><p>Rule #1:  If writing a function to be called by other code, throw errors when function is called improperly.</p><p>Explanation:<br>Caller code should be able to see and react to this error, because otherwise "bubble up" effect would be lost and the caller could not reliably consume said function.</p><p>There may be caveats to this rule.  Shoot holes in this if you can please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724102">7</a> by Connie DeCinko
		posted on 3/9/2011 at 12:59 AM
		</div>
		<div class="comment_text"><p>Any ideas on how to try/catch an error when calling an external javascript?  For example, we call a javascript file at <a href="http://disq.us/url?url=http%3A%2F%2Ftraffic.com%3Af7rjr50C_baNwo7mEYpNi3_Qxpc&amp;cuid=3321886" rel="nofollow noopener" title="traffic.com">traffic.com</a> to display a traffic magnet.  If their service fails or does not completely return all of the expected html, our page breaks as we end up with incorrect/incomplete html.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724101">8</a> by Robert Zehnder
		posted on 3/9/2011 at 1:05 AM
		</div>
		<div class="comment_text"><p>Javascript has try/catch functionality, but having incorrect/incomplete HTML might be different than a "hard" error.</p></div>
	</div>
</div>
		