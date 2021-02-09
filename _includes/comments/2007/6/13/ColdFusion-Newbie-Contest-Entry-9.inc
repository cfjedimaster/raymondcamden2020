
<div class="comment" id="c_1713667112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667112">1</a> by DK
		posted on 6/13/2007 at 6:35 PM
		</div>
		<div class="comment_text"><p>I disagree with the 95% cfif block thing somewhat. If the code is re-used by someone else or moved etc and application.cfm(c) is not handling which files can be called, then that block is offerring another layer of logic protection from the script somehow being ran directly.</p><p>In your example what if I somehow got around the 'not X' block, but tampered with the rest of the variables incoming? the rest of the page would run with those tampered variables whereas his version would not because it is locked down tighter to a point. I've personally seen this exact scenario in something I inherited =\</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667115">2</a> by Justice
		posted on 6/13/2007 at 7:46 PM
		</div>
		<div class="comment_text"><p>One no-no I see in many spots:  You are doing a SELECT * from most of your tables.  You should always explicitly know what your query will spit back, doing SELECT * can make you get unexpected results, or even throw an error if a table were to change during production for some reason.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667088">3</a> by Nick Sweeney
		posted on 6/13/2007 at 11:30 PM
		</div>
		<div class="comment_text"><p>Questions &amp; Comments…</p><p>First of all – I am a designer learning to be a programmer – so I am glad you liked the design!  But, Admittedly, I have a long ways to go on the coding side… (Basically, learning to program out of necessity.)</p><p>FYI for everyone – the dload file includes a lot of stuff that isn’t technically part of My Big Fat Monster.  So, like the full path in the application.cfm – it isn’t used. (legacy stuff on my dev site) Sorry.</p><p>For the error handling:<br>I get the server side issue (I need to check for “empty” form variables, and return errors, right?)  But what do you do if you can’t turn off 'Enable Robust Exception'?  And what do you mean by general error handler?  Incorporating cftry and cfcatch tags? (Want to make sure I understand this…)</p><p>Thanks for the example on the var scopes - - I have been struggling to get my head around it, and as someone has pointed out – I have been thinking too hard. It’s simpler than I think – I appreciate being able to see how I could/should have used it in my example.</p><p>For “Check Login”<br>If you place that in the application.cfm doesn’t that mean you have to be logged in to view every page? What if you want everyone to be able to see certain parts of the pages but not the “secure” portions?</p><p>Notes on Monster Status<br>I wanted to be able to give the monsters various states –presumably stored in a db or something– and not just alive and dead – but different forms of death and life. Unfortunately, I never got my head around how that could work without testing the numbers... (Is he alive, but sleeping?) Broken down, Status is on a scale of 1-100, with 90-99 being different deaths. So, for Example: Murdered in battle (92) is a different state than committed suicide (91) but both dead. And I wanted to do different actions and show different graphics based on that.  (The image naming convention works like that   (monster_#MonsterType#_MonsterStatus#.jpg)  I just never finished thinking it out in time – and spent most of my efforts on the Monster Battle logic. (Which was tricky and yes – should probably be in a CFC – but as I stated – these are the first CFC’s I have ever written.)</p><p>Which brings me to the IE only…  Yeah – I only had time to test in IE. The only defense I have there is – 90% of my clients websites have IE only visitors and so I have that as my default browser. I plan to make it browser compatible – someday.  And yeah – I know everyone hates IE – but it’s what “the public” uses – bad or good. So, I usually start there and work backwords. Yes – backwords. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667104">4</a> by Raymond Camden
		posted on 6/14/2007 at 12:15 AM
		</div>
		<div class="comment_text"><p>@DK: I am ok with protecting the page, but my point is this. If your security is:   if(x), then instead of doing</p><p>if(x)<br>lots of code</p><p>I'd do</p><p>if(!x) abort</p><p>To me it is a readability issue.</p><p>As for getting around a !x block... well, you have to be responsible for your code. If you can if(x), you darn well better know how to do !x. ;)</p><p>Justice: Good catch.</p><p>@Nick: If you can't turn off robust error handling, just add a general error handler with either onError, or cferror. You can block all errors from showing up in about 2 minutes with these functions/tags. Check the docs for more info (or my blog, I tend to harp on this subject).</p><p>check login: That is a good question. In the past I've done a few things. I've used a file naming scheme (all secure files are sec_), I've used sub folders (anything in /secured is secured), I've used just hard coded lists (ie, if request is for an item in this list, it isn't secure). As DK said, you do want to also keep the logic in the page itself. There is nothing wrong with being anal when it comes to security. My point had been that I just didn't like the big CFIF block around most of a whole template.</p><p>It's ok on the IE thing - I was just giving you a hard time. ;)</p></div>
	</div>
</div>
		