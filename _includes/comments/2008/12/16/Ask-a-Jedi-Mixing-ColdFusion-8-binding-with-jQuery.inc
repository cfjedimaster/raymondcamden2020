
<div class="comment" id="c_1713710745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710745">1</a> by Josh
		posted on 12/16/2008 at 8:04 PM
		</div>
		<div class="comment_text"><p>I ended up just doing an ajax call out to a page that would have just the select box on it and the call for the query. That way I could pass in the variable from the one select box and still have my "View All" option. I still wish their was a better way to set it up just using cf8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710749">2</a> by todd sharp
		posted on 12/16/2008 at 8:04 PM
		</div>
		<div class="comment_text"><p>You might have tried rolling your own ajaxproxy to populate the select and then added the option with jQuery in the callback function.  But I think at this point I'd just switch out the CF ajax for pure jQuery or at the very least just add the item on the server side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710750">3</a> by Josh
		posted on 12/16/2008 at 8:49 PM
		</div>
		<div class="comment_text"><p>Another option I know that would be easy but I could never get it to work right. Would be to do a Query Add Row with the "View all" option in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710760">4</a> by Justin Carter
		posted on 12/17/2008 at 1:29 AM
		</div>
		<div class="comment_text"><p>Josh, instead of QueryAddRow() you would probably have to use a Query of a Query with a SQL UNION statement to append / prepend your static row to the rest of the query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710761">5</a> by Kate
		posted on 2/13/2009 at 10:56 PM
		</div>
		<div class="comment_text"><p>I believe I have fully copied your example, but I must have done something wrong.  I only get the "View All" option, and niether of the states.</p><p>Eventually I'd like to get this problem solved: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fwebforums%2Fforum%2Fmessageview.cfm%3Fcatid%3D3%26threadid%3D1424980%26forumid%3D1%3AsRyjv_7AnVF2ddletSbZJq0lapo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/webforums/forum/messageview.cfm?catid=3&amp;threadid=1424980&amp;forumid=1">http://www.adobe.com/cfusio...</a> and was directed that this would be a good place to start.  Any ideas on why I would not be getting subsequent options?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710765">6</a> by Raymond Camden
		posted on 2/13/2009 at 11:25 PM
		</div>
		<div class="comment_text"><p>What does Firebug tell you? Is the Ajax request fired?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710767">7</a> by Kate
		posted on 2/17/2009 at 12:30 AM
		</div>
		<div class="comment_text"><p>Firebug says there's an exception, but I honestly have no idea what to do about it.  I don't think the Ajax request is getting fired because AJAX Logger never updates when I change options, and no values for the second cfselect ever show up in the AJAX Logger either.</p><p>Firebug error:<br>[Exception... "'SyntaxError: parseJSON' when calling method: [nsIDOMEventListener::handleEvent]"  nsresult: "0x8057001c (NS_ERROR_XPC_JS_THREW_JS_OBJECT)"  location: "JS frame :: chrome://firebug/content/spy.js :: onHTTPSpyReadyStateChange :: line 483"  data: no]<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.myurl.com%2FCFIDE%2Fscripts%2Fajax%2Fpackage%2Fcfajax.js%3AfxG6oM3n5IDO011Z0kKDNIgQQ-A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.myurl.com/CFIDE/scripts/ajax/package/cfajax.js">http://www.myurl.com/CFIDE/...</a><br>Line 103</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710766">8</a> by Miked
		posted on 2/20/2009 at 4:01 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I have a Cf8 form that has tabs on it.  Within one of the tabs i am trying to get the jquey tablesorter() plugin to work.  I have this plugin successfully working on all of my other pages, however it does not work when it is within the cflayoutarea.  Is there some special syntax in need to use in this situation?</p><p>I have tried adding the javascript <br>$(document).ready(function() { $("#act").tablesorter (); } );</p><p>on the main page and in the cflayout tab. neither place works.  Also the code for the cflayout area is called with the source attribute on the cflayoutarea tab.</p><p>Thanks, Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710773">9</a> by Raymond Camden
		posted on 2/20/2009 at 6:59 AM
		</div>
		<div class="comment_text"><p>Instead of document.ready, try using ajaxOnLoad. See CFML Ref for syntax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710770">10</a> by Miked
		posted on 2/20/2009 at 7:45 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>That worked great, thanks for the help</p><p>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710775">11</a> by Niall
		posted on 3/9/2009 at 2:00 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I had a similar issue where I wanted to prepend a row in my combo options list with "Please select...".</p><p>I wasn't bound to using jQuery to solving this - so instead my solution was to use the MS SQL UNION Statement to select a blank row, of the same column select list, before my actual query:</p><p>&lt;code&gt;<br>SELECT	0 AS userID, 'Please select...' AS userForename, ' ' AS userSurname, ' ' AS userEmailAddress<br>FROM	tblUsers</p><p>UNION</p><p>SELECT	userID, userForename, userSurname, userEmailAddress<br>FROM	tblUsers<br>INNER JOIN tblUserGroupRlnshps ON tblUsers.userID = tblUserGroupRlnshps.userGroupRlnshpsUserID<br>WHERE	tblUsers.userIsEnabled = 1<br>etc... etc...<br>&lt;/code&gt;</p><p>This way - the database is doing all the work and I don't need to manipulate my result set in ColdFusion.</p><p>Thanks,<br>Niall.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710772">12</a> by Ron West
		posted on 3/17/2009 at 8:21 PM
		</div>
		<div class="comment_text"><p>I am not sure if this appropriate here but I will try anyways.  I am calling a function in a cfc with the returnformat="json" using getJSON.  I continue to get an "invalid label" error in Firebug.  As a note I am doing the getJSON call to a different subdomain:</p><p>jQuery("document").ready( function(){<br>			jQuery.getJSON("<a href="https://disq.us/url?url=https%3A%2F%2Fnew.american.edu%3Ap55UlbVo0-iYYC93uEZK--4CyUE&amp;cuid=3321886" rel="nofollow noopener" title="https://new.american.edu">https://new.american.edu</a>#request.site.csAppsWebURL#pt_profile/com/utils.cfc?jsoncallback=?", { method: "getProfileData", userID: "rwest" },<br> 				function(_data){<br>    				// reset the link</p><p>			});<br>		});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710774">13</a> by Raymond Camden
		posted on 3/17/2009 at 8:25 PM
		</div>
		<div class="comment_text"><p>Is your method returning json data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710776">14</a> by Ron West
		posted on 3/17/2009 at 8:42 PM
		</div>
		<div class="comment_text"><p>My function deceleration is:</p><p>&lt;cffunction name="getProfileData" access="remote" returntype="struct" returnformat="json"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710771">15</a> by Raymond Camden
		posted on 3/17/2009 at 8:46 PM
		</div>
		<div class="comment_text"><p>ok, so if in your callback you do console.dir(_data), do you see what you think you should see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710781">16</a> by Ron West
		posted on 3/17/2009 at 8:49 PM
		</div>
		<div class="comment_text"><p>I think the error is occurring prior to the function call the error.  However in firebug under the error is the data structure as I would expect it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710777">17</a> by Ron West
		posted on 3/17/2009 at 8:53 PM
		</div>
		<div class="comment_text"><p>Also, as a note - I am using this same function call in other places successfully.</p><p>The main difference here is that I am using a subdomain (e.g. jQuery.getJSON() call lives on "<a href="http://disq.us/url?url=http%3A%2F%2Fcms.american.edu%3AZqp-jSQd59yeDJgwlMKc15oe9KY&amp;cuid=3321886" rel="nofollow noopener" title="cms.american.edu">cms.american.edu</a>" and the URL to the CFC in the getJSON() function is "<a href="http://disq.us/url?url=http%3A%2F%2Fnew.american.edu%3A1iFW-7ycJ-7I465ag_KtUk24sek&amp;cuid=3321886" rel="nofollow noopener" title="new.american.edu">new.american.edu</a>".</p><p>I read online that the getJSON function allows you to make Ajax calls to other domains.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710783">18</a> by Raymond Camden
		posted on 3/17/2009 at 8:57 PM
		</div>
		<div class="comment_text"><p>Before the call? You got me then. Your JS looks VERY slim there so I can't imagine where else it would fail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710782">19</a> by Raymond Camden
		posted on 3/17/2009 at 8:57 PM
		</div>
		<div class="comment_text"><p>Oh wait! I see the issue. More details coming in a sec.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710779">20</a> by Raymond Camden
		posted on 3/17/2009 at 9:00 PM
		</div>
		<div class="comment_text"><p>So yes, jQuery lets you make JSONP calls to things on other servers, but this is NOT the same as a JSON call.</p><p>A JSONP call is a JSON result with "padding". Please see these two articles and it should help a lot:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.insideria.com%2F2009%2F03%2Fwhat-in-the-heck-is-jsonp-and.html%3AP1LYUQ34gqa-zg7hjsxTkVxVQ4I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.insideria.com/2009/03/what-in-the-heck-is-jsonp-and.html">http://www.insideria.com/20...</a></p><p>This article talks about JSONP.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F3%2F11%2FWriting-a-JSONP-service-in-ColdFusion%3Al-H8y8ogno9l8E48JE-MNf71cX0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/3/11/Writing-a-JSONP-service-in-ColdFusion">http://www.coldfusionjedi.c...</a></p><p>This article demonstrates making a JSONP service in ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710784">21</a> by Ron West
		posted on 3/17/2009 at 9:15 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, that makes sense.</p></div>
	</div>
</div>
		