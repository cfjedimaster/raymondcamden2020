
<div class="comment" id="c_1713729142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729142">1</a> by Edward Beckett
		posted on 1/27/2011 at 8:38 AM
		</div>
		<div class="comment_text"><p>Where does the Application scope fall in to the search order - First or Last?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729143">2</a> by Raymond Camden
		posted on 1/27/2011 at 8:39 AM
		</div>
		<div class="comment_text"><p>It doesn't. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729244">3</a> by Raymond Camden
		posted on 1/27/2011 at 8:40 AM
		</div>
		<div class="comment_text"><p>Hit submit too early. If you look at the -very- last link, the second column in the table says if the prefix is required. it is for Application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729243">4</a> by SuperAlly
		posted on 1/27/2011 at 8:41 AM
		</div>
		<div class="comment_text"><p>Nice explanation Ray, thanks.<br>I never used to scope variables, didn't realize it was an issue.  I forced myself to start doing it recently and now I scope everything out of habit as I go. Thought it'd be a nuisance, but it's just become part of the process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729250">5</a> by Eric Belair
		posted on 1/27/2011 at 8:41 AM
		</div>
		<div class="comment_text"><p>Good post... basic CF knowledge, but very important to know (and be reminded of, in my case).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729242">6</a> by Pritesh
		posted on 1/27/2011 at 9:14 AM
		</div>
		<div class="comment_text"><p>In such case whenever I need to use URL and FORM scope. I always append FORM variables to URL using structAppend(URL,FORM) at top of the page and in rest of page I will use URL scope variable.<br>Till now it work fine for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729246">7</a> by existdissolve
		posted on 1/27/2011 at 10:31 AM
		</div>
		<div class="comment_text"><p>Recently had an example come up at work where scoping improved a bit of code by an incredible magnitude--can't remember the precise metrics off the top of my head, but it made the difference between an unacceptably slow page and something that now zips along like nobody's business.</p><p>Definitely a good habit to adopt, for new and old devs alike :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729241">8</a> by JP
		posted on 1/27/2011 at 12:37 PM
		</div>
		<div class="comment_text"><p>I've done this before, which I kinda like... I used it when I have a page that uses URL variables, but also handles the same variables in the Form scope:</p><p>&lt;cfparam name="URL.param1" default=""&gt;<br>&lt;cfparam name="URL.param2" default=""&gt;</p><p>&lt;cfif IsDefined ("Form")&gt;<br>   &lt;cfset StructAppend (URL, Form, true)&gt;<br>&lt;/cfif&gt;</p><p>... then I continue writing the code using the URL scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729251">9</a> by JP
		posted on 1/27/2011 at 12:40 PM
		</div>
		<div class="comment_text"><p>Pritesh - didn't mean to steal your thunder!!! I missed your post on my first read. Glad to know this technique is used by others.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729253">10</a> by Patrick Heppler
		posted on 1/27/2011 at 2:35 PM
		</div>
		<div class="comment_text"><p>I prefer using Request Scope.<br>In my App.cfc i usualy do:<br>public boolean function onRequestStart(){<br>     structAppend(request, url, false);<br>   structAppend(request, form, true);<br>some other stuff<br>}</p><p>So i can use <a href="http://disq.us/url?url=http%3A%2F%2Frequest.search%3Ae-3n5LJ4KjwXtt_5QHjzC5wf_dU&amp;cuid=3321886" rel="nofollow noopener" title="request.search">request.search</a> no matter if search was send in by form or url.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729252">11</a> by Richard Migambi
		posted on 1/27/2011 at 3:56 PM
		</div>
		<div class="comment_text"><p>Great to know this as some of our old code does not use this scoping. However if i had a custom tag returning a 'caller.var' variables how would I reference it in my calling page? as 'var' or do I do &lt;cfset variables.var = var /&gt;?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729259">12</a> by Grumpy CFer
		posted on 1/27/2011 at 4:10 PM
		</div>
		<div class="comment_text"><p>Not knowing where your variables are coming from is very bad!  There are security issues with every method described above.  The php community has delt with this in the appropriate manner.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fphp.net%2Fmanual%2Fen%2Fsecurity.globals.php%3AaVfUtdDH_KA1Jw1jMrFVbivFXow&amp;cuid=3321886" rel="nofollow noopener" title="http://php.net/manual/en/security.globals.php">http://php.net/manual/en/se...</a></p><p>They have removed the ability to not scope the variables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729255">13</a> by Raymond Camden
		posted on 1/27/2011 at 5:04 PM
		</div>
		<div class="comment_text"><p>@Richard: In a custom tag, caller always refers to the immediate parent's Variables scope. So caller.x == variables.x in the parent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729257">14</a> by Nialls Blog
		posted on 1/27/2011 at 6:44 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I'm planning on creating a summary that shoukld address _all_ the issues above as per my blog post: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.niallodoherty.com%2Fpost.cfm%2Fblog-post-101-and-a-coldfusion-101-series%3Awh152jBOWQIfUNJN0AA9V4y28bQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.niallodoherty.com/post.cfm/blog-post-101-and-a-coldfusion-101-series">http://www.niallodoherty.co...</a></p><p>Sometimes it's good to "Get back to the Basics" for a refresher ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729245">15</a> by Josen Ruiseco
		posted on 1/27/2011 at 7:02 PM
		</div>
		<div class="comment_text"><p>It appears then that the following scopes do not get checked:</p><p>Application<br>Session<br>Request</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729249">16</a> by Mike Henke
		posted on 1/27/2011 at 7:19 PM
		</div>
		<div class="comment_text"><p>I blogged about "cfparam with unscoped variables" a few weeks ago <a href="http://disq.us/url?url=http%3A%2F%2Fhenke.ws%2Fpost.cfm%2Fcfparam-with-unscoped-variables%3AXHdIK6Xdapgi8bFQXScgptR6-6c&amp;cuid=3321886" rel="nofollow noopener" title="http://henke.ws/post.cfm/cfparam-with-unscoped-variables">http://henke.ws/post.cfm/cf...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729256">17</a> by Eric Cobb
		posted on 1/27/2011 at 7:26 PM
		</div>
		<div class="comment_text"><p>I've written a couple of blog posts about variable scoping.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfgears.com%2Findex.cfm%2F2010%2F9%2F22%2FThe-importance-of-proper-variable-scoping%3AQkdr3dhftPufo_htIIfCe-GTCH0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfgears.com/index.cfm/2010/9/22/The-importance-of-proper-variable-scoping">http://www.cfgears.com/inde...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfgears.com%2Findex.cfm%2F2009%2F12%2F6%2FCFML-101--Rookie-Mistakes-Part-1%3AiZXySNCmnJFNcsRZ7zcOwspt4DU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfgears.com/index.cfm/2009/12/6/CFML-101--Rookie-Mistakes-Part-1">http://www.cfgears.com/inde...</a></p><p>Not properly scoping variables is a pet peeve of mine.  (and yes, Ray, I mean the variables scope too!)  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729254">18</a> by Dan Gaspar
		posted on 1/27/2011 at 7:52 PM
		</div>
		<div class="comment_text"><p>I'm currently maintaining a legacy site that does not have any scoped variables. Its maddening to debug as variables are named the same across the different scopes and any scoping I add often breaks functionality as the code is dependent on CF's ability to find the currently defined version of the variable in the various scopes.  Its a fight not to re-write the site from scratch as it goes against every best practice I know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729248">19</a> by Nialls Blog
		posted on 1/27/2011 at 8:39 PM
		</div>
		<div class="comment_text"><p>@Josen <br>AFAIK - When ColdFusion is evaluating a variable - it doesn't include Application, Server, Session, Attribute, Caller and Request as these must _always_ be scoped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729260">20</a> by Grant Eagon
		posted on 1/28/2011 at 12:19 AM
		</div>
		<div class="comment_text"><p>Scoping vars makes code easier to read as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729247">21</a> by Nolan Erck
		posted on 1/28/2011 at 2:53 AM
		</div>
		<div class="comment_text"><p>A project I was on a few years ago used a legacy, home-grown framework that RELIED on unscoped variables. It would, literally, break pages if I used "<a href="http://disq.us/url?url=http%3A%2F%2Fvariables.foo%3A2t_dD2fr_pvM_uOYAgwpAVwdViI&amp;cuid=3321886" rel="nofollow noopener" title="variables.foo">variables.foo</a>" instead of "foo".  To provide myself a way to make copies of variables and properly scope them while not brekaing the "framework", I ended up writing a function that basically worked like this:</p><p>variables.myFoo = getVariable( "foo", "default" )</p><p>that would search the different scopes looking for a "foo" and if it couldn't find one, it would use my default value. it also had optional parameters to check other things like a query that might also contain the variable I needed, and a "force override" that let me do things like "if foo happens to live in multiple scopes, then use the one in some specific scope, regardless of the order that CF checks things.</p><p>...it was either that, or force myself to leave EVERYthing un-scoped, lest the framework break...and i just couldn't bring myself to do that. :)</p></div>
	</div>
</div>
		