
<div class="comment" id="c_1713714052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714052">1</a> by Joshua Siok
		posted on 3/20/2009 at 7:50 PM
		</div>
		<div class="comment_text"><p>&lt;cfcomponent&gt;<br>	&lt;cffunction name="GoldenBirthday" access="public" returntype="date"&gt;<br>		&lt;cfargument name="BirthDate" type="date" required="yes"&gt;</p><p>        &lt;cfset DayOfMonth = Day(BirthDate)&gt;<br>		&lt;cfset GoldenBirthday = DateAdd("yyyy", DayOfMonth,BirthDate)&gt;</p><p>		&lt;cfreturn GoldenBirthday&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714053">2</a> by Joshua Siok
		posted on 3/20/2009 at 7:59 PM
		</div>
		<div class="comment_text"><p>Can be simplified to:</p><p>&lt;cfcomponent&gt;<br>	&lt;cffunction name="GoldenBirthday" access="public" returntype="date"&gt;<br>		&lt;cfargument name="BirthDate" type="date" required="yes"&gt;</p><p>		&lt;cfset GoldenBirthday = DateAdd("yyyy", Day(BirthDate),BirthDate)&gt;</p><p>		&lt;cfreturn GoldenBirthday&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714037">3</a> by Michael De Jonghe
		posted on 3/20/2009 at 8:09 PM
		</div>
		<div class="comment_text"><p>&lt;cfscript&gt;</p><p>function goldenbirthday(dob) {</p><p>	var daydob = day(dob);<br>	var goldenday = dateadd("yyyy",daydob,dob);</p><p>	return goldenday;</p><p>}<br>&lt;/cfscript&gt;</p><p>&lt;cfoutput&gt;#goldenbirthday(dob)#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714041">4</a> by John Gag
		posted on 3/20/2009 at 8:54 PM
		</div>
		<div class="comment_text"><p>I have a better question... How can a wonderful friday be ruined so quickly???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714045">5</a> by Raymond Camden
		posted on 3/20/2009 at 8:56 PM
		</div>
		<div class="comment_text"><p>My question ruined your Friday?? ;) Have a beer on me (or with me... in 4 hours or so )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714043">6</a> by Rick O
		posted on 3/20/2009 at 9:46 PM
		</div>
		<div class="comment_text"><p>Just to be different, since everyone else was jumping on the dateAdd wagon.</p><p>&lt;cffunction name="goldenBirthday"&gt;<br>    &lt;cfargument name="dob" type="date"&gt;<br>    &lt;cfreturn createDate(year(arguments.dob) + day(arguments.dob), month(arguments.dob), day(arguments.dob))&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714039">7</a> by Andy Sandefer
		posted on 3/20/2009 at 10:03 PM
		</div>
		<div class="comment_text"><p>You gotta love the shameless self promo of the link to the wish list!  Keep your eyes peeled Ray, I'll probably send you something around then (04/08).  You solved plenty of problems for me in 2008 and you probably will in 2009 so consider it a down payment on keeping my sanity!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714049">8</a> by Raymond Camden
		posted on 3/20/2009 at 10:05 PM
		</div>
		<div class="comment_text"><p>Me? Pimp my wishlist?? Never! I'm offended you even suggested that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714040">9</a> by Steve Withington
		posted on 3/20/2009 at 11:20 PM
		</div>
		<div class="comment_text"><p>Thought I would submit a "fancier" version:</p><p>&lt;cfcomponent 	displayname="Golden Birthday (Fancy)"<br>				output="false" <br>				hint="Send me a birthday, I'll give you all kinds of interesting info including when your Golden Birthday is (or was)."&gt;</p><p>   &lt;cffunction name="goldenBirthday" <br>				displayname="Check Birthday (Returns Struct)" <br>				access="public" <br>				returntype="struct"<br>				output="no"&gt;</p><p>		&lt;cfargument name="birthDate"<br>					type="date"<br>					required="yes" /&gt;</p><p>		&lt;cfset var local = structNew() /&gt;<br>		&lt;cfset local.isGoldenToday = false /&gt;<br>		&lt;cfset local.yourBirthday = dateformat(arguments.birthDate, 'mm/dd/yyyy') /&gt;<br>		&lt;cfset local.todaysDate = dateformat(now(), 'mm/dd/yyyy') /&gt;<br>		&lt;cfset local.todaysDay = day(local.todaysDate) /&gt;<br>		&lt;cfset local.yourDayToMatch = day(local.yourBirthday) /&gt;<br>		&lt;cfset local.yourAgeYears = dateDiff("yyyy", local.yourBirthday, local.todaysDate) /&gt;</p><p>		&lt;cfset local.yourGoldenBirthday = dateformat(dateAdd("yyyy", local.yourDayToMatch, local.yourBirthday), 'mm/dd/yyyy') /&gt;</p><p>		&lt;cfswitch expression="#dateCompare(local.yourGoldenBirthday, local.todaysDate, 'd')#"&gt;</p><p>			&lt;!--- already happened ---&gt;<br>			&lt;cfcase value="-1"&gt;<br>				&lt;cfset local.message = "Sorry, your Golden Birthday already happened on " &amp; local.yourGoldenBirthday &amp; ". But that's ok, because you're still golden in _my_ eyes." /&gt;<br>			&lt;/cfcase&gt;</p><p>			&lt;!--- is right now! ---&gt;<br>			&lt;cfcase value="0"&gt;<br>				&lt;cfset local.message = "Your Golden Birthday is TODAY! Congratulations!!! Can I have some cake and ice cream?" /&gt;<br>				&lt;cfset local.isGoldenToday = true /&gt;<br>			&lt;/cfcase&gt;</p><p>			&lt;!--- is coming up ---&gt;<br>			&lt;cfcase value="1"&gt;<br>				&lt;cfset local.message = "Your Golden Birthday is coming up! In fact, it will occur on " &amp; local.yourGoldenBirthday &amp; ". Am I invited to the party?" /&gt;<br>			&lt;/cfcase&gt;</p><p>		&lt;/cfswitch&gt;</p><p>		&lt;cfreturn local /&gt;</p><p>	&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714038">10</a> by Steve Withington
		posted on 3/20/2009 at 11:36 PM
		</div>
		<div class="comment_text"><p>Just for fun I threw this form together for testing:</p><p>&lt;style type="text/css"&gt;<br>body {<br>	background-color: #FFFFFF;<br>	margin: 0;<br>	padding: 0;<br>	font-family: Arial, Helvetica, sans-serif;<br>	font-size: 12px;<br>	color: #666666;<br>}<br>.wrapper {<br>	margin: 20px;<br>	padding: 20px;<br>	border: 1px dashed #666666;<br>}<br>.wrapper h1 {<br>	font-size: 16px;<br>	color: #000000;<br>}<br>.wrapper h2 {<br>	font-size: 14px;<br>	color: #FF0000;<br>}<br>select, input, textarea {<br>	font-family: Arial, Helvetica, sans-serif;<br>	font-size: 100%;<br>}<br>&lt;/style&gt;</p><p>&lt;cfparam name="isSubmitted" default="false" /&gt;<br>&lt;cfparam name="form.bDate" default="04/08/1973" /&gt;<br>&lt;div class="wrapper"&gt;</p><p>	&lt;cfform action="#cgi.script_name#" <br>			method="post" <br>			enctype="application/x-www-form-urlencoded" <br>			name="form1" <br>			id="form1"&gt;</p><p>		&lt;strong&gt;Your Birthday&lt;/strong&gt; (mm/dd/yyyy):&lt;br /&gt;<br>		&lt;cfinput type="datefield" name="bDate" id="bDate" value="#form.bDate#" mask="mm/dd/yyyy" /&gt;&lt;br /&gt;&lt;br /&gt;<br>		&lt;cfinput name="isSubmitted" type="hidden" id="isSubmitted" value="true" /&gt;<br>		&lt;cfinput type="submit" name="btnSubmit" label="Submit" value="Submit" validate="submitonce" /&gt;</p><p>	&lt;/cfform&gt;</p><p>&lt;/div&gt;</p><p>&lt;cfif isSubmitted&gt;</p><p>	&lt;div class="wrapper"&gt;</p><p>		&lt;h1&gt;goldenBirthdayFancy&lt;/h1&gt;</p><p>			&lt;cfinvoke<br>				component="goldenBirthday" <br>				method="goldenBirthday" <br>				returnvariable="goldenBirthdayInfo"&gt;<br>				&lt;cfinvokeargument name="birthDate" value="#form.bDate#" /&gt;<br>			&lt;/cfinvoke&gt;</p><p>			&lt;cfdump var="#goldenBirthdayInfo#" label="goldenBirthdayInfo" /&gt;</p><p>	&lt;/div&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714046">11</a> by Andy Sandefer
		posted on 3/20/2009 at 11:38 PM
		</div>
		<div class="comment_text"><p>@Steve<br>I didn't try to run this but you've won a lifetime's supply of pure cheese because of the dialog in your switcher where you said, "Sorry, your Golden Birthday already happened on &lt;ENTER DATE HERE&gt;. But that's OK, because you're still golden in my eyes."<br>So Steve, if you're not working for Hallmark yet then what in the hell are you waiting for?<br>LOL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714042">12</a> by Steve Withington
		posted on 3/20/2009 at 11:52 PM
		</div>
		<div class="comment_text"><p>@Andy,</p><p>Thanks ... yeah, I was a little bored this afternoon. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714044">13</a> by Torsten Lofhelm
		posted on 3/23/2009 at 4:32 AM
		</div>
		<div class="comment_text"><p>I like the idea but it won't work for Feb 29th, people would never have a "Golden Birthday"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714047">14</a> by Raymond Camden
		posted on 3/23/2009 at 5:17 AM
		</div>
		<div class="comment_text"><p>Those people don't count.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714050">15</a> by Raymond Camden
		posted on 4/8/2009 at 6:10 AM
		</div>
		<div class="comment_text"><p>Joshua, I'm using a slightly modified version of your UDF @ CFLib. Can you shoot me an email so I have your proper address?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714051">16</a> by Raymond Camden
		posted on 4/8/2009 at 6:19 AM
		</div>
		<div class="comment_text"><p>I found it. Posting your UDF now. Let me know if you have any problems with it.</p></div>
	</div>
</div>
		