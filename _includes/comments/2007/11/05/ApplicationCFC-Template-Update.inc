
<div class="comment" id="c_1713673962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673962">1</a> by Andy Matthews
		posted on 11/6/2007 at 3:56 AM
		</div>
		<div class="comment_text"><p>And of course one DAY after I rewrite my custom CMS to use app.cfc.</p><p>:)</p><p>Thanks Ray...the tutes and assistance you give are always top notch. Appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673967">2</a> by Raymond Camden
		posted on 11/6/2007 at 4:00 AM
		</div>
		<div class="comment_text"><p>I had to read "tutes" a few times to figure out you meant tutorials. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673963">3</a> by Jeff Fleitz
		posted on 11/6/2007 at 5:45 PM
		</div>
		<div class="comment_text"><p>Good timing for me Ray. I just updated to CF8 2 weeks ago and began the process of migrating my code to use App.cfc.  I was actually on your site looking at the one for CF7 last night.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673964">4</a> by Daniel Greenfeld
		posted on 11/6/2007 at 8:17 PM
		</div>
		<div class="comment_text"><p>Thanks for taking your documentation out of PDF.  Text or ReStructuredText is the way to go.  Easier for you to handle and it also means that we don't have to use a PDF reader/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673965">5</a> by brian
		posted on 11/7/2007 at 4:58 AM
		</div>
		<div class="comment_text"><p>Do you think the delete onRequest stuff in onRequestStart for cfc calls should be in as standard? It can be a difficult one to pin down, especially when it causes problems with binding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673970">6</a> by Raymond Camden
		posted on 11/7/2007 at 6:55 AM
		</div>
		<div class="comment_text"><p>What delete?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673969">7</a> by brian
		posted on 11/7/2007 at 1:43 PM
		</div>
		<div class="comment_text"><p>&lt;cfif listlast(cgi.path_info,".") is "cfc"&gt;<br>    &lt;cfset StructDelete( THIS, "OnRequest" ) /&gt;<br>    &lt;cfset StructDelete(variables,"onRequest")/&gt;<br>&lt;/cfif&gt;</p><p>otherwise my cfselect binding to a cfc in the same directory doesn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673968">8</a> by Raymond Camden
		posted on 11/7/2007 at 7:30 PM
		</div>
		<div class="comment_text"><p>Ah. Hmm, good point. Thing is - I really want this to be a "no code" template, ie, no assumptions. I _did_ do some code inside onError.</p><p>Hmmmm. What do people think? What if I add an additional comment with very obvious warnings:</p><p>&lt;!--- NOTE THAT THIS METHOD DISABLES CFC CALLS ---&gt;</p><p>And maybe I can link to an a blog entry on the method you described?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673966">9</a> by brian
		posted on 11/7/2007 at 10:51 PM
		</div>
		<div class="comment_text"><p>I think that's a good idea. This 'feature' needs wider publicity, as someone approaching this afresh can use a 'standard' application.cfc with a standard binding example and have no clue why it's not working</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673971">10</a> by Justin Schier
		posted on 10/14/2008 at 4:04 AM
		</div>
		<div class="comment_text"><p>Ummm... I've been programming Coldfusion for 10 years, and I've been using your Application.cfc template for at least the last 3 or 4 in all my applications. Thanks so much for that!</p><p>BUT!</p><p>Today I was working on some Ajax calls direct to a CFC and they were returning a blank page. I could not figure out why for 2 hours until I found this page.</p><p>As soon as I put in Brian's code, it started working as expected. (THANK YOU BRIAN!)</p><p>What the F is up with having to do that?? Why does your template not work with direct calls to CFCs? I'm an advanced CF developer and you've got me on this one.</p><p>Anyway, it's not "very obvious" to me, sorry. I wish you would have put that comment in, as well as some kind of explanation WHY it disables CFC calls and HOW to enable them.</p><p>Thanks very much for all you do!!<br>Justin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673979">11</a> by Raymond Camden
		posted on 10/14/2008 at 5:03 AM
		</div>
		<div class="comment_text"><p>Please check the template now. Nice and "loud" I would hope. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673976">12</a> by Will
		posted on 3/13/2009 at 9:38 PM
		</div>
		<div class="comment_text"><p>So is it that using an INCLUDE to run the cfc that breaks it? Or will the cfc not even run unless you force invoke it through the onrequest. Let's say my onRequest was essentially empty, we run http://site/my.cfc?var1=1&amp;var2=2 and my.cfc is setup for remote. If onRequest is present but empty, will it still run?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673975">13</a> by Raymond Camden
		posted on 3/13/2009 at 9:48 PM
		</div>
		<div class="comment_text"><p>Hmm. I think it will break, but why not try it yourself and tell us. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673980">14</a> by Will Broadhead
		posted on 3/14/2009 at 12:13 AM
		</div>
		<div class="comment_text"><p>Okay. I tried it out. Yes, it works fine. As long as your application.cfc/applicationOnStart isn't the driver (I let the index.cfm drive the content by pageid), it lets a direct cfc call go through fine, and thus, ajax calls should work fine. So it does seem to be the include call that breaks a cfc call. Which makes sense. I wouldn't really expect cfinclude to run a cfc.</p><p>It consumes the url vars as both url and argument input. I just output from onRequestStart and the called function to screen to test:</p><p>SIMPLE FUNCTION:<br>ffunction name="fn_TestGateway" access="remote" returntype="any" hint="TEST" &gt;<br>&lt;cfargument name='testytester'&gt;<br>&lt;HR/&gt;fn_TestGateway HAS RUN CORRECTLY...&lt;HR/&gt;<br>&lt;cfif isDefined('arguments.testytester')&gt;ARGUMENT: &lt;cfoutput&gt;#arguments.testytester#&lt;/cfoutput&gt;&lt;br /&gt;&lt;/cfif&gt;<br>&lt;cfif isDefined('url.testytester')&gt;URL: &lt;cfoutput&gt;#URL.testytester#&lt;/cfoutput&gt;&lt;br /&gt;&lt;/cfif&gt;<br>&lt;/cffunction&gt;</p><p>REQUEST:<br>http://mfi/_code/_application/_initializeApplicationVariables.cfc?method=fn_TestGateway&amp;testytester=howdy</p><p>RESULT:<br>- in onRequestStart - x=123 <br>fn_TestGateway HAS RUN CORRECTLY...  ARGUMENT: howdy<br>URL: howdy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673978">15</a> by Will Broadhead
		posted on 3/18/2009 at 5:06 AM
		</div>
		<div class="comment_text"><p>My apologies, Ben just set me straight. I was confusing onRequest with OnRequestStart. After reading the onRequest docs from Adobe, I see no reason I would ever want to tangle with it. And thus all the brouhaha about how to handle its use as it intercepts the main cfm/cfc call. So my whole post was moot. Thanks for your patience and understanding! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673981">16</a> by Phil Williams
		posted on 7/30/2009 at 3:46 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I must be going blind but I can't find the link to the MX7 version of your template, could you post a link?</p><p>Thanks...</p><p>Phil</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673977">17</a> by Raymond Camden
		posted on 7/31/2009 at 8:23 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fapp.pdf%3AFPoxrLVB13K-RgP6OmyFjXHA224&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/app.pdf">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673983">18</a> by Phil Williams
		posted on 7/31/2009 at 11:42 AM
		</div>
		<div class="comment_text"><p>Excellent, thanks Ray :)</p><p>On a side note, I've downloaded BlogCFC and found a couple of issues, where would be the best place to report them?  Excellent application overall though...</p><p>Phil</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673985">19</a> by Raymond Camden
		posted on 8/2/2009 at 12:23 AM
		</div>
		<div class="comment_text"><p>I'd report the issues at the RIAForge project page:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblogcfc.riaforge.org%3AEvJ9qTJi9-tw8mjUHPLY3uhslmw&amp;cuid=3321886" rel="nofollow noopener" title="http://blogcfc.riaforge.org">http://blogcfc.riaforge.org</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673988">20</a> by Brian
		posted on 5/12/2010 at 12:15 AM
		</div>
		<div class="comment_text"><p>A question about onError:  should the attribute "output" be true and not false so when you dump the arguments, they display?  Or am i missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673986">21</a> by William Broadhead
		posted on 5/12/2010 at 1:46 AM
		</div>
		<div class="comment_text"><p>If you want the actual onError event to draw anything to the html output flow, yes, you need output on. Otherwise, if your onError event sends an email, calls another function, passes its resulting values to a a function that handles your errorDisplay (which should have output turned on so it can display), then you can leave the output set to false</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673990">22</a> by snake
		posted on 6/22/2012 at 6:19 PM
		</div>
		<div class="comment_text"><p>FYI, the link no longer works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673991">23</a> by Raymond Camden
		posted on 6/22/2012 at 7:11 PM
		</div>
		<div class="comment_text"><p>Fixed. Note though that this blog entry is almost 5 years old and the code is WAY out of date.</p></div>
	</div>
</div>
		