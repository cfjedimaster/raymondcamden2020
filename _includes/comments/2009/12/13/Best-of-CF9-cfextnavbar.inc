
<div class="comment" id="c_1713720479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720479">1</a> by Kumar
		posted on 12/14/2009 at 9:05 AM
		</div>
		<div class="comment_text"><p>Very nice, I was just looking at the Ext Toolbar stuff today. Ext is a very powerful library, whenever I look into it, the API always proves to be excellent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720496">2</a> by Marko Simic
		posted on 12/14/2009 at 2:19 PM
		</div>
		<div class="comment_text"><p>I may say that I was trilled too when I saw that latest version of Extjs FW is bundled with CF9.<br>But are we going to wait for CF10 to see implementation of forecomming versions of Extjs.<br>Version 1.0 became "outmoded" and many developers replace it with JQuery equivalents.<br>Is it going to happen with this implentation too? Should I start developing/base (long-term) application on something that will not improve by time?</p><p>Btw I found that extjs 3 is very powerful UI framework and nice to work with. <br>IMHO, it still need some size optimization and to start using CSS-like selectors (as jquery do).</p><p>Regarding script "bloat" size. Certainly that is an issue, but we should have in mind that time is working in favor of this issue. <br>Bandwidths are better by time, what makes transfering of so big libraries faster (less notable).<br>Also, many web applications are exclusively for internal use (intranet). Performance always requires some sacrifice.<br>Don't forget caching.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720495">3</a> by Raymond Camden
		posted on 12/14/2009 at 5:13 PM
		</div>
		<div class="comment_text"><p>Marko - using the built in Ajax UI stuff is always a trade off. You get the extreme ease of use but you also lose (sometimes) the extensibility and customization you would have if you did things by hand. This isn't a jQuery versus Ext issue, but simply a case of a 'static' version of a library included with CF.</p><p>What I normally tell people is this: If you have enough experience w/ Ajax where you can nitpick what ships with CF, then you are probably not the audience for something like cfwindow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720500">4</a> by Kumar
		posted on 12/14/2009 at 6:37 PM
		</div>
		<div class="comment_text"><p>The bundled ColdFusion Ajax functionality is really good when starting out with Ajax. Thats how I started out, I got my hands wet with cfgrid, and cfwindow, etc. Once I understood some the basics working with CF8-Ajax, I was able to grasp jQuery and ExtJS much more easily (even then my lack of JavaScript knowledge still slows me down).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720498">5</a> by Raymond Camden
		posted on 12/14/2009 at 7:09 PM
		</div>
		<div class="comment_text"><p>I'll ditto Kumar. CF8 really helped me ramp up on my Ajax skills. That and Spry as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720501">6</a> by Andrew Duvall
		posted on 12/15/2009 at 12:16 AM
		</div>
		<div class="comment_text"><p>I appreciate the thorough review it gives me some thoughts on improvements.  <br>Regarding the 2D-array vs array of struct... I was just re-using a block of navigation code i had used in the past to get started.  I had considered using an array of structures, but felt that although it looked cleaner; the trade-off was that the child links and consequent sub-child-links may appear in an unpredicted order; whereas the multiple dimention array approach assured the order of the subsequent child level navigation.  Hoping that makes sense; though the sample for the contest was simpler than my real world usage.</p><p>Regarding the wish that this was served up as a custom tag... I had considered that, but knew that it would vary greatly from developer to developer if they populate there navigation by database, xml, or arrays and so I took the easy way out and left it NOT as a cftag.</p><p>you brought to my attention how much bloat there is and i will switch to the minified file.  I use this all through-out my application so, i am relieved that it seems to cache well.</p><p>Anyway, this was a fun little project for me so that i could also feel more comfortable with EXT / AJAX solutions.<br>I hope this helps other CF developers that are also beginning their steps into the AJAX direction.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720503">7</a> by Eric
		posted on 1/24/2010 at 12:30 AM
		</div>
		<div class="comment_text"><p>Ray, do you have more info on how you did your version to get around the javascript issues?  On ie8, this thing falls over somewhere  in there:  var mymenu=new SamplePanel({</p><p>So did you loop over the group of nav of cfset there for each of your menu and submenu items?  I am understanding you are replacing the javascript work, I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720502">8</a> by Raymond Camden
		posted on 1/24/2010 at 12:32 AM
		</div>
		<div class="comment_text"><p>Did you mean me or Andrew? I don't use IE. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720509">9</a> by Eric
		posted on 1/24/2010 at 2:00 AM
		</div>
		<div class="comment_text"><p>Neither do I, but was testing in it.</p><p>I found that setting the width causes it to blow up in IE, leaving it commented out and it worked fine.</p><p>Ray, I was talking about how you mentioned you would rewrite it a bit, and I have not used that approach before.  Was more curious how you flesh out all the menu options in your approach to learn from.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720478">10</a> by Raymond Camden
		posted on 1/24/2010 at 6:24 AM
		</div>
		<div class="comment_text"><p>Not quite sure I get what you mean. Remember most of the review was written by Todd Sharp.</p></div>
	</div>
</div>
		