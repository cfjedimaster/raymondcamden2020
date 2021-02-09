
<div class="comment" id="c_1713673845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673845">1</a> by Terrence Ryan
		posted on 10/31/2007 at 10:33 PM
		</div>
		<div class="comment_text"><p>I would also criticize:</p><p>The lack of var scoping, even in an Application.cfc it should be done.</p><p>The select *'s.</p><p>And thispath and ThisDirectory not being the same as this.path, and <a href="http://disq.us/url?url=http%3A%2F%2Fthis.directory%3A8IN9kSUejGdiNfDqUTTk_lsNtN4&amp;cuid=3321886" rel="nofollow noopener" title="this.directory">this.directory</a>. They're not used in the application.cfc.  They would probably also be better set in onapplicationstart, directly into the application scope. But that might be personal preference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673834">2</a> by Andrew
		posted on 10/31/2007 at 10:39 PM
		</div>
		<div class="comment_text"><p>When you say:</p><p>"While the try/catch/cfldap is commented out - his intent - a "test" hit to see if his ldap server is up - is good. But he did it in the constructor. Stuff like this should be done in an onApplicationStart method."</p><p>Can you define "stuff"?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673848">3</a> by Raymond Camden
		posted on 10/31/2007 at 10:46 PM
		</div>
		<div class="comment_text"><p>Stuff = Things that only need to be done once. Ie, you (typically) would only do such a test when the Application is starting up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673830">4</a> by Dan Vega
		posted on 10/31/2007 at 10:54 PM
		</div>
		<div class="comment_text"><p>I disagree that you should "never" call the methods and that it should be left up to CF. I have code that will look for some url var and call the onApplicationStart() or onSessionStart() method to re initialize some variables or components. Outside of that I would agree with that statement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673840">5</a> by William from Lagos
		posted on 10/31/2007 at 10:59 PM
		</div>
		<div class="comment_text"><p>Wow, you could also comment on the sessiontimeout value.</p><p>It's kinda cool to look into how other ColdFusion programmers code their applications. Wouldn't it be nice to have a repository where people can submit their Application.cfc for the purpose of sharing standard and best coding practices.</p><p>Check out mine here, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.williamukoh.com%2Fdocuments%2Fpersonal%2FApplication.cfc.txt%3Ai4a-mUaj-e8ep_oYw7FlOXmPcGc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.williamukoh.com/documents/personal/Application.cfc.txt">http://www.williamukoh.com/...</a></p><p>In addition to other specific requirements every application I develop will need in the Application.cfc, I always ensure my Application.cfc does the following</p><p>1. Reads the web applications's config file (*.ini file from a non-http accessible location)<br>2. Tracks users of the application<br>3. Imports required UDFs<br>4. Handles error reporting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673827">6</a> by Raymond Camden
		posted on 10/31/2007 at 11:09 PM
		</div>
		<div class="comment_text"><p>@Dan: I do that as well (a url hook to run onApplicationStart()). I don't think I said 'never' for that - but I definitely should have mentioned the times when it is cool to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673843">7</a> by Sean Corfield
		posted on 10/31/2007 at 11:12 PM
		</div>
		<div class="comment_text"><p>@Dan, instead of calling an onXyz() handler directly, I'd pull the common code out into another function and call that instead (from all of the onXyz() handlers that need it). That keeps the handlers independent and emphasizes the "commonness" of the code in the function that multiple handlers call.</p><p>On var scoping, I will point out that a fresh instance of Application.cfc is created *for every request* so there are no threading issues here. Also, unless you use onRequest(), neither your unscoped variables nor your variables scope itself will bleed into the requested template.</p><p>On that point, the pseudo-constructor for Application.cfc is executed on *every request* - so you might as well put other "stuff" in onRequestStart() (unless you need it to execute on the first request *before* onApplicationStart() or on the first request of a session *before* onSessionStart()...)</p><p>The order of execution is:</p><p>* pseudo-constructor</p><p>* onApplicationStart() if this is the first request for an application - CF locks the application so that there can be no threading issues (so you don't need to lock)</p><p>* onSessionStart() if this is the first request for this session - again CF locks the session so that there can be no threading issues (so you don't need to lock)</p><p>* onRequestStart()</p><p>* onRequest() if present - and it must include the requested template - and you must not use onRequest() with web services or AJAX/Flex data requests!</p><p>* onRequestEnd()</p><p>* onSessionEnd() in the background when a session ends (you cannot reference 'session' or 'application' directly at this point)</p><p>* onApplicationStart() in the background when an application times out (again, you cannot reference 'application' directly here)</p><p>It's important to keep this lifecycle in mind when using Application.cfc. Also, if you reinitialize application or session variables from a "later" handler, you may need to lock to prevent race conditions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673831">8</a> by Raymond Camden
		posted on 10/31/2007 at 11:20 PM
		</div>
		<div class="comment_text"><p>@Sean - I think you meant onApplicationEnd there (your last bullet)</p><p>Even if var scoping may not be needed... I'd still use it. Just to be consistent. I've heard consistency is a good thing. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673851">9</a> by Andrew
		posted on 11/1/2007 at 2:34 AM
		</div>
		<div class="comment_text"><p>If the pseudo-constructor is called for every request, wouldn't it be better to put the following into onApplicationStart():</p><p>  &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> = "Intranet"&gt;<br>  &lt;cfset this.loginStorage = "session" /&gt;<br>  &lt;cfset this.sessionManagement = true /&gt;<br>  &lt;cfset this.scriptProtect = true /&gt;<br>  &lt;cfset this.setClientCookies = false /&gt;<br>  &lt;cfset this.setDomainCookies = false /&gt;<br>  &lt;cfset this.sessionTimeOut = CreateTimeSpan(0,2,0,0) /&gt;<br>  &lt;cfset this.applicationTimeOut = CreateTimeSpan(2,0,0,0) /&gt;</p><p>These app setting don't need to be set for every request, just on app start correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673846">10</a> by Raymond Camden
		posted on 11/1/2007 at 7:37 PM
		</div>
		<div class="comment_text"><p>No. Those settings are fine where they are.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673847">11</a> by Adam Soltys
		posted on 11/2/2007 at 8:34 AM
		</div>
		<div class="comment_text"><p>Ray, can you elaborate a bit?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673853">12</a> by Sean Corfield
		posted on 11/2/2007 at 10:21 AM
		</div>
		<div class="comment_text"><p>@Ray, yes, onApplicationEnd() - copy'n'paste bit me. Yes, I'd use var too... just pointing out it's not really needed here.</p><p>@Andrew, the settings must execute on every request. Remember that you can change the application name on every request and associate that request with any application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673854">13</a> by Raymond Camden
		posted on 11/2/2007 at 3:23 PM
		</div>
		<div class="comment_text"><p>@Adam  - Elaborate on what?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673855">14</a> by Adam Tuttle
		posted on 11/2/2007 at 10:46 PM
		</div>
		<div class="comment_text"><p>Thanks for posting the order of execution, Sean. If it's not already on Ray's Application.cfc reference, I'm going to bust out a PEN and write it on my printed copy.</p><p>Unless code from the pseudo-constructor is needed in your onApplicationStart() and/or onSessionStart() methods, couldn't it just as easily go in onRequestStart()? I know I have applications where the pseudo-constructor defines the DSN for instance, but it isn't used in onApplicationStart() or onSessionStart() [because sessions aren't used].</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673858">15</a> by Adam Tuttle
		posted on 11/2/2007 at 10:52 PM
		</div>
		<div class="comment_text"><p>Ok so I basically just restated something Sean had written. Oh well. Ignore me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673859">16</a> by Patrick
		posted on 11/6/2007 at 1:04 PM
		</div>
		<div class="comment_text"><p>@Ray<br>Thanks for the review. But in one point i disagree. I won't put my LDAP Test in onApplicationStart(). The Application runs for two days, what if the LDAP crashes after ie 3 hours?<br>Isn't it better to put it into onRequestStart()?</p><p>Sorry for my english...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673860">17</a> by Patrick
		posted on 11/6/2007 at 1:09 PM
		</div>
		<div class="comment_text"><p>I meant onSessionStart() of course...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673861">18</a> by Raymond Camden
		posted on 11/6/2007 at 5:16 PM
		</div>
		<div class="comment_text"><p>I understand the need to see if LDAP is up, but that is possibly an expensive hit to do on every Request. I wouldn't do it in onSessionStart either. If you didn't trust doing it once in onApplicationStart, I'd consider logging into the Application scope the last time of the test. cfset application.lastldaptest = now. In onRequestStart, check that value and if more than N hours old, run it again.</p></div>
	</div>
</div>
		