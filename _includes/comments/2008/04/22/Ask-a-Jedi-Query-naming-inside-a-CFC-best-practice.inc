
<div class="comment" id="c_1713680106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680106">1</a> by Hem Talreja
		posted on 4/22/2008 at 6:04 PM
		</div>
		<div class="comment_text"><p>There are a few things you need to be considerate about.</p><p>a. Do NOT forget to local scope the variable.</p><p>b. It helps during debug to have individual named queries.</p><p>You will receive a debug log with the same query name then it's really hell trying to debug it for 3000+ page application.</p><p>-Hem</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680121">2</a> by Raymond Camden
		posted on 4/22/2008 at 6:12 PM
		</div>
		<div class="comment_text"><p>I did mentioned A) above, but B) is a good point I had not considered!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680120">3</a> by Michael
		posted on 4/22/2008 at 6:23 PM
		</div>
		<div class="comment_text"><p>You forgot a rather important one even thought it doesn't have to do with the question.</p><p>c) Always I mean always use cfqueryparam (unless it isn't possible :-) )</p><p>This will increase the speed of your SQL queries, because most DBMS will cache and optimize Parameterized queries.</p><p>This will also increase your ability to avoid SQL injection attacks.  These are bad things which you don't want happening to your site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680119">4</a> by Gary Funk
		posted on 4/22/2008 at 6:37 PM
		</div>
		<div class="comment_text"><p>@ Ray: I dont realy do SELECT *. I just didn't want to type a bunch of fields in the exmple.</p><p>@ Mivhael: That is one of the items I am changing as I go through all my CFCs. I didn't know about the speed increase. Thanks.</p><p>@ Hem: Pint B is well taken. I will remember that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680098">5</a> by Raymond Camden
		posted on 4/22/2008 at 6:42 PM
		</div>
		<div class="comment_text"><p>Gary - hope you know I was just poking fun at ya. ;) I figured as much - but it's critical for readers to keep it in mind, ditto for cfqueryparam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680104">6</a> by John Farrar
		posted on 4/22/2008 at 6:58 PM
		</div>
		<div class="comment_text"><p>Nothing to worry about... but for me I like to start my query results with "rs"???? This is because the query returns a "record set". It has amused me that we call the results of the query a "query". Hey... we all still know what it means so it's not a big deal in the long range but a matter of personal semantics for me.</p><p>I agree on the three points. Yet, IMO if you have good unit testing (and someone should do some work here) we could be testing our data objects. It is my guess this is the least tested aspect of CFCs or CF code and perhaps one of the most dangerous to have fail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680097">7</a> by Joe Mastroianni
		posted on 4/22/2008 at 7:07 PM
		</div>
		<div class="comment_text"><p>One thing I sometimes run into a problem with is if you happen to name the query the same as the function which encapsulates it. i used to work but now in certain situations it throws an error.</p><p>I've taken to naming simple queries the function name and appending Qry to the end.</p><p>So function GetUsers would return query GetUsersQry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680100">8</a> by Rich Rein
		posted on 4/22/2008 at 7:27 PM
		</div>
		<div class="comment_text"><p>I have seen this enough times, so now I am finally speaking of (to give the other side of the argument)...</p><p>On the topic of cfqueryparam - while it is a very easy way to ensure data validity and prevent sql injection attacks, I would argue that it is not always the best thing to do performance-wise.  If you run the same query over and over (such as a login query to validate a user entering your site), it can be a good thing.  When used all over the place (on a fairly large site, against a db that serves a lot more than your site - or in our case, both), it can actually have a negative affect on performance.  If the query is not already cached, sql server (what my current experience is with, haven't tried this out on other DBMSs) will not find the query in memory, and will essentially run the query twice - once to build the plan and cache it, and a second time to actually give you your results back.  Because our databases see lots of volume (both thanks to many differing queries from our sites, and all of the other applications that use that same DB), even our login query rarely runs enough times in succession to take advantage of the caching and bind variables.</p><p>So as always - find a way to avoid sql injection attacks, but you have to ask test your application and see if cfqueryparam is the right answer for you - don't just assume that it is because it is easy to use and promises to speed your application up!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680101">9</a> by Gary Fenton
		posted on 4/22/2008 at 7:28 PM
		</div>
		<div class="comment_text"><p>When was var introduced in CFML? Does it have the same meaning as it does in Javascript? i.e...</p><p>Var in a function = local use in that function only.<br>Var outside a function = global.<br>Not using var in a function = global.<br>Not using var outside a function = global.</p><p>Is that about right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680103">10</a> by Todd Rafferty
		posted on 4/22/2008 at 7:29 PM
		</div>
		<div class="comment_text"><p>If you use "getData" as the name, then debugging becomes a little tricky because... well, everything is named "getData" which one were you trying to debug again?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680102">11</a> by Raymond Camden
		posted on 4/22/2008 at 7:32 PM
		</div>
		<div class="comment_text"><p>@Gary: Added in CF5 when UDFs were added. It must be in the UDF. It must be the first line (or the first N for N var scopes) AFTER any argument tag. You _can_ though include comments before var statements.</p><p>If you don't var, any value made is global. If it is a UDF in a pge, it 'leaks' to the page Variables scope. In a CFC, it 'leaks' to the CFC Variables scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680099">12</a> by Raymond Camden
		posted on 4/22/2008 at 7:32 PM
		</div>
		<div class="comment_text"><p>@Todd - yep - Hem made this point too - and it does make sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680105">13</a> by Gary Funk
		posted on 4/22/2008 at 7:57 PM
		</div>
		<div class="comment_text"><p>@Ray: I know you love to poke fun. I have also learned that even if you think you want to use *, yoiu really shold not.</p><p>@Everyone: I want to thank everyone for the great comments. A lot of good ideas and much for all of Ray's readers to think about.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680109">14</a> by Nolan Erck
		posted on 4/22/2008 at 8:08 PM
		</div>
		<div class="comment_text"><p>"I will typically use "q" to make it short and sweet."</p><p>...which might be okay for queries that are just static lists, ala "select * from state_names" for a list of the 50 states.</p><p>However what happens when that query gets refactored to do a slightly different job? or when a new programmer comes onto the project? Now, the short and sweet "q" is now the potential point of confusion.</p><p>For example...</p><p>What does this query DO? Well, it used to return all 50 states, but now there's this JOIN clause that i don't quite understand.  If the query is renamed "getStatesWith..." it's more intuitive. "q" may leave the junior programmer unproductive for longer than necessary.</p><p>Just 2 cents.</p><p>Signed,<br>the variable naming nazi. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680107">15</a> by Calvin
		posted on 4/22/2008 at 9:13 PM
		</div>
		<div class="comment_text"><p>The value of variable names isn't in how many letters you have to type, but in how understandable it is to read.</p><p>The price you save with keystrokes is often far outweighed by the price you pay in keeping it short and potentially reducing the readability of the code.</p><p>The variable name, (or method or class or ...) is after all, read far more times than it is written.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680110">16</a> by tony petruzzi
		posted on 4/22/2008 at 10:24 PM
		</div>
		<div class="comment_text"><p>always declare your queries separately in functions. the main reason is because some built in CF query function will not work if you do local.myquery such as ValueList(). also it's very hard to do QoQ when having a local.myquery variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680108">17</a> by William FISK
		posted on 4/22/2008 at 11:40 PM
		</div>
		<div class="comment_text"><p>As suggested above I put each cfquery into an individual cffunction.  I name them "result" and then at the end of the function I cfreturn result.  It's very clear and saves thinking of a name for each query.  (Anyway the name of the cffunction explains the query).</p><p>I liked this approach until I realised that cfquery also has a parmeter result, which can be nice for logging returing a struct containing execution time amongst other things.  But I've kept with result as the name of the query and added result="queryReport".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680111">18</a> by David McGuigan
		posted on 4/23/2008 at 9:16 AM
		</div>
		<div class="comment_text"><p>Ray said: "I did mentioned A) above, but B) is a good point I had not considered!"</p><p>That's because debugging is for normal, humanoid developers. Unstoppable divas like you and I, that never write any code with any errors ever, don't really ever have to deal with anything resembling "debugging".</p><p>As far as the whole "never use * in select statements" rule...</p><p>I don't believe it. I think it's an urban legend. A farce. A rumor. A bold-faced lie.</p><p>I don't see why any and every database engine wouldn't keep the complete, updated-on-every-change, ordered list of field names FOR EVERY SINGLE TABLE stored in memory as a simple string ready for swap-in at the first sight of a *.</p><p>Relatively speaking, that is free of charge performance wise. Swapping the list "idUser, firstName, lastName, email, password" in for * should take 0ms. If not, it might be time to get a better server.</p><p>I honestly cannot in good faith believe that a RDBMS, as incredibly performant and well-engineered as they are, wouldn't implement such a simple, effective mechanism. Just plopping the column list into the pre-compiled SQL as if the user had typed it himself.</p><p>So someone, please prove it. An article, some benchmarks, anything. I'm totally curious. Because every time I hear "You should never use select *" it sounds like an April Fool's joke.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680112">19</a> by Nolan Erck
		posted on 4/23/2008 at 9:57 AM
		</div>
		<div class="comment_text"><p>@David</p><p>I see your point -- and I've seen at least one test on the web somewhere (though of course I don't have a URL handy right now) that seemed to "prove" that SELECT * wasn't any worse than selecting all the columns one by one.</p><p>Let's say that all the major RDBMS have implemented the optimization you mentioned above, so that becomes a moot point.</p><p>I think "don't use select *" could still be a good guideline because it would prevent the database from returning everying in a 20 column table, if all I really needed was 2 or 3 columns worth of data.</p><p>.02</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680114">20</a> by David McGuigan
		posted on 4/23/2008 at 10:48 AM
		</div>
		<div class="comment_text"><p>Nolan:<br>I totally agree with the approach that if you only want x of the total columns of a dataset you shouldn't use *, especially if you're working with "large" datasets or have your database on a separate server where network transfer can be a bottleneck.</p><p>But, I don't think that that's what the elders are referring to when they hearken "Never use * my children, NEVER".</p><p>In my opinion, the benefits of USING * are unanimous. It's infinitely more readable. Conciser. Future-proof (if you add, remove, or rename columns from a table, your code doesn't even stop working for coffee). Fun. Cool. Hip. Trendy. * helps you lose weight and can take the place of most anti-depressants.</p><p>I'm really excited about what you said. If you find that benchmark please post it, because I WANT TO BELIEVE IT.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680113">21</a> by Gary Fenton
		posted on 4/24/2008 at 2:33 AM
		</div>
		<div class="comment_text"><p>A different argument for not using select * is that by naming the columns you want you're keeping a very clear record of which fields you're getting from the query. There are reasons why this is good.<br>1) Quick reference to what cols you've asked for - for you and new programmers working the project.<br>2) When you've coded your script it's easy to review what you've asked for and what you end up using and remove redundant col names, thus remove uncessary data returned from the db.<br>3) If more cols are added to the query at a later date your query will be returning extra uncessary data (which has a resource cost).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680115">22</a> by Allen
		posted on 4/24/2008 at 2:48 AM
		</div>
		<div class="comment_text"><p>David, you're thinking too small in terms of select *.  it's not just about how much you stress the database but how much you're unnecessarily stressing the network &amp; the ColdFusion server.  You've got to move all that data back and forth.  And then CF's gotta work with it.  So with scale it becomes more and more of an issue.</p><p>I also think it's sloppy coding.  In a way your code should be your documentation.  You should be able to work on some code 3 years from now, something that I wrote, and I know that I specifically meant to grab A, B, and C.  If it's select *, did columns D, E, F exist at the time too?  So did I just not put them in there and the users gave up on reporting the issue?  Or were those added later &amp; no one said "hey, when we added this hear we should've added it over here too but didn't."  I know, it seems trite but it's one of those things.  For the few of us who still don't have dishwashers, it's like do you wash your dishes every night or do you let them pile up for a week.  The world doesn't end but it's easier to keep it clean in small increments.</p><p>Maybe another way of stating it is do you believe in quick and dirty code?  Other than prototyping I believe in code being quick but never dirty.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680116">23</a> by Brian
		posted on 4/24/2008 at 5:01 PM
		</div>
		<div class="comment_text"><p>It should be noted in his original example the select * is from a query of query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680117">24</a> by Raymond Camden
		posted on 4/24/2008 at 5:14 PM
		</div>
		<div class="comment_text"><p>Brian, good point. I use select * in QoQ all the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680228">25</a> by Nathan Mische
		posted on 4/24/2008 at 5:54 PM
		</div>
		<div class="comment_text"><p>There are very good reasons not to use SELECT * with cfqueryparam: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.mischefamily.com%2Fnathan%2Findex.cfm%2F2006%2F9%2F25%2FSELECT--and-cfqueryparam%3ApXfEKCmRsA2QEb0ZfzxUvU-QVfg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mischefamily.com/nathan/index.cfm/2006/9/25/SELECT--and-cfqueryparam">http://www.mischefamily.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680240">26</a> by Adam Cameron
		posted on 4/24/2008 at 6:04 PM
		</div>
		<div class="comment_text"><p>Interesting thread!  I have found 2p, so I am going to offer it.</p><p>@Gary<br>I always use a descriptive name for my queries (err... *record sets* ;-), mostly for the debugging point someone else raised, but also simply because it's been drummed into me to always use descriptive variable names.  In a CFC method, I try to corelate the query name to the method name, if poss: getUser() might have a qUser query in it.</p><p>@John<br>Good point re "record set" vs "query".  I like it.</p><p>@Rich<br>My understanding (which could be wrong, and please tell me if I am) is that the queries are *always* executed twice on the first hit; once for the compile/validation, once for the execution.  And for every non-parameterised query, you still get the double hit.  If you've parameterised your queries you're increasing the chances of the query not needing the first hit the next time it's reused.</p><p>@David<br>My problem with SELECT * is that I seldom need *all* the columns from a table (or a few joined tables), so it's seldom appropriate to use SELECT *.  One occasions that it is appropriate, I make sure that I annotate the SQL with a comment to the effect that "yes, I am doing SELECT * here on purpose".</p><p>Even when I usually think I want all columns from the record set I'll still hand-code the column names, as it encourages me to think through whether I actually need to use that column in that given situation, and it also future-proofs the code from subsequent LOB columns being added to the mix which cause unnecessary and accidental data transfer because it's being included in the SELECT *.</p><p>Basically if I know I want all the columns, whatever they are, and I know I will always want all the columns, whatever they might be, then I'll use SELECT *.</p><p>So not very often then.</p><p>One time I have found * to be faster than COLUMN name is with SELECT COUNT(*) FROM TABLE.  This was on Oracle 9i, anyhow.  I have not researched this throughly, it's just something we noticed.</p><p>@myself<br>Shut up.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680239">27</a> by Rich Rein
		posted on 4/24/2008 at 6:13 PM
		</div>
		<div class="comment_text"><p>@Adam<br>In certain cases you could be right, but specific to our use with MX7 and SQL Server 2000 - we would notice a significant double hit on queries using cfqueryparam, and half the time for queries not using it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680238">28</a> by Gary Funk
		posted on 4/24/2008 at 6:56 PM
		</div>
		<div class="comment_text"><p>@Everyone: Thanks for ALL the comments. Thisi s why I like to ask the Jedi. He will post the question and them everyone gets to add their thoughts.</p><p>Should we tell Ray he really has no control or let him keep thinking he does?</p><p>Thanks Ray, for all you do for the CF community.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680237">29</a> by Raymond Camden
		posted on 4/24/2008 at 7:08 PM
		</div>
		<div class="comment_text"><p>I never thought I was in charge. Ever. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680241">30</a> by Allen
		posted on 4/24/2008 at 7:28 PM
		</div>
		<div class="comment_text"><p>Just because someone is a code diva doesn't mean they're a blog diva.  :)</p></div>
	</div>
</div>
		