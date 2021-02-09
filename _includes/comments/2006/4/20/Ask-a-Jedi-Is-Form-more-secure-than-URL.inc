
<div class="comment" id="c_1713652019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652019">1</a> by Luis Fernando Majano
		posted on 4/20/2006 at 9:54 PM
		</div>
		<div class="comment_text"><p>I appreciate your comments.  I will make a printout of this entry to give to my superior, so if anybody has any opinions on the matter, please do.  Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652037">2</a> by Nathan D
		posted on 4/20/2006 at 9:58 PM
		</div>
		<div class="comment_text"><p>I agree -- your boss has a foolish stance, if his/her advocacy is really that the mere fact of having form fields is more secure than URL vars.  Bottom line is that if it's information you are going to get from the client it _can_ be hacked/spoofed, and the question then becomes how much of a barrier to you want to put up.  For instance, although someone &lt;i&gt;could&lt;/i&gt; spoof a referer, it would be a much bigger PITA to do that than just move on.  You could also encrypt your URL variables using CF's built-in encryption.  Again, this has been proven to be fairly easy to crack by someone with even modest experience, but it would definitely deter your average script kiddie who likes to just put in different values into the URL and see what happens.  More than anything else, though, you should adopt a policy of "don't trust the client" -- always do data type checking and authorization/authentication checking on the server-side, EVEN IF you are doing some kind of validation at the client (also, using CFQUERYPARAM goes a long way to stopping SQL Injection -- the most common form, perhaps, of URL variable abuse) and regardless of whether you are passing information back using the URL, FORM vars, or Cookies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652038">3</a> by djuggler
		posted on 4/20/2006 at 10:10 PM
		</div>
		<div class="comment_text"><p>There is nothing wrong with passing information in the url if you use appropriate validations and other measures.</p><p>This sounds like a reactive move on your boss' part. Someone probably said, "Dude, this is unsecure!" and rather than researching it or trusting his developers he threw down the law. It's like our government trying to legislate morals.</p><p>If you really wanted to tighten up security, rather than chasing symptoms, head over to The Open Web Application Security Project ( <a href="http://disq.us/url?url=http%3A%2F%2Fowasp.org%2F%3AMgoIQgWLDoG3wvpT6omRqThYc3U&amp;cuid=3321886" rel="nofollow noopener" title="http://owasp.org/">http://owasp.org/</a> ) and check out their Top 10 ( <a href="http://disq.us/url?url=http%3A%2F%2Fwww.owasp.org%2Fdocumentation%2Ftopten.html%3Ab8fRvgtAHNWEj8PiGtXKcfwh-xE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.owasp.org/documentation/topten.html">http://www.owasp.org/docume...</a> ). Your boss will choke when he finds out that his applications that he thought needed a bandaid are really riddled with gaping holes. That's not a slight on you or your team, but I'm willing to bet most applications (mine included) would fail some or all of the top ten.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652031">4</a> by Teddy Payne
		posted on 4/20/2006 at 10:25 PM
		</div>
		<div class="comment_text"><p>If security is a concern, the focus on the scope of the variables between URL and FORM should not be forefront.  What should be his concern is if primary key or foreign key indices are passed through the URL or FORM scope.  Also, cross site scripting (XSS) attacks should be on his mind for escaping out special characters and SQL injection (SQL-I) attacks.</p><p>If he wants a more secure scope of variable, he should think about server stored SESSION variables and database stored CLIENT variables would be better choices.</p><p>Lucky for your boss, ColdFusion has built in features to handle XSS and SQL-I attacks with the use of cfqueryparam and cfprocparam.</p><p>If I remember correctly, there was an Atlanta ColdFusion User Group presentation on security and prevention.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.acfug.org%2Fresources%2FWebApplicationSecurity.ppt%3AWjFbiDChahvKUs6DXszSQ6HyvYY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.acfug.org/resources/WebApplicationSecurity.ppt">http://www.acfug.org/resour...</a></p><p>This is the link to the presentation by Dean Saxe.  It covers application security from the perspective of an Oracle and Microsoft SQL Server view.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652043">5</a> by Terry Schmitt
		posted on 4/20/2006 at 10:33 PM
		</div>
		<div class="comment_text"><p>I totally agree with all the above and don't trust any submitted data, but...<br>I pretty much write all internal business apps and at times have used POST for all interaction to the server. It uses fairly simple javascript, so it's easy to implement while coding.<br>My reasoning has been more for reducing the problems caused by untrained or curious end-users. Bookmarks can cause some of the dumbest calls with problems, but if all the user can bookmark is "index.cfm"... <br>Just one tool that I have used.</p><p>T</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652040">6</a> by Raymond Camden
		posted on 4/20/2006 at 10:37 PM
		</div>
		<div class="comment_text"><p>Terry, let me just say that I really don't like sites you can't bookmark. I've seen a real estate site like that. My wife would find a property, but to sow me she had to search for the house again. I thought it was the worst design decision a company could make.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652041">7</a> by Tery Schmitt
		posted on 4/20/2006 at 10:48 PM
		</div>
		<div class="comment_text"><p>Ray, I would agree with you for any public accessible site and<br>I'm definitely not religious about using this method either, it's just something I have used for behind firewall type biz apps. <br>Some apps like Unicenter Service Desk take this way further and have app launchers to ensure that all windows are opened up with nothing, no address bar, file menu or right-click. Now of course if you use Firefox with a couple of handy plugins, anything can be bypassed:)</p><p>T</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652039">8</a> by Tom Mollerus
		posted on 4/20/2006 at 10:49 PM
		</div>
		<div class="comment_text"><p>Luis, you're getting the right advice in these comments.  Here's how I think you should approach it with your boss:</p><p>Your boss isn't being foolish or unreasonable given that he believes URL parameters are less secure than form parameters. The first thing you have to do is let your boss know that you agree with your his desire for security. Then, tell him that he has a misperception-- that for even mildly qualified attackers, form parameters are just as easy to modify as are URL variables, and that changing your application to use forms instead of URL parameters would give your business very little benefit for all of the work you would do. Then tell him that you would get much more of a security benefit by protecting against all types of client input (whether as URL, form, or cookie data), as Nathan and djuggler suggest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652046">9</a> by Anj
		posted on 4/20/2006 at 11:31 PM
		</div>
		<div class="comment_text"><p>I would have to disagree with the majority view here, and say that a URL-based app actually is slightly less secure than a FORM based one, if only because you dramatically increase the pool of folks who can make spoof attacks on you. Anyone who can operate a browser can attempt a URL-based spoof attack.</p><p>However, it doesn't take much more knowledge to pull off FORM-based attacks.</p><p>Bottom line -- if your web application is trusting either form or URL based parameters for its security, then you quite frankly have NO SECURITY in your app.  Any client-supplied parameter in your application (be in URL, FORM, or COOKIE) should be sanity checked for validity, never trusted outright.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652044">10</a> by Tom Mollerus
		posted on 4/20/2006 at 11:51 PM
		</div>
		<div class="comment_text"><p>Anj, I don't think that anyone would disagree with the notion that altered URL variables are slightly more easy to submit than are altered form variables. Several people have already written the same statement. Perhaps you disagree in the sense that you think it is worthwhile to change an application from using URL variables to form variables?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652042">11</a> by Craig M. Rosenblum
		posted on 4/20/2006 at 11:54 PM
		</div>
		<div class="comment_text"><p>Altho url variables are more visible, neither is more secure than the other...</p><p>But like some people, not seen means, better.</p><p>But I feel it depends on the application..</p><p>And it still should mean you check the incoming data from anyone for correct datatype and sql injection tactics..</p><p>Which is why i still love the old cfqueryparem, but you could also use the cfparam, since it has datatyping and scaling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652048">12</a> by Christopher Wigginton
		posted on 4/20/2006 at 11:55 PM
		</div>
		<div class="comment_text"><p>On a side note, there is some truth to the URL parameters not being as secure as the Form scope.</p><p>In the early web days, many sites had their log files visible on the web and showed up in the search engines.  The log files generally displayed the full URL, which included all the nice little parameters which were sent along with the GET.  POST parameters however, were not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652047">13</a> by Raymond Camden
		posted on 4/21/2006 at 12:00 AM
		</div>
		<div class="comment_text"><p>Craig, to be fair, you can use cfqueryparam for more than security. It makes your queries faster as well. (If your db supports it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652050">14</a> by Roger Benningfield
		posted on 4/21/2006 at 12:21 AM
		</div>
		<div class="comment_text"><p>At risk of being contrarian here, I'm gonna disagree with the boss *and* Ray.</p><p>Agreed, form variables don't provide any automatic protection from hackers. Let's treat that as given. There are still other issues to consider.</p><p>(1) There's more to security than anti-hacking. Take the experience of early AJAX apps and Google's Web Accelerator... allowing GET requests to change the state of server resources can be a very dangerous game, without so much as a whiff of malicious behavior. An app that allows clients to change or delete data just by fetching a URI is asking for trouble in 2006.</p><p>(2) Running everything through GET (a sin I have committed many, many times) maximizes the vulnerable surface area of an app. Consider IP blocking, for a very rough example. If I see a client doing something suspicious, I have the option to blacklist its IP. But what if I'm wrong, and I'm blacklisting some ISP's dynamic address that will belong to a completely harmless customer/reader/whatever tomorrow? As long as everything runs through GET, I'm stuck. Either block 'em, or don't.</p><p>But if I partition the app's behavior, using GET solely for idempotent actions and using POST for everything else, I can keep my baked good of choice and have a few bites too. With an app like that, I can simply block access to POST, and leave GET open. The theoretically innocent user still won't be able to fully interact with the site, but some access is often better than none.</p><p>You get the idea. The more you break up an app along the lines defined by HTTP, the easier it is to exert control at the HTTP layer. That may not be desirable for everyone, but it never hurts to have options.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652051">15</a> by Raymond Camden
		posted on 4/21/2006 at 12:24 AM
		</div>
		<div class="comment_text"><p>To be clear though, I wasn't saying use GET to change the state. I do think only POST should be used for that (but I'm not perfect either). While you are right, I don't think it relates to what was asked. (I may just be being picky.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652052">16</a> by Aaron Conran
		posted on 4/21/2006 at 1:40 AM
		</div>
		<div class="comment_text"><p>As another person posted above, the default behaviour of the IIS logging utility is to record the full URL, but it does NOT record form variables. Therefore if you review the IIS logs and were being attacked you would not have any breadcrumb trail.</p><p>A plugin for Internet Explorer to change <br>form variables on the fly can be downloaded here. <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.vdberg.org%2F%7Erichard%2Fhtmlbar.html%3A3yxtzjLsL-Q4xjdOf5suIJ-FFBU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.vdberg.org/~richard/htmlbar.html">http://www.vdberg.org/~rich...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652054">17</a> by Craig M. Rosenblum
		posted on 4/21/2006 at 1:46 AM
		</div>
		<div class="comment_text"><p>Ray, I knew about the performance benefits, for example with bind variables in Oracle databases.</p><p>But if I sold it on the security benefits, that might get more people to use it, than do already...</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652055">18</a> by Johnathan Gifford
		posted on 4/21/2006 at 1:50 AM
		</div>
		<div class="comment_text"><p>Don't forget, if you are using &lt;cfparam&gt; to default url variables, you can use the type attribute to specifity the datatype value.  Now this doesn't do much with a string against SQL injection attacks, but it does help with numeric values in the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652053">19</a> by Will Tomlinson
		posted on 4/21/2006 at 2:04 AM
		</div>
		<div class="comment_text"><p>Val() is another nice little check you can use.</p><p>Even tho' Ray blew mine up one day!  Grrrrrr.....  :)</p><p>Will</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652058">20</a> by Ryan Hartwich
		posted on 4/21/2006 at 2:06 AM
		</div>
		<div class="comment_text"><p>There are actually cases where a URL variable is easier to use and possibly a better solution than submitting a form.</p><p>Say you have a 'find our office(s)' page for a large national recruiter (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.teksystems.com%2FLocations%2F%29%3Ae4toiX9Gq2OIu1SzI7tThrjfD3k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.teksystems.com/Locations/)">http://www.teksystems.com/L...</a>.  The first page shows a Google map and a list of 50 states.  Instead of using a combo box they chose to list all the states.  In this case, clinking an html link sends you to a unique page (one per state).  You could have just as easily made the page dynamic and sent the user to the same page and used a url variable to indicate the state.</p><p>Likewise, take a search of a job site like Monster, Career Builder, etc.  You search for a key word in the job and are presented with a list of jobs.  Each job has a generic URL/file name, but a dynamically generated URL variable indicating the job number.  Your boss is proposing that you stop sending the job number via the URL variable/link and instead submit a form.  This makes it difficult if not impossible for your user base to copy and paste the URL link to send to their friends (and thereby help you fill a job opening).</p><p>As long as the variables being sent via the URL are checked on the server (i.e. the site doesn't crash or perform abnormally if the job number or state is invalid) and the URL variable isn't readily used as a primary/foreign key that can negatively alter data you should be fine.  Using a form to send the primary key is almost as risky and you should still be checking on the server side that a database update is permitted for the logged in user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652057">21</a> by Hans
		posted on 4/21/2006 at 4:54 AM
		</div>
		<div class="comment_text"><p>Your boss misses the point of GET versus POST.  See here for the official explanation of when each should be used: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2FREC-html40%2Finteract%2Fforms.html%23submit-format%3Au_vCXMxtUi4JfVsh3hb9-NIJ7R0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/REC-html40/interact/forms.html#submit-format">http://www.w3.org/TR/REC-ht...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652060">22</a> by Roger Benningfield
		posted on 4/21/2006 at 4:00 PM
		</div>
		<div class="comment_text"><p>"I wasn't saying use GET to change the state."</p><p>Ray: Oh, I know. That's my fault for mixing a response to the boss-man and you and other commenters into the same post. Another one of those things I know not to do, and occasionally do anyway. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652056">23</a> by Raymond Camden
		posted on 4/21/2006 at 4:12 PM
		</div>
		<div class="comment_text"><p>No prog Rog. Luis, _please_ let us know what happens next with all of this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652062">24</a> by Luis
		posted on 4/21/2006 at 6:55 PM
		</div>
		<div class="comment_text"><p>Thank you all for the great responses, I am preparing a white paper, explaining all the facts about this issue and how it can be resolved.  I will use some of your comments in my document and present it to my superior this Monday.  I will post the document on my blog and give you a copy Ray, so everybody can download it and have a good guide on this issue.  Thanks again for your responses.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652061">25</a> by [SteelValor]
		posted on 4/21/2006 at 9:36 PM
		</div>
		<div class="comment_text"><p>I've actually written some counter-hack stuff. This method I wrote basically to stop people from submitting attacks against my loginscripts. I highly suggest you never trust any data and always check the data before you interact with it. isDefined, isNumeric and isDate are just a few of the is functions you can use. Also use sql_queryparam within a cftry when you do interact. Never sho w a end user and error. :)</p><p>Sample:<br>&lt;cfset application.authcheck="http://#cgi.http_host#/"&gt;<br>&lt;cfset application.authcheck2=#Len(application.authcheck)#&gt;<br>&lt;cfif (#Left(cgi.http_referer, application.authcheck2)# is "#application.authCheck#") AND isdefined(form.FIELDNAMES) OR isDefined("cgi.QUERY_STRING")&gt;<br> Proceed with Data Validation<br>&lt;cfelse&gt;&lt;cfabort&gt;&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652064">26</a> by sporter
		posted on 4/21/2006 at 10:19 PM
		</div>
		<div class="comment_text"><p>You're right on until you talk about checking the referer.  The referer is nearly as easy to hack as POST data.  Never trust the browser!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652063">27</a> by sporter
		posted on 4/21/2006 at 10:24 PM
		</div>
		<div class="comment_text"><p>Here is a Firefox plugin to hack your referer.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.stardrifter.org%2Frefcontrol%2F%3AfDggdQ45aE_AeovUPugQek51tAk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.stardrifter.org/refcontrol/">http://www.stardrifter.org/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652065">28</a> by [SteelValor]
		posted on 4/21/2006 at 10:28 PM
		</div>
		<div class="comment_text"><p>The url piece was only meant to stop url obfuscation mainly. I'm not really sure on how to stop the spoofed referrers.</p><p>One more thing: I've recently switched to use emails as logins as they are unique and easily verifiable. cfEmail is a great script for validating emails. I've also started using AES encryption in MySQL instead of MD5.</p><p>I'm just a gamer with some self-taught skills and a couple cf courses. I shoulda gone to college for programming instead of music. :rolls eyes:</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652066">29</a> by Luis
		posted on 4/26/2006 at 5:55 PM
		</div>
		<div class="comment_text"><p>Hey Ray, here is the document I sent you that I presented here at work.  Thankfully, we will continue to implement our policies as they were. You can see them in the document:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.luismajano.com%2Fblog%2Findex.cfm%3Fmode%3Dentry%26entry%3DD6686D3F-98F3-C84D-60FA955050784CF9%3ArQiQ9eXFewi-j6uNAeI410RkZww&amp;cuid=3321886" rel="nofollow noopener" title="http://www.luismajano.com/blog/index.cfm?mode=entry&amp;entry=D6686D3F-98F3-C84D-60FA955050784CF9">http://www.luismajano.com/b...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652067">30</a> by Dave
		posted on 7/21/2006 at 3:49 PM
		</div>
		<div class="comment_text"><p>The boss didn't necessarily say he wanted absolute security from what I gathered by the original poster's questions.  What I believe the boss really wants is to do exactly what Ray is suggesting all that would be done: Make it harder.  By making it less obvious what variables are in play, as another poster suggested, the pool of capable deviants is reduced - and probably dramatically reduced.  Granted, I don't know what kind of data the URL is showing off, but it might be as potent as actual last names within the organization or something.  The only real faux pau potential on the manager's part is that perhaps some incredible overhead resources will be required to re-write or deal with changes in the app when in fact the displayed URL info is not that potent.  But if it's the former scenario, it's completely reasonable to ask his programmer to make the URL more discreet.</p></div>
	</div>
</div>
		