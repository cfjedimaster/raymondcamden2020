
<div class="comment" id="c_1713663477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663477">1</a> by Max
		posted on 3/27/2007 at 4:55 PM
		</div>
		<div class="comment_text"><p>Is this a subtle reminder to get you something off of your wishlist for your birthday? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663479">2</a> by Raymond Camden
		posted on 3/27/2007 at 5:18 PM
		</div>
		<div class="comment_text"><p>Nothing subtle about it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663473">3</a> by Ben Nadel
		posted on 3/27/2007 at 6:42 PM
		</div>
		<div class="comment_text"><p>I think if you Fix() the Now() call, you don't have to worry about the time:</p><p>DateDiff( "d", Fix( Now() ), day )</p><p>That should strip out the time leaving you with a proper day-diff calculation. Date-math is cool!</p><p>4/8 eh? Now, where the heck is that wish list ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663476">4</a> by Mark Holm
		posted on 3/27/2007 at 6:43 PM
		</div>
		<div class="comment_text"><p>Couldn't one achive the same by using<br>&lt;cfset day = CreateDateTime(2007, 4, 8, 23, 59, 59)&gt;<br>to start with instead of just CreateDate?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663478">5</a> by DK
		posted on 3/27/2007 at 7:01 PM
		</div>
		<div class="comment_text"><p>side question. Someone had always told me using IS unstead of EQ uses more overhead in evaluating. Any confirmation or dissuation ?  :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663480">6</a> by Ben Nadel
		posted on 3/27/2007 at 7:14 PM
		</div>
		<div class="comment_text"><p>I think the IS vs. EQ used to be true back in the day, but now that CF is compiled down into Java bytes code, i am sure there is absolutely no difference. The compiler will take care of all the optimization. I think is comes down to personal preference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663482">7</a> by Rob Wilkerson
		posted on 3/27/2007 at 7:30 PM
		</div>
		<div class="comment_text"><p>Now...what about timezone differences?  If I visit your page served from CST at 11:30pm your time (12:30am my time) then your script will show me the wrong number of days - even with the time stripped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663481">8</a> by Ben Nadel
		posted on 3/27/2007 at 7:39 PM
		</div>
		<div class="comment_text"><p>The time is calculated on the server which is always in the same place and appropriate for Ray... your personal time zone does not alter the time Ray was born ;)</p><p>But I know what you are saying. I, however, know nothing about internationalization :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663484">9</a> by Rob Wilkerson
		posted on 3/27/2007 at 7:47 PM
		</div>
		<div class="comment_text"><p>Look *we* all know the world revolves around Ray (I mean...duh), but I'm thinking there may be a few unenlightened souls out there who might be genuinely confused to see that his day count doesn't match theirs.  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663486">10</a> by Rob Wilkerson
		posted on 3/27/2007 at 7:49 PM
		</div>
		<div class="comment_text"><p>I've never had to handle this with dates, but I assume that either the LS functions or UTCOffset() will handle this need nicely.  I just wanted to point out that it was missing in Ray's example so no one got confused.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663485">11</a> by Ben Nadel
		posted on 3/27/2007 at 7:53 PM
		</div>
		<div class="comment_text"><p>I would definitely be interested to know how that works. I have never taken timezone into account in my apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663582">12</a> by TJ Downes
		posted on 3/27/2007 at 8:43 PM
		</div>
		<div class="comment_text"><p>Ray, when is your Bday?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663594">13</a> by TJ Downes
		posted on 3/27/2007 at 8:44 PM
		</div>
		<div class="comment_text"><p>Oh, duh... 4/8! Our birthdays are 4 days apart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663596">14</a> by Joshua Curtiss
		posted on 3/27/2007 at 9:51 PM
		</div>
		<div class="comment_text"><p>Sometimes I'll do &lt;cfset today=DateFormat(Now())&gt; and then have a compare line like &lt;cfset daystill=dateDiff("d", today, day)&gt;. This also takes care of the time issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663599">15</a> by TJ Downes
		posted on 3/27/2007 at 10:22 PM
		</div>
		<div class="comment_text"><p>Joshua, I don't think that does handle the date time issue as the Now() function generates time based upon the server's time, not GMT. I could be wrong, but this is the way I understand it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663598">16</a> by Raymond Camden
		posted on 3/28/2007 at 12:42 AM
		</div>
		<div class="comment_text"><p>Wow, lots of comments here. I'll have to be quick as I'm doing training now. (Notice how low my blog posts are this week? Sorry folks. )</p><p>Mark/Ben - your first comments about other fixes - you say "couldn't" as if you didn't try - did you try them and did they indeed work?</p><p>is verus eq: ditto ben. no big deal anymore.</p><p>timezones: So the quick answer is - at some point you have to make a basic assumption about your audience. So I don't think it is a big deal for a web  site to assume an American time zone, especially if it is an American company. Of course, as an American I'm biased. ;) But if you DID know the users TZ, you could simply add that to now(), right?</p><p>Joshua (and Ben/Mark), thanks for pointing out simpler solutions. I'll try to post a follow entry tonight since some folks never read the comments. I'll be taking full credit and deleting your comments of course. All part of my master plan!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663595">17</a> by Joshua Curtiss
		posted on 3/29/2007 at 3:40 AM
		</div>
		<div class="comment_text"><p>@Ray: Lol. That would not be very Jedi-like.</p><p>@TJ: I was just addressing Ray's post, specifically regarding date arithmetic without time. I wasn't getting into the timezone quagmire. :-)</p></div>
	</div>
</div>
		