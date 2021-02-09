
<div class="comment" id="c_1713649334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649334">1</a> by Phillip Senn
		posted on 1/19/2006 at 8:29 PM
		</div>
		<div class="comment_text"><p>To keep from hardcoding the Datasource, I've learned to do an Init first.<br>&lt;cfcomponent displayname="xxx" output="False"&gt;<br>&lt;cffunction name="Init" output="true" returntype="<a href="http://disq.us/url?url=http%3A%2F%2Fcomponents.xxx%3AoKLt19v_OUJr-1xRqw0axOPK7lI&amp;cuid=3321886" rel="nofollow noopener" title="components.xxx">components.xxx</a>"&gt;<br>&lt;cfargument name="DSN" required="yes"&gt;<br>&lt;cfset Variables.DSN = arguments.DSN&gt;<br>&lt;cfreturn this&gt;<br>&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p><p>In my calling cfm page:<br>&lt;cfset xxxObj = CreateObject("Component","<a href="http://disq.us/url?url=http%3A%2F%2FComponents.xxx%3AFzI5Rdx1CDZzG5msafmCgh67I70&amp;cuid=3321886" rel="nofollow noopener" title="Components.xxx">Components.xxx</a>").Init(Application.DSN)&gt;<br>&lt;cfset xxxQry = <a href="http://disq.us/url?url=http%3A%2F%2FxxxObj.foo%3AuljjsgpIOPJo59WOFphRfgqu4OA&amp;cuid=3321886" rel="nofollow noopener" title="xxxObj.foo">xxxObj.foo</a>()&gt;</p><p>In Application.cfc:<br>&lt;cffunction name="onApplicationStart" output="false" returntype="void"&gt;<br>	&lt;cfset Application.DSN = "myDatasource"&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649344">2</a> by Raymond Camden
		posted on 1/19/2006 at 8:34 PM
		</div>
		<div class="comment_text"><p>Nod - I was going for quick and simple though. ;) Plus this question applies to UDFs as well, so I wanted to keep it generic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649348">3</a> by Phillip Senn
		posted on 1/19/2006 at 8:39 PM
		</div>
		<div class="comment_text"><p>I also include a Diagnostic function with every component file.</p><p>&lt;cffunction name="Diagnostic" access="public" returntype="string" output="True"&gt;<br>	&lt;cfset var result = "OK"&gt;<br>	&lt;cfset var xxxObj = CreateObject("component","<a href="http://disq.us/url?url=http%3A%2F%2FComponents.xxx%3AFzI5Rdx1CDZzG5msafmCgh67I70&amp;cuid=3321886" rel="nofollow noopener" title="Components.xxx">Components.xxx</a>").Init(Variables.DSN)&gt;<br>	&lt;cfset var xxxQry = ''&gt;<br>	&lt;cfset var xxxID = ''&gt;</p><p>Foo<br>	&lt;cfset xxxQry = xxxObj.Foo()&gt;<br>	&lt;cfif xxxQry.recordcount EQ 0&gt;<br>		&lt;cfset result="FAILED"&gt;<br>		&lt;cfreturn result&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfreturn result&gt;<br>&lt;/cffunction&gt;</p><p>This allows me to write a Diagnostic.cfm file that has:<br>&lt;cfset Obj = CreateObject("component","<a href="http://disq.us/url?url=http%3A%2F%2Fcomponents.xxx%3AoKLt19v_OUJr-1xRqw0axOPK7lI&amp;cuid=3321886" rel="nofollow noopener" title="components.xxx">components.xxx</a>").Init(Application.DSN)&gt;<br>#Obj.Diagnostic()#</p><p>The Diagnostic function in xxx.cfc should call every function within xxx.cfc and return OK if they all work.<br>This allows you go proceed with confidence as you make changes.</p><p>When something breaks, it's reassuring to browse Diagnostic.cfm and see that all the components are working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649345">4</a> by Raymond Camden
		posted on 1/19/2006 at 8:45 PM
		</div>
		<div class="comment_text"><p>Now that is interesting Phillip. Normally I'd suggest folks use a "full" unit testing system - but this seems like a nice and simple solution. Do you have a blog? I think you do. You should blog this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649346">5</a> by Seth Petry-Johnson
		posted on 1/19/2006 at 10:01 PM
		</div>
		<div class="comment_text"><p>Given how important it is to var scope variables, and that many newbies forget to do it on a large scale (and even experienced devs miss one here and there), has anyone thought of writing a code analyzer to check for non-var scoped variables?</p><p>As long as all non-local variables are fully scoped to the "this" or "variables" scope then it shouldn't be too hard to write a few regular expressions to identify local variables and then check to see if they were var scoped at the top of the function.</p><p>I envision adding a unit test to CFUnit that examines the CFC code and throws warnings if non-var scoped variables are found.  This way the checks are run each time a CFC is re-tested to make sure recent additions didn't introduce new, non-var scoped locals.</p><p>If nothing like this exists I think I may have a go at it.  Maybe its just the influence of reading Ray's blog every day, but I've been itching to release some sort of open source app to the community :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649354">6</a> by Raymond Camden
		posted on 1/19/2006 at 10:09 PM
		</div>
		<div class="comment_text"><p>I say go for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649351">7</a> by Alistair Davidson
		posted on 1/19/2006 at 10:16 PM
		</div>
		<div class="comment_text"><p>I use a shortcut like this:</p><p>&lt;cffunction .....&gt;</p><p>&lt;cfset var l = structNew() /&gt;<br>&lt;cfset l.someVariable = "locally scoped" /&gt;<br>&lt;cfquery name="l.qry_myquery" ...&gt;<br>BLAH...<br>&lt;/cfquery&gt;</p><p>&lt;/cffunction&gt;</p><p>I always scope all my variable references inside functions with <a href="http://disq.us/url?url=http%3A%2F%2Farguments.xxx%3AAXG2J3iZVHi3Mseq1hSlQ2vh8Ek&amp;cuid=3321886" rel="nofollow noopener" title="arguments.xxx">arguments.xxx</a> / <a href="http://disq.us/url?url=http%3A%2F%2Fvariables.xxx%3AtsvgtjNCEDNrYT8ieVQP5Al8p8A&amp;cuid=3321886" rel="nofollow noopener" title="variables.xxx">variables.xxx</a> / <a href="http://disq.us/url?url=http%3A%2F%2Fthis.xxx%3AeTU1kNwZfjJGjViFWZDHeRZyM8Y&amp;cuid=3321886" rel="nofollow noopener" title="this.xxx">this.xxx</a> / <a href="http://disq.us/url?url=http%3A%2F%2Fl.xxx%3Ar7kkVXBQRd7_8sGcnmopjQPIqpQ&amp;cuid=3321886" rel="nofollow noopener" title="l.xxx">l.xxx</a> <br>That way I can easily tell just by looking at the code if anything is not properly scoped.<br>The only exception to this otherwise-nice-way-of-doing-it is if you then need to do a Query-of-Queries with a fully-scoped reference to your locally-scoped query - as you need to do if you want to do joins in a Q-of-Q</p><p>&lt;cfquery name="l.qry_query2" ...&gt;<br>SELECT <br>l.qry_one.itemID,<br>l.qry_two.whatever</p><p>FROM<br>l.qry_one, l.qry_two</p><p>WHERE<br>l.qry_one.itemID = l.qry_two.itemID<br>&lt;/cfquery&gt;</p><p>If you don't fully-scope the reference, then it fails on the Ambiguous Column Name.<br>If you do fully-scope the reference, then it fails because it can't resolve it due to the dot!</p><p>So in that case, I explicitly declare it as var at the top, and prefix the variable name with LOCAL_varname.<br>Seems to work OK for me :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649352">8</a> by Steve Walker
		posted on 1/19/2006 at 10:24 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Simple request.  When an individual enters their website, if they don't include the 'http' or 'https' the links don't work.  Any chance of adding form validation or simply a note that says "Include http(s)://"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649353">9</a> by Raymond Camden
		posted on 1/19/2006 at 10:30 PM
		</div>
		<div class="comment_text"><p>It's on my list. Will be in the next update. (After I dig up a proper license. -sigh-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649350">10</a> by Seth Petry-Johnson
		posted on 1/19/2006 at 10:32 PM
		</div>
		<div class="comment_text"><p>Alistair:  I guess I should get into that habit as well, especially for larger methods, but I don't necessarily like the idea of creating a struct on every single method call.</p><p>However, I realize that the performance hit of creating that struct is very small, especially compared to the time needed for a non-trivial method to do its work, so I really can't defend my position logically.  Maybe I'm just lazy and stuck in my ways :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649355">11</a> by Alistair Davidson
		posted on 1/19/2006 at 10:38 PM
		</div>
		<div class="comment_text"><p>Seth,</p><p>I just like the idea, as often mooted by Joel Spolsky, of having your coding conventions setup in such a way as to make potential bugs leap out of the page at you. This was I believe the original motivation behind the Hungarian Notation that we all know and love (ahem!)</p><p>Besides, I set up a snippet for it, so I can put the relevant script block into my functions just by typing "L,(CTRL+J)".</p><p>Al</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649356">12</a> by Phillip Senn
		posted on 1/19/2006 at 11:58 PM
		</div>
		<div class="comment_text"><p>The reason why it's such a simple solution is because I'm still trying to learn the syntax of CF.<br>Don't know nothing 'bout no XML.<br>Don't know nothing about H.T.M.L.<br>But I do know 1 and 1 is 2.</p><p>Somebody stop me!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649361">13</a> by Anthony
		posted on 1/20/2006 at 12:18 AM
		</div>
		<div class="comment_text"><p>Don't sell yourself short Phillip, it's a step above where I am.  And I've been doing CF for 3 years.  Slow learner i guess :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649363">14</a> by Phillip Senn
		posted on 1/20/2006 at 2:08 AM
		</div>
		<div class="comment_text"><p>Move over Ray, I'm taking over this thread ;-)<br>OK, the next thing you have to do is add error trapping.</p><p>xxx.cfc contains:<br>&lt;cfcomponent displayname="xxx" output="False"&gt;</p><p>&lt;cffunction name="Init" output="False" returntype="<a href="http://disq.us/url?url=http%3A%2F%2Fcomponents.xxx%3AoKLt19v_OUJr-1xRqw0axOPK7lI&amp;cuid=3321886" rel="nofollow noopener" title="components.xxx">components.xxx</a>"&gt;<br>&lt;cfargument name="DSN" required="yes"&gt;<br>&lt;cfset Variables.DSN = arguments.DSN&gt;<br>&lt;cfreturn this&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="Foo" output="False" returntype="query" hint="I return everything from xxxView"&gt;<br>	&lt;cfargument name="xxxID" type="numeric" required="no"&gt;<br>	&lt;cfset var Condition = ""&gt;<br>	&lt;cfset var rst = ""&gt;<br>	&lt;cftry&gt;<br>		&lt;cfquery name="rst" datasource="#Variables.DSN#"&gt;<br>		SELECT * FROM xxxView<br>		&lt;cfif isDefined("arguments.xxxID") and isValid("integer",arguments.xxxID)&gt;<br>			WHERE xxxID  = #arguments.xxxID#<br>		&lt;/cfif&gt;<br>		&lt;/cfquery&gt;<br>		&lt;cfcatch type="database"&gt;<br>			&lt;cfset rst = QueryNew('Error,Type','Varchar,Varchar')&gt;<br>			&lt;cfset QueryAddRow(rst,1)&gt;<br>			&lt;cfset QuerySetcell(rst,'Error',cfcatch.Detail)&gt;<br>			&lt;cfset QuerySetcell(rst,'Type',cfcatch.Type)&gt;<br>			&lt;cfreturn rst&gt;<br>		&lt;/cfcatch&gt;<br>		&lt;cfcatch type="any"&gt;<br>			&lt;cfset rst = QueryNew('Error,Type','Varchar,Varchar')&gt;<br>			&lt;cfset QueryAddRow(rst,1)&gt;<br>			&lt;cfset QuerySetcell(rst,'Error',cfcatch.Detail)&gt;<br>			&lt;cfset QuerySetcell(rst,'Type',cfcatch.Type)&gt;<br>			&lt;cfrethrow&gt;<br>		&lt;/cfcatch&gt;<br>	&lt;/cftry&gt;<br>	&lt;cfreturn rst&gt;<br>&lt;/cffunction&gt;</p><p>xxx.cfm contains:<br>&lt;cfset xxxObj = CreateObject("Component","<a href="http://disq.us/url?url=http%3A%2F%2FComponents.xxx%3AFzI5Rdx1CDZzG5msafmCgh67I70&amp;cuid=3321886" rel="nofollow noopener" title="Components.xxx">Components.xxx</a>").Init(Application.DSN)&gt;<br>&lt;cfset xxxQry = xxxObj.View1()&gt;<br>&lt;cfif isDefined("xxxQry.Error")&gt;<br>	&lt;cfoutput&gt;<br>	There is a #xxxQry.Type# error:&lt;br /&gt;<br>	#xxxQry.Error#<br>	&lt;/cfoutput&gt;<br>	&lt;cfabort&gt;<br>&lt;/cfif&gt;</p><p>Application.cfc contains:<br>&lt;cffunction name="onApplicationStart" output="false" returntype="void"&gt;<br>   &lt;cfset Application.DSN = "myDatasource"&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649359">15</a> by The Rabid CF Developer
		posted on 1/20/2006 at 2:24 AM
		</div>
		<div class="comment_text"><p>You gotta see this !</p><p>(<a href="http://disq.us/url?url=http%3A%2F%2Frayhorn.contentopia.net%2Fblog%2FE0F3CC4E-1026-0A9B-25E6200E9741DBD8%29%3A17XlNgJobKwOCPuTD7WOTZhOUXA&amp;cuid=3321886" rel="nofollow noopener" title="http://rayhorn.contentopia.net/blog/E0F3CC4E-1026-0A9B-25E6200E9741DBD8)">http://rayhorn.contentopia....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649362">16</a> by Phillip Senn
		posted on 1/20/2006 at 2:39 AM
		</div>
		<div class="comment_text"><p>I'm glad Hal Helms warned me about posts like that at <a href="http://disq.us/url?url=http%3A%2F%2FHelmsandPeters.com%3AnrAVcPBZxq-j6WDEEIiJMnjTHDw&amp;cuid=3321886" rel="nofollow noopener" title="HelmsandPeters.com">HelmsandPeters.com</a>.<br>---------------------------------------------------------<br>The Diagnostic function inside of xxx.cfc will now change to:</p><p>&lt;cffunction name="Diagnostic" access="public" returntype="string" output="True"&gt;<br>	&lt;cfset var result = "OK"&gt;<br>	&lt;cfset var xxxObj = CreateObject("component","<a href="http://disq.us/url?url=http%3A%2F%2FComponents.xxx%3AFzI5Rdx1CDZzG5msafmCgh67I70&amp;cuid=3321886" rel="nofollow noopener" title="Components.xxx">Components.xxx</a>").Init(Variables.DSN)&gt;<br>	&lt;cfset var xxxQry = ''&gt;<br>	&lt;cfset var xxxID = ''&gt;</p><p>Foo<br>	&lt;cfset xxxQry = xxxObj.Foo()&gt;<br>	&lt;cfif isDefined("xxxQry.Error")&gt;<br>		&lt;cfset result="FAILED"&gt;<br>		&lt;cfreturn result&gt;<br>	&lt;cfelseif xxxQry.recordcount EQ 0&gt;<br>		&lt;cfset result="Empty"&gt;<br>		&lt;cfreturn result&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfreturn result&gt;<br>&lt;/cffunction&gt;</p><p>Now the question is whether to treat 0 records as an error or a warning.<br>We have a legend in our department that revolves around the boss giving tours of the data center.<br>Legend has it that he would always point to the monitor, which shows the status of every store on our network and proclaim</p><p>"Green is good, red is bad".</p><p>If you're of the "Green is good, red is bad" philosophy, then you may wan to treat 0 records as bad.<br>Since these diagnostics are individualized, you can decide with each function whether 0 records is a bad thing or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649335">17</a> by Anthony
		posted on 1/20/2006 at 2:45 AM
		</div>
		<div class="comment_text"><p>Oh! Oh!  /me takes notes from Phillip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649336">18</a> by Raymond Camden
		posted on 1/20/2006 at 2:54 AM
		</div>
		<div class="comment_text"><p>Phill, I still say if you have a blog you should post this.If you don't have a blog, do you mind me posting an entry on this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649343">19</a> by Phillip Senn
		posted on 1/20/2006 at 2:59 AM
		</div>
		<div class="comment_text"><p>I don't have a blog yet.<br>I encourage you to post this anywhere as I'm trying to develop a standardized CRUD (Create, Retrieve, Update, Delete) system.<br>Since I'm just learning the cf syntax, I haven't had time to learn frameworks to determine if I'm reinventing the wheel, but that's OK since I have to learn the language anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649347">20</a> by Roger Lancefield
		posted on 1/20/2006 at 4:05 AM
		</div>
		<div class="comment_text"><p>Raymond you are a paragon of self-control and an oak. I know that I shouldn't be giving him the satisfaction, but I take my hat off to you for being able to ignore the bitter, entirely unwarranted and frankly quite pathetic provocation (I mean, you could have been a coward and disabled the comments on your blog while taking public potshots at your 'tormentor' via other people's blogs). The person concerned is now really making a d***head of himself, and anyone performing due diligence on his name from now on will be uncovering this stuff. When in a hole some people keep digging; this guy seems to have rented a JCB.</p><p>Anyway, back to more constructive matters...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649357">21</a> by Raymond Camden
		posted on 1/20/2006 at 8:40 AM
		</div>
		<div class="comment_text"><p>This is a test post. Please ignore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649358">22</a> by Phillip Senn
		posted on 1/20/2006 at 9:48 PM
		</div>
		<div class="comment_text"><p>The next thing to do is to not use cfquery at all!<br>The next step is to use a stored procedure.<br>I can hear what you're thinking: "All I want to do is a simple SELECT statement, and now you've got me doing all this".<br>Read the ColdFusion Developer's Journal article at<br><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion.sys-con.com%2Fread%2F45571.htm%3Avg6vbnh44lyw3XbnMyglmhfonbk&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfusion.sys-con.com/read/45571.htm">http://coldfusion.sys-con.c...</a> to help justify why use a stored procedure instead of cfquery.<br>Here is the SQL Server code:<br>SET QUOTED_IDENTIFIER ON<br>GO<br>if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[xxx]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)<br>DROP TABLE <a href="http://disq.us/url?url=http%3A%2F%2Fdbo.xxx%3AC6fimuH_5hjgtqt7p8lvJPcN3f4&amp;cuid=3321886" rel="nofollow noopener" title="dbo.xxx">dbo.xxx</a><br>GO<br>CREATE TABLE <a href="http://disq.us/url?url=http%3A%2F%2Fdbo.xxx%3AC6fimuH_5hjgtqt7p8lvJPcN3f4&amp;cuid=3321886" rel="nofollow noopener" title="dbo.xxx">dbo.xxx</a>(<br>   xxxID Integer Identity(10001,1) CONSTRAINT xxxID Primary Key Nonclustered,<br>   xxxName Varchar(255) NOT NULL,<br>   xxxDesc Varchar(255) NOT NULL,<br>   xxxSort Int NOT NULL default 0)<br>GO<br>CREATE UNIQUE CLUSTERED INDEX xxxName ON <a href="http://disq.us/url?url=http%3A%2F%2Fdbo.xxx%3AC6fimuH_5hjgtqt7p8lvJPcN3f4&amp;cuid=3321886" rel="nofollow noopener" title="dbo.xxx">dbo.xxx</a>(xxxName)<br>GO<br>INSERT INTO xxx(xxxName,xxxDesc,xxxSort) VALUES ('Raymond Camden','Jedi Master',1)<br>INSERT INTO xxx(xxxName,xxxDesc,xxxSort) VALUES ('Phillip Senn','Padawan Learner',2)<br>if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[xxxView]') and OBJECTPROPERTY(id, N'IsView') = 1)<br>DROP VIEW dbo.xxxView<br>GO<br>CREATE VIEW dbo.xxxView<br>AS<br>SELECT TOP 100 PERCENT * FROM xxx<br>ORDER BY xxxSort<br>/*<br>SELECT * FROM xxxView<br>*/<br>GO</p><p>if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[xxxSelect]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)<br>DROP PROC dbo.xxxSelect<br>GO<br>Create PROC dbo.xxxSelect(<br>@xxxID Integer=0<br>) AS<br>SET NOCOUNT ON<br>DECLARE<br>   @Error Integer<br>IF @xxxID &gt; 0<br>   SELECT * FROM xxxView WHERE xxxID=@xxxID<br>ELSE<br>   SELECT * FROM xxxView<br>SET @Error = @@Error<br>IF @Error &lt;&gt; 0 GOTO ProcErr<br>RETURN 0<br>ProcErr:<br>BEGIN<br>   RAISERROR('There was an error in xxxSelect', 16, 1)<br>   RETURN -100<br>END<br>/*<br>DECLARE @xxxID INTEGER<br>SELECT @xxxID=xxxID FROM xxx<br>EXEC xxxSelect @xxxID<br>EXEC xxxSelect<br>*/<br>GO</p><p>&lt;!---<br>Application.cfc contains:<br>&lt;cffunction name="onApplicationStart" output="false" returntype="void"&gt;<br>   &lt;cfset Application.DSN = "myDataSource"&gt;<br>&lt;/cffunction&gt;<br>xxx.cfc contains:<br>---&gt;<br>&lt;cfcomponent displayname="xxx" output="False"&gt;<br>&lt;cfobject name="DatabaseObj" component="Components.Gendbs"&gt;</p><p>&lt;cffunction name="Init" output="False" returntype="<a href="http://disq.us/url?url=http%3A%2F%2Fcomponents.xxx%3AoKLt19v_OUJr-1xRqw0axOPK7lI&amp;cuid=3321886" rel="nofollow noopener" title="components.xxx">components.xxx</a>"&gt;<br>&lt;cfargument name="DSN" required="yes"&gt;<br>&lt;cfset Variables.DSN = arguments.DSN&gt;<br>&lt;cfreturn this&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="View1" output="False" returntype="query" hint="I return everything from xxxView"&gt;<br>   &lt;cfargument name="xxxID" type="numeric" required="no"&gt;<br>   &lt;cfset var rst = ""&gt;<br>   &lt;cftry&gt;<br>      &lt;cfstoredproc procedure="xxxSelect" datasource="#Variables.DSN#" debug="yes" returncode="yes"&gt;<br>         &lt;cfif isDefined("arguments.xxxID")&gt;<br>            &lt;cfprocparam type="in" cfsqltype="cf_sql_integer" value="#Arguments.xxxID#"&gt;<br>         &lt;/cfif&gt;<br>         &lt;cfprocresult name="rst"&gt;<br>      &lt;/cfstoredproc&gt;<br>      &lt;cfcatch&gt;<br>         &lt;cfset rst = QueryNew('Error,Type','Varchar,Varchar')&gt;<br>         &lt;cfset QueryAddRow(rst,1)&gt;<br>         &lt;cfset QuerySetcell(rst,'Error',cfcatch.Detail)&gt;<br>         &lt;cfset QuerySetcell(rst,'Type',cfcatch.Type)&gt;<br>         &lt;cfreturn rst&gt;<br>      &lt;/cfcatch&gt;<br>   &lt;/cftry&gt;<br>   &lt;cfreturn rst&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="Diagnostic" access="public" returntype="string" output="True"&gt;<br>   &lt;cfset var result = "OK"&gt;<br>   &lt;cfset var xxxObj = CreateObject("component","<a href="http://disq.us/url?url=http%3A%2F%2FComponents.xxx%3AFzI5Rdx1CDZzG5msafmCgh67I70&amp;cuid=3321886" rel="nofollow noopener" title="Components.xxx">Components.xxx</a>").Init(Variables.DSN)&gt;<br>   &lt;cfset var xxxQry = ''&gt;<br>   &lt;cfset var xxxID = ''&gt;</p><p>View1<br>   &lt;cfset xxxQry = xxxObj.View1()&gt;<br>   &lt;cfif isDefined("xxxQry.Error")&gt;<br>      &lt;cfset result="FAILED"&gt;<br>      &lt;cfreturn result&gt;<br>   &lt;cfelseif xxxQry.recordcount EQ 0&gt;<br>      &lt;cfset result="Empty"&gt;<br>   &lt;CFELSE&gt;<br>View1.1<br>      &lt;cfset xxxID = xxxQry.xxxID&gt;<br>      &lt;cfset xxxQry = xxxObj.View1(xxxID)&gt;<br>      &lt;cfif xxxQry.recordcount NEQ 1&gt;<br>         &lt;cfset result="FAILED"&gt;<br>         &lt;cfreturn result&gt;<br>      &lt;/cfif&gt;<br>   &lt;/cfif&gt;</p><p>   &lt;cfreturn result&gt;<br>&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p><p>&lt;!--- <br>xxx.cfm contains:<br>---&gt;<br>&lt;cfset xxxObj = CreateObject("Component","<a href="http://disq.us/url?url=http%3A%2F%2FComponents.xxx%3AFzI5Rdx1CDZzG5msafmCgh67I70&amp;cuid=3321886" rel="nofollow noopener" title="Components.xxx">Components.xxx</a>").Init(Application.DSN)&gt;<br>&lt;cfset xxxQry = xxxObj.View1()&gt;<br>&lt;cfif isDefined("xxxQry.Error")&gt;<br>   &lt;cfoutput&gt;<br>      There is a&amp;nbsp;#xxxQry.Type#&amp;nbsp;error:&lt;br /&gt;<br>      #xxxQry.Error#<br>   &lt;/cfoutput&gt;<br>   &lt;cfabort&gt;<br>&lt;/cfif&gt;<br>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" /&gt;<br>&lt;title&gt;xxx&lt;/title&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>&lt;table&gt;<br>   &lt;tr bgcolor="cornflowerblue"&gt;<br>      &lt;td width="105"&gt;<br>         Sort<br>      &lt;/td&gt;<br>      &lt;td width="152"&gt;<br>         Name<br>      &lt;/td&gt;<br>      &lt;td width="407"&gt;<br>         Desc<br>      &lt;/td&gt;<br>   &lt;/tr&gt;<br>   &lt;cfset Counter = 0&gt;<br>   &lt;cfoutput query="xxxQry"&gt;<br>      &lt;cfset Counter = Counter + 1&gt;<br>      &lt;tr &lt;cfif Counter MOD 2&gt;bgcolor="gainsboro"&lt;/cfif&gt;&gt;<br>         &lt;td&gt;<br>            #xxxSort#<br>         &lt;/td&gt;<br>         &lt;td&gt;<br>            #xxxName#<br>         &lt;/td&gt;<br>         &lt;td&gt;<br>            #xxxDesc#<br>         &lt;/td&gt;<br>      &lt;/tr&gt;<br>   &lt;/cfoutput&gt;<br>&lt;/table&gt;<br>&lt;!--- Diagnostic.cfm contains:<br>&lt;html&gt;<br>&lt;body&gt;<br>&lt;table&gt;<br>   &lt;tr&gt;<br>      &lt;td&gt;xxx:&lt;/td&gt;<br>      &lt;td&gt;<br>         &lt;cfset Obj = CreateObject("component","<a href="http://disq.us/url?url=http%3A%2F%2Fcomponents.xxx%3AoKLt19v_OUJr-1xRqw0axOPK7lI&amp;cuid=3321886" rel="nofollow noopener" title="components.xxx">components.xxx</a>").Init(Application.DSN)&gt;<br>         &lt;cfset Diag = Obj.Diagnostic()&gt;<br>         &lt;cfoutput&gt;#Diag#&lt;/cfoutput&gt;<br>      &lt;/td&gt;<br>   &lt;/tr&gt;<br>&lt;/table&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;<br>---&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649360">23</a> by Seth Petry-Johnson
		posted on 2/4/2006 at 4:07 AM
		</div>
		<div class="comment_text"><p>So I know this entry is a few weeks old by now, but I have completed version 1.0 of a "var scope checker" like I briefly discussed in my earlier comments.  This is a single CFC that reads a file or directory of files, analyzes all &lt;cffunction&gt; blocks, and returns an array of information about local variables that do not appear to be var-scoped.</p><p>Even though I am VERY careful about var-scoping, I ran this tool against some recent CFCs I built at work and was surprised to find a few loop indices had slipped through the cracks!</p><p>I am going to be setting up some CFUnit tests to run the var checker as part of my unit testing, I think that will help guard against non-var-scoped variables being introduced during code maintenance.</p><p>If anyone out there is interested (or even still reading this thread) check out the var scope checker at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.petry-johnson.com%2Fblog%2Findex.cfm%3Fevent%3DviewEntry%26entryId%3D5%3AHNrbpgpEj7tA8y82gyPDRHk7Row&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petry-johnson.com/blog/index.cfm?event=viewEntry&amp;entryId=5">http://www.petry-johnson.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649366">24</a> by Phillip Senn
		posted on 2/8/2006 at 9:14 PM
		</div>
		<div class="comment_text"><p>Seth,</p><p>Are you subscribed to 'CFCDev@cfczone.org'?<br>I know they would be interested in your var scope checker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649365">25</a> by Seth Petry-Johnson
		posted on 2/9/2006 at 12:18 AM
		</div>
		<div class="comment_text"><p>Phillip,</p><p>Thanks for your note!  I am subscribed to that list and was planning on announcing the var scope checker once I fixed a few minor issues.  For instance, a very helpful reader pointed out to me that the checker gives false positives when a var-scoped structure is accessed via array notation (like myLocalStruct["foo"]) instead of dot notation (<a href="http://disq.us/url?url=http%3A%2F%2FmyLocalStruct.foo%3AF5VXI8fQXShxUbdJzi4lBoh2dPI&amp;cuid=3321886" rel="nofollow noopener" title="myLocalStruct.foo">myLocalStruct.foo</a>).</p><p>I'd like to fix that and a few other minor things before inviting the entire CFC dev community to pick apart my work :)</p></div>
	</div>
</div>
		