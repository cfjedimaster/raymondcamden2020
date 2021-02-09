
<div class="comment" id="c_1713663363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663363">1</a> by Jay McConathy
		posted on 3/21/2007 at 5:05 PM
		</div>
		<div class="comment_text"><p>Since I have never setup an appplication.cfc nd have usually used application.cfm I know I am behind the curve.. however just to make sure, and I am sure this is a stoopid question, I can just rename the application.cfm files to application.cfc and make the appropriate code changes for it to work correctly?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663347">2</a> by Phillip Senn
		posted on 3/21/2007 at 5:12 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Your app.cfc reference has<br>&lt;cfset this.scriptProtect = false&gt;</p><p>Shouldn't it be the following?<br>&lt;cfset this.scriptProtect = "all"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663359">3</a> by Raymond Camden
		posted on 3/21/2007 at 5:22 PM
		</div>
		<div class="comment_text"><p>PS: No. I prefer to write my own security. Plus I find scriptProtect tends to interfere at times, like on a blog if you try to post code as the author, it will block it. It _is_ a nice feature, I just don't use it myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663367">4</a> by gemma
		posted on 3/21/2007 at 5:27 PM
		</div>
		<div class="comment_text"><p>great website and good idea! However, you spelt my hometown wrong...its spelt worcester park. Not that it matters but thought you should know</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663365">5</a> by Raymond Camden
		posted on 3/21/2007 at 5:42 PM
		</div>
		<div class="comment_text"><p>@Jay - I wouldn't just rename it. A CFC is quite different from an CFM file. You need to reorganize stuff. I'm pretty darn sure I did a blog entry on this.</p><p>Hmm, I can't find it.</p><p>I can maybe write a new one on it. Do you have a good, and not too complex App.cfm you could share?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663361">6</a> by Tom Mollerus
		posted on 3/21/2007 at 5:51 PM
		</div>
		<div class="comment_text"><p>Ray, why is it necessary to use only one kind of lock, named or scoped, across the whole Application.cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663366">7</a> by Raymond Camden
		posted on 3/21/2007 at 6:10 PM
		</div>
		<div class="comment_text"><p>Tom:</p><p>2 issues.</p><p>1) It is important to use the same type of lock, or it is useless.</p><p>2) onSessionEnd can't use the scope lock, it can only use the named lock.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663368">8</a> by Jay McConathy
		posted on 3/21/2007 at 6:34 PM
		</div>
		<div class="comment_text"><p>I have a very simple newbie one ..</p><p>here it is..</p><p>&lt;CFSETTING ENABLECFOUTPUTONLY="Yes"&gt;<br>&lt;CFAPPLICATION NAME="QAX"<br>	CLIENTMANAGEMENT="Yes"<br>	SESSIONMANAGEMENT="Yes"<br>	SETCLIENTCOOKIES="Yes"<br>	SESSIONTIMEOUT="#CreateTimeSpan(0, 8, 0, 0)#"<br>	APPLICATIONTIMEOUT="#CreateTimeSpan(0, 8, 0, 0)#"<br>	CLIENTSTORAGE="Registry"&gt;<br>	&lt;CFERROR type="request" template="app_error.cfm" mailto="jay_mcconathy@txeb.uscourts.gov"&gt;</p><p>&lt;!--- Do I need to create my app var? ---&gt;<br>&lt;cfset needInit = false&gt;<br>&lt;cflock scope="application" type="readOnly" timeout="30"&gt;<br>   &lt;cfif not structKeyExists(application,"sessions")&gt;<br>      &lt;cfset needInit = true&gt;<br>   &lt;/cfif&gt;<br>&lt;/cflock&gt;</p><p>&lt;!--- Yes, I do need to make it. ---&gt;<br>&lt;cfif needInit&gt;<br>   &lt;cflock scope="application" type="exclusive" timeout="30"&gt;<br>      &lt;cfif not structKeyExists(application,"sessions")&gt;<br>         &lt;cfset application.sessions = structNew()&gt;<br>      &lt;/cfif&gt;<br>   &lt;/cflock&gt;<br>&lt;/cfif&gt;</p><p>&lt;!--- Store my last hit. ---&gt;<br>&lt;cfset application.sessions[session.urltoken] = now()&gt;</p><p>&lt;CFSETTING ENABLECFOUTPUTONLY="No"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663371">9</a> by Jay McConathy
		posted on 3/21/2007 at 6:35 PM
		</div>
		<div class="comment_text"><p>I have not seen a blog entry on it which is why I am asking..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663369">10</a> by Paul
		posted on 3/21/2007 at 11:03 PM
		</div>
		<div class="comment_text"><p>Do you have to var scope the lock name like you would a query name?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663374">11</a> by Raymond Camden
		posted on 3/22/2007 at 12:21 AM
		</div>
		<div class="comment_text"><p>As far as I know, no.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663372">12</a> by Jean-Michel Rottiers
		posted on 3/22/2007 at 2:02 PM
		</div>
		<div class="comment_text"><p>mmm Ray &amp; Jay there's this entry in the coldfusion cookbook ;-p</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusioncookbook.com%2Fentry%2F124%2FHow-do-I-migrate-from-Application.cfm-to-Application.cfc%3F%3Aw2qAmHaExq3qwAor4Nza6oNDSzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusioncookbook.com/entry/124/How-do-I-migrate-from-Application.cfm-to-Application.cfc?">http://www.coldfusioncookbo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663375">13</a> by Tom Mollerus
		posted on 3/22/2007 at 5:54 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I think I've realized why I was confused, and I'm wondering if you can confirm: the problem wasn't that the user was merely using two different kinds of locks in Application.cfc; the problem was that the user had two different kinds of locks protecting the same scope, which would render them less effective, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663373">14</a> by Raymond Camden
		posted on 3/22/2007 at 8:00 PM
		</div>
		<div class="comment_text"><p>It doesn't render it less effective. It renders it UNeffective. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663377">15</a> by Matthew Zimmer
		posted on 4/10/2008 at 7:12 PM
		</div>
		<div class="comment_text"><p>Great post Ray and thank you for confirming my suspicion on this.  I'm trying to clean up another developer's Application.cfc logic and I came across this very scenario which threw up a red flag.</p><p>One thing, though:</p><p>As I read  the sentence "But he can't use a named lock since the application scope isn't available directly in onSessionEnd" I was a bit confused.  Since nobody has commented on it yet I suppose most understood what Ray was trying to say, though, I feel like posting a comment to help out the noobies (not to correct Ray as the paragraph immediately following this sentence already does that for us), the sentence should read:</p><p>"But he can't use a [scope based lock] since the application scope isn't available directly in onSessionEnd"</p><p>When in doubt, check Ray's blog!</p><p>^ Write that down :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663376">16</a> by Raymond Camden
		posted on 4/10/2008 at 7:15 PM
		</div>
		<div class="comment_text"><p>Good catch there Matt. I'll edit the post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663349">17</a> by Kate
		posted on 10/7/2009 at 7:21 PM
		</div>
		<div class="comment_text"><p>When switching from Application.cfm to Application.cfc and adding error handling my load time has increased dramatically. A page on the server using .cfm loads in about half a second, whereas the .cfc's server page takes over 9 seconds to load.  Is this normal?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663352">18</a> by Raymond Camden
		posted on 10/7/2009 at 7:27 PM
		</div>
		<div class="comment_text"><p>Nope. Can you show us your code? Use Pastebin please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663350">19</a> by Kate
		posted on 10/7/2009 at 7:45 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fpaste2.org%2Fp%2F457110%3AoIDTpmFZjVC0FgsevhlpIwnTLQg&amp;cuid=3321886" rel="nofollow noopener" title="http://paste2.org/p/457110">http://paste2.org/p/457110</a></p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663351">20</a> by Raymond Camden
		posted on 10/7/2009 at 7:56 PM
		</div>
		<div class="comment_text"><p>There is a lot wrong with this file - but none that immediately imply a slowdown. Comments from top to bottom.</p><p>Lines 15-20. If you use J2EE Sesions (CF Admin setting) you can get rid of those lines.</p><p>Line 22 doesn't make sense. This should either be an Application variable.</p><p>Lines 24 is an include. What is the purpose of it being there? It will run on every request. If you want that - use it within onRequestStart.</p><p>Lines 25-33 should most likely be in onSessionStart. No - lines 25-27 shoul dbe. Lines 29-33 should probably be in onRequestStart.</p><p>Think of it like this - if you want something to run on every request, you really want to use the onRequestStart method. If you want to define some session variables then you to use onSessionStart.</p><p>You can also consider wrapping your code blocks with &lt;cftimer&gt; to determine the exact portion that is slowing things down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663362">21</a> by Kate Maher
		posted on 10/25/2009 at 9:33 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!  I made those changes.  The timing seemed to calm down a bit the more pages I ran.  I'm not sure why that'd happen, but it did.  cftimer just showed close to 0ms runs, so maybe it was something else completely.  Thanks for all your help!</p></div>
	</div>
</div>
		