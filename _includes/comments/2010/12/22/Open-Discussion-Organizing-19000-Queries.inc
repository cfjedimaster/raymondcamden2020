
<div class="comment" id="c_1713728479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728479">1</a> by Kerr
		posted on 12/22/2010 at 9:24 PM
		</div>
		<div class="comment_text"><p>CFC or method names like "function45" certainly don't explain anything about what's going on, so at a minimum that practice should be changed.  I would go mad within minutes of encountering a system like this.  Humans recall things in an associative manner, and utilizing numbers in this case runs counter to that tendency.</p><p>Doug basically wants to go to an MVC structure, yet not utilize any of the established frameworks out there.  My experience in writing my own MVC'ish framework a few years ago tells me this is not a sound strategy.  They will likely spend a lot of time on that piece alone, and in the end will expend more effort for less payoff in stability and longevity.  There was a lengthy discussion on the FW/1 forum about framework choices, etc.  It devolved to a philosophical and religious debate, but one of the more salient points made was that CF'ers tend to reinvent the wheel as opposed to contributing to pre-existing and viable community efforts.  I would like to see this practice reversed and the community be more cohesive in its efforts.  We would all be beneficiaries, plus CF would perhaps be seen as less "dead" by the world at large. ;)</p><p>I'm curious as to how many developer hours have been spent on the project thus far, and what is budgeted for the total project.  Boiled down, whether they are willing to admit it or not, Doug's team is basically doing a rewrite. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728476">2</a> by Peter Boughton
		posted on 12/22/2010 at 9:27 PM
		</div>
		<div class="comment_text"><p>Definitely agree having database4.function123 is bad.</p><p>For function names, I would probably instead go with "getQuery_[existing-query-name]" (until they can be manually fixed).</p><p>Before even considering areas of concern, I would split into individual CFCs - and to determine names:</p><p>1. Perform a regex search on the code for "FROM\s+[^\s,]+" and export results to a spreadsheet.<br>2. Group and sort these results, to find the most common primary table names.<br>3. Create individual CFCs for the top 90% and a misc.cfc for the rest (where 90% is increased if misc.cfc is too large).</p><p>That's then a better place to move forward from with further improvements.</p><p>Something important to remember:</p><p>	Refactoring doesn't need to be done in one pass.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728475">3</a> by Peter Boughton
		posted on 12/22/2010 at 9:34 PM
		</div>
		<div class="comment_text"><p>Also, whilst I fully agree that using an established framework is the best way forward, particularly for a huge codebase like this, I don't need it needs to be a first step.</p><p>I'd say it's fine to create a non-framework MVC structure initially, just by moving code about (i.e. not actually creating a custom framework, just cut and paste code/files into different locations and adding/updating cfincludes).</p><p>Then, once that's completed (and tested), the codebase is in a better position to be ported across to an actual MVC framework as a second step.</p><p>Again - it's all about incremental steps and not biting off too large chunks in one go that end up making you choke. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728478">4</a> by Adrian J. Moreno
		posted on 12/22/2010 at 9:37 PM
		</div>
		<div class="comment_text"><p>DO NOT, DO NOT, DO NOT do the inheritance thing.</p><p>DO NOT use CFINCLUDE in your CFCs to beat the java compilation limitations or to reduce the amount of code you have in a single file.</p><p>I think you're missing the biggest opportunity you've got right now: stored procedures. Convert as many of the queries as you can into stored procedures and have your CFFUNCTIONs call them instead of inline queries.</p><p>Stored procedures get compiled on the database server and their execution plans are stored so they can run faster than a plain inline query. If you've got a lot of conditional CF code to create a WHERE clause, you can write that same functionality in plain SQL.</p><p>Also, you want a single reference to your CFCs? Break up your CFCs into groups like Ray suggests and you can then wire up how they're called. Look into the Factory design pattern or better yet, take a look at ColdSpring. It's a little more effort, but you'll be able to wire up how the CFCs need to be created and then have a single line of code to reference whenever you need to call a CFC and function.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.robgonda.com%2Fblog%2Findex.cfm%2F2007%2F2%2F19%2FIntro-to-Object-Factories-with-slides-and-code%3AFr2F47HD68h8UPATO-PcF4BlXSc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.robgonda.com/blog/index.cfm/2007/2/19/Intro-to-Object-Factories-with-slides-and-code">http://www.robgonda.com/blo...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldspringframework.org%2F%3Aqe4uoqVrf0rwPvxE6eo3THJyK5s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldspringframework.org/">http://www.coldspringframew...</a></p><p>Using the factory patterm, your code ends up looking like this:</p><p>application.factory.getBean('someCFC').someFunction()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728477">5</a> by jalpino
		posted on 12/22/2010 at 9:49 PM
		</div>
		<div class="comment_text"><p>I also agree that using a numerical structure to organize is a bad idea, along with having a colossal CFC for all queries.</p><p>Ray's suggestion of organizing the queries into logical groupings, even if it feels more difficult to find and reuse them later, is probably the best solution. I mean, no matter how you slice 19,000 queries it's going to be difficult to find an use the appropriate one, but by breaking them up logically it will help ease that pain provide a more maintainable solution.</p><p>Having said that, if Doug and his team are set on having one giant cfc I would recommend using a combination of @Peters naming recommendation (getQuery_[existing query name]) and mix-ins rather than inheritence to tie it all together. Doug is right, extending a ton of CFC's simply to bring them together is definitely the wrong use of object inheritence if the issue is just a matter of the IDE crashing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728482">6</a> by Kerr
		posted on 12/22/2010 at 10:15 PM
		</div>
		<div class="comment_text"><p>RE: stored procedures -- Given Doug's requirement of making the query code database agnostic, I'm not sure that stored procedures are a realistic end goal.  The benefits of reusable execution plans can still be realized via the use of cfqueryparam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728483">7</a> by Doug (yeah, that one)
		posted on 12/22/2010 at 11:05 PM
		</div>
		<div class="comment_text"><p>All,<br>The function names "function1, function2" were examples. Rest assured the names are far more descriptive.  Also, our CFCs were already broken up by module (or what Ray would call AOCs).  I didn't mention this in the original post, but one of the drivers behind this is to make the code database independent.</p><p>The other problem we were intending to solve was the duplication problem since so far ~34% have been duplicates, just in different CFMs.  So with our largest module being 5000+ queries, we would hope to only need ~3300 functions.</p><p>@Kerr - I would love an established framework.  In fact, one project on this team already uses FW/1.  The politics of my project are different however.  With the project using FW/1, the developer was able to start using it from scratch.  My project, not only has 4K+ files and 19K+ queries, but also has a VERY resistant manager to using a framework.  The reasons are ego related, I suspect, but should be assumed to be non-negotiable.</p><p>My thought is that if we can start using something framework-like (without setting off framework alarm bells), our manager (and more importantly the other developers) will begin to see the value of a framework opening the possibility of going to a full blown existing MVC fw.</p><p>"Boiled down, whether they are willing to admit it or not, Doug's team is basically doing a rewrite."<br>I am fully aware, and that IS the intention, but unfortunately it is in a underhanded way.  Resistance to change from management is the largest single obstacle.</p><p>@Peter - Agree completely with your incremental steps approach.  I also like your ideas about how to split individual CFCs.  Our approach had been to move queries first, then analyze what we had an organize appropriately, but grouping by table names makes a lot of sense.</p><p>@Adrian - Yeah, I totally agree, not best practice...  As far as stored procedures go... I'm not sold.  I think some views may be in order, but with the variance of stored procedure syntax between MySQL, MSSQL Server and Oracle, I'm not sure I want to commit.  But then again, I asked for advice, so I will take it under advisement.</p><p>I am using a factory, but the problem still is getting the "beans" down to size.  I apologize for not including this information in my email.  I guess I thought I was helping the problem understanding by boiling it down, but the scale of the problem was lost.</p><p>Since we have something like this:<br>application.database.getInstance("library").functionXYZ()<br>Since the library CFC is too big, we needed to break it up into smaller files (like how Peter was suggesting, though we were doing it poorly).  But that meant (because I'm was stupid) that we would need to modify our function calls to look a little like this:<br>application.database.getInstance("library").getInstance("addFiles").functionXYZ()</p><p>Conclusion:<br>The solution is to break our CFCs into even smaller AOCs and stop being a little girl and re-write the function calls.  Right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728484">8</a> by Raymond Camden
		posted on 12/22/2010 at 11:45 PM
		</div>
		<div class="comment_text"><p>@Doug: You actually did mention in the email to me you were looking for DB independence - I didn't quote that above and I'm sorry if that breaks some context. I'm curious as to why you worry about that. I use ORM not because I can go from MySQL to SQL Server- I've done that maybe 2-3 times in the past 10 years - but to make working with my objects easier. Do you really see your org switching to a new DB anytime soon?</p><p>Finally - don't call yourself stupid. I've got plenty of code examples out there _right now_ which makes me shake my head. Old code is what it is. We all grow. If you can't look at your code from a year ago and find issues, then you've got a bigger problem. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728486">9</a> by Rob Brooks-Bilson
		posted on 12/22/2010 at 11:53 PM
		</div>
		<div class="comment_text"><p>This doesn't help you immediately, but in your future planning this is one case where ORM would help you immensely.  The nice thing about Hibernate is that it abstracts database specific code (in most cases) allowing you to write your code once and have it work across multiple databases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728485">10</a> by Doug
		posted on 12/23/2010 at 12:03 AM
		</div>
		<div class="comment_text"><p>@Ray - We currently have Oracle, but we work for a client who has no problem paying $$$.  Within the next 3 months (supposedly) we will have a new client who requires SQL Server (who knows).  And simultaneously we are trying to market a low cost option using MySQL to yet more clients.  So yes, database independence is a MUST, this other stuff is just gravy.  I figured though, if I'm going to have to rewrite every outer join from "column1 = column2(+)" to standard "LEFT JOIN ... ON" syntax, I ought to get rid of the duplicates first, and in the process improve the code base.</p><p>Oh, and if you read what I said "because *I'm* was stupid" you would realize, I must be stupid.  Who says "I'm was"?!?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728487">11</a> by Raymond Camden
		posted on 12/23/2010 at 12:04 AM
		</div>
		<div class="comment_text"><p>Ah - so you have a product - not just a general web site. I can then see how wanting to support N DBs makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728464">12</a> by Doug
		posted on 12/23/2010 at 12:08 AM
		</div>
		<div class="comment_text"><p>@Rob &amp; @Ray: We looked at ORM initially but -<br>1) Too much to re-write in 3 months<br>2) The section of the database we tried it on didn't map correctly to ORM.  We've got some relationships that make me scream, like one that joins two tables like this:</p><p>substr(firstname, 1, 1) || substr(middlename, 1, 1) || lastname = username</p><p>One table has a PK of user_id the other has a PK of membId...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728463">13</a> by Kerr
		posted on 12/23/2010 at 12:26 AM
		</div>
		<div class="comment_text"><p>@Doug - I hear you regarding management resistance.  I'm going to take a wild guess and surmise that perhaps there is a manager who is/was once performing technical duties and therefore "knows" the best answer to everything.  I'm lucky in that I'm not currently in that scenario.</p><p>Frameworks aside, I've successfully written large, RDBMS agnostic apps using ANSI compliant SQL without issue.  The problem comes about when you get into DDL and having to write DB specific scripts due to inconsistencies between MySQL/Oracle/MSSQL/etc.  As Rob says, this is an item where an ORM like CF9's Hibernate based solution may help you.</p><p>I'm still cracking up at "...and stop being a little girl and re-write the function calls."</p><p>Sometimes when I've met strong resistance, I have gone a dual route where I do what "they" think is right and then also pursue a parallel path with, say in this case a framework.  Once I could demonstrate positive effects, usually buy-in was a breeze.  This strategy obviously involves more personal effort on your part, and YMMV with your current political situation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728465">14</a> by Kerr
		posted on 12/23/2010 at 12:28 AM
		</div>
		<div class="comment_text"><p>"substr(firstname, 1, 1) || substr(middlename, 1, 1) || lastname = username"</p><p>Yeah, you'll definitely have trouble with ORM in this case.  That must be a very fast performing join!</p><p>In recent years, and only because I have the complete trust of my management, I have pursued a DB level reorganization in cases like these.  Your app will have a very difficult time eclipsing poor database design choices.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728466">15</a> by Kevin Marino
		posted on 12/23/2010 at 1:01 AM
		</div>
		<div class="comment_text"><p>Even though this is an application, very much reminds me of a gov't job I was on. Same scenario and Oracle also. We did two things one incremental approach using a psuedo framework and at the same time planned for a new framework. In our case the entire app was going to re-build so had the opportunity to build from scratch.</p><p>In our case our team had various skill levels so the pseudo framework allowed a very basic grasp of MVC and then when we implemented Coldbox was easier for them to grasp.</p><p>Also frameworks are not the be all end all. Code organization is. Even a psuedo framework well organized will be able to be followed.</p><p>I have not delved into ORM yet and again it is no panacea either, after all you go to get some of those crazy Oracle queries in agnostic format first and traditional SQL functions fine.</p><p>Good Luck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728462">16</a> by RogerTheGeek
		posted on 12/23/2010 at 1:48 AM
		</div>
		<div class="comment_text"><p>Reminds me of a time I had to abstract an old application. The biggest issue for me was organizing the CFCs and UDFs so I could make sure I wasn't duplicating anything. It was a issue of bookkeeping / documentation. In the end, it was worth the extra work to document and organize things well. (How often do you hear that refrain?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728467">17</a> by Travis
		posted on 12/23/2010 at 1:52 AM
		</div>
		<div class="comment_text"><p>Ray,<br>"Old code is what it is. We all grow. If you can't look at your code from a year ago and find issues, then you've got a bigger problem." That needs to be a Facebook status.  While you're there approve me. :)</p><p>Doug,<br>I'm curious how you're going to handle every db unique "feature".  Joins seem to be the least of your problems. ROWNUM, DECODE, NVL, and other Oracle specific syntax have multiple solutions for different databases (assuming you're using any of them now).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728470">18</a> by Steve Bryant
		posted on 12/23/2010 at 1:59 AM
		</div>
		<div class="comment_text"><p>With apologies for pushing my own (FOSS) wares, I think DataMgr is an excellent solution to add database independence to an existing app and simplify code. It returns queries by default, just like hand-written SQL queries, but produces database-independent code with little effort.</p><p>Much better (IMO) than ColdFusion ORM:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bryantwebconsulting.com%2Fblog%2Findex.cfm%2F2009%2F9%2F22%2FDataMgr-is-Better-than-ColdFusion-ORM%3Ap7ft7elLBFvlRgKiCTthv8V5RF4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bryantwebconsulting.com/blog/index.cfm/2009/9/22/DataMgr-is-Better-than-ColdFusion-ORM">http://www.bryantwebconsult...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728468">19</a> by Rachel
		posted on 12/23/2010 at 2:10 AM
		</div>
		<div class="comment_text"><p>Perhaps a good way to explain how to split up the functions by area of concern would be "by database table." Not that you necessarily need one DAO per table, and in some queries the "primary" table may be hard to recognize, but generally if you go about it with that approach you will be separating by "areas of concern". HTH!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728471">20</a> by Doug
		posted on 12/23/2010 at 3:08 AM
		</div>
		<div class="comment_text"><p>@Travis: We've got a set of database independent functions which we call in lieu of the function.  We've largely been able to find/replace our way out of that one, but the joins must be done manually.</p><p>The functions are actually quite like what is implemented in DataMgr:<br>if_else, case_when, concat, substring, length, trim, Lpad, Rpad, dateToString, replaceNullValue, substringStartIndex</p><p>You bring up an interesting point about rownum.  Currently, none of our interfaces have paging (1 2 3 Next &gt;).  I know that I'll need to wrap a query in another query to accommodate offsets in Oracle and SQL Server, but what's the best way to unobtrusively do so?  Not an immediate need, but it would be nice to know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728469">21</a> by Steve Bryant
		posted on 12/23/2010 at 3:26 AM
		</div>
		<div class="comment_text"><p>Doug,</p><p>Oracle and SQL Server 2005 can both handle offsets (Oracle with rownum, SQL Server with nasty nested SQL ROWNUM) - DataMgr abstracts both with a simple "offset" argument.</p><p>Rachel makes a good point about using primary table as a rough guideline for splitting up CFCs. Peter's regex should help with that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728473">22</a> by Doug
		posted on 12/23/2010 at 4:03 AM
		</div>
		<div class="comment_text"><p>Steve,</p><p>select *<br>from tbl<br>where rownum &gt; 10 and rownum &lt; 20</p><p>The above query (which I believe is what you are saying Oracle can do) will return 0 results.  It can't work because rownum counts the records as they are displayed.  For the same reason, you can't do an order by with rownum.  You need subselects for it to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728480">23</a> by Travis
		posted on 12/23/2010 at 5:02 AM
		</div>
		<div class="comment_text"><p>Oracle ranges are done like:<br>select col1, col2, col3<br>from (select rowNum r, col1, col2, col3<br>         from tableName)<br>where r &gt; 10 and r &lt; 20</p><p>I believe they're 0 indexed too, but I can't remember 100% off the top of my head.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728481">24</a> by Travis
		posted on 12/23/2010 at 5:50 AM
		</div>
		<div class="comment_text"><p>Ok I had time to look it up, it is NOT 0 indexed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728488">25</a> by Steve Bryant
		posted on 12/23/2010 at 10:14 AM
		</div>
		<div class="comment_text"><p>Doug,</p><p>Good to know. I will look at my code later. It could be I need to change my implementation up a bit. I rarely get a chance to test on Oracle lately so I may have missed testing that bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728489">26</a> by Tim Cunningham
		posted on 12/23/2010 at 4:37 PM
		</div>
		<div class="comment_text"><p>I would think that ColdBox would be a good use case here.  You could put all your current code into the views folder and the code would still work "as-is"  ColdBox's feature of "virtual events" was created exactly for a case like this.  Then you could go through each file one at a time move it out to the model and proper controllers, gradually.  Maybe Luis Majano could describe it better than I can, but I have seen it done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728490">27</a> by Doug
		posted on 12/23/2010 at 6:27 PM
		</div>
		<div class="comment_text"><p>Some conclusions:<br>-function1() and functionX() are bad example function names<br>-managers can be slow to change<br>-don't abuse inheritance (cmon, I thought it was clever)<br>-CFCs need to be sub broken up by module, then by sub-module AOCs (possibly by database table)<br>-DB redesign would be an even better first step (but would probably get less traction than using a framework, see bullet 2)<br>-Move to a pseudo framework or use a framework without using a framework (@Tim) then sell the benefits<br>-Documentation of CFC organization is crucial<br>-People who say "I'm was"... well, you know</p><p>Thanks for all your input so far.  I will certainly be sharing these "expert" opinions with my team and hopefully we can reach a consensus.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728494">28</a> by Tim Cunningham
		posted on 12/23/2010 at 6:51 PM
		</div>
		<div class="comment_text"><p>The moving to a "pseudo-framework" first and then selling the benefits, will only work if the the move to the "pseduo-framework" goes smoothly.  If it doesn't you may have just poisoned the "Framework Well" in the higher-ups mind and then any further mention of Frameworks will go poorly.</p><p>If you could drop your code as-is into a framework and it still work and then gradually start pulling in the benefits a given framework allows you, then the framework idea may not seem so intrusive. Plus you have already established that you are using a real framework already, and the "should we use a Framework" battle is already behind you.</p><p>I imagine you are having more than technical challenges, the biggest hurdles I find are the political fights.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728492">29</a> by Luis Majano
		posted on 12/23/2010 at 9:37 PM
		</div>
		<div class="comment_text"><p>Just like Tim mentioned we implemented this specific use case in order to implement legacy applications into ColdBox.  We have had great success with this feature and migrations have been done very very fast.</p><p>Here is a video to show it: <a href="http://disq.us/url?url=http%3A%2F%2Fvimeo.com%2F15260399%3A3brhazInwEV6uQYJomOKxu0zPHc&amp;cuid=3321886" rel="nofollow noopener" title="http://vimeo.com/15260399">http://vimeo.com/15260399</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728493">30</a> by Aaron Neff
		posted on 12/28/2010 at 3:35 PM
		</div>
		<div class="comment_text"><p>"Old code is what it is. We all grow. If you can't look at your code from a year ago and find issues, then you've got a bigger problem."</p><p>Love it! :) So true.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728491">31</a> by Dan Fredericks
		posted on 12/28/2010 at 5:49 PM
		</div>
		<div class="comment_text"><p>Good Morning all,<br>Just wanted to try to get this going again after the holidays. I work with Doug and know we are fighting an uphill battle here in trying to implement anything newer than CF 6 type concepts. Management seemed to stop understanding CF around that time, and still runs things based around that. I implemented FW/1 for a project when I started, and management still had developers just drop code in the main folder...as we all know with frameworks, that does not work. So, trying to get anything "new" implemented is a real chore, so Doug thought maybe trying to just get a "framework like" setup could help us push our old school code into a better format and maybe that could get us moving towards a framework...if we mention a framework structure is a good way to go, that gets shot down right away with the my way is the right way and I am the manager and you will follow what I know approach. It is an uphill battle.<br>I really appreciate everything you all have posted here to help Doug and myself out. I think we have learned a lot of stuff here that we can use to try to organize our cfc's. <br>Did we really get a good sense of a great way to Extend all these cfc's we will create from a 10,000+ line cfc with 100+ function in it? we were just using extends to extend the group of cfc's...I am not sure if we really got a lot of info on a good way to do this. I am glad you are all helping us with our CFC breakup...I just hope we can convince the management and the "butt" kisser developers about these ideas.</p><p>Again, I'd really like to thank everyone especially Ray for posting this, and taking time out to help Doug and myself.</p><p>Hope everyone had a great Christmas weekend.<br>Dan</p></div>
	</div>
</div>
		