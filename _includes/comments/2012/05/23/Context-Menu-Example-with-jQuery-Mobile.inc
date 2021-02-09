
<div class="comment" id="c_1713741213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741213">1</a> by kim_ras
		posted on 5/23/2012 at 8:45 PM
		</div>
		<div class="comment_text"><p>Hi<br>First of all thanks for the quick and nice sample!! It is exactly what I need in the lag of the next version Popup's.</p><p>One question which might be trivial but how do you reference to the object so you know what Image to "Send to Facebook"/"Send to Twitter" ...</p><p>Again thanks for our support<br>Kim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741214">2</a> by Raymond Camden
		posted on 5/23/2012 at 11:41 PM
		</div>
		<div class="comment_text"><p>Basic idea would be:</p><p>The taphold event is passed the item you clicked on as this. Store a copy of that in a global variable.</p><p>Use event listeners for the 3 links. When clicked, fetch the global variable.</p><p>Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741218">3</a> by Peter Doyle
		posted on 5/24/2012 at 9:21 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>When i ran the demo on my S2 i first got the 'copy image' android dialogue open. Your context menu opened below that?</p><p>Bit unusual not sure if this just on my phone<br>Tlv<br>Peter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741219">4</a> by kim_ras
		posted on 5/24/2012 at 12:38 PM
		</div>
		<div class="comment_text"><p>HI Ray,<br>Yes it makes sense, I did see the global variable afterwards.. not a big fan of global variables for events, but easy enough to handle.. <br>Thanks again<br>Kim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741216">5</a> by Gareth Arch
		posted on 5/24/2012 at 6:12 PM
		</div>
		<div class="comment_text"><p>@Ray,<br>Is there a stopPropgation in Phonegap?  So capture the event then stop the next ("tap") event firing after the taphold?  This is the way I handle adding buttons to lists in Flex to stop the list "indexChanged" event firing when I've added a button on top of a list item.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741215">6</a> by Raymond Camden
		posted on 5/24/2012 at 6:31 PM
		</div>
		<div class="comment_text"><p>+Peter Doyle: Shoot, I see that too on my One X. Let me investigate.</p><p>+Kim_ras: I hear ya - I think in this case it is ok though.</p><p>+Gareth: Remember - this isn't a PG issue but a web issue. PG is using webkit to render the content. So it isn't "Does PG support it", but can we do it in JS anyway. I'll try it on iOS and let you know. (As it stands, this isn't using PG anyway - just normal web pages.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741220">7</a> by Raymond Camden
		posted on 5/24/2012 at 6:39 PM
		</div>
		<div class="comment_text"><p>Peter/Gareth: stopProp worked great for the Android phone. I'm updating the Gist now (give it a few seconds). Thanks.</p><p>It did not - however - allow me to switch back the forceInput thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741221">8</a> by gaurav
		posted on 9/3/2012 at 2:58 PM
		</div>
		<div class="comment_text"><p>how can we pass parameters to taphold event</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741223">9</a> by Raymond Camden
		posted on 9/3/2012 at 4:59 PM
		</div>
		<div class="comment_text"><p>You don't. Parameters (involving the event) are passed already. Provide more detail on what you are trying to do and maybe I can help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741224">10</a> by RQX
		posted on 12/4/2012 at 12:33 PM
		</div>
		<div class="comment_text"><p>It doesn't work on Windows Phone device!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741225">11</a> by Raymond Camden
		posted on 12/4/2012 at 6:02 PM
		</div>
		<div class="comment_text"><p>It doesn't work how? Saying it doesn't work isn't helpful. Is it not rendering the menu in the right place? Did you add a console.log(...) to the taphold event to ensure it was firing at least? I need more details on -where- it fails.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741227">12</a> by RQX
		posted on 12/5/2012 at 5:02 AM
		</div>
		<div class="comment_text"><p>On windows phone's IE browser, when taphold on a link/img/a etc. the default action is show a context menu, like "open in new tab"/"copy the link address". it won't show our simpdialog.</p><p>If you have a windows phone mobile, you can run your demo page and you will see this problem soon.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741229">13</a> by Raymond Camden
		posted on 12/5/2012 at 6:40 AM
		</div>
		<div class="comment_text"><p>Hmpth, you got me there. Best I can recommend is posting to the jQuery Mobile forum and letting us know. I don't have access to a Windows Phone right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741230">14</a> by pavan
		posted on 5/31/2013 at 2:03 PM
		</div>
		<div class="comment_text"><p>Pavan @(&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.pavanh.com%2F%3Axqow9YBBiaSb-NdpYkPUXDUXkQg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pavanh.com/">http://www.pavanh.com/</a>"&gt;pavanh&lt;/a&gt;)</p><p>Very nice tutorial with efficent and detailed explaination, you  can also check <br>this one &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.pavanh.com%2F2013%2F02%2Fandroid-context-menu-example.html%3AS9fEy3GcMT02Z-QGfqSC3niXogM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pavanh.com/2013/02/android-context-menu-example.html">http://www.pavanh.com/2013/...</a>"&gt;context menu&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741232">15</a> by Raymond Camden
		posted on 5/31/2013 at 3:48 PM
		</div>
		<div class="comment_text"><p>@pavan: To be clear, that is for native development. This blog post is about how to do it for mobile web or hybrid apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741233">16</a> by Max Bürgi
		posted on 4/8/2014 at 11:17 AM
		</div>
		<div class="comment_text"><p>I do jquery only for a couple of month.</p><p>I refer to <a href="http://disq.us/url?url=http%3A%2F%2Fraymondcamden.com%2Fdemos%2F2012%2Fmay%2F23%2F%3AaXEmD0PC9y6pOqfSHAsXl0XwuSQ&amp;cuid=3321886" rel="nofollow noopener" title="http://raymondcamden.com/demos/2012/may/23/">http://raymondcamden.com/de...</a></p><p>I ran this on firefox (no touchscreen) and emulated taphold by mousedown and liked it very much.</p><p>Then i ran it on my android cellphone. But the context dialog (right click) showed up first and then the simple dialog. Can happen the sd is completely hidden behind context dialog. how to supress firing context dialog just for this single event?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741234">17</a> by Raymond Camden
		posted on 4/8/2014 at 7:18 PM
		</div>
		<div class="comment_text"><p>Hmm. You may want to try this: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F3413683%2Fdisabling-the-context-menu-on-long-taps-on-android%3A3bQYwq5dNsaiKjohJGKqyzXI6Wk&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/3413683/disabling-the-context-menu-on-long-taps-on-android">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741235">18</a> by PrinceJava
		posted on 4/23/2014 at 7:16 PM
		</div>
		<div class="comment_text"><p>Mr. Raymond Camden, please helpe me, do you can telle why it does not work this code? <br>$ (document). ready (function () {<br>    <br>$ (". various".) on ("taphold", "img", function () {<br>    $ (this) fancybox ().; <br>});</p><p>  <br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741237">19</a> by Raymond Camden
		posted on 4/23/2014 at 8:43 PM
		</div>
		<div class="comment_text"><p>No, I can't, because you didn't say how it wasn't working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741238">20</a> by Peter Hancox
		posted on 9/3/2014 at 10:44 AM
		</div>
		<div class="comment_text"><p>Is there any way to get the location of the taphold so that popup menu can be displayed relative to the touch location?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741240">21</a> by Raymond Camden
		posted on 9/3/2014 at 3:07 PM
		</div>
		<div class="comment_text"><p>Not sure actually - try dumping the event object. It may contain the position.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741242">22</a> by Raymond Camden
		posted on 9/3/2014 at 3:08 PM
		</div>
		<div class="comment_text"><p>First result via Google: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F14980886%2Fjquery-mobile-clientx-and-clienty-and-the-taphold-event%3ALW8kHfJHttrCumNajzqxHOIsnNc&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/14980886/jquery-mobile-clientx-and-clienty-and-the-taphold-event">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741241">23</a> by Peter Hancox
		posted on 9/3/2014 at 3:36 PM
		</div>
		<div class="comment_text"><p>I'd tried examining the event object and experimented with different attributes but found nothing useful.</p><p>After posting this question, I found the post you mentioned and implemented that approach.</p><p>Was hoping for something a little less convoluted as I would have expected this information to be available on the event.  It appears to be available in the original "touchstart" event as something like touches[0].clientX and clientY but doesn't make it through to the "taphold" event.</p><p>Thanks very much for your response (and the other articles of yours I've been learning from).</p><p>REGARDS<br>Peter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741244">24</a> by Raymond Camden
		posted on 9/3/2014 at 3:51 PM
		</div>
		<div class="comment_text"><p>In theory - you could raise this as an issue with the jQM team as they added the taphold support for their framework. In theory. ;)</p></div>
	</div>
</div>
		