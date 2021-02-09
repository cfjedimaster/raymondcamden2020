
<div class="comment" id="c_1713729762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729762">1</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 2/16/2011 at 5:11 PM
		</div>
		<div class="comment_text"><p>Great stuff Ray. I love the v3 API, and wrote a custom tag a few months back that's on RIAForge (<a href="http://disq.us/url?url=http%3A%2F%2Fcfgmap.riaforge.org%3AZrDG25835HNR4cNelwm4b0iMDnU&amp;cuid=3321886" rel="nofollow noopener" title="http://cfgmap.riaforge.org">http://cfgmap.riaforge.org</a>). The whole thing is heavily documented, but basically it allows one to put some config options as tag attributes, and the tag will create the initialization of the map. It takes an array of object locations to plot on the map. Any locations that are geocoded can have their lat/lng's passed back to the server via a callback option in the tag to update those location's records in the db. There's even an example script that show's how to use the custom map object for getting directions from input and links, recentering the map on specific locations, and more.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.cutterscrossing.com%2Findex.cfm%2F2011%2F1%2F18%2FNew-Custom-Tag-for-Google-Maps-CFGMap%3Aww1MvpQsX9cFfene6Ih8ZQ-vupQ&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.cutterscrossing.com/index.cfm/2011/1/18/New-Custom-Tag-for-Google-Maps-CFGMap">http://blog.cutterscrossing...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729770">2</a> by Ed
		posted on 2/17/2011 at 12:30 AM
		</div>
		<div class="comment_text"><p>Great writeup.  Have you done any work with google maps where there were too many points in an area and you showed larger icons until you zoom in?  I haven't figured out how to implement something like that.  That would be a blog post I would be very interested in.  =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729765">3</a> by Raymond Camden
		posted on 2/17/2011 at 2:50 AM
		</div>
		<div class="comment_text"><p>@Steve: Very cool. Thats a good example of where custom tags still make a lot of sense.</p><p>@Ed: Um - not quite there yet. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729773">4</a> by Ed
		posted on 2/17/2011 at 5:25 AM
		</div>
		<div class="comment_text"><p>I had done some research on the too many markers issue some time ago but it looks like Google has recently documented some solutions for this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fmaps%2Farticles%2Ftoomanymarkers.html%3A0CsMMMSmsgmZqkf0d3yDNApcOp4&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/maps/articles/toomanymarkers.html">http://code.google.com/apis...</a></p><p>In particular MarkerClusterer looks like what I was envisioning.  We'll see how it pans out...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729771">5</a> by ja
		posted on 3/3/2011 at 11:41 PM
		</div>
		<div class="comment_text"><p>Very easy to follow..Ray. Just have one issue I cannot seem to resolve..<br>- I'm using your code on my Spry "Map Customer" Tab to display a single cust/address. <br>- I have everything working fine, except my query will not refresh &amp; grab the current customer?<br>- Here is my query: &lt;cfquery name="rsCAImap" datasource="salesPipeline"&gt;<br>SELECT wkRptID, wkRptAcqDate, wkRptCustName, wkRptBusAdd, wkRptCustCity, wkRptBusSt, wkRptBusZip<br>FROM tblWeeklyRpt<br>WHERE wkRptCd = 'CAI' AND tblWeeklyRpt.wkRptID = &lt;cfqueryparam value="#URL.id_com#" cfsqltype="cf_sql_numeric"&gt;<br>ORDER BY wkRptCustName ASC <br>&lt;/cfquery&gt;<br>-----------------------------------------<br>- Here is an example of my page URL: http://192.168.1.77/COE/salespipeline_wrd.cfm?wkRptID=1825<br>- Is there something I can change in your "Calling Code" below to make sure the Query "grabs" the URL parameter before running?<br>- Here is your "calling code": &lt;cfoutput query="rsCAImap"&gt;<br>                        &lt;tr&gt;<br>                          &lt;td bgcolor="##FFFFFF"&gt; #wkRptBusAdd#&lt;br/&gt;<br>                            #wkRptCustCity#, #wkRptBusSt# #wkRptBusZip#&lt;br/&gt;<br>                            &lt;cfset fulladdress = wkRptBusAdd &amp; " " &amp; wkRptCustCity &amp; ", " &amp; wkRptBusSt &amp; " " &amp; wkRptBusZip&gt;<br>     &lt;a href="##" onclick="showMap('#jsStringFormat(fulladdress)#');return false"&gt;Show Map&lt;/a&gt;&lt;/td&gt;<br>                        &lt;/tr&gt;<br>                      &lt;/cfoutput&gt;<br>--------------------------------------------<br>Thanks again for a cool, quick Google map implementation..<br>jaa</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729764">6</a> by Raymond Camden
		posted on 3/11/2011 at 4:18 AM
		</div>
		<div class="comment_text"><p>So you have 2 tabs then - tab one a list with links and tab 2 the map?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729766">7</a> by ja
		posted on 3/11/2011 at 6:23 AM
		</div>
		<div class="comment_text"><p>Ray, I figured it out.. just needed to reference my main form's query, didn't need the other query at all..<br>- To answer the question, Yes I have multiple SpryTabs, but only one main query, see image below:<br>- <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2FGoogle_Map_Tab.jpg%3AIbRoNCXO7ztKrkZv9hYH0PjWIjc&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/Google_Map_Tab.jpg">http://cerberus.clearwave.c...</a></p><p>By the way, I also tested your orders2.cfm Demo where it lists all customers down the page..<br>How does one alter that code to plot multiple addresses on a single map?</p><p>No cfmap in my CF7MX.. Thanks again.. ja</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729768">8</a> by Raymond Camden
		posted on 3/12/2011 at 12:44 AM
		</div>
		<div class="comment_text"><p>You need to use markers. A bit more work, but not terribly so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729769">9</a> by Adrian
		posted on 3/25/2011 at 2:29 AM
		</div>
		<div class="comment_text"><p>Hi</p><p>This is perfect for what I was thinking of doing.  Quick question is, how can I modify this to accept more than 1 location, e.g. if I wanted to show all accommodation for town?<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729777">10</a> by Raymond Camden
		posted on 3/27/2011 at 6:45 PM
		</div>
		<div class="comment_text"><p>You see how my code adds markers one at a time? You would just... well more. :) Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729767">11</a> by Irv
		posted on 4/7/2011 at 12:43 AM
		</div>
		<div class="comment_text"><p>Hi, Ray</p><p>Is there a way to use the API v3 to make a map black and white based on your code (above)?<br>I found some code I'm using and it works, but the code seems awfully 'verbose' (at least to me). I can provide the url if necessary.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729774">12</a> by Raymond Camden
		posted on 4/7/2011 at 12:54 AM
		</div>
		<div class="comment_text"><p>According to the API docs there is a style system you can use:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fmaps%2Fdocumentation%2Fjavascript%2Fmaptypes.html%23StyledMaps%3A7COzXOxqdqBS1OPMsh5uCPOWPUU&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/maps/documentation/javascript/maptypes.html#StyledMaps">http://code.google.com/apis...</a></p><p>It doesn't look terribly simple - but I believe this would be the way.</p><p>Of course - if you don't mind using the Static Map API (which I've discussed many times on the blog), you can use ColdFusion to download the map and make it BW pretty quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729772">13</a> by Irv
		posted on 4/7/2011 at 3:01 AM
		</div>
		<div class="comment_text"><p>Thank for the quick response!</p><p>I 'm using code very similar to the one that page, but I was looking for something a little simpler. Once again, thank you for your generosity. You're one of the true gems of the Coldfusion world!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729778">14</a> by Raymond Camden
		posted on 4/7/2011 at 5:21 PM
		</div>
		<div class="comment_text"><p>Going to do a blog entry today or tomorrow on simple/dumb cfimage tricks with Google Static Maps. I will probably forget to post back here - so check the RSS feed. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729779">15</a> by Dani
		posted on 4/19/2011 at 11:32 PM
		</div>
		<div class="comment_text"><p>Hi Ray, great post.  Do you have any examples using the Google Map API with cfwindow or cfdiv? I thought that re-writing my functions in this format: functionName = function(arguments) {function body} would solve the issue.  However, I still haven't had luck getting a google map to render in a cfdiv or cfwindow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729785">16</a> by Raymond Camden
		posted on 4/19/2011 at 11:39 PM
		</div>
		<div class="comment_text"><p>I'd probably just use cfmap if using cfdiv as well. In general, I don't mix CF's front end ajaxy stuff with "native" JS stuff very often. That being said - how is it failing for you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729782">17</a> by Dani
		posted on 4/20/2011 at 12:24 AM
		</div>
		<div class="comment_text"><p>Thanks for responding so quickly.  I borrowed some of your example code to illustrate the problem I'm having:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FkzSQvxqW%3AalNMgvuLuhNH-uDZn3shN7xxV6g&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/kzSQvxqW">http://pastebin.com/kzSQvxqW</a></p><p>It seems like the body onload function is not working within the cfwindow.  I tried calling initialize() using ColdFusion.Window.onShow().  I am not really sure where the problem is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729781">18</a> by Raymond Camden
		posted on 4/20/2011 at 12:34 AM
		</div>
		<div class="comment_text"><p>You need to move your script tag that loads google maps into your parent document.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729787">19</a> by grietje goedkoop
		posted on 5/20/2011 at 3:52 PM
		</div>
		<div class="comment_text"><p>I also tried with coldfusion.navigate and cfdiv to load cfmap. Tried to put load google maps in parent, in self. Nothing happens. Perhaps cfmaps or google map api doesn't work with iframe (tested that as well with no success), or cfdiv?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729784">20</a> by grietje goedkoop
		posted on 5/20/2011 at 4:12 PM
		</div>
		<div class="comment_text"><p>Sorry for the unnecessary post, found it...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729786">21</a> by Matt
		posted on 6/20/2011 at 8:54 PM
		</div>
		<div class="comment_text"><p>Thanks for the post.  Have you had any luck or have any knowledge how one would save the google map generated by javascript api v3 to someone's My Maps account AND how to use cf to save as pdf without resorting back to static maps.</p><p>I am trying to plot map with lots of markers and google does not give a print button or save to my maps with the map that is returned so was hoping you had some sneaky CF workarounds!</p><p>Thanks<br>Matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729788">22</a> by Raymond Camden
		posted on 6/21/2011 at 6:15 AM
		</div>
		<div class="comment_text"><p>As far as I know there is no way to go to PDF from the JS based map. As to your first question, I'd check the Maps API. That sounds like something that should be possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729789">23</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 6/21/2011 at 2:08 PM
		</div>
		<div class="comment_text"><p>@Matt -</p><p>Client side, you can programmatically add a button or link that has the "window.print();" javascript attached to it, allowing the user to easily print the output. Since the js api is client side, there really isn't a way to use cfpdf, or something else, to generate a pdf at the server. A user with Adobe Acrobat can manually change their print driver to create a pdf, but that's about the extent of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729790">24</a> by grietje goedkoop
		posted on 7/14/2011 at 6:01 PM
		</div>
		<div class="comment_text"><p>I experience a CFMAP mystery:</p><p>I have a page where there are 3 divs showing different parts of content. When you open the page div 1 is visible and the other 2 are hidden (style="display:none;").<br>You can click to open (toggle visibility) div 2 or 3.</p><p>In div 2 is a google map (cfmap script).</p><p>Now here's the mystery:<br>If Div 2 (with the cfmap) is NOT hidden initially, everything is fine</p><p>See: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cyprustripadvisor.com%2Fcyprus-company-detailstest.cfm%3Fcompany%3Dorexi-catering%3A5eSWIYbCBzzQp4baGVuahCaOCes&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cyprustripadvisor.com/cyprus-company-detailstest.cfm?company=orexi-catering">http://www.cyprustripadviso...</a><br>Here both div1 and 2 are initially visible.</p><p>If Div2 IS hidden initially and you click to toggle visibily of the divs the map has shifted left and up.<br>See: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cyprustripadvisor.com%2Fcyprus-company-detailstest2.cfm%3Fcompany%3Dorexi-catering%3AZmQxLy7rei1ypRw6-U0a0_GbArg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cyprustripadvisor.com/cyprus-company-detailstest2.cfm?company=orexi-catering">http://www.cyprustripadviso...</a><br>Here only div1 is initially visible. Click "LOCATION" to make visible.</p><p>Does anybody has a clue why this can happen? Or had a similar experience?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729791">25</a> by Raymond Camden
		posted on 7/24/2011 at 6:26 PM
		</div>
		<div class="comment_text"><p>When I tried your site and clicked LOCATION, _nothing_ was visible. I mean below your top header.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729796">26</a> by Raymond Camden
		posted on 7/24/2011 at 6:27 PM
		</div>
		<div class="comment_text"><p>I did a view source and saw this: Google Map License key is not defined.</p><p>Looks like your map key isn't rght.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729801">27</a> by grietje goedkoop
		posted on 7/25/2011 at 10:10 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I've found the cause of the problem. It has nothing to do with cfdiv/cfmap but it is a problem of google map in general. Google describe what to do on <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fmaps%2Fdocumentation%2Fjavascript%2Fbasics.html%23Async%3AKg2UToxH6Hd4v4OUAkglE2m5qCg&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/maps/documentation/javascript/basics.html#Async">http://code.google.com/apis...</a>.<br>I've sent an email to you with the details on 21-7.<br>Thanks a lot for your help,<br>Grietje</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729800">28</a> by Raymond Camden
		posted on 7/25/2011 at 3:28 PM
		</div>
		<div class="comment_text"><p>Ah ok - I see it. Still a bit buried in email. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729797">29</a> by Randy Smith
		posted on 2/8/2012 at 5:47 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I am still stuck in CF8 so no CFMAP for me, but I did use your examples and have expanded on them via other Google things I've found online.</p><p>One mystery though: how in the heck does one generate the tag that users can click to 'get directions'?   Nothing I try seems to want to bring that little rectangle up with the get directions link.</p><p>Thanks for any light you can shed on this.<br>RLS</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729795">30</a> by Raymond Camden
		posted on 2/8/2012 at 9:48 PM
		</div>
		<div class="comment_text"><p>Hmm - not quite sure what you mean. Obviously there is a Directions API, and I've blogged on this, but you're asking about a particular UI element. Do you have an example I can look at?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729794">31</a> by Randy Smith
		posted on 2/8/2012 at 11:39 PM
		</div>
		<div class="comment_text"><p>When you go to <a href="http://disq.us/url?url=http%3A%2F%2Fmaps.google.com%3Ahxt1lmq3WYIXvnlzfsQExherA7Q&amp;cuid=3321886" rel="nofollow noopener" title="maps.google.com">maps.google.com</a> and enter an address, they allow you to get the links. When you grab the HTML iFrame code and put it into your site and execute it, you get the white balloon box that has the "Directions" link in it (Example: <a href="http://disq.us/url?url=http%3A%2F%2Fhome.tmrme.mobi%2F%23%2Findex.cfm%3Fpageid%3D1747%29%3A69T8qkjxX5t9hMtWhStuWYclmfE&amp;cuid=3321886" rel="nofollow noopener" title="http://home.tmrme.mobi/#/index.cfm?pageid=1747)">http://home.tmrme.mobi/#/in...</a>.</p><p>This white rectangle box with the Directions, Search Nearby, and More links is what I was looking for.</p><p>While waiting, I have employed a pretty robust (and cool!) solution, and, yes, it took a lot of digging to figure it out.  It uses geolocation and works great in Chrome and IE9, less well on Firefox, and sucks on IE8. But that's beside the point.</p><p>So, unless there is a "widget" to produce the white rectangle box, I think I have a workable solution in place now.  Still, that would be so much easier and more compatible...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729798">32</a> by Raymond Camden
		posted on 2/10/2012 at 4:58 AM
		</div>
		<div class="comment_text"><p>Google Maps has an API for creating those popups. So you would need to check their docs on how to add the popups. I think - stress think - I did a blog post demo showing it. If not though it's not that difficult.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729804">33</a> by Randy Smith
		posted on 2/10/2012 at 5:17 AM
		</div>
		<div class="comment_text"><p>Thanks - I looked all over for it at the time but to no avail.  When I tested the early version of the site, I found a very limiting factor was that not all of the people who tested the site had geolocation capabilities or they chose to turn them off.  That means the app is basically worthless.</p><p>So, I switched to generating the iFrame code the way Google does so at least most phones would be able to see a map. When I did it this way, that neat little directions link showed up just fine.</p><p>Not anywhere near as cool as what I had spent a good 12+ hours writing, but usability was primo as this is targeted for the lcd.</p><p>Thanks for your reply!<br>RLS</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729803">34</a> by Randy Smith
		posted on 2/10/2012 at 5:19 AM
		</div>
		<div class="comment_text"><p>Oh - I take that back - I could generate the popups, but the "directions" link was not a widget you could easily insert. I had to write my own "Show Directions", which turned out quite awesome.  Unfortunately, functionality beat awesome this time. RLS</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729802">35</a> by Raymond Camden
		posted on 2/10/2012 at 5:30 AM
		</div>
		<div class="comment_text"><p>You can test for Geolocation support. If you do that, you can then show/not show the Directions link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729799">36</a> by Randy Smith
		posted on 2/10/2012 at 6:08 AM
		</div>
		<div class="comment_text"><p>Thanks - yes, I did know that, unfortunately my Java/JavaScript skills are so poor that I would have spent another 6 hours just figuring that out, and I needed to get this out the door. Fortunately, the solution I implemented is perfect for what is needed...this time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729806">37</a> by Misty
		posted on 1/8/2013 at 10:07 AM
		</div>
		<div class="comment_text"><p>Hi ray, My Situation is here bit different, I need the following items to be searched in the Google Map:</p><p>Address,City,State,Zipcode,County,SubDivision, Lat, Lon</p><p>I checked all CFC's of yours at riaforge and others but none is providing county and subdivision</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729807">38</a> by Raymond Camden
		posted on 1/9/2013 at 1:25 AM
		</div>
		<div class="comment_text"><p>All I can suggest is looking at Google's APIs and see if any support geocoding of county or subdivision. I'd be a bit surprised if subdivision was supported.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729808">39</a> by Jose Rico
		posted on 8/14/2013 at 10:38 PM
		</div>
		<div class="comment_text"><p>What if I need to show in a MAP the available spaces in a new Township? (I'm working for a Real Estate Company in this moment).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729816">40</a> by Raymond Camden
		posted on 8/14/2013 at 10:58 PM
		</div>
		<div class="comment_text"><p>Can you use markers? Or are you trying to do shapes? Google Maps has a shapes API that lets you draw ad hoc shapes for stuff like this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729811">41</a> by Asad
		posted on 5/24/2014 at 6:16 PM
		</div>
		<div class="comment_text"><p>Hello Raymond<br>Thanks for nice explanation. I am wondering to know is it possible to specify two or more address here and find out the distance and travel time like we did with google maps ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729812">42</a> by Raymond Camden
		posted on 5/24/2014 at 6:28 PM
		</div>
		<div class="comment_text"><p>Yes, Google has a Directions API that will do this. I've blogged on it too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729813">43</a> by Asad
		posted on 5/24/2014 at 6:57 PM
		</div>
		<div class="comment_text"><p>Hello Raymond<br>I am unable to find your blog on Direction API will you please provide the url here <br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729817">44</a> by Raymond Camden
		posted on 5/25/2014 at 12:51 AM
		</div>
		<div class="comment_text"><p>Go to the search, type directions api. I saw them immediately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729814">45</a> by Marlene Buffa
		posted on 9/6/2014 at 2:00 AM
		</div>
		<div class="comment_text"><p>Thanks Ray!<br>Worked like a charm the first try!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4844213831">
	<div>
		<img src="https://disqus.com/api/users/avatars/sameenseher.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4844213831">46</a> by Sameen Seher
		posted on 3/23/2020 at 12:34 PM
		</div>
		<div class="comment_text"><p>(can any one please guide why it is rendering this way? div height set properly) <br><a href="https://uploads.disquscdn.com/images/5b7a50d053225a93c7ae26060930e3bfe89d6da252c97a567da9a490f9aaa4cd.jpg" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/5b7a50d053225a93c7ae26060930e3bfe89d6da252c97a567da9a490f9aaa4cd.jpg">https://uploads.disquscdn.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_4844255998">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4844255998">47</a> (In reply to <a href="#c_4844213831">#46</a>) by Raymond Camden
		posted on 3/23/2020 at 1:15 PM
		</div>
		<div class="comment_text"><p>Can you share the complete code, even better if it's online where we can run it?</p></div>
	</div>
</div>
		