
<div class="comment" id="c_1713623628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623628">1</a> by todd
		posted on 12/23/2005 at 7:59 PM
		</div>
		<div class="comment_text"><p>Now THAT is good to know...</p><p>[Printing page for future reference....]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623635">2</a> by Phillip Senn
		posted on 12/23/2005 at 8:07 PM
		</div>
		<div class="comment_text"><p>Mindful of the force, he is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623626">3</a> by Barneyb
		posted on 12/23/2005 at 9:06 PM
		</div>
		<div class="comment_text"><p>While that's a very valid question, and very useful technique, any method that is returning two or more distinct things is a good candidate for refactoring, since it's quite possibly doing two or more things.  In most cases, a given method should just do a single thing (that is, be cohesive), and returning multiple results is a pretty strong indicator that it's doing multiple things.</p><p>Like all things, there are a million counter examples, but it's worth keeping in mind that the solution to the problem might not really be a solution, but just a cure for the symptoms of a real problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623627">4</a> by todd
		posted on 12/23/2005 at 9:14 PM
		</div>
		<div class="comment_text"><p>I disagree Barney - how could you refactor a stored proc that returns multiple resultsets?  The whole beauty of a stored proc is that you're minimizing round trips to the database server with one efficient call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623636">5</a> by Barneyb
		posted on 12/23/2005 at 9:20 PM
		</div>
		<div class="comment_text"><p>That'd be one of the million counter examples.....</p><p>Personally, I'd avoid designing an app that way, but that's more personal preference.  I greatly dislike having required business logic in both the DB and application code.  But again, there's plenty of reasons for doing it that way.</p><p>A simpler example is returning a truncated result set and the number of total available rows for a paged display.  getRows(criteria = myCrit, offset = 10, rows = 10) to return the second page of a 10-per-page result.  Returns a result with a query (the data) and a totalRowsFound (the number of rows if truncation wasn't done), so you can render the pager with the right number of pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623642">6</a> by Gary Fenton
		posted on 12/23/2005 at 9:52 PM
		</div>
		<div class="comment_text"><p>Ray, thanks for this method that I hadn't considered. But I'm wondering how to tell the CFC which function to execute and what the arguments are using your method?</p><p>Am I meant to do something like this:<br>&lt;cfset result = myCFC.myFunction(arg1,arg2)&gt;</p><p>Or do I have to called the CFC first using CFINVOKE or CFScript with CreateObject("component",etc) ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623634">7</a> by Raymond Camden
		posted on 12/23/2005 at 9:55 PM
		</div>
		<div class="comment_text"><p>I don't quite what you mean Gary. When you do <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.goo%3ALu-XwU-ZM5UH6KoZdfymWDYe1J0&amp;cuid=3321886" rel="nofollow noopener" title="foo.goo">foo.goo</a>(), the CFC is foo, and the method is goo. That is basic syntax stuff. As for telling what args are in the method - that is on a case by case basic. Your business logic determines what arguments your CFC takes - determines how it works - determines what it returns, etc.</p><p>I think I may be misunderstanding your question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623631">8</a> by Gary Fenton
		posted on 12/23/2005 at 11:00 PM
		</div>
		<div class="comment_text"><p>Sorry for not being clear, Ray. Before I do the CFSETs that you use in your example, do I have to initiate/call the CFC first? CFCs take arguments so I'd need to pass some to it before I start doing your CFSET stuff, right? So do I pass the arguments before all your CFSETs within a CFINVOKE tag? If I'm still not explaining myself well can I include some example code in these comments?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623640">9</a> by Dave Shuck
		posted on 12/23/2005 at 11:59 PM
		</div>
		<div class="comment_text"><p>It probably doesn't make sense to do so, but there is no reason you couldn't pass an array or query result sets back either.  I agree with Barney that it does sound a little suspect though, and might be a good candidate for refactoring.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623629">10</a> by Dave Shuck
		posted on 12/24/2005 at 12:01 AM
		</div>
		<div class="comment_text"><p>that should be "...array OF query..."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623632">11</a> by Raymond Camden
		posted on 12/24/2005 at 1:07 AM
		</div>
		<div class="comment_text"><p>Oh yes. I was assuming you had an instance of the CFC first. In my case, myCFC was created by a createObject("component", "someCFC") type line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623630">12</a> by Gary Fenton
		posted on 12/24/2005 at 1:45 AM
		</div>
		<div class="comment_text"><p>Barney, Dave, I hear what you're saying, but I agree with what Todd says. In my current project I need 2 pieces of information from the db. One is a query with multiple rows and the other is a query with just 1 row (for headers in a table relating to the first query). They can be returned by either making 2 separate requests or getting both back at the same time using resultsets from an SP. This is very efficient and performance is top of my agenda.</p><p>I think if everything is broken down into separate CFCs and individual db requests then there's a danger of being too modular and the application takes a performance hit. It may not be noticeable with 1 page hit/second, but it will be for 5 or 10 times that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623639">13</a> by todd
		posted on 12/24/2005 at 1:58 AM
		</div>
		<div class="comment_text"><p>OK - I hate to seem ignorant, but if I'm reading you right Gary, why don't you just do ONE query and use query.columnlist for your headers?  I'm sure I must be reading something wrong....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623641">14</a> by Gary Fenton
		posted on 12/24/2005 at 2:16 AM
		</div>
		<div class="comment_text"><p>Todd, it's not the column names I need in the 2nd query, it's organisational names which would be unfriendly (and illegal) to have as a column name. I can't combine the 2 queries using more joins as it's a complex schema and has a noticeable effect on the execution time. From a DBA perspective it has to be 2 queries. Thanks for your reply though and sorry I didn't make myself clear. (Must be the excitement of Christmas!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623638">15</a> by Gary Fenton
		posted on 12/24/2005 at 2:49 AM
		</div>
		<div class="comment_text"><p>I still don't get what Ray says. Here's some code.</p><p>&lt;!--- CFC called myCFC.cfc ---&gt;<br>&lt;CFCOMPONENT&gt;<br>&lt;CFFUNCTION access="public" name="goo"&gt;<br>	&lt;CFARGUMENT name="id"&gt;<br>	&lt;!--- Stored proc to grab 2 queries from db ---&gt;<br>	&lt;CFSTOREDPROC datasource="db1" procedure="getGoo"&gt;<br>		&lt;CFPROCPARAM type="In" cfsqltype="CF_SQL_INT" variable="@id" value="#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>#"&gt;<br>		&lt;CFPROCRESULT name="results1" resultset="1"&gt;<br>		&lt;CFPROCRESULT name="results2" resultset="2"&gt;<br>	&lt;/CFSTOREDPROC&gt;<br>	&lt;CFRETURN results1&gt;<br>&lt;/CFFUNCTION&gt;<br>&lt;/CFCOMPONENT&gt;</p><p>&lt;!--- CFML page initiating CFC ---&gt;<br>&lt;CFSET obj=CreateObject("component","myCFC")&gt;<br>&lt;!--- send ID as argument to function called goo ---&gt;<br>&lt;CFSET goo=<a href="http://disq.us/url?url=http%3A%2F%2Fobj.goo%3A29TNNaltR9-PIP6COYH3870nA_I&amp;cuid=3321886" rel="nofollow noopener" title="obj.goo">obj.goo</a>("#id#")&gt;</p><p>Goo is now a query containing rows from results1.<br>What I can't do using Ray's suggestions is to get back the rows from results2.</p><p>The only way I've been able to do this is to edit the CFC like so:<br>&lt;CFPROCRESULT name="THIS.results2" resultset="2"&gt;</p><p>And the calling CFMLpage can access it like this:<br>&lt;CFSET foo=obj.results2&gt;</p><p>Is using the THIS scope in a CFC naughty? I'm sure Ray's method is more elegant but I can't get it to work with my example code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623633">16</a> by Dave Shuck
		posted on 12/24/2005 at 7:32 AM
		</div>
		<div class="comment_text"><p>Best practice dictates not to access the "this" scope directly. What about doing it this way:</p><p>&lt;CFCOMPONENT&gt;<br>&lt;CFFUNCTION access="public" name="goo" returntype="array"&gt;<br>       &lt;CFARGUMENT name="id"&gt;<br>       &lt;!--- Stored proc to grab 2 queries from db ---&gt;<br>       &lt;CFSTOREDPROC datasource="db1" procedure="getGoo"&gt;<br>               &lt;CFPROCPARAM type="In" cfsqltype="CF_SQL_INT" variable="@id" value="#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>#"&gt;<br>               &lt;CFPROCRESULT name="results1" resultset="1"&gt;<br>               &lt;CFPROCRESULT name="results2" resultset="2"&gt;<br>       &lt;/CFSTOREDPROC&gt;<br>       &lt;!--- assign the result sets to an array ---&gt;<br>       &lt;cfset results = ArrayNew(1) /&gt;<br>       &lt;cfset results[1] = results1 /&gt;<br>       &lt;cfset results[2] = results2 /&gt;<br>       &lt;cfreturn results /&gt;<br>&lt;/CFFUNCTION&gt;<br>&lt;/CFCOMPONENT&gt;<br>---------------------------------------------<br>Then your cfm:<br>&lt;!--- CFML page initiating CFC ---&gt;<br>&lt;CFSET obj=CreateObject("component","myCFC")&gt;<br>&lt;!--- send ID as argument to function called goo ---&gt;<br>&lt;CFSET goo =<a href="http://disq.us/url?url=http%3A%2F%2Fobj.goo%3A29TNNaltR9-PIP6COYH3870nA_I&amp;cuid=3321886" rel="nofollow noopener" title="obj.goo">obj.goo</a>(id)&gt;<br>---------------------------------------------<br>then your results are goo[1] and goo[2]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623644">17</a> by Gary Fenton
		posted on 12/27/2005 at 4:33 AM
		</div>
		<div class="comment_text"><p>Dave, thanks. Can I ask why using "this." isn't good practice? I'll run some speed tests on using an array just to see what the performance hit is.</p><p>I'd like to hear from Ray to find out how his version works (which unfortunately I still don't understand)? Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623645">18</a> by Julian
		posted on 12/27/2005 at 6:16 AM
		</div>
		<div class="comment_text"><p>Gary, here's an example of how you might adapt your code.</p><p>&lt;cfcomponent displayname="Sproc.cfc"&gt;<br>	 &lt;cffunction name="init" access="public" returntype="Sproc"&gt;<br>		&lt;cfset variables.instance	=	structNew()&gt;<br>		&lt;cfset instance.results1	=	QueryNew("")&gt;<br>		&lt;cfset instance.results2	=	QueryNew("")&gt;<br>		&lt;cfreturn this&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="setResults" returntype="void" access="public" output="false"&gt;<br>		&lt;cfargument name="results1" type="query" required="true"&gt;<br>		&lt;cfargument name="results2" type="query" required="true"&gt;<br>		&lt;cfset instance.results1	=	arguments.results1&gt;<br>		&lt;cfset instance.results2	=	arguments.results2&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="getResults1" returntype="query" access="public" output="false"&gt;<br>		&lt;cfreturn instance.results1&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="getResults2" returntype="query" access="public" output="false"&gt;<br>		&lt;cfreturn instance.results2&gt;<br>	&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p><p>&lt;!--- CFC called myCFC.cfc ---&gt;<br>&lt;CFCOMPONENT&gt;<br>&lt;CFFUNCTION access="public" name="goo" returntype="Sproc"&gt;<br>	&lt;CFARGUMENT name="id" type="numeric" required="true"&gt;<br>	&lt;cfset var results1=""&gt;<br>	&lt;cfset var results2=""&gt;<br>	&lt;cfset var oSproc=""&gt;<br>   &lt;!--- Stored proc to grab 2 queries from db ---&gt;<br>		 &lt;CFSTOREDPROC datasource="db1" procedure="getGoo"&gt;<br>				&lt;CFPROCPARAM type="In" cfsqltype="CF_SQL_INT" variable="@id" value="#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>#"&gt;<br>				&lt;CFPROCRESULT name="results1" resultset="1"&gt;<br>				&lt;CFPROCRESULT name="results2" resultset="2"&gt;<br>		 &lt;/CFSTOREDPROC&gt;<br>		 &lt;cfset oSproc	=	createObject("component","Sproc").init()&gt;<br>		 &lt;cfset oSproc.setResults(results1,results2)&gt;<br>   &lt;CFRETURN oSproc&gt;<br>&lt;/CFFUNCTION&gt;<br>&lt;/CFCOMPONENT&gt;</p><p>&lt;!--- CFML page initiating CFC ---&gt;<br>&lt;CFSET obj=CreateObject("component","myCFC")&gt;<br>&lt;!--- send ID as argument to function called goo ---&gt;<br>&lt;CFSET goo=<a href="http://disq.us/url?url=http%3A%2F%2Fobj.goo%3A29TNNaltR9-PIP6COYH3870nA_I&amp;cuid=3321886" rel="nofollow noopener" title="obj.goo">obj.goo</a>("#id#")&gt;<br>&lt;cfset q1=goo.getResults1()&gt;<br>&lt;cfset q2=goo.getResults2()&gt;</p><p>Another example where this is appropriate besides stored procs is the cfsearch tag in CF7, which now returns a status struct in addition to the result recordset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623643">19</a> by Gary Fenton
		posted on 12/27/2005 at 4:14 PM
		</div>
		<div class="comment_text"><p>Hi Julian. I like the idea of what your code does and I'm sure I can use it elsewhere but I'm concerned about CF processing too many lines of code. I need to get the 2 queries back as quickly as possible as my site will be doing a lot of processing for a lot of users. The purists will tell me to buy more hardware if that's the case, but I can only buy so much.</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623637">20</a> by Julian
		posted on 12/27/2005 at 4:38 PM
		</div>
		<div class="comment_text"><p>I used to think the same way, Gary, but now code quality in terms of maintainability, reusability, encapsulation etc. is more important to me than the fastest excecution time I can possibly squeeze. Of course you may find later on that you do have a problem with performance, in which case the nice thing about web apps is that you can easily go back and refactor.</p><p>But I wouldn't assume that just because there are more lines of code or extra layers of objects it's going to be less efficient. Frequently the difference in speed is negligeable (look at your debugging: how many ms are really being added - frequently I see 0ms for quite lengthy function calls), but you'll probably find the improvement in code maintainability/extensibility makes a real difference.</p><p>It's down to judgement the end of the day, though, and you know your app better than me :-)</p></div>
	</div>
</div>
		