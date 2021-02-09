
<div class="comment" id="c_1713659651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659651">1</a> by Jay McConathy
		posted on 11/29/2006 at 7:37 PM
		</div>
		<div class="comment_text"><p>Very nice Ray. Do you have a piece of code using that anywhere?</p><p>Jay</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659656">2</a> by Raymond Camden
		posted on 11/29/2006 at 7:43 PM
		</div>
		<div class="comment_text"><p>No, because my code is never slow.</p><p>(Do you hear thunder?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659653">3</a> by Jay McConathy
		posted on 11/29/2006 at 8:19 PM
		</div>
		<div class="comment_text"><p>HAHAHA</p><p>I do not usually have the problem but I like the idea of a loading page sometimes. we pull huge quantities of data from databases and that can be slow at times so I appreciate the code.</p><p>Jay</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659659">4</a> by Mike McConnell
		posted on 11/29/2006 at 8:21 PM
		</div>
		<div class="comment_text"><p>I do something similar to this using a DIV tag and an animated GIF (a spinning hour glass).  It gets the point across effectively because, unlike Ray, my code is dreadfully slow.  I've found that the spinning hour glass actually hypnotizes the user into a completey passive state so they don't even notice the wait (I wish).</p><p>M. McConnell</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659654">5</a> by Raymond Camden
		posted on 11/29/2006 at 8:26 PM
		</div>
		<div class="comment_text"><p>Seriously - I don't remember where I've used that before. I'm sure I did - or something close to it in the past. Or maybe I didn't. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659658">6</a> by Jay McConathy
		posted on 11/29/2006 at 8:38 PM
		</div>
		<div class="comment_text"><p>Mike would it be possible to get an example of it??</p><p>hour glass and all??</p><p>Jay</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659649">7</a> by Scott P
		posted on 11/29/2006 at 8:51 PM
		</div>
		<div class="comment_text"><p>@Ray, - you can simplify the javascript into just one line:<br>&lt;script language="javaScript"&gt;<br>document.getElementById('loading').style.display='none';<br>&lt;/script&gt;</p><p>@jay<br>You can get some nice animated waiting style images from <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.ajaxload.info%3ArINF1-HOwufcryYzmcBvTDqF7KA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ajaxload.info">http://www.ajaxload.info</a></p><p>Using one of those, your page could be this:</p><p>&lt;span id="loading"&gt;<br> &lt;img src="ajax-loader.gif" alt="please wait"&gt;<br>&lt;/span&gt;</p><p>&lt;cfflush&gt;</p><p>page stuff here</p><p>&lt;script language="javaScript"&gt;<br>document.getElementById('loading').style.display='none';<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659657">8</a> by TJ Downes
		posted on 11/29/2006 at 9:32 PM
		</div>
		<div class="comment_text"><p>Haha! I love it Ray. I was thinking "Why would I ever want to have a please loading screen? If it takes that long maybe I should be finding a faster way to do it.". Then your comment of "No, because my code is never slow." made me die laughing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659652">9</a> by Joe Zack
		posted on 11/29/2006 at 9:47 PM
		</div>
		<div class="comment_text"><p>I actually did something quite similar a couple years ago, moving and cropping a ton of images. I've actually noticed a bit of a problem with IE7 and &lt;cfflush&gt;, sometimes IE7 doesn't finish drawing the page. I haven't had the problem in other browsers, but it doesn't happen consistently so it might very well be the code.</p><p>Que serrar!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659655">10</a> by Marcos Placona
		posted on 11/29/2006 at 9:48 PM
		</div>
		<div class="comment_text"><p>Ray, I think it might be very useful when exporting data from the database to spreadsheets. One of my clients here have this kind of requests very often. I was using some javascript and cfflush to do the job, but it wasn't as elegant as yours. Well done ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659661">11</a> by Emmet
		posted on 11/29/2006 at 10:42 PM
		</div>
		<div class="comment_text"><p>We do something like that with our hotel reservation system.  Searching through multiple hotels with multiple room types and date ranges can take some time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659666">12</a> by Jay McConathy
		posted on 11/29/2006 at 10:42 PM
		</div>
		<div class="comment_text"><p>Is there a good way to add a counter or timer to this to see how long the load is taking??</p><p>Jay</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659667">13</a> by Justice
		posted on 11/29/2006 at 11:06 PM
		</div>
		<div class="comment_text"><p>I just have a form display at the beginning, cfflush like you have, then inside my processing loop I use javascript and a flush to set a form field to whatever percentage my process is at.  Makes long reports (when the user requests 3 years of data) at least appear to be doing something for the user. =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659662">14</a> by Tuyen
		posted on 11/29/2006 at 11:12 PM
		</div>
		<div class="comment_text"><p>we can add a javascript progress bar to the "loading" div:</p><p>&lt;head&gt;<br>&lt;script language="JavaScript" src="jscripts/xp_progress.js"&gt;&lt;/script&gt;<br>&lt;/head&gt;</p><p>&lt;p id="loading"&gt;Page Loading - Please Wait...&lt;/p&gt;<br>&lt;script type="text/javascript"&gt;<br>var bar1= createBar (300,15,'white',1,'black','blue',85,7,3,"");<br>&lt;/script&gt;</p><p>&lt;cflush&gt;</p><p>&lt;script type="text/javascript"&gt;<br>setTimeout("document.getElementById('loading').style.display = 'none'", 2000); <br>setTimeout("bar1.hideBar()", 2000); <br>&lt;/script&gt;</p><p>You can find more about xp_progress.js here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.dynamicdrive.com%2Fdynamicindex11%2Fxpprogressbar.htm%3AF2tKwtC7DcgF8Ri9IWXXjoyL8NI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dynamicdrive.com/dynamicindex11/xpprogressbar.htm">http://www.dynamicdrive.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659663">15</a> by Jay McConathy
		posted on 11/30/2006 at 12:10 AM
		</div>
		<div class="comment_text"><p>That is pretty slick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659670">16</a> by Brian Swartzfager
		posted on 11/30/2006 at 12:13 AM
		</div>
		<div class="comment_text"><p>When I redid our picture-heavy greyhounds site (<a href="http://disq.us/url?url=http%3A%2F%2Fgreyhounds.swartzfager.org%3AjAna-TU5azGWN1Ue-G4zD9IvY5g&amp;cuid=3321886" rel="nofollow noopener" title="greyhounds.swartzfager.org">greyhounds.swartzfager.org</a>) this past summer, I used a similar technique to display "Loading page..." when the page first loaded, then created two JavaScript functions that would  cause the text to fade in and out until the page finished loading (to indicate activity).</p><p>I long for the day when all of my family members have broadband.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659664">17</a> by Christopher Wigginton
		posted on 11/30/2006 at 1:01 AM
		</div>
		<div class="comment_text"><p>I've used that in the past to send a bunch of script blocks, where each one increments a counter or sets the size of progress bar image.  Dynamically generate the script block with the increment code, flush that, process a bit more, flush another script block, etc.</p><p>You could also use the onload event, which would kick in once the entire page was loaded.</p><p>&lt;script language="javascript"&gt;<br>window.onload = function(){<br> document.getElementById('loading').style.display='none';<br>}<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659665">18</a> by Jay McConathy
		posted on 11/30/2006 at 1:45 AM
		</div>
		<div class="comment_text"><p>I would really like to either do a bar that progresses across as the page builds and/or have some time of timer showing how ling it has been. Just not sure how to do that.<br>What has been posted here has been great though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659669">19</a> by Raymond Camden
		posted on 11/30/2006 at 1:51 AM
		</div>
		<div class="comment_text"><p>Jay, see Tuyen's comment. If folks think it is worthwhile. I can make a simple example as well.</p><p>Believe it or not I did this myself as well... in Perl... in 93 or so. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659668">20</a> by Jay McConathy
		posted on 11/30/2006 at 2:01 AM
		</div>
		<div class="comment_text"><p>OK, Got the bar working and I like that. Now is there any way to do the timer type display to show how long the wait has been? Not a must but I have a few pages I want to track and this might be a good way to prove to some of the unbelievers I have here that say it takes longer than i know it does to pull data....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659671">21</a> by Brian Swartzfager
		posted on 11/30/2006 at 2:19 AM
		</div>
		<div class="comment_text"><p>Jay,</p><p>Would using two GetTickCount functions to get the time it took to process the page do the trick?  You could do it like this:</p><p>1.	Put the first GetTickCount statement right after the &lt;cfflush&gt; and assign its value to a variable (say startTime).<br>2.	Put the second GetTickCount statement at the end of your code and assign its value to a variable (endTime).<br>3.	Subtract startTime from endTime and divide by 1000 to get the number of seconds it took to process the page.<br>4.	Put a JavaScript block at the end of the code that writes that result to a &lt;span&gt; or &lt;div&gt; element at the top of the page (like “Load time: 83 seconds”).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659672">22</a> by Raymond Camden
		posted on 11/30/2006 at 2:23 AM
		</div>
		<div class="comment_text"><p>Jay, all you need to do is run a JS function every second. You can do that with setTimeout(). Then you just update some text showing the # of seconds. Shouldn't be too hard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659683">23</a> by Jay McConathy
		posted on 11/30/2006 at 2:32 AM
		</div>
		<div class="comment_text"><p>OK that sounds good. I am not very good with JavaScript but I am ready to learn. I will try what you guys suggest.. Thanks Much</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659680">24</a> by Gary Fenton
		posted on 11/30/2006 at 4:17 AM
		</div>
		<div class="comment_text"><p>I don't believe the users want to know how long the page took to load, they want to know how much longer they have to wait until it finally does load! Since that is programatically impossible (depends on complexity of query and how busy your db is) it may be possible in certain circumstances to give them a rough indication of the percentage of completion.</p><p>Taking an easy example, if you have 4 queries to perform just CFLUSH some javascript after each CFQUERY to knock a visual counter on the page up by 25%. It will only be accurate if all queries take the same amount of time to process, so in reality the progress bar will show the percentage of CFML processed rather than a percentage of time to wait. If you only have 1 big query to do then obviously this idea won't help you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659685">25</a> by Tero Pikala
		posted on 11/30/2006 at 4:47 PM
		</div>
		<div class="comment_text"><p>If you can assume each load will take approximately same time you could save couple of previous page load times to application scope, take average of them and send that to JS functions that will show progress bar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659681">26</a> by Jay McConathy
		posted on 11/30/2006 at 7:02 PM
		</div>
		<div class="comment_text"><p>The way our data is I have to process one fairly large query and then in the loop of that I use the retrieved data to run many smaller queries so it can run hundreds of queries at a time. the average time for a page to run is about 10 - 15 seconds if you just watch and time it<br>or run a time and display it upon completion.<br>I have still not gotten the hang of making javascript show time as it loads so if anyone has a simple example it would be great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659682">27</a> by Tom McNeer
		posted on 12/1/2006 at 3:32 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'd like to inject a twist into this whole issue, not specifically related to displaying loading messages, but rather to the underlying issue of long-running processes, especially as applied to Model-Glue. I've tossed this out on the MG list a couple of times, but without much response.</p><p>So -- you have a Model-Glue event that sets off a long-running process. One that runs long enough that it could possibly run into the default CF timeout (and you don't want to reset the default timeout on the installation just for this one process).</p><p>Where in the sequence of MG actions would you/could you place a CFSETTING timeout value that would prevent the process from timing out? And how would you set up an event structure that would allow for a "loading" message of some sort, as well as for some sort of check to see if the process were complete. Then, of course, the results would need to be displayed.</p><p>I'm well aware that I just massively overcomplicated this whole blog entry. But since you've been working with Model-Glue a lot lately, I'm hoping you (or someone else listening) might be able to provide a little guidance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659676">28</a> by Raymond Camden
		posted on 12/1/2006 at 4:18 AM
		</div>
		<div class="comment_text"><p>I don't have proof - but I seem to remember that you could connect Sean's Concurrency library with Model-Glue, which would let you fire the events concurrently.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfconcurrency.riaforge.org%2F%3AUKhpntOt2n_DQSR1dO_p1o_ZAA4&amp;cuid=3321886" rel="nofollow noopener" title="http://cfconcurrency.riaforge.org/">http://cfconcurrency.riafor...</a></p><p>I don't think you could do the "please wait" as we did though. You could tell the view to reload using JS, after like 3 seconds, and have the controllers check and see if the concurrent event is done yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659679">29</a> by Tom McNeer
		posted on 12/1/2006 at 4:37 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks. But unfortunately, the site in question is running CF Standard, so the Asynchronous Gateway isn't available.</p><p>How about something like this (not my idea, suggested by someone smarter):</p><p>The originating event simply contains two result statements in its event-handler tag. One kicks off the long-running process. The second simply returns a view, which could contain a loading message.</p><p>The first event goes on its merry way -- can you put a CFSETTING tag in a CFC method? -- and when it's complete, sets a session variable.</p><p>In the view produced from the second event, there's an iframe or a refresh, or an AJAX call, or something, which fires an event which checks the status of that session variable. If the process is complete, a result tag fires a final event to show the results.</p><p>This sounds pretty close. But I think I'm missing something. And of course, I've gone way far afield from the original subject.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659677">30</a> by Raymond Camden
		posted on 12/1/2006 at 8:21 PM
		</div>
		<div class="comment_text"><p>I don't think that is going to work - as you won't see the view from the second result till the first one is also complete. Maybe consider using CFSCHEDULE to add an event?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659678">31</a> by Tom McNeer
		posted on 12/1/2006 at 9:06 PM
		</div>
		<div class="comment_text"><p>What if the order of events were reversed, with the "loading" view firing first, followed by the event that starts the long process? Would they both execute then?</p><p>As far as the CFSCHEDULE suggestion goes: do you mean, use a CFSCHEDULE tag, scheduled to Now(), to call one of the events?</p><p>And -- one of the things I'm most confused about: where would I place a CFSETTING tag to avoid the long process from timing out? Can I simply place it in the method of the controller that's fired for the process, or perhaps in a global OnRequestStart method, applying the CFSETTING based on the name of the event?</p><p>I bring up the latter idea because in Mach-II, Peter Farrell has written a filter that can be applied to long-running events. If you apply the filter to an event and specify a timeout param, the CFSETTING appears to work throughout the event - or I guess, throughout the request. So I'm wondering if you could do much the same thing in MG,using an OnRequestStart method? Does any of that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659687">32</a> by Raymond Camden
		posted on 12/1/2006 at 9:30 PM
		</div>
		<div class="comment_text"><p>In the MG context, no, you won't see view2 till view1 is done rendering.</p><p>Yes to your cfschedule thing.</p><p>CFSETTING: I'd place it in Application.cfm and make it global. You could also do it in the controller for the event in question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659684">33</a> by Tom McNeer
		posted on 12/1/2006 at 10:05 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks for all your help.</p><p>As far as the sequence thing goes, what I was really asking (and I'll experiment to see the results on my own) was whether you could a) fire an event that simply announced two result; then b)the first resulting event would deliver some sort of "loading" view; and c) the second resulting event would actually call the long-running process. In that case, would MG render the loading view, then go on and start the process? If so, then it might be possible to check the progress of the event and deal with it.</p><p>Anyway, I'll play with it and see what happens. If I come up with anything useful, I'll share it.</p><p>Thanks again for your generous assistance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659686">34</a> by David
		posted on 6/9/2010 at 12:45 AM
		</div>
		<div class="comment_text"><p>What about when IIS compression is turned on?  I read that will essentially flunk cfflush's ability to output data since IIS is holding onto the file/process until it's finished in order to compress it and send it to the browser.  I have CF9 and IIS6 and can't get cfflush to work in even the most simple cases, and I have IIS compression turned on.  Is there a way around?  I guess doing something with threads and AJAX is probably the best way.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659690">35</a> by Raymond Camden
		posted on 6/9/2010 at 1:10 AM
		</div>
		<div class="comment_text"><p>Yes, I'd switch to an Ajax-based system. I've got a blog post on that here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659693">36</a> by Stephen
		posted on 7/21/2010 at 6:22 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I put  this:</p><p>&lt;span id="loading"&gt;<br>&lt;img src="ajax-loader.gif" alt="please wait"&gt;<br>&lt;/span&gt; &lt;cfflush&gt;</p><p>above all my long running queries to make it work.  This puts it above my &lt;html&gt; tags.  It seems to work just fine, but is this a bad idea?</p><p>Saw you at CFUnited last year.  I hate that is is the last one.  I can't come!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659691">37</a> by Raymond Camden
		posted on 7/22/2010 at 5:30 PM
		</div>
		<div class="comment_text"><p>Browsers tend to be pretty forgiving, as you have seen. So this "works". Id consider moving it into the &lt;body&gt; block though. Not knowing the rest of your layout though I'm not sure if there is a reason you didn't want to in the first place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659695">38</a> by Stephen
		posted on 7/22/2010 at 5:37 PM
		</div>
		<div class="comment_text"><p>Thanks Ray - I did move it into the body and all works perfectly in my test environment, but it seems I have the same problem you did above.  It does not work in production (Windows 2008, CF8 Ent).  Strange thing is I've got another page with CFFlush in production that works fine.  I guess it has something to do with the amount of content and IIS, but the repeat function trick didn't work.  Oh well, I guess I need to move to the AJAX or JSON solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659692">39</a> by Raymond Camden
		posted on 7/22/2010 at 5:39 PM
		</div>
		<div class="comment_text"><p>I've seen oddities with cfflush myself lately as well. I agree though - an Ajax approach is definitely going to be better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659696">40</a> by ash102992
		posted on 8/4/2011 at 6:46 PM
		</div>
		<div class="comment_text"><p>Ray, it is not working for me at all. All I see is the last line which is thanks for waiting line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659694">41</a> by Raymond Camden
		posted on 8/4/2011 at 8:18 PM
		</div>
		<div class="comment_text"><p>Well, first off, this post is a bit old. ;) Modern CF servers can just use the sleep() command. That being said, please note some browsers will not work with this. The whole repeatString is a hack to try to force it, but at the end of the day, it's up to the browser to decide when it will render.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659764">42</a> by ash102992
		posted on 8/4/2011 at 10:28 PM
		</div>
		<div class="comment_text"><p>Raymond, I tried your code, but did not work for me. So, I changed the code to render more white spaces. Then it worked.<br>Raymond,Thanks for your prompt reply.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659765">43</a> by Raymond Camden
		posted on 8/4/2011 at 10:30 PM
		</div>
		<div class="comment_text"><p>Great to hear!</p></div>
	</div>
</div>
		