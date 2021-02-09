
<div class="comment" id="c_1713685585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685585">1</a> by Michael de la Morena
		posted on 9/9/2008 at 10:42 PM
		</div>
		<div class="comment_text"><p>I am using CFAjaxProxy with cfc's and when I call a cfc that has an sql syntax error a page returns to the HTTP request that displays the error. Well the returned page does not get handled like an error because it's status code is 200 and the Response Header does not equal server-error.  And since it is not a proper response it does not get sent to the callback handler.  What I need to do is handle all possible errors, so that the user is not sitting and waiting for a response when none will ever come. Any ideas?</p><p>This is how the cfajax.js determines if a response is an error.</p><p>$A.isRequestError=function(req){<br>return ((req.status!=0&amp;&amp;req.status!=200)||req.getResponseHeader("server-error"));<br>};</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685587">2</a> by Raymond Camden
		posted on 9/9/2008 at 10:46 PM
		</div>
		<div class="comment_text"><p>Ah, so you have CF handling errors as well, which means you get a 'pretty' error.</p><p>So here is an idea - use onError to handle the errors, and if the error occurs on an ajax request (you can sniff the request), you could just throw a new exception.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685592">3</a> by Henry Ho
		posted on 9/9/2008 at 10:54 PM
		</div>
		<div class="comment_text"><p>Yes, u can use CFHEADER and send a non 200 HTTP Status Code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685591">4</a> by Paul
		posted on 9/9/2008 at 11:24 PM
		</div>
		<div class="comment_text"><p>I have a function that is being called through cfajaxproxy that throws a java.lang.NullPointerException with no other detail. But the interesting thing is it only throws the error when called from cfajaxproxy. Invoke it normally through cfinvoke and it works perfectly. I can see that all the parameters are passed fine as they are logged. If I comment out the error handler in the cfc it throws a generic Status: 500 internal server error. Neither error is much help in figuring out what is wrong. Any suggestions as to how I can determine whats causing it would be appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685589">5</a> by Raymond Camden
		posted on 9/10/2008 at 12:02 AM
		</div>
		<div class="comment_text"><p>Don't test it via cfinvoke. Test it via your browser. Ie, use Firebug to see the URL and paste it into a new tab.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685593">6</a> by Paul
		posted on 9/10/2008 at 12:35 AM
		</div>
		<div class="comment_text"><p>Ray: thanks as always for you prompt response!<br>That took me right to the line of code that was causing the problem. Excellent! Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685594">7</a> by Shirzad
		posted on 9/10/2008 at 4:32 AM
		</div>
		<div class="comment_text"><p>Ray: Thanks so much for your help on this - much appreciated.  One container I'm still having an issue with is the cflayout-tab.  Any ideas how to handle errors that give you the javascript alert from in there (other than a cfcatch)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685596">8</a> by Raymond Camden
		posted on 9/10/2008 at 5:08 AM
		</div>
		<div class="comment_text"><p>Did you try the global error handler I described above? I haven't tried it for a cflayout error, but I'd give it a shot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685614">9</a> by Shirzad
		posted on 9/10/2008 at 5:53 PM
		</div>
		<div class="comment_text"><p>Ray: I managed to get the global error handler working for an error in a cfdiv (and even for a cfdiv that's inside a cflayout-tab), but no luck so far with an error in a cflayout-tab.  But maybe I'm not doing something right.  If anyone can get it to work with a tab, please let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685616">10</a> by Raymond Camden
		posted on 9/11/2008 at 6:54 PM
		</div>
		<div class="comment_text"><p>I got it working. I used the global handler, although cflayoutarea supports onBindError as well. I then gave the tab a name, and was able to use ColdFusion.navigate to send the tab to an error page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685617">11</a> by Shirzad
		posted on 9/13/2008 at 10:09 PM
		</div>
		<div class="comment_text"><p>OK - thanks Ray.  I'll figure out why my code's not working properly.  Again, really appreciate your help on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685619">12</a> by Anthony Patch
		posted on 1/27/2009 at 8:51 PM
		</div>
		<div class="comment_text"><p>How could I launch a javascript function to display a "pretty" error message if the ajax binding on cfgrid returns a messy JSON error? It seems cfgrid doesn't have an onBindError attribute. <br>Thanx,<br>Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685620">13</a> by Raymond Camden
		posted on 1/27/2009 at 9:43 PM
		</div>
		<div class="comment_text"><p>Use onError:</p><p>&lt;cfgrid autowidth="true" name="entries" format="html"  width="600" bind="url:getentries2.cfm?page={cfgridpage}&amp;pagesize={cfgridpagesize}&amp;sort={cfgridsortcolumn}&amp;dir={cfgridsortdirection}" onError="handleError"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685618">14</a> by Anthony Patch
		posted on 1/28/2009 at 6:59 AM
		</div>
		<div class="comment_text"><p>Ray,<br>That didn't work when there was an AJAX error.  It just threw the typical CF javascript popup with alert recommending to turn CFDEBUG on.  It didn't call the handleError function.  Any ideas what may be happening?<br>Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685622">15</a> by Raymond Camden
		posted on 1/28/2009 at 7:19 AM
		</div>
		<div class="comment_text"><p>What kind of ajax error? I'd say _any_ error in loading the data is an ajax error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685624">16</a> by Kumar
		posted on 6/25/2014 at 5:49 PM
		</div>
		<div class="comment_text"><p>Ray, Sorry for resurrecting years old post, but I was looking for a solution similar to what's posted here. I have a cfm module that uses cfgrid to call a cfc module to get the data. If for some reason the data is not available, currently cf throws the cfc error (..recommending to turn cfdebug on). Is there a nicer way to handle error messages? I did see a similar post above where you said to use "onerror="handleError"" but that doesn't seem to work well. When I add the onerror the page falls apart. Here is the piece of code where i added onerror - <br>&lt;cfset args.bind = "cfc:pagination.casetransbind.getCaseTrans({cfgridpage},{cfgridpagesize}, {cfgridsortcolumn},{cfgridsortdirection}, #case_tmp#)"<br>					onError="ErrorRoutine"&gt;<br>Any idea what I'm doing wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685626">17</a> by Raymond Camden
		posted on 6/25/2014 at 5:50 PM
		</div>
		<div class="comment_text"><p>When you say the data is not available, do you mean the DB is down, or you are returning 0 items back? Because 0 items back should work just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685627">18</a> by Kumar
		posted on 6/25/2014 at 6:13 PM
		</div>
		<div class="comment_text"><p>Well, to elaborate the data, I'm parsing an XML file that is returned from Cobol module and building a query in cfc and then returning the data back to cfm using QueryConvertForGrid. For example, I entered case number, and if the case has any detail info, it returns the detail info nodes in the XML. Otherwise DB2 returns only the basic info. When detail info node is not available, CFC throws the error. In CFC, I'm looking for that detail info node. I'm also checking for the node existence in cfc and if not available, throw error message. But I'm not sure if I'm doing it right for cfgrid to capture that error. so here is the error capture in cfc - <br>&lt;cfif Not IsDefined("DetailNode")&gt; &lt;cfset err_msg = Insert("#AppErrorMsg#&lt;br /&gt;", err_msg, Len(err_msg))&gt; &lt;cfreturn err_msg&gt;&lt;/cfif&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685628">19</a> by Raymond Camden
		posted on 6/25/2014 at 6:18 PM
		</div>
		<div class="comment_text"><p>Well wait - do you want the grid to show a friendly error, or just no data? If you just want to to show no data, handle the error in your CFC and return an empty record set.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685629">20</a> by Kumar
		posted on 6/25/2014 at 6:24 PM
		</div>
		<div class="comment_text"><p>I would like to grid to show a friendly error instead of an empty grid. Like 'No detail records found". I think I'm handling the error in CFC but it doesn't seems to be appearing on the grid. If I take off the onerror function, I get "DetailNode is undefined in the XML with cfdebug info" popup message. Instead of that popup message, would like to display it on the grid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685632">21</a> by Raymond Camden
		posted on 6/25/2014 at 6:26 PM
		</div>
		<div class="comment_text"><p>Can't help you there - sorry. I don't use cfgrid, nor do I recommend anyone else use it. That doesn't help you, but I'd rather tell you that then nothing at all. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685631">22</a> by Kumar
		posted on 6/25/2014 at 6:31 PM
		</div>
		<div class="comment_text"><p>Thanks. When you are saying you don't recommend cfgrid, what other ways do you recommend. I'm flexible if you have other recommendations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685630">23</a> by Raymond Camden
		posted on 6/25/2014 at 6:41 PM
		</div>
		<div class="comment_text"><p>Read these entries: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2014%2F6%2F19%2FColdFusion-UI-The-Right-Way--HTML-version%3AlqO809_MQM5wQSVUiP04UrhMAho&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2014/6/19/ColdFusion-UI-The-Right-Way--HTML-version">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685633">24</a> by Kumar
		posted on 7/7/2014 at 7:22 PM
		</div>
		<div class="comment_text"><p>Ray, just wanted to circle back to this issue and let you or anyone who is interested know i did the following steps as a  work around - <br>My first mistake was on the CFC page i was returning the error messages by using cfreturn. I should know better. Anyway, changed that to cfthrow.<br>Second on the CFM page, I wrote a javascript module that is expecting two parms (status, text). And display the text using innerhtml to display it on the screen instead of cf default popup message with cfdebug in it. <br>Third - I'm calling the javascript from cfgrid onerror event. <br>That worked for me.</p></div>
	</div>
</div>
		