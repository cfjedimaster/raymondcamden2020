
<div class="comment" id="c_1713667466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667466">1</a> by todd sharp
		posted on 6/20/2007 at 5:29 PM
		</div>
		<div class="comment_text"><p>One other note about UI controls in general and cfwindow.  I'm lazy so I'll quote the docs:</p><p>"You can use the special controlName_body variable to access and change the body<br>contents of the specified control. For example, you can use the<br>controlName_body.innerHTML property to set the body HTML. For cfpod and<br>cfwindow tags, you can also use the controlName_title to get or set the control’s title<br>bar contents."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667469">2</a> by RobW
		posted on 6/20/2007 at 7:15 PM
		</div>
		<div class="comment_text"><p>i can has invisible windows?</p><p>This sounds both intriguing and dangerous. Good for background processing, preloading or something like that, but on the other hand I forsee it being misused in some nefarious way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667471">3</a> by Raymond Camden
		posted on 6/20/2007 at 7:23 PM
		</div>
		<div class="comment_text"><p>How would it be dangerous? It is no different than a hidden form field. A hidden div. Or anything else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667474">4</a> by Todd
		posted on 6/20/2007 at 8:17 PM
		</div>
		<div class="comment_text"><p>Hey, it's about time we started using CF nefariously. :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667467">5</a> by Cutter
		posted on 6/20/2007 at 9:55 PM
		</div>
		<div class="comment_text"><p>Great stuff Ray! It should also be noted that, for those who need far more advanced functionality than is available through the ColdFusion JavaScript API, the rendered components are created from the ExtJS UI library (formerly the Yahoo UI). If you prototype an application with these components, but find that you require more advanced control, you can programmatically create the same (or similar) components by including the libraries directly and writing custom functionality. It is outstanding that you can do this base level functionality very quickly and easily with CFML, and then continue with a consistent interface should you require more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667479">6</a> by Chris Dary
		posted on 6/22/2007 at 10:42 PM
		</div>
		<div class="comment_text"><p>My only complaint so far is this:</p><p>In your initial example (the simplest one), take a look at the source. That's a whopping 12 js includes, along with 3 CSS includes.</p><p>This totals up to huge 552KB. For one window.</p><p>...</p><p>As a comparison, this entire blog page (at this point in the comments), totals only 216KB. Including all images, etc.</p><p>That's pretty insane, I think. Pick up jquery and you can do the same thing in about a tenth of the size, and debatably, the same ease with more functionality.</p><p>-Chris Dary</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667473">7</a> by Raymond Camden
		posted on 6/22/2007 at 10:50 PM
		</div>
		<div class="comment_text"><p>Chris, this has been discussed before. Adobe is aware of this. Do not forget that this is a pre-release.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667478">8</a> by Michael White
		posted on 8/24/2007 at 11:07 PM
		</div>
		<div class="comment_text"><p>on the last method where you create a cfwindow using javascript, how do you apply styles to it such as headerStyle and bodyStyle?<br>I have the following in the head section, but I would like to change the colors/fonts. do I need a separate css style?</p><p>&lt;script&gt;<br>function ebWindow() {<br>	ColdFusion.Window.create("EB","Entered By Details","/EmployeeInfo.cfm?eid=&lt;cfoutput&gt;#val(Session.worklogInstance.EnteredBy)#&lt;/cfoutput&gt;",<br>	{x:100, y:20, resizable:true, height:317, width:527, modal:false, closable:true, draggable:true});<br>}<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667468">9</a> by Raymond Camden
		posted on 8/24/2007 at 11:09 PM
		</div>
		<div class="comment_text"><p>It looks like you can't. :( I guess you would need to use an inline cfwindow instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667470">10</a> by Michael White
		posted on 8/25/2007 at 12:18 AM
		</div>
		<div class="comment_text"><p>I found the css style sheet that handles that and changed a couple of settings but not sure how to over-ride those settings on my page.</p><p>CFIDE\scripts\ajax\resources\ext\css\ext-all.css<br>the sections i'm looking at :<br>.x-dlg .x-dlg-hd<br>.x-dlg .x-dlg-dlg-body</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667472">11</a> by Michael White
		posted on 8/25/2007 at 12:41 AM
		</div>
		<div class="comment_text"><p>as I dug a little deaper... if found the documentation folder that said there were four "skins" but the directory the css was pointing to only had the "default" directory. well the other directories are there but they are at:<br>CFIDE\scripts\ajax\ext\resources\images. I found I could change the images to use the other color schemes if I wanted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667477">12</a> by Michael White
		posted on 8/25/2007 at 3:57 AM
		</div>
		<div class="comment_text"><p>and here's another thing... if you're using cfdiv to layout some areas, use cfmenu to do a ColdFusion.navigate to change the content of a cfdiv (in this case a form) and you want to create and display a cfwindow using a link or a button, it doesn't seem to work. Maybe I'm doing it wrong. <br>How do you use ColdFusion.Window.create() from within a cfform within a cfdiv?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667476">13</a> by Michael White
		posted on 8/25/2007 at 4:35 AM
		</div>
		<div class="comment_text"><p>I got it working by using a long onClick line instead of calling a function:<br>onClick="ColdFusion.Window.create('MC','Main Contact Details','/EmployeeInfo.cfm?eid=#val(Session.worklogInstance.EmployeeID)#',	{x:150, y:25, resizable:true, height:320, width:520, modal:false, closable:true, draggable:true});"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667480">14</a> by brian
		posted on 9/21/2007 at 1:03 PM
		</div>
		<div class="comment_text"><p>I've noticed that if I have a cfwindow on a page with a form where i try and set the initial focus on a particular field, setting the focus no longer seems to work. Is there a way around this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667475">15</a> by Raymond Camden
		posted on 9/21/2007 at 5:11 PM
		</div>
		<div class="comment_text"><p>WHat if you use the CF/JS API to get the window object? Maybe then you can get the DOM inside.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667484">16</a> by TJ Downes
		posted on 9/29/2007 at 11:20 PM
		</div>
		<div class="comment_text"><p>eheheh, Michael said "four skins"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667485">17</a> by Raymond Camden
		posted on 9/30/2007 at 2:32 AM
		</div>
		<div class="comment_text"><p>What are you - four?</p><p>;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667488">18</a> by John Farrar
		posted on 10/25/2007 at 9:07 AM
		</div>
		<div class="comment_text"><p>Challenge quiz...<br>How do you change the title of the window if you are using it more than once on the page? (Reuse that is.) I figured this out for Pods... but it doesn't seem to work for windows.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667486">19</a> by todd sharp
		posted on 10/25/2007 at 3:04 PM
		</div>
		<div class="comment_text"><p>John:</p><p>Are you saying controlName_title.innerHTML doesn't work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667497">20</a> by John Farrar
		posted on 10/25/2007 at 5:07 PM
		</div>
		<div class="comment_text"><p>It worked for the cfpod but not for the window for some reason.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667494">21</a> by Fred
		posted on 10/26/2007 at 5:34 AM
		</div>
		<div class="comment_text"><p>I am opening/showing a CFWINDOW from a link using ColdFusion.Window.Show.  The CFWINDOW has a CFForm.</p><p>The action is on the same page the form is. Works asynch/ajax ok. Then the user can close the cfwindow.</p><p>Problem is when/if the user opens the CFWINDOW again, they see the action page result.</p><p>How can I have it so each time the CFWINDOW opens, it shows a new blank form? I know that if you use a different window name it works, but in my case the parent page doesn't refresh, so I cannot make the window name change. Refreshing the page is not an option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667499">22</a> by todd sharp
		posted on 10/26/2007 at 4:58 PM
		</div>
		<div class="comment_text"><p>Fred:  If you're using the cfwindow tag just add refreshOnShow="true" (don't you love it when they make it easy on us??).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667495">23</a> by todd sharp
		posted on 10/26/2007 at 4:59 PM
		</div>
		<div class="comment_text"><p>John:  That is really weird - it works for me.  I'd be glad to look at your code to see if I see something weird.  Ping me off blog if you'd like...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667500">24</a> by Fred
		posted on 10/27/2007 at 4:23 PM
		</div>
		<div class="comment_text"><p>Yes that was it.  I missed that property.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667501">25</a> by Michael White
		posted on 11/2/2007 at 5:48 PM
		</div>
		<div class="comment_text"><p>maybe this is related to my problem of a ColdFusion.window.create not refreshing? since I'm not using the cfwindow tag there is no refreshOnShow attribute. maybe it's the window refresh that's not happening, it has nothing to do with the query running, it's just hiding and showing the window... like it creates it once and even though I have a create.window tag on each link it thinks it's the same window and just "shows" it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667498">26</a> by Michael White
		posted on 11/2/2007 at 5:52 PM
		</div>
		<div class="comment_text"><p>that was it! I was using a static name for the create.window function. when I changed the windows name to a variable that changes with the link the window shows the correct content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667496">27</a> by todd sharp
		posted on 11/2/2007 at 6:33 PM
		</div>
		<div class="comment_text"><p>Michael:  A different approach would be to call ColdFusion.Window.create() and immediately follow it with a ColdFusion.navigate('url.cfm', 'windowName') which essentially is equivalent to the refreshOnShow attribute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667504">28</a> by Michael White
		posted on 11/2/2007 at 6:50 PM
		</div>
		<div class="comment_text"><p>that might be a better way to do it. I was so excited when I realized what was happening I had to post though I haven't worked through the ramifications yet. You know what triggered it? a comment on a post by Ben Nadel: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Findex.cfm%3Fdax%3Dblog%3A194.view%3AIPCPzRQfMnSH-xjf613Sosgn7lc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/index.cfm?dax=blog:194.view">http://www.bennadel.com/ind...</a> about how to trick coldfusion into not caching a "Select * from tablename" by using an alias for the tablename. Unrelated post but it triggered a connection to a new line of thought.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667502">29</a> by Terry Beard
		posted on 11/6/2007 at 5:49 PM
		</div>
		<div class="comment_text"><p>When I use getWindowObject I get the following error in IE(6&amp;7): "ColdFusion.Window.getWindowObject: No window exists by the name wcl".  wcl is the name of the window as specified in the name of the cfwindow tag.  However, Mozilla seems to work as expected.  Any ideas or experience would be extremely helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667505">30</a> by todd sharp
		posted on 11/6/2007 at 6:18 PM
		</div>
		<div class="comment_text"><p>Terry:  Post the code and we'll see if we can spot something (or just send it to me off-blog so we don't spam up Ray's comments here).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667503">31</a> by Terry Beard
		posted on 11/6/2007 at 9:04 PM
		</div>
		<div class="comment_text"><p>The issue seems to revolve around events in javascript, and not the getWindowObject as I had first suspected.  While I have been programming for a long time, I have only recently begun to grasp js, so please go easy on me.  My code is as follows:</p><p>moveListener = function() <br>{<br>  if (ColdFusion.Window != null)<br>  {  var w = ColdFusion.Window.getWindowObject('WCLX');<br>     w.on('move',setCoords,w);<br>  }<br>}</p><p>setCoords = function(ob,x,y) <br>{  <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>('mainmenu.cfm?function=1&amp;win=CL&amp;x=' + x + '&amp;y=' + y,'_self','')<br>}</p><p>On my main page I have a body tag</p><p>&lt;body onload="javascript:moveListener()"&gt;</p><p>Basically what I want to do is when the user moves the window, it automatically saves the coords to a database.  This process works like a champ in Mozilla.  However, in IE it fails.  I am not sure if IE is just being particular or Mozilla is a little less concerned about the order of things.</p><p>In my googleations, there seems like there may be an issue with using the onload event in the body tag.  But I am just a padawan at this stuff right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667506">32</a> by Terry Beard
		posted on 11/6/2007 at 9:09 PM
		</div>
		<div class="comment_text"><p>Kudos to you, Todd, as I have swiped your code.  Just wanted to make sure I give credit were credit is due. (I have colleagues that would do otherwise)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667507">33</a> by todd sharp
		posted on 11/6/2007 at 9:43 PM
		</div>
		<div class="comment_text"><p>Well you might be best doing the database save with Ajax rather then opening a new window.  That could get quite ugly if the window were moved a lot.  Also, why not just use cookies?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667508">34</a> by Terry Beard
		posted on 11/6/2007 at 9:57 PM
		</div>
		<div class="comment_text"><p>I thought about using cookies, but I wanted to values to persist regardless of the computer the user is located at.  Instead of a new window opening, the page basically reloads (which is relatively fast considering our infrastructure).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667511">35</a> by Terry Beard
		posted on 11/6/2007 at 10:03 PM
		</div>
		<div class="comment_text"><p>I did a cut paste of the original code you had posted, and I received the same error in IE.  However, what is interesting is that the coordinates still saved.  Hmmmm...now I am really confused.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667512">36</a> by Terry Beard
		posted on 11/6/2007 at 10:24 PM
		</div>
		<div class="comment_text"><p>ok...more info and progress!?  I changed the initShow to false, and then place a link on the page to call the window (very similar to your example), and while I still received the error first time the page loaded, the coordinates stored when the window was moved around.  If I disable the script debugging, while not purdy, might be doable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667514">37</a> by Terry Beard
		posted on 11/6/2007 at 10:27 PM
		</div>
		<div class="comment_text"><p>Ok...never mind - its still not working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667515">38</a> by Dustin Snell
		posted on 12/14/2007 at 8:53 PM
		</div>
		<div class="comment_text"><p>The code to capture window position does not work on IE7. It does work on Firefox. I get the error "Exception thrown and not caught." Any ideas? Here is my simple code to repro:</p><p>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=utf-8" /&gt;<br>&lt;title&gt;Untitled Document&lt;/title&gt;</p><p>	&lt;script type="text/javascript"&gt;<br>		moveListener = function() <br>		{<br>		if (ColdFusion.Window != null)<br>		{ var w = ColdFusion.Window.getWindowObject('testWindow');<br>		w.on('move',setCoords,w);<br>		}<br>		}</p><p>		setCoords = function(ob,x,y) <br>		{ alert(x);<br>		}<br>	&lt;/script&gt;<br>&lt;/head&gt;<br>&lt;body onload="javascript:moveListener()"&gt;<br>	&lt;CFWINDOW closable="true" initshow="true" name="testWindow"&gt;<br>		Test test<br>	&lt;/CFWINDOW&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667518">39</a> by Dustin Snell
		posted on 12/16/2007 at 8:25 AM
		</div>
		<div class="comment_text"><p>The solution to the IE problem with the onmove script is as follows:</p><p>remove the onload=... from the body tag, and add &lt;cfscript&gt;ajaxOnLoad('moveListener');&lt;/cfscript&gt; just before the closing &lt;/body&gt;.  worked like a charm for me...</p><p>Credit: Azadi from <a href="http://disq.us/url?url=http%3A%2F%2FHouseofFusion.com%3A8mWiuh1fVX_KgnXOJrDOapvDsWM&amp;cuid=3321886" rel="nofollow noopener" title="HouseofFusion.com">HouseofFusion.com</a> CF-Talk list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667517">40</a> by Andy Sandefer
		posted on 1/28/2008 at 11:58 PM
		</div>
		<div class="comment_text"><p>Adding basic style elements to the headerstyle and bodystyle can be annoying to figure out so here's a quick example of that too (notice my windowOptions object's headerstyle attribute to be specific)...</p><p>	function showTrust() {<br>		var selectedClientID = ColdFusion.getElementValue('gridClientTrusts','trustSelector','FK_ClientID');<br>		var selectedTrustID = ColdFusion.getElementValue('gridClientTrusts','trustSelector','PK_TrustID');</p><p>		var windowOptions = new Object();<br>		windowOptions.width = 800;<br>		windowOptions.height = 600;<br>		windowOptions.centered = true;<br>		windowOptions.modal = true;<br>		windowOptions.resizeable = true;<br>		windowOptions.initshow = true;<br>		windowOptions.draggable = true;<br>		windowOptions.closeable = true;<br>		windowOptions.headerstyle = 'font-family: verdana; background-color: #0066FF;';</p><p>		ColdFusion.Window.create('clientTrust','Client Trust','editclienttrust.cfm?clientID=' + selectedClientID + '&amp;trustID=' + selectedTrustID, windowOptions);<br>	}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667531">41</a> by Jeremy Prevost
		posted on 2/27/2008 at 2:30 AM
		</div>
		<div class="comment_text"><p>@Andy: Thanks for posting that example code on how to style the window when using ColdFusion.Window.create. It works great (minor typo though, it should be <a href="http://disq.us/url?url=http%3A%2F%2FwindowOptions.center%3AM3zvgKYLTXbMMzMkH7n0kyTfNAU&amp;cuid=3321886" rel="nofollow noopener" title="windowOptions.center">windowOptions.center</a> = true not centered=true).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667528">42</a> by Richard Baldwin
		posted on 3/10/2008 at 11:02 PM
		</div>
		<div class="comment_text"><p>@Andy: Thanks for your snippet... it was exactly what I was looking for. I did find another typo... "resizeable" should be "resizable".</p><p>@Ray: Love the blog, it has been a big help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667521">43</a> by Gabe
		posted on 3/10/2008 at 11:07 PM
		</div>
		<div class="comment_text"><p>I am currently working on a project that is using cflayout, within one of the tabs there is a link that opened up a popup window that contained a form. When the user submits the form there is javascript that refreshed the content from within one of the tabs on the main page and then closes the window. I am trying to switch the popup window with a cfwindow but I am having alot of trouble getting the cfwindow to close automatically when the form is submitted and for the cfwindow to update tab on the main page as well. Any tips?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667526">44</a> by Raymond Camden
		posted on 3/11/2008 at 12:11 AM
		</div>
		<div class="comment_text"><p>You have to use JS code ont he form submit to notice it and close the window. You can use ColdFusion.Ajax.submitForm. Check the docs for that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667523">45</a> by Ketan
		posted on 3/14/2008 at 6:28 PM
		</div>
		<div class="comment_text"><p>Hi Ray, first off, LOVE your tutorials, :-)  I am actually having an odd behavior with &lt;cfwindow&gt;</p><p>This is what the link looks like: <a href="http://disq.us/url?url=http%3A%2F%2Fabc.com%2Fpage1.cfm%3FmyID%3D12355431%3AI8T_BFVzq1K09EnuL1l7-0dmtBk&amp;cuid=3321886" rel="nofollow noopener" title="abc.com/page1.cfm?myID=12355431">abc.com/page1.cfm?myID=1235...</a></p><p>In page1.cfm, I'm using &lt;cfwindow&gt; via href:</p><p>&lt;cfoutput query=""&gt;<br>...<br>&lt;a href="##" onclick="<a href="http://disq.us/url?url=javascript%3AColdFusion.Window.show%3ApnnnU_OzhPlDK2H88sRbHiY-_zs&amp;cuid=3321886" rel="nofollow noopener" title="javascript:ColdFusion.Window.show">javascript:ColdFusion.Windo...</a>('MyWindow');"&gt;Text&lt;/a&gt;<br>&lt;/cfquery&gt;<br>...</p><p>&lt;cfwindow<br>   name="MyWindow"<br>   center="true"<br>   closable="true"<br>   draggable="true"<br>   height="200"<br>   resizable="true"<br>   title="#myQuery.ID#"<br>   width="400"&gt;</p><p>    &lt;form name="te" action="<a href="http://disq.us/url?url=http%3A%2F%2Fyahoo.com%3AV104q-nvzKYhzT6aX2gay9VFUg0&amp;cuid=3321886" rel="nofollow noopener" title="yahoo.com">yahoo.com</a>" method="post"&gt;<br>        &lt;input type="text" name="name" value=""&gt; &lt;br/&gt;<br>        &lt;input type="hidden" name="name" value="&lt;cfoutput&gt;#myQuery.ID#&lt;/cfoutput&gt;"&gt; &lt;br/&gt;<br>        &lt;input type="submit" name="submit" value="submit"&gt;&lt;br/&gt;<br>    &lt;/form&gt;<br>&lt;/cfwindow&gt;</p><p>When I click "Text" link the first time, nothing happens, but the second time the &lt;cfwindow&gt; executes.  After spending an hour and countless tries, I realized the only thing each instance had in common was the URL.</p><p>Initially the URL was: <a href="http://disq.us/url?url=http%3A%2F%2Fabc.com%2Fpage1.cfm%3FmyID%3D12355431%3AI8T_BFVzq1K09EnuL1l7-0dmtBk&amp;cuid=3321886" rel="nofollow noopener" title="abc.com/page1.cfm?myID=12355431">abc.com/page1.cfm?myID=1235...</a></p><p>After I click on the link the first time (when nothing happens), the URL looks like this: <a href="http://disq.us/url?url=http%3A%2F%2Fabc.com%2Fpage1.cfm%3FmyID%3D12355431%23%3AfHHv2kxIXUny0E4QZq_rAWWTFN8&amp;cuid=3321886" rel="nofollow noopener" title="abc.com/page1.cfm?myID=12355431#">abc.com/page1.cfm?myID=1235...</a></p><p>When I click the link again, the &lt;cfwindow&gt; works.</p><p>Does passing a var in the URL make &lt;cfwindow&gt; act odd?  Why would it work if the URL was:<br><a href="http://disq.us/url?url=http%3A%2F%2Fabc.com%2Fpage1.cfm%23%3AuukJlpzjp1tztZrdBz4wiEXn-zo&amp;cuid=3321886" rel="nofollow noopener" title="abc.com/page1.cfm#">abc.com/page1.cfm#</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fabc.com%2Fpage1.cfm%3FmyID%3D12355431%23%3AfHHv2kxIXUny0E4QZq_rAWWTFN8&amp;cuid=3321886" rel="nofollow noopener" title="abc.com/page1.cfm?myID=12355431#">abc.com/page1.cfm?myID=1235...</a></p><p>But when the URL is:<br><a href="http://disq.us/url?url=http%3A%2F%2Fabc.com%2Fpage1.cfm%3FmyID%3D12355431%3AI8T_BFVzq1K09EnuL1l7-0dmtBk&amp;cuid=3321886" rel="nofollow noopener" title="abc.com/page1.cfm?myID=12355431">abc.com/page1.cfm?myID=1235...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667524">46</a> by Raymond Camden
		posted on 3/14/2008 at 6:45 PM
		</div>
		<div class="comment_text"><p>Nothing in the URL should break the Ajax stuff. When you click the first time, do you get a JS error? Don't forget that IE tends to hide JS errors, as does FF sometimes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667525">47</a> by Ketan
		posted on 3/14/2008 at 7:53 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.  Can I e-mail you the link to the issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667529">48</a> by Raymond Camden
		posted on 3/14/2008 at 8:02 PM
		</div>
		<div class="comment_text"><p>Katan - I'm way over booked this month (notice my blogging is way down?) so it may make sense for you to post the link and others here could possible help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667530">49</a> by Andy Sandefer
		posted on 3/14/2008 at 9:37 PM
		</div>
		<div class="comment_text"><p>Let's try an experiment.  I want you to make the name argument of the window unique.  Obviously we can do this many ways but time should suffice as it will never mathematically be what it was a second ago.</p><p>	function showBillingBatch(recordAction) {<br>		var selectedBillingBatchID = ColdFusion.getElementValue('gridBillingBatches','frmBillingBatches','BillingBatchID');<br>		//alert(selectedBillingBatchID);<br>		day = new Date();<br>		var windowID = 'billingBatch' + day.getTime();                                                                 <br>		var windowOptions = new Object();<br>		windowOptions.width = 520;<br>		windowOptions.height = 400;<br>		<a href="http://disq.us/url?url=http%3A%2F%2FwindowOptions.center%3AM3zvgKYLTXbMMzMkH7n0kyTfNAU&amp;cuid=3321886" rel="nofollow noopener" title="windowOptions.center">windowOptions.center</a> = true;<br>		windowOptions.modal = true;<br>		windowOptions.resizeable = true;<br>		windowOptions.initshow = true;<br>		windowOptions.draggable = true;<br>		windowOptions.closeable = true;<br>		windowOptions.headerstyle = 'font-family: verdana; background-color: #0066FF;';</p><p>		ColdFusion.Window.create(windowID,'Customer Billing Batch','editbillingbatch.cfm?runMode=' + recordAction + '&amp;billingBatchID=' + selectedBillingBatchID , windowOptions);<br>	}</p><p>Do you see the windowID variable in there?  Give this a shot.  It might not work but what do you have to lost at this point :)<br>The only weirdness I cannot solve for you is a datefield's calendar picker not openning up in a cfform within a cfwindow.  I don't know what I'm doing wrong but if anyone out there can help me - have at it.  Before anyone even suggests it - yes I am using cfajaximport with cfinput-datefield on the parent, or calling, page.<br>Good luck solving your issue - let us know what happens next!<br>-Andy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667527">50</a> by Ketan
		posted on 3/14/2008 at 11:50 PM
		</div>
		<div class="comment_text"><p>Andy, thanks.  I'll try this when I get home tonight and post my findings.  However, if you want to see this issue as I see it, this is the direct link: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.highestateliving.com%2Fpropertylisting.cfm%3FListingID%3DDF65D26452DAA33EF8937B45CF24F247%3AEabEYz9SArsRq17N1FkbJZSrgcY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.highestateliving.com/propertylisting.cfm?ListingID=DF65D26452DAA33EF8937B45CF24F247">http://www.highestateliving...</a></p><p>On the left side, the first link "I Want To Contact The Seller" -- click it the first time and nothing happens, then click it again and the &lt;cfwindow&gt; executes.  If I remove the &lt;cfwindow&gt; code I get no error messages and everything runs fine in both IE and FF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667532">51</a> by Andy Sandefer
		posted on 3/15/2008 at 1:25 AM
		</div>
		<div class="comment_text"><p>I went to your site and reproduced your issue.  I did in fact get an error back from the browser, even from IE7 at that!!!<br>:(<br>The error is...<br>Array length must be assigned a finite positive number.</p><p>I didn't dig much further than that but you should turn on the cfdebugger and take a good look at this.<br>Thanks,<br>Andy Sandefer</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667534">52</a> by Ketan
		posted on 3/15/2008 at 4:21 AM
		</div>
		<div class="comment_text"><p>Hey Andy, thanks for looking at this.  I checked in IE6 and FF2, and it points to prototype.js</p><p>I did what any sane developer would do, instead of opening up prototype.js, rolling up the sleeves and drinking a pot of coffee to debug...I did a Google search instead.</p><p>I came across this: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.prototypejs.org%2F2008%2F1%2F25%2Fprototype-1-6-0-2-bug-fixes-performance-improvements-and-security%3Ai_5yj9tWtCNezebC2R1kB4tibII&amp;cuid=3321886" rel="nofollow noopener" title="http://www.prototypejs.org/2008/1/25/prototype-1-6-0-2-bug-fixes-performance-improvements-and-security">http://www.prototypejs.org/...</a> turns out there was a bug in the old version.  I dl the latest version ran the page and viola, it works!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667533">53</a> by David Kramer
		posted on 5/9/2008 at 1:45 AM
		</div>
		<div class="comment_text"><p>Why doesn't cfwindow work when called from a cfform of format=flash? If I leave format=flash out, it works, but with it, error.</p><p>Do you have a solution using something else?</p><p>Some details...<br>I have a cfform format=flash. When the user clicks a button, or checkbox (or anything at this point) I need to have it spawn a popup that contains the results of a query.</p><p>So, I have two possible solutions going but I can't figure out how to get query results to display in the popup.</p><p>***You can copy and past this exact code into a cfm file and see exactly what I mean.***</p><p>&lt;!--- possible solution #1 ---&gt; <br>&lt;cfsavecontent variable="test"&gt; <br>var msg = ("I'd piss on a spark plug if it would help at this point."); <br>var alertSettings:Object = {title:'All Projects', message: msg, width:350, x: 60, y: 10, headerHeight: 27}; <br>errorpopup = mx.managers.PopUpManager.createPopUp(this, FormErrorException, true, alertSettings); <br>errorpopup.centerPopUp(this); <br>&lt;/cfsavecontent&gt;</p><p>&lt;!--- possible solution #2 ---&gt; <br>&lt;cfsavecontent variable="ShowStatsPanel"&gt; <br>mx.controls.Alert.cancelLabel = "Close"; <br>mx.controls.Alert.yesLabel = "Continue"; <br>var myClickHandler = function (evt){ <br>if (evt.detail == mx.controls.Alert.OK){ <br>//alert("File Stats Here","OK"); <br>     } <br>   } <br>var myAlert = <a href="http://disq.us/url?url=http%3A%2F%2Fmx.controls.Alert.show%3A7oz5xEaV9qecCD0_m13-s4bYxi8&amp;cuid=3321886" rel="nofollow noopener" title="mx.controls.Alert.show">mx.controls.Alert.show</a>("replace this text with project data", "Make Selection", mx.controls.Alert.OK | mx.controls.Alert.CANCEL, this, myClickHandler); <br>myAlert.width = 500; <br>myAlert.height = 200; <br>&lt;/cfsavecontent&gt;</p><p>&lt;cfform action="" format="flash" name="myForm" width="800" height="800" skin="haloorange"&gt; <br>&lt;cfinput type="button"  onclick="#test#" name="myButton2" value="Show using option 1"&gt; <br>&lt;cfinput type="button"  onclick="#showStatsPanel#" name="myButton1" value="Show using option 2"&gt;</p><p>&lt;/cfform&gt;</p><p>So, going with option number 1 above, I just want to have a query be the msg var (instead of the present humorus string). I'd like to at least concatentate the query results into a string if necessary and display it in the popup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667535">54</a> by Raymond Camden
		posted on 5/9/2008 at 1:56 AM
		</div>
		<div class="comment_text"><p>Why not show us the code you tried to use w/ cfwindow?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667536">55</a> by Michael White
		posted on 5/9/2008 at 5:06 AM
		</div>
		<div class="comment_text"><p>Ajax and Flash forms don't play well together. part of it is a z-index issue. whenever I tried mixing the two flash forms z-index was off the chart so it was always on top.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667539">56</a> by Terry Beard
		posted on 5/9/2008 at 4:40 PM
		</div>
		<div class="comment_text"><p>David Kramer</p><p>According to the documentation, a CFWINDOW cannot be called from within a form, and I would conclude that would apply to a cfform as well.</p><p>Terry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667541">57</a> by Raymond Camden
		posted on 5/9/2008 at 4:48 PM
		</div>
		<div class="comment_text"><p>terry, can you tell me where you found this? As far as I know, a cfwindow can be used from within forms. It depends on what you mean by 'from within a form'. Remember that the cfwindow tag can be anywhere. By default it is NOT visible. A form button should have no problem using the JS API to open that window.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667542">58</a> by Terry Beard
		posted on 5/9/2008 at 5:02 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>According to CFML reference, they have the following line:</p><p>You cannot use this tag in a form or as a child of a cflayout, or cflayoutarea tag.</p><p>I believe you are right though, a window can be called via JS from within a form because in doing so the window would exist outside the form.  I just think that it cannot be defined within form tags - the compiler would explode and end the universe as we know it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667545">59</a> by Raymond Camden
		posted on 5/9/2008 at 5:19 PM
		</div>
		<div class="comment_text"><p>Yep - I'd put the cfwindow tag all by itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667546">60</a> by Andy Sandefer
		posted on 5/9/2008 at 5:49 PM
		</div>
		<div class="comment_text"><p>Think of the page that the cfwindow will render as part of the page that invoked it.  For instance, let's say that you have a cfgrid on page1.cfm and you want the user to add and edit records in the table related to page1.cfm's cfgrid.  You could use cfwindow and a simple form in page2.cfm to update the record that you've selected in page1.cfm, but you've got to include everything that page2.cfm is going to need in page1.cfm using a cfajaximport tag like so...<br>&lt;cfajaximport tags="cfwindow, cfform, cfinput-datefield, cftooltip, cftextarea"&gt;.  Combine this with the cool fact that page2.cfm can call javascript functions on page1.cfm as if it were part of page1.cfm and you start to really see how by using cfajax you can make all of the elements in your application cooperate and work together without much effort.  <br>I know that they're pretty but you're going to have to ditch flash forms.  If you want to go that route then you need to head in the direction of FLEX.  I was a huge flash form junkie and last fall/winter I broke down, resigned myself to "unlearning" what I had learned and started embracing the cfajax stuff.  Result?  Way cooler apps and more flexibility when I have to go back and add things in later on down the road.  My bottom line is that this is easier than remoting - which is the only way that your flash forms apps can do cool things like cfajax without refreshing the page.  It is also easier to style and flat out more standards compliant.  This is the future and I seriously doubt that Adobe is going to spend a dime upgrading the FLEX 1.x toolbox that is cf flash forms.  I've got full examples of how to do cool stuff if you need help making the transition.  I also highly recommend Ben and Ray's first 2 books in the cfwack series for CF8 - I don't have the 3rd one yet but I'll bet it's pretty good too.<br>Good luck!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667548">61</a> by David Kramer
		posted on 5/9/2008 at 8:39 PM
		</div>
		<div class="comment_text"><p>Sure Raymond...it's the code right from <a href="http://disq.us/url?url=http%3A%2F%2Fadobe.com%3Azj9nzARVDYA61MFaxH3eSI3oVP4&amp;cuid=3321886" rel="nofollow noopener" title="adobe.com">adobe.com</a>, and they're using cfform, but not with format=flash...</p><p>&lt;html&gt;<br>&lt;head&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;<br>&lt;cfform name="myform"&gt;<br>    &lt;cfinput type="hidden" name="hiddentext" <br>        value="This is hidden text from the main page"&gt;</p><p>    Click the mouse on the control to show its text in window 1.<br>    &lt;cfinput name="text1"&gt;&lt;br /&gt;</p><p>    Click the button to show the input control text in window 2.<br>    &lt;cfinput name="text2"&gt;<br>    &lt;cfinput type="button" name="mybutton" value="Show Text" <br>        onclick="<a href="http://disq.us/url?url=javascript%3AColdFusion.Window.show%3ApnnnU_OzhPlDK2H88sRbHiY-_zs&amp;cuid=3321886" rel="nofollow noopener" title="javascript:ColdFusion.Window.show">javascript:ColdFusion.Windo...</a>('mywindow2')"&gt;&lt;br /&gt;</p><p>    Click the Checkbox to change and show its status in window 3<br>    &lt;cfinput name="check1" type="checkbox"&gt;&lt;br /&gt;</p><p>    Click the button to open a window containing the page<br>        specified by the input control.<br>    &lt;cfinput name="text3" value="windowsource.cfm"&gt;<br>    &lt;cfinput type="button" name="mybutton3" value="Open Window" <br>        onclick="<a href="http://disq.us/url?url=javascript%3AColdFusion.Window.show%3ApnnnU_OzhPlDK2H88sRbHiY-_zs&amp;cuid=3321886" rel="nofollow noopener" title="javascript:ColdFusion.Window.show">javascript:ColdFusion.Windo...</a>('mywindow4')"&gt;<br>&lt;/cfform&gt;</p><p>&lt;!--- This window shows initially and cannot be closed, dragged, or resized.<br>        The value of the text URL parameter, and therefore, the contents of the <br>        text displayed in the window changes each time the user clicks the<br>        mouse over the text1 control. ---&gt;<br>&lt;cfwindow x="0" y="100" width="200" height="150" <br>        name="mywindow" title="My First Window" <br>        closable="false" draggable="false" resizable="false" initshow="true"<br>        source="windowsource.cfm?text={myform:text1@mousedown}" /&gt;</p><p>&lt;!--- This window shows initially and cannot be dragged, or resized, but can<br>        be closed.<br>        The text URL parameter represents the text2 input control value. ---&gt;<br>&lt;cfwindow x="0" y="250" width="200" height="150" <br>        name="mywindow2" title="My Second Window" <br>        initshow="true" draggable="false" resizable="false" <br>        source="windowsource.cfm?text={myform:text2}" /&gt;</p><p>&lt;!--- This window shows initially and cannot be resized, but can be dragged<br>        or closed.<br>        The value of the text URL parameter, and therefore, Boolean value <br>        displayed in the window changes each time the user clicks the mouse<br>        in the check1 control to change the check box status.<br>        The bind expression binds to the check box checked attribute;<br>        it specifies a click event because Internet Explorer does not <br>        generate a change event when the user clicks the box.---&gt;<br>&lt;cfwindow x="0" y="400" width="200" height="150" <br>        name="mywindow3" title="My Third Window" <br>        initshow="true" resizable="false" <br>        source="windowsource.cfm?text=&lt;b&gt;Checkbox: &lt;/b&gt;{myform:check1.checked@click}" /&gt;</p><p>&lt;!--- This window does not display initially.<br>        The Open Window button control opens it.<br>        It can be closed, dragged, and resized.<br>        The value text URL parameter represents the value of a hidden text<br>        field. ---&gt;<br>&lt;cfwindow x="210" y="100" width="500" height="480" name="mywindow4"<br>        minHeight="400" minWidth="400" <br>        title="My Fourth Window" initshow="false"<br>        source="{myform:text3}?text={myform:hiddentext}" /&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667547">62</a> by Raymond Camden
		posted on 5/9/2008 at 8:54 PM
		</div>
		<div class="comment_text"><p>David - so what's the issue? The cfwindows they use are all outside of the form. Are you talking about the fact that the binds are used? I can see that maybe being an issue. I'm not sure if you can do binds to Flash Forms.</p><p>(As a note - please, please, please stop using Flash Forms. Use Flex 3 instead. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667554">63</a> by David Kramer
		posted on 5/9/2008 at 9:57 PM
		</div>
		<div class="comment_text"><p>Thanks ALL!  I took the Adobe Flex 2 courses here in Seattle and intend to use MXML and AS from here until the next killer app development technology comes out. However, I'm in the middle of a project where I was not the person who made the flash forms decision, but alas I'm the guy who has to make it happen. So I'm down to the last three minor features, and what I thought would be easiest feature has now uncovered the z-index issue and quite a few other caveats at the end of the project.</p><p>In short, I'm all down with Flex, and never again will I touch a Flash Form, but isn't there a getURL possibility for this "once and never again" issue?</p><p>I thought I could make a cfformitem type=html and have the link spawn a completely new window (awful I know), but even the doc for the syntax on that seems obtuse or down right wrong so I'm really frustrated because all prior forums and lists have provided nothing but hundreds of views to my questions a single digit rsponses that are uselessly academic (This one rocks btw - most replies, useful knowledge, etc. so far in my experience)</p><p>This would be an excellent day to wrap this convoluted project up and move on knowing better, so while I'd rather not, I would appreciate the "quick and dirty" workaround because at this point (the last day of the project) I can't abandon cfform format=flash.</p><p>(What's really sad is that I actually was able to get a query result set into one of the above solutions a month ago, but didn't like it for some reason, abandonded the code (deleted) and decided to get back to it later, and in the last 48 hours I've learned A LOT about dhtml and flash forms being hellish, but I'm not trying to deconstruct and re-invent that universe I'm just trying to spawn a window with content. Seems easy, but I'd rather drink broken glass at the moment.)</p><p>THANKS IN ADVANCE FOR ANY SOLUTIONS TO COME.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667552">64</a> by Raymond Camden
		posted on 5/9/2008 at 10:03 PM
		</div>
		<div class="comment_text"><p>David, as far as I know, Flash's (sorry, AS's) getURL supports calling any JS function. So you should be able to use getURL to call the CF window open stuff.</p><p>Again - afaik. I haven't tested this myself. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667553">65</a> by Raymond Camden
		posted on 5/9/2008 at 10:07 PM
		</div>
		<div class="comment_text"><p>I got a super simple example working:</p><p>&lt;cfform name="myform" format="flash" width="300" height="300"&gt;<br>&lt;cfinput name="button" type="button" value="Hit me like you mean it" onclick="getURL('<a href="http://disq.us/url?url=javascript%3AColdFusion.Window.show%3ApnnnU_OzhPlDK2H88sRbHiY-_zs&amp;cuid=3321886" rel="nofollow noopener" title="javascript:ColdFusion.Window.show">javascript:ColdFusion.Windo...</a>(\'mywindow\')')"&gt;<br>&lt;/cfform&gt;</p><p>&lt;cfwindow name="mywindow"&gt;<br>This is my rifle. This is my gun. This is for fighting. This is for fun.<br>&lt;/cfwindow&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667549">66</a> by David Kramer
		posted on 5/9/2008 at 10:47 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Two things:</p><p>1) I cannot believe you used that string in the cfwindow, because my five year old boy saw Stewie sing that on Family Guy and was grabbing his jewels and singing it all weekend. What are the odds? Insanely awesome.</p><p>2) Your example helps because I was havn't some trouble with ColdFusion.Window JS and format=flash, so that's cool to see in a nice succinct example, but sadly z-index is now once again the gotcha.</p><p>So...I'm going to lower expectations (yikes) and use a method with less "colness factor" and get the feature <br>the client wants in and working and move on.</p><p>"Live and learn...Flex 3"</p><p>THANKS TO EVERYONE GUYS!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667551">67</a> by Andy Sandefer
		posted on 5/9/2008 at 10:56 PM
		</div>
		<div class="comment_text"><p>David,<br>Try one for thing before you abandon this - use the wmode attribute on the flash form.  Might not make any difference but just a thought and very quick to try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667550">68</a> by David Kramer
		posted on 5/9/2008 at 11:08 PM
		</div>
		<div class="comment_text"><p>Wasn't even aware of the wmode attribute; looks like a possibility from the adobe doc here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fkb.adobe.com%2Fselfservice%2FviewContent.do%3FexternalId%3Dtn_15523%3AhBIQGvW3si90-kGqb0QBL256mcc&amp;cuid=3321886" rel="nofollow noopener" title="http://kb.adobe.com/selfservice/viewContent.do?externalId=tn_15523">http://kb.adobe.com/selfser...</a></p><p>[fingers crossed]</p><p>Thanks Andy for not giving up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667555">69</a> by David Kramer
		posted on 5/9/2008 at 11:25 PM
		</div>
		<div class="comment_text"><p>Andy,</p><p>The attribute wmode=transparent works for our needs.</p><p>You made my day Andy.</p><p>Thanks for pointing out that I should RTFM sometimes and not intelligently "unit-tinker."</p><p>Have a great weekend!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667556">70</a> by Andy Sandefer
		posted on 5/9/2008 at 11:37 PM
		</div>
		<div class="comment_text"><p>That's good news - glad to be of help.  Ray was about 10 seconds from removing me from this site for other idiotic comments that I made on a different post!  You really saved me.  LOL</p><p>You have a good weekend too and remember that when the label turns blue it's as cold as the rockies.</p><p>Take care!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667558">71</a> by David Kramer
		posted on 5/9/2008 at 11:42 PM
		</div>
		<div class="comment_text"><p>What's somewhat interesting is that wmode=transparent didn't respect z-index of cfwindow in Ray's example just a bit above in this thread.</p><p>Of course, I'm unit tinkering again, there's probably a way to layer cfwindow, but I'm too happy to read more tech doc at the moment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667559">72</a> by Tammy Crawford
		posted on 5/20/2008 at 10:35 PM
		</div>
		<div class="comment_text"><p>Is there any way to load media content into a cfwindow?  When I set my source as <a href="http://disq.us/url?url=mms%3A%2F%2Fwm.lpb.org%2Fed%2Fged%2FGEDC0101.wmv%3A_v1gjbI_h_GPjnVfgcJt5YZtZQg&amp;cuid=3321886" rel="nofollow noopener" title="mms://wm.lpb.org/ed/ged/GEDC0101.wmv">mms://wm.lpb.org/ed/ged/GED...</a> or <a href="http://disq.us/url?url=http%3A%2F%2Fwm.lpb.org%2Fed%2Fged%2FGEDC0101.wmv%3ACaGqnVksT0vbacdAgF60WUE-fUs&amp;cuid=3321886" rel="nofollow noopener" title="http://wm.lpb.org/ed/ged/GEDC0101.wmv">http://wm.lpb.org/ed/ged/GE...</a>, I get the error "unable to open connection to URL"</p><p>&lt;cfwindow initShow="true" title="Welcome to GED FastTrack" center="true" modal="true" resizable="true" draggable="true" name="GED FastTrack" source="<a href="http://disq.us/url?url=mms%3A%2F%2Fwm.lpb.org%2Fed%2Fged%2FGEDC0101.wmv%3A_v1gjbI_h_GPjnVfgcJt5YZtZQg&amp;cuid=3321886" rel="nofollow noopener" title="mms://wm.lpb.org/ed/ged/GEDC0101.wmv">mms://wm.lpb.org/ed/ged/GED...</a>" height="240" width="360"&gt;<br>&lt;/cfwindow&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667560">73</a> by Raymond Camden
		posted on 5/20/2008 at 10:41 PM
		</div>
		<div class="comment_text"><p>You can't use an external URL in an ajax request. The browser blocks it. Also, I am pretty sure it has to be an HTML response. What I would try instead is point to an HTML file on your server that outputs the HTML to embed the WMV.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667561">74</a> by Howard Ross
		posted on 6/4/2008 at 12:46 AM
		</div>
		<div class="comment_text"><p>I'm trying to put a cfchart in a cfwindow. It works in FF but misbehaves in IE7. I took a queue from this example: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fsharp%2Fwindow%2Fwindow.cfm%3ABMZtRH4P5NyRpirPoGYKdWU4110&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/sharp/window/window.cfm">http://www.coldfusionjedi.c...</a> and included the CF_RunActiveConent.js in the main file.  This allows the page to load without error but the window body content replaces the whole page. Including AC_OETags.js seems to only slow down the animation in FF and not fix anything in IE.  Whats the deal with the history.js included in the example? Also, is it neccesary to create the window onLoad using the registerOnLoad?</p><p>here is code:</p><p>index.cfm:</p><p>&lt;script type="text/javascript" charset='utf-8' src='/CFIDE/scripts/CF_RunActiveContent.js'&gt;&lt;/script&gt;</p><p>&lt;cfajaximport tags="cfwindow"&gt;</p><p>&lt;a href="javascript:ColdFusion.Window.create('theWindow', 'hasChart','chart.cfm')" &gt;Click here&lt;/a&gt;</p><p>chart.cfm:</p><p>&lt;cfchart&gt;<br>&lt;cfchartseries type="pie"&gt;<br>&lt;cfchartdata value="25" item="things"&gt;<br>&lt;cfchartdata value="25" item="stuff"&gt;<br>&lt;cfchartdata value="50" item="shenanigans"&gt;<br>&lt;/cfchartseries&gt;<br>&lt;/cfchart&gt;</p><p>any suggestions would be much appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667562">75</a> by Kevin
		posted on 7/20/2008 at 9:59 PM
		</div>
		<div class="comment_text"><p>I have a cfdiv nested in a cfpod. In the cfdiv, there is a form. I need the parent cfpod to reload when I submit the form in the nested cfdiv. Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667563">76</a> by Raymond Camden
		posted on 7/20/2008 at 11:06 PM
		</div>
		<div class="comment_text"><p>In general forms should stay inside, but if not, just consider using ColdFusion.Ajax.submitForm()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667565">77</a> by Kevin
		posted on 7/20/2008 at 11:47 PM
		</div>
		<div class="comment_text"><p>Let me explain my situation. I have a "control panel" that allows a cutomer to edit or delete a product in their store. The products are listed in the cfpod. When "edit" is clicked for one of the products, it submits to itself and displays the nested cfdiv above the list of products with a form containing the product information to be edited. When "save" is clicked in the cfdiv form, it makes the edit, and displays the cfdiv form with the modified data. If ColdFusion.Ajax.submitForm() can do that, please tell me how. I tried ColdFusion.Ajax.submitForm('productsform') in the submit button using onclick, but that didn't work.</p><p>The problem I'm having is the data in the product list in the parent cfpod below is not updated when the form in the cfdiv is submitted, until I refresh the whole page. And, if, before I refresh the page, edit is clicked on any the product in the list, I get the cfdiv form with blank fields. If I could somehow "refresh" the parent cfpod when the cfdiv form is submitted, I believe that would solve the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667564">78</a> by Kevin
		posted on 7/20/2008 at 11:50 PM
		</div>
		<div class="comment_text"><p>Sheesh...the last 2 sentences in the first paragraph should have been at the end of the second paragraph. Sure wish this thing would let a person correct their mistakes.</p><p>Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667567">79</a> by Raymond Camden
		posted on 7/21/2008 at 12:50 AM
		</div>
		<div class="comment_text"><p>Kevin, I'd read the docs on the function more. It explains how you would use it to send form data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667568">80</a> by Steve
		posted on 7/23/2008 at 11:23 PM
		</div>
		<div class="comment_text"><p>You can now destroy a window via ColdFusion.Window.destroy(windowName[, destroyElement]) where windowName = window name, and destroyElement is boolean value specifying whether the HTML element associated witht he window should also be destroyed.</p><p>Hurray for 8.01</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667569">81</a> by Kris Boldt
		posted on 8/19/2008 at 12:57 AM
		</div>
		<div class="comment_text"><p>I was just wondering if there was a way to have the ajax window manitain it's location even when the parent browser window is resized? For example, If the ajax window is set to center and then the main browser is dragged to a smaller or larger size the ajax window stays in the initial center location before the main browser window is resized. (So in other words, the ajax window does not maintain its center if the browser window is moved) I have seen this work on a website that auto centers as you move the main browser window but wondered if there is a way to set that function using the cfwindow. Any help would be appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667573">82</a> by Raymond Camden
		posted on 8/19/2008 at 1:01 AM
		</div>
		<div class="comment_text"><p>In theory you listen for the window's size changing event (I'm sure there is one - check the docs for the DOM) and then you would change the x/y of the cfwindow object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667572">83</a> by Kurt
		posted on 9/19/2008 at 1:59 AM
		</div>
		<div class="comment_text"><p>I created a cfwindow with a WMV embedded video.  If the user closes the window, the video keeps playing (you can still her the sound).  Is there a way to kill the video when someone closes the window?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667576">84</a> by Raymond Camden
		posted on 9/19/2008 at 4:58 AM
		</div>
		<div class="comment_text"><p>Try using ColdFusion.Window.destroy. It was added in 801.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667575">85</a> by Kurt
		posted on 9/19/2008 at 7:16 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond. I was able to add a destroy button to the window.  That works good and the video stops when the button is clicked. I'm not sure how to make the x button destroy the window as well. Is there a way to do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667577">86</a> by Andy Sandefer
		posted on 9/19/2008 at 8:20 PM
		</div>
		<div class="comment_text"><p>@Kurt,<br>Try ColdFusion.Window.onHide</p><p>Read the docs brother, read the docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667582">87</a> by Anna
		posted on 10/11/2008 at 2:03 AM
		</div>
		<div class="comment_text"><p>Hoping someone could help me out.  I have a parent page which contains &lt;cflayout&gt; tabs.  The parent page needs to be refreshed periodically to perform a certain functionality.  I am keeping track of which tab is selected before a parent page submit by adding url param. Everything works fine, but when page reloads I get a js error "can't move focus to a control because it's invisible, not enabled or a type that doesn't accept the focus".  All I am doing is adding "selected=true" to a cflayoutarea tag of the active tab.  Any ideas?! Any help is greatly appreciated</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667579">88</a> by Andy Sandefer
		posted on 10/11/2008 at 2:35 AM
		</div>
		<div class="comment_text"><p>@Anna<br>Read<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F10%2F3%2FSimple-autoreload-ColdFusion-8-Ajax-Demo%3AFdv6CRZcb3dk4SnAN81sh73eaj4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/10/3/Simple-autoreload-ColdFusion-8-Ajax-Demo">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667580">89</a> by Anna
		posted on 10/11/2008 at 4:48 AM
		</div>
		<div class="comment_text"><p>Andy, thank u for a quick reply.  I might of mislead you by my description of the problem.  The tabs need to be reloaded when a value in a select box on a parent page changes.  And the js error I am experiencing comes up if I am setting a 'selected=true' to a tab other the the default first tab.  Looking at the source of the page, i've noticed that it sets selected tab value twice, first time on initializeTabLayout, where it sets it to the default first tab, and the second time it sets it to the actual tab I am making active.  Think this is where the problem is.  Any way to overwrite the initializeTabLayout method, so it wouldn't set it to the first tab by default?  Thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667584">90</a> by Raymond Camden
		posted on 10/11/2008 at 6:02 PM
		</div>
		<div class="comment_text"><p>You've got me there. Maybe you can share the code? But don't post it here. Post it elsewhere and share the URL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667583">91</a> by Srinivas
		posted on 11/18/2008 at 7:27 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I saw your example for cfwindow. When the source, its surprised me that, even though the code using only the <br>cfwindow, its loading all the js files. I dont whats the use of this. This will decrease the performance and impact on SEO?</p><p>ex:<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/messages/cfmessage.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/package/cfajax.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/yui/animation/animation-min.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/adapter/yui/ext-yui-adapter.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/ext-core.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/package/resizable.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/package/dragdrop/dragdrop.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/package/util.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/build/state/State-min.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/package/widget-core.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/ext/package/dialog/dialogs.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="/CFIDE/scripts/ajax/package/cfwindow.js"&gt;&lt;/script&gt;<br>&lt;link rel="stylesheet" type="text/css" href="/CFIDE/scripts/ajax/resources/ext/css/ext-all.css" /&gt;<br>&lt;link rel="stylesheet" type="text/css" href="/CFIDE/scripts/ajax/resources/cf/cf.css" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667581">92</a> by Raymond Camden
		posted on 11/18/2008 at 8:32 PM
		</div>
		<div class="comment_text"><p>Unfortunately, there isn't much you can do about that. When you use CF's built in Ajax features, you lose some of the fine grain control you would have if you did it by hand. Convenience in this case gives you a small penalty in download size.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667586">93</a> by Miked
		posted on 1/12/2009 at 9:10 PM
		</div>
		<div class="comment_text"><p>I am having a problem trying to set focus on a field that is in a ,cfform in a cflayoutarea. everything works great with the cflayoutarea, except I can't set the focus on a field.</p><p>I have tried using a javascript code with the onload feature of the body tag. does not work.</p><p>I have tried the onload feature of the cfform tag and it does not work.</p><p>any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667587">94</a> by Raymond Camden
		posted on 1/12/2009 at 9:14 PM
		</div>
		<div class="comment_text"><p>Try ajaxOnLoad. It's a CFML function that handles the JS for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667585">95</a> by Miked
		posted on 1/14/2009 at 1:18 AM
		</div>
		<div class="comment_text"><p>That worked.  Thanks Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667588">96</a> by Russ Chinoy
		posted on 1/29/2009 at 3:39 AM
		</div>
		<div class="comment_text"><p>I'm seeing strange behavior in IE7 (it works fine in FF3) when an autosuggest is used inside a cfwindow. If the cfwindow content is long, and therefore the cfwindow has scrollbars, when you scroll the content the autosuggest floats along down the page rather than scrolling out of view.</p><p>Here's very simple code to reproduce it:</p><p>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=utf-8" /&gt;<br>&lt;title&gt;Autosuggest in CFWindow Demo&lt;/title&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;<br>&lt;cfwindow name="FormWindow" height="200" width="500" initshow="true"&gt;<br>&lt;cfform&gt;<br>&lt;cfinput name="FirstName" autosuggest="Tim,John,Karen,Connor,Trish" id="FirstName" size="30" maxlength="30" autosuggestminlength="1" maxresultsdisplayed="20" value="" /&gt;&lt;br /&gt;&lt;br /&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;div&gt;Junk to make it scroll&lt;/div&gt;<br>&lt;/cfform&gt;<br>&lt;/cfwindow&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p><p>Stranger still is that if you remove the DOCTYPE declaration and xmlns from the &lt;html&gt; tag (putting IE7 into quirks mode I suppose), it works correctly. I just wish I knew why. Anyone have any ideas?</p><p>Thanks,<br>Russ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667589">97</a> by Kenneth Barrett
		posted on 4/11/2009 at 12:34 AM
		</div>
		<div class="comment_text"><p>Ray I have a question for you about using CSS within a cfwindow.  I have an application that spawns a cfwindow which contains a form.  User submits form, receives confirmation message, user closes cfwindow.  Simple stuff, except it wouldn't work in IE7...surprise surprise.  It works in Safari, FF, etc.  It took some doing, but by removing elements one by one I figured out it was the CSS class I was attaching to the confirmation message.  This class is specified in the stylesheet we are using for the rest of the application.  As soon as I removed the class, the cfwindow works as expected in IE7.  My guess is that I have to use the CF stylesheet that controls the cfwindow rather than my own, but I haven't been able to find any confirmation on this.  Is that the case?</p><p>As a bonus I'd ideally like to have the cfwindow close once the user submits the form inside.  While I see the ColdFusion.Window.create() and show() and hide(), I do not see a destroy() or a way to even trigger hide() on form.submit.  Am I missing something?  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667590">98</a> by Raymond Camden
		posted on 4/11/2009 at 12:36 AM
		</div>
		<div class="comment_text"><p>Kenneth - destroy was added to CF801. Make sure you are running 801 with the latest hot fixes too. Some Ajax-related items were fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667592">99</a> by Andy Sandefer
		posted on 4/11/2009 at 12:42 AM
		</div>
		<div class="comment_text"><p>@Kenneth</p><p>Your parent page (the one that invokes the cfwindow) needs to have a function that hides the window.  It should also have a function that destroys the window - like so...</p><p>	function closeTimeEdit() {<br>		ColdFusion.Window.onHide(windowID, killTimeEdit);<br>		ColdFusion.Window.hide(windowID);<br>	}</p><p>	function killTimeEdit() {<br>		ColdFusion.Window.destroy(windowID, true);<br>		submitSelectorForm();<br>	}</p><p>Now here's what you do.  In the page that lives inside the cfwindow - put a button who's onClick action calls your close function - in my case above it would be called closeTimeEdit().</p><p>If you're doing an ajax submit form post then specify a callback handler for the submit call and within the callback function call your closing function (which in turn will call your window destruction function).</p><p>So to recap...<br>Window closing function and Window killing functions live on the parent page that will invoke the cfwindow.  You call them in your callback or from a button to close and kill the cfwindow after you've successfully saved the record (like as in the callback handler for a ColdFusion.Ajax.submitForm) or from a button (as in this is my Cancel button).</p><p>Good luck,<br>Andy Sandefer</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667591">100</a> by Alain
		posted on 4/14/2009 at 1:50 AM
		</div>
		<div class="comment_text"><p>Hello, and thanks for everything.</p><p>... but I am stuck: I need to call a cfwindow from a Flash cfform, using a cfinput button, like:</p><p>&lt;cfinput type="button" name="newstudentbtn" value="New Student" onClick="<a href="http://disq.us/url?url=javascript%3AColdFusion.Window.show%3ApnnnU_OzhPlDK2H88sRbHiY-_zs&amp;cuid=3321886" rel="nofollow noopener" title="javascript:ColdFusion.Window.show">javascript:ColdFusion.Windo...</a>('mywindow')"&gt;</p><p>But that doesn't work! The flash form does not load.</p><p>The only think that does work is:</p><p>&lt;cfformitem type="html"&gt;<br> &lt;A HREF="<a href="http://disq.us/url?url=javascript%3AColdFusion.Window.show%3ApnnnU_OzhPlDK2H88sRbHiY-_zs&amp;cuid=3321886" rel="nofollow noopener" title="javascript:ColdFusion.Window.show">javascript:ColdFusion.Windo...</a>('mywindow')"&gt; New Student &lt;/A&gt;  <br> &lt;/cfformitem&gt;</p><p>but that doesn't look great cause I want a flash button for the user to click on, not a text hyperlink...</p><p>Suggestions appreciated and warmly welcomed!</p><p>Alain</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667593">101</a> by Andy Sandefer
		posted on 4/14/2009 at 2:46 AM
		</div>
		<div class="comment_text"><p>@Alain<br>Flash forms and CFAjax do not mix.  If you need to stick with flash then start learning Flex, otherwise change your cfforms into html format and redo the markup.</p><p>All of that being said - why not use &lt;cfinput type="button" onClick="myJavaScriptFunctionThatOpensWindow"&gt;?</p><p>Just curious, but seriously though - mixing the cf flash forms and ajax is a dead end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667594">102</a> by Alain
		posted on 4/15/2009 at 11:28 AM
		</div>
		<div class="comment_text"><p>Thanks. I appreciate the advice.</p><p>So I have now put a tabnavigator (with invisible tabs) instead, and it moves to a new tab - instead of opening a cfwindow - when required.</p><p>Clearly much more consistent if I stick to Flashforms, which I would like to do for the time being.</p><p>Thanks again. With greetings from Switzerland!</p><p>Alain</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667595">103</a> by andrew
		posted on 7/15/2009 at 1:35 AM
		</div>
		<div class="comment_text"><p>I have a situation and need some help. I'm Trying to use a cfwindow that is linked to an &lt;a&gt; tag. the anchor shows the window. In this window is a form that asks for 2 e-mails and a message to refer a friend to the current page. However I can't for the life of me get this to work. I use a normal HTML form in the source for the window. Currently I'm trying to use javascript for validation. just a button with an onclic=validate(this.form) attribute. when the validation fails I don't want the window to close or submit the form,  but it does every time! can anyone help???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667597">104</a> by Raymond Camden
		posted on 7/15/2009 at 1:36 AM
		</div>
		<div class="comment_text"><p>If the button is a submit button, don't forget you have to return false to block the form submission if a form validation error exists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667598">105</a> by Sammy
		posted on 8/5/2009 at 8:45 PM
		</div>
		<div class="comment_text"><p>HI Experts!!<br>I am trying to play a video inside cfwindow and it worked fine. But when i tried to close the window the audio is still playing even though the actual cfwindow is hidden.<br>I tried surfing with no luck. Any suggestion from you guys would be greatly appreciated!</p><p>Sammy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667599">106</a> by Andy Sandefer
		posted on 8/5/2009 at 9:20 PM
		</div>
		<div class="comment_text"><p>@Sammy<br>You've got to use the destroy method in an onHide js function when you close the window.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667601">107</a> by Sammy
		posted on 8/5/2009 at 10:06 PM
		</div>
		<div class="comment_text"><p>I tried that as well! But didnt work.....<br>Here is the sample.<br>&lt;script language="javascript"&gt; <br>      var onhide= function(name) { <br>            alert("window hidden = " + name); <br>            coldfusion.window.destroy("mywindow", [true])</p><p>        }</p><p>       var test=function() { <br>            ColdFusion.Window.onHide("mywindow", onhide); <br>            ColdFusion.Window.hide("mywindow");</p><p>        } <br>    &lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667600">108</a> by Andy Sandefer
		posted on 8/5/2009 at 10:09 PM
		</div>
		<div class="comment_text"><p>Well you do know that js is case sensitive right?</p><p>so this...</p><p>coldfusion.window.destroy</p><p>is not the same as this...</p><p>ColdFusion.Window.destroy</p><p>check your code and read the docs</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667605">109</a> by Mik Muller
		posted on 6/2/2010 at 12:31 AM
		</div>
		<div class="comment_text"><p>I'm trying to open a cfwindow in the main body of a page from within an iframe. I believe I have the pathing wrong, in that window.parent isn't a real DOM path, or that the Coldfusion.Window... pathing doesn't handle frames.</p><p>Any help?</p><p>Main page:</p><p>&lt;cfwindow x="210" y="100" width="200" height="200" name="mywindow4" draggable="False" title="CF Window test" initshow="false" source="test2.cfm" closable="False" modal="True" /&gt;</p><p>Within iFrame:</p><p>&lt;cfform name="myform"&gt;<br>&lt;cfinput type="button" name="mybutton3" value="Open CFwindow" onclick="<a href="http://disq.us/url?url=javascript%3AColdFusion.Window.show%3ApnnnU_OzhPlDK2H88sRbHiY-_zs&amp;cuid=3321886" rel="nofollow noopener" title="javascript:ColdFusion.Window.show">javascript:ColdFusion.Windo...</a>('mywindow4')"&gt;<br>&lt;/cfform&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667602">110</a> by Raymond Camden
		posted on 6/3/2010 at 5:25 PM
		</div>
		<div class="comment_text"><p>Not sure... why not write a function in the parent doc to open the win, and just call that func from the button in the iframe?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667604">111</a> by Morph
		posted on 8/10/2010 at 5:08 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>my CFWindow doesn´t work :-(.</p><p>I want to get a button in the CFWindow which close my CFWindow, because the variable doesn´t refresh. Maybe the function "ColdFusion.Window.destroy" can help me!??</p><p>Here my code:</p><p>&lt;script language="javascript"&gt; <br>function closeTimeEdit() {<br>      ColdFusion.Window.onHide("Window1", killTimeEdit);<br>      ColdFusion.Window.hide(windowID);<br>   }</p><p>   function killTimeEdit() {<br>      ColdFusion.Window.destroy("Window1", true);<br>      submitSelectorForm();<br>   }</p><p> function test(){<br>   ColdFusion.Window.hide("Window1");<br>}<br>&lt;/script&gt;</p><p>And the "button":</p><p>&lt;a href="#" onclick="closeTimeEdit()"&gt;close&lt;/a&gt;</p><p>But unfortunally it doesn´t work.</p><p>Can you help me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667603">112</a> by Raymond Camden
		posted on 8/10/2010 at 11:51 PM
		</div>
		<div class="comment_text"><p>What doesn't work? WHat error do you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667607">113</a> by Mik Muller
		posted on 8/18/2010 at 11:51 PM
		</div>
		<div class="comment_text"><p>Hey all,</p><p>I'm creating a cfwindow in the main body of a page, and then calling it from various other parts, hoping to stuff a new url in it by first doing a cf navigate, then a cf show, ala:</p><p>function showShare(stuff) {<br>ColdFusion.navigate('/modalDesigns.cfm?' + stuff,'modalDesigns');<br><a href="http://disq.us/url?url=http%3A%2F%2FColdFusion.Window.show%3Aut5RVMiY3vZkqHf_0Bd7-NzWCNM&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusion.Window.show">ColdFusion.Window.show</a>('modalDesigns');<br>}</p><p>This is how I call it, (from within an iFrame, btw):</p><p>&lt;cfoutput&gt;<br>&lt;script&gt;<br>parent.showShare('mode=share&amp;sdid=#form.sdid#');<br>&lt;/script&gt;<br>&lt;/cfoutput&gt;</p><p>The problem is the URL vars don't show up. The cfwindow appears, but it's as if the cf navigate didn't run. I have a debug display if utl.sdid eq 0 and cgi.query_string = "_cf_containerId=modalDesigns_body&amp;_cf_nodebug=true&amp;_cf_nocache=true&amp;_cf_clientid=B616A227C71442DA429FA275E6D184DD&amp;_cf_rc=9"</p><p>Is it not possible to re-stuff a cfwindow after it's been created, like a cfdiv, with cf navigate?</p><p>Or is something else up here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667608">114</a> by Mik Muller
		posted on 8/18/2010 at 11:54 PM
		</div>
		<div class="comment_text"><p>D'oh! As usual, I think of the solution after I post a question.</p><p>I just switched the order of the commands in the function and it worked fine. I guess CF doesn't like re-stuffing a cfwindow that is currently hidden.</p><p>function showShare(stuff) {<br><a href="http://disq.us/url?url=http%3A%2F%2FColdFusion.Window.show%3Aut5RVMiY3vZkqHf_0Bd7-NzWCNM&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusion.Window.show">ColdFusion.Window.show</a>('modalDesigns');<br>ColdFusion.navigate('/modalDesigns.cfm?' + stuff,'modalDesigns');<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667610">115</a> by Mik Muller
		posted on 8/19/2010 at 7:07 PM
		</div>
		<div class="comment_text"><p>Ok, but now we have another problem. These modal windows sometimes appear in front of a Flash movie. For some reason the Flash movie is appearing in FRONT of the gray mask and the darker gray div that floats behind the body of the modal content div (creating a border effect), yet behind the body content div, creating a sandwich-like effect.</p><p>Here's a screen shot of the issue. My notes are in red, with a red circle around a sample modal window.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdev.silverscreendesign.com%2Fmedia%2Fflash_and_modal_weirdness.jpg%3AtnaN9gDdKWDnNShaggirSk5Nx5U&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.silverscreendesign.com/media/flash_and_modal_weirdness.jpg">http://dev.silverscreendesi...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667606">116</a> by rchinoy
		posted on 8/19/2010 at 7:28 PM
		</div>
		<div class="comment_text"><p>Have you tried setting the wmode=transparent or wmode=opaque parameters on your Flash movie?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667609">117</a> by Mik Muller
		posted on 8/19/2010 at 7:57 PM
		</div>
		<div class="comment_text"><p>Yes. wmode only helped the drop-down nav that covers the Flash movie. The nav had a delayed appearance over the flash movie until we set wmode. Didn't help the modals though.</p><p>&lt;object style="z-index:-999;" wmode="opaque"  ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667611">118</a> by William Broadhead
		posted on 12/22/2011 at 12:07 AM
		</div>
		<div class="comment_text"><p>I am looking for more info about Quirks mode and CF (CF9 in this case, but imagine it is an CF8 issue too). This page mentions it so I am hoping someone knows more? I am having a  hard time finding much info about this or how to work around it.</p><p>==============<br>Scenario:<br>==============<br>We have corporate users using IE7 (still) mostly. Some have IE8 or FF and a few with Chrome/Safari etc. We don't care about IE6 at this point but it might be a while before we can kill IE7 woes.</p><p>I am putting the correct DOCTYPE's in and on basic pages, IE7 recognizes Standards mode correctly and respects the styles (inline or in css files) and other layout rules.</p><p>==============<br>Problem: <br>==============<br>Whenever we have a page that uses CFAJAX or other CFWINDOW like stuff where CF9 (and CF8 I imagine does this too) injects the libraries/js into the page, these script blocks precede the the !DOCTYPE declaration throwing the page into quirks mode. Layouts then get rendered with what appears to be the wrong box model and styles seem to fall apart on, *in particular*, the CFAJAX/CFFORM based input elements (like autosuggest fields or cfajax bound fields)....</p><p>Any ideas?</p><p>Thanks in advance for any help or ideas you might have.<br>-w</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667613">119</a> by William Broadhead
		posted on 12/22/2011 at 12:27 AM
		</div>
		<div class="comment_text"><p>I may have found my own solution. Works so far anyway. Adding the meta tags for the proper version forces IE7 to load in standards regardless of the loose script blocks CF8/9 injects on CFAJAX endowed pages: <br>&lt;meta http-equiv='X-UA-Compatible' content='IE=7' /&gt;<br>&lt;meta http-equiv='X-UA-Compatible' content='IE=8' /&gt;<br>&lt;meta http-equiv='X-UA-Compatible' content='IE=9' /&gt;<br>(You might dynamically use the proper one for the respective browser, of course). <br>Thanks!<br>-w</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667612">120</a> by Nicolas Valdez
		posted on 8/30/2012 at 10:47 PM
		</div>
		<div class="comment_text"><p>Thanked William. I was experiencing the same type of problem with my autosuggest fields.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667614">121</a> by KS
		posted on 12/14/2012 at 12:35 AM
		</div>
		<div class="comment_text"><p>Hi Ray -<br>I tend to code about 5 years behind, so your 2007 blog entries are of particular interest to me :)</p><p>Stumbled upon a solution for setting the body/header style when calling a cfwindow via javascript - put the styles in an object.  <br> var wConfig = new Object();<br>     wConfig.bodystyle = "border:1px solid grey;";<br>     wConfig.headerstyle="display:none; ";<br>     <a href="http://disq.us/url?url=http%3A%2F%2FwConfig.center%3AFhDlc2P97A41QucuEhYA9MKghzo&amp;cuid=3321886" rel="nofollow noopener" title="wConfig.center">wConfig.center</a> = true; <br>     wConfig.height = 600;<br>     wConfig.width = 450;<br>         		ColdFusion.Window.create('winProd','','../pub/win_product.cfm?id=' + varID, wConfig);</p><p>Can't take credit for this -have to thank azadisaryev who posted it on experts-exchange.</p></div>
	</div>
</div>
		