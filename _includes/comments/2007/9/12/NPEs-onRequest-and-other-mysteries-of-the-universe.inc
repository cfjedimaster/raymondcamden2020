
<div class="comment" id="c_1713671661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671661">1</a> by DK
		posted on 9/12/2007 at 8:22 PM
		</div>
		<div class="comment_text"><p>Theres been a few CF issues in the past that have caused this. One I remember was having an extends in your cfc and forgetting to put anything (heh).</p><p>Isn't the only thing special about onRequest() that its a mixin for application.cfc ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671676">2</a> by James Edmunds
		posted on 9/12/2007 at 9:31 PM
		</div>
		<div class="comment_text"><p>Ray, these are all queries within the pages called, none in CFCs. And it was behavior spread out across several different scripts throughout the site, some with &lt;cfqueryparam&gt; where clauses but others with no WHERE clause at all.</p><p>Almost all were tightly wrapped in CRTRY blocks which spit out the NPE error message, although a few on some older, but still active, pages were not in CFTRY blocks and the NPE error message came through the onError method.</p><p>Curious, yes?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671670">3</a> by Todd Rafferty
		posted on 9/12/2007 at 9:39 PM
		</div>
		<div class="comment_text"><p>What do you mean by blank OnRequest?  The code above is anything but blank? o_O</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671672">4</a> by Raymond Camden
		posted on 9/12/2007 at 9:41 PM
		</div>
		<div class="comment_text"><p>Blank as in it doesn't do anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671671">5</a> by Todd Rafferty
		posted on 9/12/2007 at 9:43 PM
		</div>
		<div class="comment_text"><p>Wouldn't that be:<br>&lt;cffunction name="onRequest"&gt;<br>&lt;/cffunction&gt;</p><p>Your onRequest code example isn't blank, thus... is doing something.  Hence my confusion. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671669">6</a> by Todd Rafferty
		posted on 9/12/2007 at 9:46 PM
		</div>
		<div class="comment_text"><p>Also, sorry to add this at the last minute, where is he putting this blank onRequest?  To the CFC with the queries on it?  It's not clear above (to me).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671674">7</a> by Raymond Camden
		posted on 9/12/2007 at 9:48 PM
		</div>
		<div class="comment_text"><p>onRequest goes in Application.cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671675">8</a> by Justice
		posted on 9/12/2007 at 9:53 PM
		</div>
		<div class="comment_text"><p>Todd,</p><p>It goes in application.cfc =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671677">9</a> by Todd Rafferty
		posted on 9/12/2007 at 10:00 PM
		</div>
		<div class="comment_text"><p>I thought so.  I guess I'm confused because that's what my onRequest normally looks like except the returntype isn't boolean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671678">10</a> by Shane Zehnder
		posted on 9/12/2007 at 10:20 PM
		</div>
		<div class="comment_text"><p>Well, the onRequest function is a gray area for me, I haven't seen too many uses for it, other than perhaps this example. lol</p><p>It is my understanding that it generally cannot be cocmpletely empty because you would have to include the page you were wanting to process for it to be rendered.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671681">11</a> by Justice
		posted on 9/12/2007 at 11:07 PM
		</div>
		<div class="comment_text"><p>Oh man, I often do security in my onRequest area.  Then I can check if the page requested requires security, or redirect them to a totally different area to login, etc.  I also have an argument of the page requested, so after login I can direct them back where they wanted to go.  Its a great area =)  You could even wrap template information before and after your executed page, and do a header / footer type of thing with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671679">12</a> by Todd Rafferty
		posted on 9/12/2007 at 11:17 PM
		</div>
		<div class="comment_text"><p>Ok?  I do security in my OnRequestStart before the OnRequest has even been started.  I understand that I can do a lot and I do a lot, but I leave my OnRequest as generic as possible at the moment.  My header/footer is a custom tag on the actual cfm pages themselves.  I guess I could push that up one level, but there are usually things being initalized in the shell (navigation, specific javascript files, etc).  I guess it's time to write up a child tag for the custom tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671683">13</a> by Dave Dugdale
		posted on 9/13/2007 at 3:13 AM
		</div>
		<div class="comment_text"><p>I was on a CF7 server at CT and I had that issue, they moved me to a new CF7 server and the issue went away.</p><p>I have now moved one of my sites to CF8 for testing and have not had an issue - I also use CFC'c.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671663">14</a> by Tom Mollerus
		posted on 9/14/2007 at 8:25 PM
		</div>
		<div class="comment_text"><p>I have been living with NPE's exactly like these for months, after poring over my CFCs for non-var'ed variables and other errors. I already had an OnRequest function in my Application.cfc, but after reading this post I decided to try adding a cfreturn.  You know what?  No more NPE's! Woohoo!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671666">15</a> by James Edmunds
		posted on 9/14/2007 at 8:28 PM
		</div>
		<div class="comment_text"><p>So now that's two of us!</p><p>Terrific! But ... who is going to explain to us why in the world this worked?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671664">16</a> by Greg Stevens
		posted on 9/14/2007 at 10:34 PM
		</div>
		<div class="comment_text"><p>@Justice - just wanted to mention another good use for security in onRequest is just to &lt;cfinclude../&gt; your login page rather then including Arguments.requestedPage.</p><p>This way the visitor doesn't have to be redirected to a login page, the URL in their browser always stays the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671665">17</a> by Ian
		posted on 9/24/2007 at 7:32 AM
		</div>
		<div class="comment_text"><p>I tried this and for some reason it shut off the style sheets on my site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671667">18</a> by hjoreteg
		posted on 9/28/2007 at 12:16 AM
		</div>
		<div class="comment_text"><p>I have the same problem with CF 8 on HostMySite. I implemented the suggested fix on this page, but it did not fix the problem. I found something in a CF 8 HotFix that sounded similar to my problem, I installed the HotFix, but STILL no luck.</p><p>If anyone knows of any other possible solutions, I'm all ears.</p><p>Thanks!</p></div>
	</div>
</div>
		