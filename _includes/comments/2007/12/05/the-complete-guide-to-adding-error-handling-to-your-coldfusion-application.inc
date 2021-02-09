
<div class="comment" id="c_1713674933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674933">1</a> by existdissolve
		posted on 12/6/2007 at 2:28 AM
		</div>
		<div class="comment_text"><p>Ray--</p><p>Thanks so much for taking the time to post this.  I have been looking for something exactly like this for a while now, and it has helped to provide a context for attacking the error-handling issue that is still daunting for a relatively new CF developer such as myself.</p><p>Thanks for all that you do!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674939">2</a> by david buhler
		posted on 12/6/2007 at 3:07 AM
		</div>
		<div class="comment_text"><p>For those of us using CF for Flex apps...</p><p>...do these two dumps need to be prefaced with "StructKeyExists":</p><p>&lt;cfdump var="#form#" label="Form"&gt;<br>&lt;cfdump var="#url#" label="URL"&gt;</p><p>?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674941">3</a> by Michael Sharman
		posted on 12/6/2007 at 3:19 AM
		</div>
		<div class="comment_text"><p>Of course if you have an error in your onError() the same thing will happen with your 'exception' error in the Application.cfm example.</p><p>In which case you could use either methods shown above, those being a global error template in CF Admin or a 'request/oh crap' cferror in onRequestStart()</p><p>Nice post Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674937">4</a> by Bruce
		posted on 12/6/2007 at 4:10 AM
		</div>
		<div class="comment_text"><p>Ray - Thanks for this very complete post about error handling.  I used this type of process throughout my websites and it has help me find many "bugs" once I release an appliation to production.</p><p>I've been using cfdump in the email that goes out when an error occurs as you illustrate in your Application.cfc code above.</p><p>One issue that has always bothered me (mainly because I'm AR) is the extra output in the email that cfdump causes.  All the text for the javascript functions that control toggling just get dumped into the email's body.  All I want to have in my email body are the contents of the structures (Exception, Form, Session, CGI, etc).</p><p>I've tried using cfloop with collection =  but the problem is that some of the structures contain complex elements (arrays, another structure) as values so the cfloop collection = fails.</p><p>This cfdump issue actually caused me a problem with one of my email clients.  That POP3 email client would not display the output from cfdump because with the extra javascript code text outputted the HTML for the email body was not well formed.  So I got just part of the error message and no data from the structures.</p><p>So if anyone has a good replacement for cfdump to output the complete contents of the structures (Exception, Form, Session, CGI) in a manner that will display correctly in an HTML formatted email, I'd love to hear about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674943">5</a> by Raymond Camden
		posted on 12/6/2007 at 4:16 AM
		</div>
		<div class="comment_text"><p>Bruce, have you ever tried this:</p><p>&lt;cfdump var="#application#" format="text"&gt;</p><p>Specifically, format=.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674957">6</a> by Ryan Heldt
		posted on 12/6/2007 at 4:32 AM
		</div>
		<div class="comment_text"><p>Nice post. For our production servers, we do something very similar, but add a couple twists. First, all messages get sent to a common e-mail address (errors@yourcompany.com), which through filters on the mail server we can send a copy to the developer(s) responsible for that site. Those same messages also get pulled into a database (via a scheduled script). The messages can then be searched by site because we include the domain name in the subject line. On the error page itself, we include a reference number - I believe it's the first part of a UUID. Then if a customer happens to get an error, we can get them to tell us that reference code and (using our error database, which has a front-end) we can pull up their error. Overall, we've used this for a few months now, and it's been very helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674958">7</a> by david buhler
		posted on 12/6/2007 at 4:35 AM
		</div>
		<div class="comment_text"><p>I looked up the attributes for cfdump and the default "format" is listed as 'text'. However, that's not the case.</p><p>&lt;!--- outputs as text---&gt;<br>&lt;cfdump var="#cgi#" format="text"&gt;<br>vs<br>&lt;!--- outputs as HTML ---&gt;<br>&lt;cfdump var="#cgi#"&gt;</p><p>I posted a bug with Adobe.</p><p>The "format" attribute should be a killer way to get detailed errors on the mobile phone (at last!).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674961">8</a> by Bruce
		posted on 12/6/2007 at 6:41 AM
		</div>
		<div class="comment_text"><p>Ray and others - I'd love to use cfdump's format attribute but unfortunately we've not yet moved our production servers to ColdFusion 8, they are still using CF 7.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674962">9</a> by Gualtiero Sappa
		posted on 12/6/2007 at 6:28 PM
		</div>
		<div class="comment_text"><p>Thanks, this post it's very clear and complete.<br>We do something similar on our production server and this is very useful to notify us errors in real time and to provide a better look &amp; feel to error pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674965">10</a> by K2
		posted on 12/6/2007 at 7:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Great article, thanks. I wanted to print it but found no good way to do so. Do you have a printer-friendly feature that is not turned on? Would be awesome to be able to print these in a printer-friendly way.</p><p>k2</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674963">11</a> by Raymond Camden
		posted on 12/6/2007 at 8:20 PM
		</div>
		<div class="comment_text"><p>I disabled printing when I went to the new design. I was having issues w/ search engines running the print form and running up the RAM on the box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674964">12</a> by Raymond Camden
		posted on 12/6/2007 at 8:27 PM
		</div>
		<div class="comment_text"><p>You can download the PDF now via the download link above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674967">13</a> by CoolJJ
		posted on 12/6/2007 at 8:58 PM
		</div>
		<div class="comment_text"><p>@David Buhler<br>It looks like the format option is supposed to be used with the output attribute. That is when it defaults to text.</p><p>@Bruce<br>I imagine you could write a more complex error.cfm template and then just do a test on each collection item in your cfloop to determine its type and then handle the output appropriatly via the isSimpleValue(), isArray(), isStruct(), isXML() functions.</p><p>CoolJJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674969">14</a> by franz s.fsc
		posted on 12/6/2007 at 9:01 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Nice and helpful post. If i implement it on MX7 the whole mail is visible on the page and all cf code shows on view source?<br>what am i missing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674968">15</a> by Raymond Camden
		posted on 12/6/2007 at 9:14 PM
		</div>
		<div class="comment_text"><p>@CoolJJ - Format can be used w/o output, it just defaults to output=html.</p><p>@Franz - so if you remember, I mentioned there were two types of errors. Exception=You can use CFML, Request=You Can't. Did you only use the Request one? Remember to use 2 different templates.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674970">16</a> by Franz Schlienger
		posted on 12/6/2007 at 9:22 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I use<br>&lt;cferror type="exception" template="error.cfm"&gt;<br>&lt;cferror type="request" template="error_request.html"&gt;</p><p>the x.cfm is online if you want to check. Look at the &lt;cfset x = 1&gt; in the page source.</p><p>Thanks franz</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674977">17</a> by Raymond Camden
		posted on 12/6/2007 at 9:29 PM
		</div>
		<div class="comment_text"><p>I went to your web site (hey, how about a warning next time ;), went to x.cfm, and ended up on anice error page w/ no CFML code in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674973">18</a> by Franz Schlienger
		posted on 12/6/2007 at 9:49 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I changed it back. It shows only on my live but not on the development server. Witch cf server setting could cause it?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674975">19</a> by K2
		posted on 12/6/2007 at 9:50 PM
		</div>
		<div class="comment_text"><p>Thanks much for the PDF.</p><p>K2</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674974">20</a> by Rick Smith
		posted on 12/6/2007 at 9:53 PM
		</div>
		<div class="comment_text"><p>yep... another thanks for the PDF!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674976">21</a> by Raymond Camden
		posted on 12/6/2007 at 9:56 PM
		</div>
		<div class="comment_text"><p>Not quite sure I get you Franz. Again, if you used 2 cferror tags, ensure the templates are pointing right. The Exception one points to the template w/ CFML in it. The request one points to the one with no cfml in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674979">22</a> by K2
		posted on 12/6/2007 at 10:02 PM
		</div>
		<div class="comment_text"><p>I'm implementing your CFC method above. But, how do I trap and handle Request and validation errors in this way without using cferror? Is there a way or am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674978">23</a> by Raymond Camden
		posted on 12/6/2007 at 10:07 PM
		</div>
		<div class="comment_text"><p>In order to handle an oh crap error when using onError, I believe you would want to add a cferror tag,type=request. Normal errors should go through onError still.</p><p>Try this out. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674980">24</a> by Franz Schlienger
		posted on 12/6/2007 at 10:09 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>That's what i have. The first 2 lines of application.cfm are:<br>&lt;cferror type="exception" template="error.cfm"&gt;<br>&lt;cferror type="request" template="error_request.html"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674984">25</a> by Raymond Camden
		posted on 12/6/2007 at 10:13 PM
		</div>
		<div class="comment_text"><p>And when you hit x.cfm, you end up on error.cfm? With CFML showing up?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674983">26</a> by K2
		posted on 12/6/2007 at 11:05 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>How do I go about creating a Request or Validation error to test this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674985">27</a> by Raymond Camden
		posted on 12/6/2007 at 11:08 PM
		</div>
		<div class="comment_text"><p>k2: A request error is the Oh Crap error. You can force this by making your exception error itself throw an error.</p><p>Don't worry about validation errors. They are used when you use CF's built in form checking, which no one uses, and no one should use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674986">28</a> by K2
		posted on 12/6/2007 at 11:39 PM
		</div>
		<div class="comment_text"><p>Thanks. I got this working, but with one problem. My Request Error page displays #error.message# instead of the actual error. I just found out that #error.message# is not available on a request error. Thanks CFQuickDocs.</p><p>The function:<br>&lt;code&gt;<br>&lt;cffunction name="onError" returntype="void" output="true"&gt;<br>&lt;cfargument name="Exception" required="true"&gt;<br>&lt;cfargument name="EventName" type="string" required="true"&gt;<br>&lt;cferror type="request" template="error/RequestErrorDetail.cfm"&gt;<br>&lt;cfinclude template="error/ErrorDetail.cfm"&gt;<br>&lt;/cffunction&gt;<br>&lt;/code&gt;</p><p>This does work, but I find it much more useful to error trap the exception error page this way.</p><p>&lt;code&gt;<br>&lt;cffunction name="onError" returntype="void" output="true"&gt;<br>&lt;cfargument name="Exception" required="true"&gt;<br>&lt;cfargument name="EventName" type="string" required="true"&gt;<br>&lt;cftry&gt;<br>  &lt;cfinclude template="error/ErrorDetail.cfm"&gt;<br>&lt;cfcatch type="any"&gt;<br>   &lt;cfdump var="cfcatch"&gt;<br>&lt;/cfcatch&gt;<br>&lt;/cftry&gt;<br>&lt;/cffunction&gt;<br>&lt;/code&gt;</p><p>This way I can email the request error (or any other error the 'error' page generates) using the cfcatch scope or do whatever I want with it. Is there a problem doing it this way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674987">29</a> by Jason Brookins
		posted on 12/6/2007 at 11:43 PM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>I'm still a bit cloudy on how to incorporate handling your "oh, crap" error into the onError in Application.cfc.  Do you have a quick version of the onError function that you can post to show how you handle both?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674988">30</a> by Raymond Camden
		posted on 12/7/2007 at 12:43 AM
		</div>
		<div class="comment_text"><p>Try adding &lt;cferror type="request" template="something.cfm"&gt; to your onRequestStart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674989">31</a> by Michael White
		posted on 12/8/2007 at 4:39 AM
		</div>
		<div class="comment_text"><p>One of my applications makes heavy use of CFDIV, ColdFusion.navigate, etc to update the "content" cfdiv only. cflocation doesn't work well in that situation and when I try to cfinclude I just get a blank screen instead of my friendly error message and links to get back. I tried to just use cfset ColdFusion.navigate('/errors/error.cfm','content') but application.cfc onerror function doesn't know what to do with that. can you help straighten out my thinking?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674991">32</a> by Niall
		posted on 12/8/2007 at 6:03 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I have implemented the error handling code in my Application.cfc using the onError() method and all works fine except for the &lt;cferror&gt; tag in the onRequestStart() method to trap the request error.</p><p>I have included my Application.cfc for reference:</p><p>&lt;cfcomponent output="false"&gt;</p><p>	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> = "mytestportal"&gt;<br>	&lt;cfset this.applicationTimeout = createTimeSpan(0,0,20,0)&gt;<br>	&lt;cfset this.clientManagement = true&gt;<br>	&lt;cfset this.clientStorage = "cookie"&gt;<br>	&lt;cfset this.loginStorage = "session"&gt;<br>	&lt;cfset this.sessionManagement = true&gt;<br>	&lt;cfset this.sessionTimeout = createTimeSpan(0,0,20,0)&gt;</p><p>	&lt;cffunction name="onApplicationStart" returnType="boolean" output="false"&gt;<br>		&lt;cfreturn true&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="onApplicationEnd" returnType="void" output="false"&gt;<br>		&lt;cfargument name="applicationScope" required="true"&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="onRequestStart" returnType="boolean" output="false"&gt;<br>		&lt;cfargument name="thePage" type="string" required="true"&gt;		<br>		&lt;cferror type="request" template="dspErrorRequest.cfm"&gt;<br>		&lt;cfreturn true&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="onRequest" returnType="void"&gt;<br>		&lt;cfargument name="thePage" type="string" required="true"&gt;		<br>		&lt;cfinclude template="#arguments.thePage#"&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="onRequestEnd" returnType="void" output="true"&gt;<br>		&lt;cfargument name="thePage" type="string" required="true"&gt;		<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="onError" returnType="void" output="false"&gt;<br>		&lt;cfargument name="exception" required="true"&gt;<br>		&lt;cfargument name="eventname" type="string" required="true"&gt;<br>		&lt;cfset var errortext = "" /&gt;<br>		&lt;cfset var mailToAddr = "developersEmail@developers.com" /&gt;<br>		&lt;cfset var mailFromAddr = "applicationEmail@appDomain.com" /&gt;</p><p>		&lt;!---<br>			IF DEVELOPMENT, SIMPLY USE THIS...NO NEED TO SEND EMAILS!<br>			&lt;cfdump var="#arguments#"/&gt;&lt;cfabort/&gt;<br>		---&gt;<br>		&lt;cflog file="#<a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a>#" text="#ARGUMENTS.exception.message# - #ARGUMENTS.exception.RootCause.Message#" /&gt;</p><p>		&lt;!--- BUILD THE EMAIL CONTENT ---&gt;<br>		&lt;cfsavecontent variable="errorText"&gt;<br>			&lt;cfoutput&gt;<br>				An error occurred: http://#cgi.server_name##cgi.script_name#?#cgi.query_string#&lt;br /&gt;<br>				Time: #dateFormat(now(), "short")# #timeFormat(now(), "short")#&lt;br /&gt;</p><p>				&lt;cfdump var="#ARGUMENTS.exception#" label="Error"&gt;<br>				&lt;cfdump var="#FORM#" label="FORM"&gt;<br>				&lt;cfdump var="#URL#" label="URL"&gt;<br>				&lt;cfdump var="#SESSION#" label="SESSION"&gt;<br>				&lt;cfdump var="#CGI#" label="CGI"&gt;<br>			&lt;/cfoutput&gt;<br>		&lt;/cfsavecontent&gt;</p><p>		&lt;!--- E-MAIL THE ERROR TO THE DEVELOPER(S) ---&gt;<br>		&lt;cfmail to="#mailToAddr#" from="#mailFromAddr#" subject="Error: #ARGUMENTS.exception.message#" type="html"&gt;<br>			#errorText#<br>		&lt;/cfmail&gt;</p><p>		&lt;cflocation url="dspError.cfm"&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="onSessionStart" returnType="void" output="false"&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="onSessionEnd" returnType="void" output="false"&gt;<br>		&lt;cfargument name="sessionScope" type="struct" required="true"&gt;<br>		&lt;cfargument name="appScope" type="struct" required="false"&gt;<br>	&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p><p>When I added an invalid CFML tag in my error handler page:<br>&lt;cfpoo &gt;<br>    kjhgjhg<br>&lt;/cfpoo&gt;</p><p>I simply get the standard coldfusion error message:<br>A tag starting with 'CF' has been detected. This tag is not supported by this version of ColdFusion. Please verify your typo and try again.</p><p>Is there something I'm doing wrong or can you confirm the exact method for trapping these coldfusion errors, if possible?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674993">33</a> by Michael White
		posted on 12/8/2007 at 9:52 PM
		</div>
		<div class="comment_text"><p>cfinclude seems to work if I change the output attribute to true on the onError function. but if output is false, i get nothing. That only confuses me because I have a cfinclude for a login form in the onRequestStart method and that worked. I thought I never put output=true on any of my cfc methods but I looked again and the onRequestStart method was also output=true. problem solved?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674994">34</a> by Raymond Camden
		posted on 12/8/2007 at 9:57 PM
		</div>
		<div class="comment_text"><p>output=false is indeed generally wanted. I wouldn't use it. You mentioned when you made use of cflocation, stuff in cfdiv, etc, didn't work. That isn't surprising if the error is in ajax. I'll have to test this. One possible idea - make all your ajax requests go to urls with ajax_ in them. If you see that the error is here, then use cfinclude as opposed to cflocation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674996">35</a> by Michael White
		posted on 12/8/2007 at 10:11 PM
		</div>
		<div class="comment_text"><p>what I mean by cflocation not working is that you can't direct the output to a cfdiv, it has to replace the whole page, right? with a ColdFusion.navigate() I could put the error message in the 'content' cfdiv (so I tried all sorts of ways to force a ColdFusion.navigate and couldn't do it. I didn't see any Event on cfmail I could use to fire it off either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674997">36</a> by Raymond Camden
		posted on 12/8/2007 at 10:15 PM
		</div>
		<div class="comment_text"><p>Let me make sure I'm reading you right. You are talking about how to handle an error when the error occurs inside something loaded by cfdiv/cfwindow/cfpod, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675001">37</a> by Michael White
		posted on 12/8/2007 at 10:18 PM
		</div>
		<div class="comment_text"><p>in my application there is an index.cfm and EVERYTHING is loaded into a cfdiv or cfwindow. when there is an error my first thought was to send the friendly error to the 'content' cfdiv but opening up a new cfwindow would work as well, maybe better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674998">38</a> by Raymond Camden
		posted on 12/8/2007 at 10:25 PM
		</div>
		<div class="comment_text"><p>Hmm. That seems a bit.... odd. But I'll ignore that. So I can see how cflocation won't work in the result of a cfdiv/cfwindow. In that case you want to either cfinclude or cfoutput a result of some sort. The issue though is that you could possibly still have partial content, which is why I suggested cflocation in general. Ie, partial content then your error message. You know, CF's Ajax support has a setGlobalErrorHandler function. You could try that. In that case, you don't handle the error, but let it occur, and then use the JS function to handle it. You lose nice email reports though. You may want to try using onError, mail, log, and then cfthrow to throw a new error which the JS function would trap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675000">39</a> by Michael White
		posted on 12/9/2007 at 2:05 AM
		</div>
		<div class="comment_text"><p>This is such an important post for a lot of people, I got you an item off your wishlist (80s music CD) in appreciation</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675002">40</a> by Ryan LeTulle
		posted on 12/11/2007 at 12:58 AM
		</div>
		<div class="comment_text"><p>Great information.</p><p>Thank you Ray.</p><p>See you at Sakura. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675006">41</a> by Paul Davis
		posted on 12/12/2007 at 10:35 PM
		</div>
		<div class="comment_text"><p>Great Article Ray!!</p><p>One thing that we have been doing is to clean up the error text into a simple readable email and log format by parsing the error structure, there is still an option to dump if the need is there (our error handler is a component that exists in the application layer and is called from the application.cfc). But normally you can get what you need through a little parsing which I find much easier to digest when coding.</p><p>Another thing that we do is check to make sure that things exist before we attempt to email them, for instance I have run into errors where parts of the session simply do not exist or even some of the application layer components, so I've learned to put a isdefined() check on almost anything that get's parsed. If it's not there then it's simply not provided, it's more work but in liue of a huge message it's very useful for us.</p><p>Thanks</p><p>-Paul-</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675008">42</a> by Bruce
		posted on 12/12/2007 at 11:44 PM
		</div>
		<div class="comment_text"><p>Paul - if you see my comment above, I'm looking for a good parsing function instead of using cfdump.  So if could share your parsing function code that would be great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675011">43</a> by David Whiterod
		posted on 2/4/2008 at 9:20 AM
		</div>
		<div class="comment_text"><p>Thanks for the post Ray!</p><p>Do you know of a way to access the (optional) errorcode and (custom) type cfthrow args from a (CFERROR) error handling page.</p><p>It looks like errorcode and type are only available within a cfcatch block and do not bubble up to the cferror page.</p><p>Cheers</p><p>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675005">44</a> by Raymond Camden
		posted on 2/4/2008 at 8:52 PM
		</div>
		<div class="comment_text"><p>If they don't exist, then I'm not sure what to recommend. I always thought the complete error object was available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675004">45</a> by David Whiterod
		posted on 2/5/2008 at 7:51 AM
		</div>
		<div class="comment_text"><p>Cheers Ray</p><p>On further investigation, I didn't look hard enough.</p><p>Within a CFCATCH the errorcode etc is available (top-level) within the cfcatch struct. Once passed to a cferror template the error object is no longer in the top-level of the error struct but available at error.RootCause.</p><p>What started to trick me is cfcatch.type will report a custom error type but error.type (even when a custom error is specified) will always be 'coldfusion.runtime.CfErrorWrapper'.</p><p>(I'm using CF8,0,0,176276 Enterprise)</p><p>Cheers</p><p>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675007">46</a> by Shama
		posted on 2/19/2008 at 2:28 AM
		</div>
		<div class="comment_text"><p>I have the same question as posted by Niall above. That is, I have added <br>&lt;cferror type="request" template="error_request.cfm"&gt; to the onRequestStart() function in Application.cfc but it doesn't seem to catch the error and display the custom template. I still get the standard coldfusion error message. Any help would be greatly appreciated. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675010">47</a> by Steve Clifton
		posted on 2/19/2008 at 3:28 AM
		</div>
		<div class="comment_text"><p>Great post for error handling, but what about missing template handling? This code does not appear to handle the standard CF error when a page that does not exist is called by the user. Am I doing something wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675009">48</a> by Raymond Camden
		posted on 2/19/2008 at 3:52 AM
		</div>
		<div class="comment_text"><p>I'd just use the onMissingTemplate support in CF8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675012">49</a> by Steve Clifton
		posted on 2/19/2008 at 4:04 AM
		</div>
		<div class="comment_text"><p>Ray,<br>Unfortunately we are still running CF7 and plan to do so for a few more months. What is your solution for missing template handling on CF7, cos the setting in CF Administrator simply does not work on boxes hosting more than one site!<br>Thanks,<br>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675014">50</a> by Raymond Camden
		posted on 2/19/2008 at 4:14 AM
		</div>
		<div class="comment_text"><p>I don't have a great answer. You can use IIS's check for script existence setting and then handle the 404 that way, but not sure if a solution exists for Apache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675016">51</a> by Steven Waters
		posted on 2/21/2008 at 4:41 AM
		</div>
		<div class="comment_text"><p>Thanks, this code is very helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675015">52</a> by Niall
		posted on 2/24/2008 at 4:51 AM
		</div>
		<div class="comment_text"><p>@Shama<br>I have implemented a solution for the complete exception and request error handling - just haven't got round to posting it.</p><p>If you don't mind - and Ray doesn't mind me using this post for this - you can mail me directly for the source code to n.odoherty [at] niallodoherty [dot] com</p><p>These are in no way complete - but were intended to be used as a starting point for implemnting in new applications.  Therefore there will be "some" changes required.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675017">53</a> by Raymond Camden
		posted on 2/25/2008 at 1:51 AM
		</div>
		<div class="comment_text"><p>Niall, non-commercial offers like these are fine with me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675018">54</a> by mgwalk
		posted on 3/25/2008 at 9:59 PM
		</div>
		<div class="comment_text"><p>the error on line -1 error can be fixed here<br><a href="http://disq.us/url?url=http%3A%2F%2Fkb.adobe.com%2Fselfservice%2FviewContent.do%3FexternalId%3Db3c51ba1%26sliceId%3D1%3AJQ-sacM5pew-TiYZwhTNQ1yEkww&amp;cuid=3321886" rel="nofollow noopener" title="http://kb.adobe.com/selfservice/viewContent.do?externalId=b3c51ba1&amp;sliceId=1">http://kb.adobe.com/selfser...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675019">55</a> by xavier
		posted on 4/18/2008 at 1:36 AM
		</div>
		<div class="comment_text"><p>I thouhgt I will pose this question here as it is related to error handling. My company recently moved a site which was running on ColdFusion 5 and SQL 2000 to new servers (CF 8 and SQL 2005). A new error handling method was also introduced. Now, I understand this is not the recommended way of error handling, but it was something that was thrown in at the last minute. This method works by adding a Cftry and cfcatch pair around all requests - this code is added to the index page which includes all the other pages. The cfcatch will write to database and email us and also display a friendly error message to the user.</p><p>Now, with the new servers we started to have severe performance issues and to top that some data loss also was happening. It appeared as if data was rolled back. Today, we turned off the error handling and the servers are  working like a charm now.</p><p>Now, we are not entirely sure if the error handling caused all the problems because we were also trying other things like rebuilding indexes for database tables. Anyone had similar issues? Can cftry cause this kind of data rollbacks?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675020">56</a> by Raymond Camden
		posted on 4/18/2008 at 2:13 AM
		</div>
		<div class="comment_text"><p>Not sure about the rollbacks, but i know that using try/catch like that is DEFINITELY not recommended, and I'd be willing to bet is that it is definitely the cause of your performance issues.</p><p>You do know that CF5 does support cferror, right? Why not just use that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675072">57</a> by gary
		posted on 4/23/2008 at 3:50 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I love to have try/catch blocks on my error page as well, specifically early on.</p><p>There is not much worse than throwing an error on your error page while attempting to handle the email; logging for an error.</p><p>Dear user, while we were handling a system error another internal error occured, both have been noted</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675080">58</a> by Carry
		posted on 4/27/2008 at 11:12 PM
		</div>
		<div class="comment_text"><p>How does the CFCOMPILE utility interact with CFERROR? (Still on CFMX7 right now.)</p><p>Quote from the MX7 LiveDocs: "To ensure that error pages display successfully, avoid using the CFENCODE utility to encode pages that include the CFERROR tag."</p><p>OK, I'm concerned about CFCOMPILE with deploy option, not the the old cfencode, and I'm specifying my CFERROR tags in Application.cfc, onRequestStart.  Also integrating this with sitewide error management using onError and CFCATCH.  So I'm really wondering if a sitewide error management strategy can be impacted by the use of compile.  Thank you!</p><p>Also, just for clarification:  Am I correct in thinking that CFTHROW or CFTHROW will stop execution in it's tracks and there would be no need for a CFABORT in that context?  Example without a throw: CFCATCH  output something CFABORT /CFCATCH...  Of course we would want to use the abort to stop further execution, if that is desired.</p><p>Alternative Example: CFCATCH throw or rethrow right here /CFCATCH...  In this alternative example, am I correct in thinking that the CFABORT would be unnecessary to halt execution past the CFCATCH, since the CFTRHOW or CFRETHROW would stop execution here and redirect to the error management routines?</p><p>Thank you for your post and advice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675084">59</a> by Mike
		posted on 6/6/2008 at 4:03 AM
		</div>
		<div class="comment_text"><p>great examples, great tutorial!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675083">60</a> by Kim Andi
		posted on 9/3/2008 at 12:56 AM
		</div>
		<div class="comment_text"><p>Hi:<br>I'm working on database conversions with several queries using ColdFusion.<br>I'm outputting the status of each group of queries when they begin and end.  I have been hard coding the line numbers and would like to know if there is some CF variable that I can use to output the line numbers dynamically.</p><p>The problem is when I add code to the pages, the lines increase or decrease so the line numbers get screwed up.</p><p>I tried creating include files, but sometimes that's more work than it's worth.</p><p>Any ideas?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675100">61</a> by Raymond Camden
		posted on 9/5/2008 at 4:17 PM
		</div>
		<div class="comment_text"><p>This may be a bit silly - but why not just remove the line #s? If you are outputting the result of query GetFoo, a user could simply open the CFM and do a quick ctrl-f to find the query. That seems a heck of a lot easier than worrying about the line numbers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675079">62</a> by Kim Andi
		posted on 9/5/2008 at 4:40 PM
		</div>
		<div class="comment_text"><p>The reason we're putting in line numbers is being the page has over 8000 lines of codes and queries.  The queries look pretty much the same and the only thing that shows when the queries run is this:</p><p>I have this at the top of the page:<br>&lt;cfflush interval="10"&gt;<br>&lt;cfset nowtime = #timeformat(now(),"hh:mm:ss")#&gt; <br>Then I have the elapsed time calculated in an include file<br>Then the hard coded line number is output to the screen with the elapsed time so we know how long each query takes to run.</p><p>The line numbers are so we can easily find the queries in the file. If the page halts for server time outs or failures, we can quickly get to that location and examine it.</p><p>What is "GetFoo"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675082">63</a> by Raymond Camden
		posted on 9/5/2008 at 5:41 PM
		</div>
		<div class="comment_text"><p>Um, not to offend, but if your file has 8K lines of code, it is in serious bad shape. It needs to be rebuilt. There is no hard and fast rule as to how big a file should be - and I've been guilty of large files as well (2k for blog.cfc), but 8k certainly falls into the -way too big- category. Your problem is not the line #s, but the file itsef.</p><p>getFoo was simply an example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675088">64</a> by xavy
		posted on 9/10/2008 at 4:22 AM
		</div>
		<div class="comment_text"><p>My request and exception error types seems to be reversed. Rather, I am getting a request error for all errors (I forced an error using &lt;cfoutput&gt;#nosuchvariable#&lt;/cfoutput&gt;). I am using CF 5. I have the two lines:<br>&lt;cferror type="exception" template="errorException.cfm"&gt;<br>&lt;cferror type="request" template="errorRequest.cfm"&gt;<br>in my application.cfm. On a basic error (like the one above), the page that gets called is the errorRequest.cfm and of course no cfml gets executed. Is there any setting in my server that would cause this?<br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675078">65</a> by Raymond Camden
		posted on 9/10/2008 at 5:13 AM
		</div>
		<div class="comment_text"><p>@xavy - I think I recommended this on this entry somewhere - I may not have - actually I didn't - I recommended it in another blog entry. Anyway, if you find your desired error handler NOT running, it typically means an error in your error handler. Edit errorException.cfm to remove ALL code except "Ray Rocks". If that works, then look at the code you had, and find the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675081">66</a> by xavy
		posted on 9/10/2008 at 6:36 AM
		</div>
		<div class="comment_text"><p>Now, I feel stupid. And Ray really rocks!<br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675096">67</a> by Michael Lasell
		posted on 9/17/2008 at 1:12 AM
		</div>
		<div class="comment_text"><p>Can you access individual errors from a form that has multiple errors? All I get is a list of &lt;li&gt;s with no way to access which is which. ColdFusion doesn't seem to provide a struct with the error and the message as a key pair.<br>ASP.NET would handle this without a blink.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675093">68</a> by Raymond Camden
		posted on 9/17/2008 at 1:20 AM
		</div>
		<div class="comment_text"><p>Michael, what do you mean by multiple errors? An error, by it's very nature, stops execution. CF gives you full access to the exception. You can have multiple errors on one page if you use try/catch, and in each catch you have access to the full exception as well.</p><p>CF handles this w/o a blink too. ;) Unless I'm misreading you somehow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675085">69</a> by EstebanD
		posted on 10/20/2008 at 10:02 PM
		</div>
		<div class="comment_text"><p>Maybe this was answered before.</p><p>When logging or emailing the error I grab the relevant parts of the "error" structure. <br>On SQL errors I use error.RootCause.sql which reports the offending SQL. The problem is when using cfqueryparam the parameters are shown as (param 1)...(param X). How can I get the values of the parameters?</p><p>This is what I found in this regard: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.mail-archive.com%2Fcfaussie%40googlegroups.com%2Fmsg04890.html%3Afls-BYZnWJk8sKMSSkjnc8HeZ_k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mail-archive.com/cfaussie@googlegroups.com/msg04890.html">http://www.mail-archive.com...</a> but as you can notice is way too complicated.</p><p>Thank you <br>EstebanD</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675098">70</a> by Raymond Camden
		posted on 10/21/2008 at 1:31 AM
		</div>
		<div class="comment_text"><p>Well it is going to be a bit complicated no matter what. You will need to get the args and replace each ? with the proper arg. I'm not sure that data is available in the error struct. You may have to dump it to see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675091">71</a> by Tim Garver
		posted on 11/12/2008 at 3:38 AM
		</div>
		<div class="comment_text"><p>I know this is probably already been answered but.....</p><p>I have a customer who has an older system, meaning it was coded in CF4<br>He used a LOT of &lt;INPUT TYPE="HIDDEN" NAME="FIELD_REQUIRED"<br>VALUE="YOU MUST SELECT A VALUE"&gt;<br>instead of using client side validation.</p><p>He came to me a few months ago wanting to upgrade to CF7.<br>I knew these among many other lazy coding techniques would bit me in the but, and i urged my customer to fix all this prior to the upgrade.</p><p>So know he has a site with 1500 documents that have 3000 some odd hidden fields that need to be replaced.</p><p>When i setup his App.cfc, i used some generic error catching and just shows an Opps page.<br>Problem is, those hidden required fields cause a CFTHROW which in turns stops processing and shows the Opps page.</p><p>I am now tasked with letting these errors slide through the onError() event. But how?</p><p>Is there a certain type of error this produces?<br>Anyway, thought I would add this to the comments about Error Handling. DONT USE HIDDEN REQUIRED FIELDS. they suck!!</p><p>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675094">72</a> by Tim Garver
		posted on 11/12/2008 at 3:58 AM
		</div>
		<div class="comment_text"><p>Update on my issue..</p><p>turns out this will catch those errors in the onError() event<br>&lt;cfif Arguments.Exception.message NEQ "Form entries incomplete or invalid."&gt;<br>&lt;cfoutput&gt;#Arguments.Exception.detail#&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p><p>This still does not solve my issue. Seems like you could put a try on the form page to catch the error, wrong. its caught by App.cfc before it hits the form action page.<br>So ignoring this error seems impossible at this point.</p><p>Will update if I find a solution.</p><p>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675102">73</a> by Tim Garver
		posted on 11/12/2008 at 3:59 AM
		</div>
		<div class="comment_text"><p>sorry, <br>This should have EQ, not NEQ<br>&lt;cfif Arguments.Exception.message EQ "Form entries incomplete or invalid."&gt;<br>&lt;cfoutput&gt;#Arguments.Exception.detail#&lt;/cfoutput&gt;<br>Fill out the form dummy :D<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675090">74</a> by Andrew Myers
		posted on 12/19/2008 at 3:28 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks for yet another great article.</p><p>I'm using CF7 and whenever I try and log</p><p>#arguments.eventname# and #arguments.exception.message#</p><p>I get messages like this</p><p>"Error","jrpp-738","12/15/08","12:02:33","HRA_V2","Event Name: onRequest"<br>"Error","jrpp-738","12/15/08","12:02:33","HRA_V2","Message: Event Handler Exception."</p><p>I have found I need to look to the "Root Cause" to actually see the information you are mentioning:</p><p>		&lt;cflog file="#This.Name#" type="error" text="Template: #arguments.exception.RootCause.TagContext[1].template#"&gt;<br>		&lt;cflog file="#This.Name#" type="error" text="Line: #arguments.exception.RootCause.TagContext[1].line#"&gt;<br>		&lt;cflog file="#This.Name#" type="error" text="Message: #arguments.exception.RootCause.message#"&gt;</p><p>This produces:</p><p>"Error","jrpp-1603","12/19/08","09:18:21","HRA_V2","Template: /www/html/root/throw-error.cfm"<br>"Error","jrpp-1603","12/19/08","09:18:21","HRA_V2","Line: 1"<br>"Error","jrpp-1603","12/19/08","09:18:21","HRA_V2","Message: Variable XFHDSHSDHJ is undefined."</p><p>Curiously if I put &lt;cfthrow object="#arguments.exception#"&gt; in the onError function I see the real error (eg. Variable XFHDSHSDHJ is undefined), but if I &lt;cfdump&gt; it, it is wrapped in the "Event Handler Exception".</p><p>Any ideas?  I'm confused as to why this happens to me but not anyone else? ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675089">75</a> by Raymond Camden
		posted on 12/19/2008 at 3:35 AM
		</div>
		<div class="comment_text"><p>Good point on the logging there. I'm not quite sure what your second point is. When you cfdump the error, you are seeing a data-centric view of the exception. Ie, what went wrong. When you let an error flow out naturally, CF will take the exception and display it. You can actually find the exception.cfm file and edit it. It basically does the same thing we do in error handling - inspect the exception and print out the important information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675099">76</a> by Andrew Myers
		posted on 12/19/2008 at 3:41 AM
		</div>
		<div class="comment_text"><p>Thanks Ray - I think the reason you couldn't understand my second point is that because until now I wasn't aware that the exception.cfm existed and was doing all that for us. :-)</p><p>Is there any problem with doing this:</p><p>arguments.exception.RootCause.TagContext[1].template</p><p>Will the exception passed into the onError() method of Application.cfc always have a RootCause, with a TagContext array of at least 1 element?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675101">77</a> by Raymond Camden
		posted on 12/19/2008 at 3:55 AM
		</div>
		<div class="comment_text"><p>I'm not sure it always will have it - but you can always check:</p><p>if structkeyexists(exception, "rootcause") and structkeyexists(exception.rootcause, "tagcontext") and arraylen(exception.rootcaue.tagcontext gte 1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675087">78</a> by Dave Dugdale
		posted on 1/27/2009 at 10:11 AM
		</div>
		<div class="comment_text"><p>What if I don't want to wait for the email to arrive and I am not logged in as admin, can I create a simple way to turn of onError?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675086">79</a> by Raymond Camden
		posted on 1/27/2009 at 10:19 PM
		</div>
		<div class="comment_text"><p>You could check for the remote IP and say, if it is in a certain safe list, then reveal the error. Really depends on how simple you want it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675092">80</a> by Dave Dugdale
		posted on 1/27/2009 at 10:42 PM
		</div>
		<div class="comment_text"><p>Great idea! That is an easy one to do - Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675095">81</a> by Dave Dugdale
		posted on 1/28/2009 at 1:01 AM
		</div>
		<div class="comment_text"><p>Just thought I would shared my onerror function. When I am at my desktop in my office and the IP matches I get the full error and the email sent to my Iphone gets the small version of the error - while everyone else sees a nicely formatted error:</p><p>&lt;cffunction name="onError" returnType="void" output="true"&gt;<br>		&lt;cfargument name="exception" required="true"&gt;<br>		&lt;cfargument name="eventname" type="string" required="true"&gt;<br>		&lt;cfset var errortextemailonly = ""&gt;<br>		&lt;cfset var errortext = ""&gt;<br>		&lt;!--- plain error message email for IPhone ---&gt;<br>		&lt;cfsavecontent variable="errortextemailonly"&gt;<br>			&lt;cfoutput&gt;<br>			Error on Page:	http://#cgi.server_name##cgi.script_name#/ param: #cgi.query_string#&lt;br&gt;<br>			&lt;br&gt;<br>			Refferal Page:	#cgi.http_referer# &lt;br&gt;<br>			&lt;br&gt;<br>			User's IP:		#cgi.REMOTE_ADDR#&lt;br&gt;<br>			&lt;br&gt;<br>			Server Port:	#cgi.SERVER_PORT#&lt;br&gt;<br>			&lt;br&gt;<br>			Error Date:		#dateFormat(now(), "short")# #timeFormat(now(), "short")#&lt;br&gt;<br>			&lt;br&gt;<br>			User's Browser:	#cgi.HTTP_USER_AGENT#&lt;br&gt;<br>			&lt;br&gt;<br>			------------------------------------&lt;br&gt;<br>			CF Error:		#arguments.exception.message#&lt;br&gt;<br>			&lt;/cfoutput&gt;<br>		&lt;/cfsavecontent&gt;<br>		&lt;!--- full error message for desktop troubleshooting ---&gt;<br>		&lt;cfsavecontent variable="errortext"&gt;<br>			&lt;cfoutput&gt;<br>			#errortextemailonly#&lt;br&gt;<br>			&lt;cfdump var="#arguments.exception#" label="Error"&gt;<br>			&lt;cfdump var="#form#" label="Form"&gt;<br>			&lt;cfdump var="#url#" label="URL"&gt; <br>			&lt;/cfoutput&gt;<br>		&lt;/cfsavecontent&gt;<br>		&lt;cfif Application.emailErrorMessaging EQ "on"&gt;<br>			&lt;cfmail <br>				to="dave@#Application.widgetURL#" <br>				from="#Application.coname# &lt;dave@#Application.widgetURL#&gt;" <br>				subject="Error #Application.coname# #arguments.exception.message#" <br>				type="html"<br>				server="#Application.mailServer#"&gt;<br>				#errortextemailonly#<br>			&lt;/cfmail&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfif #REMOTE_ADDR# NEQ #Application.davesIP#&gt;<br>			&lt;!--- Show visitors the nicely formatted error  ---&gt;<br>			&lt;cflocation url="exceptions/error_exception.cfm" addtoken="no"&gt; <br>			&lt;!--- Show me the full error for the desktop ---&gt;<br>			&lt;cfelse&gt;<br>				&lt;cfoutput&gt;#errortext#&lt;/cfoutput&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675108">82</a> by Balaji
		posted on 2/23/2009 at 10:50 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p> We have on missing template handler in CF7 and CF8 and we can call in the Applicaiton.cfc file.But how can we handle the missing template error in CF earlier versions without setting up in ColdFusion administrator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675110">83</a> by Raymond Camden
		posted on 2/24/2009 at 12:58 AM
		</div>
		<div class="comment_text"><p>I believe the only way to do it is with your 404 handler in the web server. In IIS you have to also use 'check for script existence' in order for it to work. I don't think I ever got it working in Apache though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675106">84</a> by Tim Garver
		posted on 2/24/2009 at 1:54 AM
		</div>
		<div class="comment_text"><p>the problem with using the webserver is you will loose all your form and request scope vars.</p><p>it will work in IIS as Ray points out, also in Apache as well, but you can forgot it if you want to do url rewrite with either of these webservers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675111">85</a> by Raymond Camden
		posted on 2/24/2009 at 1:56 AM
		</div>
		<div class="comment_text"><p>Well, form variables shouldn't be posted to a 404, should it? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675105">86</a> by Tim Garver
		posted on 2/24/2009 at 2:02 AM
		</div>
		<div class="comment_text"><p>ideally no, but if you wanted to use that technique to do url rewrites with the older versions of CF, then those are the issues you will face when using a custom 404 file with a web server.</p><p>the web server itself with do an internal redirect to the 404 page.</p><p>for plain error catching using a custom 404, it will work just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675107">87</a> by Raymond Camden
		posted on 2/24/2009 at 2:05 AM
		</div>
		<div class="comment_text"><p>I would not recommend using a 404 for url rewriting. Apache has that built in 'for real' and IIS offers it as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675104">88</a> by Rob Barthle
		posted on 2/26/2009 at 8:33 PM
		</div>
		<div class="comment_text"><p>Have a question that my boss wants answered. We have a variety of sites that we run, some using onError() and Application.cfc; and some using CFERROR and Application.cfm. I cannot post code from the sites here (not allowed), but I can tell you this much: in Application.cfm we have CFERROR calls from request, exception, and validation. In Application.cfc, the onError() has handling built in for validation, and all other errors get processed in the same way.</p><p>The error handlers work, we get enough usage out of them to know that. There are times though that an error is not caught by our handlers, and gets caught by the site wide error handler.</p><p>My boss doesn't believe any error should ever make it that far, and all errors need to get caught and handled by our error handlers regardless of their cause. I believe he is being unrealistic about that, that there are some errors that just cannot be trapped beforehand and that is why the site wide error handler is there. But I need something to back up my thoughts.</p><p>I can give you a couple of examples of error messages the site wide has caught, if that is any help.</p><p>ERROR DIAGNOSTICS:String index out of range: -1 null &lt;br&gt;The error occurred on line -1. error.message = String index out of range: -1 error.rootCause = java.lang.StringIndexOutOfBoundsException: String index out of range: -1</p><p>ERROR DIAGNOSTICS:Session is invalid null &lt;br&gt;The error occurred on line 79. error.message = Session is invalid error.rootCause = java.lang.IllegalStateException: Session is invalid</p><p>ERROR DIAGNOSTICS:Operation failed on the data source named ""FREE"". Reason of failure ""java.sql.SQLException: [Macromedia][SQLServer JDBC Driver]Error establishing socket. Connection refused"" &lt;br&gt;The error occurred on line 96. error.message = Operation failed on the data source named ""FREE"". error.rootCause = coldfusion.runtime.ClientScopeDBException: Operation failed on the data source named ""FREE"".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675109">89</a> by Raymond Camden
		posted on 2/27/2009 at 8:50 PM
		</div>
		<div class="comment_text"><p>Well, onError should catch everything, but it can't catch your syntax errors. A site wide error handler CAN catch that. So he will not _always_ be able to use onError.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675112">90</a> by Mickey
		posted on 3/26/2009 at 10:23 PM
		</div>
		<div class="comment_text"><p>First... thanks for a very informative post.</p><p>I'm trying to be good and implement a catch-all error handling process using application.cfc. I should also mention that I'm using Fusebox 5.5 and have called the "Super" scope accordingly where needed.</p><p>I've tried several variations using this post and other examples but I just can't seem to get detailed info emailed to me while also redirecting the user to a "pretty" page. I'm also writing errors to a log file but so far that doesn't seem to be a problem.</p><p>Currently the &lt;cflocation&gt; tag in the onError method of app.cfc is causing it's own forever looping exception. I can instead &lt;cfoutput&gt; the "pretty" message directly from app.cfc but that can leave half drawn pages and other ugly results visible. I also tried GetPageContext() using cfscript but it has the same results as &lt;cflocation&gt;.</p><p>I've read about setting up a check to filter "coldfusion.runtime.AbortException" but if I've read correctly that is no longer needed since 7.01 (I'm on 7.02)... either way it has no effect.</p><p>My other issue is that the most common errors I'm testing for seem to miss the onError method completely. I can trap them by placing a &lt;cferror type="request" template="Error.cfm"&gt; in the OnRequestStart method, but then I'm limited to how I can format the error page and I can't email the error to myself (as pointed out above). I may just have to accept that but it's worth asking if there might be a better alternative... especially since it seems this may catch more than onError. Would a Try/Catch in OnRequestStart give me more options... or just shoot me in the foot?</p><p>Any ideas, clarifications or updates would be very much appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675115">91</a> by Raymond Camden
		posted on 3/27/2009 at 6:04 AM
		</div>
		<div class="comment_text"><p>You mention that if cflocation, you end up in a loop. Is the page you cflocate to also throwing an error? Like maybe you have a layout custom tag that throws an error. If you cflocate to an html page, I assume that works?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675114">92</a> by Mickey
		posted on 3/27/2009 at 8:30 PM
		</div>
		<div class="comment_text"><p>That's not EXACTLY it (no custom tags) but your suggestion helps a lot. FYI this is not a production site but more of a self-training exercise which I plan to use as a template for new CF sites down the road.</p><p>Anyway, I had the cflocation inside the onError method as in your example. To test, I was forcing an exception and seeing the exception error looping in my log file. I now find that the loop has nothing to do with exceptions. It's tied to cflocation.</p><p>I took out all of the onError stuff I was trying and then added some &lt;cflog&gt; tags to the methods in application.cfc. Then I just added a cflocation to one of my pages. It still loops but doesn't hit onError. I can see where new requests and sessions are being generated several times per second but never finishing. Fusebox is also reinitialized as part of the loop.</p><p>I have two identical files that I've tried to cflocate to. They are very basic and identical except one is named error.cfm and the other is error.htm. You are right that the htm file works just fine though I'm not sure what that tells me. Oh and I can also cflocate to an exernal url like "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%3AB2AkZFqigDdvPfTMfhi05ayA6nc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com">http://www.google.com</a>" with no problem.</p><p>I suspect I'm just missing something in relation to launching fusebox 5.5 using application.cfc while also trying to do some other creative things with application.cfc. But hey, that's how we learn. If I never broke anything I wouldn't know how to fix anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675117">93</a> by Russ
		posted on 4/23/2009 at 1:25 PM
		</div>
		<div class="comment_text"><p>I'm not a big fan of emailing verbose error dumps primarily due to security concerns. Also, verbose error info can take up a lot of room in log files and email storage, especially if you have a busy site that suddenly starts bugging out. Error logs are a pain to wade through as well.</p><p>I've developed a solution that stores errors as JSON data in a database. I only store the most recent 100 errors so that if a major glitch happens while I'm asleep it won't clog the database. When an error occurs, I send an email that only contains a basic message with the template and line number, and a link to my "error admin" which displays the verbose error data (that I stored as JSON) using cfdump.</p><p>Storing errors in a database lets me flag things that are fixed and things that are not using my "error admin", which is quite handy when I am procrastinating.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675118">94</a> by Russ
		posted on 4/23/2009 at 1:28 PM
		</div>
		<div class="comment_text"><p>Oh and of course I convert the JSON data back to a CF object using deserializeJSON before displaying it with cfdump. Just wanted to make that clear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675120">95</a> by Lee Crockett
		posted on 4/24/2009 at 7:20 PM
		</div>
		<div class="comment_text"><p>I just put this code in my site.  Thanks for this, it's great.  I think finding a bug should have a reward as opposed to the "Sorry we have a problem" page, so I built this.  It's entertaining and informative.  The true story of the origin of the bug report.  Hope you enjoy it.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Finfosavvygroup.com%2Fbugreport_request.cfm%3Ah6_purzZ9uk4ToOgCXQnHoGw2q0&amp;cuid=3321886" rel="nofollow noopener" title="http://infosavvygroup.com/bugreport_request.cfm">http://infosavvygroup.com/b...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675119">96</a> by Doug
		posted on 4/27/2009 at 10:11 PM
		</div>
		<div class="comment_text"><p>Ok, this is a year-old posting and the comment list is long so forgive me if someone else brought this up...</p><p>Anyone notice that when the request error runs (and possibly the other errors too) it puts the error message into the http response header?  Is there any way to hide it there so all it shows is a generic 500 error instead of mentioning whatever is going wrong in my code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675121">97</a> by Raymond Camden
		posted on 4/27/2009 at 10:18 PM
		</div>
		<div class="comment_text"><p>I think you want to disable "Enable HTTP status codes" in the ColdFusion administrator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675123">98</a> by Doug
		posted on 4/27/2009 at 10:26 PM
		</div>
		<div class="comment_text"><p>Ah.  But does that mean I'll have to add a cfheader to the error template to send the 500?  Or am I misunderstanding how "Enable HTTP Status Codes" works?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675124">99</a> by Raymond Camden
		posted on 4/27/2009 at 10:27 PM
		</div>
		<div class="comment_text"><p>Oh I'm sorry - I misread you. You don't want _anything_ about the error to be revealed. Is that what you meant?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675122">100</a> by Doug
		posted on 4/27/2009 at 10:36 PM
		</div>
		<div class="comment_text"><p>Well, yeah, I guess so, I'm just following your suggestion to avoid putting error data even in the error_request.cfm file to keep snooping hackers from finding out what your code is up to.  So I'm keeping myself just paranoid enough in case anyone wants to turn my site into a dedicated advertisement for enhancement drugs.</p><p>...Speaking of "never too much paranoia", didn't Adobe recently give an update to get ColdFusion to read .htm files like .cfm files?  Talk about catering to the paranoid. :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675126">101</a> by Raymond Camden
		posted on 4/27/2009 at 11:32 PM
		</div>
		<div class="comment_text"><p>Hmm. I've got an error handler and it reveals nothing. Not even in the header. Maybe I'm not seeing what you are seeing.</p><p>Are you saying you have an error handler, it says something simple "Oops", and yet you can still sniff out the underlying error? (ie, db, bad variable, etc)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675125">102</a> by Doug
		posted on 4/28/2009 at 12:02 AM
		</div>
		<div class="comment_text"><p>Hm.  Well, I'm creating a unique situation so maybe it won't occur for exception type errors:</p><p>I never got around to defining a mail server on my development server, mostly due to procrastination.  So when I created "test.cfm" the error.cfm threw an error because of the cfmail tag which then led to the error_request.cfm.   When I then checked the HTTP header on the error_request.cfm I got this: "500 No SMTP server specified for the cfmail tag."</p><p>Perhaps it's because it's an error caused by my failure to setup the SMTP server or because it's the error_request template.  Maybe?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675128">103</a> by Raymond Camden
		posted on 4/28/2009 at 12:10 AM
		</div>
		<div class="comment_text"><p>Ah, your error handler threw an error. Try not to do that. ;) I replicated your setup, but my 500 error did NOT have 'no smtp', instead, it was just:</p><p>500 Internal Server Error</p><p>Nice and vague.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675127">104</a> by Doug
		posted on 4/28/2009 at 12:20 AM
		</div>
		<div class="comment_text"><p>Oh right, I should have mentioned I was basing all this on the instructions you gave for using the cferror tags instead of the onError method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675130">105</a> by Raymond Camden
		posted on 4/28/2009 at 12:22 AM
		</div>
		<div class="comment_text"><p>Right, I reverted to App.cfm, and even then, I can't see the detailed error info in the response headers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675133">106</a> by Jems
		posted on 5/15/2009 at 11:41 PM
		</div>
		<div class="comment_text"><p>Hi,<br>I have spoiled my one day to practice the Coldfusion Validations and I couldnt pass this guy. validateAt is not working for 'onsubmit' or 'blur', working perfectly for 'onserver'.</p><p>here is my code<br>----------------<br>&lt;html&gt;<br>&lt;head&gt;&lt;/head&gt;<br>&lt;body&gt;<br>&lt;cfform action="insert2.cfm" method="post"&gt;<br>Enter a Number:<br>&lt;cfinput type="text" name="ValNumber" maxlength="3" required="yes" validate="integer" validateat="onsubmit"&gt;<br>&lt;cfinput type="submit" name="submit" value="submit"&gt;<br>&lt;/cfform&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p><p>Any help is highly appreciated, thanks</p><p>Jems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675134">107</a> by Rob
		posted on 5/16/2009 at 12:48 AM
		</div>
		<div class="comment_text"><p>Do you have javascript enabled? Sounds like maybe not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675131">108</a> by Don
		posted on 5/26/2009 at 10:22 PM
		</div>
		<div class="comment_text"><p>Just to show I'm not a total dunderhead in ColdFusion, let me show you what I've done with errors. This is coming from the onError() in application.cfc. <br>[Application.cfc]<br>&lt;cffunction name="onError"&gt;<br>    &lt;cfargument name="Exception" required=true/&gt;<br>    &lt;cfargument type="String" name="EventName" required=true/&gt;<br>   &lt;cfif NOT (Arguments.EventName IS "onSessionEnd") OR (Arguments.EventName IS "onApplicationEnd")&gt;<br>   &lt;cfinclude template="includes/dsp_allErrors.cfm"&gt;<br>   &lt;/cfif&gt;<br>&lt;/cffunction&gt;</p><p>[dsp_allErrors.cfm]<br>&lt;cfsavecontent variable="theError"&gt;		#arguments.exception.message#<br>	#arguments.exception.detail#<br>	#arguments.exception.tagContext[1].template# LINE #arguments.exception.tagContext[1].line#			&lt;cfif ISDEFINED("arguments.exception.sql")&gt;<br>	#arguments.exception.sql#<br>	&lt;/cfif&gt;<br>&lt;/cfsavecontent&gt;<br>&lt;cflog file="AppErrorLog" type="error" text="#theError#"&gt;</p><p>I just pull the info out that I need instead of doing a full dump. How many acutally use the stack dumps etc? I haven't used a stack dump since my machine language days (which is back when we had to slide beads around on a framework)<br>Of course the user only sees "YOU BROKE IT YOU MORON!" message and I get the email telling me to check the log.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675132">109</a> by Jody Fitzpatrick
		posted on 8/10/2009 at 12:23 AM
		</div>
		<div class="comment_text"><p>Personally I would never display an error that<br>occured due to the server side process. But if a user<br>caused the error I would tell them. eg.) Invalid Email or something, but truthfully that really isn't an error it's just aninvalid input. I hope you guys understand what I'm talking about</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675135">110</a> by Lance Caetan
		posted on 8/28/2009 at 6:28 PM
		</div>
		<div class="comment_text"><p>Greetings. I seem to be having interesting behavior with my cferror handling. I was looking for some help. Currently, I only have a cferror catching errors of type "exception" The problem I am having is that not all "exception" type errors are being caught. My error page is setup to email me the occurrence of the error with all relevant details. However, intermittently the server will just throw the brief error message to the screen and not direct the user to the error page. The only way to get to the actual error template is to hit the refresh button on the browser and the user finally get directed to the template and the email gets sent out. I have no idea how many errors are actually occurring on the site. I have also installed the following patch which could be part of the problem:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fsupport%2Fsecurity%2Fbulletins%2Fapsb07-04.html%3A34DHMO3bPjzHW0C36AMtonh09yM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/support/security/bulletins/apsb07-04.html">http://www.adobe.com/suppor...</a></p><p>Please Advise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675136">111</a> by Raymond Camden
		posted on 8/28/2009 at 6:54 PM
		</div>
		<div class="comment_text"><p>Are you sure your error handling template isn't throwing an error itself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675137">112</a> by Lance Caetan
		posted on 8/28/2009 at 7:37 PM
		</div>
		<div class="comment_text"><p>I don't think it is because just as soon as I hit refresh, the page jumps to my template and the email gets sent out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675138">113</a> by Raymond Camden
		posted on 8/28/2009 at 9:40 PM
		</div>
		<div class="comment_text"><p>You got me on that one then. All I can recommend is maybe digging a bit more specifically into the cases where it happens and see if you can create a reproduceable case. When you can, share a zip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675139">114</a> by Lance Caetan
		posted on 8/28/2009 at 11:35 PM
		</div>
		<div class="comment_text"><p>I will try and put a zip together. Also, where i get confused is how the error trappings work. Let's say I have 2 error handlers one for type "exception" and one for type "request". Both in the same app.cfm. The cferror of type "request" seems to trap the error that would usually be trapped just by "exception" by itself. Is that the way it is supposed to work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675140">115</a> by Raymond Camden
		posted on 8/30/2009 at 7:01 AM
		</div>
		<div class="comment_text"><p>No - the request error should only fire if the exception error actually fails as well (ie your error handler having an error).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675142">116</a> by Paul Dynan
		posted on 9/11/2009 at 9:05 PM
		</div>
		<div class="comment_text"><p>I read over the comments, and don't think I missed it, but I was wondering: why not use the site-wide handler?</p><p>I ask because we have a few hundred sites on two servers (CF v7 &amp; 8).  That means not only a mix of applicaiton cfc and cfm sites, but modifying all of the, and adding the error pages to each.</p><p>It seems like the site-wide option would be great in our case, but if there's a good/wise reason not to, I have no problem putting in the time to fix these individually if necessary.</p><p>Also, if we do it per-site, is it worth putting all of the error handing into a cfc for all the error pages to call?  It seems like that at least would make ongoing management easier, but I wasn't sure if the nature of the error pages restricted that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675141">117</a> by Raymond Camden
		posted on 9/11/2009 at 9:29 PM
		</div>
		<div class="comment_text"><p>Why not use the site-wide handler? Well remember - this is a guide for _applications_, not the server as a whole. However, you bring up a good point. With hundreds of apps, using a site wide handler would cover those apps that do NOT do proper handling.</p><p>As to your second question - by 'all the error handling' - do you mean what to do with the exception info? Obviously you can't put onError in it's own CFC. It needs to be in App.cfc. I guess I'd say - if you are doing a -lot- with the errors, then maybe so. I typically just dump and mail (2 lines or so) so a CFC would be overkill.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675143">118</a> by Paul Dynan
		posted on 9/11/2009 at 9:53 PM
		</div>
		<div class="comment_text"><p>You make it sound like cferror/onerror would supersede site-wide if they existed...is that the case?  That site-wise is a fall-back when there is no error handing?</p><p>The second point was just trying to find a way manage all of the handling for the individual error pages from a single page.  My idea would be to have all the error.cfm pages call a shared error.cfc, which in turn would do all of the handling.</p><p>Ultimately, I'd like to have the error info inserted into a database, instead of mailed (too many sites, multiple people administering, etc).  This way, the error page could say "when contacting support, refer to error #1257", which would be the ID in the database where that error is held.  It would also allow us to hold the dump in its entirety if we like.</p><p>Obviously, there may be adjustments that may need to be done along the way, so I just want to make adjustments to one cfm or cfc page that would have the code doing this, to avoid updating all of the error pages individually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675145">119</a> by Raymond Camden
		posted on 9/11/2009 at 9:54 PM
		</div>
		<div class="comment_text"><p>Yep, the app settings supersede the server wide settings.</p><p>So based on what you said - I think it _would_ make sense to abstract your error handling as you have described.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675144">120</a> by Paul Dynan
		posted on 9/17/2009 at 6:02 PM
		</div>
		<div class="comment_text"><p>Just wanted to loop back and say thanks for the help.  Our new error page works great, and storing the info in a DB for a more comprehensive error history has already proven to be a huge asset.  It's also going to let us do some interesting forensics via queries over time to look for problems we would have missed in the past (consistent errors by IP, patterns to errors, etc).</p><p>One last question: Is there a way to alter the Error scope?  I wanted to trim out the StackTrace sections or just clear the contents.  We don't use them, and it would make reading the rest of the dump much easier.  I have tried StructDelete and StructUpdate, but the former throws an error, and the latter just does nothing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675146">121</a> by Raymond Camden
		posted on 9/17/2009 at 6:03 PM
		</div>
		<div class="comment_text"><p>Interesting. So if you structDelete the stacktrace key it doesn't change it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675147">122</a> by Raymond Camden
		posted on 9/17/2009 at 6:10 PM
		</div>
		<div class="comment_text"><p>I've confirmed this. I'm going to write a blog entry on it. For now though I'd recommend copying the values to a new struct, and as you copy, you can trim.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675148">123</a> by Paul Dynan
		posted on 9/17/2009 at 6:26 PM
		</div>
		<div class="comment_text"><p>I'll be interested to read that.  If you could include how to create the copy to trim, I would be interested in that as well.</p><p>I tried StructCopy, but it is not supported for the Error structure (much like StructDelete).  Duplicate works, but still cannot be altered.</p><p>I assume you mean by looping it, but I couldn't figure out how to do that when the structure of the Error var is dynamic depending on the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675149">124</a> by Raymond Camden
		posted on 9/17/2009 at 6:27 PM
		</div>
		<div class="comment_text"><p>Here ya go:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F9%2F17%2FInteresting-tidbits-on-ColdFusion-Exceptions%3AlYeJJYMil19hJSMTSdRYL3MQyqI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/9/17/Interesting-tidbits-on-ColdFusion-Exceptions">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675150">125</a> by Brad
		posted on 9/19/2009 at 3:17 AM
		</div>
		<div class="comment_text"><p>Thank you Ray, fir this very useful post!</p><p>cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675152">126</a> by Barbara Goss
		posted on 3/16/2010 at 6:19 AM
		</div>
		<div class="comment_text"><p>Raymond,<br>I don't know a thing about CF but needed a "nice" error message for broken links to our old pages floating around Google.  This magic formula works perfectly!  I'm so grateful for the fully-functional templates you drew up, as I wouldn't be able to code any CF myself.  Thanks!!<br>~Babs</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675151">127</a> by Raymond Camden
		posted on 3/16/2010 at 6:21 AM
		</div>
		<div class="comment_text"><p>Glad to help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675155">128</a> by Barbara Goss
		posted on 3/16/2010 at 7:39 PM
		</div>
		<div class="comment_text"><p>Hi Raymond!<br>Seems I spoke slightly too soon... the error message I receive in the mail is: Element MESSAGE is undefined in ERROR.  For fun I deleted the "#error.message# -" part and left text="#error.diagnostics#" - at which point it started emailing me Element DIAGNOSTICS is undefined in ERROR.  :D   It does incidentally log the 404 errors though!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675154">129</a> by Raymond Camden
		posted on 3/16/2010 at 7:45 PM
		</div>
		<div class="comment_text"><p>Odd - so what I'd suggest is simply dumping ERROR to an email and seeing what you get.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675158">130</a> by cypressotter
		posted on 3/18/2010 at 4:51 AM
		</div>
		<div class="comment_text"><p>I make a cfhttp request to UPS for rates and sometimes this timesout or errors. This generates a request error. And using Application.cfm and cferror any CFML within my error page is ignored.<br>Does using Application.cfc and onError have the same limitation?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675157">131</a> by Raymond Camden
		posted on 3/19/2010 at 3:28 PM
		</div>
		<div class="comment_text"><p>Well the obvious question is - have you tried? :) Make your timeout incredibly low, give it a whirl. As far as I know, It _should_ work, otherwise it wouldn't be terribly useful for error handling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675159">132</a> by EssVee
		posted on 6/22/2010 at 9:57 PM
		</div>
		<div class="comment_text"><p>I currently have a similar issue - like the one Lance C reported above ;(<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F12%2F5%2FThe-Complete-Guide-to-Adding-Error-Handling-to-Your-ColdFusion-Application%23cCE026434-DB7E-6C54-8D9C224453F15581%29%3Av-gw5u4WC-iEdsScz8e0RLwl5Wc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/12/5/The-Complete-Guide-to-Adding-Error-Handling-to-Your-ColdFusion-Application#cCE026434-DB7E-6C54-8D9C224453F15581)">http://www.coldfusionjedi.c...</a></p><p>I have a cferror tag - type=exception in the root application.cfm. The error template logs the info in a db log table. This works fine in most cases. Occasionally (a lot :() we see errors in the application log that should have been caught. In certain sub folders (which include root application.cfm) the users see the errors directly - the nice error template never shows up and does not get logged.</p><p>Any suggestions - please advice.</p><p>Thanks, <br>Ess Vee</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675160">133</a> by Raymond Camden
		posted on 6/22/2010 at 10:07 PM
		</div>
		<div class="comment_text"><p>Would the error perhaps be a DB issue? If so, then your error handler itself is throwing the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675161">134</a> by EssVee
		posted on 6/23/2010 at 12:46 AM
		</div>
		<div class="comment_text"><p>It was not a db error...It was a 'developer' issue!</p><p>I was trying to convert the error into a wddx object to store in the DB - and the cfwddx breaks on certain error structures like 'generatedContent' or 'stackTrace' or 'RootCause' - I deleted these structures - the essential info is already available - CFWDDX was happy and the CFERROR handler works.</p><p>Should not have doubted it in the first place...</p><p>Thank you for your guidance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675163">135</a> by Rajesh
		posted on 7/7/2010 at 10:36 AM
		</div>
		<div class="comment_text"><p>really helpful info...thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675164">136</a> by Matt
		posted on 8/20/2010 at 7:16 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>Great article.  We have setup our error handling in Application.cfm and it works exactly as you have pointed out.</p><p>In some places of the applicaiton however we use JS <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a> for a popup to process a downloadable excel or other file.  Do you know how to catch the errors that occur in a poup?  It seems that if we switched everything to CFWindow it would work but would prefer to not have to do that as there are many points in the app that use the js <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a> method.  Currently if I throw a &lt;cfjoe&gt; (fake tag) into a cfm page called in a popup application is not catching it and the error is output in the popup - ugly!</p><p>Thanks for any advice,<br>Matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675165">137</a> by Matt
		posted on 8/20/2010 at 8:35 PM
		</div>
		<div class="comment_text"><p>Now that I have opened up this <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a> can of worms I also realize another issue with using cferror int he application.cfm...</p><p>If you throw an error in a cfm page that is not in the root directory, but in a sub directory, then you end up with another cferror telling you the template (in my case errorEmail.cfm) can not be found.</p><p>I have searched extensively and others have this issue but I have nto found a solution to make it always use the errorEmail.cfm in the root.  The only solution I can figure out is to add a page errorEmail.cfm in each subdirectory that simply does a cfinclude to the root errorEmail.cfm file and then in the main errorEmail.cfm where the page relocates at the end (we use js location="" to relocate in case the error is thrown in a modal and not in the main document.body) you just need to relocate to the correct path based on which subdirectory encountered the error.</p><p>I wondered if you had a different solution to this issue that might be more elegant.</p><p>Best,<br>Matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675170">138</a> by Raymond Camden
		posted on 8/23/2010 at 6:08 AM
		</div>
		<div class="comment_text"><p>If I remember right - you can make it a relative path from a cfmapping. So if / is mapped to your application root, then /error.cfm should work even if you are in a subdirectory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675167">139</a> by Matt
		posted on 8/29/2010 at 2:39 AM
		</div>
		<div class="comment_text"><p>Regarding my previous 2 posts...</p><p>1 - To handle the popups spawned by js <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>, in the template that is processed from the applicaiton.cfm error handle, rather than cflocation at end of page to relocate, this was changed to a js location() method.  Before relocating it does a js try to see if (opener) exists.  If it does, we are in a popup so we call opener.location() to move the main window to the clean error output page and then window.close() to close the popup.</p><p>2. I was wrong about things here..what is happening is that without any mapping if an error is thrown in a subdirectory it does call the proper template as specified in your applicaiton.cfm (or cfc), the one in the root directory of the application.  However, when our page was trying to relocate it was not finding the page to relocate to which would throw another exception error and you get the template not found error.  To solve, right before the location() method in the error handling template page, use coldfusion to determine the relative path of the subdirectory and set a variable (eg relPath="../../../") and then use that in the location () (eg location="#relPath#index.cfm?action=error...")</p><p>Hopefully these posts will help someone else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675169">140</a> by cypressguy
		posted on 9/25/2010 at 2:00 AM
		</div>
		<div class="comment_text"><p>Matt,<br>If I ask for a nonexistent page on my site, I get a request error. But I do have cferror set up in my application.cfm file, and the file called by that tag:<br>&lt;cferror type="request" template="exception_req.cfm"&gt;<br>does exist and I can access it directly. But cferror doesn't call it. Wondering why...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675168">141</a> by Raymond Camden
		posted on 9/26/2010 at 12:46 AM
		</div>
		<div class="comment_text"><p>You should use onMissingTemplate instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675171">142</a> by Paul
		posted on 11/12/2010 at 9:39 AM
		</div>
		<div class="comment_text"><p>How do you something like this:</p><p>&lt;cferror type="exception" template="index.cfm?layout=error.exception"&gt;</p><p>This doesn't work by the way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675176">143</a> by Raymond Camden
		posted on 11/12/2010 at 4:30 PM
		</div>
		<div class="comment_text"><p>Can you explain what you are trying to accomplish?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675172">144</a> by pbaylis
		posted on 11/13/2010 at 1:45 AM
		</div>
		<div class="comment_text"><p>Sorry, we have a fusebox setup where everything is passing through index.cfm with fuses which redirect to specified templates. So when I set up the &lt;cferror&gt; path in application.cfm, I want to pass a fuseaction rather than a specific template. Hope that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675177">145</a> by Raymond Camden
		posted on 11/13/2010 at 2:03 AM
		</div>
		<div class="comment_text"><p>I don't know Fusebox, but I'd check their docs to see if they have native support to do some random fuseaction when an error occurs. I know Model-Glue has support for that.</p><p>If Fusebox doesn't, then I'd simply use cflocation to push the user from the error file to the fuseaction you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675175">146</a> by Martin
		posted on 11/17/2010 at 3:43 PM
		</div>
		<div class="comment_text"><p>Hi Ray - this is brilliant. I wondered if this could be done in cfscript. I think this works but I'm not sure I have it complete.</p><p>public void function onError(required any exception, required string eventName){WriteDump(arguments);}</p><p>Cheers<br>Martin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675181">147</a> by Raymond Camden
		posted on 11/17/2010 at 4:46 PM
		</div>
		<div class="comment_text"><p>You can do that in script - sure. You want an abort after the writedump though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675178">148</a> by Martin
		posted on 11/17/2010 at 5:07 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. <br>I'm still getting used to cfscript - I like it a lot though.</p><p>Cheers<br>Martin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675180">149</a> by Grant Eagon
		posted on 1/9/2011 at 5:52 PM
		</div>
		<div class="comment_text"><p>@Ray<br>Wanted to let you know I still find this useful.  Great post.</p><p>Some tips for others who might be reading this:</p><p>I use an "application.isLive" boolean in addition to Ray's "admin" setting to determine whether I show the error dump, or sending and email and displaying a friendly apology.</p><p>I also have this little piece of code you might find useful:</p><p>&lt;!--- capture two different forms of tag context ---&gt;<br>&lt;cfset TagContext = StructFindKey(ARGUMENTS.exception, 'TagContext') /&gt;<br>&lt;cfif ArrayLen(TagContext[1].value) EQ 0 AND IsDefined("ARGUMENTS.exception.RootCause.TagContext")&gt;<br>	&lt;cfset TagContext = ArrayNew(1) /&gt;<br>	&lt;cfset TagContext[1] = StructNew() /&gt;<br>	&lt;cfset TagContext[1].value = ARGUMENTS.exception.RootCause.TagContext /&gt;<br>&lt;/cfif&gt;</p><p>&lt;!--- create a string of tag context and line numbers for the log ---&gt;<br>&lt;cfloop from="1" to="#ArrayLen(TagContext)#" index="e"&gt;<br>	&lt;cfloop from="1" to="#ArrayLen(TagContext[e].value)#" index="c"&gt;<br>		&lt;cfset error_templates = ListAppend(error_templates, "#TagContext[e].value[c].template#: #TagContext[e].value[c].line#", " called from ") /&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cfloop&gt;</p><p>This basically creates a string using the cf error tag context to tell you the chain of files and lines numbers executed on the way to the error.  It what I typically look at in the dump of an error because it's usually the fastest way to get to the place I need to be to fix it.</p><p>The tag context string is meant to be logged so you can get at it later, or you can watch it come across if you are tailing a log.  I love this technique for monitoring a live server because you never can tell what a user, server, service, database, etc. is going to do that you didn't think of.  This is a great way to see it the first time and every time it happens and have a consistent way to look at it.</p><p>For some reason CF sometimes issues as "RootCause" element in the error and sometimes it doesn't.  I don't know why, but that's the reason for the two different methods of capturing the tag context.</p><p>The next thing I like to is this:</p><p>&lt;cfset var error_id = GenerateSecretKey('DESEDE') /&gt;<br>or<br>&lt;cfset var error_id = CreateUUID() /&gt;<br>.. whichever you prefer</p><p>Then I use this string in my logs, emails, messages to the customer, etc.  That way they can all tie back to each other.  Some people will say this is overkill. Maybe. But if your user comes to you with an error id and you can trace it back to the exact instance, time, etc of the error and see what actually happened, then you can be a hero.  It's just good customer service I think.</p><p>TL;DR - Create tag context string for easy logging.  Create unique error id for easier log searching.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675185">150</a> by Grant Eagon
		posted on 1/14/2011 at 4:54 PM
		</div>
		<div class="comment_text"><p>Wanted to post really quick that I figured out an awesome way to thread similar emailed errors from your app.  This is really great for reducing the number of unread emails [especially if you use gmail web interface].</p><p>All you have to do is take my tag context string example from above and encrypt it with a certain key so that it generates a consistent output if the tag context of the error is the same!</p><p>This is AWESOME [if I *do* say so myself].</p><p>Example:<br>&lt;!--- create fallback subject ---&gt;<br>&lt;cfset var error_subject = GenerateSecretKey('DESEDE') /&gt;</p><p>&lt;!--- capture two different forms of tag context ---&gt;<br>&lt;cfset TagContext = StructFindKey(ARGUMENTS.exception, 'TagContext') /&gt;<br>&lt;cfif ArrayLen(TagContext[1].value) EQ 0 AND IsDefined("ARGUMENTS.exception.RootCause.TagContext")&gt;<br>	&lt;cfset TagContext = ArrayNew(1) /&gt;<br>	&lt;cfset TagContext[1] = StructNew() /&gt;<br>	&lt;cfset TagContext[1].value = ARGUMENTS.exception.RootCause.TagContext /&gt;<br>&lt;/cfif&gt;</p><p>&lt;!--- create a string of tag context and line numbers for the log ---&gt;<br>&lt;cfloop from="1" to="#ArrayLen(TagContext)#" index="e"&gt;<br>	&lt;cfloop from="1" to="#ArrayLen(TagContext[e].value)#" index="c"&gt;<br>		&lt;cfset error_templates = ListAppend(error_templates, "#TagContext[e].value[c].template#: #TagContext[e].value[c].line#") /&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cfloop&gt;</p><p>&lt;!--- create an encrypted string from the tag context to allow email threading for similar errors ---&gt;<br>&lt;cfif IsDefined("error_templates") AND error_templates NEQ ""&gt;<br>	&lt;!--- change the delimeter of the list to "called from " for more readability ---&gt;<br>	&lt;cfset error_templates = ListChangeDelims(error_templates, " called from ") /&gt;<br>	&lt;!--- generate unique email subject line ----&gt;<br>	&lt;cfset error_subject = cfusion_encrypt(error_templates, 'MyApp version 0.1') /&gt;<br>&lt;/cfif&gt;</p><p>Then just make your email subject something like subject="MyApp error: #error_subject#" and you too can have threading magic!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675183">151</a> by Guest
		posted on 2/22/2011 at 5:43 AM
		</div>
		<div class="comment_text"><p>I pulled this code from Adobe.  When I tried doing this, it basically creates an infinite redirect loop and I will get hundreds of emails.</p><p>&lt;cfargument name="Exception" required="true" /&gt;<br>&lt;cfargument name="EventName" type="string" required="true" /&gt;<br>&lt;!--- Log all errors ---&gt;<br>&lt;cflog file="#<a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a>#" type="error" text="Event Name: #EventName#"&gt;<br>&lt;cflog file="#this.Name#" type="error" text="Message: #exception.message#"&gt;<br>&lt;!--- Some exceptions, including SSI do not generate a rootcause structure ---&gt;</p><p>&lt;cfif isDefined("exception.rootcause")&gt;<br>&lt;cflog file="#<a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a>#" type="error" text="Root Cause Message: #exception.rootcause.message#"&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfif NOT (arguments.EventName IS onSessionEnd) OR (arguments.eventName IS onApplicationEnd)&gt;<br>   &lt;cfinclude template="emailToDeveloper.cfm"&gt;<br>   &lt;cflocation url="errorPagec.cfm" addtoken="no"&gt;<br>&lt;/cfif&gt;</p><p>In my App.cfc I check to see if a database is active.  If not, the OnError does it's stuff.</p><p>Would it best to place the error page in a separate directory with another Application.cfc file that is perhaps blank?</p><p>I pretty much want the error message to display within the template I created.</p><p>Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675184">152</a> by Raymond Camden
		posted on 2/22/2011 at 6:00 PM
		</div>
		<div class="comment_text"><p>It looks like your error template has an error itself. It could be anything. I'd comment out everything and then put stuff back in one line at a time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675186">153</a> by Michael White
		posted on 6/28/2011 at 6:03 PM
		</div>
		<div class="comment_text"><p>if my application makes heavy use of &lt;cfdiv&gt; and ColdFusion.navigate I will use something like &lt;cfinclude template="/Errors/error.cfm"&gt; instead of &lt;cflocation&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675188">154</a> by Personal checks
		posted on 8/1/2011 at 1:13 PM
		</div>
		<div class="comment_text"><p>@Micheal white! Thank you very much for sharing this tip. I was searching for such stuff and now will use &lt;cfinclude template="/Errors/error.cfm"&gt; instead of &lt;cflocation&gt;. Thanks you resolved my problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675187">155</a> by Eric Belair
		posted on 8/29/2011 at 10:55 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>How do you handle Request errors when using onError in Application.cfc? I tried adding a CFERROR, but this does absolutely nothing. Is there somewhere in Application.cfc to handle Request errors?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675190">156</a> by Raymond Camden
		posted on 8/29/2011 at 10:58 PM
		</div>
		<div class="comment_text"><p>Not quite sure what you mean. I do show an example of onError in the blog entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675189">157</a> by Eric Belair
		posted on 8/29/2011 at 11:00 PM
		</div>
		<div class="comment_text"><p>I'm referring to the "Oh Crap" errors. I.E. CFPOO in your onError handler....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675192">158</a> by Raymond Camden
		posted on 8/30/2011 at 1:42 AM
		</div>
		<div class="comment_text"><p>So your asking me how to handle errors in onError itself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675193">159</a> by Eric Belair
		posted on 9/1/2011 at 10:05 PM
		</div>
		<div class="comment_text"><p>I'm sorry I'm not being clear. In your example above, you give a great explanation of how to catch and respond to the "Oh Crap"/REQUEST exceptions that occur INSIDE your error handler when using CFERROR. I am not using CFERROR. I am using an onError handler in Application.cfc. So, my question is, how can I catch and respond to the "Oh Crap"/REQUEST exceptions that occur inside the onError handler in Application.cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675191">160</a> by Raymond Camden
		posted on 9/5/2011 at 5:32 PM
		</div>
		<div class="comment_text"><p>You would need to use try/catch, or use cferror _along_ with onError.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675194">161</a> by Gregory Matthews
		posted on 9/9/2011 at 10:29 PM
		</div>
		<div class="comment_text"><p>Dude,</p><p>As simple as this may look to some, this is the best error reporting routine we've ever used. Makes our development and bug fixing so much easier and more productive.</p><p>Thank you so much for sharing this.</p><p>Gregory</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675195">162</a> by Raymond Camden
		posted on 9/9/2011 at 10:30 PM
		</div>
		<div class="comment_text"><p>Happy to help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675197">163</a> by Sebastian
		posted on 11/4/2011 at 3:51 AM
		</div>
		<div class="comment_text"><p>Raymond</p><p>Do you know if it's possible to reference the "Exceptions" data shown in Coldfusion's debugging output? It was my assumption initially that this would correspond to TagContext, but I've found that's not the case, at list in my system. It uses a modified fusebox 3 architecture, antiquated I know, but can't do much about that. There's an index.cfm which includes the core fusebox template which handles everything else. A cfcatch around that include handles errors for the site. If I dump cfcatch, the tagContext just shows the fusebox file and the index, but not the "deep" template where the error actually occurred. In the standard debugging, however, the correct exception location is shown, for example...</p><p>Exceptions</p><p>  17:25:55.055 - Expression Exception - in /somepath/dsp_myDeepTemplate.cfm : line 2</p><p>	    Element GARBAGE is undefined in REQUEST.</p><p>  17:25:55.055 - Application Exception - in /somepath/fbx_fusebox.cfm : line 247</p><p>	    Element GARBAGE is undefined in REQUEST.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675198">164</a> by Raymond Camden
		posted on 11/7/2011 at 8:16 PM
		</div>
		<div class="comment_text"><p>What you are seeing in the debug template is a high level look at _all_ exceptions. It is _not_ the same as the data you get in _one_ caught exception. You should, for one exception, be able to get tag context. Are you not seeing that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675196">165</a> by Erik Ickes
		posted on 11/11/2011 at 12:27 AM
		</div>
		<div class="comment_text"><p>On Sept 11, 2009 you wrote "Yep, the app settings supersede the server wide settings." but that doesn't seem to be the case. My hosting provider has a value in the Site-Wide Error Hander area but no matter what I do, my cfapplication/cferror does not fire. It just shows their global Oops page. The only way around it seems to be cftry blocks inline with a cfdump in the catch area. Any reason this would happen? The execution order of operations SEEMS like application would supercede server so I can't figure out how the host template keeps cutting in line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675199">166</a> by Raymond Camden
		posted on 11/11/2011 at 1:38 AM
		</div>
		<div class="comment_text"><p>In my testing, I don't see that. Ensure your cferror template doesn't have an error itself. Reduce it down to "Oops" and see if that works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675200">167</a> by Ben Mueller
		posted on 11/15/2011 at 12:16 AM
		</div>
		<div class="comment_text"><p>Spectacularly late to the party on this one, but how is one supposed to handle the case where a user navigates directly to application.cfm, application.cfc, or onrequestend.cfm?  I've bounced around to various sites on the web (including this one!), and I see an un-trapped CF error which says this:</p><p>Invalid request of Application.cfm, Application.cfc, or OnRequestEnd.cfm file</p><p>That's super ugly!  Gah!</p><p>I'm surprised here for two reasons:  1) how is it that I've never actually tried this before, and 2) how is it that CF doesn't have some simple fix for this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675202">168</a> by Raymond Camden
		posted on 11/15/2011 at 3:09 AM
		</div>
		<div class="comment_text"><p>It appears as if there is no way to handle this. I'd do it at the web server level. Just push any request for it to /index.html or some such.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675203">169</a> by Ben Mueller
		posted on 11/15/2011 at 3:12 AM
		</div>
		<div class="comment_text"><p>Wow, that's...awful.  )-:  But thanks for the reply.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675201">170</a> by MrBuzzy
		posted on 12/7/2011 at 8:39 AM
		</div>
		<div class="comment_text"><p>@Ben the way to handle (conceal) that is by using a global error handler, set in CF Admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675205">171</a> by Dave
		posted on 3/15/2013 at 6:06 AM
		</div>
		<div class="comment_text"><p>Really good info!  Our CF app sorely needs some of this.  I often find it easier to read about stuff like this from people who have used it rather than from the coldfusion reference.  Thanks for sharing it!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675204">172</a> by Raymond Camden
		posted on 3/15/2013 at 6:08 AM
		</div>
		<div class="comment_text"><p>Glad this old post is still useful. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675206">173</a> by Mina
		posted on 3/15/2013 at 6:58 PM
		</div>
		<div class="comment_text"><p>Very useful post.  Thanks!  <br>With regard to the log file...when you do &lt;cflog file="myapperrorlog"&gt;, where is this stored?  I tried creating my own, but can't find it.  Also, in the CF Administrator, you're only allowed the log files:  Application.log, server.log, exception.log, EventGateway.log, and Derby.log.  I'm on CF9.  I also tried creating a log file in my C:\Coldfusion9\logs\ dir, but no dice.<br>What am I doing wrong?<br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675207">174</a> by Raymond Camden
		posted on 3/15/2013 at 8:24 PM
		</div>
		<div class="comment_text"><p>It is supposed to be in the logs directory with the rest of them. If you are not seeing them in logs, nor in the CF admin, then something funky is going on. Like your CF service not having write permissions for the folder. I'd check to see if you have CF running as a user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675208">175</a> by Ernest Breau
		posted on 3/16/2013 at 1:08 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks so much for this post.<br>I did notice that if you have in your query string &amp;ltr=Y you get &gt;r=Y so i made a quick change to your Application.cfc<br>replace cgi.query_string with #HTMLEditFormat(cgi.query_string)#</p><p>Thanks again,<br>Ernie</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675209">176</a> by on24
		posted on 5/15/2013 at 10:11 PM
		</div>
		<div class="comment_text"><p>Thanks that helped me a lot. A great tutorial to build a nice error page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675210">177</a> by RHPT
		posted on 9/13/2013 at 6:47 PM
		</div>
		<div class="comment_text"><p>I have an issue where &lt;cferror&gt; is getting triggered, but there are no exception variables (error.rootcause, error.message, error.type, etc). Why would this happen?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675216">178</a> by Raymond Camden
		posted on 9/13/2013 at 8:16 PM
		</div>
		<div class="comment_text"><p>No clue. Perhaps an error in your event handler itself? Maybe try cfdump Variables and see if you see anything weird?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675212">179</a> by RHPT
		posted on 9/14/2013 at 12:30 AM
		</div>
		<div class="comment_text"><p>I've dumped the Variables scope, and it's empty. The error handler isn't the problem, I think, because the exception variable is trigged when other errors occur. Something on the website is triggering &lt;cferror&gt; but causes &lt;cferror&gt; to not populate  the exception variables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675219">180</a> by Raymond Camden
		posted on 9/14/2013 at 1:17 AM
		</div>
		<div class="comment_text"><p>You got me there. I'd have to dig onto your server to know why.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675213">181</a> by Michael Muller
		posted on 10/4/2013 at 11:06 PM
		</div>
		<div class="comment_text"><p>I was having a similar issue. Seems that in IIS7 you can set the error page globally by clicking on your server name in the left pane, then going to Error Pages, and specifying a local CFM of your choosing. What this does is bypass CF and run the error processing page, but without the error scope (since it was IIS who launched the page, and not CF,and really, what would IIS know?).</p><p>So, all I can think of is creating a separate error-iis500.cfm page that does everything but include the error scope in the email. At least I'll know something happened, and on what page, but not the line number or the specific error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675214">182</a> by Michael Muller
		posted on 10/4/2013 at 11:47 PM
		</div>
		<div class="comment_text"><p>BTW, I found this...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fthread%2F532051%3ASxs84KCWSG06rEM42_eW3Zgb4tk&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/thread/532051">http://forums.adobe.com/thr...</a></p><p>If you make the change using appcmd as recommended and decide you don't like what it does, you can set it back with -existingResponse:Replace</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675215">183</a> by Marc
		posted on 10/28/2013 at 11:34 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>i need an issue for testing if CF is running.<br>We have a server running on windows 2008 R2 and sometimes CF server give no response. (Not a 404 message).<br>I plan to write a script on another server which will test the firts ...<br>Any idea ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675218">184</a> by Raymond Camden
		posted on 10/28/2013 at 2:31 PM
		</div>
		<div class="comment_text"><p>No ideas outside of checking the logs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675217">185</a> by Tom Noel
		posted on 4/29/2014 at 4:20 PM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>Would it be possible for you to display this in script? We are moving to all script in our CFCs and reference material for script is woefully short. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675222">186</a> by Raymond Camden
		posted on 4/30/2014 at 5:52 AM
		</div>
		<div class="comment_text"><p>What in particular?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675220">187</a> by Tom Noel
		posted on 4/30/2014 at 5:04 PM
		</div>
		<div class="comment_text"><p>I was referring to the error handling solution you written in tag format above. I did come up with this:<br>	public void function onError(any Exception, string EventName) output="true" {<br>		include 'sorry.cfm';</p><p>		var errorText = "";<br>		var errorEmail = new mail();</p><p>		savecontent variable="errorText" {<br>			writeDump("#application.GetApplicationSettings()#");<br>			writeOutput("Form:");<br>			writeDump("#form#");<br>			writeOutput("URL:");<br>			writeDump("#url#");<br>			writeoutput("CGI:");<br>			writeDump("#CGI#");<br>		}</p><p>		errorEmail.setTo('name@ename.com');<br>		errorEmail.setFrom('mailServer');<br>		errorEmail.setSubject('An Error has Occured');<br>		errorEmail.setBody('<br>			http://#cgi.server_namecgi.script_name#?#cgi.query_string#&lt;br /&gt;<br>			Time: #dateFormat(now(), "short")##timeFormat(now(), "short")#&lt;br /&gt;<br>			EventName: #eventName#&lt;br /&gt;<br>			Message: #arguments.exception.message#&lt;br /&gt;<br>			Details: #arguments.exception.detail#&lt;br /&gt;<br>			Type: #arguments.exception.type#&lt;br /&gt;<br>			Error Dump: #errorText#<br>		');<br>		errorEmail.setType('html');<br>		errorEmail.send();</p><p>	}</p><p>Any suggestions welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2530625968">
	<div>
		<img src="https://disqus.com/api/users/avatars/karlpetrow.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2530625968">188</a> by Karl Petrow
		posted on 2/23/2016 at 1:57 PM
		</div>
		<div class="comment_text"><p>Old topic but I am stuck.  I am having a pathing issue only when error.cfm is not used as error handler.  It is a ajax call to a cfc.  exception log:</p><p>"ERROR","ajp-bio-8009-exec-7","02/23/2016","08:49:25","",";Page /secure/file_transfer/SSStatus.cfc [zip://C:\inetpub\wwwroot\archive-Carlson (15).ra!/secure/file_transfer/SSStatus.cfc] not found;Page /secure/file_transfer/SSStatus.cfc [zip://C:\inetpub\wwwroot\archive-Carlson (15).ra!/secure/file_transfer/SSStatus.cfc] not found"</p><p>the cfc is definitely in that path.</p></div>
	</div>
</div>
		