
<div class="comment" id="c_1713652027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652027">1</a> by Neil Middleton
		posted on 4/20/2006 at 6:35 PM
		</div>
		<div class="comment_text"><p>Jeez Ray, are you in a hurry or something?  Posting a CFC only three hours after mentioning that the API's out?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652012">2</a> by Raymond Camden
		posted on 4/20/2006 at 6:37 PM
		</div>
		<div class="comment_text"><p>I'm a fast coder. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652030">3</a> by mikeD
		posted on 4/20/2006 at 7:11 PM
		</div>
		<div class="comment_text"><p>Are you effing kidding me?  You did this already?  Christ Ray...I hate you. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652022">4</a> by Raymond Camden
		posted on 4/20/2006 at 7:15 PM
		</div>
		<div class="comment_text"><p>Later tonight I'm going to wrap up the Read part. It's really not that much left to do. The biggest dang thing will be the TZ conversions.</p><p>The "published" field is the date of the event (noticed I copied it to date). It is GMT as far as I can see. But the Start and End Times seem to be based on GMT-7. So to 'fix' it I need to diff it against your offset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652035">5</a> by Michael Brennan-White
		posted on 4/20/2006 at 7:47 PM
		</div>
		<div class="comment_text"><p>My Calendar URL doesn't have the URL values at the end.  My URI is <a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fcalendar%2Frender%3Ao4zuuodCdNMLlQs4n_zlUrvr5cE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/calendar/render">http://www.google.com/calen...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652033">6</a> by sunny
		posted on 4/20/2006 at 7:50 PM
		</div>
		<div class="comment_text"><p>i got this error....</p><p>An error occured while Parsing an XML document. <br>123 : &lt;cfset variables.calendarXML = xmlParse(results.fileContent)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652023">7</a> by Raymond Camden
		posted on 4/20/2006 at 7:55 PM
		</div>
		<div class="comment_text"><p>Michael, you don't want the URL in the browser. You want the URL you get from the XML link in the calendar settings.</p><p>Sunny: See if this helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652028">8</a> by sunny
		posted on 4/20/2006 at 8:04 PM
		</div>
		<div class="comment_text"><p>An error occured while Parsing an XML document.  <br>Content is not allowed in prolog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652025">9</a> by Raymond Camden
		posted on 4/20/2006 at 8:05 PM
		</div>
		<div class="comment_text"><p>SUnny, share your URL. If it is your private calendar, then send it to me via email.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652024">10</a> by Raymond Camden
		posted on 4/20/2006 at 8:28 PM
		</div>
		<div class="comment_text"><p>I forgot to say. Use the XML url, NOT the ical url. Your URL should say feeds in it, not ical.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652026">11</a> by scott p
		posted on 4/20/2006 at 8:32 PM
		</div>
		<div class="comment_text"><p>doh....</p><p>that worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652029">12</a> by Raymond Camden
		posted on 4/20/2006 at 8:34 PM
		</div>
		<div class="comment_text"><p>Just an FYI, I've got time zone offsets working locally. Now your Date, Start, and End Time appear right for your TZ. It's up to you to figure out the TZ, but if it is equal to your box, you can use CF's getTimeZoneInfo().</p><p>You can also refresh the cache by calling update().</p><p>If folks want it right now, let me know and I'll update the zip. (After lunch anyway.)</p><p>Next is translating recurrences.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652032">13</a> by Raymond Camden
		posted on 4/20/2006 at 8:34 PM
		</div>
		<div class="comment_text"><p>Oh and hey, don't forget that if you like this, you can always visit my wishlist. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652034">14</a> by Lucas Sherwood
		posted on 4/21/2006 at 12:28 AM
		</div>
		<div class="comment_text"><p>Ray, you have too much time on your hands! Don't you have a family or somthing??</p><p>Looks swwweet though! Roll on version 1.0</p></div>
	</div>
</div>
		