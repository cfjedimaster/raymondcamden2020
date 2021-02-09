
<div class="comment" id="c_1713732008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732008">1</a> by Nathan D
		posted on 5/6/2011 at 2:50 AM
		</div>
		<div class="comment_text"><p>Is it really better to append the HTML as a string instead of adding options to the select control?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732006">2</a> by Raymond Camden
		posted on 5/6/2011 at 5:12 AM
		</div>
		<div class="comment_text"><p>Why? The browser ends up turning it into real DOM items once inserted - so the job is going to be done - so why not just let the browser handle it when I'm done?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732009">3</a> by Nathan D
		posted on 5/6/2011 at 7:17 AM
		</div>
		<div class="comment_text"><p>Nothing "wrong" with it -- for some reason it has always felt cleaner to me to avoid putting the literal HTML in javascript whenever possible.  Just wondering if it's more than a style thing and there is actually some good reason to do it your way that I'm missing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732012">4</a> by Raymond Camden
		posted on 5/6/2011 at 7:22 AM
		</div>
		<div class="comment_text"><p>To me it was just simpler. I'm trying to move to jQuery Templates for larger stuff, but this seemed like it would be overkill for templates.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732007">5</a> by Jeff H
		posted on 5/6/2011 at 5:26 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.  Similar to the email I sent last week with the bound selects with cfselect, once the form is submitted, if the user returns to the form from the results page via the back button on the brower or javascript, would the selects retain the values the user selected or is the cities reset and waiting for states to be changed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732011">6</a> by Raymond Camden
		posted on 5/6/2011 at 5:29 PM
		</div>
		<div class="comment_text"><p>Ah, my favorite non-trivial Ajax issue. :) Let's do this in a follow up, ok? Maybe later today before I head off for the weekend.</p><p>Long story short though - you have to add JS logic to handle:</p><p>a) I had a default for the left drop down.<br>b) Set it automatically<br>c) Ensure my event handler fires</p><p>Not too difficult at all really - just delicate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732018">7</a> by Jeff H
		posted on 5/6/2011 at 5:46 PM
		</div>
		<div class="comment_text"><p>Exactly.  Thanks.  I did a little test with this example and it did retain the select option and user selected values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732015">8</a> by Chris
		posted on 5/6/2011 at 6:38 PM
		</div>
		<div class="comment_text"><p>THANK YOU!!!!  Sometimes you search for hours and get nowhere.  I have been trying to do this for weeks off and on and kept coming up with road blocks (mostly b/c I am really not all that great at debugging js)  But I never thought to delete the contents of the select and fill it back in again.  I kept thinking I had to have the values bound somehow.  Replace the actual HTML - DUH!</p><p>Thanks SO much Ray!<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732019">9</a> by Raymond Camden
		posted on 5/6/2011 at 6:42 PM
		</div>
		<div class="comment_text"><p>Glad to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732014">10</a> by Joel Cox
		posted on 5/6/2011 at 6:57 PM
		</div>
		<div class="comment_text"><p>I use that select box plugin extensively, however, it doesn't seem to work properly (or at least in the same manner)under jQuery 1.6, and I wonder if this is being updated anymore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732010">11</a> by Joel Cox
		posted on 5/6/2011 at 7:16 PM
		</div>
		<div class="comment_text"><p>Let me retract that statement, at least temporarily...some of the pages that use that plugin under 1.6 don't work in the same manner, but the fault might lie with a different plugin and the effects are cascading down, causing issues with the select box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732016">12</a> by Joel Cox
		posted on 5/6/2011 at 7:28 PM
		</div>
		<div class="comment_text"><p>OK, here's the issue and the resolution. It's in the jQuery 1.6 release notes...</p><p>After populating the select box, I want to select the first option in the list. In earlier versions of jQuery, this worked:</p><p>$("#mySelect option:first").attr("selected", "selected");</p><p>it now seems necessary to use "prop" instead of "attr"</p><p>$("#mySelect option:first").prop("selected", "selected");</p><p>Man, that's going to break a lot of code...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732013">13</a> by Raymond Camden
		posted on 5/6/2011 at 7:32 PM
		</div>
		<div class="comment_text"><p>I was just saying on Twitter a few days ago that that attr/prop changes were a bit confusing. My understanding (and take with grain of salt), is that ATTR always returns the original. So given</p><p>&lt;input name="ray" value="1"&gt;</p><p>The attr for value is always 1. If I change to N later on, attr is still 1 cuz that's the value as set in the DOM originally. But prop will give the _current_ value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732017">14</a> by Chris
		posted on 5/6/2011 at 7:53 PM
		</div>
		<div class="comment_text"><p>I keep getting a return result of null when trying this out.  I wonder what I am doing incorrect here...</p><p>My cfc reads like this .. 	&lt;cffunction name="getReps" access="public" returntype="array" output="no"&gt;<br>		&lt;cfargument name="client_ID" required="yes"&gt;<br>		&lt;cfset var result = arrayNew(1) /&gt;<br>		&lt;cfset var rep = structNew() /&gt;<br>		&lt;cfset var clientReps = application.clientService.getRepsByClientID(arguments.client_ID)/&gt;</p><p>		&lt;cfloop query="clientReps"&gt;<br>			&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Frep.name%3AnbYGk4w215KyCdIt6Y5hrvUi16E&amp;cuid=3321886" rel="nofollow noopener" title="rep.name">rep.name</a> = '#rep_FirstName# #rep_LastName# (#rep_JobTitle#)' /&gt;<br>			&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Frep.id%3AZTm3YXFubZIbEvM_MVxi7iRQ3dI&amp;cuid=3321886" rel="nofollow noopener" title="rep.id">rep.id</a> = rep_ID /&gt;<br>			&lt;cfset arrayAppend(result,rep) /&gt;<br>		&lt;/cfloop&gt;<br>		&lt;cfreturn result /&gt;<br>	&lt;/cffunction&gt;</p><p>My json call reads as such<br>$.getJSON("org/ews/selectFields.cfc?method=getReps&amp;returnformat=json",{"client_ID":selected}, function(res,code) {<br>			alert(res); return;<br>});</p><p>Now I know the query that is run in the function does in fact return no less than one row.  Any ideas why I keep getting "res is null" in my error console?</p><p>God Bless,<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732021">15</a> by Raymond Camden
		posted on 5/6/2011 at 7:57 PM
		</div>
		<div class="comment_text"><p>What does Firebug show you? Or Chrome dev tools?</p><p>Oh - I see it. Your access="public" - it should be access="remote".</p><p>But yeah - Firebug woulda shown that error to you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732020">16</a> by Chris
		posted on 5/6/2011 at 8:23 PM
		</div>
		<div class="comment_text"><p>Well I changed it to remote and still get null as the return result.  I have put the function on the main page and dumped the result on the page using a specific client id - just to confirm that there is for sure a record returned - and there is.</p><p>As for firebug - it keeps sending back res is null.  It doesn't say anything about my function being remote or public etc.</p><p>On another note:  In your code you used function(res,code)  - I assume the res = results or the return value, what is the 'code' for?  I don't see it anywhere else in your script.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732022">17</a> by Raymond Camden
		posted on 5/6/2011 at 8:25 PM
		</div>
		<div class="comment_text"><p>code is the HTTP status code.</p><p>So - can I see your code online? I'd like to test it myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732024">18</a> by Chris
		posted on 5/6/2011 at 8:51 PM
		</div>
		<div class="comment_text"><p>I just emailed you the info - thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732033">19</a> by Andy Sandefer
		posted on 5/6/2011 at 11:56 PM
		</div>
		<div class="comment_text"><p>I've moved to using templates for all situations where I'll need to loop and output data returned by an AJAX method.  Select boxes and tables are cake with templates and I have very clean JavaScript code...</p><p>    &lt;script id="clientSelectorTemplate" type="x-jquery-tmpl"&gt;<br>        &lt;option value="${ClientID}"&gt;${ClientName}&lt;/option&gt;<br>    &lt;/script&gt;</p><p>        function getAppUserClients() {<br>            var providerCode = '&lt;%=Session["appUserProviderCode"] %&gt;';<br>            $.ajax({<br>                type: "POST",<br>                contentType: "application/json",<br>                url: "Services/AppUser.asmx/GetAppUserClientsByProviderCode",<br>                dataType: "json",<br>                data: "{'providerCode' : '" + providerCode + "'}",<br>                success: function (msg) {<br>                    getAppUserClientsCallback(msg);<br>                },<br>                error: errorHandler<br>            });<br>        }</p><p>        function getAppUserClientsCallback(result) {<br>            var clientList = result.d;<br>            $("#clientSelectorTemplate").tmpl(clientList).appendTo("#clientSelector");            <br>            setActiveClientID();<br>        }</p><p>HTML markup...<br>&lt;select id="clientSelector" onchange="setActiveClientID()"&gt;<br>                                                &lt;/select&gt;</p><p>Yes, that was .NET crap referenced in my code - it was definitely not by choice.  You really take for granted how easy it is to build web apps with CF until you don't have it at your disposal.  I can also tell you that ColdFusion's developer community seems to have much more helpful blogs/online resources for CF developers than the ASP.NET community.  I honestly don't understand why so many people are in love with ASP.NET for developing web apps.  I really think that CF is better suited for rapid web app development.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732029">20</a> by Raymond Camden
		posted on 5/7/2011 at 12:39 AM
		</div>
		<div class="comment_text"><p>Andy, please tell me you aren't surprised by the fact that the ColdFusion Community rocks? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732028">21</a> by Andy Sandefer
		posted on 5/7/2011 at 12:50 AM
		</div>
		<div class="comment_text"><p>Back in the day (say around versions 5 and MX) when I started learning web development I quickly settled on CF as my platform of choice.  Like most of the guys who read and contribute to this and other sites, I learned CF development from the CFWACK books and getting help from more experienced guys who ran CF blogs.  There is a wide array of developers in the CF world who post for readers of ALL skill levels and everyone seems pretty quick to help someone out no matter how trivial or complex their issue may be.  The ASP.NET community just isn't like that.  It seems to be heavily fragmented.<br>Yes, I can now build a fully functional and complex AJAX app using ASP.NET and jQuery/jQuery UI - but I feel as though it was very much a school of hard knocks experience (over the course of the last 3 months).<br>Bottom line - in my opinion the CF Community is hands down the best community in terms of educating and helping their own folks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732030">22</a> by Raymond Camden
		posted on 5/7/2011 at 12:53 AM
		</div>
		<div class="comment_text"><p>This is now OT but as the admin I say it's ok. ;)</p><p>When you say the ASP.NET community is fragmented, what do you mean? Like what types of groups I mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732032">23</a> by Andy Sandefer
		posted on 5/7/2011 at 1:03 AM
		</div>
		<div class="comment_text"><p>I feel like you have developers who post extremely complicated solutions vs. those who post stuff that is crafted from the desk of Mr. Obvious.</p><p>The server platform itself (your version of IIS + your .NET framework version + other server variables) can be a nightmare to debug as well.  I never faced these types of configuration challenges with ColdFusion so I was quickly aggravated by say trying to create web services to interact with a data access layer and getting it to all return objects in a format that my UI code could work with.  While I'm convinced that you can do virtually anything you want in .NET or Java I just feel like CF let me focus on my ideas rather than building reusable framework items for running a query, etc.  To be blunt, all of that shit and more just exists out of the box with ColdFusion.  Search, PDF, charting and graphing, grids, layouts - it all just works and it works rather easily and intuitively.</p><p>I don't want to go on a rant and I'm happy to have acquired a new skill I'm just stating that I don't see what's so great about ASP.NET as a web development platform.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732036">24</a> by Raymond Camden
		posted on 5/7/2011 at 1:09 AM
		</div>
		<div class="comment_text"><p>Interesting. Well thanks man for the opinion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732031">25</a> by Chris Luksha
		posted on 5/9/2011 at 6:54 PM
		</div>
		<div class="comment_text"><p>Thanks for the help Ray - my application.cfc had a cfabort in it and of course calling the file via ajax was making an hhtp request and the cfabort came into play.</p><p>I think that I must not be understanding the array at this point though.  It would seem that when I append data to my array - it simply duplicates the last record returned.</p><p>I have a query that returns two distinctly different records, and when I append the records to an array - only the last record of the query gets inserted....</p><p>&lt;cfloop query="clientReps" &gt;<br>	&lt;cfoutput&gt;<br>		&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Frep.name%3AnbYGk4w215KyCdIt6Y5hrvUi16E&amp;cuid=3321886" rel="nofollow noopener" title="rep.name">rep.name</a> = '#rep_FirstName# #rep_LastName# (#rep_JobTitle#)' /&gt;<br>		&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Frep.id%3AZTm3YXFubZIbEvM_MVxi7iRQ3dI&amp;cuid=3321886" rel="nofollow noopener" title="rep.id">rep.id</a> = rep_ID /&gt;<br>		#arrayAppend(result,rep)#&lt;br /&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;<br>&lt;cfdump var="#clientReps#" label="Original Query"&gt;<br>&lt;cfdump var="#result#" label="resulting array"&gt;</p><p>That returns the following results..<br><a href="http://disq.us/url?url=http%3A%2F%2Fawesomescreenshot.com%2F070cp1224%3AlY4xBXlefevSUMAS6Qfz53PU-f0&amp;cuid=3321886" rel="nofollow noopener" title="http://awesomescreenshot.com/070cp1224">http://awesomescreenshot.co...</a></p><p>Sorry to be ignorant but I ave tried everything that I can think of from cfloop to cfoutput to changing the array depth (which of course breaks :) )</p><p>God Bless,<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732037">26</a> by Raymond Camden
		posted on 5/9/2011 at 6:57 PM
		</div>
		<div class="comment_text"><p>Try adding &lt;cfset rep = structNew()&gt; (or {}) after your cfloop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732034">27</a> by Chris Luksha
		posted on 5/9/2011 at 7:07 PM
		</div>
		<div class="comment_text"><p>Very interesting - reset the struct each time.  It worked - thanks!!!  Now a overly long project finally has an end in site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732035">28</a> by Mark Ross
		posted on 5/10/2011 at 6:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I was wondering why you are using the end() function twice in your code.  It almost seems like you are using it to move to the 'end' of the select object.  But I don't think that's not how the end() function is used. See <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Fend%2F%3Ae5nA5QcMReNKNPzHOqomYykFJj8&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/end/">http://api.jquery.com/end/</a>  Am I missing something here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732102">29</a> by Raymond Camden
		posted on 5/10/2011 at 6:49 PM
		</div>
		<div class="comment_text"><p>For the first time I used end, it came directly from the Stack Overflow post.</p><p>For the second one - I believe you are right - I bet $(selector).children().append(..) would be sufficient.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732091">30</a> by Raymond Camden
		posted on 5/10/2011 at 6:51 PM
		</div>
		<div class="comment_text"><p>Ouch - nope - doesn't work at all. Makes one big option with all the labels.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732095">31</a> by Mark Ross
		posted on 5/10/2011 at 6:54 PM
		</div>
		<div class="comment_text"><p>What about removing the children() function all together?  You should be able to call append() directly on the $(selector) object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732084">32</a> by Raymond Camden
		posted on 5/10/2011 at 6:56 PM
		</div>
		<div class="comment_text"><p>Interesting - that worked perfectly. (Again, I'm just modifying the second instance.) I have to admit - out of all the form controls the Select one is the most awkward at times. ;) Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732105">33</a> by Mark Ross
		posted on 5/10/2011 at 7:00 PM
		</div>
		<div class="comment_text"><p>Ok, you're right.  You need end() on the first call because you are filtering with children().  The end will remove that filter and put you back at $("#cities").</p><p>The second end() removes the children() filter as well.  Its just filtering on children then removing the filter.  So you should be able to remove both .children() and .end() from the $(selector) call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732089">34</a> by Christopher Chin
		posted on 8/12/2011 at 9:03 PM
		</div>
		<div class="comment_text"><p>Ray as usual, thank you for this little demo. Helped me alot with getting a TON of data from the backend to my drop downs.</p><p>I was sending over the whole HTML including &lt;select&gt; and &lt;option&gt; tags.  That was a lot of overhead to pass along via ajax.  Now, I'm just passing over the data and rendering the HTML in JS then plopping in the DOM.  FAST!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732094">35</a> by Raymond Camden
		posted on 8/12/2011 at 10:03 PM
		</div>
		<div class="comment_text"><p>One of the biggest "awakenings" I had in the past few years was learning that Ajax!=Fast. I had updated Lighthouse Pro to be Ajax-based and - due to a flaw in my understanding - ran into performance issues. (Mainly because I was sending huge XML packets back and forth.) Ajax _can_ obviously create sites that are much more performant, but you have to think about what you're doing. That's obvious - but easily forgotten to folks getting into Ajax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732086">36</a> by Jennifer
		posted on 9/6/2011 at 9:13 PM
		</div>
		<div class="comment_text"><p>Much like Chris in comments 14 &amp; 16, i'm having an issue with res (I've also tried using data).  I am getting an error saying data.length is undefined.  Firebug is not returning any error messages.  Any suggestions?</p><p>//jQuery<br>$.getJSON('cfc/metadata.cfc', {<br>    method: 'getSelectedIndustriesFromPlans',<br>    GMSType: 'Plan',			<br>    selectedGMSFK: value,			<br>    returnFormat: 'json'<br>	}, function(data,code) {<br>    	alert(data.length);<br>	}<br>});<br>//my.cfc<br>&lt;cffunction name="getSelectedIndustriesFromPlans" output="false" returntype="query" access="remote" hint="Returns the selected SubIndustries based off of the selected plan"&gt;<br>	&lt;cfargument name="selectedPlanFKList" type="string" required="yes"&gt;</p><p>    &lt;cfquery name="getSelectedWWMIndustry" datasource="#THIS.metadata#"&gt;            <br>        SELECT IndustryID AS optionvalue, Industry AS optiontext<br>        FROM	IndustryTable<br>        WHERE	IndustryID IN (#selectedPlanFKList#)<br>    &lt;/cfquery&gt;</p><p>    &lt;cfreturn getSelectedWWMIndustry&gt;<br>&lt;/cffunction&gt;</p><p>//returned json<br>{"COLUMNS":["OPTIONVALUE","OPTIONTEXT"],"DATA":[[1150,"Banking - General"],[1102.0,"Credit Unions"],[2400.0,"Defense"],[1950.0,"Education - General"],[2350.0,"Energy and Utilities - General"],[1103.0,"Lenders"],[2100.0,"Oil and Gas"]]}</p><p>Thank you in advanced,<br>Jennifer</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732087">37</a> by Raymond Camden
		posted on 9/6/2011 at 10:21 PM
		</div>
		<div class="comment_text"><p>data - in your JavaScript, refers to the entire object. To check the length you would use</p><p>data.DATA</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732090">38</a> by Jeff F
		posted on 4/17/2012 at 3:27 PM
		</div>
		<div class="comment_text"><p>Can this be used with a CFC returning a query and not an array?  I'm having with the last bit that writes new options to the child select.</p><p>My cfc returns a string as in: {"COLUMNS":["MODEL"],"DATA":[["1000 Sport"],["1098, S, R"],["600 Sport"],["620  Sport"],["748 (all types)"],["749 (all types)"],["750 Super"],["800 Sport &amp; Sport"],[848.0],["851 Super"],["888, (all types) "],["900 SuperSport"],[916.0],[996.0],["998, S, R"]]}</p><p>Everything works great, except I'm having trouble with the last bit that sets var newoptions.</p><p> var newoptions = "";<br> for ( {newoptions += "&lt;option value=\"" + res.model + "\"&gt;" + res.model + "&lt;/option&gt;";<br>        }<br> $("#models").children().end().append(newoptions);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732099">39</a> by Raymond Camden
		posted on 4/17/2012 at 3:35 PM
		</div>
		<div class="comment_text"><p>Your "for" loop isn't valid JavaScript. Your loop should begin something like so:</p><p>for(var i=0; i&lt;something; i++)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732093">40</a> by Jeff F
		posted on 4/17/2012 at 4:05 PM
		</div>
		<div class="comment_text"><p>Another thought. If you extend this out to three selects related, how do you listen for changes to cities (to change DD streets)?</p><p>$("#cities").change(function()</p><p>Will loading the data to cities when a state is selected trigger a second call for more data for streets?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732085">41</a> by Raymond Camden
		posted on 4/17/2012 at 5:28 PM
		</div>
		<div class="comment_text"><p>Your example is right.</p><p>And as to your second question - I don't know. Test it and see. ;) If not, don't forget you can fake an event with jQuery's trigger function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732101">42</a> by Jeff F
		posted on 4/18/2012 at 5:08 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. I've got the first two DDs working, and when I add a third, the listener for the second DD works as expected. However, my second call for data to populate the third DD gives an error: "selected is undefined" at this line:<br>$.getJSON("getfitmentdata09.cfc?method=getyears&amp;returnformat=json", {<br>                    "make": selected,<br>                    "models": selectedmodels<br>                },</p><p>Here's the complete script:</p><p>&lt;script&gt;<br>    $(document).ready(function () {<br>        //first, detect when initial DropDown changes<br>        $("#make").change(function () {<br>            //get what they selected<br>            var selected = $("option:selected", this).val();<br>            //no matter what, clear the other DD<br>            $("#models").children().remove().end().append("&lt;option value=\"\"&gt;Select a Stinkin Model&lt;/option&gt;");<br>            //now load in new options if I picked a brand<br>            if (selected == "") return;<br>            $.getJSON("getfitmentdata09.cfc?method=getmotomodels&amp;returnformat=json", {<br>                "make": selected<br>            }, function (res, code) {<br>                var newoptionsyears = "";<br>                for (var i = 0; i &lt; res.DATA.length; i++) {<br>                    newoptionsyears += "&lt;option value=\"" + res.DATA[i] + "\"&gt;" + res.DATA[i] + "&lt;/option&gt;";<br>                }<br>                $("#models").children().end().append(newoptionsyears);<br>            });<br>        });<br>        //detect when second DropDown changes<br>        $("#models").change(function () {<br>            //get what they selected<br>            var selectedmodels = $("option:selected", this).val();<br>            //no matter what, clear the other DD<br>            $("#years").children().remove().end().append("&lt;option value=\"\"&gt;Select a Stinkin Year&lt;/option&gt;");<br>            //now load in new options if I picked a brand<br>            if (selectedmodels == "") return;<br>            $.getJSON("getfitmentdata09.cfc?method=getyears&amp;returnformat=json", {<br>                "make": selected,<br>                "models": selectedmodels<br>            }, function (res, code) {<br>                var newoptions = "";<br>                for (var i = 0; i &lt; res.DATA.length; i++) {<br>                    newoptions += "&lt;option value=\"" + res.DATA[i] + "\"&gt;" + res.DATA[i] + "&lt;/option&gt;";<br>                }<br>                $("#years").children().end().append(newoptions);<br>            });<br>        });<br>    });<br>&lt;/script&gt;</p><p>This does not make sense to me. "selected" is defined earlier??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732106">43</a> by Raymond Camden
		posted on 4/19/2012 at 1:50 AM
		</div>
		<div class="comment_text"><p>Could you post it up on pastebin? Kinda hard to read.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732103">44</a> by Misty
		posted on 9/28/2012 at 5:21 PM
		</div>
		<div class="comment_text"><p>Btw my query is returning me query records and how ur code will work here, i am missing something</p><p>my JSON</p><p>{"COLUMNS":["REASONID","REASONDETAIL","FREQUENCY"],"DATA":[[1,"Post1",1],[2,"Post3 ",1],[3,"Post4",1]]}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732088">45</a> by Raymond Camden
		posted on 9/28/2012 at 6:09 PM
		</div>
		<div class="comment_text"><p>I'm not sure I get what your asking me. Do you understand that the JavaScript loops over results from the CFC, and if your data is different, all you have to do is modify the JavaScript?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732092">46</a> by Dani
		posted on 7/6/2013 at 8:22 AM
		</div>
		<div class="comment_text"><p>Hello Ray, would this work with multiple selected items? Let's say i have a dropdown with departments, which i can select only one, then a dropdown set to allow multiple selections and that one would be populating a third one based on the multiple selections from the second one.</p><p>I've tried with an old post from Ben Forta's bound cfselect, but couldn't get it to work (i've sent you an email tday about it).</p><p>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732098">47</a> by Raymond Camden
		posted on 7/6/2013 at 7:28 PM
		</div>
		<div class="comment_text"><p>This would not work with 3 or more selects, but you could extend it to do so. You would simply add code for the 2nd select that has a listener list the 1st one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732096">48</a> by Dani
		posted on 7/15/2013 at 4:22 PM
		</div>
		<div class="comment_text"><p>Hey Ray, I just saw your comment now, thank you and I apologize for the delay answering you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732104">49</a> by Raymond Camden
		posted on 7/15/2013 at 4:47 PM
		</div>
		<div class="comment_text"><p>No worries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732107">50</a> by Jan
		posted on 4/30/2014 at 6:27 PM
		</div>
		<div class="comment_text"><p>Hello,</p><p>Have you got this as a downloadable zip (the demo) so I can have a look at all of the structure?</p><p>Thanks</p><p>Jan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732100">51</a> by Raymond Camden
		posted on 4/30/2014 at 7:50 PM
		</div>
		<div class="comment_text"><p>Sorry no - but you can view source. The CFC code is above, very short, and can be copied.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732114">52</a> by Jan
		posted on 4/30/2014 at 8:11 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I couldn't get the CFC code to work - I posted it in a .cfc doc and it wasn't looking right - I am fairly new to CFC's and do I just directly paste the code above and save it as test.cfc?</p><p>Jan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732118">53</a> by Dani
		posted on 4/30/2014 at 8:18 PM
		</div>
		<div class="comment_text"><p>Here is a good way to start with Object Oriented Programming for ColdFusion Jan: <a href="http://disq.us/url?url=http%3A%2F%2Fobjectorientedcoldfusion.org%2F%3Ak_DuFjwACFvD6d6U-eYRm000pxM&amp;cuid=3321886" rel="nofollow noopener" title="http://objectorientedcoldfusion.org/">http://objectorientedcoldfu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732117">54</a> by Raymond Camden
		posted on 4/30/2014 at 8:28 PM
		</div>
		<div class="comment_text"><p>Yep, you just save it as soandso.cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732116">55</a> by Dani
		posted on 4/30/2014 at 8:29 PM
		</div>
		<div class="comment_text"><p>I mean a good PLACE to start, rather than way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732119">56</a> by Tom
		posted on 7/25/2014 at 6:10 PM
		</div>
		<div class="comment_text"><p>When running this it is only giving me the last value of my query in the array. Any thoughts on why this is happening?</p><p>&lt;cfset result = arrayNew(1) /&gt;<br>      	 &lt;cfset ArrayMedSchools = structNew() /&gt;</p><p>		&lt;cfloop query="GetMedSchool" &gt;<br>			 &lt;cfoutput&gt;<br>		      &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2FArrayMedSchools.name%3AKzH0RgMF0HWxYvDEVQI741M-ND8&amp;cuid=3321886" rel="nofollow noopener" title="ArrayMedSchools.name">ArrayMedSchools.name</a> = Institution /&gt;<br>		      &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2FArrayMedSchools.id%3AyKJM3ZVUfOhpZVocJkM0cqszyJA&amp;cuid=3321886" rel="nofollow noopener" title="ArrayMedSchools.id">ArrayMedSchools.id</a> = InstitutionID /&gt;<br>			  &lt;cfset arrayAppend(result,ArrayMedSChools) /&gt;<br>			 &lt;/cfoutput&gt;<br>		&lt;/cfloop&gt;<br>		&lt;cfset ArrayMedSchools = structNew()/&gt;</p><p>		&lt;cfdump var="#GetMedSchool#" label="Original Query"&gt;<br>		&lt;cfdump var="#result#" label="resulting array"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732115">57</a> by Raymond Camden
		posted on 7/25/2014 at 10:12 PM
		</div>
		<div class="comment_text"><p>Tom, your comment has nothing to do with this particular post as far as I can see. For general CF questions, please use Stack Overflow.</p></div>
	</div>
</div>
		