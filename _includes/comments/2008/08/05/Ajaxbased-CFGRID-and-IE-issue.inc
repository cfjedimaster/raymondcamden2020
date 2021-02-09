
<div class="comment" id="c_1713684691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684691">1</a> by Dave Byers
		posted on 8/5/2008 at 11:20 PM
		</div>
		<div class="comment_text"><p>This'll be a bad first "me too" comment, btu I've been beating my head against my monitor for a week now trying to figure out where the CSS issue is here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684693">2</a> by Andy Sandefer
		posted on 8/5/2008 at 11:21 PM
		</div>
		<div class="comment_text"><p>Well I'm not sure if this is really a solution.  It is more of a work around.  Although I love the new ext grid I've had nothing but inconsistencies and problems dealing with it in terms of edit capabilities (and some event driven style issues with IE - on column resize or auto-resize with double click on the column header).  At any rate I just create a modal cfwindow based on the selected record in the grid and the user clicks a button to save which in turn fires up a proxy to handle the update (or insert) from the cfwindow's form to the database.  I'm sorry, I know it is not the answer you're looking for but I truly believe it is the best approach to add/edit functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684692">3</a> by Dave Phipps
		posted on 8/6/2008 at 1:07 AM
		</div>
		<div class="comment_text"><p>Although the cfgrid is very convenient to setup I found in a recent project that the power available was hampered by the slightly unreliable nature of it (and the size of all those js files). I now use a jquery plugin called jqGrid (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.trirand.com%2Fblog%2F%29%3AJy9FzLEelvfa25otdn9185Dmims&amp;cuid=3321886" rel="nofollow noopener" title="http://www.trirand.com/blog/)">http://www.trirand.com/blog/)</a> it is not as powerful as cfgrid but I have managed to do pretty much all of the things I needed to do, such as updating/editing/sorting rows.</p><p>If you need any pointers/example code just give me a yell.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684694">4</a> by Jared Shields
		posted on 8/6/2008 at 1:39 AM
		</div>
		<div class="comment_text"><p>The problem is 100% in the CSS of the grid.  I submitted this problem to Adobe, but of course I'll never hear back on that...</p><p>SOLUTION:</p><p>Open the EXT-ALL.CSS file (traditionally located at /CFIDE/SCRIPTS/AJAX/RESOURCES\EXT\CSS/)</p><p>Search the file for "//".  You should find roughly 6 lines that look similar to this "//color: white;".  Clearly somebody mixed up their comment syntax and incorrectly commented those lines out; thereby, NOT commenting them out.</p><p>Go ahead and change the prefix on the line from "//" to "/*" and end the line with "*/".</p><p>Refresh and your problem should be solved. :-)</p><p>Note, this problem was NOT resolved by 8.0.1 so everyone will need to update this file.</p><p>Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684699">5</a> by Christian Gurney
		posted on 8/6/2008 at 2:42 AM
		</div>
		<div class="comment_text"><p>I'm going to look at Jared's solution closely because I thought I was the only guy on the planet who couldn't solve this problem!</p><p>Great sleuthing, BTW.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684698">6</a> by Mat Evans
		posted on 8/6/2008 at 12:38 PM
		</div>
		<div class="comment_text"><p>nice one!<br>i've been looking at the problem for about a year!!!</p><p>there's a couple of other little caveats with the grid too, mostly all solvable with css.</p><p>Mat</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684696">7</a> by Paul
		posted on 8/6/2008 at 6:44 PM
		</div>
		<div class="comment_text"><p>Excellent! My thanks to Jared Shields and to Ray Camden for going out of his way to help find a solution to this problem.<br>BTW, I believe you need to surround the offending lines with /* */ as follows:</p><p>.x-grid-row-selected td, .x-grid-locked .x-grid-row-selected td{<br>	/*color: white;*/<br>}</p><p>.x-grid-row-selected span, .x-grid-row-selected b, .x-grid-row-selected div, .x-grid-row-selected strong, .x-grid-row-selected i{<br>	/*color: white !important;*/<br>}</p><p>.x-grid-row-selected .x-grid-cell-text{<br>	/*color: white;*/<br>}</p><p>.x-grid-cell-selected{<br>	background-color: #316ac5 !important;<br>	/*color: white;*/<br>}</p><p>.x-grid-cell-selected span{<br>	/*color: white !important;*/<br>}</p><p>.x-grid-cell-selected .x-grid-cell-text{<br>	/* color: white;*/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684697">8</a> by Jared Shields
		posted on 8/6/2008 at 7:42 PM
		</div>
		<div class="comment_text"><p>No problem :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684701">9</a> by Brian
		posted on 8/7/2008 at 12:05 AM
		</div>
		<div class="comment_text"><p>I looked at my EXT-ALL.CSS out of curiosity on my CF8.01 install on my local XP-based laptop and the file does not have the extra "//" in it. I even found the specific references Paul cites. I'm not trying to edit my grid using the grid itself, but why is mine fine? I may have done a fresh install. Did you all remove the old versions before loading 8.01?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684702">10</a> by Jared Shields
		posted on 8/7/2008 at 4:50 AM
		</div>
		<div class="comment_text"><p>Excellent question!  I have no idea why youre didnt have the "//".</p><p>The installations that I've confirmed it on are 8.0 and 8.0.1 (That was upgraded).</p><p>Can anyone else confirm this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684706">11</a> by Dave DuPlantis
		posted on 8/7/2008 at 5:05 PM
		</div>
		<div class="comment_text"><p>I have CF 8.01 installed on my XP Pro desktop, a fresh install, and I see the incorrectly-commented lines in my EXT-ALL.CSS file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684704">12</a> by Raymond Camden
		posted on 8/7/2008 at 5:29 PM
		</div>
		<div class="comment_text"><p>For those who say they have 801, don't forget that past 801 there was a CHF (Cumalative Hot Fix) and a few other post CHF hot fixes as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684705">13</a> by Brian
		posted on 8/7/2008 at 7:40 PM
		</div>
		<div class="comment_text"><p>I just added the Cum Hot fix 1 and the hot fix related to the grid and they affected one CSS, but not this one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684707">14</a> by Brian
		posted on 8/7/2008 at 7:51 PM
		</div>
		<div class="comment_text"><p>Found why mine was different - Dreamweaver issue. I opened the CSS directly and get:</p><p>//color: white;</p><p>but if I use Dreamweaver to follow the link in my code, which I did before, I get:</p><p>background-color:#316ac5 !important;color:white;</p><p>Not sure how that translated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684708">15</a> by Raymond Camden
		posted on 8/7/2008 at 9:12 PM
		</div>
		<div class="comment_text"><p>Ugh - a good reason to not use Dreamweaver.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684719">16</a> by Jared Shields
		posted on 8/8/2008 at 3:41 AM
		</div>
		<div class="comment_text"><p>So ray, gonna pull some strings to get that issue corrected as a Hotfix ???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684722">17</a> by Ryan
		posted on 8/14/2008 at 6:54 AM
		</div>
		<div class="comment_text"><p>Any one else having issues when trying to resize the columns, by dragging the dividers between the column headers. if you leave them alone, they are fine, but once you try to resize them, the headings go haywire, and are no longer lined up over the columns.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684717">18</a> by Steve
		posted on 8/21/2008 at 11:04 PM
		</div>
		<div class="comment_text"><p>Resize DOES NOT work in IE7... (but notice you do see the ellipse [the three dots] in IE, not in FF). Anyone have a fix for that issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684724">19</a> by Paul
		posted on 8/26/2008 at 12:50 AM
		</div>
		<div class="comment_text"><p>Raymond: you were so much help with the IE display issue, possibly you can shed some light on another grid problem. I have a complex page with multiple sections. Each section contains two editable grids. When the page loads the bindOnLoad property of each grid is set to false to speed the page load up. Only when the user clicks to open a section are the grids displayed and the data loaded with ColdFusion.grid.Refresh(). So the page should load fast, but the grids slow the page load down to a crawl. I don't understand why the grids slow the page down so much when no data is being loaded, but if you comment out the grids the page is smoking fast. Any ideas what might cause this or how to work around it would be appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684718">20</a> by Brian
		posted on 8/26/2008 at 1:03 AM
		</div>
		<div class="comment_text"><p>I see the same slowness in IE6, but much better in FireFox, unfortunately my client is on IE 6. I believe I've heard it is related to how IE is handling the Javascript, especially if you use it nested in cflayout tags, which I do. Are you using IE 6 or 7? Are you using cflayout tags? I would also be interested in Ray's thoughts on how we can improve on this awful performance hit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684720">21</a> by Paul
		posted on 8/26/2008 at 1:14 AM
		</div>
		<div class="comment_text"><p>My Client is on IE6 as well, and my grids are nested in cflayout tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684723">22</a> by Brian
		posted on 8/26/2008 at 1:26 AM
		</div>
		<div class="comment_text"><p>My client will probably not even accept my ColdFusion solution because of this. So much for working on the bleeding edge. We're doomed unless Ray can help us.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684726">23</a> by Raymond Camden
		posted on 8/26/2008 at 7:33 AM
		</div>
		<div class="comment_text"><p>So guys- a bit of a quick response. It's late here and I spent the last few hours working with my wife on her math homework. My answer now may not be the "best" so please take it with a grain of salt.</p><p>My general answer is - if the built in ajax ui stuff is not working well, then I'd probably not use it. Remember that the built in Ajax UI stuff is simply wrappers to other libraries. Adobe did their best to try to make it as easy as possible, but in doing so, also had to cut some corners. This I think is fair. But it means that if the out of the box UI stuff doesn't work well, then you should consider rolling your own.</p><p>Doing so does NOT mean you are turning your back on CF8 and Ajax. There are still plenty of NON-UI Ajax things that you can - and should - continue to use.</p><p>Does that make sense? Not trying to pass the buck here of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684721">24</a> by joe
		posted on 8/26/2008 at 5:48 PM
		</div>
		<div class="comment_text"><p>So we pay thousands of dollars to buy our own copy of CF8, or pay extra for special hosts that uses it, so that we can use the new features and then we're supposed to just deal with it when parts of it don't work correctly?  Really?  How disappointing...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684725">25</a> by Raymond Camden
		posted on 8/26/2008 at 5:55 PM
		</div>
		<div class="comment_text"><p>@joe: Absolutely not. My recommendation was just that - a recommendation. I don't speak for Adobe. The PROPER thing to do when you find a bug is to contact Adobe for support. Yes, this costs money, but if you find a real bug you are NOT charged for it.</p><p>CF - like every other software product in the world - has bugs. Nothing will change that. If you follow the procedure to report bugs to them to help them fix it however it will lead to them being able to fix it.</p><p>I have - from time to time - recommend folks not using the Ajax UI stuff if they have more advanced needs. This has nothing to do with any bugs. More it's the understanding that the tags CF built can't cover each and every possible use case. That would be impossible. For folks who are new to Ajax, the tags in CF8 can be a godsend. But for those who are more comfortable with other libraries, ike jQuery UI, then it may make more sense to use them instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684728">26</a> by Paul
		posted on 8/26/2008 at 9:07 PM
		</div>
		<div class="comment_text"><p>Raymond: Of course CF has and always will have bugs, thats a given. In this case, I can't really say this is a bug since the grids work exactly as advertised. So I don't see how I can report this as a bug. However, the performance overhead makes them impossible to use in a production environment so I can see Joe's point as well. Just to say don't use the Ajax UI components when we have all paid for them does not seem right either. And its not just in some obscure use case.  Here is a simple, generic piece of code to demonstrate: <br>&lt;cftimer type="debug" label="50 Grid Check"&gt;<br>&lt;cfform name="test"&gt;<br> &lt;cfoutput&gt;<br>	&lt;cfloop from="1" to="50" index="i"&gt;<br>		&lt;cflayout type="vbox" name="layout#i#" style="width:100%; height:100%; display:inline;" &gt;<br>			&lt;cflayoutarea title="User Profile" selected="true" name="userprofile#i#"style="height:80%; width:100%; display:inline;" &gt;<br>				&lt;cfgrid format="html"  bind="cfc:customer.getUserInfo({cfgridpage},{cfgridpagesize},{cfgridsortcolumn},{cfgridsortdirection},'#i#')" onChange="cfc:customer.updateUser({cfgridaction},{cfgridrow},{cfgridchanged},'#i#')"   pageSize="1"  bindOnLoad="false" width="650" autowidth="false" name="userprofile#i#" &gt;<br>													&lt;CFGRIDCOLUMN NAME="UserID" HEADER="User ID" WIDTH="1" display="False"&gt;<br>													&lt;CFGRIDCOLUMN NAME="duReportedUserID" HEADER="ID" WIDTH="35"  &gt;<br>													&lt;CFGRIDCOLUMN NAME="duFirstName" HEADER="First Name" WIDTH="65" textcolor="black"&gt;<br>								&lt;CFGRIDCOLUMN NAME="duLastName" HEADER="Last Name" WIDTH="65"/&gt;<br>								&lt;CFGRIDCOLUMN NAME="duTelNo" HEADER="Phone Number" WIDTH="65"/&gt;<br>							&lt;CFGRIDCOLUMN NAME="duEmail" HEADER="EMail" WIDTH="65"/&gt;						<br>				&lt;/cfgrid&gt;<br>			&lt;/cflayoutarea&gt;<br>		&lt;/cflayout&gt;<br>	&lt;/cfloop&gt;<br> &lt;/cfoutput&gt;<br>&lt;/cfform&gt;<br>&lt;/cftimer&gt;</p><p>On my server the debug says  [280ms] 50 Grid Check<br>But the page actually takes minutes to load, IE or FireFox.<br>Take out the grids and it loads in seconds. So this does seem to be a performance problem with the grid itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684727">27</a> by Raymond Camden
		posted on 8/26/2008 at 9:12 PM
		</div>
		<div class="comment_text"><p>Performance issues can be submitted as bugs as well Paul.</p><p>However - I'd say 50 grids on a page being slow isn't a bug. Just like putting 50 large JPGs on a page would slow it down, I'd say overuse of _any_ UI item would cause a slow down. Now it you saw significant slowdown with 5 or less grids, which is a much more reasonable #, then I'd definitely say we have a problem.</p><p>I noticed in your earlier comment you mentioned 2 grids slowing the page down to a crawl. What is the total time to load when using 2 grids?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684729">28</a> by Raymond Camden
		posted on 8/26/2008 at 9:22 PM
		</div>
		<div class="comment_text"><p>Using 5 grids, the page loaded very quickly, but it was a local host test. I checked yslow. The results were:</p><p>Empty Cache: 591K (css+js+cs+html+image)<br>Primed Cache: 16.1K</p><p>So the non-primed cache is large. This represents all the stuff loaded to support the ajax items. This is large, yes. You can get smaller #s if you use jquery. Again though folks the idea here is trade offs. You get the convenience of ease of use but the trade off is the impact on the initial download.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684731">29</a> by Paul
		posted on 8/26/2008 at 9:58 PM
		</div>
		<div class="comment_text"><p>Raymond: I did not make myself clear, the 2 grids were being created in a loop through many users, so it was 2 X the number of users, which could be quite a few. Performance with 5 grids is perfectly acceptable, I just ran the code sample with that number and it came back in a fraction of a second. I guess I just expected that if you did not load any data into the grid that it would be possible to create a large number of grids quickly, but that does not seem to be the case. What I was trying to do was load the page with hidden, empty grids that would then load their data using ColdFusion.grid.refresh when the user chooses one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684734">30</a> by sneha
		posted on 9/13/2008 at 4:07 AM
		</div>
		<div class="comment_text"><p>Can someone tell me how to use url in cgfrid onChange attribute?</p><p>For eg:<br>&lt;cfgrid format="html" name="campaignGrid"<br>bind="url:http://mysite/cfc/cfcname?method=....etc"<br>onChange="url:http://mysite/cfc/cfcname?method=editData&amp;gridaction={cfgridaction}&amp;gridrow={cfgridrow}&amp;gridchanged={cfgridchanged}"</p><p>Although url in bind works...the onChange doesn't seem to work this way.<br>I had onchange="cfc:cfc.cfcname...." before but some prob with my cfc path that i couldn't resolve. So i need to get this working this way. Can someone point out whats wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684733">31</a> by Raymond Camden
		posted on 9/13/2008 at 10:24 PM
		</div>
		<div class="comment_text"><p>Try a URL w/o a full path. url://cfc/cfcname/etc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684732">32</a> by sneha
		posted on 9/13/2008 at 11:41 PM
		</div>
		<div class="comment_text"><p>Thanks for the reply. I tried<br>onChange="url://cfc/cfcname.cfc?method=editData&amp;gridaction={cfgridaction}&amp;gridrow={cfgridrow}&amp;gridchanged={cfgridchanged}"<br>But didn't seem to help. <br>After double clicking &amp; editing the cell i do see the red indicator in the corner of the cell, but when page is refreshed, i don't see the change anymore. I don't get any errors either to figure out where the problem is.<br>Here is the editData fn from the cfc:<br>&lt;cffunction name="editData" access="remote" output="false"&gt;<br>  &lt;cfif isStruct(gridrow) and isStruct(gridchanged)&gt;<br>     &lt;cfif gridaction eq "U"&gt;<br>       &lt;cfset colname=structkeylist(gridchanged)&gt;<br>       &lt;cfset value=structfind(gridchanged,#colname#)&gt;</p><p>       &lt;cfquery name="edit"&gt;<br>	update [table]<br>	&lt;cfif isNumeric(value)&gt;<br>	  set #colname# = #value#<br>	&lt;cfelse&gt;<br>	  set #colname# = '#value#'<br>	&lt;/cfif&gt;<br>	  where campaignID = '#gridrow.campaignID#'<br>       &lt;/cfquery&gt;<br>    &lt;/cfif&gt;&lt;!---end &lt;cfif gridaction eq "U"&gt; ---&gt;<br>  &lt;/cfif&gt;&lt;!---end &lt;cfif isStruct(gridrow) and isStruct(gridchanged)&gt; ---&gt;</p><p>&lt;/cffunction&gt;</p><p>Like how i had to include returnFormat=json in the bind url, should the format be specified in the onChange url too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684740">33</a> by Raymond Camden
		posted on 9/14/2008 at 2:53 AM
		</div>
		<div class="comment_text"><p>The format is wrong. it isn't url://, but rather url:URL here, relative,</p><p>So I'd assume you want</p><p>url:/path/to/CFC</p><p>or</p><p>url:cfcinsamefolder.cfc</p><p>To include the returnformat, just add it as a query parameter.</p><p>url:my.cfc?method=dosomething&amp;returnformat=json</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684736">34</a> by sneha
		posted on 9/14/2008 at 3:32 AM
		</div>
		<div class="comment_text"><p>Sorry..that was a typo on my part.<br>I tried url:/cfc/cfcname.cfc?method=editData&amp;gridaction={cfgridaction}&amp;gridrow={cfgridrow}&amp;gridchanged={cfgridchanged}&amp;returnFormat=json<br>I also moved cfc to same folder as this page &amp; tried<br>url:cfcname.cfc?method=editData&amp;gridaction={cfgridaction}&amp;gridrow={cfgridrow}&amp;gridchanged={cfgridchanged}&amp;returnFormat=json</p><p>It still wouldn't work..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684735">35</a> by sneha
		posted on 9/14/2008 at 4:23 AM
		</div>
		<div class="comment_text"><p>Just an addition to my earlier comment:<br>I used firebug &amp; it showed some error msg while i tried to edit the grid. Here it is:<br>_251[i] is undefined<br>  if(!_251[i].length){.....</p><p>in cfajax.js (line 147)</p><p>Not sure what it means.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684737">36</a> by Raymond Camden
		posted on 9/14/2008 at 6:30 PM
		</div>
		<div class="comment_text"><p>Shoot. I'm getting that too. I know I got it working before because when I was testing this issue (this issue as in the original blog entry), I had looked at what was sent to the server. Yet a simple test on my own server now is failing again. The only difference  in my new test is that the original data is from the remote server, and my first test the data was embedded directly on the page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684739">37</a> by Paul
		posted on 11/25/2008 at 3:17 AM
		</div>
		<div class="comment_text"><p>Ray: you were so helpful in resolving the original problem, here is another (probably CSS) cfgrid issue in IE.<br>I have a cfgrid that displays in a cfwindow. Looks perfect in FireFox, but when it loads in IE the headers are all messed up. Their text overlaps the columns, they are not aligned properly, etc. Then when you mouse over them they fix themselves. EXT, css and IE related to be sure, but I have no idea how to fix it.</p><p>Thanks in advance for any insight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684738">38</a> by Raymond Camden
		posted on 11/27/2008 at 3:41 AM
		</div>
		<div class="comment_text"><p>About the only insight I can give is to not use IE. ;) Sorry, I'm on a Mac and only use IE on my Windows box when I havew to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684741">39</a> by AlexS
		posted on 12/19/2008 at 3:00 PM
		</div>
		<div class="comment_text"><p>For those who have the header resize problem within ie 6, i've finally found where the problem is, apparently the cfgrid html format cannot be nested into a standard html table. Hope this helps</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684743">40</a> by Paul
		posted on 12/19/2008 at 10:23 PM
		</div>
		<div class="comment_text"><p>If you set autowidth="false" and grid_width to the sum of the width of the columns plus a pixel (for the column separators) you can get the columns and headers to line perfectly. Hope this helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684746">41</a> by Dylan  Miyake
		posted on 1/22/2009 at 7:50 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I have an interesting one here.  I'm working on an app that uses CFGrid pretty extensively, with ColdFusion.navigate used to move from page to page.</p><p>One thing I noticed that when .navigate is used, the grid objects are not destroyed, so I googled about in the Ext forums and figured out how to destroy them.</p><p>But then I noticed that upon multiple page refreshes, IE would start to fail.  It appears as if cfgrid.js is appending *two* style sheets to the header with each cfgrid that's created, one with the proper "id-cssrules" (which gets cleaned up by Ext when the grid is destroyed), and one without the suffix (which just sits there in the header), until you hit the magic number of 30 and IE dies.</p><p>To work around this issue (temporarily), I've changed line 71 in cfgrid.js to read:</p><p>Ext.util.CSS.createStyleSheet(_264.styles, 'foo');</p><p>and I'm manually killing the style sheet after destroying the grid:</p><p>Ext.util.CSS.removeStyleSheet('foo');</p><p>It's pretty easy to see the two stylesheets generated by Ext and cfgrid.js in Firebug, and the IE 30 style sheet limit is documented here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsupport.microsoft.com%2Fkb%2F262161%3AU6eoK_vnGfLB3tG4IELrx4yopL0&amp;cuid=3321886" rel="nofollow noopener" title="http://support.microsoft.com/kb/262161">http://support.microsoft.co...</a></p><p>Seems like a pretty hacky workaround to me.  Have you (or any other readers of this blog) run into this?</p><p>Regards,</p><p>Dylan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684747">42</a> by Raymond Camden
		posted on 1/22/2009 at 7:55 AM
		</div>
		<div class="comment_text"><p>Well, I don't use IE, so I wouldn't see it. I can say though that it seems like you have not only found a bug but a solution, so _please_ log it with Adobe:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%3AeVByS_kB5f-F_Xb5m4vrRNXZtoA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/wish">http://www.adobe.com/go/wish</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684752">43</a> by Dylan  Miyake
		posted on 1/24/2009 at 4:14 AM
		</div>
		<div class="comment_text"><p>Ran into another interesting issue as I was trying to track down the memory leaks in the application we're building.  I profiled and profiled under IE (necessary evil) to figure out what was causing the massive memory bloat, only to find out that Skype's IE plugins were the culprit (which is why we couldn't find them in Firebug)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.actionscript.org%2Fforums%2Fshowthread.php3%3Fp%3D792856%3AM891F-MLXuqyNYnFK0n4MXs12Sg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.actionscript.org/forums/showthread.php3?p=792856">http://www.actionscript.org...</a></p><p>If anyone else is using Flash and the CF Ajax functionality, seeing IE get more and more bloated, check to see if the Skype browser add-ins are the culprit.  An application that routinely ate 1GB+ of memory is now down to 80MB or so (still too much, but much more manageable).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684749">44</a> by Chris Ulrich
		posted on 2/9/2009 at 7:38 PM
		</div>
		<div class="comment_text"><p>Dylan -</p><p>I tried your fix but it didn't work for me.  In all fairness, I'm not sure if I'm properly destroying the grids.</p><p>I've got a CFLAYOUT structure with menu on the left and "content" on the right.  For me, if I click one link on the left that loads a CFGRID on the right, and repeat 13 times, I'm dead.  I've added:</p><p>javascript:Ext.util.CSS.removeStyleSheet('foo');</p><p>to the front of each menu link, such as:</p><p>&lt;A href="javascript:Ext.util.CSS.removeStyleSheet('foo');ColdFusion.navigate('rightside.cfm?id=support.faq.edit','supportright');"&gt;Maintain FAQ's&lt;/A&gt;</p><p>This had no effect (and I did change the cfgrid.css in inetpub\wwwroot\cfide\scripts\ajax\package)</p><p>Is there a better way to destroy the grid that would make this work?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684744">45</a> by Chris Ulrich
		posted on 2/9/2009 at 7:50 PM
		</div>
		<div class="comment_text"><p>Interestingly, if I do the same thing in FF and reload at a "reasonable pace" - every few seconds, memory usage goes up very slightly - maybe 10k/hit.</p><p>HOWEVER, if I go click happy, it leapfrogs 2MB per hit, apparently not having enough time to clear (whatever) from memory before the next instance loads...</p><p>C'mon IE / Adobe ... play nice!   While I love CF, Adobe really should be testing &amp; fixing deeper.  If people can come up with work-arounds, they should fix the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684748">46</a> by Dylan Miyake
		posted on 2/13/2009 at 5:13 AM
		</div>
		<div class="comment_text"><p>@Chris:</p><p>Did you also change the cfgrid.js?  That's where you assign the name to the stylesheet, so you can destroy it later.  I also have a series of hacky workarounds for destroying grids if you're interested.</p><p>Dylan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684753">47</a> by Bob Chesley
		posted on 7/28/2009 at 9:04 PM
		</div>
		<div class="comment_text"><p>I came up with a workaround for the IE6/7 column resize problem - see the following link to the support forums on ExtJS - <a href="http://disq.us/url?url=http%3A%2F%2Fextjs.com%2Fforum%2Fshowthread.php%3Ft%3D9243%3ANMbK1D2jfg-33grfX78oxRAHo1A&amp;cuid=3321886" rel="nofollow noopener" title="http://extjs.com/forum/showthread.php?t=9243">http://extjs.com/forum/show...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684745">48</a> by futr_vision
		posted on 8/11/2009 at 3:14 AM
		</div>
		<div class="comment_text"><p>I think I am having a similar issue with IE. I have a search box that triggers a cfwindow which loads a pagewith the search results. I'm using cfseach and return the results to a cfgrid. My problem is that when a user gets to the 14th search the results are returned to the page (I see them using cfdump) but the grid appears as a horizontal rule on the page and does not render properly. Each subsequent search yields the same results. It's only when a refresh the main page that results return back to normal, at least until the user gets to search #14. Is this the same issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684751">49</a> by Jared Shields
		posted on 8/12/2009 at 3:04 AM
		</div>
		<div class="comment_text"><p>@futr_vision  - That is actually a different problem.</p><p>Everytime a new CFGRID is rendered to the DOM, a new style tag (actually I think 2) is added to the DOM (instead of just reusing or adding styles to an already present stylesheet).</p><p>IE supports up to 32 (correct me if I'm wrong) stylesheets.  We've been experiencing the same issue with my primary application and plan to backout from using any of CF's integrated AJAX controls and just roll with EXTJS directly.... That way it can be controlled more appropriately.  Unfortunately I'm not aware of any workaround to this besides modifying the package/cfgrid.js file directly (which I don't recommend).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684750">50</a> by Jared Shields
		posted on 8/12/2009 at 3:12 AM
		</div>
		<div class="comment_text"><p>@futr_vision - look up at "Dylan Miyake" comment on 21 January 2009, at 8:50 PM for full details about the problem you're experiencing.</p><p>I haven't confirmed whether or not this issue was corrected in CF9 or not, but I doubt it was.  Can anyone test and confirm this?  (just load a grid into a cfdiv over and over again... and see if it bombs in CF9)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684754">51</a> by Win Barker
		posted on 8/17/2009 at 7:55 PM
		</div>
		<div class="comment_text"><p>@anyone-</p><p>I've been researching the issues with cfgrid but haven't found an answer to Chris' question from early this year, namely - how do you fire removeStyleSheet() and how (and where) are grids destroyed?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684755">52</a> by frijoles junior
		posted on 8/19/2009 at 2:39 AM
		</div>
		<div class="comment_text"><p>I encountered this thread looking for evidence that I'm not the only guy in the world having this issue.  I have a cfgrid implementation that updates the incorrect rows when updating via the cfquery method, but only in the AJAX (type="html") grid.  The flash and applet versions work perfectly.</p><p>Can anyone give me a reason why one form of the grid would go send an incorrect primary key value to the query while the other types do not?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684757">53</a> by Jared Shields
		posted on 8/21/2009 at 5:06 PM
		</div>
		<div class="comment_text"><p>Hey guys,</p><p>I came up with a workaround to the CFGRID/IE/CSS issue with respect to dynamic loading.</p><p>I've published the workaround here: <a href="http://disq.us/url?url=http%3A%2F%2Fblog.jaredshields.com%2Findex.php%2F2009%2F08%2Finternet-explorers-lucky-32-fix%2F%3Acb6bFYFfBHchITXkHgD-vAkaXG0&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.jaredshields.com/index.php/2009/08/internet-explorers-lucky-32-fix/">http://blog.jaredshields.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684756">54</a> by Rama
		posted on 11/24/2009 at 1:06 AM
		</div>
		<div class="comment_text"><p>Hi guys<br>I have this weird issue with cfgrid,where i'm breaking my head on that for the past 2 days. I want the cfgrid go to page 2 or 3 on page load and depending on the url parameter "&amp;page =2" . I did an ajax call to the cfc function and got the results for the page 2, but the grid is not taking the data that is returned and it is loading to page 1 by default. My question how can i bind the data that was returned back from ajax to cfgrid? Is there a way. Please help me......</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684761">55</a> by Raymond Camden
		posted on 11/24/2009 at 3:56 AM
		</div>
		<div class="comment_text"><p>At a high level, you need to run code when the page loads and ask the grid to set the current page to 2. If you search here for cfgrid you will find many posts on how to extend CFGRID, and you should become familiar with Ext as well since that is the technology behind the grid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684760">56</a> by Murad Amer
		posted on 10/7/2010 at 1:17 PM
		</div>
		<div class="comment_text"><p>Hello,</p><p>For CF9, I came up with a workaround for the CFGRID/IE/CSS issue, since the cfgrid.js file is different than it was in CF8.</p><p>Inside "cfgrid.js" file I added the following two lines:<br>1) above the row: "Ext.util.CSS.createStyleSheet(_507,"_cf_grid"+id);" I just added the row: "Ext.util.CSS.removeStyleSheet("_cf_grid"+id);".<br>so that every time the stylesheet is created, we make sure the old one is destroyed.</p><p>2) above the row: "Ext.util.CSS.createStyleSheet(_50e.styles);"<br>I added the row: "Ext.util.CSS.removeStyleSheet('foo');", and therefore I added the 'foo' string name to the original row, so it became: "Ext.util.CSS.createStyleSheet(_50e.styles,'foo');"</p><p>This solved the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684759">57</a> by techfuser
		posted on 9/19/2011 at 10:20 PM
		</div>
		<div class="comment_text"><p>when I resize columns in cfgrid (html formatted) the columns and the values gets misaligned until I mouse over them again. Almost looks like on mouseover the grid is re rendering. this only happens in IE not in Firefox. Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684762">58</a> by Raymond Camden
		posted on 9/20/2011 at 5:54 AM
		</div>
		<div class="comment_text"><p>Outside of not using IE (grin), I'd make sure you were updated to the latest version of CF (hot fixes).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684763">59</a> by David Vaccaro
		posted on 5/8/2012 at 7:45 PM
		</div>
		<div class="comment_text"><p>Bummer!  I am working a project in CF8 and am having the cfGrid IE issue.  I can track it to IEs limitation of only loading the first 30 StyleSheets then botching.<br>I have tried the fix described above along with the following:</p><p>place this code<br>&lt;script type="text/javascript"&gt;<br>Ext.util.CSS.removeStyleSheet('foo');<br>&lt;/script&gt;</p><p>in the body of the cfm page, and modified line 71 of the cfgrid.js to read:  <br>Ext.util.CSS.createStyleSheet(_264.styles, 'foo');<br>instead of:<br>Ext.util.CSS.createStyleSheet(_264.styles);</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684764">60</a> by Raymond Camden
		posted on 5/9/2012 at 1:16 AM
		</div>
		<div class="comment_text"><p>You might not like it - but I'd stop using cfgrid and switch to jqGrid. Or pay for the modern Ext license and use it 'naked' (ie, w/o cfgrid).</p></div>
	</div>
</div>
		