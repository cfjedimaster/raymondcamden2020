
<div class="comment" id="c_1713679228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679228">1</a> by Ali Daniali
		posted on 4/8/2008 at 9:50 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond for pointing this out. It didn't click until you mentioned it. Now I have my CF8 connected too!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679227">2</a> by Charlie Arehart
		posted on 4/9/2008 at 4:28 AM
		</div>
		<div class="comment_text"><p>This is awesome, Ray. I'd been looking for such a freely available exchange server for months when 8 first came out, to help with demos, and finally gave up. Perhaps this will help more people to share discoveries and observations to help those interested in the Exchange features. Thanks for sharing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679229">3</a> by Patrick
		posted on 4/9/2008 at 6:06 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>thanks for this usefull hint. I have some issue, with exchange a while ago. I always thought, it's the exchange 2007 which is responsible for that. But seems, mail2 web works on exchange 2003.</p><p>The issue occures when trying to get contacts or calendar entries. The error message is always "Requested Exchange resource was not found on the server." But when i try to get my mails, with the same connection, it works fine. Any suggestion?</p><p>Code for calendar:<br>&lt;cfexchangeconnection action="open" connection="conn"<br>      server="<a href="http://disq.us/url?url=http%3A%2F%2Fexchange.mail2web.com%3ADUHkpQPwM0INqsoV72To14iprgI&amp;cuid=3321886" rel="nofollow noopener" title="exchange.mail2web.com">exchange.mail2web.com</a>"<br>      username="mymail@mail2web.com"<br>      password="mypass" /&gt;</p><p>&lt;cfexchangecalendar action="get" name="cal" connection="conn"&gt;<br>&lt;cfexchangeconnection action="close" connection="conn" /&gt;<br>&lt;cfdump var="#cal#"&gt;</p><p>If i replace cfexchangecalendar with cfexchangemail it dumps my emails as expected.</p><p>Greets from Germany<br>Patrick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679236">4</a> by Raymond Camden
		posted on 4/9/2008 at 8:49 PM
		</div>
		<div class="comment_text"><p>Are you saying this code works with mail2web but not exchange 2007? I can't really help much out here. As I said, I've just begun to play with it. If you feel a real bug is in play here, be sure to a) first test with 801, the newest release, and b) file a report at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%3AeVByS_kB5f-F_Xb5m4vrRNXZtoA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/wish">http://www.adobe.com/go/wish</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679231">5</a> by Patrick
		posted on 4/10/2008 at 1:53 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>i'm using 801. I tried the Calendar example on both, mail2web and exchange 2007. Failed on both, only the cfexchangemail works for me. I first thought the issue comes from Exchange 2007, because MS changed something. But it also fails on mail2web, using Exchange 2003. Well, i'll try to post it on Adobe. Thanks for the link!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679234">6</a> by John
		posted on 4/18/2008 at 11:06 PM
		</div>
		<div class="comment_text"><p>This may be a dumb thing to ask, but do you actually have any events in your calendar?  I don't know much about exchange administration but i wonder if they can have it set to not create a calendar in your account until you create an event?  It would probably save a huge amount of overhead if a lot of their users never actually use it.</p><p>That being said, I have worked successfully with CFexchangecalendar in our private environment with both Exchange 03 and 07. I have always included the mailboxName in the connection and the exchangefilter within the exchangecalendar call.  Unlike a mailbox a which has a definite size, a calendar may not so i never thought to not include it.  I did just test it without the filter and it did still work.  It seemed to retrieve the events in this Calendar Year.</p><p>But i would try doing the following after creating a few events: <br>&lt;cfexchangecalendar action="get" name="cal" connection="conn"&gt; &lt;cfexchangefilter name="starttime" from="SOME_START_DATE" to="SOME_END_DATE" /&gt;<br>&lt;/cfexchangecalendar&gt;</p><p>The only issue we have seen is when the user's exchange acccount was set to something other than English.  It seems to look for the folder name "CALENDAR" within the exchange folder structure and throws an error if that is not the case.  In this scenario we found adding ExchangeServerLanguage = "" helped to stop the error, but it took a really long time to complete.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679237">7</a> by Martijn van der Woud
		posted on 4/26/2008 at 1:57 AM
		</div>
		<div class="comment_text"><p>@Patrick: I ran into this problem myself tonight. Turns out that specifying the correct value for ExchangeServerLanguage ("dutch" in my case, in your case probably "german"?) solved my problem. Hope it will work for you as well.</p><p>grtz from the Netherlands</p><p>Martijn van der Woud</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679230">8</a> by Francisco Montes
		posted on 6/12/2008 at 11:08 AM
		</div>
		<div class="comment_text"><p>I was having the same problem. As Martijn pointed out, changing the ExchangeServerLanguage parameter to the correct value seems to be very important. In my case i tried "spanish" and it worked rightaway!</p><p>Thank you so much!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679238">9</a> by Martijn van der Woud
		posted on 6/12/2008 at 3:58 PM
		</div>
		<div class="comment_text"><p>@Francisco: glad this worked for you!</p><p>I am guessing the ExchangeServerLanguage is important, because it determines the name of the folders in which tasks, calendarevents, etc. are stored. That's probably why cfexchangemail can work without specifying the correct language, because the foldername "Inbox" is used in many different languages (it is used in "dutch").</p><p>Might be useful as a comment in the Adobe CF8 livedocs, but comment moderation is slow as hell there, and Adobe does not provide any feedback. :(</p><p>Martijn van der Woud</p></div>
	</div>
</div>
		