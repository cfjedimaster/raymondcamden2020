
<div class="comment" id="c_1713666765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666765">1</a> by Gary Funk
		posted on 6/8/2007 at 6:56 AM
		</div>
		<div class="comment_text"><p>I get an error when I click on 'show hidden tab.'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666779">2</a> by Chad
		posted on 6/8/2007 at 7:03 AM
		</div>
		<div class="comment_text"><p>Oh wow... this will be one of the first things i will be using when i get CF8.  I have an application that has many pages of forms that would work perfect in a tabbed layout.</p><p>Now can each tab submit it's form content via Ajax to a CFC that inserts it into a database?  Maybe on each tab change submit that tabs data?</p><p>I was thinking of converting the application i am talking about to Flex, but now i see this maybe i will keep it CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666785">3</a> by Raymond Camden
		posted on 6/8/2007 at 7:25 AM
		</div>
		<div class="comment_text"><p>Um, Gary, did you see where I mentioned this was buggy? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666777">4</a> by David
		posted on 6/8/2007 at 7:30 AM
		</div>
		<div class="comment_text"><p>Is there any provision for doing the tabs server side?</p><p>I have seen situations where each tab has a good amount of processing on them, and if the tabs are all loaded and changed client side, you can end up with ALOT of process to present the tabs.</p><p>Does &lt;cflayout&gt; have a runat="server" or something like that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666764">5</a> by Patrick Whittingham
		posted on 6/8/2007 at 3:44 PM
		</div>
		<div class="comment_text"><p>The last demo is getting JavaScript errors in Firefox 2.0 when one click on the links on tab #1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666767">6</a> by Brian Swartzfager
		posted on 6/8/2007 at 4:11 PM
		</div>
		<div class="comment_text"><p>Interesting...when the last demo errors on clicking the "show tab" link, the JavaScript debugger says the error is "_198.unhideTab is not a function" and provides a link to the cflayout.js file on the coldfusionjedi site...which I could then click on and open in a view source window (that's surprising and a bit disturbing).</p><p>I did a search in that source window for an unhideTab function, and yep, there's doesn't seem to be one, at least in that particular file.</p><p>Not the most readable JavaScript code I've ever seen, that's for sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666775">7</a> by Raymond Camden
		posted on 6/8/2007 at 4:18 PM
		</div>
		<div class="comment_text"><p>Brian - why is it disturbing that you could read the JS code? Thats normal. And the JS code is supposed to be optimized for speed, not readability (although I don't know if the JS code is completely optimized yet).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666786">8</a> by Raymond Camden
		posted on 6/8/2007 at 4:19 PM
		</div>
		<div class="comment_text"><p>Patrick: Yes - please see my blog entry where I note that the show/hide tab API seems currently broken. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666780">9</a> by Phillip Senn
		posted on 6/8/2007 at 4:25 PM
		</div>
		<div class="comment_text"><p>Does cflayout replace Spry TabbedPanels?<br>If so, how much of cf8 will be replacing various Spry tags?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666774">10</a> by Raymond Camden
		posted on 6/8/2007 at 4:33 PM
		</div>
		<div class="comment_text"><p>David - no - this is all ajax based code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666784">11</a> by Raymond Camden
		posted on 6/8/2007 at 4:34 PM
		</div>
		<div class="comment_text"><p>Phillip - Yes and No. The beauty of these UI controls is that they make it bran dead simple. While there are plenty of options with them, if you want 100% control, you need to use your own controls. Spry would make that rather easy.</p><p>I plan on blogging about cfsprydataset later this month. (Too many darn features!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666771">12</a> by Brian Swartzfager
		posted on 6/8/2007 at 4:38 PM
		</div>
		<div class="comment_text"><p>Ray, you're right: it's perfectly normal for the debugger to show the JS file.  Don't know why it struck me as being odd:  maybe the official Adobe statement at the top of it that threw me off a bit.</p><p>And yeah, I understand that optimization should trump readability, but readability is still nice to have.  Not a criticism of CF8 (or Adobe, or apple pie, or whatever), just a personal preference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666783">13</a> by Raymond Camden
		posted on 6/8/2007 at 4:44 PM
		</div>
		<div class="comment_text"><p>I disagree Brian. I think most frameworks ship 2 versions. A fat readable version and a skinny impossible to read one for production. The goal isn't to hide code by making it ugly, but to trim down the size as much as possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666778">14</a> by Raymond Camden
		posted on 6/8/2007 at 5:30 PM
		</div>
		<div class="comment_text"><p>Chad, 2 possible answers. First, AjaxLink lets you link and keep inside a layoutarea. Secondly, there is a ColdFusion.Ajax.submitForm JS function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666773">15</a> by Michael Long
		posted on 6/9/2007 at 12:03 AM
		</div>
		<div class="comment_text"><p>Yes, it's brain-dead simple... and to be fair, you should probably mention that the first example also adds ten additional javascript and css files (about 325K) to the weight of your page. TANSTAAFL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666772">16</a> by Raymond Camden
		posted on 6/9/2007 at 12:06 AM
		</div>
		<div class="comment_text"><p>And to be fair - this is still a RC. Adobe knows they need to do some scrunching on the JS files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666766">17</a> by Michael Long
		posted on 6/9/2007 at 12:30 AM
		</div>
		<div class="comment_text"><p>True. But as a dedicated HTML/JS/CSS solution to this can be done in about 2K, that code is going to need a lot of scrunching.</p><p>Really, we're back to the old argument of heavyweight frameworks vs. lightwieght specialized code and which one is better suited to the problem at hand.</p><p>Either way, one should know the advantages--and disadvantages--of their choice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666770">18</a> by Andrew Scott
		posted on 6/10/2007 at 5:47 AM
		</div>
		<div class="comment_text"><p>The error with the tabs is a simple fix.</p><p>And the problem is that Ray put the values around the wrong way, oh well.</p><p>Here is the new code that works.</p><p>   &lt;a href="javaScript:ColdFusion.Layout.showTab('mytabs','hiddentab')"&gt;Show Hidden Tab&lt;/a&gt; /<br>   &lt;a href="javaScript:ColdFusion.Layout.hideTab('mytabs','hiddentab')"&gt;Hide Hidden Tab&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666769">19</a> by Raymond Camden
		posted on 6/10/2007 at 7:49 PM
		</div>
		<div class="comment_text"><p>Andrew, not quite sure if you meant anything by the "oh well", but I'm as perfect as the next person. ;)</p><p>So I took a look at the docs again, and it really seems unclear, but after rereading it twice - it does seem like the syntax is group/tab, not tab/group. I can file a doc bug to make this a bit clearer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666782">20</a> by Andrew Scott
		posted on 6/11/2007 at 9:46 AM
		</div>
		<div class="comment_text"><p>No Ray, it wasn't a dig at you. More to the fact that I know that the docs could have been wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666776">21</a> by Lola LB
		posted on 6/11/2007 at 5:28 PM
		</div>
		<div class="comment_text"><p>Bug in Safari - only the 5 tabs are displaying.  The picklist is not showing up at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666789">22</a> by Raymond Camden
		posted on 6/11/2007 at 5:42 PM
		</div>
		<div class="comment_text"><p>I can confirm that. Please log a bug Lola.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666790">23</a> by Lola LB
		posted on 6/11/2007 at 5:51 PM
		</div>
		<div class="comment_text"><p>Done . . .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666794">24</a> by andrea
		posted on 6/13/2007 at 5:06 AM
		</div>
		<div class="comment_text"><p>Something I do not like about the height of the tabs.<br>The tab should be resizable as default giving chance to customize height and eventually scrollbar.<br>From my test the tab start with a default height ( looks like  about 100px) and this reduce the possibility to be used without the orrible scrollbar.<br>If tab 1 has 5 lines of text and tab 2 25 lines I have 2 options:<br>1)Fix the height of the two tabs regarding the longest but tab 1 will be 85% white<br>2)let the tag add the scrollbars.</p><p>However there should be no way to be sure to avoid scollbars in dynamic context:</p><p>I 'd like to see tab resizable as default with no height limit ( as most tab scripts now in use) and attributes like  tabheight with a reative scrollbar yes no.</p><p>Hope is all clear</p><p>Nowone noted the same situation or I miss something?</p><p>Andrea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666791">25</a> by Michael White
		posted on 9/7/2007 at 11:20 PM
		</div>
		<div class="comment_text"><p>what if you want a multiple tab layout and a single form for all of the tabs? I have a cflayout type="tab" and four cflayoutareas, one for each tab. but I want it all wrapped up in a single form with a single submit button at the bottom. In flash forms, this is a no-brainer. Using Ajax UI I'm having trouble getting it to save the form data and I was wondering if there was a trick to getting it to work. I tried both ways I know, with a simple submit button and I tried a button with an onclick="ColdFusion.Ajax.submitForm..." command and nothin happens when I click. Also, I should say that the tab layout is pulled into a cfdiv tag from a ColdFusion.navigate link</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666792">26</a> by Raymond Camden
		posted on 9/7/2007 at 11:25 PM
		</div>
		<div class="comment_text"><p>Michael - I haven't tried that before. When I get time - I'll try to whip up a demo. Obviously the N step form is one of the intended uses for the tabs I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666795">27</a> by Michael White
		posted on 9/7/2007 at 11:41 PM
		</div>
		<div class="comment_text"><p>I found a simplified example (sort of) here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.mollerus.net%2Ftom%2Fblog%2F2007%2F06%2Ftabbed_dialog_boxes_with_cflayout.html%3Alf01tKLn8hXEICy6OSqS8hsM188&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mollerus.net/tom/blog/2007/06/tabbed_dialog_boxes_with_cflayout.html">http://www.mollerus.net/tom...</a><br>I'm making progress, I think it's working now. Normal submit button and a cfunclude #Session.Source# on the bottom of the processing page</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666793">28</a> by Michael White
		posted on 9/7/2007 at 11:46 PM
		</div>
		<div class="comment_text"><p>oh, and I mentioned in another post of yours that there are four "skins" for the tabs and windows stuff, default, gray, aero and vista. the may be in a separate set of directories but I am using something like this in the head section: 	&lt;LINK href="/CFIDE/scripts/ajax/ext/resources/css/tabsAero.css" rel="stylesheet" type="text/css"&gt;</p><p>The tabsAero.css is just a copy of the tabs.css with the links to the image files changed.<br>it's not perfect but it's better than making a global change to all the tabs, windows.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666798">29</a> by Raymond Camden
		posted on 9/8/2007 at 12:56 AM
		</div>
		<div class="comment_text"><p>Nice link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666801">30</a> by Jonathan
		posted on 1/31/2008 at 2:00 AM
		</div>
		<div class="comment_text"><p>When I'm in a CFLAYOUT's tab, and submit form variables to an action page (outside of CFLAYOUT) which uses CFLOCATION to return user to the original tab (after some processing), the session and other variables are unavailable on the tab, and any subsequent activity on the tab acts very strangely.</p><p>I built a sample app to show the problems here.</p><p>TRY THIS WITH THE CODE BELOW:<br>start on Tab3. click Edit Mode, which correctly remains on tab 3. submit any text, which is submitted to the Action.cfm page, an you are CFLOCATION'd back to Tab3. However at this point in MY application (the real project his sample is debugging), all session variables would be unavailable to code processing on tab3 right now (variable not defined error). Regardless, NOW click Edit Mode again (the second time) and note how screwy things get. You leave the CFLAYOUT framework and go directly to the tab's page.</p><p>I think CFLAYOUT has a fundamental bug that manifests when users are CFLOCATION'd back to a tab after processing. Maybe the tab's page doesn't know to remind the browser that there is a parent CFLAYOUT template (but i thought that's what the CFFORM tag is doing!!). The only way I can think to fix this is to CFLOCATION back to the original page with the CFLAYOUT tag, and then (using URL params and CFIFs) decide which tab is "SELECTED". But when I do that, i get a Javascript error like: "Error processing JavaScript in markup for element cf_layoutarea1200957715744: ...." <br>Attach Code</p><p>&lt;!--- cflayouttest.cfm ---&gt;<br>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=utf-8" /&gt;<br>&lt;title&gt;cflayout test&lt;/title&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;<br>&lt;CFAJAXIMPORT TAGS="cflayout-tab,cfform"&gt;<br>&lt;CFLAYOUT TYPE="TAB" TABHEIGHT="100%"&gt;</p><p>                &lt;CFLAYOUTAREA TITLE="TESTING Tab 1" SOURCE="cflayouttest-tab1.cfm"&gt;&lt;/CFLAYOUTAREA&gt;<br>                &lt;CFLAYOUTAREA TITLE="TESTING Tab 2"  SOURCE="cflayouttest-tab2.cfm"&gt;&lt;/CFLAYOUTAREA&gt;<br>                &lt;CFLAYOUTAREA TITLE="TESTING Tab 3" SOURCE="cflayouttest-tab3.cfm"&gt;&lt;/CFLAYOUTAREA&gt;</p><p>&lt;/CFLAYOUT&gt;<br>&lt;br /&gt;<br>&lt;br /&gt;<br>&lt;font size="-2"&gt;<br>Note:If you use CFAJAXIMPORT and use CFFORM for the form tags, then you don't need to SELECTED the CFLAYOUTAREA tags, since CFFORM does it for you.<br>&lt;/font&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p><p>&lt;!--- cflayouttest-actions.cfm ---&gt;</p><p>&lt;h1&gt;CF Layout Test - actions&lt;/h1&gt;</p><p>&lt;CFSWITCH EXPRESSION="#FORM.EDIT#"&gt;</p><p>        &lt;CFCASE VALUE="SUBMIT-TAB1"&gt;</p><p>        tab1</p><p>        &lt;CFDUMP VAR="#FORM#"&gt;</p><p>        &lt;CFLOCATION URL="cflayouttest-tab1.cfm"&gt;</p><p>    &lt;/CFCASE&gt;</p><p>        &lt;CFCASE VALUE="SUBMIT-TAB2"&gt;</p><p>        tab2</p><p>        &lt;CFDUMP VAR="#FORM#"&gt;</p><p>        &lt;CFLOCATION URL="cflayouttest-tab2.cfm"&gt;</p><p>    &lt;/CFCASE&gt;</p><p>        &lt;CFCASE VALUE="SUBMIT-TAB3"&gt;</p><p>        tab3</p><p>        &lt;CFDUMP VAR="#FORM#"&gt;</p><p>        &lt;CFLOCATION URL="cflayouttest-tab3.cfm"&gt;</p><p>    &lt;/CFCASE&gt;</p><p>&lt;/CFSWITCH&gt;</p><p>&lt;!---cflayouttest-tab1.cfm---&gt;</p><p>CF Layout Test - tab 1 body&lt;br /&gt;<br>&lt;br /&gt;<br>&lt;CFPARAM NAME="FORM.EDIT" DEFAULT="VIEW MODE"&gt;</p><p>&lt;CFIF form.edit EQ "VIEW MODE"&gt;<br>        VIEW-ONLY MODE&lt;br /&gt;&lt;CFFORM METHOD="POST"  ACTION="cflayouttest-tab1.cfm"&gt;&lt;input type="submit" name="EDIT" value="EDIT MODE" /&gt;&lt;/CFFORM&gt;<br>&lt;CFELSE&gt;<br>        EDIT MODE&lt;br /&gt;&lt;CFFORM METHOD="post" ACTION="cflayouttest-actions.cfm"&gt;&lt;input type="submit" name="EDIT" value="SUBMIT-TAB1" /&gt;&lt;input type="text" name="TESTBOX" /&gt;&lt;/CFFORM&gt;<br>&lt;/CFIF&gt;</p><p>&lt;!---cflayouttest-tab2.cfm---&gt;</p><p>CF Layout Test - tab 2 body&lt;br /&gt;<br>&lt;br /&gt;<br>&lt;CFPARAM NAME="FORM.EDIT" DEFAULT="VIEW MODE"&gt;</p><p>&lt;CFIF form.edit EQ "VIEW MODE"&gt;<br>        VIEW-ONLY MODE&lt;br /&gt;&lt;CFFORM METHOD="POST"  ACTION="cflayouttest-tab2.cfm"&gt;&lt;input type="submit" name="EDIT" value="EDIT MODE" /&gt;&lt;/CFFORM&gt;<br>&lt;CFELSE&gt;<br>        EDIT MODE&lt;br /&gt;&lt;CFFORM METHOD="post" ACTION="cflayouttest-actions.cfm"&gt;&lt;input type="submit" name="EDIT" value="SUBMIT-TAB2" /&gt;&lt;input type="text" name="TESTBOX" /&gt;&lt;/CFFORM&gt;<br>&lt;/CFIF&gt;</p><p>&lt;!---cflayouttest-tab3.cfm---&gt;</p><p>CF Layout Test - tab 3 body&lt;br /&gt;<br>&lt;br /&gt;<br>&lt;CFPARAM NAME="FORM.EDIT" DEFAULT="VIEW MODE"&gt;</p><p>&lt;CFIF form.edit EQ "VIEW MODE"&gt;<br>        VIEW-ONLY MODE&lt;br /&gt;&lt;CFFORM METHOD="POST"  ACTION="cflayouttest-tab3.cfm"&gt;&lt;input type="submit" name="EDIT" value="EDIT MODE" /&gt;&lt;/CFFORM&gt;<br>&lt;CFELSE&gt;<br>        EDIT MODE&lt;br /&gt;&lt;CFFORM METHOD="post" ACTION="cflayouttest-actions.cfm"&gt;&lt;input type="submit" name="EDIT" value="SUBMIT-TAB3" /&gt;&lt;input type="text" name="TESTBOX" /&gt;&lt;/CFFORM&gt;<br>&lt;/CFIF&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666797">31</a> by Raymond Camden
		posted on 1/31/2008 at 2:09 AM
		</div>
		<div class="comment_text"><p>First off, please do not post such large quantities of code. I appreciate you sharing the code, but it is a bit much. ;)</p><p>When you use cfform inside cflayout, the form post will be asynchronous. Therefore, cflocation doesn't make sense. Your doing an Ajax based request and the result is a header saying 'go here', but that doesn't make sense in this context. What you need to do instead is something like this:</p><p>Use ColdFusion.Ajax.submitForm() to submit the form. This will let you capture the result and handle it. In that result, you can then do whatever. If you want the tab contents to change, you can ColdFusion.navigate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666796">32</a> by Joe Finan
		posted on 4/30/2008 at 8:57 PM
		</div>
		<div class="comment_text"><p>I was able to change the background color of the tabs using the post by James Mount.  However, i was wondering if it is possible to change the color/text on a per tab basis?  I have a set of tabs, and each of those tabs may have a set of sub tabs.</p><p>I was able to set the background color of the selected tab (both levels) to blue by modifying the style to:<br>&lt;pre&gt;&lt;p&gt;##myTabs .x-tabs-strip .on .x-tabs-right .x-tabs-left {background: ##D6EEFA no-repeat right 0px;}&lt;/p&gt;&lt;/pre&gt;</p><p>I was also able to set the text color of the sub tabs to red by modifying the style to:<br>&lt;pre&gt;&lt;p&gt;##subTabs .x-tabs-strip .x-tabs-text {color:##ff8080;}&lt;/p&gt;&lt;/pre&gt;</p><p>My question is, can i just alter the text/color of a specific subtab?  I tried using the same syntax as above, but does this not work since it's at the &amp;lt;cflayoutarea&amp;gt; level?  Can you only modify the tabs at the &amp;lt;cflayout&amp;gt; level?</p><p>The first sub tab is coded:<br>&lt;pre&gt;&lt;p&gt;&amp;lt;cflayoutarea title="Sub Tab 1" name="st1"&amp;gt;&lt;/p&gt;&lt;/pre&gt;</p><p>However the code below does not work...<br>&lt;pre&gt;&lt;p&gt;##st1 .x-tabs-strip .x-tabs-text {color:##ff8080;}&lt;/p&gt;&lt;/pre&gt;</p><p>Any help is greatly appreciated, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666804">33</a> by Joe Finan
		posted on 4/30/2008 at 9:00 PM
		</div>
		<div class="comment_text"><p>Thought I'd clean it up, sorry about the first post...</p><p>I was wondering if it is possible to change the color/text on a per tab basis?  I have a set of tabs, and each of those tabs may have a set of sub tabs.</p><p>I was able to set the background color of the selected tab (both levels) to blue by modifying the style to:<br>##myTabs .x-tabs-strip .on .x-tabs-right .x-tabs-left {background: ##D6EEFA no-repeat right 0px;}</p><p>I was also able to set the text color of the sub tabs to red by modifying the style to:<br>##subTabs .x-tabs-strip .x-tabs-text {color:##ff8080;}</p><p>My question is, can i just alter the text/color of a specific subtab?  I tried using the same syntax as above, but does this not work since it's at the &lt;cflayoutarea&gt; level?  Can you only modify the tabs at the &lt;cflayout&gt; level?</p><p>The first sub tab is coded:<br>&lt;cflayoutarea title="Sub Tab 1" name="st1"&gt;</p><p>However the code below does not work...<br>##st1 .x-tabs-strip .x-tabs-text {color:##ff8080;}</p><p>Any help is greatly appreciated, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666799">34</a> by RBotha
		posted on 5/22/2008 at 4:50 PM
		</div>
		<div class="comment_text"><p>Are the tabs SEO friendly? Will a crawler see the content in all the tabs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666800">35</a> by Raymond Camden
		posted on 5/22/2008 at 5:59 PM
		</div>
		<div class="comment_text"><p>If the content is on the page then sure. If you use ajax to load the content in, then probably not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666802">36</a> by RBotha
		posted on 6/9/2008 at 6:11 PM
		</div>
		<div class="comment_text"><p>I have a search box that I put into my pages as an include. This include contains tabs with forms on each tab. When I submit the forms, it posts to the tab, not the main page.<br>Is there a "target" attribute that I can use to post to the main, or parent .cfm page? (outside of the tabs)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666803">37</a> by Raymond Camden
		posted on 6/9/2008 at 6:16 PM
		</div>
		<div class="comment_text"><p>If you want to do an ajax based form post, you have to either use cfform, or use ColdFusion.Ajax.submitForm()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666806">38</a> by nic
		posted on 6/27/2008 at 1:44 PM
		</div>
		<div class="comment_text"><p>hi ray</p><p>im using the spry tabbed pannels and from there i'm calling the cfnavigate function with onclick.</p><p>two lines from the js function:<br>var formUrl = "getcontent.cfm?tab="+id;<br>ColdFusion.navigate(formUrl,containerId,callbackHandler,errorHandler,method,formName);</p><p>in getcontent.cfm i'm using a cfswitch where i use the cfinclude tag to get the templates i want to include.</p><p>i'm somehow having problems with this includes (which are working just fine if called directly).</p><p>just one short question: is this the way to do it? if yes: how to control the caching of variables, the behaviour is somehow "unconstant"...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666805">39</a> by Raymond Camden
		posted on 6/27/2008 at 5:26 PM
		</div>
		<div class="comment_text"><p>Well, your comment is a bit off topic as I'm talking about the CF8 Tabs, not Spry tabs. I'm not aware of any caching issues - but you could add a cfheader to the top of getcontent to pass out no-cache type directives to the request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666807">40</a> by nic
		posted on 6/27/2008 at 5:33 PM
		</div>
		<div class="comment_text"><p>hi ray <br>thanks for the answer, and sorry for beeing offtopic.</p><p>&lt;cfontopic&gt;<br>  would you advise people to change the spry tabs to cf8 tabs, is there any reason in doing so compared to the effort?<br>&lt;/cfontopic&gt; ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666809">41</a> by Raymond Camden
		posted on 6/27/2008 at 6:18 PM
		</div>
		<div class="comment_text"><p>That's a great question nic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666808">42</a> by Dave
		posted on 8/15/2008 at 6:59 AM
		</div>
		<div class="comment_text"><p>Hi Ray, Great topic.  Quick question...</p><p>When you resize the page, the tabs resize a little then get pushed off screen.  Is there a way to get them to stack?</p><p>I have a page with a tree to the left of my tabs, when I resize the window I'm loosing the tabs and not getting a scroll bar or anything.  Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666812">43</a> by Raymond Camden
		posted on 8/15/2008 at 3:17 PM
		</div>
		<div class="comment_text"><p>Unfortunately, I can't think of anything to suggest. I would recommend upgrading to 801 if you haven't, as well as getting the latest cumulative hot fix. If none of these work, then definitely report a bug.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%3AeVByS_kB5f-F_Xb5m4vrRNXZtoA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/wish">http://www.adobe.com/go/wish</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666811">44</a> by Raymond Camden
		posted on 8/15/2008 at 3:18 PM
		</div>
		<div class="comment_text"><p>Oh, and of course, if none of the above work, you can always stop using the built in tabs for CF8 and switch to jquery or Spry. Not to say 'give up', but if you need tabs and need this fixed like, in the next twenty minutes, then it may be your best option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666810">45</a> by Dave
		posted on 8/15/2008 at 3:50 PM
		</div>
		<div class="comment_text"><p>Thanks for your time, not to push off topic, but if I move away from the cflayout tabs and move more towards spry, can I still use the cfdiv bind to call other pages?</p><p>It was that aspect of the development that drew me in this direction in the first place.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666816">46</a> by Raymond Camden
		posted on 8/15/2008 at 5:55 PM
		</div>
		<div class="comment_text"><p>I don't know. :) I'd just try. ;)</p><p>Don't forget that Spry also has a cfdiv type thing to dynamically load simple text/html into a container, much like cfdiv.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666817">47</a> by Cliff Freeman
		posted on 9/5/2008 at 5:55 PM
		</div>
		<div class="comment_text"><p>I'm trying to use the source attribute of a cflayoutarea tab. The suggested syntax doesn't seem to work in that the source is a cfc, the code: source="products.cfc?method=findproducts{categoryID=#categoryID#}" but the error message gives: The CATEGORYID parameter to the findproducts function is required but was not passed in and the AJAX logger gives: error:bind: Bind failed, element not found: categoryID=5 ! Either it knows the categoryID or it doesn't!!  Is there something I'm missing or is it a bug? Any help is much appreciated, thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666815">48</a> by Raymond Camden
		posted on 9/5/2008 at 5:59 PM
		</div>
		<div class="comment_text"><p>Your syntax is wrong. When doing binding, you do it around a variable that exists on the client, like a form field. You would only put it around the variable, like {categoryID}. Notice how you have</p><p>findprodcts{....}</p><p>That is not right. The proper syntax would be</p><p>products.cfc?method=findproducts&amp;categoryid={categoryid}</p><p>Your second issue is the use of # in the url. That also doesn't make sense. Bindings are client side. When the user views the page, #categoryid# is turned into a hard coded value. So even if you had the right syntax, you would have, if categoryid is 1:</p><p>products.cfc?method=findproducts&amp;categoryid={1}</p><p>Which again - doesn't make sense. If you do want a hard coded value, use the syntax above, minus the { and }.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666818">49</a> by Cliff Freeman
		posted on 9/5/2008 at 8:03 PM
		</div>
		<div class="comment_text"><p>Thanks Ray,<br>The tabs are dynamic as is the source from cfinvoke on a component and a cfloop on the query output, as follows  &lt;cflayoutarea title="#category#" refreshOnActivate="true" source="products.cfc?method=findproducts&amp;categoryID=#categoryID#"&gt;  The secret appears to have been the &amp; rather than the curly brackets - I don't think that is shown anywhere in the reference material! (Including all 3 volumes of the web application construction kit)  This now works; however it simply puts the data from the cfc in the layout area apparently ignoring any attempts at formatting or positioning.  cfoutput tags don't work/are ignored/table rows similarly - what's the secret this time?<br>Your help is much appreciated especially as I guess you're the other side of the world!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666819">50</a> by Raymond Camden
		posted on 9/5/2008 at 9:05 PM
		</div>
		<div class="comment_text"><p>Having written that part of the CFWACK, I beg to differ. ;) Although I don't think we have a specific example of a cflayoutarea talking to a source, the concept is the same. You need a URL. Your URL wasn't valid. Bindings are for values alone. You had that wrong as well. (Not trying to be picky here - rereading that it seems overly critical, so take it with kindness. ;)</p><p>So you said formatting is ignored. How are you doing formatting? Remember when you say that the source for a layoutarea is some other URL, then _that_ url must return the formatting. Ie, you can't just return "Ray", but "&lt;b&gt;Ray&lt;/b&gt;" if you want it bolded.</p><p>One more thing to remember. CFCs by default return content in WDDX format. In order to get plain text back to your layoutarea, you must add something else to your URL:</p><p>&amp;returnFormat=plain</p><p>This tells CF to not WDDX encode the result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666821">51</a> by Cliff Freeman
		posted on 9/5/2008 at 9:30 PM
		</div>
		<div class="comment_text"><p>Thanks for your help - not taken other than with deep gratitude! I still do think that there's no clear URL info; the dev guide gives source="/myapp/innersource/citywindow.cfm?cityname={inputform:city}" so my first attempts weren't too silly!!<br>All is much appreciated - I may well be back - a wet weekend looms, no point in being outside...<br>btw I get a returned mail message user unknown each time I send you a post!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666820">52</a> by Joe Finan
		posted on 9/24/2008 at 10:09 PM
		</div>
		<div class="comment_text"><p>I'm not sure why I can't figure this out and i didn't see another blog on this (Sorry if i missed it!)...  I have an app with a bunch of tabs, each with their own form.  I want to add an eventListener or something of that nature to the "onchange" attribute of the tab layout so the user is prompted before they switch to another to save their work if there were fields changed on the current tab...  Do you have an example of this functionality?  Even if they're prompted EVERY time regardless of fields being changed or not would get me one step closer.  Thanks in advance to Ray or anyone else that can offer up some insight, much appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666822">53</a> by Raymond Camden
		posted on 9/24/2008 at 10:18 PM
		</div>
		<div class="comment_text"><p>I'd try using ColdFusion.Layout.getTagLayout. This returns the Ext Tab object that drives the tabs. See if there is an API on there to handle tab changing. Ie, run this func when the tab changes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666825">54</a> by Joe Finan
		posted on 9/25/2008 at 6:04 PM
		</div>
		<div class="comment_text"><p>Yeah, i tried that, i get the tabset object, but I still haven't found a way to fire off a javascript function when you click on a tab.  The only documentation I've found has been either clicking on a link to switch tabs and call a function or calling functions when the tabs were built using javascript.  I would think this should be easy, yet my hours of reasearch have lead to nothing!  I wish there was an "onchange" event in the &lt;cflayoutarea&gt; tag, man that would have made life simple right now!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666824">55</a> by John Jarrard
		posted on 10/28/2008 at 11:21 PM
		</div>
		<div class="comment_text"><p>Did you ever get the onchange functionality working?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666823">56</a> by Nicolas Meier
		posted on 10/29/2008 at 11:03 AM
		</div>
		<div class="comment_text"><p>I just published my first little sprytabs tool. spry isn't really it... well with all the existing stuff which I needed to include it was quite a thing till it all work. What I really didn't managed to do is getting javascript functions via ajax to work. means I had to implent all the functions in the base file, so that they were already existing before getting the content via ajax. Here an example or two:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.motorradhandel.ch%2Fdetail%2Fdetail.cfm%3Fid%3D410751%26form_kundennr%3D416%26auswahl%3D1%3AZxuVigChNDr7eN97lKUaysRH494&amp;cuid=3321886" rel="nofollow noopener" title="http://www.motorradhandel.ch/detail/detail.cfm?id=410751&amp;form_kundennr=416&amp;auswahl=1">http://www.motorradhandel.c...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.motorradhandel.ch%2Fdetail%2Fdetail.cfm%3Fid%3D412701%26form_kundennr%3D1140%26auswahl%3D1%3A75iqtC9TLYmVDuW22TtHExh-6tA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.motorradhandel.ch/detail/detail.cfm?id=412701&amp;form_kundennr=1140&amp;auswahl=1">http://www.motorradhandel.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666826">57</a> by Marco Gil
		posted on 11/7/2008 at 6:19 PM
		</div>
		<div class="comment_text"><p>I have noticed that whenever using the TAB feature with &lt;cflayout&gt; that the rendering of the tabs is really slow in Firefox.  You can actually see all the tabs and the content of each tab for a split few seconds until it all gets loaded into the browser.</p><p>Does anyone have a work-around for this problem?  IE7 seems to handle it well but haven't tried it in previous versions.  Here's an example:</p><p>http://24.150.135.186/wehl/html/index.cfm?fuseaction=clubhouse.&amp;Team=Ducks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666827">58</a> by nic
		posted on 11/7/2008 at 7:22 PM
		</div>
		<div class="comment_text"><p>well who cares, that's just the js engine which is not fast enough yet. next gen. will be 100-1000 times quicker anyway (like chrome)...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666828">59</a> by James Murgolo
		posted on 5/10/2009 at 8:28 AM
		</div>
		<div class="comment_text"><p>I have noticed that the cf 8 ajax stuff is either buggy or slow.  I've been combining it with JQuery and getting better results across the board in all browsers.  It depends on the security and complexity trade offs.  Here's the link for the latest JQuery tabls - <a href="http://disq.us/url?url=http%3A%2F%2Fstilbuero.de%2Fjquery%2Ftabs_3%2F%3AsxgpPb-Cw6J4-D9IXwfbKML80cs&amp;cuid=3321886" rel="nofollow noopener" title="http://stilbuero.de/jquery/tabs_3/">http://stilbuero.de/jquery/...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666829">60</a> by Sid Maestre
		posted on 1/16/2010 at 4:21 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I'm working with some AJAX UI code written for ColdFusion 8 and I'm running into problems with ColdFusion 9.  The code</p><p>ColdFusion.Layout.hideTab('MyTabs','Edit');</p><p>Hides the tab, but not the area below the tab.  I define my tab like this....</p><p>&lt;cflayoutarea   name="Edit" initHide="true"  refreshOnActivate="true"  source="index.cfm?event=company.detail&amp;CFGRIDKEY={companyid}" title="Edit Company" /&gt;</p><p>showTab() works, but hideTab() does not.  Any suggestion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666831">61</a> by Raymond Camden
		posted on 1/17/2010 at 7:06 PM
		</div>
		<div class="comment_text"><p>Unfortunately no. Sounds like a bug. I'd report it. Worse comes to worse, switch to jQuery UI's tabs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666833">62</a> by Sid Maestre
		posted on 1/17/2010 at 8:46 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>In CF 8, hiding a tab, really hides it.  In CF 9 you  hide the tab, but you also need to explicitly call selectTab('TabName') function to change from the tab you've just hidden.</p><p>I'm upgrading a client from CF 8 to CF 9 and found the AJAX UI stuff has A LOT of problems.  :-(</p><p>Thanks for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666832">63</a> by Raymond Camden
		posted on 1/17/2010 at 8:49 PM
		</div>
		<div class="comment_text"><p>Be sure to report this at the bug tracker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666836">64</a> by John Manoah
		posted on 5/5/2010 at 1:20 PM
		</div>
		<div class="comment_text"><p>Hi Ray and others - Could one of you please let me know if there is a way to nest tabs in such a way that the sub tabs are arranged vertically? First of all, do we have to option of vertical tabs in cflayout? Is there a work-around?</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666837">65</a> by Raymond Camden
		posted on 5/5/2010 at 7:05 PM
		</div>
		<div class="comment_text"><p>I assume you checked the CFML Reference. :) There are no vertical tabs. You can put tabs on the top or bottom. That's pretty much it for tabs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666834">66</a> by Mik Muller
		posted on 7/14/2010 at 7:37 PM
		</div>
		<div class="comment_text"><p>I'm getting an error when selecting a tab on the main page from within a modal window. Is this a no-no or a known bug?</p><p>On the main page:</p><p>&lt;cflayout name="accordionDashboard" type="accordion"&gt;<br>&lt;cflayoutarea closable="true" name="tabCart" title="Your Current Project" selected="True"&gt;</p><p>In the modal window:</p><p>&lt;script&gt;<br>ColdFusion.Layout.selectTab('accordionDashboard','tabCart');<br>&lt;/script&gt;</p><p>Error:</p><p>Error processing Javascript in markup for element actualProductGrid: ColdFusion.Layout.selectTab: Tab layout not found, id: accordionDashboard.</p><p>"actualProductGrid" is the modal window id.</p><p>AAAAAHHHHH!!!!! --- funny how you always find the problem while typing it out on a message forum.</p><p>Because I'm using type="Accordion" the javascript function is selectAccordion, not selectTab.</p><p>ColdFusion.Layout.selectAccordion('accordionDashboard','tabCart');</p><p>Well, I'll still post this so other people can find it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666835">67</a> by Mik Muller
		posted on 7/14/2010 at 7:37 PM
		</div>
		<div class="comment_text"><p>I'm getting an error when selecting a tab on the main page from within a modal window. Is this a no-no or a known bug?</p><p>On the main page:</p><p>&lt;cflayout name="accordionDashboard" type="accordion"&gt;<br>&lt;cflayoutarea closable="true" name="tabCart" title="Your Current Project" selected="True"&gt;</p><p>In the modal window:</p><p>&lt;script&gt;<br>ColdFusion.Layout.selectTab('accordionDashboard','tabCart');<br>&lt;/script&gt;</p><p>Error:</p><p>Error processing Javascript in markup for element actualProductGrid: ColdFusion.Layout.selectTab: Tab layout not found, id: accordionDashboard.</p><p>"actualProductGrid" is the modal window id.</p><p>AAAAAHHHHH!!!!! --- funny how you always find the problem while typing it out on a message forum.</p><p>Because I'm using type="Accordion" the javascript function is selectAccordion, not selectTab.</p><p>ColdFusion.Layout.selectAccordion('accordionDashboard','tabCart');</p><p>Well, I'll still post this so other people can find it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666838">68</a> by David Jacobson
		posted on 9/15/2010 at 10:13 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Trying to do a simple thing that is escaping me for hours.  I have a cflayout tab style and then a cflayoutarea wihtin each tab.  I am having a problem getting the vertical scroll bar to appear when the data runs past the height.  I have the sty;e="overflow:auto;" on both the cflayout and cflayoutarea tags.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666840">69</a> by Raymond Camden
		posted on 9/15/2010 at 10:17 PM
		</div>
		<div class="comment_text"><p>As far as I know you _don't_ need to do anything to make the style overflow. I'd remove any CSS you have now to see if its conflicting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666839">70</a> by Kishan
		posted on 11/13/2010 at 2:48 PM
		</div>
		<div class="comment_text"><p>Hi,<br>I am using Tabs inside tab, <br>1) when i load the page all the tabs get loaded it takes long processing time<br>2) on click of any thing on page it becomes unresposive in IE 7 where it works fine in Mozila.</p><p>Please suggest</p><p>Regards<br>Kisah</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666841">71</a> by Raymond Camden
		posted on 11/13/2010 at 5:14 PM
		</div>
		<div class="comment_text"><p>@Kishan: Not sure what to suggest. Does it work better if you remove tabs? If the CF8 tabs aren't performant for you, there are many other options if you don't mind doing them "manually" as opposed to with cflayout.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666842">72</a> by Mik Muller
		posted on 11/15/2010 at 7:44 PM
		</div>
		<div class="comment_text"><p>I found tabs to be unusably slow. Accordions, for some reason, load quicker.  I'd only use tabs on an infrequently used page. I'm currently using accordions on a side bar that loads with every page and it works quick enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666843">73</a> by Michael
		posted on 5/27/2011 at 1:45 AM
		</div>
		<div class="comment_text"><p>Is there a way to change the text of a tab with javascript?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666845">74</a> by Raymond Camden
		posted on 5/27/2011 at 1:51 AM
		</div>
		<div class="comment_text"><p>I'd try messing with the style attribute of cflayoutarea, or tabheight perhaps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666846">75</a> by Prarthana
		posted on 2/3/2012 at 11:02 PM
		</div>
		<div class="comment_text"><p>I am new to ColdFusion....</p><p>I have two tabs on my form. When I refresh the page, I want the previously selected tab to still remain selected instead of the first one. <br>How can I find the current selected tab? <br>I gather from all the comments above that there isn't an 'OnChange' event for the tab. Should I be using jQuery UI Tabs instead of cflayout?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666847">76</a> by Raymond Camden
		posted on 2/4/2012 at 12:20 AM
		</div>
		<div class="comment_text"><p>Actually you can get the tab object (ColdFusion.Layout.getTagLayout) and then add an event listener. You would need to persist the choice in someway - perhaps via a cookie.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666848">77</a> by Tab newbie
		posted on 12/6/2012 at 3:56 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I have a massive form that is separated into tabs. However due to the size of the form the whole page is slowish to load. Is it possible to load the page with the just the first tab showing and have the content of the others load while the user is staring at the first tab, or maybe when he clicks on them. Kinda like a paginated cfgrid perhaps..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666849">78</a> by Raymond Camden
		posted on 12/6/2012 at 5:18 PM
		</div>
		<div class="comment_text"><p>Yes - the source attribute lets you delay loading it until the tab is activated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666852">79</a> by tab newbie
		posted on 12/6/2012 at 6:55 PM
		</div>
		<div class="comment_text"><p>I am actually going through the cflayout capabilities, and I just noticed what you said. As I understand it, instead of one parent form, I must have individual sub-forms in every tab which I can them submit en masse from the main part of the page using ColdFusion.Ajax.submitForm scripts. Is that right? Any strange behavior I should know of? Will the usuall cfinput validation messages show normally by using this method?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666851">80</a> by Raymond Camden
		posted on 12/6/2012 at 6:58 PM
		</div>
		<div class="comment_text"><p>I don't believe the built in validation will work, nor submitForm as you need to get multiple form blocks together at once. To be honest, I don't use, or recommend, the ColdFusion UI stuff at all anymore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666853">81</a> by waqas malik
		posted on 8/9/2014 at 3:07 AM
		</div>
		<div class="comment_text"><p>I am getting issues while using cflayout tab in CF9. I was working fine in CF8 but issues with CF8. selected="true" is not working in CF9. Is there any other way to pre-select a tab?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3161469075">
	<div>
		<img src="https://disqus.com/api/users/avatars/janatbeksharsheyev.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3161469075">82</a> by Janatbek Sharsheyev
		posted on 2/18/2017 at 12:16 AM
		</div>
		<div class="comment_text"><p>Hi, Raymond, Thanks for your post. but all your posts link point to the comparison page. I can't see demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3161646822">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3161646822">83</a> (In reply to <a href="#c_3161469075">#82</a>) by Raymond Camden
		posted on 2/18/2017 at 3:15 AM
		</div>
		<div class="comment_text"><p>I don't run ColdFusion anymore so I don't have live demos. Sorry. :\</p><p>Also - I strongly, strongly, strongly urge you not to use any of the CF UI features.</p></div>
	</div>
</div>
		