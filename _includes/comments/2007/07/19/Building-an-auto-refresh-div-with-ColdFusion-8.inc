
<div class="comment" id="c_1713668748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668748">1</a> by Doug Bezona
		posted on 7/20/2007 at 4:25 PM
		</div>
		<div class="comment_text"><p>Try setInterval() instead of setTimeout() in your body tag. setInterval() executes the function every x period of time, eliminating the need for your function to handle re-executing itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668747">2</a> by Raymond Camden
		posted on 7/20/2007 at 4:33 PM
		</div>
		<div class="comment_text"><p>Thanks Doug. I'll make the change. I've posted it back to the live site too. The funny thing about all this AJAX work lately is that my rusty JavaScript skills are slowly warming back up again. I remember the day the first build of Netscape with JavaScript was released. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668750">3</a> by Boyan
		posted on 7/20/2007 at 4:57 PM
		</div>
		<div class="comment_text"><p>If you use a JavaScript lib like Prototype.js, auto-refreshing could be much easier with something like the Ajax.PeriodicalUpdater. More info at <a href="http://disq.us/url?url=http%3A%2F%2Fprototypejs.org%2Fapi%2Fajax%2FperiodicalUpdater%3AlJQgUnX719XbcTGaxoH-kfnskvU&amp;cuid=3321886" rel="nofollow noopener" title="http://prototypejs.org/api/ajax/periodicalUpdater">http://prototypejs.org/api/...</a>. I'm sure the underlaying Yahoo-UI has something similar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668749">4</a> by Raymond Camden
		posted on 7/20/2007 at 5:01 PM
		</div>
		<div class="comment_text"><p>I have to be honest, on _quick_ inspection, that doesn't look easier. It doesn't look much harder, but it doesn't look any easier to me. Just saying. ;) Also note my JS code got a bit smaller when I changed to setInterval. You know - I'm going to add a ER for CF to add a refresh attributes to div.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668752">5</a> by Boyan
		posted on 7/20/2007 at 5:18 PM
		</div>
		<div class="comment_text"><p>Ok, now it's a challenge, he he:</p><p>this is what you do with your current solution right:<br>&amp;lt;body onload="window.setTimeout('updatestats()',60000)"&amp;gt;</p><p>&amp;lt;script&amp;gt;<br>function updatestats() {<br>   ColdFusion.navigate('stats.cfm','statsdiv');<br>   window.setTimeout('updatestats()',60000);<br>}<br>&amp;lt;/script&amp;gt;</p><p>if you use prototype.js the code looks like this:<br>&amp;lt;script&amp;gt;<br>new Ajax.PeriodicalUpdater('statsdiv', 'stats.cfm', {<br>  method: 'get', frequency: 3, decay: 2<br>});<br>&amp;lt;/script&amp;gt;</p><p>Looks more concise and easier to me, but I could be partial.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668753">6</a> by Doug Bezona
		posted on 7/20/2007 at 5:18 PM
		</div>
		<div class="comment_text"><p>I wouldn't say prototype.js makes it easier in this specific case, since Rays script is all of two lines of code.</p><p>The prototype Ajax.PeriodicalUpdater() IS rather handy, however. I particularly like the "decay" feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668754">7</a> by Boyan
		posted on 7/20/2007 at 5:20 PM
		</div>
		<div class="comment_text"><p>Doh, the above comment didn't seem to work with the code. Feel free to delete it. Trying again.</p><p>This is what you do with your current solution right:<br>&lt;body onload="window.setTimeout('updatestats()',60000)"&gt;</p><p>&lt;script&gt;<br>function updatestats() {<br>   ColdFusion.navigate('stats.cfm','statsdiv');<br>   window.setTimeout('updatestats()',60000);<br>}<br>&lt;/script&gt;</p><p>if you use prototype.js the code looks like this:<br>&lt;script&gt;<br>new Ajax.PeriodicalUpdater('statsdiv', 'stats.cfm', {<br>  method: 'get', frequency: 3, decay: 2<br>});<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668756">8</a> by Doug Bezona
		posted on 7/20/2007 at 5:23 PM
		</div>
		<div class="comment_text"><p>If we are going for concise, I say this isn't bad (and doesn't require an additional library):</p><p>&lt;body onload="window.setInterval(function(){ColdFusion.navigate('stats.cfm','statsdiv');},60000)"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668758">9</a> by Raymond Camden
		posted on 7/20/2007 at 5:39 PM
		</div>
		<div class="comment_text"><p>Boyan - heh, well, with the CF8 one you don't need to include another library. I mean the end result is additional JS stuff, but in the CF8 one, its auto loaded. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668757">10</a> by trent
		posted on 7/20/2007 at 8:44 PM
		</div>
		<div class="comment_text"><p>Is that library within CF8 always loaded or do you have to specify to load it?  If I were to upgrade an existing site which uses Prototype or jQuery for instance to run on CF8, will I then be loading CF8's js and my own library?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668761">11</a> by Raymond Camden
		posted on 7/20/2007 at 9:32 PM
		</div>
		<div class="comment_text"><p>CF only loads the JS libraries when it needs to. If you put an old site up on a cf8 box, it won't load anything new as you wouldn't be using any of the new tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668755">12</a> by Michael White
		posted on 8/26/2007 at 6:44 PM
		</div>
		<div class="comment_text"><p>I noticed that if I use  a cfdiv for my main content and use ColdFusion.navigate to change the contents which are based on queries, if I navigate away, change the criteria and navigate back, the data is not requeried unless I manually refresh the cfdiv (by using a cfmenu navigate). is there a way to simply make sure you are re-executing the code on a page in a cfdiv that you are navigate-ing to?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668759">13</a> by Raymond Camden
		posted on 8/26/2007 at 7:40 PM
		</div>
		<div class="comment_text"><p>Are you saying it is caching? If so - you can try simply navigating to a url with a random number at the end. I do that all the time in Spry for IE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668760">14</a> by Michael White
		posted on 8/26/2007 at 9:01 PM
		</div>
		<div class="comment_text"><p>ok, so I have this index.cfm page with three cfdiv areas on it, header,menu and content. I use the cfmenu in the menu cfdiv to ColdFusion.navigate the changeCustomer form into the content cfdiv. I use an onclick event on a button to run a function (submitMe = function(){ColdFusion.Ajax.submitForm('frmChangeCustomer','/Admin/ChangeCustomerProcess.cfm');<br>		ColdFusion.navigate('/Finished.cfm','content');<br>}<br>so it submits the form and updates the content cfdiv to show the finished page which runs two queries to get the new customer name and the new business unit and display them in an ordinary html table. Unfortunately, the old customer shows up like it never ran the queries. If I dump the session I can see that the form was submitted and the data saved and read into the session scope but it doesn't show up on the finished.cfm page</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668762">15</a> by Raymond Camden
		posted on 8/26/2007 at 10:02 PM
		</div>
		<div class="comment_text"><p>Did you try the random number like I said?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668765">16</a> by Michael White
		posted on 8/26/2007 at 10:04 PM
		</div>
		<div class="comment_text"><p>uh, no... how do you do that? (Dammit, I'm so ignorant!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668770">17</a> by Raymond Camden
		posted on 8/26/2007 at 10:27 PM
		</div>
		<div class="comment_text"><p>This is an example from Lighthouse Pro:</p><p>var dsIssues = new Spry.Data.JSONDataSet("issuesxml.cfm?id=#p.getID()#&amp;stupid=#rand("SHA1PRNG")#",{path:"data", pathIsObjectOfArrays: true});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668767">18</a> by Michael White
		posted on 8/26/2007 at 11:00 PM
		</div>
		<div class="comment_text"><p>I am not sure how to use that but I tried this coldfusion rand function and it failed too:<br>	&lt;script language="javascript"&gt;<br>		submitMe = function() {<br>		ColdFusion.Ajax.submitForm('frmChangeCustomer','/Admin/ChangeCustomerProcess.cfm');<br>		ColdFusion.navigate('/Finished.cfm?rn=&lt;cfoutput&gt;#Rand("SHA1PRNG")#&lt;/cfoutput&gt;','content');<br>		}<br>	&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668768">19</a> by Michael White
		posted on 8/26/2007 at 11:11 PM
		</div>
		<div class="comment_text"><p>funny thing is, I have an employee form that I run using the same code and it works, the main difference is there are more pages to go through because there's a confirmation page. so I have a list I pick an employee by clicking on a ColdFusion.navigate link, that takes me to an edit form, I submit using a ColdFusion.Ajax.submitForm function that then navigates to a processing page and then to the confirmation page. the confirmationpage has a couple of buttons in a cfform that run another ColdFusion.navigate to take you to the page that actually saves the data to the database and then ColdFusion.navigates to the employee listing and by that time the employee listing shows the new record.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668766">20</a> by Michael White
		posted on 8/27/2007 at 3:59 AM
		</div>
		<div class="comment_text"><p>the submitForm and navigate function is in the edit form page. I always get the following error whenever the ColdFusion navigate function is in there:<br>ColdFusion.Ajax.checkImportedTag('CFFORM');<br>Of course on my main index page that contains the cfdiv tags, I have the following line near the top:<br>&lt;cfajaximport tags="cfform, cfpod, cftextarea, cftooltip, cfwindow"&gt; <br>am i missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668769">21</a> by Raymond Camden
		posted on 8/27/2007 at 5:12 AM
		</div>
		<div class="comment_text"><p>Do you really have spaces? There should be no space in the list of tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668771">22</a> by Michael White
		posted on 8/29/2007 at 5:58 AM
		</div>
		<div class="comment_text"><p>took the spaces out, still no joy. since I am doing the cfajaximport on the "master" page and then using a cfform tag on the edit form, maybe there's some weirdness like "double" ajax library importing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668772">23</a> by Michael White
		posted on 8/29/2007 at 7:13 AM
		</div>
		<div class="comment_text"><p>Here is what I am doing to make this work:<br>on the form:<br>I got rid of the javascript function in the head and changed the button back to cfinput type="submit"<br>now the form uses the intended cfform submit routines built in (stays in the same container)<br>on the processing page, I just use a cfinclude instead of navigating. since the processing page doesn't display anything, the user only sees the results page (or the source page)<br>I get no Ajax.checkImportedTag error and I can cfif which page to cfinclude and the best part is that the page contains updated results so the user can see the results of their changes immediately</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668780">24</a> by Michael White
		posted on 9/8/2007 at 6:51 PM
		</div>
		<div class="comment_text"><p>I think I figured out the goofy checkImportedTag problem. I was putting the javascript in the head section (like I thought I was supposed to do) but when I moved the function inside the form the error went away and everything still worked.<br>So right after the cfform tag I have something like this:<br>	&lt;script&gt;<br>		callback = function(){<br>		ColdFusion.navigate('/WorklogFinished.cfm','content');<br>		}<br>	&lt;/script</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668777">25</a> by Felipe Serrano
		posted on 3/27/2008 at 5:15 AM
		</div>
		<div class="comment_text"><p>Hi there, can any one point me what's wrong with this form:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.multilistmanager.com%2Fviews%2Fformtest.cfm%3AwWyHy6Jqi9mRu9mcRSiSkT5n3wE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.multilistmanager.com/views/formtest.cfm">http://www.multilistmanager...</a></p><p>JS CODE:<br>-------------------<br>&lt;script type="text/javascript"&gt;<br>function doSendContactAgent() {<br>ColdFusion.Ajax.submitForm('contactAgent', '/cfm/invokeForms.cfc?method=sendContactAgent', resultInsertHandler,insertErrorHandler);<br>	}</p><p>function resultInsertHandler() {<br>var resultDiv = document.getElementById("result");<br>resultDiv.innerHTML = "&lt;p&gt;Employee Added.&lt;/p&gt;";<br>}</p><p>function insertErrorHandler(id, message) {<br>alert("Error while updating\n Error code: "+id+"\n Message: "+message);<br>var resultDiv = document.getElementById("result");<br>resultDiv.innerHTML = "&lt;p&gt;Employee NOT Added.&lt;/p&gt;";<br>}<br>&lt;/script&gt;</p><p>FORM CODE:<br>-------------------<br>&lt;cfform name="contactAgent" format="html"&gt;<br>&lt;cfinput type="text" id="subjectid" name="subject" value="x" tabindex="1" disabled="yes"&gt;<br>&lt;cfinput type="text" id="emailid" name="email" value="" tabindex="1"&gt;<br>&lt;cfinput type="text" id="nameid" name="name" value="" tabindex="2"&gt;<br>&lt;cfinput type="text" id="telephoneid" name="telephone" value="" tabindex="3"&gt;<br>&lt;cftextarea id="commentsid" name="comments" rows="2" cols="5" tabindex="4" &gt;&lt;/cftextarea&gt;<br>&lt;cfinput name="send" type="button" onClick="javascript:doSendContactAgent();" value="Send Info"/&gt;<br>&lt;cfinput name="send" type="reset" value="Reset"/&gt;<br>&lt;/cfform&gt;</p><p>invokeForms.cfc CODE:<br>-------------------<br>&lt;cffunction name="sendContactAgent" access="remote"&gt;<br>&lt;cfmail to="xerranomx@gmail.com" from="#<a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a>#" replyto="#<a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a>#" server="<a href="http://disq.us/url?url=http%3A%2F%2Fmail.multilistmanager.com%3AcwvJcSYUf9UYnd5j3-n1-wJZp60&amp;cuid=3321886" rel="nofollow noopener" title="mail.multilistmanager.com">mail.multilistmanager.com</a>" username="<a href="http://disq.us/url?url=http%3A%2F%2Finfo.multilistmanager.com%3AE6YeXZA-eMNP_DHc4WQyjY9XqmQ&amp;cuid=3321886" rel="nofollow noopener" title="info.multilistmanager.com">info.multilistmanager.com</a>" password="info266" subject="WEB LEAD #form.subject#"&gt;<br>-----Message------<br>&lt;cfmailparam name="X-Priority" value="1"&gt;<br>&lt;/cfmail&gt;<br>&lt;/cffunction&gt;</p><p>Thanks in advance guys</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668778">26</a> by Jose
		posted on 4/23/2008 at 10:54 PM
		</div>
		<div class="comment_text"><p>This is great, except I'm running CF 7 so I can't CF's native Ajax functionality. I'm trying to use Prototype's PeriodicalUpdater class, though, but I don't want to refresh the whole page, just one data point within it. I have the JS function working and all but I'm not sure how to make the data point (a column from the db) refresh. For example,</p><p>&lt;div id="totalSales"&gt;#totalSales#&lt;/div&gt;</p><p>but this value never seems to refresh.</p><p>TIA</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668776">27</a> by Raymond Camden
		posted on 4/23/2008 at 10:59 PM
		</div>
		<div class="comment_text"><p>Wish I could help you, but I only know Spry and a bit of jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668783">28</a> by Jose
		posted on 4/23/2008 at 11:07 PM
		</div>
		<div class="comment_text"><p>I'm open to other libraries. I just need a way to refresh a data point within a page. I'm going to check to see whether Spry or jQuery provide this functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668775">29</a> by Raymond Camden
		posted on 4/23/2008 at 11:12 PM
		</div>
		<div class="comment_text"><p>I know Spry can do it - and jQuery is very powerful as well. I'd use Spry though - it's my personal favorite. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668774">30</a> by Alex
		posted on 6/23/2008 at 8:36 PM
		</div>
		<div class="comment_text"><p>Do you know if its possible to do this without having the loading and icon show up? I tried to find a way around it but no luck...</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668779">31</a> by Raymond Camden
		posted on 6/23/2008 at 11:34 PM
		</div>
		<div class="comment_text"><p>As far as I know, no. You can always do it manually in jquery of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668781">32</a> by Robert Haddan
		posted on 9/8/2008 at 9:16 PM
		</div>
		<div class="comment_text"><p>Cool solution... maybe you can help me with an issue. I'm refreshing a cfdiv inside a cflayoutarea inside a cflayout type="tab". Everytime the div refreshes, it resizes the layout area, trimming the div until the div is no longer visible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668782">33</a> by Raymond Camden
		posted on 9/10/2008 at 1:19 AM
		</div>
		<div class="comment_text"><p>Can you use tabheight to set the height of the tab - that way it should stick to one value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668787">34</a> by Robert Haddan
		posted on 9/10/2008 at 6:25 PM
		</div>
		<div class="comment_text"><p>Thanks for replying. I did set the height to an actual value and that resolved the trim issue. I think it's related to another issue in that the cfdiv is not always displaying its contents (a cfgrid). Seems to be an IE6 issue only. I can't recreate in Firefox.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668785">35</a> by Sam
		posted on 5/6/2009 at 3:26 PM
		</div>
		<div class="comment_text"><p>This is really good stuff, thanks again Ray.</p><p>Note: If your CFDIV is positioned at the bottom of your page you may need to provide it with a height in the CSS.</p><p>Otherwise scrolling can 'jump up' to what it thinks is the bottom of the page once the CFDIV has been refreshed.</p><p>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668784">36</a> by Rob
		posted on 5/11/2009 at 6:31 AM
		</div>
		<div class="comment_text"><p>I'm a little lost here.  I see how to refresh a DIV using the timer.</p><p>I'm building a shoutbox and i have it wrapped in a (div id="shoutbox"&gt;&lt;/div&gt; tag.  All that happens in the shoutbox is a query to grab the name, message, date.  I have a link below  the box that you click that launches a popup window using cfwindow. In the cfwindow is a form with a name field, message field, and a submit button.  The date field is hidden.  When you click the submit button is points to a script that insert the data into the database.</p><p>I'm using the Codlfusion.AJAX.submitform to submit the form. Now all I want to do is add some code to my JS function to refresh only that div after the script is run.  Right now i think it keeps triggering before the submit happens because i keep getting errors the variable <a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a> isn't defined.</p><p>Anyone know a simple way to refresh a specific div based on an event. I don't want to keep refreshing and refreshing, that will be annoying.</p><p>Please could really use the help/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668788">37</a> by Rob
		posted on 5/11/2009 at 6:34 AM
		</div>
		<div class="comment_text"><p>ooh, you are doing it right on this page. When i submit this is auto-refeshes, but its not on a timer.  However you aren't using a modal window like i am trying to do.</p><p>So -- whats the secret?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668786">38</a> by Jody Fitzpatrick
		posted on 6/22/2009 at 1:37 AM
		</div>
		<div class="comment_text"><p>I LOVE YOU! YOU ARE THE MAN FOR ME... If I was a women. But dude I want to thank you so so so so much. I was looking all over freaking town for something like this... YOU ARE A CFGOD</p><p>Just Kidding</p><p>Thanks A Million...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668790">39</a> by Raymond Camden
		posted on 6/22/2009 at 5:15 AM
		</div>
		<div class="comment_text"><p>You are most welcome Jody.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668789">40</a> by Richard Siebels
		posted on 7/16/2012 at 4:07 AM
		</div>
		<div class="comment_text"><p>Hmmmm....why is it that your code always works as described, the first time? I spent a lot of time on various sites trying to get this capability with jQuery and wasted 2 hours. Used the above and had what I needed in literally 30 seconds.</p><p>Thanks a zillion!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668792">41</a> by Raymond Camden
		posted on 7/16/2012 at 5:57 PM
		</div>
		<div class="comment_text"><p>The only reason my code works the first time is that I banged my head against the wall for a good hour beforehand. You guys see the sausage, not how it is made. :P You are welcome - glad to help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668791">42</a> by Ryan Everhart
		posted on 2/17/2013 at 7:06 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Thanks for this code.  Years later and it's still helping people.</p><p>I do have a bit of an issue and I'm no sure why.  I am setting the CFDIV to refresh every 10 seconds and occasionally I get an error stating one of the variables is not defined.  Something like</p><p>"Error retrieving markup for element resultsDiv : Element KEYWORD is undefined in QRYKEYWORDCOUNT.  Enable debugging..."</p><p>DO you know why this would be happening.  I click ok on the pop up and the page loads just fine.  I'm just randomly getting these messages.  It's not the same variable each time either. Is the code loading too fast? Too often?</p><p>Ryan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668794">43</a> by Raymond Camden
		posted on 2/17/2013 at 10:50 PM
		</div>
		<div class="comment_text"><p>Can you share (via Gist or Pastebin) the code that your div is hitting, and the calling page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668793">44</a> by Ryan Everhart
		posted on 2/17/2013 at 11:14 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.. wasn't sure if embedding worked or not, here is the code</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fanonymous%2F4972619%3A8JBF0XHtx-jkScSNVha5R4SCFWM&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/anonymous/4972619">https://gist.github.com/ano...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668795">45</a> by Raymond Camden
		posted on 2/17/2013 at 11:28 PM
		</div>
		<div class="comment_text"><p>Nothing really stands out. Best I can suggest is a hell of a lot of debugging using cflog. For example, since the error above means keyword isn't a column, you can cflog the columnlist from the query object and see if it is weird. You can log pretty much everything.</p></div>
	</div>
</div>
		