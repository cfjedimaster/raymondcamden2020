
<div class="comment" id="c_1713725691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725691">1</a> by SuperAlly
		posted on 7/28/2010 at 1:48 AM
		</div>
		<div class="comment_text"><p>Interesting.  I don't think it would ever even occur to me to use SQL comments in a cfquery though.  I think I would just assume they wouldn't work.<br>Then again, if I used them and CFBuilder greyed out the text, I might just assume it DID work, so good to know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725684">2</a> by Ryan Vikander
		posted on 7/28/2010 at 5:27 AM
		</div>
		<div class="comment_text"><p>Yea we noticed this error too when using sql comments to comment out coldfusion code. You MUST comment coldfusion code out with COLDFUSION comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725681">3</a> by Dominique
		posted on 7/28/2010 at 10:54 AM
		</div>
		<div class="comment_text"><p>This is weird. I have used SQL comments in a CFQUERY, withouth breaking it. Maybe it's not the comment, but the CFQUERYPARAM within the comment?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725687">4</a> by Tim Dawe
		posted on 7/28/2010 at 11:51 AM
		</div>
		<div class="comment_text"><p>This behaviour makes sense to me.  I think of it in the same way way as using CF code inside an HTML comment.  I'd expect CF to process any code in there and just pass it to the browser to deal with.</p><p>If you used -- to comment out straight SQL, it would work as expected.  The problem is that CF doesn't know that the SQL engine is going to ignore that bit of code so it sends both params, which the database isn't expecting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725688">5</a> by Gary Funk
		posted on 7/28/2010 at 5:12 PM
		</div>
		<div class="comment_text"><p>This looks more like a source code error to me. I have commented out SQL code and have not had any problems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725686">6</a> by Eric Cobb
		posted on 7/28/2010 at 5:17 PM
		</div>
		<div class="comment_text"><p>What version of CF?  We're using CF 8 with Oracle and put SQL comments in our queries with no problems.  Maybe it's only an issue when using cfqueryparam?  I'm not sure, the lazy Goobers here tend to not use cfqp, so I'm not sure if we have that combination or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725685">7</a> by Tom Jenkins
		posted on 7/28/2010 at 5:42 PM
		</div>
		<div class="comment_text"><p>Its interesting, I did a quick test on this and it definitely is only with cfqueryparam. If you do the below:</p><p>&lt;cfset testID=0&gt;<br>&lt;cfquery name="rsTest" datasource="#datasource#"&gt;<br>	SELECT PageID FROM tblSitePages <br>    WHERE PageID = &lt;cfqueryparam cfsqltype="cf_sql_integer" value="1"&gt;<br>    -- OR PageID = #testID#<br>&lt;/cfquery&gt;<br>&lt;cfdump var="#rstest#"&gt;</p><p>It works fine. What's interesting is within the dump you can see the SQL that was used ... with cfqueryparam value showing as "?".</p><p>is this to do with how it is rendered somehow?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725690">8</a> by Steve
		posted on 7/28/2010 at 5:48 PM
		</div>
		<div class="comment_text"><p>Yeah I'd have to agree with a few of the others and say it's probably the cfqueryparam tab being processed by CF, but with the SQL comment messing it up. Try commenting out a line of normal SQL that contains no tags. I would have run a test before making this comment, but I'm on the train home sorry.</p><p>I've used the -- SQL comment syntax in a few queries lately and have not had any problems. Running CF9 + Oracle.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725689">9</a> by Steve
		posted on 7/28/2010 at 5:50 PM
		</div>
		<div class="comment_text"><p>There you go, Tom beat me :-D Nice one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725695">10</a> by Steve
		posted on 7/28/2010 at 5:54 PM
		</div>
		<div class="comment_text"><p>@Tom<br>Yeah the queryparam values are never shown in the dump or where it's also rendered on an error page, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725699">11</a> by Adam Cameron
		posted on 7/29/2010 at 12:59 AM
		</div>
		<div class="comment_text"><p>All the people coming to their own conclusion that "this is only with CFQUERYPARAM" could possibly do with polishing their specs or at least *reading* what Ray has written.  The heading of the article is "Interesting bug to watch out for ***involving cfqueryparam*** and sql" (my emphasis) and Ray *explains* that specifically relates to CFQUERYPARAM.</p><p>I think the only *bug* here though is in CFB's colour coding.  Other than that, it's to be expected.  The person who commented that this is just like an equivalent situation with HTML comments has summed it up pretty nicely.</p><p>Good article, btw, Ray.  Whilst suggesting "this is to be expected", I'm sure had I come across this in my own code (and I do use SQL comments sometimes, for whatever reason), I'd be scratching my head for a while until the penny dropped.</p><p>Have you raised a bug re the CFB colour-coding?</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725700">12</a> by Bjorn Jensen
		posted on 7/29/2010 at 1:22 PM
		</div>
		<div class="comment_text"><p>I'd say it's a pretty logical bug, and as it's been mentioned before, the biggest issue is really the color coding shown.</p><p>A much worse bug/feature is something like this:<br>&lt;cfquery datasource="a"&gt;<br>bla bla &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#returnvalue()#"&gt;<br>&lt;/cfquery&gt;</p><p>&lt;cffunction name="returnvalue"&gt;<br>&lt;cfquery datasource="b" name="q"&gt;<br>select id from table<br>&lt;/cfquery&gt;<br>&lt;cfreturn id&gt;<br>&lt;/cffunction&gt;</p><p>You'd think the first query would use datasource a and the function call would use datasource b, but instead because of the function call inside the cfqueryparam the first query will have it's dsn changed to b.<br>This has already bitten us a few times already, and it's pretty hard to spot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725697">13</a> by Adam Cameron
		posted on 7/29/2010 at 1:52 PM
		</div>
		<div class="comment_text"><p>Bjorn, I think this issue might have been fixed: <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D81968%3AI9wiynbcU17o-JVn7cKU75mvpzc&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=81968">http://cfbugs.adobe.com/cfb...</a></p><p>Of course it's very difficult to tell why/how an issue was deal with in the bug tracker, as it just says "closed", and that's it.</p><p>Might be worth re-testing on CF9.0.1 to see if it's been sorted out, though.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725696">14</a> by Raymond Camden
		posted on 7/29/2010 at 3:43 PM
		</div>
		<div class="comment_text"><p>Adam, I'm not so sure it is a cfb bug. It _is_ a SQL comment. I don't know - given that CFB has to make a choice there on how to colorize, I think it is making the right choice. Maybe.</p><p>But yeah - to your point - this is 100% expected - but definitely something I can see people doing by accident. (Myself included!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725693">15</a> by Adam Cameron
		posted on 7/29/2010 at 3:56 PM
		</div>
		<div class="comment_text"><p>Yep, and as you say: one should not expect an SQL comment to have any effect on the &lt;cfqueryparam tag&gt;.  So when the &lt;cfqueryparam&gt; is resolved, it does two things<br>1) swaps the &lt;cfqueryparam&gt; tag in the "body" of the &lt;cfquery&gt; tag for a param "marker" (you know, it shows up as a question mark in the SQL string when you output the SQL string in the debug)  in the SQL string.  This marker is on the same line as the SQL comment, so by the time it gets to the DB server, it's commented out:</p><p>select type, description, quantity, price<br>from beer<br>where <br>type like ?<br>--and description like ?</p><p>2) passes the actual param value to the DB driver int he param structure.</p><p>So the SQL string the DB receives has only one param marker in it, but CF is passing two params.  Error.</p><p>Well that's my take on what's happening, anyhow.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725698">16</a> by Raymond Camden
		posted on 7/29/2010 at 4:40 PM
		</div>
		<div class="comment_text"><p>My take too. And - I think the DB server says: "Dude, your SQL has 1 bound param, but you sent me 2. This may not be a hack attempt, but it's not right. Error."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725694">17</a> by Adam Cameron
		posted on 7/29/2010 at 5:21 PM
		</div>
		<div class="comment_text"><p>Ah, sorry mate: my turn to misread what you were writing.  I thought when you said it might not be a CFB bug that you were suggesting it was a CF bug instead (not that you said that).  You're suggesting that possibly it's not actually a bug at all: just a nice quirk to be aware of?</p><p>Cheers.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725701">18</a> by Raymond Camden
		posted on 7/29/2010 at 5:22 PM
		</div>
		<div class="comment_text"><p>Yeah - no bug at all - just one more thing for us to watch out for. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660819760">
	<div>
		<img src="https://disqus.com/api/users/avatars/collin_schroeder.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660819760">19</a> by Collin Schroeder
		posted on 5/5/2016 at 10:51 PM
		</div>
		<div class="comment_text"><p>This appears to have come back in CF2016</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660852570">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660852570">20</a> (In reply to <a href="#c_2660819760">#19</a>) by Raymond Camden
		posted on 5/5/2016 at 11:14 PM
		</div>
		<div class="comment_text"><p>Um, to be clear, this isn't a bug. You get that right - I think I said so in the post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660895506">
	<div>
		<img src="https://disqus.com/api/users/avatars/collin_schroeder.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660895506">21</a> (In reply to <a href="#c_2660852570">#20</a>) by Collin Schroeder
		posted on 5/5/2016 at 11:48 PM
		</div>
		<div class="comment_text"><p>Thanks for the quick reply. If not a bug there does seem to be a  behavioral change from previous versions that will cause us to clean up possibly hundreds of queries. I haven't run into this problem in CF 10 or 11. But when I run the same apps on CF2016 that have worked for years  I have to go through and strip out all the comments to get them running.</p><p>Maybe the problem here (aside from not using CF comments) or difference between CF11 is that it is executing all the SQL on a single line.  CF doesn't have to care about the SQL comments as long as the newlines are retained right?</p><p>In and of itself, it wouldn't be a big deal if Adobe still offered CF11 for download but unfortunately it is nowhere to be found and I'm trying to get a new developer set up on one of our projects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2660979540">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2660979540">22</a> (In reply to <a href="#c_2660895506">#21</a>) by Raymond Camden
		posted on 5/6/2016 at 12:57 AM
		</div>
		<div class="comment_text"><p>If it worked in CF10/11, I'd call it a bug there. Can you show an example query where it worked?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2661013781">
	<div>
		<img src="https://disqus.com/api/users/avatars/collin_schroeder.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2661013781">23</a> (In reply to <a href="#c_2660979540">#22</a>) by Collin Schroeder
		posted on 5/6/2016 at 1:25 AM
		</div>
		<div class="comment_text"><p>Here is a literal example from one of our projects:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FeUJZUSws%3AXRASEcG-hc3fM5oxgKnZ4WuKLxc&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/eUJZUSws">http://pastebin.com/eUJZUSws</a></p><p>But a far more simple example will break as well:</p><p>&lt;cfquery name="test" datasource="#get('dataSourceName')#" username="#get('dataSourceUserName')#" password="#get('dataSourcePassword')#"&gt;<br>	  select<br>		logonname, --primary key field<br>		area<br>		from b_logon<br>&lt;/cfquery&gt;</p><p>yields:</p><p>Error Executing Database Query.</p><p>[Macromedia][SQLServer JDBC Driver][SQLServer]Incorrect syntax near ','.</p><p>or this example from the master db in MS SQL Server</p><p>Select <br>UserID --offending comment<br>from Users</p><p>which yields:</p><p>[Macromedia][SQLServer JDBC Driver][SQLServer]Invalid column name 'UserID'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2661018504">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2661018504">24</a> (In reply to <a href="#c_2661013781">#23</a>) by Raymond Camden
		posted on 5/6/2016 at 1:29 AM
		</div>
		<div class="comment_text"><p>Err... wait. This blog post was about how a SQL comment was used in the same line as a cfqueryparam. The point was that the SQL comment did *not* comment out the CF tag since the CF code was executed first.</p><p>In all your examples, you aren't using cfqueryparam, or another CF tag commented out.</p><p>This looks to be a completely different issue. Do you agree?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2661048497">
	<div>
		<img src="https://disqus.com/api/users/avatars/collin_schroeder.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2661048497">25</a> (In reply to <a href="#c_2661018504">#24</a>) by Collin Schroeder
		posted on 5/6/2016 at 1:54 AM
		</div>
		<div class="comment_text"><p>Yes it is a different issue.  I happened on your page by chance. I got the same error because a cfqueryparam occurred after a SQL comment on a subsequent line.</p><p>After diving into it, the problem is  ColdFusion 2016 stripping the newlines out of queries.</p><p>I created a stackoverflow post for it:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F37062966%2Fcoldfusion-2016-strips-newlines-and-executes-queries-on-a-single-line-breaking%3AtUPbNFAp4p_eSr1XBNrLu1wgDkk&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/37062966/coldfusion-2016-strips-newlines-and-executes-queries-on-a-single-line-breaking">http://stackoverflow.com/qu...</a></p><p>Think I should submit this as a bug to Adobe?</p><p>You helped me before with a XML XSS scripting issue by the way. You were a huge help and it worked flawlessly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2661050929">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2661050929">26</a> (In reply to <a href="#c_2661048497">#25</a>) by Raymond Camden
		posted on 5/6/2016 at 1:56 AM
		</div>
		<div class="comment_text"><p>Wow, that is a *damn* bad bug. You should absolutely file a bug report. I wouldn't hold your breath though.</p><p>And sorry - but I'm not terribly pleased with the Adobe CF team these days.</p><p>I'd dump your code base and switch to Node, but I assume that's not an option. ;)</p></div>
	</div>
</div>
		