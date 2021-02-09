
<div class="comment" id="c_1713616937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616937">1</a> by Tim
		posted on 5/25/2005 at 9:27 PM
		</div>
		<div class="comment_text"><p>I posted this in the Macr forums, but no response. When I add this code to my onError function, I now get an error saying rootCause is not defined in the exception argument. When I dump the exception argument, all I see is a TagContext. So I still get all the errors from CFLOCATION tags.</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616927">2</a> by Raymond Camden
		posted on 5/25/2005 at 11:41 PM
		</div>
		<div class="comment_text"><p>You should probably check to see if rootcause exists in the exception struct.</p><p>So,</p><p>cfif structkeyexists(arguments.exception,"rootCause") and .....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616936">3</a> by Tim
		posted on 5/26/2005 at 12:02 AM
		</div>
		<div class="comment_text"><p>Yes, I do that--which is great but it still doesnt help with the cflocation auto-triggering the onError function. All my cflocation tags trigger this, and the fix for the rootCause checking doesnt help me. Any pointers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616938">4</a> by Raymond Camden
		posted on 5/26/2005 at 12:05 AM
		</div>
		<div class="comment_text"><p>odd - I don't seem to remember seeing cflocation triggering onerror. You sure you aren't using a beta?</p><p>Anyway - why not simply cfdump the exception and see if it is obvious what the exception is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616941">5</a> by Tim
		posted on 5/26/2005 at 1:08 AM
		</div>
		<div class="comment_text"><p>Your blog entry even says cflocation will trigger the error--and it does indeed.</p><p>I am running a full version of MX7 with the second hotfix.</p><p>I added a CFDUMP of the exception structure in my onError tag. Turns out in your blog you say to use rootCause, but that doesnt exist. What does exist is "Type". So the example code in your entry should be this:</p><p>&lt;cfif StructKeyExists(arguments.exception,"type") and arguments.exception.type eq "coldfusion.runtime.AbortException"&gt;<br>	&lt;cfreturn/&gt;<br>&lt;/cfif&gt;</p><p>Thanks for helping me lead to the right answer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616943">6</a> by Raymond Camden
		posted on 5/26/2005 at 1:48 AM
		</div>
		<div class="comment_text"><p>Yes, you are right - sorry for that. I'll try to update the entry a bit later today!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616940">7</a> by John
		posted on 5/26/2005 at 4:31 AM
		</div>
		<div class="comment_text"><p>Tim,<br>When I try the code you just posted I receive this error:<br> Element EXCEPTION is undefined in ARGUMENTS<br>I assume you are not receiving this error message, so I wonder what I could be doing wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616944">8</a> by Tim
		posted on 5/26/2005 at 9:36 AM
		</div>
		<div class="comment_text"><p>Here is the whole content of my onError function:</p><p>&lt;cffunction name="onError"&gt;<br>   &lt;cfargument name="Exception" required=true/&gt;<br>   &lt;cfargument type="String" name="EventName" required=true/&gt;</p><p>&lt;cfif StructKeyExists(arguments.exception,"type") and arguments.exception.type eq "coldfusion.runtime.AbortException"&gt;<br>   &lt;cfreturn/&gt;<br>&lt;/cfif&gt;<br>... code to display error message to user...</p><p>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616946">9</a> by Justice
		posted on 10/24/2005 at 3:47 PM
		</div>
		<div class="comment_text"><p>You guys are my hero.  I am completely embracing the new application.cfc method.  My only other beef so far is that, when I was using the 'cflogin' method of maintaining authentication, code that I put in 'onSessionEnd' would never properly execute a 'cflogout'.  I ended up maintaining user log-in state in an application.array and simply removing them onSessionEnd.  Otherwise, my users would always get 'you are already logged in' every time they walked away and came back to their desks after the session timeout.  Oh well, there are too many advantages to using the application.cfc to quibble over small stuff.</p><p>Quick question:  Does anyone else here include template-style code in the onRequest block?  I have a cfinclude of all header style code right before my cfinclude of #argument.thePage#.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616939">10</a> by Raymond Camden
		posted on 10/24/2005 at 4:59 PM
		</div>
		<div class="comment_text"><p>Justice - If you have tied your security to session with loginstore=session, then this makes sense. In onSessionEnd, the session is already dead, therefore cflogout has no purpose. You can just ignore it. Just noticed you said they get 'already logged in' messages. Try adding loginstorage="session" (in the This scope, like other settings) and see if that helps.</p><p>I do NOT do layout in onRequest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616947">11</a> by Justice
		posted on 10/24/2005 at 5:04 PM
		</div>
		<div class="comment_text"><p>Well, for whatever reason (even tho I have loginstorage set to session) I would still have to re-start the server to allow a user to log back in.  I must have something mucked up somewhere =)</p><p>Is there a reason you do not do any other code in onRequest?  ie, I have an include that just has my CSS links, and 2 javascript references in it.  What would be the difference in putting this in an include on each page?  I used to do this in my application.cfm file.  Where should it go when using application.cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616945">12</a> by Raymond Camden
		posted on 10/24/2005 at 5:06 PM
		</div>
		<div class="comment_text"><p>I'll double check the session/onsessionend/cflogon thing today, cuz that definitely sounds wrong.</p><p>I rarely use onRequest since it impacts web services and flash remoting. That being said, I do layout in a custom tag. If you did it in onRequest, it would mean EVERY page would you use the layout, which would be a problem if your site had popups, or if you wanted something different before a person was logged in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616942">13</a> by Derek
		posted on 4/17/2006 at 8:50 AM
		</div>
		<div class="comment_text"><p>This code I inherited uses onRequest. I want to use AJAX and this is preventing it. I tried the sep app.cfc trick, but no go, or I am doing it wrong. the whole app.cfc is new to me.<br>So how do I remove this w/o errors?</p><p>	&lt;cffunction name="onRequest" returnType="void"&gt;<br>		 &lt;cfargument name="thePage" type="string" required="true"&gt;<br>		 &lt;cfinclude template="#arguments.thePage#"&gt;<br>	&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616951">14</a> by Raymond Camden
		posted on 4/17/2006 at 5:08 PM
		</div>
		<div class="comment_text"><p>Just remove it. Your onRequest is doing nothing (technically it is doing something, but functionally it is not), so just remove that onRequest method and see if it helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616949">15</a> by Derek
		posted on 4/17/2006 at 6:06 PM
		</div>
		<div class="comment_text"><p>I tried that, but get an error that it can't find a UDF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616948">16</a> by Raymond Camden
		posted on 4/17/2006 at 6:20 PM
		</div>
		<div class="comment_text"><p>If your page is trying to load a UDF, then you need to cfinclude it. One thing people use onRequest for is to load UDFs into the variables scope. Perhaps your onRequest had it? The one you had pasted did NOT do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616950">17</a> by Derek
		posted on 4/17/2006 at 6:37 PM
		</div>
		<div class="comment_text"><p>The udfs are getting loaded on the onRequestStart</p><p>	&lt;cffunction name="onRequestStart" returnType="boolean" output="false"&gt;<br>		 &lt;cfargument name="thePage" type="string" required="true"&gt;<br>			 &lt;cfscript&gt;<br>				if(NOT IsDefined("Application.Init") OR IsDefined("URL.ReInit")){<br>				// init the bookiecharts cfc<br>				Temp = createObject("component","bookiecharts.cfcs.settings").InitApplication();<br>				//Set Global Init app flag var to true<br>				Application.Init = true;<br>				}<br>			&lt;/cfscript&gt;</p><p>			&lt;!--- Call the FormURL2Attributes tag ---&gt;<br>			&lt;cfmodule template="/#Application.Settings.RootMapping#/customtags/FormURL2Attributes.cfm"&gt;		<br>			&lt;cfinclude template="/#Application.Settings.RootMapping#/udfs/udfs.cfm"&gt;<br>			&lt;cfsetting showdebugoutput="yes"&gt;<br>		 &lt;cfreturn true&gt;<br>	&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616953">18</a> by Raymond Camden
		posted on 4/17/2006 at 6:50 PM
		</div>
		<div class="comment_text"><p>I'm not sure what to tell you then. Commenting out the onRequest should not have c... ohhh. Ok, so if I remember right, the presense of onRequest has the side effect of copying the variables from the CFC to your page's Variables scope.</p><p>THe problem you have is that onRequestStart is using it's OWN variables scope now. So your page doesn't have access to the UDFs. What you need to do, or what you CAN do I should say, is consider simply copying the UDFs to the request scope. Then you change any call like so, result = someUDF(), to: result = request.udfs.someUDF().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616952">19</a> by Derek
		posted on 4/17/2006 at 7:09 PM
		</div>
		<div class="comment_text"><p>cool, that worked. Now to tackle my ajax.cfc issue. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616954">20</a> by Ben Nadel
		posted on 4/21/2006 at 5:02 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, that just helped me after 30 minutes of beating my head against the wall :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616960">21</a> by Stefan
		posted on 12/30/2006 at 4:37 AM
		</div>
		<div class="comment_text"><p>Example in blog is still incorrect. Examples for onError seems to be incorrect everywhere, including on the LiveDocs. Where do this 'rootCause' come from? An early beta? It does not exist in my exceptions anyway, that's for sure.</p><p>Happy new year,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616958">22</a> by Raymond Camden
		posted on 12/30/2006 at 4:47 AM
		</div>
		<div class="comment_text"><p>It does exist - just not always. The code should be updated to _first_ check for the existence, and THEN check the value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616956">23</a> by Stefan
		posted on 12/30/2006 at 6:40 AM
		</div>
		<div class="comment_text"><p>Ok, found it... but in my tests rootCause contains the original error struct, like arguments.exception.rootCause.type etc and therefore you would also need to check if arguments.exception.rootCause is a simple value? <br>Actually, I can not get a onError triggered by cflocation at all. I tried:<br>&lt;cffunction name="onError" returnType="void"&gt;<br> &lt;cfargument name="Exception" required=true/&gt;<br> &lt;cfargument name="EventName" type="String" required=true/&gt;<br> &lt;cflog text="onError triggered" file="RedirLog"&gt;<br>&lt;/cffunction&gt;<br>But it does not react at all on my cflocations. Any tip of how I should detect cflocation?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616957">24</a> by Raymond Camden
		posted on 12/31/2006 at 12:21 AM
		</div>
		<div class="comment_text"><p>To be honest, I seem to remember issues with cflocation AND cfabort, and the behavior changing from 7 to 7.0.2. It may even be totally fixed in 7.0.2 which may explain why you can't reproduce it. One quick tip - you can always wrap a cfdump of the arguments in onerror inside a cfsavecontent and save the result to a file. Or cfdump the arguments and then cfabort.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616959">25</a> by sinuy
		posted on 5/8/2007 at 1:01 PM
		</div>
		<div class="comment_text"><p>hi guys<br>i previously use cferror on Application.cfc/cfm. i found tat the '#ERROR.Diagnostics#' able to tells exactly which line of my code occurred.</p><p>does onError function has this feature as well? and how?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616962">26</a> by Raymond Camden
		posted on 5/8/2007 at 4:11 PM
		</div>
		<div class="comment_text"><p>What you get in onError is the same as cferror. Actually a bit more as if the error occurs in another method of the app.cfc file, you get that info as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616961">27</a> by Rony Fayyad
		posted on 6/5/2007 at 7:41 AM
		</div>
		<div class="comment_text"><p>Hi All,</p><p>I have some code in the onrequeststart() function  which checks to see if a user is logged in, in order to access certain admin pages.</p><p>Now if they are not logged in, it would move them to the login page.</p><p>Here is a snippet of the code found in the onrequeststart function.</p><p>&lt;cfheader statuscode="301" statustext="Moved Permanently"&gt;</p><p>&lt;cfheader name="Admin login" value="localhost/admin/index.cfm"&gt;<br>&lt;cfabort&gt;</p><p>However, the move never happens.</p><p>It goes to the onerror() ( i added the code from this blog) and all it does now is show an empty page.</p><p>Any help here guys?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616966">28</a> by Raymond Camden
		posted on 6/5/2007 at 5:30 PM
		</div>
		<div class="comment_text"><p>Add a dump in onError and see what it is. Oh - it also may be abort. CFABORT will run onError. You can add a check in OnError to see if it was cfabort, and if so, ignore it.</p><p>&lt;cfif arguments.exception.rootcause.type is "coldfusion.runtime.AbortException"&gt;<br>	&lt;cfreturn&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616968">29</a> by Jim
		posted on 7/16/2007 at 7:42 PM
		</div>
		<div class="comment_text"><p>For googlers like me looking for answers...</p><p>Just wanted to pass along the combination of the two methods used in this thread for trapping the cfabort/cflocation on error bug. netheir one of the methods worked completely for me but when I combined both all is well.</p><p>&lt;cfif isDefined("arguments.exception.Type") and (arguments.exception.Type eq "coldfusion.runtime.AbortException")&gt;<br>			&lt;cfreturn/&gt;<br>		&lt;cfelseif isDefined("arguments.exception.Type") and (arguments.exception.Type eq "Expression")&gt;<br>			&lt;cfif isDefined("arguments.exception.RootCause.Type") and arguments.exception.RootCause.Type eq "coldfusion.runtime.AbortException"&gt;<br>				&lt;cfreturn/&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616967">30</a> by Raymond Camden
		posted on 7/16/2007 at 7:47 PM
		</div>
		<div class="comment_text"><p>Thanks Jim.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616970">31</a> by Craig Benner
		posted on 3/11/2009 at 8:36 PM
		</div>
		<div class="comment_text"><p>I noticed this is an old blog, but i thought i would post that I have another work around to the onRequest issue.  I have blogged about it here. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.personal.psu.edu%2Fcpb113%2Fblogs%2Fvantage_view%2F2009%2F03%2Fusing-applicationcfc-and-webse.html%3A3pL1X-l1h_jAOaKrPfJImdQWvK8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.personal.psu.edu/cpb113/blogs/vantage_view/2009/03/using-applicationcfc-and-webse.html">http://www.personal.psu.edu...</a></p><p>It basically shows how the code needs to invoke the method requested when ajax/webservices are being called.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616971">32</a> by JP
		posted on 7/18/2009 at 1:08 AM
		</div>
		<div class="comment_text"><p>Just wanted to say we are still on CF7 (yup) and we had this prob too.  Your solution works great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616969">33</a> by Jody Fitzpatrick
		posted on 11/27/2009 at 6:55 PM
		</div>
		<div class="comment_text"><p>Is this fixed in CF8? -- or does this bug still persist?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616972">34</a> by Raymond Camden
		posted on 11/27/2009 at 7:00 PM
		</div>
		<div class="comment_text"><p>onError was fixed a while ago.<br>onRequest blocking flashremoting/CFC calls was fixed in CF9.</p></div>
	</div>
</div>
		