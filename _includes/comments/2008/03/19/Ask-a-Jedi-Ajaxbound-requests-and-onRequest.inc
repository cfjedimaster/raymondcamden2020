
<div class="comment" id="c_1713678258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678258">1</a> by Will Swain
		posted on 3/19/2008 at 8:13 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, I missed that post of Sean's the first time round.</p><p>As someone who has run into this problem a few times, I have to say I consider this a bug. I wonder if Adobe do too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678256">2</a> by Sid Wing
		posted on 3/19/2008 at 9:26 PM
		</div>
		<div class="comment_text"><p>BIG BIG Bug! Adobe needs to break out the flyswatter for sure on that one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678255">3</a> by Michael White
		posted on 3/20/2008 at 9:11 PM
		</div>
		<div class="comment_text"><p>more than a bug, it's a scorpion</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678257">4</a> by Don Li
		posted on 3/22/2008 at 5:05 AM
		</div>
		<div class="comment_text"><p>I get the impresson that application.cfc and CFC components may not play together that well for cf8 (my copy is standard).  Hence, I'm a bit relunctant to change the application.cfm to application.cfc for one app which uses a handful of CFCs.  I understand I may lose some efficiency...</p><p>Is Adobe all consumed with Flex and Air now?</p><p>Thks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678260">5</a> by Raymond Camden
		posted on 3/22/2008 at 7:37 PM
		</div>
		<div class="comment_text"><p>Don, I'm not sure where you got this impression. There is absolutely nothing wrong with using CFCs and Application.cfc. You lose nothing moving from App.cfm - instead you gain new features.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678261">6</a> by Don Li
		posted on 3/22/2008 at 10:57 PM
		</div>
		<div class="comment_text"><p>ok, Thank you, Ray.  I'll remove my hesitation and move forward with application.cfc then.</p><p>Don</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678263">7</a> by Don Li
		posted on 4/2/2008 at 4:30 AM
		</div>
		<div class="comment_text"><p>But Ray, I have a question, how to translate the following<br>code,<br>&lt;cfscript&gt;<br> daysForData = 3;<br>&lt;/cfscript&gt;<br>in the application.cfm framework<br>to its equivalent in the application.cfc framework?</p><p>Also, it would be referenced by many (15+) templates.</p><p>Many thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678259">8</a> by Raymond Camden
		posted on 4/2/2008 at 5:27 PM
		</div>
		<div class="comment_text"><p>That code in APp.cfm would be equivalent to the same code in onRequest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678262">9</a> by GM
		posted on 7/24/2008 at 10:46 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I am trying to build an application and I am extending an Application.CFC my code uses onRequest in the extended Application.CFC and onRequest breaks my binding in cfselect?  I tried your work around from Sean C.  I am not clear on where arguments.thePage is referring to.  Any help would be appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678265">10</a> by Raymond Camden
		posted on 7/25/2008 at 5:25 AM
		</div>
		<div class="comment_text"><p>Well arguments.thePage is passed to onRequest automatically. It's the page being requested. So Sean's fix is to look at the value, and if it "something.cfc", to remove itself from the request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678268">11</a> by GM
		posted on 7/25/2008 at 1:31 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, so you are saying that arguments.thePage gets passed automatically.  So, my question then is the name of the variable always thePage?  Or could it be something else?  And if it is something else how where in the code is this determined?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678267">12</a> by Raymond Camden
		posted on 7/29/2008 at 6:08 AM
		</div>
		<div class="comment_text"><p>The variable name is based on what you use in the cfargument tag. If you had cfargument name="myfreakingpage", it would be arguments.myfreakingpage.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678270">13</a> by GM
		posted on 7/29/2008 at 4:07 PM
		</div>
		<div class="comment_text"><p>So, Ray sorry for being so dense on this.  You mean the cfargument tag name attribute that you are passing to the onRquest method correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678272">14</a> by Raymond Camden
		posted on 7/29/2008 at 4:11 PM
		</div>
		<div class="comment_text"><p>Right - the argument names are up to you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678285">15</a> by Sasa
		posted on 10/7/2008 at 2:45 PM
		</div>
		<div class="comment_text"><p>If You dont want to deal with argument name you can also use</p><p>&lt;cfif listLast(CGI.CF_TEMPLATE_PATH, ".") is "cfc"&gt;</p><p>I am using this in my Application.cfc and its working. I use this becouse listlast(arguments.thePage,".") in onRequestStart returned error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678287">16</a> by Steve
		posted on 3/19/2009 at 2:57 AM
		</div>
		<div class="comment_text"><p>Ray, I am having a similar problem related to this topic. However, I'm not using the onRequest/onRequestStart and there is no application.cfc.</p><p>When I load my grid page, I get a popup with this error:</p><p>Error parsing JSON response: &lt;wddxPacket version='1.0'&gt;&lt;header/&gt;&lt;data&gt;&lt;struct&gt;&lt;var name='TOTALROWCOUNT'&gt;&lt;number&gt;3.0&lt;/number&gt;&lt;/var&gt;&lt;var name='QUERY'&gt;&lt;recordset rowCount='1' fieldNames='ID,LOGINID,LOGINPW,LOGINNAME,LOGINLEVEL' type='coldfusion.sql.QueryTable'&gt;&lt;field name='ID'&gt;&lt;number&gt;3.0&lt;/number&gt;&lt;/field&gt;&lt;field name='LOGINID'&gt;&lt;string&gt;jaime&lt;/string&gt;&lt;/field&gt;&lt;field name='LOGINPW'&gt;&lt;string&gt;xXxX&lt;/string&gt;&lt;/field&gt;&lt;field name='LOGINNAME'&gt;&lt;string&gt;Jaime&lt;/string&gt;&lt;/field&gt;&lt;field name='LOGINLEVEL'&gt;&lt;string&gt;Admin&lt;/string&gt;&lt;/field&gt;&lt;/recordset&gt;&lt;/var&gt;&lt;/struct&gt;&lt;/data&gt;&lt;/wddxPacket&gt; [Enable debugging by adding 'cfdebug' to your URL parameters to see more information]</p><p>After clicking Ok, I get this popup:</p><p>CFGRID: Response is empty [Enable debugging by adding 'cfdebug' to your URL parameters to see more information]</p><p>Now, my dilemma is that I'm on a shared hosting environment and apparently the debugging is turned off. I've tried adding "?cfdebug" to the query string to no avail.</p><p>Now, if I perform a cfdump on the CFC using cfinvoke, I show this:</p><p> struct<br>QUERY 	<br>query<br>  	ID 	LOGINID 	LOGINLEVEL 	LOGINNAME 	LOGINPW<br>1 	3 	jaime 	Admin 	Jaime 	XxXx<br>2 	2 	liz 	Admin 	Liz 	XxXx<br>3 	1 	steve 	Admin 	Steve Fister 	XxXx<br>4 	[empty string] 	[empty string] 	[empty string] 	[empty string] 	[empty string]<br>5 	[empty string] 	[empty string] 	[empty string] 	[empty string] 	[empty string]<br>TOTALROWCOUNT 	3</p><p>I don't know if this is the problem, but it looks like there are two rows of empty strings and I have absolutely no idea where they are coming from! Checking the db table, there are indeed only 3 rows in the table.</p><p>Any ideas? Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678291">17</a> by Steve
		posted on 3/19/2009 at 3:00 AM
		</div>
		<div class="comment_text"><p>Actually, the extra rows issue I have just figured out...they are there as placeholders from the setting of pageSize attribute in cfgrid. Anyhow, still not sure what's wrong with the JSON....</p><p>Thanks.</p><p>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678289">18</a> by Raymond Camden
		posted on 3/20/2009 at 6:43 AM
		</div>
		<div class="comment_text"><p>Notice the XML. It is WDDX. How are you doing your binding? You want to ensure returnformat=json is in the url.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678292">19</a> by Meenakshi
		posted on 4/8/2009 at 7:57 PM
		</div>
		<div class="comment_text"><p>Ray, I am having a similar problem as steve mentioned earlier. I am using onRequestEnd and application.cfc.</p><p>When I load my grid page, I get a popup with this error:</p><p>Error parsing JSON response: {Total rows:25.... [Enable debugging by adding 'cfdebug' to your URL parameters to see more information]</p><p>After clicking Ok, I get this popup:</p><p>CFGRID: Response is empty [Enable debugging by adding 'cfdebug' to your URL parameters to see more information]</p><p>My CFGRID looks likes this:<br>&lt;cfgrid format="html" name="employeeGrid" pagesize=11<br>	stripeRows=true stripeRowColor="gray" bind="url:employeeService.cfc?method=getData&amp;page={cfgridpage}&amp;pagesize={cfgridpagesize}&amp;gridsortcolumn={cfgridsortcolumn}&amp;gridsortdirection={cfgridsortdirection}&amp;returnFormat=json"<br>	delete="yes" selectmode="edit"<br>	onchange="cfc:employeeService.editData({cfgridaction},{cfgridrow},{cfgridchanged})"&gt;</p><p>		&lt;cfgridcolumn name="UserID" display=true header="Employee ID"/&gt;<br>		&lt;cfgridcolumn name="FName" display=true header="First Name"/&gt;<br>		&lt;cfgridcolumn name="LName" display=true header="Last Name"/&gt;<br>		&lt;cfgridcolumn name="email" display=true header="Email" /&gt;</p><p>&lt;/cfgrid&gt;</p><p>and my employeeService.cfc has this<br>&lt;cfcomponent displayname="employeeService.cfc" output="false"&gt;</p><p>&lt;cffunction name="getData" access="remote" output="false" &gt;</p><p>	&lt;cfargument name="page"&gt;<br>	&lt;cfargument name="pageSize"&gt;<br>	&lt;cfargument name="gridsortcolumn" default=""&gt;<br>	&lt;cfargument name="gridsortdirection" default=""&gt;</p><p>	&lt;cfquery name="team" datasource="CMS"&gt;</p><p>		SELECT UserID, FName, LName, email<br>		FROM UserAccounts<br>		&lt;cfif gridsortcolumn neq "" or gridsortdirection neq ""&gt;<br>		order by #gridsortcolumn# #gridsortdirection#<br>		&lt;/cfif&gt;</p><p>	&lt;/cfquery&gt;</p><p>	&lt;cfreturn QueryConvertForGrid(team, page, pageSize)&gt;</p><p>&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678288">20</a> by Raymond Camden
		posted on 4/8/2009 at 7:59 PM
		</div>
		<div class="comment_text"><p>What does your response look like? Use Firebug to see what you are getting.</p><p>Check to ensure CF Debugging is turned off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678283">21</a> by Raymond Camden
		posted on 4/8/2009 at 8:15 PM
		</div>
		<div class="comment_text"><p>Meenakshi pinged me via email with a screen shot of the error. THe error was a CF error. That means your server side code is throwing an error. The best thing to do is use Firebug's "Open request in new tab" option. This will let you run the page in a new tab and give you a better idea of the error CF is throwing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678284">22</a> by Tom McNeer
		posted on 4/22/2009 at 12:00 AM
		</div>
		<div class="comment_text"><p>I know this seems insane, because I swear I've used this workaround before. But it's not working now.</p><p>I have a simple "Hello World"-type Flex page for testing. It calls a CFC which returns the string "Hello."</p><p>When the CFC resides underneath the following Application.cfc, there's an error because the OnRequest method still runs.</p><p>Naturally, when I completely comment out the OnRequest method, it works fine. The code in OnRequestStart just isn't deleting OnRequest, for some reason.</p><p>Here's the entire Appliation.cfc:</p><p>&lt;cfcomponent &gt;<br>	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> = "fred" /&gt;</p><p>	&lt;cffunction name="onRequestStart"&gt;<br>		&lt;cfargument name = "targetPage" type="String" required="true" /&gt;<br>		&lt;!--- ensure CFC / Web Service / Flex Remoting calls are not intercepted ---&gt;<br>		&lt;cfif listlast(arguments.targetPage,".") is "cfc"&gt;<br>			&lt;cfset StructDelete(this, "onRequest") /&gt;<br>			&lt;cfset StructDelete(variables,"onRequest")/&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="onRequest"&gt;<br>		&lt;cfargument name = "targetPage" type="String" required="true" /&gt;<br>		&lt;cfinclude template = "#Arguments.targetPage#" /&gt;<br>	&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678286">23</a> by Raymond Camden
		posted on 4/23/2009 at 12:37 AM
		</div>
		<div class="comment_text"><p>Have you tried logging in onRequestStart? It may help debug the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678290">24</a> by Jake
		posted on 5/5/2009 at 10:11 AM
		</div>
		<div class="comment_text"><p>Thank you Ray, this was driving me insane!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678293">25</a> by Jon Taylor
		posted on 7/6/2009 at 4:12 AM
		</div>
		<div class="comment_text"><p>Wow .. Thankyou ..may the cf force go with you all .. this was driving me nuts.</p><p>As well as the dreaded "Response is empty" it can show in apache logs as an error: "(63)File name too long"</p><p>If you use the application.cfc heavily then wrap anything in the onRequestStart and onRequest in an if/else check for a cfc request and all is good (for me at least).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678297">26</a> by FALCONSEYE
		posted on 7/16/2009 at 7:25 PM
		</div>
		<div class="comment_text"><p>Wow, This was about to drive me insane. Thanks Raymond...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678295">27</a> by Ranga
		posted on 8/6/2009 at 4:10 AM
		</div>
		<div class="comment_text"><p>This was driving me nuts whole for the whole day.</p><p>The next day I saw something that drove me in commenting out all the functions of App.cfc and my ajax requests started working. I then figured out that onRequest was the one by uncommenting one by one.</p><p>Anyway this should help in uncommenting onRequest function as well.</p><p>Thanks to Ray and SC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678299">28</a> by Kelvin
		posted on 1/25/2010 at 1:03 AM
		</div>
		<div class="comment_text"><p>Wow! It's now 2010 and this problem still persists in CF. I have been studying the CF 8 volume 1 book. I practiced the examples on auto-suggest and cfgrid and everything went on smoothly. The next chapter introduced Application.cfc. I created an onRequestStart method which simply includes a header and an onRequestEnd method which includes a footer.</p><p>When I tried to show a friend the cool CF Ajax powered auto-suggest / cfgrid functionality, both of the examples I had earlier created didn't work:-(. After searching for a solution for a while, I decided to go back in time. I commented out everything in the Application.cfc and my auto-suggest and cfgrid examples worked again:-). In the end, I realised the problem was with the onRequestStart and onRequestEnd methods. That's how I finally landed in this forum.</p><p>The solution presented here does not solve my problem since I am not using any argument:</p><p>        &lt;cffunction name="onRequestStart" returntype="boolean" output="true" hint="Executed before each page request"&gt;<br>		&lt;!--- Display site header at top of every page ---&gt;<br>		&lt;cfinclude template="header.cfm" /&gt;</p><p>		&lt;cfreturn true /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="onRequestEnd" returntype="void" output="true"&gt;</p><p>		&lt;cfinclude template="footer.cfm" /&gt;</p><p>	&lt;/cffunction&gt;</p><p>So how do I solve this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678298">29</a> by Raymond Camden
		posted on 1/25/2010 at 2:48 AM
		</div>
		<div class="comment_text"><p>Actually this problem is solved in ColdFusion 9.</p><p>Why does the solution not help you though? Your statement "I am not using any argument" doesn't make sense. I noticed your code sample showed a header and footer being included in every request. Is that the problem you are trying to solve? If so, that isn't a bug. You code says "Always include a header and footer." Therefore the fact that your Ajax requests break are entirely your fault. What you can do is sniff the page requested. That is always passed to onRequestStart and End. You haven't defined it, but it's passed. See the docs for these two methods. If you then examine the file requested you can simply NOT include the header/footer if the request ends in .cfc.</p><p>Also - I'd recommend not using onRequestStart/End for layout. I'd use a custom tag for that instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678296">30</a> by Kelvin
		posted on 1/26/2010 at 1:12 AM
		</div>
		<div class="comment_text"><p>Hi Ray, sorry but I am still missing out something. (still on chapter 19 in the CF 8 book). I now understand that my Ajax requests break are being caused by the header and footer I am including on every page.</p><p>Actually here is the code of the auto-suggest page I am trying to render (it works when I comment out the header and footer in my Application.cfc):<br>&lt;cfform&gt;<br>	&lt;table align="center" style="background-color:green;"&gt;<br>		&lt;tr&gt;<br>			&lt;th colspan="2"&gt;<br>				&lt;h3&gt;Find an Art Name&lt;/h3&gt;<br>			&lt;/th&gt;<br>		&lt;/tr&gt;<br>		&lt;tr&gt;<br>			&lt;td&gt;<br>				Art Name: <br>			&lt;/td&gt;<br>			&lt;td&gt;		<br>				&lt;cfinput <br>					type="text"<br>					name="artName"<br>					autoSuggest="cfc:components/artGateway.getArtForAutoSuggest({cfautosuggestvalue})"<br>					size="50"<br>					maxLength="100"<br>				/&gt;<br>			&lt;/td&gt;<br>		&lt;/tr&gt;<br>	&lt;/table&gt;<br>&lt;/cfform&gt;</p><p>You said I can simply not include a header/footer if the request ends in .cfc. In this case the page I am requesting is a .cfm page or are you referring to the component being invoked by the auto-suggest control?</p><p>So it means I can't include a header on such a page simply by using the onRequestStart method?</p><p>I am still to study custom tags. When I get there, I will make use of a custom tag as you recommended.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678310">31</a> by Raymond Camden
		posted on 1/26/2010 at 3:31 AM
		</div>
		<div class="comment_text"><p>One quick nit - when you use CFC for binding like that, yo use dot notation. Replace the / with a .</p><p>I'm referring to the CFC you used for binding - because your onRequestStart/End runs all the time, it will try to wrap the CFC output with a header/footer as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678313">32</a> by Kelvin
		posted on 1/26/2010 at 9:59 AM
		</div>
		<div class="comment_text"><p>Thanks Ray. Everything is now clear and I have been able to work around the problem as you earlier hinted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678311">33</a> by etothex23
		posted on 3/24/2010 at 7:17 PM
		</div>
		<div class="comment_text"><p>When you say this is fixed in CF 9, what is fixed?<br>I have a header in the onRequestStart() and a footer in the onRequestEnd(). On one page I am building an ajax directory tool and it is a no go.<br>and i have a strange issue:<br>&lt;!--- Include the requested ColdFusion template. ---&gt;<br>		&lt;cfif ListLast(TargetPage, "/") NEQ "DirectorySearch.cfm"&gt;<br>			&lt;!---&lt;cfinclude template="#APPLICATION.header#" /&gt;---&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfinclude template="#APPLICATION.header#" /&gt;<br>		&lt;/cfif&gt;<br>		 &lt;!---Return out. ---&gt;<br>This shows the cfc and the header. which then kills it for the pages without the cfc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678309">34</a> by Raymond Camden
		posted on 3/24/2010 at 7:22 PM
		</div>
		<div class="comment_text"><p>What's fixed in onRequest breaking the communication. Your code is working like you  coded it. You said, before every request, include this template. Therefore, it's a bug in your code. :) You need to modify onRequestStart to look at the requested page. If it is a CFC, don't do the incude.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678314">35</a> by DanGle neck
		posted on 6/1/2011 at 4:25 AM
		</div>
		<div class="comment_text"><p>Aww'sum Thanks for the answer to my problem.  I've been banging my head trying to get ajaxproxy to work for over a week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678308">36</a> by DanGle neck
		posted on 6/1/2011 at 4:35 AM
		</div>
		<div class="comment_text"><p>This work-around also fixes the "?wsdl" problem I was having with cf8.</p><p>the URL: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.site.com%2FmyCFC.cfc%3Fwsdl%3AjEXibu7j36fmRPt971TeFK-Ycx4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.site.com/myCFC.cfc?wsdl">http://www.site.com/myCFC.c...</a> was not displaying the xml.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678312">37</a> by Jonathan
		posted on 7/30/2011 at 11:52 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I need to include my header &amp; footer on every page. How can I do that (as you suggested not to use cfInclude in onRequestStart) and still work with my CFCs</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678307">38</a> by Raymond Camden
		posted on 7/30/2011 at 5:34 PM
		</div>
		<div class="comment_text"><p>You could, in onRequestStart, sniff for the file extension of the request and if it is cfm, include your request. Ditto for onRequestEnd. I just don't like doing layout in App.cfc. I'd do it there "hard" way and wrap your CFMs with a layout custom tag. This means adding it to each CFM, but that gives you the most control. I promise if you do the "every cfm" approach in app.cfc, you will find a few CFMs where you _don't_ want it, and that means adding a complex CFIF to your logic.</p></div>
	</div>
</div>
		