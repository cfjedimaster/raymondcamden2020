
<div class="comment" id="c_1713737362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737362">1</a> by Mike
		posted on 12/26/2011 at 11:09 AM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>     You may remember me, you helped me out when trying to change the main.js file to link directly to the article instead of going to the #contentpage and clicking a link... It worked great on my browser, so I just decided to put it into xcode, but I ran into a problem; there was no content on the page :(</p><p>This is what the simulator looked like:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbit.ly%2FrMkwxL%3ABaebgeGqE4DiNS-MJ2Cw32icBHE&amp;cuid=3321886" rel="nofollow noopener" title="http://bit.ly/rMkwxL">http://bit.ly/rMkwxL</a></p><p>So I thought it was a problem w/ linking to the main.js file, so i just included the javascript in the header, but still nothing. This is what the Xcode console looks like as of right now:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbit.ly%2FuY0Xmb%3AGyUsdtAq8hN2c-ytXRbAUFLOFiY&amp;cuid=3321886" rel="nofollow noopener" title="http://bit.ly/uY0Xmb">http://bit.ly/uY0Xmb</a></p><p>Do you know what I can do to make this work on Xcode?</p><p>&lt;iframe src="<a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fembed_iframe.php%3Fi%3DNyYj0sax%3AkrPGxGvSMH9YlwOpZHZL02kd2hM&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/embed_iframe.php?i=NyYj0sax">http://pastebin.com/embed_i...</a>" style="border:none;width:100%"&gt;&lt;/iframe&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737363">2</a> by Mike
		posted on 12/26/2011 at 11:10 AM
		</div>
		<div class="comment_text"><p>here is the correct link to the raw HTML</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fraw.php%3Fi%3DNyYj0sax%3Akgd8IMEzFe2iXusmVI_e6NcznBQ&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/raw.php?i=NyYj0sax">http://pastebin.com/raw.php...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737360">3</a> by Raymond Camden
		posted on 12/26/2011 at 10:30 PM
		</div>
		<div class="comment_text"><p>Change that console.log to an alert and tell me what you see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737365">4</a> by Mike
		posted on 12/27/2011 at 2:01 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fraw.php%3Fi%3DueMPRvGR%3AATR3kXUt9S_sIafqXbUmMCzYXhk&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/raw.php?i=ueMPRvGR">http://pastebin.com/raw.php...</a></p><p>changed the console.log to alert, but still no luck... do I have to add anything to the external host p.list? I already have *<a href="http://disq.us/url?url=http%3A%2F%2Fpipes.yahoo.com%3AZ5j4W52NkMteZoVR9zEb7E8mUUM&amp;cuid=3321886" rel="nofollow noopener" title="pipes.yahoo.com">pipes.yahoo.com</a> on there</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737364">5</a> by Raymond Camden
		posted on 12/27/2011 at 2:04 AM
		</div>
		<div class="comment_text"><p>Looks right to me. Unfortunately, I don't have OSX to test on to see if it is an issue with the remote host. It shouldn't be. For the heck of it, after this:</p><p>$("#mainPage").live("pageinit", function() {</p><p>add alert('Ray');</p><p>and see if that shows up. Want to ensure the pageinit handler is running.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737368">6</a> by Mike
		posted on 12/27/2011 at 2:37 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fraw.php%3Fi%3DrwF0KKFA%3A5nlXFnR6N5rRtMDwyMaep7R1Qdo&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/raw.php?i=rwF0KKFA">http://pastebin.com/raw.php...</a></p><p>No alert.... did I put it in the right place?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737367">7</a> by Raymond Camden
		posted on 12/27/2011 at 2:42 AM
		</div>
		<div class="comment_text"><p>You did. So this implies your code isn't setting up the event handler right. Notice how I put mine in a JS file loaded via script. Change it to that please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737366">8</a> by Mike
		posted on 12/27/2011 at 4:22 AM
		</div>
		<div class="comment_text"><p>Ok i linked to the main.js file in the header... but it didn't work... I made a 2 minute video on what I am doing in Xcode... I think it could be that since I modified the javascript it may have too many bugs in it.. but if it works in the browser and not in Xcode, it must not be anything too major... thanks for any suggestions</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fyoutu.be%2Fz9QBUea_T2E%3ACDWvdgKxUhwmnVoLVQk5GmyhWQA&amp;cuid=3321886" rel="nofollow noopener" title="http://youtu.be/z9QBUea_T2E">http://youtu.be/z9QBUea_T2E</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737369">9</a> by Raymond Camden
		posted on 12/27/2011 at 8:07 PM
		</div>
		<div class="comment_text"><p>Woah - wait - did I see right? The first page loaded, right? I mean the content. I thought it _wasn't_ working there? It looks like the mod to make it NOT go to page2 isn't working.</p><p>Right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737371">10</a> by Chad
		posted on 12/29/2011 at 12:15 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for this awesome tutorial. I mean, I could have easily ripped the code but the step by step really helped me grasp the concept. I've since added a few things but this was exactly what I was looking for.</p><p>Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737377">11</a> by Chad
		posted on 12/29/2011 at 8:48 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I did run into a small snag trying to get this to run properly with phonegap after a minor modification.</p><p>I added an entry to the main.js right below the others:<br>content:$.trim($(v).find('content\\:encoded').text())</p><p>I did this simply because my rss feed doesn't spit out much in the description.</p><p>I also changed this:<br>contentHTML += entries[selectedEntry].description;<br>to <br>contentHTML += entries[selectedEntry].content;</p><p>Everything works great in the browser (<a href="http://disq.us/url?url=http%3A%2F%2Fparkrumors.com%2Fmobile%29%3AIpd598f6N9048Ljhoeu6YRvnkSc&amp;cuid=3321886" rel="nofollow noopener" title="http://parkrumors.com/mobile)">http://parkrumors.com/mobile)</a></p><p>The only thing different between the browser and apk is the inclusion of phonegap js and the addition of some other pages. When I revert the contentHTML back to description, it works fine in the emulator.</p><p>I think I made the issue clear? Your thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737378">12</a> by Raymond Camden
		posted on 12/30/2011 at 12:47 AM
		</div>
		<div class="comment_text"><p>Can you confirm content is right? Right after the line where you get the value, do an alert on it (or console.log).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737380">13</a> by Chad
		posted on 12/30/2011 at 1:08 AM
		</div>
		<div class="comment_text"><p>On PC browser, alert shows the content, on emulator its empty.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737382">14</a> by Raymond Camden
		posted on 12/30/2011 at 9:48 PM
		</div>
		<div class="comment_text"><p>Interesting. It could imply that XML parsing is acting differently. Not sure what to say. What I'd do though is create a new PhoneGap project. Have your code get the XML and ONLY get the content from one item. Confirm it isn't working in the emulator and then send me a copy of the code. (If that doesn't make sense, I'm basically asking you to build an app that does JUST this so we can narrow down on the issue.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737385">15</a> by Chad
		posted on 12/30/2011 at 10:29 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fparkrumors.com%2Fmobile%2FParkRumors.zip%3AcM7QSf46SKF1wv8ENPFDB06j9EA&amp;cuid=3321886" rel="nofollow noopener" title="http://parkrumors.com/mobile/ParkRumors.zip">http://parkrumors.com/mobil...</a></p><p>Thanks for your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737384">16</a> by Raymond Camden
		posted on 12/31/2011 at 9:50 PM
		</div>
		<div class="comment_text"><p>I have a solution, but I don't yet know _why_ it works, but switch</p><p>content:$.trim($(v).find('content\\:encoded').text())</p><p>to</p><p>content:$.trim($(v).find('encoded').text())</p><p>I'm researching now as to _why_ this match works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737381">17</a> by Raymond Camden
		posted on 12/31/2011 at 9:57 PM
		</div>
		<div class="comment_text"><p>Ok, it was the namespace, duh. And now I know why \\ didn't work. I talked about it on G+, so instead of repeating myself, I'll just link to the discussion.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fplus.google.com%2F115106614688778962135%2Fposts%2F4zX1XJ1sYgg%3A7DOgjPqtFpFKkKlc0aaubTBoY2s&amp;cuid=3321886" rel="nofollow noopener" title="https://plus.google.com/115106614688778962135/posts/4zX1XJ1sYgg">https://plus.google.com/115...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737383">18</a> by Raymond Camden
		posted on 12/31/2011 at 10:00 PM
		</div>
		<div class="comment_text"><p>UGH. Be warned, it works in jQuery 1.6.x, not 1.7.x.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737386">19</a> by Raymond Camden
		posted on 12/31/2011 at 10:07 PM
		</div>
		<div class="comment_text"><p>Ok, after research, it turns out that it is indeed a bug in jQuery, but has been marked 'wontfix'. My understanding is that it's not something that can be fixed in a stable cross platform manner. However, this solution was proposed:</p><p>$(v).find("content:encoded, encoded").text();</p><p>In the bug and it works well. Here is more details on the bug: <a href="http://disq.us/url?url=http%3A%2F%2Fbugs.jquery.com%2Fticket%2F10377%3AZyIF2HDgJ3LZ9EMR2Y8L6u88C1A&amp;cuid=3321886" rel="nofollow noopener" title="http://bugs.jquery.com/ticket/10377">http://bugs.jquery.com/tick...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737391">20</a> by Raymond Camden
		posted on 12/31/2011 at 10:10 PM
		</div>
		<div class="comment_text"><p>More info on the workaround: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.steveworkman.com%2Fhtml5-2%2Fjavascript%2F2011%2Fimproving-javascript-xml-node-finding-performance-by-2000%2F%3Ap8PtrIXG8I-TOYhr5PXdWEVjDVI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.steveworkman.com/html5-2/javascript/2011/improving-javascript-xml-node-finding-performance-by-2000/">http://www.steveworkman.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737387">21</a> by Chad
		posted on 1/3/2012 at 6:07 PM
		</div>
		<div class="comment_text"><p>Oh wow!</p><p>You've gone above and beyond! You sir have made my day! (Side note, today is also my Birthday!) lol</p><p>Thanks so much!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737389">22</a> by Raymond Camden
		posted on 1/3/2012 at 7:01 PM
		</div>
		<div class="comment_text"><p>I did it just for your birthday. Honest. (Ahem.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737390">23</a> by Johannes Wilm
		posted on 1/9/2012 at 4:44 AM
		</div>
		<div class="comment_text"><p>Hey,<br>I'm rather new to Phonegap development. But looking at your example I hacked together something that stores the contents in an sql database and then retrieves it from there if the user isn't online (which is which I think you described you would do in installment 3). It uses the title of the post as a unique identifier -- that will likely work 95% of the time. It will theoretically also store old entries that have disappeared from the stream.</p><p>I wonder though what you think baout the following:</p><p>1. The fact that I escape the entire text string before putting it in the DB.</p><p>2. The fact that it seems impossible to use a db that is not called 'test' (without getting an error).</p><p>3. The combination of phonegap and jquery listeners (looks dirty).</p><p>4. If you have any opinions about how to organize image caching (currently not working).</p><p>Code: <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F9gXXmDV6%3AWFbfDU6ioVmlmccpmoU3jw4QyYY&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/9gXXmDV6">http://pastebin.com/9gXXmDV6</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737388">24</a> by Johannes Wilm
		posted on 1/9/2012 at 6:52 AM
		</div>
		<div class="comment_text"><p>If I'm not mistaken, the way to do image caching would be to:</p><p>1. Take the description text of each entry and replace each instance of &lt;img src="..."&gt; with &lt;canvas id="..."&gt; before saving it in the database</p><p>2. Create a new table in the DB called fx IMAGES. For each of the above &lt;img&gt;s, download the image file and save them in the IMAGES table using base64 encoding. A second column in that table should specify the id that was used in the canvas-element that we inserted under 1.  A third column in the table should specify which RSS-entry the image was on.</p><p> ---</p><p>3. When retrieving an RSS entry, also download all the entries in the IMAGES table that are related to it.</p><p>4. After inserting the RSS-entries into the HTML, for each of the entries from the IMAGES table we retrieved in 3, use  drawImageOnCanvas to draw the base64-encoded image data on the corresponding canvas element.</p><p>This is basically what I would go for. The reason I'm hesitating is that it seems a fairly simple operation, and I haven't found any references to doing it like this anywhere on the web. Does it seem right to you though?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737392">25</a> by Raymond Camden
		posted on 1/10/2012 at 1:56 AM
		</div>
		<div class="comment_text"><p>@JW: Wow, very cool to see you run with this. Some thoughts...</p><p>1) Primary key: You can probably find a decent JS library to simulate UUIDs. You can also use autonumbering in SQLite. Since this is a single user db, you could single thread the insert, get max(id), and have your new id. I'd probably do that myself.</p><p>2) Escaping text... don't do that. For your insert, use a bound parameter. (If that doesn't make sense, just ask.)</p><p>3) Sorry - what? :) (In terms of phonegap/jquery event listeners)</p><p>4) Image caching: Your solution is interesting, but don't forget you can use data urls too. That may be easier than a canvas implementation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737393">26</a> by Neil Thoms
		posted on 1/13/2012 at 8:43 PM
		</div>
		<div class="comment_text"><p>Great update!</p><p>I still can't get images to show on mine. Using FeedBurner I can't figure out what tag[s] are being used to show images.</p><p>Have you implemented images before?</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737395">27</a> by Raymond Camden
		posted on 1/13/2012 at 8:45 PM
		</div>
		<div class="comment_text"><p>No, but it should be simple enough. Can you share your feed url?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737396">28</a> by Neil Thomas
		posted on 1/13/2012 at 8:59 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>The feed URL is: <a href="http://disq.us/url?url=http%3A%2F%2Ffeeds.feedburner.com%2FSerenserenSeren%3AclIgfMZ75hHrOvlhH_W8trNdcIQ&amp;cuid=3321886" rel="nofollow noopener" title="http://feeds.feedburner.com/SerenserenSeren">http://feeds.feedburner.com...</a></p><p>I've also tried using 'content' rather than 'desrciption' by including...</p><p> content$(v).find("content:encoded, encoded").text(),</p><p>...then for displayinh on contentPage:</p><p>contentHTML += '&lt;p&gt; '+entries[selectedEntry].content +'&lt;/p&gt;';</p><p>I thought by showing content it would show images.</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737394">29</a> by Raymond Camden
		posted on 1/13/2012 at 9:02 PM
		</div>
		<div class="comment_text"><p>That should definitely work. If you console.log the value of contentHTML, do you still see the image tags present in the RSS?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737401">30</a> by Neil Thomas
		posted on 1/13/2012 at 9:14 PM
		</div>
		<div class="comment_text"><p>How do I console.log? Sorry I'm new to this.</p><p>If its any use...I'm implementing it on Xcode.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737400">31</a> by Raymond Camden
		posted on 1/13/2012 at 9:16 PM
		</div>
		<div class="comment_text"><p>console is an object in most modern web browsers. It's used for debugging messages. It can be a bit tricky via PhoneGap. For now, just use an alert(), although it may be hard to read ona mobile device.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737399">32</a> by Neil Thomas
		posted on 1/13/2012 at 9:32 PM
		</div>
		<div class="comment_text"><p>I'm not sure where to put the alert(), though I know what it would do (flag when it is run?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737402">33</a> by Raymond Camden
		posted on 1/13/2012 at 9:35 PM
		</div>
		<div class="comment_text"><p>Well, we want to ensure the value is right. You would put it right after the line you share above.</p><p>contentHTML += '&lt;p&gt; '+entries[selectedEntry].content +'&lt;/p&gt;';<br>alert(contentHTML);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737403">34</a> by Neil Thomas
		posted on 1/13/2012 at 9:40 PM
		</div>
		<div class="comment_text"><p>I've inserted 'alert(contentHTML);'.</p><p>Unfortunately, nothing is responding in the app. It stopped working since I changed from using 'description' to using 'content'.</p><p>I get the header and footer but nothing in between, therefore can't see the contentPage for the alert to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737404">35</a> by Neil Thomas
		posted on 1/13/2012 at 10:01 PM
		</div>
		<div class="comment_text"><p>I've almost sorted the problem.</p><p>Replaced:</p><p>content$(v).find("content:encoded, encoded").text()</p><p>With:</p><p>content:$.trim($(v).find("content:encoded, encoded").text()</p><p>It now displays the articles with proper paragraphs etc. Image placeholders/boxes are shown but the actual images are not showing. I have ensured that I have declared the allowed ExternalHosts in Xcode (i.e. the website/image sites reference. But they will not display.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737405">36</a> by Raymond Camden
		posted on 1/13/2012 at 11:05 PM
		</div>
		<div class="comment_text"><p>Odd - it's just an image, so it should work.</p><p>So what I'd do now is simplify. Start a NEW project, virgin code. Use JavaScript to set a div to HTML like so:</p><p>$("#somediv").html("&lt;h1&gt;Hello&lt;/h1&gt;&lt;img src='....'&gt;");</p><p>In other words, use a very simple test best that uses HTML with an external image URL and see if that works out alright.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737409">37</a> by Developer
		posted on 1/17/2012 at 1:15 PM
		</div>
		<div class="comment_text"><p>Hi Raymon, can you help me?<br>I have been build an app to read differents XML (in different div pages in the same HTML file), with a fixed navbar when I'm viewing the first XML list and I would like to go to the other list clicking in a link of the navbar, have this effect:</p><p>- Show the new page<br>- Show the old page<br>- Show and stay in the new page.</p><p>This effect shows in 1 second...<br>why it's show this?</p><p>I would like to go to the new page without this effect. I have tried with all options of data-transition but nothing...</p><p>Maybe the problem is on $("#list").listview("refresh"); ???</p><p>Sorry for my bad english.</p><p>Gracias (Thanks) :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737411">38</a> by Raymond Camden
		posted on 1/17/2012 at 7:01 PM
		</div>
		<div class="comment_text"><p>Having a hard time understanding you. If you are talking about page transitions, and if you are using jQuery Mobile, you can disable the transition.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737410">39</a> by Arihant
		posted on 1/21/2012 at 1:52 PM
		</div>
		<div class="comment_text"><p>I am eagerly waiting for the third version with which we can cache 7 display old information if the user is offline. Please do this as soon as possible.....Awesome....The whole article saved my life</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737407">40</a> by Kevin Thomas
		posted on 1/24/2012 at 1:12 PM
		</div>
		<div class="comment_text"><p>All code works beautifully!  I am working on a few requests to tweak the UX (user experience) due to some feedback I received.  The most common comment is that when going back and forth between the RSS Title list and the content page is that the previous content shows for just a split second when view subsequent entries.  I suppose the best way to tackle this would be to set the #linksList html to "" when clicking the back button so we can clear the previous content stuff out.  Question is, is the back button click event the best place to add the code to blank out the #linksList div?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737408">41</a> by Raymond Camden
		posted on 1/24/2012 at 7:37 PM
		</div>
		<div class="comment_text"><p>Um... you could. There is also a page event system in jQM you can use as well. How about I tackle your request as well as the offline request in p3?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737406">42</a> by Raymond Camden
		posted on 1/25/2012 at 4:09 AM
		</div>
		<div class="comment_text"><p>Holy crap. This turned out to be a bit more difficult then I expected. I'm done though and about to post part 3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737413">43</a> by Raymond Camden
		posted on 1/25/2012 at 4:25 AM
		</div>
		<div class="comment_text"><p>Hey @Kevin/@Arihant: Please see: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F1%2F24%2FPhoneGap-RSS-Reader--Part-3%3Asi5UPhQlkwRI0P2r0oaLAVc9h_w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/1/24/PhoneGap-RSS-Reader--Part-3">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737412">44</a> by Arihant
		posted on 1/25/2012 at 10:11 AM
		</div>
		<div class="comment_text"><p>Thanks...Checking the 3 article...GOD BLESS YOU! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737415">45</a> by Neil Thomas
		posted on 2/12/2012 at 7:09 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I fixed my previous problem with displaying images. It was in fact a whitelisting URL (external hosts) issue. All fixed now and looking great.</p><p>I've also modified the code with Part 3 caching etc, works great.</p><p>I was wondering, is it possible to render thumbnails in my list? Either as media:thumbnail or by somehow extracting the first image from each post?</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737419">46</a> by Raymond Camden
		posted on 2/12/2012 at 9:37 PM
		</div>
		<div class="comment_text"><p>Yes. First, I'd point you to the jQuery Mobile support for thumbnails in lists:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjquerymobile.com%2Fdemos%2F1.0.1%2Fdocs%2Flists%2Flists-thumbnails.html%3APRgrZpiORAt9bv_msmtbp0rXmis&amp;cuid=3321886" rel="nofollow noopener" title="http://jquerymobile.com/demos/1.0.1/docs/lists/lists-thumbnails.html">http://jquerymobile.com/dem...</a></p><p>But as to the URL, you would have a few options. First off, I do not quite remember if the RSS spec supports a icon per item. If you check the content of the RSS item, you can use a regular expression to find an image, and if so, include it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737416">47</a> by Neil Thomas
		posted on 2/12/2012 at 9:58 PM
		</div>
		<div class="comment_text"><p>Thanks for this. There doesn't seem to be icon or thumbnail item in my feed (<a href="http://disq.us/url?url=http%3A%2F%2Ffeeds.feedburner.com%2FSerenserenSeren%29%3Apm0nfI_uMEPHCrINjXK7TAMfklk&amp;cuid=3321886" rel="nofollow noopener" title="http://feeds.feedburner.com/SerenserenSeren)">http://feeds.feedburner.com...</a>.</p><p>I've uploaded my XML feed source to pastebin: <a href="http://disq.us/url?url=http%3A%2F%2Fcodeupload.com%2F5147%3ApjsCsjrfn4auwH1fnMHLSQtEIS0&amp;cuid=3321886" rel="nofollow noopener" title="http://codeupload.com/5147">http://codeupload.com/5147</a> .</p><p>How do you recommend implementing a regular epression?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737417">48</a> by Raymond Camden
		posted on 2/12/2012 at 10:04 PM
		</div>
		<div class="comment_text"><p>You would get the content and then use a regex for the img tag to find the first one. If it exists. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737420">49</a> by Neil Thomas
		posted on 2/12/2012 at 10:38 PM
		</div>
		<div class="comment_text"><p>Just had a look at examples of image tag/url/src reg expressions and its way over my head. A bunch of cryptic symbols :P.</p><p>Where would I put the expression in the main.js? I found a good example that picks up the first image of a html source... <a href="http://disq.us/url?url=http%3A%2F%2Fzytzagoo.net%2Fblog%2F2008%2F01%2F23%2Fextracting-images-from-html-using-regular-expressions%2F%3ACxQV5VHpuNCZbHCdgzQv4Adks4o&amp;cuid=3321886" rel="nofollow noopener" title="http://zytzagoo.net/blog/2008/01/23/extracting-images-from-html-using-regular-expressions/">http://zytzagoo.net/blog/20...</a> ... but its in PHP.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737418">50</a> by Raymond Camden
		posted on 2/13/2012 at 7:50 AM
		</div>
		<div class="comment_text"><p>This regular expression will search a string and return all the images tags in an array.</p><p>var imgpat = /&lt;img.*?&gt;/g;<br>var matches = str.match(imgpat);<br>console.dir(matches);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737421">51</a> by Neil Thomas
		posted on 2/13/2012 at 4:54 PM
		</div>
		<div class="comment_text"><p>Thanks for this Raymond,</p><p>I inserted this into the main.js just before   '$.each(entries, function(i, v) {' . But the app is not showing any content now. Can you tell me where I need to insert it and how to call in the thumnail list item?</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737423">52</a> by Raymond Camden
		posted on 2/14/2012 at 3:30 AM
		</div>
		<div class="comment_text"><p>Um, well, you can't just insert it willy nilly. The sample I gave you was just that - a sample. You would want to run it _inside_ of the loop to perform the regex against each item matched.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737426">53</a> by Neil Thomas
		posted on 2/16/2012 at 5:52 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thanks. Been trying everything for 3 days now but all examples are in PHP, which Phonegap/Xcode won't allow. Not giving up though :).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737424">54</a> by Raymond Camden
		posted on 2/16/2012 at 7:25 PM
		</div>
		<div class="comment_text"><p>Care to share what you have so far via Pastebin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737425">55</a> by Neil Thomas
		posted on 2/16/2012 at 7:42 PM
		</div>
		<div class="comment_text"><p>Apologies for the stupidness that is about to be posted here...</p><p>The JS I inserted into my HTML &lt;body&gt;:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcodeupload.com%2F5160%3AIneudS-azm4e2Wq5F7BxJ6U6Alc&amp;cuid=3321886" rel="nofollow noopener" title="http://codeupload.com/5160">http://codeupload.com/5160</a></p><p>What I've done in your my main.js:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcodeupload.com%2F5161%3AerH7_RSrsvFOHur7EBrTr37u1qY&amp;cuid=3321886" rel="nofollow noopener" title="http://codeupload.com/5161">http://codeupload.com/5161</a></p><p>What the app currently looks like...</p><p>List: <a href="http://disq.us/url?url=http%3A%2F%2Fd.pr%2FU2tn%3AkRCSTVzZHaJD0q-eQv__CwM8wbM&amp;cuid=3321886" rel="nofollow noopener" title="http://d.pr/U2tn">http://d.pr/U2tn</a><br>Entry: <a href="http://disq.us/url?url=http%3A%2F%2Fd.pr%2FKK9a%3Au2MUeIJjUCMTATKLN9GKNNHnzkg&amp;cuid=3321886" rel="nofollow noopener" title="http://d.pr/KK9a">http://d.pr/KK9a</a></p><p>Thanks :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737427">56</a> by Raymond Camden
		posted on 2/16/2012 at 7:55 PM
		</div>
		<div class="comment_text"><p>Ok, so to be clear, the code you want to modify is here:</p><p>entry = {<br>link:$(v).find("link").text(),<br>pubDate:$(v).find("pubDate").text(),<br>creator:$(v).find("creator").text(),<br>title:$(v).find("title").text(),<br>link:$(v).find("link").text(),<br>llun:$.trim($(v).find("media:content").text()),<br>commentRss:$.trim($(v).find("wfw:commentRss").text()),<br>content:$.trim($(v).find("content:encoded, encoded").text())<br>};</p><p>This is the object we add to the array, and it contains all the info we care about for the entry. Since our regex logic is a bit complex, I'd do my mod AFTER the above.</p><p>I'd add the code to perform the regex, as I demonstrated. If there are matches, you take that first one and add it to the entry object, so imagine I've done that:</p><p>if(matches.length) {<br>  entry.image = matches[0];<br>}</p><p>You may want to supply a blank value too:</p><p>} else {<br>  entry.image = "";<br>}</p><p>or use some default image like you've done in your screen shot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737428">57</a> by Neil Thomas
		posted on 2/16/2012 at 8:39 PM
		</div>
		<div class="comment_text"><p>I have inserted the code after entry: <a href="http://disq.us/url?url=http%3A%2F%2Fcodeupload.com%2F5162%3AfOt8rbzXoX3Z7ZsjNp_HOT93VSY&amp;cuid=3321886" rel="nofollow noopener" title="http://codeupload.com/5162">http://codeupload.com/5162</a></p><p>Not bringing anything up in the content area now.</p><p>Off topic..but do you have a PayPal donate button on this blog? Or a PayPal email address?</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737432">58</a> by Raymond Camden
		posted on 2/16/2012 at 8:58 PM
		</div>
		<div class="comment_text"><p>On line 51, you are looking against the variable, str, which came form my example, but isn't valid here. You want to look against the content. Change str to content (I mean entry.content)</p><p>As for donations, I've got an Amazon Wish List link on the right. If you visit it, be sure to let me know as Amazon does a bad job of telling me who got me stuff. Even more, if you give me a UPS tracking #, you can watch my productivity dive in real time as I obsessively reload every 5 minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737429">59</a> by Neil Thomas
		posted on 2/16/2012 at 9:46 PM
		</div>
		<div class="comment_text"><p>There's a copy of Designing with Web Standards (3rd Edition) by the good old Zeldman on its way to you (by 18th Feb). Will email tracking details once available :).</p><p>I've now changed line 51 and its still not bringing back any content at all. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737430">60</a> by Raymond Camden
		posted on 2/16/2012 at 9:47 PM
		</div>
		<div class="comment_text"><p>To be clear, is nothing working, or just this new image thing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737431">61</a> by Neil Thomas
		posted on 2/16/2012 at 9:50 PM
		</div>
		<div class="comment_text"><p>This is what is displayed:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fd.pr%2Fz9mC%3A2rUUObj80hmd03n9ByHCjje_ZA4&amp;cuid=3321886" rel="nofollow noopener" title="http://d.pr/z9mC">http://d.pr/z9mC</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737437">62</a> by Raymond Camden
		posted on 2/16/2012 at 9:54 PM
		</div>
		<div class="comment_text"><p>At this point, it makes sense for you to maybe send me your code. What I'm going to do is take your XML, save it locally, take your HTML and run JUST it (no phone involved), and see if I can diagnose the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737435">63</a> by Neil Thomas
		posted on 2/16/2012 at 10:03 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond.</p><p>I've zipped the HTML, CSS, JS and images here: <a href="http://disq.us/url?url=http%3A%2F%2Fd.pr%2FR9r4%3AM-FbxbmZaUO0ENnpDIOzf-_dZ9o&amp;cuid=3321886" rel="nofollow noopener" title="http://d.pr/R9r4">http://d.pr/R9r4</a></p><p>Raw XML feed is at: <a href="http://disq.us/url?url=http%3A%2F%2Fcodeupload.com%2F5165%3AbkwXxElICarXFhgGOp8op3JhR-w&amp;cuid=3321886" rel="nofollow noopener" title="http://codeupload.com/5165">http://codeupload.com/5165</a><br>Or here: <a href="http://disq.us/url?url=feed%3A%2F%2Ffeeds.feedburner.com%2FSerenserenSeren%3AQo7iQnRGF04fcCrYN5TuYLj39lc&amp;cuid=3321886" rel="nofollow noopener" title="feed://feeds.feedburner.com/SerenserenSeren">feed://feeds.feedburner.com...</a></p><p>Really appreciate you doing this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737436">64</a> by J
		posted on 2/17/2012 at 12:15 AM
		</div>
		<div class="comment_text"><p>title:$(v).find("title").text()</p><p>this codes returns not only title, but also &lt;media:title&gt;</p><p>&lt;title&gt;My Title&lt;/title&gt;<br>&lt;media:title type="html"&gt;spoon-01&lt;/media:title&gt;</p><p>So the title in the main page shows "My Titlespoon-01"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737434">65</a> by Raymond Camden
		posted on 2/17/2012 at 12:40 AM
		</div>
		<div class="comment_text"><p>@J: In the find result, try adding a check for attr("type"), if it isn't there, you can assume it is your media tag. That's not 100% safe, but, it's something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737438">66</a> by Raymond Camden
		posted on 2/17/2012 at 7:50 PM
		</div>
		<div class="comment_text"><p>Neil, found the error right away:</p><p>                                  var imgpat = /&lt;img.*?&gt;/g;<br>                                  var matches = entry.content.match(imgpat);<br>                                  console.dir(matches);</p><p>                                  if(matches.length) {<br>                                  entry.image = matches[0];<br>                                  }</p><p>                                  } else {<br>                                  entry.image ="";<br>                                  }</p><p>See the else block? You have 2 } before it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737439">67</a> by Raymond Camden
		posted on 2/17/2012 at 7:51 PM
		</div>
		<div class="comment_text"><p>By the way, I saw this right away by simply opening it up in Chrome, and in the Dev Tools, it clearly showed the syntax error. Just an FYI - I like to help people learn to solve problems instead of just solving the problems. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737440">68</a> by Neil Thomas
		posted on 2/17/2012 at 8:32 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond,</p><p>I've changed it now and am calling '+ entry.image +' in my list.</p><p>Its bringing back an image, but the same one (from my last article entry. Screenshot here: <a href="http://disq.us/url?url=http%3A%2F%2Fd.pr%2FOv4r%3AgbzjuyMdxt4DHvxDu-BrkVyOpPE&amp;cuid=3321886" rel="nofollow noopener" title="http://d.pr/Ov4r">http://d.pr/Ov4r</a> .</p><p>Is it something to do with looping to the last entry and only bringing back that image?</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737441">69</a> by Raymond Camden
		posted on 2/17/2012 at 8:45 PM
		</div>
		<div class="comment_text"><p>Post the latest JS file to pastebin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737442">70</a> by Neil Thomas
		posted on 2/17/2012 at 8:49 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fcodeupload.com%2F5169%3ABsRkKyMRLmqq5C8y10YGTHwNMkQ&amp;cuid=3321886" rel="nofollow noopener" title="http://codeupload.com/5169">http://codeupload.com/5169</a></p><p>Image is called at line 20.</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737445">71</a> by Raymond Camden
		posted on 2/17/2012 at 8:51 PM
		</div>
		<div class="comment_text"><p>To be clear, that is NOT the thumb picture, but just the image from the last entry, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737446">72</a> by Raymond Camden
		posted on 2/17/2012 at 8:53 PM
		</div>
		<div class="comment_text"><p>Oh dude, dumb error (err, not calling you dumb, just saying you will think so ;)</p><p> $.each(entries, function(i, v) {<br>           s += '&lt;li style="-webkit-border-radius:0px;"&gt;&lt;a href="#contentPage" class="contentLink" data-entryid="'+i+'" style="-webkit-border-radius:0px;"&gt;' + entry.image + ' ' + v.title + '&lt;br&gt;&lt;span class="published-date-list"&gt;' + v.pubDate + '&lt;/span&gt;&lt;br&gt;&lt;span class="creator-list"&gt;by ' + v.creator+ '&lt;/span&gt;&lt;/a&gt;&lt;/li&gt;';<br>           });</p><p>Inside the loop, v represents the current entry you are going over. Change entry.image to v.image.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737444">73</a> by Neil Thomas
		posted on 2/17/2012 at 8:53 PM
		</div>
		<div class="comment_text"><p>Its not the thumb picture.</p><p>thumb.jpg is a blue image.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737443">74</a> by Neil Thomas
		posted on 2/17/2012 at 8:57 PM
		</div>
		<div class="comment_text"><p>You Sir are a genius. That was it! its working perfect now.</p><p>Thanks for all your help, I will stop pestering you now :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737447">75</a> by Raymond Camden
		posted on 2/17/2012 at 8:59 PM
		</div>
		<div class="comment_text"><p>Glad to help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737451">76</a> by Lincoln
		posted on 2/20/2012 at 1:39 PM
		</div>
		<div class="comment_text"><p>Thanks a lot, I've been looking for this.<br>Quick question, do this code show RSS images too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737453">77</a> by Lincoln
		posted on 2/20/2012 at 1:42 PM
		</div>
		<div class="comment_text"><p>Ok just saw the comments. Forget my prev question.<br>Thanks for your work Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737454">78</a> by maddom73
		posted on 3/10/2012 at 1:16 AM
		</div>
		<div class="comment_text"><p>Hi ray,<br>your work is very good, so thanks a lot. However I have a little problem: the code in the brackets (entry.image = "/images/thumb.jpg";) displays the advertising of my rss feed and not a local thumb.<br>Thanks for your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737452">79</a> by Raymond Camden
		posted on 3/10/2012 at 2:23 AM
		</div>
		<div class="comment_text"><p>No idea what you mean. If you can share a screen shot it may make more sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737456">80</a> by maddom73
		posted on 3/10/2012 at 2:22 PM
		</div>
		<div class="comment_text"><p>Ok! As you can see in the &lt;a href="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.evernote.com%2Fshard%2Fs80%2Fsh%2Fb5801578-66c0-4ee8-97ad-1b0d773cbe27%2Fec6c9635ed5045e824589c4629581d31%3A7Q7oGoLGIeTEUhWhMrpyywsXfDM&amp;cuid=3321886" rel="nofollow noopener" title="https://www.evernote.com/shard/s80/sh/b5801578-66c0-4ee8-97ad-1b0d773cbe27/ec6c9635ed5045e824589c4629581d31">https://www.evernote.com/sh...</a>"&gt;screenshot&lt;/a&gt;some thumbs in the listview, instead of a local image  shows the advertising pictures of my rss feed.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737455">81</a> by maddom73
		posted on 3/10/2012 at 2:32 PM
		</div>
		<div class="comment_text"><p>Sorry for my previous comment. The right link is <a href="https://disq.us/url?url=https%3A%2F%2Fbitly.com%2FwTiWel%3A1TbAV0GOyYpHUgho0HWIv7FWQ7U&amp;cuid=3321886" rel="nofollow noopener" title="https://bitly.com/wTiWel">https://bitly.com/wTiWel</a>.<br>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737457">82</a> by Raymond Camden
		posted on 3/12/2012 at 2:57 PM
		</div>
		<div class="comment_text"><p>Oh... well, the code I had demonstrated used a regex to find the first image. If your RSS has ads added to it (mine does that too), then that's why the ad shows up.</p><p>A way around this would be to modify the regex to look for images that include a src pointing to your main site. Of course, if you ever put an image in your blog that is from another server, then it wouldn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737459">83</a> by maddom73
		posted on 3/12/2012 at 5:33 PM
		</div>
		<div class="comment_text"><p>Thank you very much! May be it's better to keep this regex and always put the images into the posts. If I can: Do you know How to change the options of a android native menuinflater in the transition from listview to appView?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737458">84</a> by Raymond Camden
		posted on 3/12/2012 at 5:35 PM
		</div>
		<div class="comment_text"><p>I have no idea what this means: " If I can: Do you know How to change the options of a android native menuinflater in the transition from listview to appView?" Can you rephrase?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737461">85</a> by maddom73
		posted on 3/12/2012 at 5:55 PM
		</div>
		<div class="comment_text"><p>Ok! I made a mistake because I tried to translate an idiom of my language. I would like to implement an android native menu options (about, search, refresh, exit) in the first page (the listview of the rss feed) and another menu (back, share) in the page with the content of the post (appview). In java it's easy but I don't know using phonegap!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737462">86</a> by Raymond Camden
		posted on 3/12/2012 at 5:57 PM
		</div>
		<div class="comment_text"><p>If I'm reading you right, you can use the PhoneGap Event API for the Android menu event. This allows you to do "stuff" on that button click. You would need to design some menu div in HTML that shows up when the user clicks there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737463">87</a> by maddom73
		posted on 3/12/2012 at 6:34 PM
		</div>
		<div class="comment_text"><p>Yes, but I want to change the menu when I click on the item listview not just on the button</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737464">88</a> by Raymond Camden
		posted on 3/12/2012 at 6:41 PM
		</div>
		<div class="comment_text"><p>Unless I'm misunderstanding you, you need to add a click handler for the LI then. This is not a 'mobile' or PhoneGap question, but more just a general JavaScript question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737465">89</a> by luke321
		posted on 3/18/2012 at 2:28 AM
		</div>
		<div class="comment_text"><p>hey there,<br>i got a strange problem with your code...<br>it shows the rss feed in safari and dreamweaver just fine.<br>but when i try it on my iphone or in firefox no items are loaded.<br>do you have any idea what the problem could be?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737466">90</a> by Raymond Camden
		posted on 3/18/2012 at 2:35 AM
		</div>
		<div class="comment_text"><p>Are you on a Mac? If so - you have to add the RSS url in the whitelist in xcode.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737468">91</a> by Luke321
		posted on 3/18/2012 at 4:10 AM
		</div>
		<div class="comment_text"><p>yeah that fixed it.. (I should go to bed -.-)<br>thx a lot!!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737471">92</a> by maddom73
		posted on 3/18/2012 at 1:07 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I just solved some problems but I don't know how to autoresize my thumb in the listview!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737470">93</a> by Raymond Camden
		posted on 3/19/2012 at 12:09 AM
		</div>
		<div class="comment_text"><p>Use a set width and height. Your image may distort, but it will fit. You can either add it to the &lt;img&gt; tag or use CSS.</p><p>In other words, this is an HTML issue, not a PhoneGap issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737469">94</a> by maddom73
		posted on 3/22/2012 at 7:30 PM
		</div>
		<div class="comment_text"><p>Ok, solved!<br>Last question: How can I implement a context menu in "contentPage" to share my post? Best regards!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737472">95</a> by Raymond Camden
		posted on 3/22/2012 at 7:34 PM
		</div>
		<div class="comment_text"><p>A context menu? Well Android supports a Menu click event that you can listed to with PhoneGap. If you wanted iOS too you would need an alternative, like perhaps a 'taphold' even.t</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737473">96</a> by maddom73
		posted on 3/30/2012 at 11:06 PM
		</div>
		<div class="comment_text"><p>Thanks for your answers. <br>How do I format the pubDate? I would like to delete +0000 and set up the timezone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737474">97</a> by Raymond Camden
		posted on 3/31/2012 at 1:32 AM
		</div>
		<div class="comment_text"><p>You would need to use regex (or string functions) in JavaScript to do that. Definitely possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737475">98</a> by maddom73
		posted on 4/7/2012 at 12:35 PM
		</div>
		<div class="comment_text"><p>Hi, I took your advice and solved the problem! Now I would like to parse the youtube videos embedded in the CDATA tag. Can you help me?<br>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737478">99</a> by Raymond Camden
		posted on 4/10/2012 at 7:29 PM
		</div>
		<div class="comment_text"><p>I'd look at JavaScript's string parsing routines. If you have an example of the content (use pastebin!) I'd possibly be able to give you a hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737476">100</a> by maddom73
		posted on 4/10/2012 at 8:31 PM
		</div>
		<div class="comment_text"><p>I used your way to parse content encoded and I can see the youtube video in the iframe but as you know android has a little bad way to manage html5 video. I'm trying to implement Video player phonegap plugin but I can't handle onclick event on the video iframe. I think it's possibile to use the youtube api to handle and a string url to execute <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.plugins.videoPlayer.play%3A-L7L-dKDV41vz-xJxvX_HycK0Fk&amp;cuid=3321886" rel="nofollow noopener" title="window.plugins.videoPlayer.play">window.plugins.videoPlayer....</a>(url).<br>Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737480">101</a> by Raymond Camden
		posted on 4/11/2012 at 6:02 PM
		</div>
		<div class="comment_text"><p>No idea - haven't done Youtube in a PG app yet - sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737479">102</a> by Kieran
		posted on 7/20/2012 at 8:34 PM
		</div>
		<div class="comment_text"><p>Hi</p><p>I have a problem.</p><p>I have uploaded the index.html and the js folder as is to my web server but nothing is displaying. All I get is the header and the footer but no content inside.</p><p>This is strange because when i view it locally it works fine, no problems at all. I've tried it in lots of different browsers with no luck.</p><p>Any Idea's??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737477">103</a> by Raymond Camden
		posted on 7/20/2012 at 8:39 PM
		</div>
		<div class="comment_text"><p>You uploaded it to your web server? This code is for a PhoneGap app. It makes a XHR request to a remote server which is blocked in "normal" browsers. You can't do it that way.</p><p>If you want to use a RSS feed in a desktop site, consider Google's Feed API. See my 4th entry in this series.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737481">104</a> by Kieran
		posted on 7/20/2012 at 8:44 PM
		</div>
		<div class="comment_text"><p>Oh I see.</p><p>Thanks for your quick response, I will check that out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737482">105</a> by Maximilian Grimm
		posted on 9/18/2012 at 4:51 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>do you have any Idea how i can format the Date from the XML FEED "pubDate" into a german format via your Script and jQuery.</p><p>Thank a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737483">106</a> by Raymond Camden
		posted on 9/18/2012 at 5:45 PM
		</div>
		<div class="comment_text"><p>I'd consider trying this library: <a href="http://disq.us/url?url=http%3A%2F%2Fmomentjs.com%2F%3AgI9NTiE2Nr5aT3_5NiVXNesaW4I&amp;cuid=3321886" rel="nofollow noopener" title="http://momentjs.com/">http://momentjs.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737560">107</a> by Maximilian Grimm
		posted on 9/19/2012 at 1:45 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>thanks for the Tip. But as i see - i dont understand it :(<br>I get this Date Format: Wed, 29 Aug 2012 10:19:00 +0200<br>Because as i know thats the standard for rss.</p><p>And now i want to have this Format like 29.08.2012</p><p>Will try it a lot...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737571">108</a> by Raymond Camden
		posted on 9/19/2012 at 3:15 PM
		</div>
		<div class="comment_text"><p>You don't understand what - the library I pointed to - or something else?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737556">109</a> by Pascal Kuilboer
		posted on 2/16/2013 at 6:54 AM
		</div>
		<div class="comment_text"><p>I've tried to add an atribute to the code to load the image from an (owm) xml file... but no luck. Could you please assist?<br>xml line is:</p><p>&lt;item&gt;<br>      &lt;title&gt;This is the tile&lt;/title&gt;<br>      &lt;link&gt;content.html&lt;/link&gt;<br>      &lt;description&gt;Brett S., een van de hoofdverdachten van de geruchtmakende mishandeling in Eindhoven, is vanavond in tranen te zien in Pownews. Hij betuigt spijt van zijn actie. "Ik slaap er zelfs niet goed door."&lt;/description&gt;<br>      &lt;author&gt;Pascal Kuilboer&lt;/author&gt;<br>      &lt;category&gt;nieuws&lt;/category&gt;<br>      &lt;pubDate&gt;Fri, 15 Feb 2013 13:30:00 +0100&lt;/pubDate&gt;<br>      &lt;guid&gt;content.html&lt;/guid&gt;<br>      &lt;enclosure type="image/jpeg" url="images/foto1.jpg" /&gt;<br>&lt;/item&gt;</p><p>                title:$(v).find("title").text(),<br>                link:$(v).find("link").text(),<br>                img:$(v).find("enclosure.url").text(),<br>                description:$.trim($(v).find("description").text())</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737566">110</a> by Raymond Camden
		posted on 2/16/2013 at 6:58 AM
		</div>
		<div class="comment_text"><p>I think you would want something like this:</p><p>img = $(v).find("enclosure").attr("url").</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737558">111</a> by Pascal Kuilboer
		posted on 2/16/2013 at 7:03 AM
		</div>
		<div class="comment_text"><p>Tried that with a minor adjustment.<br>Changed the = for : and it works</p><p>img:$(v).find("enclosure").attr("url")</p><p>So many thanks and also for your amazing quick reply.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737567">112</a> by Pascal Kuilboer
		posted on 2/16/2013 at 8:43 AM
		</div>
		<div class="comment_text"><p>Could you tell me why the script is working wonderful in Dreamweaver Phonegap, but not in my app, Safari, Chrome of Firefox... locally or on server I'm lost!<br>Would really like your help in this. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737568">113</a> by Pascal Kuilboer
		posted on 2/16/2013 at 12:00 PM
		</div>
		<div class="comment_text"><p>Also one more thing. how could i limit the list to lets say 10 items?<br>Thanks in advance...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737572">114</a> by Raymond Camden
		posted on 2/16/2013 at 6:47 PM
		</div>
		<div class="comment_text"><p>Because Ajax requests to other servers are blocked by the browser for security reasons. You can bypass that in Chrome w/ a command line argument for testing.</p><p>To limit, you would just add a check in the loop. Once you hit your max you can stop looping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737570">115</a> by Pascal Kuilboer
		posted on 2/17/2013 at 6:58 PM
		</div>
		<div class="comment_text"><p>Can't get the dateformat to work (day - month year) with your tip to moment.js. It's driving me nuts (fairly common for programmers haha)</p><p>Also the limit loop you suggested still give all the entries in the xml</p><p>Any tips and help? Please...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737557">116</a> by Raymond Camden
		posted on 2/17/2013 at 10:51 PM
		</div>
		<div class="comment_text"><p>Can you share the code you are trying? Please use pastebin or Gists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737552">117</a> by Pascal Kuilboer
		posted on 2/18/2013 at 1:49 AM
		</div>
		<div class="comment_text"><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fkuilbop%2F8a81a63f58d49ba2255a%3A9qHfOOIxwiyar7aPS4DKqRlpyM0&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/kuilbop/8a81a63f58d49ba2255a">https://gist.github.com/kui...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737562">118</a> by Raymond Camden
		posted on 2/18/2013 at 6:31 PM
		</div>
		<div class="comment_text"><p>Um, you didn't put in any code to actually limit the entries. Look in the $.get block. Change that $.each to a for loop that goes up to, at most, your desired max.</p><p>I'm also not seeing where you tried to use moment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737559">119</a> by Pascal Kuilboer
		posted on 2/19/2013 at 3:31 AM
		</div>
		<div class="comment_text"><p>That's true... i deleted the code before i uploaded it and made it as clean as possible. Also the images if there is not an atrribute was showing undefined and got some code to eliminate that, but doesn't work anymore in after click in de detailspage.</p><p>Love your script but it's giving me some problems as you know... Hope you can help me with your expertise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737561">120</a> by Raymond Camden
		posted on 2/19/2013 at 5:25 AM
		</div>
		<div class="comment_text"><p>I'm afraid I don't understand though. I'm not going to write this code for you. You really need to show me what you tried first. Let's focus on limiting the data. I'd try what I suggested above - changing the $.each for a for loop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737551">121</a> by Pascal Kuilboer
		posted on 2/19/2013 at 9:57 PM
		</div>
		<div class="comment_text"><p>This is what i tried to limit the items to display..</p><p>------<br>    $.get(RSS, {}, function(res, code) {<br>        entries = [];<br>        var xml = $(res);<br>        var items = xml.find("item");<br>		for(var i = 0; i &lt; $items.length &amp;&amp; i &lt; 10; i++);<br>		    $.each(items, function(i, v) {<br>            entry = {<br>  title:$(v).find("title").text(),<br>  link:$(v).find("link").text(),<br>  img:$.trim($(v).find("enclosure").attr("url")),<br>  description:$.trim($(v).find("description").text())<br>            };<br>            entries.push(entry);<br>        });<br>----</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737554">122</a> by Raymond Camden
		posted on 2/20/2013 at 2:52 AM
		</div>
		<div class="comment_text"><p>Woah, this is not valid at all:</p><p> for(var i = 0; i &lt; $items.length &amp;&amp; i &lt; 10; i++);</p><p>You have an empty for loop there. Please see the Mozilla Developer Network docs on basic JavaScript syntax if you don't understand how for loops work:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FJavaScript%2FReference%2FStatements%2Ffor%3A2rzvM_j7O7Q0szQmKec04tSxNV8&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/JavaScript/Reference/Statements/for">https://developer.mozilla.o...</a></p><p>You need to get rid of the existing $.each as I said. THe for loop is a replacement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737555">123</a> by Jake
		posted on 3/19/2014 at 5:42 PM
		</div>
		<div class="comment_text"><p>Great tuts Raymond,</p><p>is there a way to make the Feed Reader work when I come back to the app after visiting an external link?</p><p>When I click on external link and then come back the article text and title go lost.<br>How to retrieve the content when I come back?</p><p>The same happen using chrome or other browsers and not only the emulator or the compiled app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737550">124</a> by Raymond Camden
		posted on 3/24/2014 at 4:04 PM
		</div>
		<div class="comment_text"><p>Try the most recent version: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F8%2F17%2FPhoneGap-RSS-Reader--Part-5%3AyP9hLUGN1PSJIR_MvhAV1m90XbQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/8/17/PhoneGap-RSS-Reader--Part-5">http://www.raymondcamden.co...</a></p><p>But be sure to NOT use the plugin - use the InAppBrowser feature instead. (Basically ChildBrowser was rolled into cored PG after the article was written.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737569">125</a> by Jake
		posted on 3/24/2014 at 5:03 PM
		</div>
		<div class="comment_text"><p>Thanks for your reply.</p><p>I'm using the latest versione but the content get lost when coming back.</p><p>I'm also trying to use the InAppBrowser but something strange happens. If I put allow origin * the InAppBrowser doesn't work and the feed reader work.</p><p>If I whitelist single URL the InAppBrowser works but the feed no. I'm using phonegap 3.4.</p><p>I think it's a bug of phonegap or of InAppBrowser.</p><p>When I use the access origin configuration that make the InAppBrowser works it doesn't show the navigation bar and the done button.</p><p>Have you been able to make it works?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737563">126</a> by Raymond Camden
		posted on 3/24/2014 at 6:08 PM
		</div>
		<div class="comment_text"><p>"I'm using the latest versione but the content get lost when coming back."<br>So to be clear, you see the new window open up, you can view the content, and then when you close the window, stuff is messed up?</p><p>"I'm also trying to use the InAppBrowser but something strange happens. If I put allow origin * the InAppBrowser doesn't work and the feed reader work."<br>What do you mean? You mean in the access block in config?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737564">127</a> by Jake
		posted on 3/24/2014 at 7:10 PM
		</div>
		<div class="comment_text"><p>Exactly. Stuff is messed up cause probably the inappbrowser is not working.</p><p>If I put in the config.xml</p><p>    &lt;access origin="http://*.mydomain.it" subdomains="true" /&gt; <br>    &lt;access origin="http://*.google.com" subdomains="true" /&gt;<br>    &lt;access origin="http://*.googleapis.com" subdomains="true" /&gt;<br>    &lt;access origin="http://127.0.0.1" subdomains="true" /&gt;</p><p>or whatever you want the inappbrowser works and show the URL bar with the option to close it, but the Feed parsing is not working and I can't see the Articles.</p><p>If I put in the www/config.xml</p><p>    &lt;access origin="*" /&gt;</p><p>The feed reader works, but the inappbrowser not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737553">128</a> by Raymond Camden
		posted on 3/24/2014 at 8:32 PM
		</div>
		<div class="comment_text"><p>Testing on iOS:<br>First, I added the InAppBrowser plugin.<br>Then I changed</p><p>window.plugins.childBrowser.showWebPage($(this).attr("href"));</p><p>to</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>($(this).attr("href"), "_blank");</p><p>And it worked for me. Did you make that last change?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737573">129</a> by Jake
		posted on 3/24/2014 at 9:22 PM
		</div>
		<div class="comment_text"><p>I found the issue!!</p><p>In the access I need to specify both http and https for Google and Googleapis.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737565">130</a> by Jake
		posted on 3/25/2014 at 1:11 AM
		</div>
		<div class="comment_text"><p>But what do you have in your access origin?</p><p>I've already addedd the <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>($(this).attr("href"), "_blank");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737577">131</a> by Raymond Camden
		posted on 3/25/2014 at 1:24 AM
		</div>
		<div class="comment_text"><p>I left it at default - *.</p></div>
	</div>
</div>
		