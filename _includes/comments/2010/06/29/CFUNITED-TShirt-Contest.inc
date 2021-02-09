
<div class="comment" id="c_1713724868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724868">1</a> by TJ Downes
		posted on 6/29/2010 at 9:20 PM
		</div>
		<div class="comment_text"><p>&lt;cfloop collection="#cfUnitedActivities#" item="activity"&gt;<br>    &lt;cfswitch expression="#activity#"&gt;<br>        &lt;cfdefaultcase&gt;<br>            &lt;cfset doDrinkBeer() /&gt;<br>        &lt;/cfdefaultcase&gt;<br>    &lt;/cfswitch&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724861">2</a> by Zach Barrett
		posted on 6/29/2010 at 9:44 PM
		</div>
		<div class="comment_text"><p>&lt;cfif #cgi.HTTP_USER_AGENT# neq "iPhone"&gt;<br>	&lt;!-- embed SuperAwesomeWelcomeMessageThatWillBlowYourMind.swf here----&gt;<br>&lt;cfelse&gt;<br>	&lt;!-- dull welcome message here----&gt;<br>	Welcome.<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724870">3</a> by Steve
		posted on 6/29/2010 at 9:45 PM
		</div>
		<div class="comment_text"><p>Ray, does this have to be true legit code?  Or can it be something made up (no, I don't really have a custom tag for this), for example, &lt;cf_united&gt; ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724871">4</a> by Misty
		posted on 6/29/2010 at 9:45 PM
		</div>
		<div class="comment_text"><p>My First Submission:</p><p>&lt;cfimage source="images/j0439239.jpg" name="myImage"&gt;<br>&lt;!--- Set the background color to green. ---&gt;<br>&lt;cfset ImageSetBackgroundColor(myImage,"green")&gt;<br>&lt;!--- Draw four rectangles in the background color. ---&gt;<br>&lt;cfoutput&gt;<br>&lt;cfloop from="1" to="100" index="i" step="9"&gt;<br>&lt;cfset ImageClearRect(myImage,#i#,#i#,#i#,#i#)&gt;<br>&lt;/cfloop&gt;<br>&lt;/cfoutput&gt;<br>&lt;!--- Save the modified ColdFusion image to a file. ---&gt;<br>&lt;cfimage source="#myImage#" action="write" destination="test_myImage.jpeg" overwrite="yes"&gt;<br>&lt;!--- Display the source image and the new image. ---&gt;<br>&lt;img src="images/j0439239.jpg"&gt;<br>&lt;img src="test_myImage.jpeg"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724869">5</a> by Jenni B.
		posted on 6/29/2010 at 9:48 PM
		</div>
		<div class="comment_text"><p>&lt;cfscript&gt;<br>   SpaDay = StructNew();<br>   StructInsert(SpaDay, "massage", FORM.massagetime);<br>   StructInsert(SpaDay, "hottub", FORM.soaktime);<br>   StructInsert(SpaDay, "drink", FORM.drink);<br> &lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724866">6</a> by Raymond Camden
		posted on 6/29/2010 at 9:51 PM
		</div>
		<div class="comment_text"><p>@Steve: It can be made up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724874">7</a> by Gary
		posted on 6/29/2010 at 9:51 PM
		</div>
		<div class="comment_text"><p>&lt;cfif CGI.HTTP_USER_AGENT CONTAINS ListFindNoCase('iphone,Windows CE,NetFront,Palm OS,Blazer,Elaine,WAP,Plucker,Avantgo')&gt;<br>	&lt;!---Mobile Browsers! Disable any Javascript or if using any Frames Break Out from Frames---&gt;<br>&lt;cfelse&gt;<br>	&lt;!---Move On---&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724873">8</a> by Matt W
		posted on 6/29/2010 at 9:51 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction method="gotoCFUnited"&gt;<br>	&lt;cfargument name="learnMuch" default="true"&gt;<br>	&lt;cfargument name="haveFun" default="true"&gt;<br>	&lt;cfif learnMuch AND haveFun&gt;<br>		&lt;cfset session.start = "7/28/2010"&gt;<br>		&lt;cfset session.end = "7/31/2010"&gt;<br>		&lt;cflocation url="LansdowneResort.cfm"&gt;<br>	&lt;/cfif&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724876">9</a> by Yancy Wharton
		posted on 6/29/2010 at 9:53 PM
		</div>
		<div class="comment_text"><p>&lt;CFUNITED<br>	rev = 2010<br>	what = "A ColdFusion, Flex &amp; AIR Conference"<br>	where = "Lansdowne Resort &amp; Conference Center"<br>	when = "Wednesday 7/28/2010, Thursday 7/29/2010, Friday 7/30/2010, Saturday 7/31/2010"<br>	/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724877">10</a> by James Edmunds
		posted on 6/29/2010 at 9:56 PM
		</div>
		<div class="comment_text"><p>&lt;cfif application is CF&gt;<br>coding="efficient,rapid"<br>&lt;cfelse&gt;<br>coding.time = coding.time * 2<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724875">11</a> by MikeG
		posted on 6/29/2010 at 10:07 PM
		</div>
		<div class="comment_text"><p>function cfObjective(me) {<br>	var betterMe=arrayNew(1);<br>	arrayappend(betterMe,getSessions(me));<br>	arrayappend(betterMe,getSocial(me));<br>	return betterMe;<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724878">12</a> by Matt Gifford
		posted on 6/29/2010 at 10:09 PM
		</div>
		<div class="comment_text"><p>request.setEvent('CFUnited 2010');</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724879">13</a> by Matt Gifford
		posted on 6/29/2010 at 10:11 PM
		</div>
		<div class="comment_text"><p>CFUnited.get2010().isAttendee(true);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724880">14</a> by Jonah Chanticleer
		posted on 6/29/2010 at 10:12 PM
		</div>
		<div class="comment_text"><p>&lt;cfif you.said="Coldfusion is dead"&gt;<br>     &lt;cfset my.response = mid("COLDFUSION", 5, 2)&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724883">15</a> by Gurpreet
		posted on 6/29/2010 at 10:13 PM
		</div>
		<div class="comment_text"><p>&lt;cfset submission = "The Bad Programming Language! All the way PHP Coding. Try CFM"&gt;<br>&lt;cfif FindNoCase("PHP",submission)&gt;<br>&lt;cfoutput&gt;<br>Project Completion date: &lt;strong&gt;Never&lt;/strong&gt;<br>&lt;/cfoutput&gt;<br>&lt;cfelseif FindNoCase("CFM",submission)&gt;<br>&lt;cfoutput&gt;<br>Project Completed: &lt;strong&gt;Just Now&lt;/strong&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724882">16</a> by Zach Barrett
		posted on 6/29/2010 at 10:34 PM
		</div>
		<div class="comment_text"><p>&lt;cfset lyric = ""&gt;<br>&lt;cfloop condition="lyric neq 'Never gonna tell a lie and hurt you'"&gt;<br>	&lt;cfswitch expression="#lyric#"&gt;<br>		&lt;cfcase value=""&gt;<br>			&lt;cfset lyric = "Never gonna give you up"&gt;<br>		&lt;/cfcase&gt;<br>		&lt;cfcase value="Never gonna give you up"&gt;<br>			&lt;cfset lyric = "Never gonna let you down"&gt;<br>		&lt;/cfcase&gt;<br>		&lt;cfcase value="Never gonna let you down"&gt;<br>			&lt;cfset lyric = "Never gonna run around and desert you"&gt;<br>		&lt;/cfcase&gt;<br>		&lt;cfcase value="Never gonna run around and desert you"&gt;<br>			&lt;cfset lyric = "Never gonna make you cry"&gt;<br>		&lt;/cfcase&gt;<br>		&lt;cfcase value="Never gonna make you cry"&gt;<br>			&lt;cfset lyric = "Never gonna say goodbye"&gt;<br>		&lt;/cfcase&gt;<br>		&lt;cfcase value="Never gonna say goodbye"&gt;<br>			&lt;cfset lyric = "Never gonna tell a lie and hurt you"&gt;<br>		&lt;/cfcase&gt;<br>	&lt;/cfswitch&gt;<br>	&lt;cfoutput&gt;#lyric#&lt;br /&gt;&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724881">17</a> by TJ Downes
		posted on 6/29/2010 at 10:34 PM
		</div>
		<div class="comment_text"><p>Jonah, nice!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724859">18</a> by Scott Wolf
		posted on 6/29/2010 at 10:37 PM
		</div>
		<div class="comment_text"><p>&lt;cfset shirt = structNew()&gt;<br>&lt;cfset shirt.mainContents = "CF Geek"&gt;<br>&lt;cfif hour(now()) gt 8 AND hour(now()) lt 17&gt;<br>  &lt;cfset shirt.additionalContents = "Knowledge"&gt;<br>&lt;cfelse&gt;<br>  &lt;cfset shirt.additionalContents = "Beer"&gt;<br>&lt;/cfif&gt;<br>&lt;cfdump var="#shirt#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724884">19</a> by Ryan Vikander
		posted on 6/29/2010 at 10:42 PM
		</div>
		<div class="comment_text"><p>Like Zach's but less code:</p><p>&lt;cfset Lyric = "give you up, let you down, run around and desert you, make you cry, say goodbye, tell a lie and hurt you" /&gt;<br>&lt;cfoutput&gt;<br>&lt;cfloop list="#Lyric#" index="i"&gt;<br>	Never gonna #i#&lt;br /&gt;<br>&lt;/cfloop&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724858">20</a> by Zach Barrett
		posted on 6/29/2010 at 10:52 PM
		</div>
		<div class="comment_text"><p>Ryan,<br>The list will defiantly fit on a shirt better.</p><p>I was going for the over programmed approach... LOL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724862">21</a> by Jenni B.
		posted on 6/29/2010 at 10:53 PM
		</div>
		<div class="comment_text"><p>&lt;CF_highFive(Jonah)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724863">22</a> by Corey Butler
		posted on 6/29/2010 at 11:16 PM
		</div>
		<div class="comment_text"><p>Sadly, I may not be able to make the conference, but I hope it's OK to submit my made up code anyway.</p><p>&lt;cfunited year="2010" result="awesome"&gt;<br>    &lt;cfset who = setCoolPeople("me") /&gt;<br>    &lt;cfset what = "CF" + "Flex" + "AIR"/&gt;<br>    &lt;cfset where = "Virginia"/&gt;<br>&lt;/cfunited&gt;</p><p>... or some variation of the above that fits on a shirt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724865">23</a> by Matt W
		posted on 6/29/2010 at 11:19 PM
		</div>
		<div class="comment_text"><p>A second entry (is that allowed?)</p><p>&lt;cf_United action="learn" list="ColdFusion,Flex,AIR" /&gt;</p><p>&lt;cf_United action="meet" list="Ray,Bob,Joe,Dan,Dee,etc" /&gt;</p><p>&lt;cf_United action="consume" list="knowledge,food,beer" /&gt;</p><p>&lt;cf_United action="leave" list="prepared,smarter,connected" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724867">24</a> by Faisal Abid
		posted on 6/29/2010 at 11:50 PM
		</div>
		<div class="comment_text"><p>&lt;cfif isUnited() EQ TRUE&gt;<br>  &lt;cfreturn awesome /&gt;<br>&lt;cfelse&gt;<br>  &lt;cfreturn <a href="http://disq.us/url?url=http%3A%2F%2Fepic.fail%3AO4MFtqJgTpwVBKjwuSRkYPzjsbg&amp;cuid=3321886" rel="nofollow noopener" title="epic.fail">epic.fail</a>() /&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724886">25</a> by Eric Cobb
		posted on 6/30/2010 at 12:03 AM
		</div>
		<div class="comment_text"><p>Ok, here's my submission.  The first tag should go at the top of the shirt just under the collar.  The second tag should go at the very bottom of the shirt.</p><p>&lt;cffeed&gt;</p><p>&lt;cfflush&gt;</p><p>*You can also have an optional &lt;cfdump&gt; tag on the back at the bottom.</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724889">26</a> by Gigi
		posted on 6/30/2010 at 1:20 AM
		</div>
		<div class="comment_text"><p>Submission A)<br>&lt;cfif (do)&gt;<br>	&lt;!--- You either do... ---&gt;<br>&lt;cfelseif (Not(do))&gt;<br>	&lt;!--- or don't do... ---&gt;<br>&lt;cfelse&gt;<br>	&lt;cfthrow detail="There is no CFTRY" /&gt;<br>&lt;/cfif&gt;</p><p>~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~<br>Submission B) <br>There's no place like &lt;cflocation url="/home.cfm" /&gt;</p><p>~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~<br>Submission C) <br>&lt;cfloop condition="myKnowledge LT 'proficient'"&gt;<br>	attendMore_CFUnited_Sessions();<br>&lt;/cfloop&gt;</p><p>~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~<br>Submission D) <br>&lt;cfif (myLanguage EQ CF) AND (amAttendingCFUNited EQ true)&gt;<br>	&lt;cfoutput&gt;I'm a CFGenius!&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724887">27</a> by shakti
		posted on 6/30/2010 at 1:29 AM
		</div>
		<div class="comment_text"><p>&lt;cfloop list="brainstorm,learn,eat,drinkBeer" index="i"&gt;<br>       &lt;cfif NOT idontLikeThisPart(i)&gt;<br>                &lt;cfset doAction(i)/&gt;<br>       &lt;/cfif&gt; <br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724885">28</a> by Matt Gersting
		posted on 6/30/2010 at 1:32 AM
		</div>
		<div class="comment_text"><p>&lt;cfexecute&gt; or &lt;cfabort&gt;. There is no &lt;cftry&gt;.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fimages9.cpcache.com%2Fproduct%2F38497379v0_480x480_Front_Color-BlackWhite.jpg%3Aqc2JgoWoPcYZWOxCNOxU5hmLX7s&amp;cuid=3321886" rel="nofollow noopener" title="http://images9.cpcache.com/product/38497379v0_480x480_Front_Color-BlackWhite.jpg">http://images9.cpcache.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724888">29</a> by MikeG
		posted on 6/30/2010 at 1:53 AM
		</div>
		<div class="comment_text"><p>Second submission.  Consider this a 50,000 ft view of code<br>Top of shirt: &lt;CFDOES&gt;<br>Bottom of shirt: &lt;/CFDOES&gt;, but crossed out (indicating thre is no end to what CF Does.</p><p>Then between the tags, find that page from Mike Nimer's? Presentation from years back that has the little clouds in it with every protocol, service, API and Stub you can think of in it (updated for today)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724890">30</a> by Joshua Cyr
		posted on 6/30/2010 at 1:55 AM
		</div>
		<div class="comment_text"><p>&lt;cfset cfunited = EntityLoad('me') /&gt; <br>&lt;cfset cfunited.setLearning('100%') /&gt;<br>&lt;cfset cfunited.setNetworking('True') /&gt;<br>&lt;cfset cfunited.setFun('Always') /&gt; <br>&lt;cfset EntitySave(cfunited) /&gt;</p><p>optional:<br>&lt;cfset cfunited.setBeer('consumed') /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724891">31</a> by Sid Wing
		posted on 6/30/2010 at 5:04 AM
		</div>
		<div class="comment_text"><p>&lt;cfset CFUnited2010 = StructNew() /&gt;<br>&lt;cfset CFUnited2010.track_CF = "Kewl" /&gt;<br>&lt;cfset CFUnited2010.track_Flex = "Also Kewl" /&gt;<br>&lt;cfset CFUnited2010.track_AIR = "Also Also Kewl" /&gt;<br>&lt;cfset CFUnited2010.sciFi_BOF = "Rocks!" /&gt;<br>&lt;cfset CFUnited2010.meAttending = "Awesome!" /&gt;<br>&lt;cfset CFUnited2010.whereHeld = "The Lansdowne" /&gt;<br>&lt;cfset CFUnited2010.startDate = "07/28/2010" /&gt;<br>&lt;cfset CFUnited2010.endDate = "07/31/2010" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724892">32</a> by Sam Farmer
		posted on 6/30/2010 at 5:13 AM
		</div>
		<div class="comment_text"><p>I swear I thought of this one before Joshua Cyr posted his!</p><p>conference = entityNew( "Conference" );<br>conference.setName( "CFUnited" );<br>conference.setLearning( true );<br>conference.setNetworking( true );<br>conference.setFun( "Hell Yeah!" );<br>entitySave( conference );</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724893">33</a> by Brian FitzGerald
		posted on 6/30/2010 at 5:35 AM
		</div>
		<div class="comment_text"><p>&lt;cfif event.conference eq "cfunited"&gt;<br>  &lt;cftransaction&gt;<br>   &lt;cfset money = "well spent" /&gt;<br>  &lt;/cftransaction&gt;<br>&lt;cfelse&gt;<br>  &lt;cfreturn tickets /&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724895">34</a> by Tim Cunningham
		posted on 6/30/2010 at 6:37 AM
		</div>
		<div class="comment_text"><p>&lt;cfquery name="CFUnited2010"&gt;<br>SELECT * <br>FROM Knowledge<br>WHERE greatIdea IS NULL<br>&lt;/cfquery&gt;</p><p>0 records returned</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724896">35</a> by Tim Cunningham
		posted on 6/30/2010 at 6:51 AM
		</div>
		<div class="comment_text"><p>A mock up of what the t-shirt would look like:<br><a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2F24sgcb3%3AkmC0TUXdbXJ8yqw_TjPYVPZlNSI&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/24sgcb3">http://tinyurl.com/24sgcb3</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724894">36</a> by Tim Cunningham
		posted on 6/30/2010 at 7:18 AM
		</div>
		<div class="comment_text"><p>Here is one that is more CFML general:</p><p>&lt;cfquery datasource="CFML"&gt;<br>     SELECT *<br>     FROM CF, Others<br>     WHERE Others.easy &gt; CF.easy<br>         OR Others.power &gt; CF.power<br>&lt;/cfquery&gt;</p><p>        0 records returned</p><p>Image of proposed t-shirt: <a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2F283q69m%3Azc_3UvRn3WFAOJaYYDyWo_ZIZ-w&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/283q69m">http://tinyurl.com/283q69m</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724897">37</a> by Tim Cunningham
		posted on 6/30/2010 at 7:29 AM
		</div>
		<div class="comment_text"><p>I just realized I really need one more join in the above query to make it valid..</p><p>Too much &lt;CF_ALE&gt; oh well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724899">38</a> by Bob Bosron
		posted on 6/30/2010 at 4:39 PM
		</div>
		<div class="comment_text"><p>&lt;awesome&gt;<br>    CFUnited 2010<br>&lt;/awesome&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724898">39</a> by Chuck S
		posted on 6/30/2010 at 5:07 PM
		</div>
		<div class="comment_text"><p>Nice Jonah.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724902">40</a> by Paul Denato
		posted on 6/30/2010 at 6:47 PM
		</div>
		<div class="comment_text"><p>&lt;!--- lame code here ---&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724900">41</a> by Matt Tholey
		posted on 6/30/2010 at 7:12 PM
		</div>
		<div class="comment_text"><p>&lt;!--- Set your awesomenesss ---&gt;<br>&lt;cfset CFUNITED_2010="Awesome"&gt;<br>&lt;!--- Check to see if your awesomeness matches that of CFUNITED ---&gt;<br>&lt;cfif IsDefined("URL.CFUNITED_2010_Attendance") <br>	AND CFUNITED_2010 IS URL.CFUNITED_2010_Attendance&gt;<br>	&lt;!--- You are attending, Awesome! You Rock! ---&gt;<br>	\m/ (&gt;.&lt;) \m/<br>&lt;cfelse&gt;<br>	&lt;!--- You are not attending.  Your loss! ---&gt;<br>	.!. (0_0) .!.<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724901">42</a> by Kevin Schmidt
		posted on 6/30/2010 at 7:55 PM
		</div>
		<div class="comment_text"><p>&lt;cf_zombie<br>action="create"<br>method="raiseDead"<br>count="1000"<br>say="Brrrraaainnnssss!"<br>/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724904">43</a> by James Edmunds
		posted on 6/30/2010 at 8:13 PM
		</div>
		<div class="comment_text"><p>CFUNITED 2010</p><p>&lt;cffinal /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724906">44</a> by James Edmunds
		posted on 6/30/2010 at 8:14 PM
		</div>
		<div class="comment_text"><p>Or, alternately:</p><p>&lt;cffinal&gt;<br>CFUNITED 2010<br>&lt;/cffinal&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724905">45</a> by Tim Leach
		posted on 6/30/2010 at 9:04 PM
		</div>
		<div class="comment_text"><p>Could do something simple like:<br>&lt;/cf_is_dead&gt;</p><p>though, I see more people clinging to the fact CF is still alive, then claiming it was ever dead.<br>Or you could do something like:<br>&lt;cfcomponent<br> extends="Adobe.Education.ColdFusion"<br> displayname="CFUnited 2010" <br> hint="A ColdFusion, Flex &amp; AIR Conference"<br> output="Yes"&gt;<br>&lt;cffunction name="Attend" returntype="Geek" access="public"&gt;<br>...<br>&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>---</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724908">46</a> by Matthew Tholey
		posted on 6/30/2010 at 9:31 PM
		</div>
		<div class="comment_text"><p>&lt;cfset CFUNITED_2010="Your Destination"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724909">47</a> by Brian Fescoe
		posted on 6/30/2010 at 9:56 PM
		</div>
		<div class="comment_text"><p>&lt;cfif lang eq 'PHP'&gt;<br>	&lt;cfoutput&gt;ID10T&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724915">48</a> by Craig
		posted on 6/30/2010 at 10:13 PM
		</div>
		<div class="comment_text"><p>Short for a shirt. Tried to make it legible. Correct any syntax:)</p><p>component hint="ColdFusion" {</p><p>public CFUnited function init (</p><p>Year = 2010,<br>Status = "Better than ever.",<br>Tags = Optional,<br>Speed = Fast,<br>Future = Strong<br>) }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724911">49</a> by craig
		posted on 6/30/2010 at 10:14 PM
		</div>
		<div class="comment_text"><p>Darn image wrap!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724914">50</a> by Mike Collins
		posted on 7/1/2010 at 1:06 AM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="CFUnited" <br> Hint="July 27-30 2010 Lansdowne VA"&gt;<br>&lt;cfset GrandFinale(true)&gt;<br>&lt;cfreturn "Smarter" &gt;<br>&lt;/cffunction/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724913">51</a> by Ryan Nowak
		posted on 7/1/2010 at 1:28 AM
		</div>
		<div class="comment_text"><p>&lt;CFUNITED&gt;<br>WORLD DOMINATION<br>&lt;/CFUNITED&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724912">52</a> by Vicky
		posted on 7/1/2010 at 2:58 PM
		</div>
		<div class="comment_text"><p>In light of this being the last CFUnited, and the fact that people who disappeared long before this want to convince people that this means ColdFusion is dead [again ho hum], I want a t-shirt that says</p><p>"WE are the new &lt;cfdawn&gt;!"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724917">53</a> by Steve Withington
		posted on 7/2/2010 at 1:34 AM
		</div>
		<div class="comment_text"><p>&lt;cfscript&gt;<br>while ( not isDead() ) { codeWithColdFusion(); };<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724918">54</a> by Corey Butler
		posted on 7/2/2010 at 1:37 AM
		</div>
		<div class="comment_text"><p>Since this is the last one, maybe just</p><p>&lt;/cfunited&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724921">55</a> by Daniel Fredericks
		posted on 7/2/2010 at 3:27 PM
		</div>
		<div class="comment_text"><p>&lt;cfunited&gt;<br>    "CFUnited is the premier ColdFusion specific conference"<br>                                                                   &lt;B.Forta&gt;<br>    -- 1999-2010 --<br>&lt;/cfunited&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724922">56</a> by Pete Freitag
		posted on 7/2/2010 at 7:03 PM
		</div>
		<div class="comment_text"><p>&lt;cfinvokeargument name="ColdFusion" value="Rocks!" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724920">57</a> by Pete Freitag
		posted on 7/2/2010 at 7:05 PM
		</div>
		<div class="comment_text"><p>&lt;cflocation url="<a href="http://disq.us/url?url=http%3A%2F%2Fcfunited.com%2F%3AIJcB65-Y3ZPGFQZHAmtj1QSW8NI&amp;cuid=3321886" rel="nofollow noopener" title="http://cfunited.com/">http://cfunited.com/</a>" /&gt;</p><p>You should really addtoken="false" so you don't send your session id's but that might not be necessary for the tshirt ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724924">58</a> by Scott Wolf
		posted on 7/2/2010 at 7:14 PM
		</div>
		<div class="comment_text"><p>I know this won't win...but kinda had to do it...</p><p>&lt;cfif findNoCase('<a href="http://disq.us/url?url=http%3A%2F%2Fhalhelms.com%3AWLX3flu4U-K7XfV5oV9b7g21x0M&amp;cuid=3321886" rel="nofollow noopener" title="halhelms.com">halhelms.com</a>', cgi.http_referer)&gt;<br>  &lt;cflocation url="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.rubyonrails.com%3AKrHrGZCCwu-1NiPGJynZSnCBsqQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rubyonrails.com">http://www.rubyonrails.com</a>" addtoken="false" /&gt;<br>&lt;cfelse&gt;<br>  &lt;cflocation url="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfunited.com%3AY2kQU90onhbUs5LBl6sW-LC8pFw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfunited.com">http://www.cfunited.com</a>" addtoken="false" /&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724927">59</a> by Scott Wolf
		posted on 7/2/2010 at 7:15 PM
		</div>
		<div class="comment_text"><p>Don't ask where that semicolon came from...I couldn't tell you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724926">60</a> by Susan Brun
		posted on 7/2/2010 at 11:40 PM
		</div>
		<div class="comment_text"><p>&lt;cfunited 2010&gt;<br>   &lt;cfset memories = "friends, laughing, learning, coding, <br>                               teaching, sharing, CF Never Ending" /&gt;<br>&lt;/cfunited 2010&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724931">61</a> by James Edmunds
		posted on 7/3/2010 at 12:12 AM
		</div>
		<div class="comment_text"><p>&lt;cfunited from="1999" to="2010" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724930">62</a> by Roger Austin
		posted on 7/3/2010 at 1:23 AM
		</div>
		<div class="comment_text"><p>I like #25 from Eric. Filed for future use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724928">63</a> by Raymond Camden
		posted on 7/3/2010 at 2:08 AM
		</div>
		<div class="comment_text"><p>And we have our winners. Remember this was purely my decision, and I'm sure folks will disagree. However, as this is a dictatorship, there isn't much you can do about it. ;)</p><p>So for 2nd and 3rd place, I pick both Ryan V and Zach B for their Rick Astley inspired submissions.</p><p>However - I could not pass up #28 from Matt G:</p><p>&lt;cfexecute&gt; or &lt;cfabort&gt;. There is no &lt;cftry&gt;.</p><p>Gigi had one similar - but I preferred Matt G.</p><p>So... that's our winner! Thank you everyone!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724933">64</a> by James Edmunds
		posted on 7/3/2010 at 2:16 AM
		</div>
		<div class="comment_text"><p>Fun contest, thanks!!! And a good winner, congrats!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724929">65</a> by Matthew Tholey
		posted on 7/3/2010 at 2:21 AM
		</div>
		<div class="comment_text"><p>Thank you Ray for offering the fun contest.  Congratulations to Matt G and the other winners ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724932">66</a> by Sid Wing
		posted on 7/3/2010 at 2:28 AM
		</div>
		<div class="comment_text"><p>LOL - it figures THAT one would be the one that appealed to you most, O CF JediMaster!  Congrats to Matt and the other winners!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724938">67</a> by Rachel Luxemburg
		posted on 7/3/2010 at 5:06 AM
		</div>
		<div class="comment_text"><p>I totally want that t-shirt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724934">68</a> by Ryan Vikander
		posted on 7/3/2010 at 7:31 AM
		</div>
		<div class="comment_text"><p>What does second place win? Maybe a copy of your CF anthology signed ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724939">69</a> by Raymond Camden
		posted on 7/3/2010 at 5:01 PM
		</div>
		<div class="comment_text"><p>2nd and 3rd get 200 off the ticket price. You'd have to talk to Dinowitz to get a copy of the Anthology. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724936">70</a> by Matt Gersting
		posted on 7/3/2010 at 11:26 PM
		</div>
		<div class="comment_text"><p>Thanks, Ray and everyone!  I knew that t-shirt idea would come in handy one of these years!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724940">71</a> by Jason Durham
		posted on 7/7/2010 at 11:02 PM
		</div>
		<div class="comment_text"><p>It's a late entry...</p><p>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2FJoke.fail%3AVKRse2y3L0E_CiTjrxr9eAliCzk&amp;cuid=3321886" rel="nofollow noopener" title="Joke.fail">Joke.fail</a>() /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724942">72</a> by pbaylis
		posted on 7/8/2010 at 5:04 AM
		</div>
		<div class="comment_text"><p>&lt;cf_uknighted&gt; in 2010</p><p>King Arthur theme. "knighted" in italics to distinguish.<br>Perhaps include a pic of a shield with the ColdFusion bolt on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724941">73</a> by Nick
		posted on 1/5/2011 at 10:23 PM
		</div>
		<div class="comment_text"><p>My toilet app: <br>&lt;cfdump&gt;<br>&lt;cflog&gt;<br>&lt;cfflush&gt;</p><p>(CF, the most intuitive language on the planet)</p></div>
	</div>
</div>
		