
<div class="comment" id="c_1713665231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665231">1</a> by Cozmo
		posted on 5/16/2007 at 1:34 AM
		</div>
		<div class="comment_text"><p>Last time I looked PHP and ASP stored session data to disk. I know PHP 4&amp;5 puts it in a tmp dir.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665228">2</a> by Phillip Senn
		posted on 5/16/2007 at 1:34 AM
		</div>
		<div class="comment_text"><p>I think of a session as the memory address of where your variables are stored on the server.  For the user to keep his session, he needs to know that memory address.<br>ColdFusion does this by keeping the memory address in two variables: cfid and cftoken.<br>So the question is: Where are cfid and cftoken stored?<br>A: In the cookie scope.</p><p>Is that correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665227">3</a> by Raymond Camden
		posted on 5/16/2007 at 1:47 AM
		</div>
		<div class="comment_text"><p>PSenn: Not quite sure I'd word it that way... but I guess you are right. Although do know that CF supports getting CFID/CFTOKEN from URL/Form too. This lets you do cookieless sessions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665230">4</a> by David C-L
		posted on 5/16/2007 at 2:10 AM
		</div>
		<div class="comment_text"><p>One question that goes a little further is how do the use of these different variable scopes change when you use a cluster of web servers?</p><p>My clusters are load-balanced CF standard edition, so we just end up using client variables-- stored in a database-- for everything.  (Purging them is difficult, however-- the purge routine built-in to CF just locks everything up).</p><p>I remember we switched from client variables stored in cookies to client variables stored in the database a while back, although I no longer remember why we did this.  Possibly we didn't want customers to be able to see their client variables.  Are there other reasons?</p><p>How do session variables work across multiple servers in CF Enterprise Edition?  I have the impression there's some technology that allows that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665234">5</a> by DK
		posted on 5/16/2007 at 2:11 AM
		</div>
		<div class="comment_text"><p>To be fair there is session management via a database at the application level as some may have painfully had to experience in the past :)</p><p>You also forgot the fun layer, your enterprise firewall manages, in most cases, its own session on communication which can affect your Coldfusion sessions unwittingly based on its own security protocols :o</p><p>p.s. here are a couple links for session info if the OP is interested::</p><p>background on client and sessions (written for 6 but relevant)<br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F6%2FDeveloping_ColdFusion_MX_Applications_with_CFML%2FsharedVars3.htm%3AgvoXQs6FWnOqfVqHKLR5_qPJuh0&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/6/Developing_ColdFusion_MX_Applications_with_CFML/sharedVars3.htm">http://livedocs.adobe.com/c...</a></p><p>ColdFusion Support Center - Session Mgmt.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fsupport%2Fcoldfusion%2Fsession.html%3AJGmSeM7u5SifESeyPpM7zpodp0Y&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/support/coldfusion/session.html">http://www.adobe.com/suppor...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665229">6</a> by Dutch Rapley
		posted on 5/16/2007 at 2:47 AM
		</div>
		<div class="comment_text"><p>In the CF Administrator, you can set Maximum Timeout and Default Timeout for session (and application) variables.</p><p>For session variables, functionality works like the following:</p><p>Default Timeout</p><p>This is the default timeout for a session if the sessionTimeout variable isn't set in either &lt;cfapplication /&gt; or Application.cfc. Remember, a session's timeout period is based on the timestamp of the last request made to a server based upon the cfid/cftoken pair passed with the client request (or J2EE session id if you have that enabled in the CF administrator).</p><p>Maximum Timeout</p><p>The value set here can not be overridden by the sessionTimeout variable in &lt;cfapplication /&gt; or Application.cfc. For example, if you set the Maximum Timout in for session variables in the CF Administrator to be 45 minutes, and you set sessionTimeout to 90 minutes, sessions will still timeout in 45 minutes. On the flip-side, you can set sessionTimeout to 15 minutes, and your sessions will still timeout after 15 minutes of inactivity.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665235">7</a> by Dutch Rapley
		posted on 5/16/2007 at 3:09 AM
		</div>
		<div class="comment_text"><p>A Word on Using Session Variables</p><p>I'll also offer some insight and advice on using session variables and what value they have over client variables.</p><p>The main advantage to using session variables over client variables is that you aren't limited to literals. For example, you can store query results, structures, and arrays as session variables. You can't store those types of values as client variables unless you serialize them into an xml formatted string (i.e. using cfwddx). You can also invoke CFCs into the session scope.</p><p>In a former life, the session scope was very useful for storing variables like is_logged_in, user_name, user_roles. CFLOGIN and it's associated methods are actually better suited for those tasks now. While I don't frown upon the use of session variables, I do recommend in keeping their use very limited. As the number of open sessions grow, along with what's stored in session variables, the amount of memory consumed on the server also grows.</p><p>If you have an app where user's login, you probably also give them the ability to logout. When a user logs out, you really want to clear out the session structure for an associated user with the following (no quotes around session):</p><p>&lt;cfset StructClear(session)&gt;</p><p>This helps minimize any potential session hijacking that could take place b/c you clear out all variables in a user's session scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665236">8</a> by Dutch Rapley
		posted on 5/16/2007 at 3:22 AM
		</div>
		<div class="comment_text"><p>one more comment, and this is a best practice</p><p>please use &lt;CFLOCK&gt; when reading and writing session variables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665238">9</a> by Sam Curren
		posted on 5/16/2007 at 3:50 AM
		</div>
		<div class="comment_text"><p>Actually, you should only use &lt;CFLOCK&gt; in situations where race conditions are present. CF uses atomic reads and writes, so memory corruption will not occur. If your session variable reads and writes do not depend on each other, then locking them only adds overhead.</p><p>For example:<br>&lt;cfset session.myCounter = session.myCounter + 1/&gt;<br>needs to be locked, as the read, addition, and write operations are all separate operations. (perhaps the ++, +=, etc in Scorpio will be atomic?)</p><p>(in application.cfc onSessionStart)<br>&lt;cfset session.randomColor = "blue"/&gt;<br>(in any page)<br>&lt;cfoutput&gt;#session.randomColor#&lt;/cfoutput&gt;<br>does not need to be locked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665226">10</a> by David Lakein
		posted on 5/16/2007 at 4:40 AM
		</div>
		<div class="comment_text"><p>Atomic reads and writes for app and session variables didn't really come in until CFMX, so if you're still stuck on CF5, you will still need to lock all session var accesses, and especially application vars.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665232">11</a> by Dutch Rapley
		posted on 5/16/2007 at 7:08 AM
		</div>
		<div class="comment_text"><p>Sam,</p><p>You are right about two things, but I'm going to disagree with you overall and explain why. The implementation of atomic reads and writes in CF (and how it is explained) is very fuzzy, at best.</p><p>When using the functions like onSessionStart in Application.cfc to set session variables, you do not need to use CFLOCK.</p><p>CFLOCK can create performance bottlenecks, but it's not from using the CFLOCK tag. It comes from *how* one might use it. The scope most vulnerable to causing performance issues is the application scope. If you have quiet a few application variables that are constantly being read/written on each request, as the active users multiply, it becomes a waiting game for the read and exclusive locks that need to take place with each request that's in the queue. Ignoring CFLOCK isn't the solution to this performance issue; the real solution steering clear of using the application scope, unless absolutely necessary. The session scope is less vulnerable to this issue since session variables being read/written are specific to a single user, and not the complete application.</p><p>With that being said, I'm going to say a few words in regards to EXCLUSIVE and READONLY locks and how they apply to session scope variables.</p><p>EXCLUSIVE LOCKS<br>&lt;cflock scope="session" type="exclusive" throwontimeout="no" timeout="5"&gt;<br>&lt;!--- set session variables here ---&gt;<br>&lt;/cflock&gt;<br>(examples for the noobs)</p><p>The *only* time an exclusive lock is not necessary is when you're setting session variables in the onSessionStart method in Application.cfc. Exclusive locks should *always* be used when setting session scope variables, anywhere in your application, especially in Application.cfm.</p><p>READONLY LOCKS<br>&lt;cflock scope="session" type="readonly" throwontimeout="no" timeout="5"&gt;<br>&lt;!--- read session variables here ---&gt;<br>&lt;/cflock&gt;</p><p>The *only* time readonly locks are *not* necessary for reading session variables is when the particular variable being read is set in only one place within your application. The reason for this is that the session scope variable is safe to read without a lock b/c you know for a fact that no writes are going to be taking place, thus reads are save. If you have a session scope variable that you may be writing to multiple times through your application, you should always use readonly locks when reading session variables.</p><p>TO MAKE THINGS EASIER</p><p>No one likes to sprinkle CFLOCK tags through out their code, and granted you could see potential performance issues if you constantly have locks witing on one another. A possible solution would be to read your session variables into a local variable at the beginning of each request, and write them back at the end of each request, so that you are always manipulating your session variables in the local scope. It would be ideal if you could do this in onRequestStart and onRequestEnd in Application.cfc, but session scope variables aren't available in these two methods in Application.cfc.</p><p>If you're using a framework (such as Fusebox), it should be non-trivial to do this before and after each request. If you're not using Application.cfc, you can also do the following in Applicaiton.cfm (before the request) and OnRequestEnd.cfm (after the request).</p><p>At the BEGINNING of each request:</p><p>	&lt;cfif NOT isDefined("session.session_vars")&gt;<br>	&lt;cflock scope="session" type="exclusive" throwontimeout="no" timeout="yes"&gt;	<br>		&lt;cfset session.session_vars = StructNew() /&gt;<br>	&lt;/cflock&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cflock scope="session" type="readonly" throwontimeout="no" timeout="yes"&gt;<br>		&lt;cfset session_vars = Duplicate(session.session_vars) /&gt;<br>	&lt;/cflock&gt;</p><p>At the END of each request:</p><p>	&lt;cflock scope="session" type="exclusive" throwontimeout="no" timeout="yes"&gt;<br>		&lt;cfset session.session_vars = Duplicate(variables.session_vars) /&gt;<br>	&lt;/cflock&gt;</p><p>Using the above example, you would set your "session" variables in the local scope in the following manner: &lt;cfset session_vars.user_name = form.user_name /&gt; At the end of each request, the structure session_vars would be written back to session scope.</p><p>I used Duplicate() instead of StructCopy() here b/c Duplicate() copies the complete structure, whereas StructCopy() only references anything beyond the top level.</p><p>disclaimer: I did reference the documentation for CFMX 7 before providing this response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665233">12</a> by Sam Curren
		posted on 5/16/2007 at 8:37 AM
		</div>
		<div class="comment_text"><p>David: I sometimes forget that some companies/organizations can be such a pain to deal with on the upgrade cycle. I was referring specifically to post MX.</p><p>Dutch: Your explanation is clear and well done, but leaves a few holes.<br>While the description of atomic operations is fuzzy in the CF documentation, we know that CF is java at the core. The only way java reads and writes single objects to memory is atomic by nature. Since CF variables are dressed up java (ala String, etc.) then we can be sure that reads and writes are atomic.</p><p>&lt;details&gt;&lt;!--- for posterity ---&gt;<br>An atomic operation is one that you can be sure completes execution before any other operations are executed. Prior to MX, CF was C at the core, which did not have atomic reads and writes. One executing thread could start reading a string, interrupted by a second thread that overwrites the contents of the variable in memory, and returns to read the last part of the newly written string. Potentially, unlocked reads could result in AAAAABBBBB, where A is part of the original string, and B is part of the newly written string. In Java, every variable read and write is atomic. Frankenstein reads as described above never occur.<br>&lt;/details&gt;</p><p>Because we can be sure that reads and writes are atomic, then locking variables to read and write them (as long as the reads and writes do not depend on each other.. see below) only adds the overhead of locking.</p><p>While causing threads to wait on a busy server can introduce delay, using CFLOCK does carry some overhead by itself. It also makes code harder to read and maintain.</p><p>Time for an example:</p><p>(to start) &lt;cfset foo = "bar"/&gt;</p><p>Thread A: &lt;cfset foo = "cheese"/&gt;<br>Thread B: &lt;cfoutput&gt;#foo#&lt;/cfoutput&gt;</p><p>The output of thread B depends on which instruction is executed first, A or B. If both threads are executing simultaneously, then it really is luck of the draw which instruction will be executed first.<br>Putting an exclusive lock in A, and a read lock in B will not actually change the behavior at all, except to introduce a little overhead and potentially make one thread wait for the other.</p><p>Now, to be more clear about when locking IS required:</p><p>Since only reads and writes are atomic, a single line of CF code isn't necessarily safe. Consider:</p><p>&lt;cfset session.myCounter = session.myCounter + 1/&gt;</p><p>If this line of code is being executed in two different threads at the same time, the following is possible:</p><p>(initial value of session.myCounter = 7)</p><p>A: read session.myCounter(7)<br>B: read session.myCounter(7)<br>A: write session.myCounter = 7+1<br>B: write session.myCounter = 7+1</p><p>The final value of session.myCounter will be 8, when it should have been 9. Placing this line of code within an exclusive lock will ensure the proper behavior.</p><p>This situation happens because the reads and writes within the section of code depend on each other. This same situation can happen if you update any shared scope variable with the value from another shared scope value.</p><p>Your example of copying the shared scope into a local scope and then writing it back at the end has some problems. If two threads are between the start (read into local scope) and write (copy back to shared scope), then the thread that finishes last will completely overwrite all changes made by the other thread. If you had some counter variables like my example above, then the end result would be just as incorrect as not using locking at all. The final counter variable would indeed be incorrect.</p><p>By only locking race conditions, we can avoid sprinkling cflock tags, avoid the overhead, keep our code readable, and prevent data corruption.</p><p>I hope that my response here isn't turning anyone red in the face. I appreciate a good in-depth discussion of how this stuff works. I've been learned quite a bit by googling into discussions just like this one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665241">13</a> by Raymond Camden
		posted on 5/16/2007 at 3:23 PM
		</div>
		<div class="comment_text"><p>I just want to ditto Sam here -  you absolutely do NOT need cflock for writing to session/app vars unless you have a possible race condition.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665246">14</a> by Dutch Rapley
		posted on 5/16/2007 at 6:15 PM
		</div>
		<div class="comment_text"><p>Sam,</p><p>Thanks for the clarification. Although I've been building CF apps since before MX, and know enough Java to be dangerous, I don't know much about Java under the hood.</p><p>While you do mention it's not necessary to use locking, the CF MX 7 Developers Guide still says otherwise. Please let me know if I'm using the following excerpts out of context b/c I do like being informed.</p><p>"You do not need to use cflock when you read a variable or call a user-defined function name in the Session, application, or Server scope if it is set in only one place in the application, and is only read (or called, for a UDF) everywhere else. Such data is called write-once. If you set an Application or Session scope variable in Application.cfm and never set it on any other pages, you must lock the code that sets the variable, but do not have to lock code on other pages that reads the variable’s value."</p><p>"However, although leaving code that uses write-once data unlocked can improve application performance, it also has risks. You must ensure that the variables are truly written only once. For example, you must ensure that the variable is not rewritten if the user refreshes the browser or<br>clicks a back button."</p><p>There is no mention of race conitions, and the documentation even warns that it is even risky to *not* use CFLOCK for reads on shared scope (application, server, and session) variables even if they are write-once.</p><p>From what I understand about atomic operations, if multiple reads are taking place, no writes will occur until all reads have completed. If a write is taking place, no reads will occur until the write has completed.</p><p>Sam, as you have pointed out, atomic operations safeguard variables from corruption, but still do not make them thread safe. Granted, it's probably a rare instance where we have to worry about the order of thread execution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665249">15</a> by Raymond Camden
		posted on 5/16/2007 at 6:24 PM
		</div>
		<div class="comment_text"><p>I think it depends on your context. Consider the Application variable all of us use - DSN. In the Application.cfm file, there is no way to say, "Run this code once" automatically like you do in Application.cfc. So you typically do this:</p><p>(pseudo code)</p><p>if not isdefined app.dsn<br>  set app.dsn = ""<br>end if</p><p>Ok - so if you don't use cflock here, it is possible the 2-N threads can run this code at the same time. HOWEVER - who cares! It is no big deal if a few people set app.dsn. It is mildly wasteful, but it isn't worth the hassle to add the locks. Even if you had a variable like app.timestarted to record when the app started up, you can probably ignore the locks if you don't care if it is 2-10 ms off the 'real' first hit.</p><p>Does this make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665252">16</a> by Sam Curren
		posted on 5/16/2007 at 6:45 PM
		</div>
		<div class="comment_text"><p>To add to what Ray has said...</p><p>Worrying about the order of thread execution can be a serious problem. Under a small load, the probability of having a race condition flare up on you is pretty small. Under a large load, race condition errors show up more often, and when they do show up its a pain because they can be very hard to debug. Because thread scheduling on the processor is non-deterministic, the bug will show up occasionally, and in sometimes random ways. Worse, you can never actually realize there is a bug, even though your data comes out wrong.</p><p>I guess the moral of the story is that its important to know when locking is needed, and then to take the effort lock those specific places.</p><p>The CF documentation is very sparse, and slightly outdated when it comes to locking. We know that we only need to lock race conditions, and I'm going to attempt to explain what that means here (mostly for the google user that stumbles into this unaware).</p><p>Race conditions can occur anytime you are reading and/or writing multiple variables in a shared scope. This can be a one liner, updating a counter:</p><p>&lt;cfset session.myCounter = session.myCounter + 1/&gt;</p><p>This can also be a block of code where several variables need to be updated at once. Excuse my simplistic example:</p><p>&lt;cfset session.myCounter = session.myCounter + 1/&gt;<br>&lt;cfset session.isOddCounter = (session.myCounter MOD 2) EQ 1/&gt;</p><p>If the first part of the one line example runs, then the thread is swapped out, then the value can be incorrect when the thread returns.<br>If the second line of the two line example runs after the thread returns, then some scripts running in the meantime can have an even value for session.myCounter and session.isOddCounter equal to true.</p><p>Although not a race condition, I also lock sections of my code that are very processor intensive, to ensure that only one thread is running at once. This includes scheduled tasks, as they generally execute a series of statements that I only want executed once per batch.</p><p>Referring to Ray's comment: There are times when a race condition can occur, and we just don't care. If a variable is set multiple times to the same thing, or a random value is generated several times unnecessarily, then it isn't worth the trouble. Ray's previous comment explains that well.</p><p>Thanks all for being willing to discuss this. If I've made a mistake, then please correct it so that I can learn and others can find the thread. I may know this well, but I'll need some help in other areas for sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665251">17</a> by Dutch Rapley
		posted on 5/16/2007 at 9:05 PM
		</div>
		<div class="comment_text"><p>Sam, your feedback and knowledge is greatly appreciated.</p><p>The moral of the story is that locking of variables is not necessary as the variables themselves are protected with atomic operations.</p><p>In Rays example, it really doesn't matter if the application variable is set twice with two different threads b/c the variable will always be set to the same value.</p><p>I did find a race condition example, just like Sam's, in the documentation. The documentation did made an excellent case for when to use cflock with shared scope variables, comparing setting a block of shared scope variables to that of a database transaction:</p><p>"For example, an application might store information about order items in a Session scope shopping cart. If the user submits an item selection page with data specifying sage green size 36 shorts, and then resubmits the item specifying sea blue size 34 shorts, the application might end up with a mixture of information from the two orders, such as sage green size 34 shorts."</p><p>"By putting the code that sets all of the related session variables in a single cflock tag, you ensure that all the variables get set together. In other words, setting all of the variables becomes an atomic, or single, operation. It is similar to a database transaction, where everything in the transaction happens, or nothing happens. In this example, the order details for the first order all get set, and then they are replaced with the details from the second order."</p><p>Once again, thanks for all your feedback and insight, it's greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665250">18</a> by Elliott Sprehn
		posted on 5/17/2007 at 1:16 AM
		</div>
		<div class="comment_text"><p>@Dutch</p><p>Examples like that are misleading though. In well structured CF code you probably shouldn't be appending random data members to a shared scope that aren't in some kind of singular object (ie CFC or Struct).</p><p>For instance, if you want to store user information in the session scope you should really be storing a cfc instance or a structure, not appending the data members to the top level of the session scope.</p><p>We can approach the concept of shared data differently and avoid the need for locks as well.</p><p>A good example of this is if we are thinking about loading a config file dynamically at runtime into a CFC instance that's a factory. We could lock the operation that loads the file and sets the properties, or even the operation that makes the instance, but neither is really required.</p><p>If we grab hold of the factory object in a local variable and use that in this request, and  then someone else attempts to load the modified config file there's no reason to lock here. We can just create the new factory and set the proper shared data member. Anyone who had the old data will complete their request with it, new requests get the new config. The factory and config are immutable and can never change mid request so locking isn't even required at all.</p><p>The only reason we might consider adding a lock is if we wanted to prevent two requests from reloading the config and creating a new instance of the factory at the same time. We might just let that happen though, since it won't cause an inconsistent state.</p><p>Using this methodology, we could really do away with the lock in the /ModelGlue/unity/ModelGlue.cfm file too, in fact, I'm pretty sure the code is structured in such a way that it's possible now. The lock here could be seen as beneficial though, as it is preventing multiple requests from attempting to load the ColdSpring.xml and ModelGlue.xml at the same time, which is quite expensive. Even so, the fact it's possible is of notable mention when we think about designing our own applications.</p><p>Using a singular immutable object is a good alternative to locking. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665255">19</a> by John Elkins
		posted on 5/17/2007 at 6:32 AM
		</div>
		<div class="comment_text"><p>@Davic C-L</p><p>"(Purging them is difficult, however-- the purge routine built-in to CF just locks everything up)."</p><p>I am going through this issue now client variables...</p><p>How did you overcome this problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665253">20</a> by David C-L
		posted on 5/17/2007 at 8:13 PM
		</div>
		<div class="comment_text"><p>We haven't found a good solution-- if the site is running, the incoming data and the purge routine end up in lock contention and it all comes down.</p><p>What we do currently is just truncate the entire client data store once a week.</p><p>In order to do this without problems, we actually take our site down for about 30 seconds (putting up a plain HTML "we are down for maintenance page" in its place), truncate both CDATA and CGLOBAL, then bring the site back up.  If we don't do this, we end up with a small number of clients who hit the site between truncates and have data in one table but not the other, which generates hard-to-troubleshoot errors.</p><p>Obviously this isn't an ideal solution-- it means that client data is pretty transient.  Since we use this mostly for session state type stuff, this means that any session which begins before our maintenance routine is essentially ended by the running of that routine.</p><p>We're still looking for a better answer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665248">21</a> by David
		posted on 12/11/2009 at 8:36 PM
		</div>
		<div class="comment_text"><p>I really have a question and not a comment, if a site of average size uses session variable to store all its db queries (lets say  up to 20 quries) and page content (lets say 30 pages) as opposed to caching do you see any major problems with that site?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665256">22</a> by David C-L
		posted on 12/11/2009 at 9:13 PM
		</div>
		<div class="comment_text"><p>Wow, this entry is a blast from the past.</p><p>@David, the problem with your question is that "site of average size" is not a meaningful statement.</p><p>If the queries you're talking about are unique to each user, this is probably a reasonable use of session variables.</p><p>However, if the queries content site content, I'd say this is a poor practice.  Storing content query information in sessions doesn't make sense as your server will need to have many copies of the same data-- one for each user session; if you get a spike in traffic your server could potentially run out of memory pretty quickly (depending on how much content there is and how much memory you have and other factors).</p><p>If you want to store content queries in a memory variable rather than using CF's caching features, the application scope is probably a better choice than session.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665247">23</a> by Raymond Camden
		posted on 12/11/2009 at 9:20 PM
		</div>
		<div class="comment_text"><p>David, David C-L's response is dead on. I'd also point out that search engines tend to make a new session on every request as they ignore cookies. So you may end up with a BUTT load of session-based queries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665254">24</a> by David
		posted on 12/11/2009 at 10:35 PM
		</div>
		<div class="comment_text"><p>@ David Thanks for your dead on quick response, you have helped me solidify my case... and thanks Ray for your added response.</p></div>
	</div>
</div>
		