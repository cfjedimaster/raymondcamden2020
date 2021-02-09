
<div class="comment" id="c_1713662157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662157">1</a> by Brian Rinaldi
		posted on 2/10/2007 at 2:12 AM
		</div>
		<div class="comment_text"><p>I am not certain I am total agreement with you here. I agree that it isn't preferable if you are more advanced, but I think for beginners this is quite ok. In fact, in a recent (as yet unpublished...coming soon) article I wrote I did just that (actually I used a maxrows=1) because the audience is beginner CF developers. The reason? It allows you to output the column data within the cfoutput block without scoping the names within the query. So, cfoutput query="qryNames" could have simple #firstName# and #lastName# and not qryNames.firstName and so on.</p><p>Generally speaking I recommend adding scopes to everything and so I don't actually practice this in my own code, but I do think it is acceptable as a beginner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662155">2</a> by Steve Bryant
		posted on 2/10/2007 at 2:12 AM
		</div>
		<div class="comment_text"><p>I'll confess that I do this from time to time. I know it is kind of bad form, but it comes from a desire to have a "with" operator.</p><p>I should probably at least add a comment when I do it to clarify why.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662160">3</a> by Phillip Senn
		posted on 2/10/2007 at 2:28 AM
		</div>
		<div class="comment_text"><p>A beginner might think that qry.myName might give you a structure or an array of myName values, not the value of the myName field in the first row.</p><p>I need to be reassured that qry.myName doesn't imply looping.</p><p>Ray, didn't you do a blog entry a long time ago about referencing various rows using subscripts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662164">4</a> by Cutter
		posted on 2/10/2007 at 3:05 AM
		</div>
		<div class="comment_text"><p>Yes Ray, total agreement on this one. Placing unnecessary overhead on the backend and making some very confusing code. And no, I don't think it's ok for a n00b to do it, as it gets them started with bad habits. Break 'em now!</p><p>Oh yeah, scope your vars (this is more for everyone else than Ray, but you know that)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662165">5</a> by Ben Nadel
		posted on 2/10/2007 at 3:15 AM
		</div>
		<div class="comment_text"><p>Wait, wait, I have an even better one :) I have seen things were people use a query that has a join (think publication to authors) such that the resultant query has 10 rows (for 10 authors) with the publication name repeated 10 times.</p><p>Then, to output the main publication data, they have a CFOutput query with maxrows set to "1"... then, when they have to output all authors, they simply CFOutput over the whole query.</p><p>To me, this seems like a misuse of the CFOutput tag :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662162">6</a> by Peter Bell
		posted on 2/10/2007 at 3:17 AM
		</div>
		<div class="comment_text"><p>Yeah, got to admit I was guilty of this back in the days I used CF Output rather than beans and collection objects. I'm not even 100% convinced it was wrong, although I don't know that I'd argue the point.</p><p>The counter argument would be you are looping over a recordset of n-records for the case were n=1. In fact, if you want to support multiple entry forms so the same form can (using a field name list, a loop, a query and a switch statement) allow you to do anything from adding all the fields for one product to editing title and price for 12 just by passing a field name list and a recordset containing n records (where n could equal 1) it is actually quite a nice solution. I'm not convinced that is wrong . . .</p><p>Interesting post though . . .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662161">7</a> by Raymond Camden
		posted on 2/10/2007 at 3:19 AM
		</div>
		<div class="comment_text"><p>PSenn: I did do an entry on that I think. Hopefully a developer would learn the basics of getting stuff out of a query, whether row 1 or N. Hopefully. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662166">8</a> by Geoff
		posted on 2/10/2007 at 3:51 AM
		</div>
		<div class="comment_text"><p>Is this considered the best form for single recordset query output then?</p><p>&lt;cfoutput&gt;<br>#qry.myName[1]#<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662168">9</a> by Raymond Camden
		posted on 2/10/2007 at 3:56 AM
		</div>
		<div class="comment_text"><p>I do:</p><p>&lt;cfoutput&gt;<br>#<a href="http://disq.us/url?url=http%3A%2F%2Fqry.name%3ATo9yRA6aTfU-ODba-P9KbUt5VOE&amp;cuid=3321886" rel="nofollow noopener" title="qry.name">qry.name</a>#<br>&lt;/cfoutput&gt;</p><p>1 is implied when leaving off the row indfex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662159">10</a> by doug
		posted on 2/10/2007 at 5:13 AM
		</div>
		<div class="comment_text"><p>What about using the maxrows attribute (both the cfquery and the cfoutput)=1 as in this case.  Wouldn't it then be evident what the purpose of the template is?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662158">11</a> by Ken Dunnington
		posted on 2/10/2007 at 6:24 AM
		</div>
		<div class="comment_text"><p>I think Peter makes a good point in that if the purpose of outputting the query is to display n records (even if n=1), looping over it is the right course. It's when the end purpose is to access 1 and only 1 record that using cfloop becomes a bad practice. I tend to think of aggregate data in a different way than singular data. I can't quite solidify what the difference is in my mind, but I do see them as different beasts and I think that's the crux of it - if you're going to treat the result of a query as a singular object, you should do so all the way, IMHO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662167">12</a> by Gus
		posted on 2/10/2007 at 7:09 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I disagree with you that this isn't the proper use of the tag. This usage does exactly what the tag is meant to do. It outputs the result of the query.</p><p>What you are suggesting is simply a style preference, and has no bearing on the quality of code.  If using cfoutput in this case causes confusion over what the template is meant to do, I would suggest there are bigger issues than a simple stylistic preference.</p><p>I can't imagine that a template called editUser.cfm, that displays the output from a query like "GET fName,lName FROM  USERS WHERE userID = 123" and uses CFOUTPUT QUERY='GETUSER' would be any less confusing than GETUSER.fName .</p><p>Especially to a Jedi Master!</p><p>There is nothing wrong with doing it the way you suggest.  But using "CFOUTPUT QUERY='GETUSER'" is equally correct.</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662163">13</a> by Dave
		posted on 2/10/2007 at 1:20 PM
		</div>
		<div class="comment_text"><p>While I agree with Ray to a point I don't think that it is a total misuse of the tag.  The help files on the tag even show it looping over a query result.</p><p>What I think is more important is that is an inefficient use of the tag.  By it's nature it will loop over a result set when given a query.  This adds excess overhead to processing when there is only 1 record to output.  To make your application lean and mean you should assist the processing when ever possible.  You can do this by not forcing the code to loop when there is only one record.</p><p>I personally think it is a lot to do with the quality of the code.  The more efficient the code the better the application.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662173">14</a> by Raymond Camden
		posted on 2/10/2007 at 6:30 PM
		</div>
		<div class="comment_text"><p>Ken: I think that is my main point. The coders intent was to display an edit form for ONE record, not N. So to me, cfoutput query= isn't appropriate.</p><p>Gus: I _did_ say this was just my opinion. I could have been more clear though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662170">15</a> by Steve Walker
		posted on 2/10/2007 at 8:45 PM
		</div>
		<div class="comment_text"><p>It makes so much sense once it is explained.  I think this is why the multi-volume set of books for CF8 that Ben is talking about (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.forta.com%2Fblog%2Findex.cfm%2F2007%2F1%2F26%2FBook-Publishing-Dilemma-Input-Requested%29%3AvCOmo1qXgtz-prq09C990J85C2g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.forta.com/blog/index.cfm/2007/1/26/Book-Publishing-Dilemma-Input-Requested)">http://www.forta.com/blog/i...</a> is vital and why real-world examples and explanations are so important.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662172">16</a> by Peter Bell
		posted on 2/10/2007 at 8:50 PM
		</div>
		<div class="comment_text"><p>Dave said:</p><p>"I personally think it is a lot to do with the quality of the code. The more efficient the code the better the application."</p><p>Gotta take issue with that. The more *READABLE* the code is, the better the application. As anyone who's ever tried to decypher a cryptic algorithm will agree, efficient from a performance perspective and readable from a programmer perspective are very different things and making code more performant at the cost of readability should be a last step taken when no other course exists to solve a proven bottleneck (based on load testing).</p><p>Cycles are way cheaper than coders.</p><p>(Responding to general comment, not specific situation - I don't see either approach having a substantial downside in terms of readability and while I'm not sure I agree with Ray that the cfoutput suggests that the loop over n elements inherently means that n &gt; 1, I can see how someone could reasonably take that position.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662171">17</a> by Dave
		posted on 2/10/2007 at 10:01 PM
		</div>
		<div class="comment_text"><p>The goal of any programmer is to make a quality application.  Part if that is making the application efficient.  Writing efficient code is what we should all strive to do. The issue of readability can be resolved with commenting.</p><p>What makes an application better is how good it runs. The server could care less how readable the the application is.  It is the application that runs the code no the coder.</p><p>Performance of an application should never take a back seat to someone other that the coder being able to read the code.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662169">18</a> by Raymond Camden
		posted on 2/10/2007 at 10:09 PM
		</div>
		<div class="comment_text"><p>Dave, can you clarify this:</p><p>"Performance of an application should never take a back seat to someone other that the coder being able to read the code. "</p><p>Are you saying performance should not take a back seat to anything OTHER than readability?</p><p>If so I agree. I would not write code to gain 0.1% in speed if it takes twice as long for another developer to read/update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662175">19</a> by Sammy Larbi
		posted on 2/10/2007 at 11:16 PM
		</div>
		<div class="comment_text"><p>Gus, you mention "What you are suggesting is simply a style preference."</p><p>I don't think it's just a style preference.  It's an intent preference (do you try to be explicit or cryptic in what you want your code to do?).  By using a looping construct, you are implying that you expect that it is possible to loop over many records, and that is confusing.</p><p>It may be equally correct in the fact that it works, but it is not equally understandable.</p><p>If you use the maxrows attribute, and have it set to one, then the intent is clear.</p><p>-------------</p><p>With all that said, I don't tend to use cfoutput to loop over queries.  It seems strange to me, like it is not doing its job.  I prefer to have a cfoutput and a cfloop query="suchandsuch".  Why in the world would anyone ever think that cfoutput would be or could be looping over a recordset (if they didn't already know it could)?  This doesn't exactly follow the principle of least surprise, in my opinion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662177">20</a> by Dave
		posted on 2/10/2007 at 11:21 PM
		</div>
		<div class="comment_text"><p>What I mean is that my #1 goal when writing an application is to make it as fast an efficient as possible.  Readability is the last thing on my mind.</p><p>However, there is a caveat to this.  I don't write your average applications.  In the applications I work on, gaining .1% is the difference between night and day.  If I have to take 10 minutes to explain some code to a team member so that my applications run that much faster than that is a necessary evil.</p><p>I guess you seriously have to weigh the difference between efficiency and readability.  Readability can usually be resolved by commenting.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662176">21</a> by Sammy Larbi
		posted on 2/10/2007 at 11:39 PM
		</div>
		<div class="comment_text"><p>But, the people who have the nightmare to maintain the unreadable code, and the business people who have to pay them extra to deal with that nightmare might care.  Especially if they could have the readability for the price of an extra  server!</p><p>I'll tell you who doesn't care though - the computer.</p><p>Anyway, I guess if you are building apps that truly need it, then that's what you gotta do.  But, I don't think there are many web apps built with CF that would fall into that category, so it becomes irrelevant with cfoutput query="something"</p><p>(Can you think of any?  I'd love to know of some, truly, but I can't think of any)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662174">22</a> by Peter Bell
		posted on 2/11/2007 at 12:42 AM
		</div>
		<div class="comment_text"><p>Hi Dave,</p><p>+1 to what Sammy said. There is no question that there are some special cases where performance has to trump readability, and it may well be that all of your solutions fit within one of those special cases, but I would say if you talk to any top programmer they would agree that the purpose of well written code is primarily to be readable to other developers while also happening to be compilable/interpretable by the computer.</p><p>I've even seen it suggested that excessive commenting is a code smell because if you use literate programming and design your code and naming for optimal readability then there shouldn't be much left to explain in comments.</p><p>And Ray, it seems to me that Dave is saying that performance is MORE important than readability and that "If I have to take 10 minutes to explain some code to a team member so that my applications run that much faster than that is a necessary evil.".</p><p>I'm not saying Dave isn't in such a position with all his projects (although it does make me wonder why he doesn't add more servers or use a fundamentally more performant language if performance is so much more valuable to his use cases than programmer time), but I would strongly suggest that for the vast majority of use cases readability should be treated as way more important than performance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662178">23</a> by doug
		posted on 2/11/2007 at 12:57 AM
		</div>
		<div class="comment_text"><p>I believe, through formal education and requirements experience, that code should be self-documenting, code should include as much commenting as can be and should be included, and that a separate external document (.pdf, .doc, whatever) should be drafted throughout the development process and provided as part of a project deliverable.  Conversation has centered on discussion/clarification with team members, but the true issue is when the author's six month contract is up or employment ends and the maintenance of the project is handed off to developers who never took part in the project development.  In many cases it may be less costly to ground-up a project rather than reconstruct poorly written and/or documented code - very costly on the back-end compared to up front investment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662180">24</a> by Dave
		posted on 2/11/2007 at 1:48 AM
		</div>
		<div class="comment_text"><p>Peter,</p><p>  Don't get me wrong.  I completely believe that code should be readable.  No, I am no contradicting myself it is a fact. But there has to be a little give and take.  As well as knowing when to put performance before first.</p><p>I do have 2 completely different coding styles.  One is for my job where the #1 priority is get every ounce of power you can out of the app and shave milliseconds where ever possible. The other is for other projects that get far less traffic.  While doing both styles I key in on performance where as the latter is a little less advanced of a style.</p><p>However, I do not understand why it seems that performance is not in the forefront of everyones mind.  I write my code to be understandable and readable. But, I don't write code that a newbee will understand very well.  This probably a product of 11+ years of development experience.  I have learned ways to squeeze extra performance out of apps where it was thought otherwise.</p><p>I apologize but I can not go into the nature of my job or the applications that I work on. lets just say that if you knew you would not be asking.  Lets just say that my development enviornment is better than most peoples production systems.</p><p>As for a more "fundamentally more performant language".  You would be amazed at what you can do with CF when you try.  I have written apps in cf that other languages could never touch in overall speed or development time.</p><p>Look, if you want to write something that everyone can read an understand while sacrificing performance that is your deal.  Personally, I want my users to have the best experience possible.  That entails writing applications that are as high performance as possible.  If at the end of the day it costs me some development time down the road then so be it.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662185">25</a> by Peter Bell
		posted on 2/11/2007 at 3:08 AM
		</div>
		<div class="comment_text"><p>Hi Dave,</p><p>Whatever works for your use case!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662188">26</a> by PaulKD
		posted on 2/12/2007 at 11:30 PM
		</div>
		<div class="comment_text"><p>If you know it will always be a single record, I don't see how there can be any additional overhead.</p><p>Using the cfoutput with query= presumably scopes the variables for you also?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662186">27</a> by Mr Pibb
		posted on 2/13/2007 at 12:47 AM
		</div>
		<div class="comment_text"><p>Any programmer that doesn't have time to write comments in his/her code shouldn't be programming. Certainly if they are working on as big of a project as Dave is implying.<br>Sounds like he doesn't like to write comments just b/c.</p><p>Makes it more difficulty for those of us that have to play cleanup later for him.</p><p>My 2 cents.</p><p>Pibb et al</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662183">28</a> by Dave Ferguson
		posted on 2/13/2007 at 2:02 AM
		</div>
		<div class="comment_text"><p>I don't recall saying that I don't like to do commenting. If you have to write highly tuned and complex code you need to comment it.   Otherwise it would be a nightmare for others to decipher later.  But you don't need to comment every ounce of code.  You can write code that is not only readable but tuned as well.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662187">29</a> by David Stockton
		posted on 2/13/2007 at 7:03 PM
		</div>
		<div class="comment_text"><p>I think you've opened a can of works here Ray!</p><p>I prefer to use &lt;cfloop /&gt; when I want to display more than one query. Sure &lt;cfoutput /&gt; can loop over it for you but it reads a lot nicer if you have cfloop in there. Obviously when grouping gets involved you're back to the cfoutput method.</p><p>As you say though, for me if it's only ever going to be 1 and you're not using objects then &lt;cfoutput&gt;#qry.colName#&lt;/cfoutput&gt; is my preference.</p><p>D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662189">30</a> by Matt Newby
		posted on 2/14/2007 at 2:21 AM
		</div>
		<div class="comment_text"><p>I inherited an application that uses this "technique" extensively.  My problem is the original author did, for instance, three queries that were supposed to return one row each, then he had three successive cfoutputs, and inside the first one he had the TR tag and a couple TDs, inside the second one he had a couple TDs, and in the third one, he had a couple more TDs and the closing TR.  He also had a serious disagreement with the DBAs while building this and managed to put together an application with about 30 tables and NO foreign key relationships.  The only way data in different tables was "related" was if the application thought it was.  So, after a few years of running, we end up in a situation where one of the queries has an unexpected number of records and suddenly, the view is totally unreadable because now I've got table rows that aren't terminated properly (third query returned no records), or other malformed HTML issues (first query returned two records, so I've got two open table rows and only one close tag).</p><p>Every page on the site seems to have some variation on this theme.  My advice, DO NOT cfoutput over a query unless you're intentionally looping over the results AND make sure that whatever you put in the cfoutput will make sense in a browser when it returns zero or more records.</p><p>And don't fight with the DBA - they really are there to keep you from doing stupid things.</p><p>-matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662184">31</a> by Phillip Senn
		posted on 2/16/2007 at 8:33 PM
		</div>
		<div class="comment_text"><p>More thoughts:</p><p>1. &lt;cfoutput query=""&gt; will skip any assignment statements if there are zero rows, which is a bad thing.</p><p>2. &lt;cfoutput query=""&gt; will produce multiple rows if the data explodes into one-to-many because of a join, which is a good thing because it might show you where your data model is wrong.</p><p>3. In VB, there is a "with" operator:<br>With qry<br>   A = .A<br>   B = .B<br>   C = .C<br>End With</p><p>So it's understandable that someone coming over from VB would use &lt;cfoutput query=""&gt; for the same syntax.  I think in VB it's actually encouraged because it's faster.</p><p>4. So, is the conclusion then that in CF we should use the following syntax?<br>&lt;cfset Variables.A = qry.A&gt;<br>&lt;cfset Variables.B = qry.B&gt;<br>&lt;cfset Variables.C = qry.C&gt;</p><p>Is the following good enough, or do we always need to scope every variable?<br>&lt;cfset A = qry.A&gt;<br>&lt;cfset B = qry.B&gt;<br>&lt;cfset C = qry.C&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662190">32</a> by Raymond Camden
		posted on 2/16/2007 at 8:56 PM
		</div>
		<div class="comment_text"><p>I'd say just use the full scoping:</p><p>&lt;cfoutput&gt;<br>Hello, #<a href="http://disq.us/url?url=http%3A%2F%2Fqry.name%3ATo9yRA6aTfU-ODba-P9KbUt5VOE&amp;cuid=3321886" rel="nofollow noopener" title="qry.name">qry.name</a>#.<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		