
<div class="comment" id="c_1713666536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666536">1</a> by Scott P
		posted on 6/7/2007 at 8:15 AM
		</div>
		<div class="comment_text"><p>Appears to not work if you are using ports in urls: such as 127.0.0.1:83/playground/index.cfm.</p><p>The content is there but no formatting and and js error about Error: ColdFusion is not defined<br>Source File: http://127.0.0.1:83/play/layout.cfm<br>Line: 28</p><p>Works if I take it out of the vhost.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666539">2</a> by Juerg Anderegg
		posted on 6/7/2007 at 11:18 AM
		</div>
		<div class="comment_text"><p>Has anybody noticed that this Ajax stuff doesn't create XHTML conform output? Just start your template with the DOCTYPE below and see, what happens...</p><p>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;</p><p>Maybe this is just a RC issue and will be fixed in the final CF8? I hope so!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666535">3</a> by Juerg Anderegg
		posted on 6/7/2007 at 12:54 PM
		</div>
		<div class="comment_text"><p>ups the above line has been truncated; here's the rest:</p><p>l.dtd"&gt;</p><p>so that the end looks like ...DTD/xhtml1-transitional.dtd"&gt;</p><p>just like Transitional HTML should look like...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666537">4</a> by Lola LB
		posted on 6/7/2007 at 5:32 PM
		</div>
		<div class="comment_text"><p>I wonder how it would go through a screenreader for the blind . . .</p><p>And Jurgen, have you filed a bug report?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666556">5</a> by Andy Matthews
		posted on 6/7/2007 at 5:43 PM
		</div>
		<div class="comment_text"><p>There's absolutely NO reason that Adobe should be writing anything other than compliant xHTML code. Using these tags, you should be able to validate a page perfectly against the W3 validator.</p><p>I do hope they fix it in the final release.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666559">6</a> by Juerg Anderegg
		posted on 6/7/2007 at 6:48 PM
		</div>
		<div class="comment_text"><p>Found something in the release notes for RC1: Known Issues with this Release; Number 67448 =&gt;</p><p>If you specify a DOCTYPE at the top of a page that includes a cflayout tag with type="border", the cflayout tag must have a style attribute with a height property; otherwise, the layout contents does not display properly.</p><p>If I validate the page through thw w3c-validator; I get two more error messages in the line</p><p>_cf_loadingtexthtml = "&lt;div align='center'&gt;&lt;img src='/CFIDE/scripts/ajax/images/loading.gif'/&gt; Loading... &lt;/div&gt;";</p><p>&gt;&gt; document type does not allow element "div" here.<br>and<br>&gt;&gt; required attribute "alt" not specified.</p><p>Juerg</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666558">7</a> by Dan G. Switzer, II
		posted on 6/7/2007 at 8:21 PM
		</div>
		<div class="comment_text"><p>@Juerg:</p><p>Truthfully, this is were the validator code fails. The problem is validator doesn't understand that the &lt;div&gt; tag is actually within a JavaScript string--and not within the actual DOM element.</p><p>You can work around this by actually creating DOM elements using native DOM creation methods (document.createElement("div").)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666557">8</a> by Gareth
		posted on 6/7/2007 at 9:15 PM
		</div>
		<div class="comment_text"><p>Anything special you have to add to get this to work?  I just cut and pasted the code from the top box over at HostMySite and I got<br>ColdFusion is not defined<br>};ColdFusion.Event.registerOnLoad(_cf_layout_init_1181236422880);<br><a href="http://disq.us/url?url=http%3A%2F%2Fh127882.cf8beta.com%2Ftest_layout.cfm%3ArkLcF7pDlO8VqxGQZRxX57lzzKc&amp;cuid=3321886" rel="nofollow noopener" title="http://h127882.cf8beta.com/test_layout.cfm">http://h127882.cf8beta.com/...</a><br>Line 78<br>and<br>ColdFusion is not defined<br>ColdFusion.Ajax.importTag('CFLAYOUT-BORDER');<br><a href="http://disq.us/url?url=http%3A%2F%2Fh127882.cf8beta.com%2Ftest_layout.cfm%3ArkLcF7pDlO8VqxGQZRxX57lzzKc&amp;cuid=3321886" rel="nofollow noopener" title="http://h127882.cf8beta.com/test_layout.cfm">http://h127882.cf8beta.com/...</a><br>Line 18</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666561">9</a> by Raymond Camden
		posted on 6/7/2007 at 10:03 PM
		</div>
		<div class="comment_text"><p>I've seen a lot of people post with issues on HostMySite and the Ajax stuff. Check the other entries for how they solved it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666565">10</a> by SC
		posted on 6/7/2007 at 10:19 PM
		</div>
		<div class="comment_text"><p>Gareth,</p><p>Contact HostMySite support for adding CFIDE mapping for your site. It would fix AJAX layout issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666564">11</a> by Juerg Anderegg
		posted on 6/7/2007 at 11:16 PM
		</div>
		<div class="comment_text"><p>@Dan: Actually, it's ColdFusion that is creating this line of code; I don't think that I can take my hands on that code snipplet... I saw, that this cflayout stuff creates quite a lot additional code; includes...</p><p>Juerg</p><p>@Gareth: Had the same on my server; the CFIDE mapping solved it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666566">12</a> by David Whiterod
		posted on 6/8/2007 at 8:53 AM
		</div>
		<div class="comment_text"><p>I love this CF 8 stuff!</p><p>I have an complex (frames-based) app. that I have been looking forward to re-working in a frames-free way.</p><p>I have struggling with a way to re-work the coding to retain the frames version (for older installs) while breaking free from frames - the biggest stumbling block was the 'whole' page nature of the application's templates.</p><p>I'm glad to see cflayoutarea accepts a (full file) source. So it now looks like the same templates can serve both a frameset and a Ajax setup!</p><p>cheers</p><p>David</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666571">13</a> by Gareth
		posted on 6/8/2007 at 4:19 PM
		</div>
		<div class="comment_text"><p>Thanks for all the help everyone!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666568">14</a> by Andrea
		posted on 6/9/2007 at 8:13 PM
		</div>
		<div class="comment_text"><p>Nice but if the rays code is surrounded with normal &lt;html&gt; &lt;body&gt; tags the layout completely disappear with IE7 and is only partial visible in Firefox.<br>That's a big bug or only something wrong with my beta??</p><p>Thanks</p><p>Andrea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666573">15</a> by Andrea
		posted on 6/9/2007 at 8:18 PM
		</div>
		<div class="comment_text"><p>Solved with attribute style="height:500px;" but the code is still dirty against a w3c validator.</p><p>What you think ray about this problem?</p><p>Andrea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666570">16</a> by Raymond Camden
		posted on 6/11/2007 at 5:25 PM
		</div>
		<div class="comment_text"><p>I would just tell you to report it to Adobe so they can try to fix it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666572">17</a> by Patrick Whittingham
		posted on 6/15/2007 at 3:25 PM
		</div>
		<div class="comment_text"><p>Raymond -</p><p>  Can you give a demo page, so I can try it out.</p><p>Pat</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666574">18</a> by Raymond Camden
		posted on 6/15/2007 at 4:41 PM
		</div>
		<div class="comment_text"><p>Patrick, you can always download CF8 and try it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666569">19</a> by SC
		posted on 6/15/2007 at 9:08 PM
		</div>
		<div class="comment_text"><p>Patrick, you can sign up for free CF8 Beta account at <a href="http://disq.us/url?url=http%3A%2F%2FHostMySite.com%3AFRRWvXOBaAqJK5tgxCGpNvFXITE&amp;cuid=3321886" rel="nofollow noopener" title="HostMySite.com">HostMySite.com</a>. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.hostmysite.com%2Fcf8%3AEB_dIPCYv3wTHjpJ7CVtabrVr18&amp;cuid=3321886" rel="nofollow noopener" title="http://www.hostmysite.com/cf8">http://www.hostmysite.com/cf8</a>. You can try Ray's example code. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666576">20</a> by Shane M
		posted on 6/29/2007 at 10:54 AM
		</div>
		<div class="comment_text"><p>Well... i was very excited about the new cflayout stuff... but i just can't get it to work in IE7... am I missing something? i used the exact sample on this page (one with collapsible=true) and can't get it to look like that. anyone else get it to work in IE7?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666578">21</a> by Shane M
		posted on 6/29/2007 at 11:06 AM
		</div>
		<div class="comment_text"><p>i guess it helps to add the cfide folder to as an virtual directory. then it works great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666580">22</a> by Devon
		posted on 8/25/2007 at 1:07 AM
		</div>
		<div class="comment_text"><p>This stuff is fun and a lot quicker than defining layouts in css...although I played and played and ended up doing it the "old" manual stylesheet way anyhows. My main problem was getting rid of the borders. No matter where i set border to 0px or to my background color...they wont go away?anybody else experienced this or am I just overlooking something obvious?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666575">23</a> by Ken
		posted on 10/10/2007 at 7:07 PM
		</div>
		<div class="comment_text"><p>I started messing around with the CFLayout commands. I don't see how you can hide the borders. I like the layout feature but I don't want my site to look like a bunch of gray boxes all the time. I tried the style attribute on the border but it doesn't seem to work for me. I can't seem to hide the default gray border or change it's color.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666577">24</a> by Raymond Camden
		posted on 10/10/2007 at 7:12 PM
		</div>
		<div class="comment_text"><p>Well the border _must_ be there - that is part of the feature. But I'm sure you can change the CSS. Maybe try Firebug or the Web Dev toolbar to see what classes are being used.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666585">25</a> by Charlie Lu
		posted on 6/6/2008 at 5:17 AM
		</div>
		<div class="comment_text"><p>Came across a weird bug while testing the CFLAYOUTAREA function. Not sure if it's my code or there's a bug in the Tab layout. Basically, I have a Tab layout, within which there's a split LEFT and CENTER. Clicking on links in the LEFT pane reloads the CENTER content using Coldfusion.navigate. Now the interesting part: the reloading of the CENTER content within a tab stops working once you have advanced to tabs to the right of a given tab. Probably easier to see in the attached 3-part example. I've taken out all the queries and plug in simple string-based logic for easy replication of the bug. Been trying different ways but to no avail.. Please advise. Thanks.</p><p>&lt;!-- 1.cfm ---&gt;<br>&lt;cfajaximport tags="cfform,cftree,cfgrid,cftooltip,cflayout-border,cflayout-tab"&gt;<br>&lt;center&gt;<br>&lt;br&gt;<br>&lt;table width="750" cellpadding="0" cellspacing="0"&gt;<br>&lt;tr&gt;&lt;td&gt;<br>&lt;cflayout type="Tab" tabheight="600"&gt;<br>	&lt;cflayoutarea title="MMK Funds" source="2.cfm?categoryID=1" refreshOnActivate="true"&gt;&lt;/cflayoutarea&gt;<br>	&lt;cflayoutarea title="Income Funds" source="2.cfm?categoryID=2" refreshOnActivate="true"&gt;&lt;/cflayoutarea&gt;<br>	&lt;cflayoutarea title="Allocation Funds" source="2.cfm?categoryID=3" refreshOnActivate="true"&gt;&lt;/cflayoutarea&gt;<br>	&lt;cflayoutarea title="Equity Funds" source="2.cfm?categoryID=4" refreshOnActivate="true"&gt;&lt;/cflayoutarea&gt;<br>&lt;/cflayout&gt;<br>&lt;/td&gt;&lt;/tr&gt;<br>&lt;/table&gt;<br>&lt;/center&gt;</p><p>&lt;!--- 2.cfm ---&gt;<br>&lt;cfparam name="url.categoryID" default=1&gt;<br>&lt;cfif isdefined("url.categoryID")&gt;<br>	&lt;cfset categoryID = val(url.categoryID)&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfoutput&gt;<br>&lt;cflayout type="border"&gt;<br>	&lt;cflayoutarea  position="left" title="Funds" closable="true" collapsible="true" size="100" maxsize="300" splitter="True" &gt;<br>		&lt;cfloop from="1" to="10" index="i"&gt;<br>			&lt;br&gt;&lt;a href="javascript:ColdFusion.navigate('3.cfm?fundID=#evaluate(10*(categoryID-1)+i)#','centerBox')"&gt;&lt;font color="gray"&gt;Fund #categoryid#-#i#&lt;/font&gt;&lt;/a&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cflayoutarea&gt;<br>	&lt;cflayoutarea position="center" name="centerBox"&gt;&lt;span class="tableFont"&gt;&lt;br&gt;&lt;br&gt;   Click on a fund to see its manager(s).&lt;/span&gt;&lt;/cflayoutarea&gt; <br>&lt;/cflayout&gt;<br>&lt;/cfoutput&gt;</p><p>&lt;!--- 3.cfm ---&gt;<br>&lt;cfparam name="fundID" default=0&gt;<br>&lt;br&gt;<br>&lt;cfoutput&gt;<br>This is manager #fundID#&lt;br&gt;<br>&lt;cfif fundID mod 2 eq 1&gt;<br>	Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.<br>&lt;cfelse&gt;<br>	Lorem Ipsum is simply dummy text of the printing and typesetting industry.				<br>&lt;/cfif&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666584">26</a> by Raymond Camden
		posted on 6/6/2008 at 10:43 PM
		</div>
		<div class="comment_text"><p>I see nothing specifically wrong with your code (except for evaluate, you dont need it). If it doesn't work in 801, you should file a bug report w/ adobe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666583">27</a> by Charlie Lu
		posted on 6/7/2008 at 9:09 AM
		</div>
		<div class="comment_text"><p>Hi Raymond - Thanks for reviewing the code. I'll check to see if I have 801 (probably do since I just downloaded in a few weeks ago) and file a bug report if it's still a problem. Thanks!</p><p>- Charlie</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666582">28</a> by Raymond Camden
		posted on 6/7/2008 at 5:08 PM
		</div>
		<div class="comment_text"><p>Also make sure you have the CHF (Cumulative Hot Fix)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666586">29</a> by Jeff Hunter
		posted on 9/6/2008 at 12:20 AM
		</div>
		<div class="comment_text"><p>First off thanks for running and excellent blog. I tried your demo above and it works. However once I modify the link in the CodlFusion.navigate tag to a full URL I get a javascript error. I want to use this type layout to replace a frameset and basically make the left column my nav and when they click the link it loads the content into the center layoutarea. For local pages on my site it works fine but I want to load a couple of pages that are not on my site. The error message is "Error Code -1 Error processing Javascript in markup for element center". That doesn't mean much to me anyway.</p><p>Here is the exact line of code I am using which generates the javascript error.<br>&lt;code&gt;&lt;a href="javaScript:ColdFusion.navigate('<a href="http://disq.us/url?url=http%3A%2F%2Fwww.apple.com%3AW-YLTE3c4p3XyiyRBi3z8Mvd384&amp;cuid=3321886" rel="nofollow noopener" title="http://www.apple.com">http://www.apple.com</a>','center')"&gt;Apple&lt;/a&gt;&lt;br /&gt;&lt;/code&gt;<br>I have tried it on my site which uses CF8 on a Linux server and on the CF8 dev edition installed locally on my computer and both give me the same error. Does the CodlFusion.navigate only work with files on the same server?</p><p>Thanks<br>Jeff</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666590">30</a> by Raymond Camden
		posted on 9/6/2008 at 12:27 AM
		</div>
		<div class="comment_text"><p>You can't load content from another URL into your page like that. It is a browser restriction. Instead, hit a CFM on your server that uses CFHTTP to hit the remote server and output the contents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666588">31</a> by Mugs
		posted on 11/4/2008 at 12:55 PM
		</div>
		<div class="comment_text"><p>the borders can be changed, add this at the top of the page and give any colour you want for the cflayout type="border"</p><p>.x-layout-panel {<br>    position: absolute;<br>    border: 1px solid #ffffff;<br>    overflow: hidden;<br>    background-color: white;<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666587">32</a> by matt
		posted on 1/15/2009 at 4:48 AM
		</div>
		<div class="comment_text"><p>sorry about the repeat, but i figured this might be a better place for this question:</p><p>with the ajax ui stuff in coldfusion (specifically &lt;cflayout type="tab"&gt; in my case), is there a way to use window.onload events?</p><p>i am attempting to use a script for zebra striping tables, but i'm having a hard time nailing down exactly where to put this code to make it work.</p><p>as it stands, it is almost as if the browser never "sees" the html behind the content because if you view source on a tabbed cflayout, there is no source there, just empty divs for every tab. this is clearly impossible though, because the content is rendered.</p><p>can anyone help me understand what is going on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666591">33</a> by Raymond Camden
		posted on 1/15/2009 at 7:07 AM
		</div>
		<div class="comment_text"><p>@matt - see the docs for AjaxOnLoad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666593">34</a> by Gers
		posted on 5/6/2009 at 8:22 PM
		</div>
		<div class="comment_text"><p>Hey there, thanks for all your work.</p><p>Sorry, I'm pretty new at this so I apologize if it's a dumb question...<br>How do I change the path of the /CFIDE links if the page isn't in the root directory of coldfusion admin?</p><p>In the page source, it's trying to reference <a href="http://disq.us/url?url=http%3A%2F%2Fwww.url.com%2FCFIDE%2Fscripts%2Fajax%2Fetc%3A0ZjtwkklIlloSb6Rlb4J6CZ558o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.url.com/CFIDE/scripts/ajax/etc">http://www.url.com/CFIDE/sc...</a>...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666596">35</a> by Raymond Camden
		posted on 5/7/2009 at 3:36 AM
		</div>
		<div class="comment_text"><p>Look at the cfajaximport tag. It lets you define the scriptsrc for other ajax stuff on the page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666597">36</a> by Gers
		posted on 5/7/2009 at 4:35 AM
		</div>
		<div class="comment_text"><p>Thanks very much for the response, I appreciate it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666598">37</a> by Mugs
		posted on 5/7/2009 at 7:21 AM
		</div>
		<div class="comment_text"><p>hey gers,</p><p>what i usually do is, upload the scripts folder, which i copied from my local machine. And link to the folder which i uploaded, it's easier.</p><p>but you can also ask you hosting provider to map the cfide folder for you. HOOstMysite does it for you, but i don't think godaddy hosting does</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666599">38</a> by Mike Letson
		posted on 5/16/2009 at 9:25 PM
		</div>
		<div class="comment_text"><p>I have a template with 4 cfLayOutArea tags. I have forms in each one of them.  When I save contents of one tab via an AJAX call, I then do this as the final JavaScript line: ColdFusion.navigate('updateContactInfo.cfm', 'phone') where updateContactInfo is the template that is loaded to display the tab layout and "phone" is the name of the tab I wish to re-display with the new update form info.</p><p>It works except that I always get a least one other tab's content below the one I want to re-display.</p><p>Help ?</p></div>
	</div>
</div>
		