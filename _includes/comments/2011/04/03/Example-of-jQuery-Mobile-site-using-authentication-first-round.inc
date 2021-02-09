
<div class="comment" id="c_1713731380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731380">1</a> by Dave
		posted on 4/4/2011 at 1:07 AM
		</div>
		<div class="comment_text"><p>May not be the best practice but I email my trusted users a long key appended to my mobile url like..</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmobilesite.com%2Findex.cfm%3Fk%3D982312365412334993247%3AmbkAjJUHuv82grpBIjysE_AVEFE&amp;cuid=3321886" rel="nofollow noopener" title="mobilesite.com/index.cfm?k=982312365412334993247">mobilesite.com/index.cfm?k=...</a></p><p>I then give instructions on adding this url to their home screen and provide a custom icon and no url bar.</p><p>Works for me.</p><p>then i authenticate on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731381">2</a> by Bart Buijze
		posted on 4/4/2011 at 2:00 PM
		</div>
		<div class="comment_text"><p>ok - have seen nicer code :-) but thought i would give it a run for its money anyway...<br>what happened with me is that first time logon works and i get to see page2.cfm, when i return "home" form that page and try to hit page2 again i get the logon-form (prefilled - but presumably with the wrong data) but hitting Login results in the "login-error" message.<br>Is the session lost somehow?</p><p>I had a mobile 'login' on my list today - so maybe more insights later on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731382">3</a> by MrBester
		posted on 4/4/2011 at 2:57 PM
		</div>
		<div class="comment_text"><p>@Bart: no, the session is still there. First time round it gives you the login screen even though the hashtag says page2 because there has been a server side redirection. The browser is simply returning cached content and doesn't request the page again from the server. Refreshing the page shows page2 as expected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731384">4</a> by Raymond Camden
		posted on 4/4/2011 at 3:03 PM
		</div>
		<div class="comment_text"><p>@Bart: Wow, "nicer code"? Come on now - you can't say that w/o some constructive criticism about what you would change. ;)</p><p>Based on what @MrBester says - it sounds like caching. What browser do you use and what's your caching setting? I'm testing with Chrome. Are you using IE perhaps?</p><p>It _does_ kind of make sense that it would be cached. This is _exactly_ the kind of issue I was hoping would be fleshed out by testers, so thanks guys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731383">5</a> by Bart Buijze
		posted on 4/4/2011 at 3:19 PM
		</div>
		<div class="comment_text"><p>@Ray you said yourself "how horrible is this" :-)</p><p>I tested it in mobile Safari and Firefox caches the loginpage aswell (when you access page2.cfm for the second time). Refresh does work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731385">6</a> by Raymond Camden
		posted on 4/4/2011 at 3:22 PM
		</div>
		<div class="comment_text"><p>Will test it out during the day. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731390">7</a> by Raymond Camden
		posted on 4/4/2011 at 3:23 PM
		</div>
		<div class="comment_text"><p>Bam, confirmed it right away with Firefox. Ok, now I've got something to work on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731392">8</a> by Raymond Camden
		posted on 4/4/2011 at 5:18 PM
		</div>
		<div class="comment_text"><p>So I made a new copy and removed any idea of security. Instead, I simply made page 2 output a random number server side. I quickly see the error in Firefox _and_ Chrome in that version. For some reason, Chrome seems to work perfectly on the security version.</p><p>Either way - this is now a good more generic issue. It is a _good_ thing that JQM caches page requests, but how would we easily disable that for cases like this? Going to dig into that next.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731394">9</a> by Raymond Camden
		posted on 4/4/2011 at 5:31 PM
		</div>
		<div class="comment_text"><p>Check out <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fapril32011%2Frev3%3An3pH5njSPs8PIMdiUfak3HeODcc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/april32011/rev3">http://www.coldfusionjedi.c...</a></p><p>and be sure to view source. On the secure link I used data-ajax="false". This creates a full page reload which meant I needed to include 'full' HTML for login.cfm and page2.cfm. This seems to work better, but I noticed I ended up on login.cfm as a URL after a successful login. I seemed to be able to browse just fine, but, meh.</p><p>I'm thinking making I should make the FORM action also use data-ajax="false".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731391">10</a> by Raymond Camden
		posted on 4/4/2011 at 5:34 PM
		</div>
		<div class="comment_text"><p>Check out <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fapril32011%2Frev4%3AdP3AbuSjzcswOcjhD_LQUcVEtVE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/april32011/rev4">http://www.coldfusionjedi.c...</a></p><p>I added data-ajax=false to my form submit and end up with page2.cfm in the URL. I think I'd feel better if it was index.cfm#page2 or some such.</p><p>But... getting there I guess. Any new comments?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731393">11</a> by MrBester
		posted on 4/4/2011 at 6:30 PM
		</div>
		<div class="comment_text"><p>The first iteration was correct from an old school (with jQM being the new school) paradigm; it is sufficient to block access to a protected page. So the downlevel browsers are catered for. Now it needs enhancing for the "I've just converted it into a sort of web application" that jQM provides.</p><p>What is possibly needed is:<br>Logged in state is established and maintained on the client. Whether this be cookies, localStorage or a vanilla JavaScript variable this is available before the user can select any page, be it protected or not. A hook into the pagechange event can check this value and decide whether to go to login or not. An AJAX return (1 or 0 would be sufficient) would update the logged in status accordingly and show error messages / go to originally requested page. This would make the hashtags correct as well.</p><p>Bottom line: jQM should control page redirection, not the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731397">12</a> by Raymond Camden
		posted on 4/4/2011 at 6:34 PM
		</div>
		<div class="comment_text"><p>Logged in state cannot be maintained _just_ on the client. To do so would be a security issue. It _can_ be copied there of course. I did envision having to do more client side to make thing work better and looks like I might have to.</p><p>"Bottom line: jQM should control page redirection, not the server"</p><p>True - but again - and this may be me being picky - we need to be real clear that it's not just jQM, but jQM + the Server. Wouldn't you agree?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731398">13</a> by Bart Buijze
		posted on 4/4/2011 at 6:57 PM
		</div>
		<div class="comment_text"><p>It does sound strange and unwanted(?) to need client-stuff to secure a mobile app. It might be me having to adjust to a new paradigm, but i dont know.</p><p>I just managed to open up an existing application on the mobile with a normal cflogin check/login in application.cfc. - somehow that seems more 'foolproof'.</p><p>What i found is that in my Login form i needed an absolute URL, because otherwise it would be fetched by Ajax and i started getting URLs like index.cfm#index.cfm - which, with any other 'internal' hash-links would return an error.</p><p>Any reasons not to use the 'normal' security?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731395">14</a> by Raymond Camden
		posted on 4/4/2011 at 6:59 PM
		</div>
		<div class="comment_text"><p>@Bart: Sorry - what do you mean by 'normal' ?</p><p>As to what you say about the absolute URL, I believe that is expected behavior with jqm and links. If you check the docs you can confirm, but they discuss by what rules a resource is loaded via Ajax or not. You have multiple ways to control it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731396">15</a> by Bart Buijze
		posted on 4/5/2011 at 1:16 AM
		</div>
		<div class="comment_text"><p>@Ray with 'normal' i mean the cflogin-check in the onRequestStart and cfinclude of the login.cfm when the check fails</p><p>As you only have the login for certain templates there would be the addition of the conditional based on the requesting template...</p><p>I don't see (yet?) why we need a different way of authorisation for our mobile apps....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731399">16</a> by Raymond Camden
		posted on 4/5/2011 at 1:19 AM
		</div>
		<div class="comment_text"><p>So you used cflogin to do an include and did NOT see the caching issue reported in Firefox?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731400">17</a> by Bart Buijze
		posted on 4/5/2011 at 10:48 AM
		</div>
		<div class="comment_text"><p>right, no caching issues whatsever. I havent tried the exact same setup as you have though - will do that now.</p><p>Just checked - no problem to mix the non-secure pages and secure pages and then get the redirect to login.cfm (when hitting a secure page) and after logon seeing the correct version of that secured page. (BTW, only did a quick test in FF)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731401">18</a> by James Edmunds
		posted on 4/20/2011 at 6:32 PM
		</div>
		<div class="comment_text"><p>I have a site with a fairly robust cflogin-based wrapper, and have added a jqm site as a folder within it.</p><p>My login page to which logged out users get sent already had a "stopper" for when it is called by an Ajax within-page load (for example, in an autosuggest) that tells folks that their session is expired and to click the Home button for a fresh login screen.</p><p>I found I had to add a cfelseif to it that takes in the case of a page called by jqm as an Ajax page from a link, and have within that cfelseif block the data-role, like this:&lt;div data-role="page" id="Login"&gt;, so that jqm would run the page. That block altogether looks something like this:</p><p>&lt;cfif cgi.PATH_INFO CONTAINS "TheSnippedYouNeedToIdentifyThisProperly"&gt;<br>&lt;div data-role="page" id="Login"&gt;<br>	&lt;div data-role="header" style="background-color:#cc0000;"&gt;  	<br>		&lt;h1&gt;&lt;img src="images/SomeLogo.jpg"&gt; Page title&lt;/h1&gt;<br>	&lt;/div&gt;&lt;!-- /header --&gt;<br>    &lt;div data-role="content"&gt;<br>YOUR LOGIN HAS EXPIRED&lt;br /&gt;<br>&lt;a href="index.cfm" rel="external"&gt;Click here&lt;/a&gt;&lt;br /&gt;<br>for fresh login screen</p><p>&lt;/div&gt;<br>&lt;/div&gt;<br>&lt;cfabort&gt;<br>&lt;cfelse THE NEXT PART AND WHATEVER ELSE YOU ARE DOING&gt;<br>BLah blah<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731403">19</a> by Alex
		posted on 7/7/2011 at 12:58 AM
		</div>
		<div class="comment_text"><p>So, is there a zip with the code tghat works? first code examples dont, and I keet getting a yellow ERROR msg when i click link2 (protected)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731402">20</a> by Raymond Camden
		posted on 7/7/2011 at 1:00 AM
		</div>
		<div class="comment_text"><p>So when you click the Demo button you get a yellow error? What is that - IE?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731406">21</a> by Alex
		posted on 7/7/2011 at 5:08 PM
		</div>
		<div class="comment_text"><p>No, when I run the code on this page... i get a yellow alert error. but if I run login.cfm directly works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731405">22</a> by Alex
		posted on 7/7/2011 at 5:09 PM
		</div>
		<div class="comment_text"><p>/rev4/ seems to work fine... but the code currently in page isnt. but is rev4 same as whats on this page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731404">23</a> by Raymond Camden
		posted on 7/7/2011 at 5:32 PM
		</div>
		<div class="comment_text"><p>rev4? I have no idea what you mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731407">24</a> by Raymond Camden
		posted on 7/7/2011 at 5:33 PM
		</div>
		<div class="comment_text"><p>Oh sorry - one of the comments. So no, rev4 is a newer version of the code. Just view source to see the front end HTML/JS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731410">25</a> by jlig
		posted on 10/24/2011 at 8:26 PM
		</div>
		<div class="comment_text"><p>Ray, nice post as always..<br>Can you provide a few tips/pointers or link on integrating your login with an actual dynamic table of Users/Passwords where password is encrypted?</p><p>- I've added your login to a jquery mobile site, works fine<br>- Just not sure about changing it from a Static UN/PW to actual UN/PW's in my database<br>- Using CF9/DW5.5 w/MySQL5.5 backend</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731411">26</a> by Raymond Camden
		posted on 10/24/2011 at 8:57 PM
		</div>
		<div class="comment_text"><p>Basically line 2 in the last template would become a query. You would write SQL to check if the username and password match up to a row in your user table. Something along the lines of this pseudo-code:</p><p>&lt;cfquery name="checkauth" datasource="foo"&gt;<br>select userid<br>from users<br>where username = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#form.username#"&gt;<br>and password = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#form.password#"&gt;<br>&lt;/cfquery&gt;</p><p>&lt;cfif checkauth.recordcount is 1&gt;<br>all is good<br>&lt;/cfif&gt;</p><p>As for handling encryption, it depends on where you did it. If you used CF's encryption tools, then you would encrypt form.password.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731408">27</a> by Gabriela
		posted on 11/2/2012 at 2:54 PM
		</div>
		<div class="comment_text"><p>I am a bit of a noob and I have no experience with Coldfusion. So when i open a CFC page.. how should it look?<br>Right now I have done it like this:</p><p>&lt;cfcomponent&gt;</p><p>    component {<br>    <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a>="jqmwithlogin_rev1";<br>    this.sessionManagement="true";</p><p>    public boolean function onApplicationStart() {<br>        return true;<br>    }</p><p>    public boolean function onRequestStart(string req) {<br>        //logic to determine if a page is secured should probably be elsewhere...<br>        if(listLast(arguments.req, "/") == "checklist.cfm" &amp;&amp; !structKeyExists(session, "username")) {<br>            location(url="login.cfm",addToken=false);    <br>        }<br>        return true;<br>    }</p><p>}</p><p>&lt;/cfcomponent&gt;</p><p>Obviously this doens't work or something else doens't, because when I click on the icon which should login i get "error loading page"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731409">28</a> by Raymond Camden
		posted on 11/2/2012 at 3:20 PM
		</div>
		<div class="comment_text"><p>You need to remove the cfcomponent tags on top/bottom.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731417">29</a> by Jim
		posted on 7/2/2014 at 12:26 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Well I jumped into jquery mobile code with both feet thanks to your 2nd edition book.</p><p>My first webapp is here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.tigerlilyquiltco.com%3ALHFHidhdKSma_GfLRcZ8wQkRtuc&amp;cuid=3321886" rel="nofollow noopener" title="www.tigerlilyquiltco.com">www.tigerlilyquiltco.com</a></p><p>Now I'm attempting to convert a portal site at work to mobile.  The portal is all cfm pages with lots ajax calls to cfc's.  I use jqgrid on many pages.  This will take sometime but i figure it will be a good learning experince.</p><p>My question for you today is about cf session vars which I use to hold lots of data about the current person logged in.  Each person has a parameter record which I load into session vars on login then reference in the code to enable/disable section of code.</p><p>Can I just do this in the javascript after I verify the login successful:</p><p>var myparm1 = session.myparm1;</p><p>thanks,</p><p>Jim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731416">30</a> by Raymond Camden
		posted on 7/2/2014 at 5:19 AM
		</div>
		<div class="comment_text"><p>Yes and no. So, when you use CFM to request soandso.cfm, you could obviously output dynamic JS:</p><p>&lt;cfoutput&gt;var foo = #<a href="http://disq.us/url?url=http%3A%2F%2Fsession.foo%3A0GFwmortM5kwImb-zfNafWJu1YY&amp;cuid=3321886" rel="nofollow noopener" title="session.foo">session.foo</a>#&lt;/cfoutput&gt;</p><p>When rendered, the browser sees:</p><p>&lt;cfoutput&gt;var foo = 2;&lt;/cfoutput&gt;</p><p>or somesuch. You can also use AJAX from JS to call a CFC and get the session variable as well.</p><p>But to be clear, it isn't JS 'reading' the session var - not directly I mean. Client Side is separated from Server Side.</p></div>
	</div>
</div>
		