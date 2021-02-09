
<div class="comment" id="c_1713711531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711531">1</a> by Kris Korsmo
		posted on 1/17/2009 at 4:15 AM
		</div>
		<div class="comment_text"><p>Cool.  Any way you could get it do "dock" to an area (say a named div) on release?  The effect I'm looking for is something akin to iGoogle.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711526">2</a> by Raymond Camden
		posted on 1/17/2009 at 4:19 AM
		</div>
		<div class="comment_text"><p>Do you mean: I can drag the window, but when I let go, it goes to one particular X/Y?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711536">3</a> by Kris Korsmo
		posted on 1/17/2009 at 4:26 AM
		</div>
		<div class="comment_text"><p>Let's say you had 3 cfwindows: a,b and c, arranged vertically.  Each window has a fixed height of 200px.  If you drag window a below window c, windows b and c would each shift up by 200px and window a would align itself below.  Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711535">4</a> by Henry Ho
		posted on 1/17/2009 at 5:43 AM
		</div>
		<div class="comment_text"><p>jQuery Sortable?<br><a href="http://disq.us/url?url=http%3A%2F%2Fui.jquery.com%2Fdemos%2Fsortable%3AKxtR4dNBIa1Ef2Ys2LJtY5wLnZY&amp;cuid=3321886" rel="nofollow noopener" title="http://ui.jquery.com/demos/sortable">http://ui.jquery.com/demos/...</a></p><p>I don't think it'll work for CFWINDOW.  CFDIV/CFPOD, maybe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711538">5</a> by Raymond Camden
		posted on 1/17/2009 at 7:26 PM
		</div>
		<div class="comment_text"><p>Kris, yeah, maybe look at selectable from jquery. But like him, I'd be surprised if it worked with the CF stuff. Can't hurt to try though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711534">6</a> by Joel
		posted on 3/7/2009 at 2:24 AM
		</div>
		<div class="comment_text"><p>Ray..<br>Apparently the "event.pageX" and "event.pageY" are not valid for IE.</p><p>Can you shed some light on a fix for this?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711543">7</a> by Raymond Camden
		posted on 3/7/2009 at 2:35 AM
		</div>
		<div class="comment_text"><p>Why am I not surprised? I googled a bit but didn't find anything obvious, and I can only test IE virtually. Anyone want to step up for this one? Of course in jQuery it would be simpler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711546">8</a> by Jay
		posted on 3/14/2009 at 12:21 AM
		</div>
		<div class="comment_text"><p>Any progress on the IE part of this. I had the same problem testing in IE, but would love to use cfwindow and have it open next to a link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711537">9</a> by Meenakshi
		posted on 8/17/2009 at 7:03 PM
		</div>
		<div class="comment_text"><p>Use event.clientX and event.clientY instead of event.pageX,event.pageY.  This is working in both IE and Mozilla Firefox</p><p>&lt;cfajaximport tags="cfwindow"&gt;</p><p>&lt;script&gt;<br>function makeWin(x,y) {<br>    ColdFusion.Window.create('mywin','Windows Rules','win.cfm',{x:x+25,y:y+25});<br>}<br>&lt;/script&gt;</p><p>&lt;h2&gt;Content to push stuff down&lt;/h2&gt;</p><p>&lt;h2&gt;More content to push stuff down the page vertically...&lt;/h2&gt;</p><p>&lt;p&gt;<br>This is the test &lt;a href="" onclick="makeWin(event.clientX,event.clientY);return false;"&gt;link&lt;/a&gt;.<br>&lt;/p&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711542">10</a> by Jim Eisenhauer
		posted on 11/12/2010 at 10:47 PM
		</div>
		<div class="comment_text"><p>So simple it works great, and thank you for the amendment Meenakshi but I couldn't get it to work in IE without actually using window.event.clientX &amp; window.event.clientY.</p><p>One last question:  Any way to get this to be able to fire off more than once? It seems to only work once, and keeps the position static.  The reason I ask is I have the link in two places (top and bottom) but once you click on either of the links it 'sticks' the window where you first clicked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711549">11</a> by miketothep
		posted on 12/1/2010 at 2:38 PM
		</div>
		<div class="comment_text"><p>That works great for creating a new cfwindow, but what if it already exists and is just hidden? Perhaps the user moved it, then closed it and now clicks on the "launch" link again. Is there a way to bring it back without destroying it and recreating it?</p><p>moveTo used to work in cf8, but no longer does in cf9. I've tried various flavors of setPosition and setPagePosition to no avail. Just wondering.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711541">12</a> by Raymond Camden
		posted on 12/1/2010 at 5:54 PM
		</div>
		<div class="comment_text"><p>Did you try <a href="http://disq.us/url?url=http%3A%2F%2FColdFusion.Window.show%3Aut5RVMiY3vZkqHf_0Bd7-NzWCNM&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusion.Window.show">ColdFusion.Window.show</a>()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711539">13</a> by miketothep
		posted on 12/2/2010 at 12:00 PM
		</div>
		<div class="comment_text"><p>Sure, show() brings the window back to visibility, but it's still wherever the user left it, not back at it's original position. Or am I missing something really obvious?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711545">14</a> by Raymond Camden
		posted on 12/2/2010 at 4:46 PM
		</div>
		<div class="comment_text"><p>Try getting the native Window object using ColdFusion.Window.getWindowObject, then you can call the native Ext function on it - moveTo. See the Ext docs for BasicDialog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711540">15</a> by wolf183
		posted on 4/26/2011 at 2:01 AM
		</div>
		<div class="comment_text"><p>Not sure why but this code will not work. I am using CF9 if that could be the reason. It just works as a link back to itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711547">16</a> by Raymond Camden
		posted on 4/26/2011 at 2:07 AM
		</div>
		<div class="comment_text"><p>I just tested the script - as is - in CF901 and it worked fine. What browser... IE?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711548">17</a> by Lucas
		posted on 12/5/2011 at 5:32 PM
		</div>
		<div class="comment_text"><p>Hi Ray <br>how i can add to onclick some parameter froma query?<br>because i have a href into a JS string and i can't use quote or double quote.</p><p>&lt;cfset outString &amp;= "&lt;li&gt;&lt;a href='##' onclick='makeWin(event.pageX,event.pageY);return false;' &gt;#Left(List.nome_evento,15)#&lt;/a&gt; &lt;/li&gt; " &gt;</p><p>but i need  to open in window event on a particular date</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711552">18</a> by Raymond Camden
		posted on 12/5/2011 at 7:08 PM
		</div>
		<div class="comment_text"><p>Not quite sure what you mean. You could make the link dynamic:</p><p>This is the test &lt;a href="" onclick="makeWin(event.pageX,event.pageY,#someCFVAR#);return false;"&gt;link&lt;/a&gt;.</p></div>
	</div>
</div>
		