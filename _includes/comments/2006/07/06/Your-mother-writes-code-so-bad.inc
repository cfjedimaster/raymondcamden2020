
<div class="comment" id="c_1713654703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654703">1</a> by Brian Rinaldi
		posted on 7/6/2006 at 6:11 PM
		</div>
		<div class="comment_text"><p>One of my favorites is when someone does something like cfif x EQ 1 or x EQ 2 or x EQ 5 or x EQ 9... I have seen examples of this that had some 15-20 options. The worst is when someone does that *and* puts pounds on all the variable names in the if statement. That would be two pet peeves in one!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654689">2</a> by Scott Stroz
		posted on 7/6/2006 at 6:14 PM
		</div>
		<div class="comment_text"><p>This is not so much bad code as bad DB design (but, hey, you need code to create the database, right?)</p><p>I used to work with a product that was used by EMS dispatching agencies.  Several pieces of information that are needed for all EMS calls are times (time dispatched, time enroute to call, time  arrived on-scene, etc...).  ALl totaled there were about 7 differnt times that needed to be tracked for each call.</p><p>How did the software stroe this information? You would think 'DATETIME' would be the perfect data type. Nope, each time had 2 coulmns, one for the date, one for the time, and each was data type 'VARCHAR'.  Imagine the fun I had creating reports that displayed the average 'response time' (the time from when a unit was dispatched to when the unit arrives on scene)...it was not fun.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654705">3</a> by Nic Tunney
		posted on 7/6/2006 at 6:14 PM
		</div>
		<div class="comment_text"><p>&lt;cfargument name="foo" required="false" default="1" /&gt;</p><p>AAARGH!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654706">4</a> by mikeD
		posted on 7/6/2006 at 6:18 PM
		</div>
		<div class="comment_text"><p>Rabid BlogCFC, by Ray Horn.  Do I really need to provide code for this one?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654708">5</a> by Raymond Camden
		posted on 7/6/2006 at 6:18 PM
		</div>
		<div class="comment_text"><p>Nic, why? Your code says, if foo isn't passed in, default it with 1. That doesn't seem bad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654707">6</a> by Erik
		posted on 7/6/2006 at 6:21 PM
		</div>
		<div class="comment_text"><p>My favorite? Seeing code like this in public-facing applications:</p><p>&lt;cfif session.user IS NOT "Admin"&gt;<br> &lt;script&gt;<br>    alert("You are not authorized.");<br>    history.back();<br> &lt;/script&gt;<br> &lt;cfabort&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654719">7</a> by Scott Stroz
		posted on 7/6/2006 at 6:33 PM
		</div>
		<div class="comment_text"><p>I have another, this one is ColdFusion related.</p><p>Most develoeprs I know use this type of syntax when populating a form field.</p><p>&lt;input type="text" name="first_name" value="#first_name#" /&gt;</p><p>Obviously this will need to be wrapped in &lt;cfoutput&gt; tags.</p><p>I say 'most developers' because I have actaully seen this:</p><p>&lt;input type="text" name="first_name" value="#first_name#" /&gt;</p><p>And then at the bottom of the page, there is a block of JavaScript that handles form field population.</p><p>&lt;script&gt;<br>&lt;cfoutput&gt;<br>document.fomrs[0].first_name.value = '#first_name#';<br>&lt;/cfoutput&gt;<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654712">8</a> by Brad
		posted on 7/6/2006 at 6:44 PM
		</div>
		<div class="comment_text"><p>I once had to work on somebody's else CF application and the entire coding was in visual basic style.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654716">9</a> by todd
		posted on 7/6/2006 at 6:45 PM
		</div>
		<div class="comment_text"><p>&lt;TR &lt;CFIF isdefined("url.something")&gt;BGCOLOR="##efefef"&lt;CFELSE&gt;BGCOLOR="###iif(myCheck MOD 2,DE('ffffff'),DE('efefef'))#"&lt;/CFIF&gt;&gt;</p><p>I got tons of these....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654713">10</a> by Joerg Zimmer
		posted on 7/6/2006 at 6:49 PM
		</div>
		<div class="comment_text"><p>Hi all,</p><p>I can top all of you :)<br>I "inherited" a Project where a full blown Online-Shop was written into ONE SINGLE .cfm page. Of course there was an additional Application.cfm and images. But the whole presentation and business-logic was in this monolithic file.</p><p>I think I don't have to mention that I had to rewrite it from the ground up...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654718">11</a> by todd
		posted on 7/6/2006 at 6:51 PM
		</div>
		<div class="comment_text"><p>At least you didn't have to waste time finding which template handled which task ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654717">12</a> by Nick Kwiatkowski
		posted on 7/6/2006 at 6:56 PM
		</div>
		<div class="comment_text"><p>I worked on a site that essentially read some XML documents, parsed them, and stored them to a database.  The guy who wote it complained that the script was taking a half hour for 75 XML documents (all about 10k or so).</p><p>Turns out for every function he was running, he would open EACH file, re-read it into memory, check to see if that was the file he wanted to work on, and then do the function.  He was doing 168750 complete file reads for each 75 files he wanted to read!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654687">13</a> by Brannon Hightower
		posted on 7/6/2006 at 6:58 PM
		</div>
		<div class="comment_text"><p>When i started here this was one of my favorites... now has been changed</p><p>&lt;TR &lt;CFIF #LC#/2 NEQ #INT(LC/2)#&gt;class="table1"&lt;cfelse&gt;class="table2"&lt;/CFIF&gt;&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654688">14</a> by todd
		posted on 7/6/2006 at 6:59 PM
		</div>
		<div class="comment_text"><p>Brannon - isn't it sad that the person who wrote that was probably pretty proud of themselves for being so creative and clever!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654690">15</a> by Craig M. Rosenblum
		posted on 7/6/2006 at 7:03 PM
		</div>
		<div class="comment_text"><p>Not sure why, but I seem to be a magnet for bad code.</p><p>I have worked on a cf3-4 version of a shopping cart where loads of pound signs everywhere in cfif, cfset, just making it look ugly</p><p>oh and those input's with cfoutput inside the quotes and doing this for the whole form, instead of just one cfouput around everythin</p><p>Or applications that have so much seperation between code and database, and also because no documentation, no one has any idea what the stored procedures do.</p><p>For me, it's lack of documentation of applications that really irritates me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654694">16</a> by Jeremy Rottman
		posted on 7/6/2006 at 7:04 PM
		</div>
		<div class="comment_text"><p>My favorite of all time.</p><p>&lt;cfif "#myvar.url#" EQ "ok"&gt;<br>  &lt;cfset var1 = "#myQuery.AA#"&gt;<br>&lt;cflese&gt;<br>  &lt;cfset var1 = "#myQuery.BB#"&gt;<br>&lt;/cfif&gt;</p><p>Found this little gem in a enterprise level application.</p><p>Some of my other favorite things are no documentation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654710">17</a> by Gus
		posted on 7/6/2006 at 7:08 PM
		</div>
		<div class="comment_text"><p>The worst piece of code I have ever seen looked like this:</p><p>&lt;cfquery name='getDepts' datasource='ds'&gt;<br> Select * from departments<br>&lt;/cfquery&gt;</p><p>&lt;cfoutput query='getDepts'&gt;<br>  &lt;cfloop from = '1' to = '#len(departmentName)#' index='i'&gt;<br>    &lt;cfquery name='getJobs' datasource='ds'&gt;<br>	SELECT * from jobs<br>	WHERE departmentName like '#left(departmentName,i)#%'<br>    &lt;/cfquery&gt;<br>  &lt;/cfloop&gt;<br>&lt;/cfoutput&gt;</p><p>There were over 100 departments returned in the original query, and then a new query was run for each department, looping through each letter in a department name!</p><p>When users would run the page that used this block of code, they would go get a cup of coffee while waiting for it to return.</p><p>I look forward to seeing a worse piece of code!</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654711">18</a> by Rick Osborne
		posted on 7/6/2006 at 7:33 PM
		</div>
		<div class="comment_text"><p>For whatever reason, the nails-on-the-chalkboard code for me is extraneous pound signs, as others have already mentioned.  &lt;cfset foo="#bar#"&gt; drives me nuts.  (It's a sure sign that the original coder wasn't a coder before they "learned" CF.)  Equally abrasive is finding it in struct notation: &lt;cfset foo["#bar#"]=1&gt;.  Why, oh why?</p><p>And just to be the voice of dissent ...</p><p>Joerg said: "I "inherited" a Project where a full blown Online-Shop was written into ONE SINGLE .cfm page."</p><p>That was probably one of mine.  I routinely code entire apps in one CF file.  And I'm going to keep on doing it.  Why?</p><p>Pardon me while I rant for a sec.</p><p>Why not?  The argument of presentation versus logic isn't as useful if your presentation is entirely CSS and your CF is outputting XHTML.  Yeah, someone may whine about cases where you want the code to output something other than XHTML, say CSV, but that's a pretty rare case, and not really what I'm talking about.  For most self-contained online apps, such as a shopping cart, copying and modifying a CSS file is hella easier than modifying a dozen dsp* files.  No "where's the end of my DIV" chasing.</p><p>One of my personal pet-peeves is the shotgun approach to coding, with a zillion tiny dsp* and qry* and act* files all over the place.  In the vast majority of applications that's just premature optimization.  YAGNI.</p><p>Not every app needs an n-tier MVC model, just like "monolithic" does not necessarily imply "spagetti code".  In fact, my monolithic apps are in many cases easier to read than the 50-file apps, as a monolithic app forces good variable names and clear logic flow.  (Mine end up with a very easy validation -&gt; logic -&gt; retrieval -&gt; presentation flow from top to bottom.)</p><p>Oh, and distribution doesn't get much simpler than "copy this one file into your web root".  Can't even beat that with EAR/WAR files.</p><p>Each to their own, though.  You keep splitting the monolithic apps into shotgun apps, and I'll keep merging the shotgun apps into monolithic ones.  We'll both stay employed and happy.</p><p>But, hey, it could be worse ... Adobe could add CFGOTO to MX8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654714">19</a> by Damon Gentry
		posted on 7/6/2006 at 7:36 PM
		</div>
		<div class="comment_text"><p>I picked up some work on a data entry application. Each and every form on the entire app had code like this.</p><p>&lt;!--- Do a query ---&gt;<br>&lt;cfquery name="foo" datasource="bar"&gt;<br>horrible SQL Statements<br>&lt;/cfquery&gt;</p><p>&lt;!--- Assign values to form variables ---&gt;<br>&lt;cfoutput query="foo"&gt;<br>&lt;cfset form.field1 = foo.field1 /&gt;<br>&lt;cfset form.field2 = foo.field2 /&gt;<br>...<br>&lt;/cfoutput&gt;</p><p>&lt;!--- Display the form ---&gt;<br>&lt;cffform ...&gt;<br>&lt;input type="text" name="field1" value="#form.field1#" /&gt;<br>&lt;input type="text" name="field2" value="#form.field2#" /&gt;<br>...<br>&lt;/cfform&gt;</p><p>Many forms had over 75 fields in them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654715">20</a> by Craig M. Rosenblum
		posted on 7/6/2006 at 7:40 PM
		</div>
		<div class="comment_text"><p>Yes shoot the pound signs.</p><p>OH and I will personally call a Fatality on the next coder that thinks select * is uber cool.</p><p>Koder Kombat</p><p>I mean aren't we all sick of cleaning up after other people's bad code, and just want to create clean, lean, scalible apps. I know I for sure do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654720">21</a> by Rob Cameron
		posted on 7/6/2006 at 7:51 PM
		</div>
		<div class="comment_text"><p>I've got one that combines bad CF with bad CSS!</p><p>The company I just started with has an old site (still on CF5) that was created back in '99. They went through and update in the last year to add some CSS styling. Unfortunately, someone didn't know much about how CSS is supposed to work.</p><p>We have a menu down he left side of the screen that displays all the main navigation items for the site.  There are about 20 options. Well, those are in a table, with 3 cells each: 1 that provides some padding on th left edge, one that shows a little bullet character, and one that has the actual name of the link. Well, if you're IN that section then the text is bold and white and the bullet changes. Rather than doing this with CSS (something like add a class="active" to the current link), there are &lt;cfif&gt; statements around each option that decides whether or not to change its appearance if it's the current page. And it's not just a single &lt;cfif&gt; around that row in the table, no. There are &lt;cfif&gt; statements around each cell. Every. Single. One.</p><p>So, that single menu has something like 288 &lt;cfif&gt; statements, all so that a single option can be bold. Not only that, but the CSS styles on the page are things like "bold18ptArial" rather than "menuItem". It's killin' me. I'm updating it just on general principle!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654721">22</a> by Demian
		posted on 7/6/2006 at 8:13 PM
		</div>
		<div class="comment_text"><p>My personal hell in bad CF coding involves cfinclude. I've worked on far too many projects where finding the section of CF code you are looking for invloves opening 10 to 20 different files. Too often the names of the files does not relate to the function, and the piece de resistance for me, is when a block of related code is broken up between two or more templates.</p><p>AARRGGHH!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654724">23</a> by Adam Cameron
		posted on 7/6/2006 at 8:13 PM
		</div>
		<div class="comment_text"><p>This is always quite nice:</p><p>&lt;cfquery name="get" datasource="#dsn#"&gt;<br>select	*<br>	from table<br>	&lt;/cfquery&gt;</p><p>	&lt;cfoutput query="get"&gt;<br>&lt;cfif someBooleanColumn  is "true"&gt;<br>			&lt;cfset #hasbeenset# = "y"&gt;<br>	&lt;/cfif&gt;<br>	&lt;/cfoutput&gt;<br>&lt;cfif isdefined("hasbeenset")&gt;<br>[etc]</p><p>(not sure if the "special" indentation will come through in my posting?)</p><p>This is especially good as the "get" query (nice name) has potentially 1000s of rows (including, from memory, CLOB data), and it's ONLY used for that loop to check if "someBooleanColumn" has been set.  And note the nice way that even if "hasbeenset" gets set to "y" after one iteration, we better loop over the rest of the query, just in case.</p><p>I've changed the context of this code to protect the ignorant, but this is *real* code, that was in production.</p><p>The best I've seen is six "errors" (*) within ONE line of CFML.  I have worked with some *special* developers.</p><p>-- <br>Adam</p><p>(*) counting misuse of pound-signs - and that sort of thing - as an "error".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654722">24</a> by Paul
		posted on 7/6/2006 at 8:19 PM
		</div>
		<div class="comment_text"><p>I was once working on a shirt ordering system that had been started by one of the other developers in my department. I got a little way through the project when I found a for loop that would figure out how many pages would be needed to display the results in a pretty paginated fashion. Well instead of using the recordcount of the query that got the shirts from the db as the total number of shirts in the system, this person used the literal number 25.  As a result if this code had been left in place the system would not have accommodated more than 25 shirts in the system.</p><p>Guess they just figured our customer would never have more than 25 good ideas for shirts</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654725">25</a> by Nathan Strutz
		posted on 7/6/2006 at 8:28 PM
		</div>
		<div class="comment_text"><p>Here's just a little something special I found around the office:</p><p>&lt;cflock name="#createUUID()#" type="exclusive" timeout="30"&gt;...[snip]&lt;/cflock&gt;</p><p>Yep, it sets its own lock with a unique name, so if 2 people hit it at the same time, they'll both open their own uniquely named lock. I'll keep my eye out for more today :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654723">26</a> by Nic Tunney
		posted on 7/6/2006 at 8:34 PM
		</div>
		<div class="comment_text"><p>Another one I saw on a project recently:</p><p>They did the following query and code:</p><p>SELECT * FROM myTable ORDER BY Date</p><p>#myQuery.recordCount# records available.</p><p>Not only did they return the full recordset to get a count (and they were not displaying the records anywhere), but they were nice enough to order it during the process ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654726">27</a> by Scott Stroz
		posted on 7/6/2006 at 9:05 PM
		</div>
		<div class="comment_text"><p>Come on Nic.  We all know that the ordering of a query will affect the record count.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654727">28</a> by todd
		posted on 7/6/2006 at 9:22 PM
		</div>
		<div class="comment_text"><p>I think Ray should start <a href="http://disq.us/url?url=http%3A%2F%2Fbad_cf_code_hall_of_fame.com%3AVo4WacfBDXdKnSs7x41iW-XiM9E&amp;cuid=3321886" rel="nofollow noopener" title="bad_cf_code_hall_of_fame.com">bad_cf_code_hall_of_fame.com</a></p><p>We need a daily place to go and read/share these gems!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654730">29</a> by Daniel Greenfeld
		posted on 7/6/2006 at 9:26 PM
		</div>
		<div class="comment_text"><p>Security Code:</p><p>&lt;cfif paramExists(session.user_name)&gt;<br>&lt;script type="javascript"&gt;<br>  alert("You have been timed out");<br>  location.href='logout.cfm';<br>&lt;/script&gt;<br>&lt;/cfif&gt;<br>&lt;!-- start rest of critical business logic code --&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654728">30</a> by Daniel Greenfeld
		posted on 7/6/2006 at 9:28 PM
		</div>
		<div class="comment_text"><p>&lt;cfif paramExists(<a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a>) eq "True"&gt;<br>  &lt;cfset name = #<a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a># /&gt;<br>&lt;cfelse&gt;<br>  &lt;cfset name = "" /&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654729">31</a> by Daniel Greenfeld
		posted on 7/6/2006 at 9:30 PM
		</div>
		<div class="comment_text"><p>&lt;a href="incHelpFileDisplayMe.cfm"&gt;&lt;cfif #user_name# eq #data.axd# and #user_id# GTE 23&gt;&lt;cfoutput&gt;#user_name#&lt;/cfoutput&gt;&lt;cfelse&gt;&lt;cfoutput&gt;&lt;b&gt;#user_name#&lt;/b&gt;&lt;/cfoutput&gt;&lt;/cfif&gt;&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654732">32</a> by Scott Stroz
		posted on 7/6/2006 at 9:32 PM
		</div>
		<div class="comment_text"><p>Todd, there is, check out <a href="http://disq.us/url?url=http%3A%2F%2Fthedailywtf.com%2F%3A6_U4wznHNiCHti-S8GnbebwbtaU&amp;cuid=3321886" rel="nofollow noopener" title="http://thedailywtf.com/">http://thedailywtf.com/</a> It is awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654734">33</a> by Daniel Greenfeld
		posted on 7/6/2006 at 9:35 PM
		</div>
		<div class="comment_text"><p>I would also like to include a description of an application created by a 'senior developer' released start of 2006 that:</p><p>1. Had a frame on every page.<br>2. Clicking a link opened pop-ups.  Every pop-up had frames.<br>3. Included 5-10 levels of CFINCLUDES everywhere.<br>4. Has an instance of 4000 pound signs in a single 1000 line template file that has nothing to do with display of data to the user.<br>5. Has comprehensive XSS blocking code that can be broken by mixing cases in the URL bar of any browser.</p><p>Nothing like seeing legacy spaghetti applications produced proudly by your tax dollars today!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654733">34</a> by justin
		posted on 7/6/2006 at 9:44 PM
		</div>
		<div class="comment_text"><p>I'd just like to point out that:</p><p>&lt;cfset foo = "#bar#"&gt; DOES NOT mean you weren't a coder before CF (as was stated above).<br>Coldfusion is just strange sometimes. I've gotten plenty of errors on a CFC file (complex data types cannot be converted to simple datatypes or the ever popular "-1" error...) that can be fixed with a solution that seems to have no logic behind it whatsoever. But maybe it's just me... When I learned CF I was never really "taught" specifically NOT to use the hash signs (although I realize it now).</p><p>My example of bad code (while I'm here) ?<br>Anything using dreamweaver templates instead of just cfmodule and a layout.cfm...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654735">35</a> by [SteelValor]
		posted on 7/6/2006 at 10:07 PM
		</div>
		<div class="comment_text"><p>Well I'll admit to one.</p><p>I wrote this cf service monitor in cf which would cfexecute a batch file if cf failed. :rim shot:</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654736">36</a> by Justice
		posted on 7/6/2006 at 11:14 PM
		</div>
		<div class="comment_text"><p>How bout this beautiful date formatting code chunk before I learned the beauty of numberformat()....</p><p>&lt;cfif Form.Startdate neq ''&gt;<br>	&lt;CFIF Dayofyear(form.startdate) lt 10&gt;<br>		&lt;cfset StartDate = "#year(form.startdate)#" &amp; "0" &amp; "0" &amp;"#Dayofyear(form.startdate)#"&gt;<br>	&lt;CFELSEIF Dayofyear(form.startdate) lt 100 AND Dayofyear(form.startdate) gt 9&gt;<br>		&lt;cfset StartDate = "#year(form.startdate)#" &amp; "0" &amp;"#Dayofyear(form.startdate)#"&gt;<br>	&lt;CFELSEIF Dayofyear(form.startdate) gt 99&gt;<br>		&lt;cfset StartDate = "#year(form.startdate)#" &amp;"#Dayofyear(form.startdate)#"&gt;<br>	&lt;/CFIF&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654741">37</a> by Dave Shuck
		posted on 7/6/2006 at 11:25 PM
		</div>
		<div class="comment_text"><p>Aaron Lynch came across this nugget (or something very close to this) last week in some old code he was charged with rewriting and sent it to me.</p><p>&lt;cfset newStructure = evaulate("#oldStructure#")&gt;</p><p>Oh yeah... this was in a *big* loop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654740">38</a> by Kevin
		posted on 7/6/2006 at 11:34 PM
		</div>
		<div class="comment_text"><p>I love looking at these examples of bad code as I sometimes have been guilty of some of these things. What would be helpful would be examples on how to do it better.</p><p>One example is this:<br>&lt;TR &lt;CFIF isdefined("url.something")&gt;BGCOLOR="##efefef"&lt;CFELSE&gt;BGCOLOR="###iif(myCheck MOD 2,DE('ffffff'),DE('efefef'))#"&lt;/CFIF&gt;&gt;</p><p>What is wrong with that? At times I'll do this:<br>class="rowcolor#IIF(currentrow mod 2, DE(1), DE(2))#"</p><p>How would someone with more experience write that?</p><p>The other one that I'm guilty of is the CFQUERY inside of a CFLOOP.... how can that be improved.</p><p>Thanks for any tips.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654738">39</a> by Josh Nathanson
		posted on 7/6/2006 at 11:35 PM
		</div>
		<div class="comment_text"><p>I inherited a real estate application that did one of the following on a single page (called "page.cfm"):</p><p>- displayed a list of listings<br>- displayed details for a specific listing<br>- displayed static pages</p><p>It determined which of the above was appropriate by getting the page from a database and determining its type (all the site pages were databased as it was connected to a slapped together CMS).</p><p>Simply splitting the single page into three pages (listings.cfm, listingdetails.cfm, staticpage.cfm) would have cleaned the code up tremendously.</p><p>As it was, page.cfm was about 1000 lines of gobbledy-gook.  Of course the requisite "if <a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a> is 7 or <a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a> is 10 or <a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a> is 11 etc etc etc" were there in all their finery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654746">40</a> by Tony Petruzzi
		posted on 7/7/2006 at 12:08 AM
		</div>
		<div class="comment_text"><p>@Kevin,</p><p>Use bitand() instead of MOD</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654744">41</a> by Jeremy Lund
		posted on 7/7/2006 at 12:22 AM
		</div>
		<div class="comment_text"><p>Kevin,</p><p>I don't know about anybody else, but the nesting of greater-than and less-than signs can make it really hard to read the code. That also goes for extraneous pound signs, as others have mentioned.</p><p>What would I do with the code that you posted in question? I would put the background color logic into a separate block, like this:</p><p>&lt;cfif structKeyExists(url,"something")&gt;<br>  &lt;cfset myBgColor = "##efefef"/&gt;<br>&lt;cfelseif myCheck MOD 2 eq 1&gt;<br>  &lt;cfset myBgColor = "##ffffff"/&gt;<br>&lt;cfelse&gt;<br>  &lt;cfset myBgColor = "##efefef"/&gt;<br>&lt;/cfif&gt;</p><p>&lt;tr bgcolor="#myBgColor#"&gt;</p><p>It makes it easier for me to see what the intent is (to alternate the color in some fashion), and it also helps me to see what the logic is if I need to change it in the future.</p><p>As an aside, I would probably also move the colors into a CSS file instead, and use different CSS classes for each row.</p><p>My two cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654743">42</a> by Craig M. Rosenblum
		posted on 7/7/2006 at 12:25 AM
		</div>
		<div class="comment_text"><p>So many good comments, and i agree there should be a website to show off bad code, and perhaps open for better alternatives.</p><p>As far as alternating row color, my favorite solution was using a variable.</p><p>tr bgcolor="#backcolor#"</p><p>Then below usin the mod thing to switch between colors</p><p>cfif backcolor eq "e8e8e8"<br>cfset backcolor = "d8d8d8"<br>cfelse<br>cfset backcolor="e8e8e8"<br>/cfif</p><p>Sorry not exactly sure how to make code look good in a comment, but you get the basic idea.</p><p>and with this situation you don't really need a math function, unless you prefer randomness</p><p>Then you could do something like this</p><p>mybgcolors = newarray();<br>mybgcolor[1]="e8e8e8";<br>mybgcolor[2]="d8d8d8";</p><p>then in the tr</p><p>cfset pick = randrange(1,arraylen(mybgcolor))<br>tr bgcolor="#mybgcolor[pick]#"</p><p>so forth</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654748">43</a> by Rick Osborne
		posted on 7/7/2006 at 12:50 AM
		</div>
		<div class="comment_text"><p>Kevin-</p><p>My code is littered with:</p><p>&lt;tr class="#EvenOdd[IncrementValue(CurrentRow MOD 2)]#&gt;</p><p>Of course, somewhere before that (normally in the application.cfm), I have:</p><p>&lt;cfset EvenOdd=ListToArray("even,odd")&gt;</p><p>I *despise* DE().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654745">44</a> by rak
		posted on 7/7/2006 at 12:56 AM
		</div>
		<div class="comment_text"><p>1) Create view that's a join of about 8 tables --- check<br>2) Select * from view --- check<br>3) Realize there's duplicates of the ONE field in the view you actually need to display -- check<br>4) Use a CF subquery to get a distinct list  -- priceless.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654747">45</a> by rich
		posted on 7/7/2006 at 2:46 AM
		</div>
		<div class="comment_text"><p>&lt;select name="dayOfMonth"&gt;<br>&lt;option value="1" &lt;cfif record.dayOfMonth eq "1"&gt;selected&lt;/cfif&gt;1<br>&lt;option value="2" &lt;cfif record.dayOfMonth eq "2"&gt;selected&lt;/cfif&gt;2<br>&lt;option value="3" &lt;cfif record.dayOfMonth eq "3"&gt;selected&lt;/cfif&gt;3<br>&lt;...etc...&gt;<br>&lt;/select&gt;</p><p>I hope this guy finally learned the subtle joys of cfloop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654749">46</a> by Kelly Brown
		posted on 7/7/2006 at 3:47 AM
		</div>
		<div class="comment_text"><p>I don't have the sample, but I once found some ColdFusion code in a JavaScript onClick event.  The person thought code would run when someone clicked the button in the browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654750">47</a> by Jeff Anderson
		posted on 7/7/2006 at 7:47 AM
		</div>
		<div class="comment_text"><p>My favorite was (even though perfectly valid):</p><p>&lt;cfset WriteOutput(someVar)&gt;</p><p>I just don't get it sometimes...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654752">48</a> by Nando
		posted on 7/7/2006 at 11:16 AM
		</div>
		<div class="comment_text"><p>Hmmm ... i know someone who "designed" and coded a fairly large and complex OO application without knowing much about OO. Some parts turned out better than others.</p><p>Well, of the parts that didn't turn out so good, one is memorable. You see, this guy, whoever he is, got his concept of inheritance upsidedown. It's not his fault really, because ... well. Anyway, to make a long story short, there are a bunch of CFC's that extend a parent. Each have init()'s and within each init() there's a call to super.init(passingANewInstanceOfAnotherCfcIntoTheParent).</p><p>Ok, now that it's there, we can call methods on that CFC from the child ... and we do. :) It's kind of an extravagant composition via inheritance technique that this guy invented because, well ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654751">49</a> by Jon Sahlin
		posted on 7/7/2006 at 6:45 PM
		</div>
		<div class="comment_text"><p>Here's a a great &lt;cfif&gt; we found is some legacy code.</p><p>&lt;CFIF<br>  (#ValidClaimno.mailstat# is not  '') and<br>  (#ValidClaimno.mailstat# is not  '    ') and<br>  (#ValidClaimno.mailstat# is not  '   ') and<br>  (#ValidClaimno.mailstat# is not  '  ')&gt;</p><p>I don't know where to begin...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654755">50</a> by &lt;cf_anonymous&gt;
		posted on 7/7/2006 at 6:49 PM
		</div>
		<div class="comment_text"><p>Had a coworker who cut and copied a massive amout of javascript code to display the days remaining from a certain date. Maybe it was before the datediff function? No it was yesterday!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654753">51</a> by Raymond Camden
		posted on 7/7/2006 at 6:57 PM
		</div>
		<div class="comment_text"><p>Funny you mention dateDiff. When I first wrote <a href="http://disq.us/url?url=http%3A%2F%2FDeathClock.com%3Amh0MAd5UTFs0fxYhECw5vt5te7U&amp;cuid=3321886" rel="nofollow noopener" title="DeathClock.com">DeathClock.com</a>, I couldn't figure out why my results were incorrect. Turns out I was going over maxint with the datediff. Had to switch to getting years and then days and then seconds. It wasn't _total_ maxint, but a smaller maxint for datediff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654754">52</a> by Carl V
		posted on 7/7/2006 at 9:52 PM
		</div>
		<div class="comment_text"><p>My version of alternate rows is</p><p>&lt;tr class="row#CurrentRow mod 2#"&gt;<br>&lt;td&gt;what ever&lt;/td&gt;<br>&lt;/tr&gt;</p><p>---- CSS ----<br>.row1	{<br>	background-color:#F3F7F7;<br>	}</p><p>.row0	{<br>	background-color:#FFF;<br>	}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654756">53</a> by Jorge Iriso
		posted on 7/8/2006 at 1:52 AM
		</div>
		<div class="comment_text"><p>This one you wont believe it. I worked in a short contract where the LEAD developer was querying databases using SELECT * FROM table  and then he filtered which records he wanted to show in the output. Such us:</p><p>&lt;cfoutput query="qry"&gt;<br>&lt;cfif active EQ 1&gt;<br>#Active#<br>&lt;/cfif&gt;<br>&lt;cfoutput&gt;<br>The recordsets were huge.</p><p>I could not believe it, and when I very politely mentioned to use the query to filter like "some" people do, he did not take it well at all.</p><p>His arguments: the many ways of skinning a cat, the reusability of the query by all the templates and the power of their Oracle DB.</p><p>I was the contractor, he was the permanent so ... you can figure out the outcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654759">54</a> by Jorge Iriso
		posted on 7/8/2006 at 1:53 AM
		</div>
		<div class="comment_text"><p>It was back in 2000.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654757">55</a> by Jorge Iriso
		posted on 7/8/2006 at 2:04 AM
		</div>
		<div class="comment_text"><p>Some are not necesarily bad coding, just missinformation or because of skimming over the documentation. When I first started with CF I was doing master detail reports withouth using the group attribute in cfoutput. Let me tell you I was feeling pretty proud showing all in one page vs having to drill in. Only until I realized. I probably still have scars because of banging my head agains the table when I realized. We had good laughs because of it. But it was a long long ago.</p><p>Come on guys, share. I am sure we all have done at least one stupid thing. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654761">56</a> by Sam
		posted on 7/8/2006 at 9:33 PM
		</div>
		<div class="comment_text"><p>"OH and I will personally call a Fatality on the next coder that thinks select * is uber cool."</p><p>Call me out.  I like select *, especially when you want everything.  When I first started using CF, I thought it was cool.  Then I thought it was lazy and made me have to search for columns that were returned.</p><p>Now I realize its just one less place I have to remember to change code when something else changes.  I think it's super.</p><p>And I don't know what all the drama is about all the cfincludes.  I suppose they can be abused, but you have to remember, for a while, it was the only way to have reusable cf code.  What did you used to do, repeat yourself everywhere?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654760">57</a> by Dave Shuck
		posted on 7/8/2006 at 9:47 PM
		</div>
		<div class="comment_text"><p>Sam, go try this...</p><p>Open up SQL Query Analyzer and run:</p><p>SELECT * FROM [whatever table]</p><p>... and then view the execution path.  Then run</p><p>SELECT [some list of columnns] FROM [whatever table]</p><p>... and view its execution path</p><p>The expense of doing using a * as opposed to explicitly naming the columns should be obvious.  It isn't just about laziness or what happens to be easy for you to remember.  It is truly about a *dramatic* difference in performance.  If you ever write an enterprise level system where performance truly matters, using * is nothing short of writing poor code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654762">58</a> by Sam
		posted on 7/8/2006 at 10:36 PM
		</div>
		<div class="comment_text"><p>Dave,</p><p>Sorry about that - Perhaps I should have clarified more.  Of course select * (or anything else for that matter) is not &lt;i&gt;always&lt;/i&gt; appropriate, but I wouldn't classify it as always inappropriate either.</p><p>If you have the need, of course you should optimize.  I just don't think you should optimize before you have the need.  Or, put another way, I put more value on extensibility before I put value on performance (hence, I'd rather write code that wouldn't have to change just because something else changed).  It's when performance becomes an issue that I would start valuing it over the other things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654768">59</a> by Raymond Camden
		posted on 7/8/2006 at 10:40 PM
		</div>
		<div class="comment_text"><p>I think one could say, and I do sometimes (grin), that doing select a, b, c, ensures that you select what you need, and nothing more. It also ensures you know exactly what you are getting back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654764">60</a> by Sam
		posted on 7/8/2006 at 10:52 PM
		</div>
		<div class="comment_text"><p>I've got one on myself that I still haven't fully cleaned up - mostly because I'm afraid to work on it and also that and I'm just going to have to wait until I get enough free time to fix it.  Any time I do HAVE to work on it, I try to fix it a little more.</p><p>Before there were CFCs we had a "shopping cart" application where I calculated the same things in 3 different places:<br>1) shopping cart pre-checkout <br>2) secure check out<br>3) admin side</p><p>Now, my only excuse for 2 of those is that our secure checkout resided on a different domain than the other, and I was afraid to do such an include that would cross domains.  (although now I wish I had).  I have no excuse for why the other bit wasn't calculated in one spot, except I was young, dumb, and inexperienced.</p><p>To make matters worse, there are 3 different possible payment gateway accounts, that each order could go to, and it could go to one, two, or all 3 (depending on which items were being purchased).  Plus in the admin side, they have the ability to place an order (with the same as above rules) and report on all the orders.</p><p>So, I guess that makes our count about 8 places where the code had to be updated any time the business rules changed (for instance, the tax rate - which was hard coded).</p><p>I was much less experienced when I wrote that, but I'm proud to report that it does all work!  However, it is certainly the worst code I've ever seen.</p><p>And like most of you, I cannot stand the extraneous # signs I see everywhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654763">61</a> by Eric
		posted on 7/9/2006 at 1:59 AM
		</div>
		<div class="comment_text"><p>I wish I could share the code...honestly...but it's long gone.  We were handed a site that a contractor hired by my client had written, which had several pieces that wouldn't function.  The "special" piece that I'm referring to, simply needed to run as a scheduled task, scan a table, and make some updates.  She couldn't really understand why the task wouldn't ever finish and the CF server would crash.</p><p>This code ran a select * against a 60,000+ row table, looped EVERY row in the table and ran nine (yes, nine) queries against each row.</p><p>We accomplished the same in four queries in minutes.  Yikes...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654766">62</a> by Patti
		posted on 7/25/2006 at 11:18 PM
		</div>
		<div class="comment_text"><p>So, we all know that if you write a query that returns multiple records and you're only, for some reason, ever going to be interested in the first record... you can easily get that data one of two ways.  Just reference the column you want, or if you want to be fancy, use bracket notation (This is on a CF 5 machine).</p><p>Or, you could do this:<br>&lt;cfif queryname.recordcount gt 0&gt;<br>  &lt;cfloop query="queryname" startrow="1" endrow="1"&gt;<br>    &lt;cfset myear = year(queryname.mydate)&gt;<br>  &lt;/cfloop&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654765">63</a> by Mike Joachim
		posted on 10/12/2006 at 8:20 AM
		</div>
		<div class="comment_text"><p>Wow, that was fun. I thought the crap I saw on a daily basis was pretty depressing but the fact that nobody even comes close to what I have seen makes me feel even worse.</p><p>&lt;cfquery name="UploadTime"&gt;<br>  Select GetDate() as time<br>&lt;/cfquery&gt;<br>&lt;cfset time = UploadTime.time&gt;<br>&lt;!--- and no, there is no reason that they needed the time from the db ---&gt;</p><p>Or,</p><p>&lt;cfif there was an error uploading the file&gt;<br>  &lt;cfquery&gt;<br>    delete the file from the db<br>  &lt;/cfquery&gt;<br>  &lt;cfif the problem was that the file was renamed&gt;<br>  &lt;cfquery&gt;<br>    update the serverfile of the record i just deleted<br>  &lt;/cfquery&gt;<br>&lt;/cfif&gt;</p><p>And that is just from my most current project which I have been working on for a few days</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654767">64</a> by Justice
		posted on 10/12/2006 at 3:22 PM
		</div>
		<div class="comment_text"><p>I am viewing someone elses code, and so far have a laundry list of bad no-no's!</p><p>a) .mdb database (ugh!)<br>b) the .mdb is stored in the web root  (!!!!)<br>c) the .mdb is not encrypted or protected in any way, and is full of 10K+ records of personal information<br>d) the admin page for the site is publicly accessable with a non-default page name (security through obscurity anyone? Bad!)<br>e) no comments. not a single one.<br>f) dev code and one-off fixes still sitting in the web root</p><p>wanna know the worst part?  I have to figure it all out. Hundreds of templates, sometimes with filesnames that have little or nothing to do with their function, and things like file.cfm, file2.cfm, etc.</p><p>Pity me?  =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654772">65</a> by Raymond Camden
		posted on 10/12/2006 at 5:58 PM
		</div>
		<div class="comment_text"><p>Hey now - I ran <a href="http://disq.us/url?url=http%3A%2F%2FDeathClock.com%3Amh0MAd5UTFs0fxYhECw5vt5te7U&amp;cuid=3321886" rel="nofollow noopener" title="DeathClock.com">DeathClock.com</a> on Access. :) 4.5 million hits a month with no problem. Of course, I cached the HELL out of stuff. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654771">66</a> by Cozmo
		posted on 2/9/2007 at 7:57 PM
		</div>
		<div class="comment_text"><p>I took over this intranet from this guy who LOVED arrays. EVERYTHING in the site is an array. There was one script that did nothing more than send an email with some data pulled from a db. 150 lines of code that did nothing but construct  and deconstruct an array. Took me an hour just to figure out what what variable was what... all the variables on the page were named like such:</p><p>UserArray[1]<br>UserArray[2]<br>UserArray[7]</p><p>Here is another gem. I see these sort of things all over the site.</p><p>&lt;CFOutput Query="GetBidNoBid"&gt;<br>      &lt;CFSet BidID=ID&gt;<br>	  &lt;CFSet Bid=Bid&gt;<br>	  &lt;CFSet Reason1=Reason1&gt;<br>	  &lt;CFSet Reason1_Other=Reason1_Other&gt;<br>	  &lt;CFSet Reason2=Reason2&gt;<br>	  &lt;CFSet Reason2_Other=Reason2_Other&gt;<br>	  &lt;CFSet Status=Status&gt;<br>	  &lt;CFSet DevEmpID=DevEmpID&gt;<br>   &lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654770">67</a> by Dan
		posted on 2/9/2011 at 4:39 AM
		</div>
		<div class="comment_text"><p>&lt;cfexecute name="/bin/date" <br>    arguments='"+%Y-%m-%d %H:%M:%S"' <br>    variable="get_date"&gt;<br>&lt;/cfexecute&gt;</p></div>
	</div>
</div>
		