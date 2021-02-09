
<div class="comment" id="c_1713657509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657509">1</a> by Ben Nadel
		posted on 9/21/2006 at 12:55 AM
		</div>
		<div class="comment_text"><p>Nice post Ray. Along those same lines, I have been fooling around with the idea of allowing users to set up a "heart beat" Javascript method. This would be for admin-type sections, not for the public. The idea is that a user could opt to be kept logged in (via a user pref. page) by having a Javascript method that Pings the app every X seconds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657525">2</a> by Raymond Camden
		posted on 9/21/2006 at 1:00 AM
		</div>
		<div class="comment_text"><p>I think in the old days (app.cfm, not app.cfc), you could cheat and rerun the cfapp tag with a different timeout. ;) I think. Just ignore me, that's a bad idea. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657526">3</a> by Ben Nadel
		posted on 9/21/2006 at 1:02 AM
		</div>
		<div class="comment_text"><p>Yeah, I dont think you can do that anymore. I was recently experimenting with that idea to see if I could force kill an applicaiton / session by re-running the app tag with zeroed-out timespans.</p><p>No luck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657527">4</a> by Raymond Camden
		posted on 9/21/2006 at 1:04 AM
		</div>
		<div class="comment_text"><p>Lord forbid CF make that easy for us. Along with getSessions(), etc. (Ok, I won't complain about that again.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657530">5</a> by Ben Nadel
		posted on 9/21/2006 at 1:26 AM
		</div>
		<div class="comment_text"><p>I had this idea for using a CFHTTP page grab sending CFID/TOken in the URL... as in:</p><p>&lt;cfhttp url="http://.....kill.cfm?cfid=##&amp;cftoken=##" /&gt;</p><p>Then that page would define the CFApplication tag with no timespan (or &lt; 1 second or something). I never got it to work though. I think part of the problem was that the calling page (page performing CFHTttp) has the same session (in my testing). I would need to set up a scheduled task that did not have a session do call something like that... but then it wouldnt have access to the original CFID/CFTOKEN...</p><p>ok, now I am rambling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657529">6</a> by Sami Hoda
		posted on 9/21/2006 at 2:50 AM
		</div>
		<div class="comment_text"><p>How effective is this when a user open a new tab and now has two windows open with the app? I'm assuming you will get two different pop-ups at two different times, and the first one will not be an accurate representation of the time left in the app. Is that correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657532">7</a> by TJ Downes
		posted on 9/21/2006 at 3:38 AM
		</div>
		<div class="comment_text"><p>Just a word on the Javascript setTimeout function. I love it, but recently i wreaked havock on one of my apps. I was using setTimeout for a timed page redirect to serve up some PDF files created by CFDOCUMENT. These pages contained cfcontent and cfheader tags. For weeks I could not figure out why images where not appearing on my pages. With further testing I removed the setTimeout function and the images worked perfectly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657531">8</a> by Raymond Camden
		posted on 9/21/2006 at 4:53 AM
		</div>
		<div class="comment_text"><p>Sami: Absolutely. Most likely that would be the rare case though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657534">9</a> by John Farrar
		posted on 9/21/2006 at 5:46 AM
		</div>
		<div class="comment_text"><p>Could do something crazy. Like use a popup div rather than a alert. The let the user continue his session if before time out. If timeout passes, have him login before posting the content of a large form. AJAX is a marvelous thing!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657510">10</a> by Sid Wing
		posted on 9/21/2006 at 6:57 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>GetSessions()... now THAT would be cool...  I have SEVERAL uses for that</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657519">11</a> by Rob Pilic
		posted on 9/21/2006 at 8:34 PM
		</div>
		<div class="comment_text"><p>Hi Ray - I do this with a div popup and I do introspect the app for the session timeout: this.sessiontimeout returns the timeout in seconds. Maybe this is only an option with Application.cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657518">12</a> by Sami Hoda
		posted on 9/21/2006 at 8:41 PM
		</div>
		<div class="comment_text"><p>@Rob,</p><p>I'd love to see that if possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657515">13</a> by Raymond Camden
		posted on 9/21/2006 at 10:01 PM
		</div>
		<div class="comment_text"><p>rob: the problem though is that you wouldn't have access to that outside of the app.cfc file. You would need to do something like this in onapplicationstart:</p><p>application.stimeout = this.sessiontimeout</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657517">14</a> by Rob Pilic
		posted on 9/21/2006 at 10:39 PM
		</div>
		<div class="comment_text"><p>Ray: are you sure? If I dump the 'this' scope on any page I see everything in app.cfc, including the on-event methods. I have an include file for the javascript session timer stuff that refences this.sessiontimeout directly and it seems to work ok, though now I am getting nervous :-)</p><p>Sami: I did this a while ago so I am grimacing a bit as I look at it now, but essentially I have a table with my alert message that is hidden off the browser screen (visiblity:hidden; left:-100px, top:-100px;). Then I set the  timeout value on the page:</p><p>timeout = (this.sessiontimeout * 1000) - 1500</p><p>I give them an extra minute plus so the CF session doesn't end before they can respond to the alert. When the session timer runs down I change the class of the table so it's visible and give the user 60 seconds to respond. If the 60 second timer runs down without any response from the user, I location.href them to a page that clears their session and displays a message that they have been automatically logged out. I like this because this way they won't fill out a long form and click submit, only to be told that their session has expired. I'd be glad to send you the code, just shoot me an email at robertpilic AT yahoo DOT com if you're interested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657514">15</a> by Rob Pilic
		posted on 9/21/2006 at 10:49 PM
		</div>
		<div class="comment_text"><p>Woops I should've copied and pasted - it's actually</p><p>timeout = (this.sessiontimeout * 1000) - 90000</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657522">16</a> by Raymond Camden
		posted on 9/21/2006 at 11:48 PM
		</div>
		<div class="comment_text"><p>Ah - you have the onRequest method. One of the "side effects" of using onRequest is that it copies the app.cfc stuff to the page. If you don't use onRequest (which most folks don't), then you don't have that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657516">17</a> by Rob Pilic
		posted on 9/22/2006 at 12:11 AM
		</div>
		<div class="comment_text"><p>Ah yes, I see that now in livedocs as well. I think I'll switch to your suggestion of doing something like application.stimeout = this.sessiontimeout in app.cfc. I don't want a "side effect" in production code. Thanks for the tip!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657520">18</a> by Ketan
		posted on 9/22/2006 at 9:06 PM
		</div>
		<div class="comment_text"><p>Hey Ray, I have been wanting to something like this for a long time.  I just implemented this at my work, and it works great!</p><p>Thanks...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657521">19</a> by dave
		posted on 11/9/2006 at 10:16 PM
		</div>
		<div class="comment_text"><p>Hi, is there a way to get value of Session time out, no matter it is set in Cf adminstrator or application.cfc?<br>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657619">20</a> by Raymond Camden
		posted on 11/10/2006 at 12:40 AM
		</div>
		<div class="comment_text"><p>I don't think so. I'm sure you could via ServiceFactory, but I wouldn't recommend that. I'd just store it as a variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657635">21</a> by dave
		posted on 11/10/2006 at 1:09 AM
		</div>
		<div class="comment_text"><p>Hey, Ray, <br>Thanks for the response so quickly. I might not state my throught clearly.<br>Anyway, You said you would like to store it as a variable. How to do this? I am still using CFMX 6.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657631">22</a> by Raymond Camden
		posted on 11/10/2006 at 1:12 AM
		</div>
		<div class="comment_text"><p>If you look at my first code block, you will see I hard coded sessionTimeout. You would just change 2 (the number of minutes) to the real number for your application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657617">23</a> by dave
		posted on 11/10/2006 at 3:26 AM
		</div>
		<div class="comment_text"><p>Oh, ok, hard code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657614">24</a> by Phillip Senn
		posted on 11/19/2006 at 7:48 AM
		</div>
		<div class="comment_text"><p>Dude!<br>Do an iTunes search for "javascript".<br>There's actually a song called "Javascript Functions".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657615">25</a> by Raymond Camden
		posted on 11/20/2006 at 8:51 AM
		</div>
		<div class="comment_text"><p>Scary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657618">26</a> by valerie
		posted on 12/29/2006 at 2:09 AM
		</div>
		<div class="comment_text"><p>How can you insure thie alert is on top of any programs you have open?  Is that possible?  You know we have mulitple apps open at once.  It would be good to actually see the reminder no matter program you are in?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657621">27</a> by Raymond Camden
		posted on 12/29/2006 at 9:22 AM
		</div>
		<div class="comment_text"><p>I think it depends on the OS and your settings. For me, a browser alert will NOT take over focus if I am using another app, and that is nice. (Personally I despise it when an application steals focus. No one app should be able to stop you using another app.) At minimum it should be on top when then browser is being used.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657616">28</a> by JC
		posted on 3/2/2007 at 4:16 AM
		</div>
		<div class="comment_text"><p>I don't have CF 7.0.  Is there anything similar toScript in previous versions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657629">29</a> by I Rz
		posted on 3/23/2007 at 9:54 PM
		</div>
		<div class="comment_text"><p>@JC<br>I don't know why no one thought your question was worth a response, but you can try this:</p><p>sessionTimeout = 60000 see above</p><p>var sTimeout = #sessionTimeout#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657620">30</a> by Kevin
		posted on 5/8/2007 at 11:40 PM
		</div>
		<div class="comment_text"><p>I'm trying to use a confirm dialoge box to continue the session, but I'm having this problem - while the dialogue box is open, the session timer is stopped.  So if the person really did walk away and leave the window open, it never times out and the next person can come along a day later and continue their session.<br>How can I make the dialogue box itself time out if it gets no response?<br>----<br>    var revive = window.confirm("Your session is about to time out.  Do you want to continue?");<br>	if(revive){<br>    var imgAlive = new Image();<br>	var d = new Date();<br>	imgAlive.src = 'alive.cfm?d=' + d;<br>	}else{<br>	 location.replace("App_Instructions.cfm");<br>	}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657625">31</a> by Kevin
		posted on 5/9/2007 at 12:50 AM
		</div>
		<div class="comment_text"><p>..nevermind, the whole dialogue box thing was clumsy and annoying, anyway.  I just made my own timer, and put it at the top of the page with a reset button next to it.</p><p>If the user doesn't pay attention to it, it's their own fault.</p><p>----<br>For security, page will time out in <br>   &lt;input type="button" id="timebtn" value="20 minutes 0 seconds." onClick="keepAlive()"&gt;<br>   Click button to reset timer and continue entering data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657633">32</a> by kapitannwel
		posted on 2/20/2008 at 8:46 AM
		</div>
		<div class="comment_text"><p>I have a page wherein i need to logoff user by querying database after some idle time. thank you for this.<br>i greatly appriciate it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657634">33</a> by Gers
		posted on 5/7/2009 at 8:30 PM
		</div>
		<div class="comment_text"><p>I know this is an older post, but very helpful to me.  Thanks very much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657632">34</a> by Gers
		posted on 8/20/2009 at 1:11 AM
		</div>
		<div class="comment_text"><p>Anyone else have problems with this not working any more on the new Safari 4.0.3?<br>I get logged out as soon as I touch the browsers back button.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657627">35</a> by Dan Fredericks
		posted on 2/18/2010 at 12:27 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I implemented this code, however it seems to not recognize when I start typing on the page, or click on a url link. Shouldn't the code know if I started using the form again? Does this not start my session again, or do I actually have to hit a refresh button or some save button on the page to restart my session?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657622">36</a> by Raymond Camden
		posted on 2/18/2010 at 1:18 AM
		</div>
		<div class="comment_text"><p>Typing on a form does nothing to update a user's session. Typing in a form is client side. Submitting a form is server side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657630">37</a> by emmy smith
		posted on 4/2/2013 at 8:42 PM
		</div>
		<div class="comment_text"><p>pls sir, i need your help, am running a hotspot intenet cafe, on mikrotiik os, and i need alert timeout left time for my users, how best , can i implement this . <br>thank u<br>emmy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657628">38</a> by Raymond Camden
		posted on 4/2/2013 at 8:47 PM
		</div>
		<div class="comment_text"><p>Sorry, I've got no idea what Mikrotiik OS is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657623">39</a> by Cody Kratzer
		posted on 6/18/2013 at 8:34 PM
		</div>
		<div class="comment_text"><p>Ray, great stuff! This works beautifully in my back-end web application for my company's employees.</p><p>Question: Are you aware of a way to check on the session timeout without resetting the timeout clock? Often users of our back-end system will have multiple windows open which causes the session warning to be inaccurate. My original plan was to do an AJAX post and check on the session and then react accordingly, but obviously if I did an AJAX post and the session did not expire, then I just reset the timeout clock leaving the user logged in indefinitely.</p><p>Any information you can provide would be great! Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657626">40</a> by Raymond Camden
		posted on 6/18/2013 at 11:00 PM
		</div>
		<div class="comment_text"><p>I did a bit of research into this. Apparently the only way to do cookie-less ajax calls is to use a subdomain that didn't have cookies on it (I mean use a subdomain just for the ajax call).</p><p>That's an option, but probably not terribly simple.</p><p>You could also use websockets to broadcast out the state, but you would need to keep a copy of the info (sessions + timeout) in the application scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657636">41</a> by Cody Kratzer
		posted on 6/18/2013 at 11:54 PM
		</div>
		<div class="comment_text"><p>Thank you, Ray. I will have to look into this in more detail.</p></div>
	</div>
</div>
		