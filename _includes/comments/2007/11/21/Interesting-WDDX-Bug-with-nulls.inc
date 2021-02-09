
<div class="comment" id="c_1713674523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674523">1</a> by Chris
		posted on 11/21/2007 at 11:05 PM
		</div>
		<div class="comment_text"><p>Isn't this more a problem with how the data is inserted in to the db in the first place? If you insert a null value into a boolean field then CF will bomb out because, obviously, null is not true or false. I've run across this a few times while working on other programmers code and some error trapping before or during the data insert keeps this from happening.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674542">2</a> by Raymond Camden
		posted on 11/21/2007 at 11:54 PM
		</div>
		<div class="comment_text"><p>No - a column can be boolean and allow nulls. That's why I wrote code to say, 'if the value isn't boolean, insert null'. The problem was that CF barfed on the cfif itself. It also barfs if you just output it. The issue seems to be in the conversion from wddx to cf.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674535">3</a> by Hem Talreja
		posted on 11/22/2007 at 12:08 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I come across this a lot, Usually recommend using</p><p>&lt;cfif YesNoFormat()&gt;</p><p>&lt;/cfif&gt;</p><p>Thanks<br>-Hem</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674533">4</a> by Raymond Camden
		posted on 11/22/2007 at 12:19 AM
		</div>
		<div class="comment_text"><p>Guys - I don't think yall get it. Maybe my post wasn't clear.</p><p>The data is corrupt. If you do ANYTHING with it - CF throws an error.</p><p>If I just do this:</p><p>&lt;cfloop query="fromwddx"&gt;<br>#foo#<br>&lt;/cfloop&gt;</p><p>I will get the error. I can't CFIF it. Just using the variable throws an error.</p><p>Make sense now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674532">5</a> by Chris
		posted on 11/22/2007 at 12:19 AM
		</div>
		<div class="comment_text"><p>I get that but aren't you just creating more work for yourself? As you explained it, the CFIF barfed because it couldn't convert a null value to a boolean, which is true. I've done that myself a few times. The fix is to make sure the field does have a true/false value before it hits the CFIF. CFIF will always choke in this scenario because, again, null is not true or false. Telling the query to accept nulls is only compounding the problem, IMHO.</p><p>Sorry, I don't mean to rant. This is a problem with the data, not CFIF. That worked the way it's supposed to. It just seems that a little data checking first would have prevented the problem altogether.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674539">6</a> by Raymond Camden
		posted on 11/22/2007 at 12:24 AM
		</div>
		<div class="comment_text"><p>In this case, I have no control over the data. It is what it is. But consider this Chris - CF has no problem selecting data from a query with nulls. If you output it, you get an empty string. You can easily do isBoolean.</p><p>The only issue is in the CF to WDDX and WDDX to CF conversion. That is where it breaks down. THe resultant data is so corrupt you can't touch it w/o a try/catch.</p><p>As for the data - well, if a field is optional and boolean, null seems like a reasonable value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674541">7</a> by luis matthews
		posted on 11/22/2007 at 1:13 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I would agree that this appears to be a problem with cfwddx Interestingly enough, in your example, if you change the initial cfquery to</p><p>&lt;cfquery name="getit" datasource="test"&gt;<br>select   *<br>from   test<br>order by cool desc<br>&lt;/cfquery&gt;</p><p>It works fine. In other words, if the WDDX, your nulls appear first, the conversion back works fine. Otherwise you get the error. I'm assuming that this won't help you, however since you stated that you have no control over the data coming in. I also tried manually creating a query (queryNew, querySetCell, etc...) and was unable to replicate the behavior that is occurring with cfwddx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674540">8</a> by Raymond Camden
		posted on 11/22/2007 at 1:17 AM
		</div>
		<div class="comment_text"><p>Hmm. When CF creates the WDDX, I believe it checks the column types. If null is first, I wonder if it considers the column to be... I don't know what. :) Try this - wddxify both versions and tell me what the wddx looks like (I could do this - just busy)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674546">9</a> by Goyuix
		posted on 11/22/2007 at 1:38 AM
		</div>
		<div class="comment_text"><p>I think the comments seem to be missing the boat - this isn't necessarily (though it is specifically) about a NULL in the database - it is related to how ColdFusion actually ends up mapping a NULL from Java into the CF world... two pieces of interesting evidence culled from memory so I don't have exactly the right CF code perhaps:</p><p>1) I was writing some .NET web services that CF was consuming. Most of them returned strings and as an error condition I made the design decision to return NULL to indicate the operation had failed - good or bad decision, it doesn't really matter - and what happened was when I called &lt;cfinvoke&gt; and got the NULL back, it was AS IF THE CODE NEVER EXECUTED - my variable was not set, it didn't even exist in the scope. Very strange behavior I thought.</p><p>2) So I decided to duplicate the "bug" a little differently. I created a Java object and called some method that returned NULL. Again, the same behavior: It was like that line of code had never executed. The variable I was trying to assign had no value, and didn't even exist in the scope.</p><p>Now granted, NULL as a SELECT in &lt;cfquery&gt; tends to effectively come out as an empty string, so that to me is a special case - but - it would appear from my limited investigation that ColdFusion doesn't really have a concept of NULL, or at least the concept is to not define the variable. So if you might be dealing with an actual NULL, testing for the existence of your variable would be the correct course of action to detect NULL.</p><p>I hope this helps, or perhaps someone else can correct me? I never really chased this issue very far and just changed my error state to something more meaningful to just avoid the issue completely. I would love to be more deeply educated in this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674544">10</a> by Steve Bryant
		posted on 11/22/2007 at 8:03 AM
		</div>
		<div class="comment_text"><p>This seems a lot like the data type conversion problem in query of queries. I have run into it before, but Ben Nadel has the best explanation of the issue that I have seen:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F379-ColdFusion-Query-of-Queries-Unexpected-Data-Type-Conversion.htm%3A4900-pmhxNtzIfj8681_r6L6ieI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/379-ColdFusion-Query-of-Queries-Unexpected-Data-Type-Conversion.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674543">11</a> by Shuns
		posted on 11/23/2007 at 2:34 AM
		</div>
		<div class="comment_text"><p>I didn't read any of the other data but wtf are nulls doing in a bit field anyways??? Boolean/bit is either true or it's false there no such thing as "unsure" - you are either male or female, dead/alive etc - nulls in DB are lame...</p><p>The only time when you should actualy need them is in some sort of wizard or something where you may commit the data unknowing a user's answer/result if they haven't completed all questions or fields, where is maybe not suitable to insert something else for them as it would not be right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674545">12</a> by Raymond Camden
		posted on 11/23/2007 at 4:17 AM
		</div>
		<div class="comment_text"><p>What about a case where gender is an optional field?</p><p>Anyway - this blog entry is REALLY not about proper DB practices, but a bug w/ cfwddx. Can we focus on that please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674548">13</a> by Sigma Projects
		posted on 11/23/2007 at 11:26 PM
		</div>
		<div class="comment_text"><p>I've had an issue with this.  I just got frustrated and did exactly what you did with the try/catch.  I thought it was something I was doing wrong but couldn't figure it out.  Hope this gets fixed!</p></div>
	</div>
</div>
		