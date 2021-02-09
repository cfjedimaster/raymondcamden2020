
<div class="comment" id="c_1713742476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742476">1</a> by Dylan
		posted on 8/9/2012 at 8:16 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'm sure you already know it, but the big "a-ha" for me going from ColdFusion to JQM (in addition to your book, of course), was this page:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjquerymobile.com%2Fdemos%2F1.0%2Fdocs%2Fpages%2Fpage-dynamic.html%3Afi5K7dLBJDN4h99hjrEhp7_CH8c&amp;cuid=3321886" rel="nofollow noopener" title="http://jquerymobile.com/demos/1.0/docs/pages/page-dynamic.html">http://jquerymobile.com/dem...</a></p><p>Basically, trapping the "before page change", parsing the URL, building the page, then injecting it.  Working great on ICS (GNex) and JB (Nexus7).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742469">2</a> by Raymond Camden
		posted on 8/9/2012 at 9:49 PM
		</div>
		<div class="comment_text"><p>I'm aware of that way of solving it - but it just bugs me. ;) I don't know - it doesn't "feel" right to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742471">3</a> by Simon MacDonald
		posted on 8/9/2012 at 10:29 PM
		</div>
		<div class="comment_text"><p>I'm surprised you did not know about this bug. I've been stomping around the mailing list warning people of the issue for over a year. The workaround is to use localStorage as you discovered but there is a fix checked into 2.0.0. Joe did the work to make sure that query parameters will work in Honeycomb or ICS. If you are using 2.0.0 and it doesn't work right let us know the reproduction scenario.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742475">4</a> by Raymond Camden
		posted on 8/9/2012 at 10:32 PM
		</div>
		<div class="comment_text"><p>Unfortunately, I tend to only hit the Google group when I have an issue, which is a mistake. Going to start keeping up with it from now on.</p><p>I'm using Build though so 2.0.0 is not an option yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742477">5</a> by Harshal
		posted on 8/15/2012 at 1:39 AM
		</div>
		<div class="comment_text"><p>I am newbee and I am trying to run your example about SpeechRecognizer Plugin into ICS and it does not seem to be working.</p><p>Any plans to revise that article for ICS?</p><p>Also Jelly Bean involves native speech dictation and I would like to see if PhoneGap app can expolit the same?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742474">6</a> by Raymond Camden
		posted on 8/15/2012 at 1:41 AM
		</div>
		<div class="comment_text"><p>I checked Github, and the SpeechRecognizer plugin was last updated 5 months ago. Whether or not it will work well in 2.0 is down to whether or not it needs updating. You may want to reach out to the plugin author. Sorry to punt on this, but that's your best option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742472">7</a> by Simon MacDonald
		posted on 8/15/2012 at 5:13 AM
		</div>
		<div class="comment_text"><p>Actually you can get the updated speech recognizer plugin from:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fmacdonst%2Firis%3APfpZhflzEh1UQBVSCQNAraAOUds&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/macdonst/iris">https://github.com/macdonst...</a></p><p>That is my demo app that uses speech/tts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742478">8</a> by Raymond Camden
		posted on 8/15/2012 at 5:17 AM
		</div>
		<div class="comment_text"><p>Ah nice. We *really* need an updated list of plugins on the site. (We as in Adobe, not trying to give you more work, Simon. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742479">9</a> by Raymond Camden
		posted on 8/15/2012 at 5:19 AM
		</div>
		<div class="comment_text"><p>So Harshal - the point of my original blog post was to demonstrate the basic way of using a plugin in PG. That has not changed. Therefore I probably will not update the blog post. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742487">10</a> by Rachel
		posted on 10/24/2012 at 4:45 PM
		</div>
		<div class="comment_text"><p>Hey Ray, mind showing an example of your OnClick call and the method?  I am using the below and can't seem to find why it works on one page and not on another:</p><p>&lt;a href="projectDetails.html" onClick="return storePage(' + <a href="http://disq.us/url?url=http%3A%2F%2Fproject.id%3AtDWo1C9yeWo8vVKRaxTORYMn5bA&amp;cuid=3321886" rel="nofollow noopener" title="project.id">project.id</a> + ');"&gt;</p><p>function storePage(pageID){<br>localStorage.setItem('projectID',pageID);<br>return true; <br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742484">11</a> by Raymond Camden
		posted on 10/24/2012 at 4:49 PM
		</div>
		<div class="comment_text"><p>Can you describe how it isn't working?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742486">12</a> by Rachel
		posted on 10/24/2012 at 5:11 PM
		</div>
		<div class="comment_text"><p>The same JS OnClick method on a following page is on the link but it never "jumps" into the function and therefore when I do a getItem on the following page, it is null.  It does however change to the correct page.</p><p>&lt;a href="projectTaskDetails.html" onClick="return storePage(' + <a href="http://disq.us/url?url=http%3A%2F%2FtaskLists.id%3AHl25bCUcuHc_feCNGqE1yXX7PZM&amp;cuid=3321886" rel="nofollow noopener" title="taskLists.id">taskLists.id</a> + ');"&gt;</p><p>function storePage(pageID){<br><a href="http://disq.us/url?url=http%3A%2F%2Fconsole.info%3A0DizfQQlkqdui-PsMuRJ22g9iqo&amp;cuid=3321886" rel="nofollow noopener" title="console.info">console.info</a>('inside onClick taskLists function'); //this does not fire<br>localStorage.setItem('tlID',pageID);<br>return true; <br>}</p><p>Just wondering if you had set your OnClick method to do the 'return function(arg);'  Maybe I just have a syntax error :|</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742488">13</a> by Raymond Camden
		posted on 10/24/2012 at 5:13 PM
		</div>
		<div class="comment_text"><p>I don't use onClick like that. I use jQuery to bind an event listener for the touch event on the link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742485">14</a> by Rachel
		posted on 10/25/2012 at 7:22 PM
		</div>
		<div class="comment_text"><p>Do you know if it been confirmed that PhoenGap 2.0 fixes this issue?  We tried 2.0 and had no luck...</p><p>I talked to someone in the JQM forums and changed it to use a click event. For some reason, I don't think any click events are firing in ICS.  I've tried changing from .on to .live because pageshow only works when it is called with .live.  But neither .on or .live work on the click event.  Is this a similar to format to how you are handling it?</p><p>              $.each(results, function(i,project){<br>                     $projectList.append('&lt;li&gt;&lt;a href="projectDetails.html" data-id="' + <a href="http://disq.us/url?url=http%3A%2F%2Fproject.id%3AtDWo1C9yeWo8vVKRaxTORYMn5bA&amp;cuid=3321886" rel="nofollow noopener" title="project.id">project.id</a> + '"&gt;<br>});<br>              $<a href="http://disq.us/url?url=http%3A%2F%2FprojectList.live%3ApxQ5RlcoQeO5rSM6LHxzM7pyAlU&amp;cuid=3321886" rel="nofollow noopener" title="projectList.live">projectList.live</a>('click', 'a', storePage);<br>              $projectList.listview('refresh');<br>              });</p><p>function storePage(){<br> var pageID = $(this).data('id'); <br> <a href="http://disq.us/url?url=http%3A%2F%2Fconsole.info%3A0DizfQQlkqdui-PsMuRJ22g9iqo&amp;cuid=3321886" rel="nofollow noopener" title="console.info">console.info</a>('inside storePage on project list');<br> localStorage.setItem('projectID',pageID);<br> return true; <br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742489">15</a> by Raymond Camden
		posted on 10/25/2012 at 8:03 PM
		</div>
		<div class="comment_text"><p>I haven't personally tried this myself, but if it isn't working, you want to file a bug report with the PG folks so they know.</p><p>As for on/live, I prefer on normally. I don't use click, and you shouldn't either, since it is slower on mobile. touchstart is normally preferred (or touchend).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742491">16</a> by That guy
		posted on 3/21/2013 at 5:38 AM
		</div>
		<div class="comment_text"><p>Is this still a problem with phonegap 2.5?</p><p>I'm considering using Phone Gap for cross platform development apps. Please tell me a.s.a.p. as I have a job that depends on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742500">17</a> by Raymond Camden
		posted on 3/21/2013 at 5:53 PM
		</div>
		<div class="comment_text"><p>Above, Simon said it was fixed in 2.0.</p></div>
	</div>
</div>
		