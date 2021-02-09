
<div class="comment" id="c_1713715598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715598">1</a> by Rick
		posted on 5/20/2009 at 9:20 PM
		</div>
		<div class="comment_text"><p>I need to dig around and find out how to do a 'spinning pinwheel' type of waiting thing....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715596">2</a> by Raymond Camden
		posted on 5/20/2009 at 9:21 PM
		</div>
		<div class="comment_text"><p>Download the image form here: <a href="http://disq.us/url?url=http%3A%2F%2Fajaxload.info%2F%3A8APYU9P1PwtXqe3ok4feZENdThw&amp;cuid=3321886" rel="nofollow noopener" title="http://ajaxload.info/">http://ajaxload.info/</a> and replace my text with an IMG tag. That's it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715601">3</a> by Don
		posted on 5/20/2009 at 9:25 PM
		</div>
		<div class="comment_text"><p>"trivial"????????<br>Hmmm. Now I have to find out what CFFLUSH does. You know it is amazing that I've worked with CF since version 4. Done amazing things with it. And I still keep finding things I have no clue about. I wonder if it is because I'm always under deadlines and rarely have time just to play with it? I find this stuff when I have a problem. Good thing there are people who have that time whose brains I can tap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715603">4</a> by Raymond Camden
		posted on 5/20/2009 at 9:27 PM
		</div>
		<div class="comment_text"><p>Normally CF will send the page back when EVERYTHING is done. cfflush is a way to say "Send what you have so far." It doesn't always work (see the docs), but there ya go. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715609">5</a> by Don
		posted on 5/20/2009 at 10:23 PM
		</div>
		<div class="comment_text"><p>This was a nice idea, but the cfflush tag doesn't work inside frameworks. I'm working on a system that was built on Fusebox (old version) so everything is cfincluded. Maybe I can go to the very top tho. hmmmmmmm Smoke will be pouring from my ears soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715610">6</a> by Raymond Camden
		posted on 5/20/2009 at 10:24 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F10%2F27%2FHandling-a-slow-process-in-a-ModelGlue-or-other-MVC-application%3As-LSb5-tGiG4RQumEkXYqyeg_QQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/10/27/Handling-a-slow-process-in-a-ModelGlue-or-other-MVC-application">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715611">7</a> by Andy Sandefer
		posted on 5/20/2009 at 10:30 PM
		</div>
		<div class="comment_text"><p>I'm not knocking Ray and I know that he's just trying to help someone out but do you know what I would do?  I would complicate this and do it with a combination of cflayoutarea's, cfdiv's and the almighty ColdFusion.navigate - partly because I'm a navigate kind of guy but mostly because I could do it without resorting to using cfflush at all.  Why complicate it you may ask and why pick on tags that have been around since before I started using CF?  Well mostly because of this...</p><p>    *  Using any of the following tags or functions on a page anywhere after the cfflush tag can cause errors or unexpected results: cfcontent, cfcookie, cfform, cfheader, cfhtmlhead, cflocation, and SetLocale. Similarly, do not use any tags that use AJAX features, including cfdiv, cflayout, cflayoutarea, cfpod, cfsprydataset, cftooltip, cfwindow, or HTML format cfgrid, cftree, cftextarea, or cfinput (using autosuggest or datefield attributes) tags. All of the preceding tags and functions normally modify the HTML header, but cannot do so after a cfflush tag, because the cfflush sends the header.<br>    * Using the cfset tag to set a cookie anywhere on a page that has a cfflush tag does not set the cookie in the browser.<br>    * Using the cfflush tag in the body of several tags, including cfsavecontent, cfquery, and custom tags, causes errors.<br>    * If you save Client variables as cookies, any client variables that you set after a cfflush tag are not saved in the browser.<br>    *  Using any of the following tags or functions on a page anywhere after the cfflush tag can cause errors or unexpected results: cfcontent, cfcookie, cfform, cfheader, cfhtmlhead, cflocation, and SetLocale. Similarly, do not use any tags that use AJAX features, including cfdiv, cflayout, cflayoutarea, cfpod, cfsprydataset, cftooltip, cfwindow, or HTML format cfgrid, cftree, cftextarea, or cfinput (using autosuggest or datefield attributes) tags. All of the preceding tags and functions normally modify the HTML header, but cannot do so after a cfflush tag, because the cfflush sends the header.<br>    * Using the cfset tag to set a cookie anywhere on a page that has a cfflush tag does not set the cookie in the browser.<br>    * Using the cfflush tag in the body of several tags, including cfsavecontent, cfquery, and custom tags, causes errors.<br>    * If you save Client variables as cookies, any client variables that you set after a cfflush tag are not saved in the browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715614">8</a> by Raymond Camden
		posted on 5/20/2009 at 10:38 PM
		</div>
		<div class="comment_text"><p>Andy, Ajax would indeed be a good alternative. Only issue is that you would need to ping every N seconds to get the status.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715613">9</a> by Andy Sandefer
		posted on 5/20/2009 at 11:27 PM
		</div>
		<div class="comment_text"><p>Well then it's a good thing that I figured out how to do that as efficiently as possible last week!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F5%2F10%2FMore-playtime-with-Flex-AIR-ColdFusion-and-Flex-Messaging%23comments%3A820sUIm9ZUzIHmJWlC3n4QUNRN0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/5/10/More-playtime-with-Flex-AIR-ColdFusion-and-Flex-Messaging#comments">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715612">10</a> by Don
		posted on 5/22/2009 at 2:38 AM
		</div>
		<div class="comment_text"><p>Is it possible to tell the status of a free running thread? I was thinking (very dangerous) that I could set the query to run in a thread and go on to other things and when it is ready, use it.</p><p>Or can it store the data and have it ready when I am?</p><p>Maybe I should just go test this. Like can I create a session variable that holds the query and then periodically check and see if that variable exists and when it does, use it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715621">11</a> by Raymond Camden
		posted on 5/22/2009 at 4:46 AM
		</div>
		<div class="comment_text"><p>You can get the status of a thread while still on the same page. After that, the only way to determine what's going on in a thread is for the thread to broadcast stuff out. It can do this by just setting an application variable. That variable can be checked by other requests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715620">12</a> by Steve Fister
		posted on 9/14/2010 at 11:05 PM
		</div>
		<div class="comment_text"><p>Hi Ray, thanks for posting this! I'm just now getting my head wrapped around threads in CF. However, using your example on a script that I created, I'm having a bit of trouble and maybe you can shed some light on it.</p><p>I have a page which submits form data to a CF page that does quite a bit of processing before it loads the HTML portion of the page. Using your example, everything seems to work as expected with one issue. A variable that I create within the first thread doesn't seem to be available in the page thread (just after I join them). Even if I prefix the variable with the thread name, I still get an error: "Element X is undefined in THREAD". The way I read the CF8 documentation, it says that the page thread can access other threads on the page by using the prefix...am I reading this incorrectly? Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715622">13</a> by Raymond Camden
		posted on 9/14/2010 at 11:09 PM
		</div>
		<div class="comment_text"><p>Can you post your code to pastebin and post the url here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715619">14</a> by Steve Fister
		posted on 9/15/2010 at 12:10 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I think I actually figured it out after some trial and error. I was prefixing the variable with my thread name. When I changed it to THREAD.variable and then accessed it in the page thread as THREAD.variable it worked! For some reason, myThreadName.variable didn't seem to work...but it could have been that my head was so deep in the code that I wasn't referencing it correctly down the page. Anyhow, thanks for the super quick response, and thanks for this post..it did exactly what I needed!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715624">15</a> by Antoine
		posted on 12/2/2010 at 10:05 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>sorry for digging that deep in time ...<br>Just checked your code here and it does not seems to work for me (FFox 3.612 / CF 8,0,1,195765).</p><p>I highly suspect &lt;cfflush&gt; ... but not certain of this.<br>Is there any other way to display main page message (or animated image) while thread(s) is (are) executing ?</p><p>For what I've tried now, we have to wait until threads have finished to display the page, wether they are named or not.</p><p>Sorry again for upping that *old* subject,<br>best regards,<br>A.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715623">16</a> by Antoine
		posted on 12/3/2010 at 12:41 AM
		</div>
		<div class="comment_text"><p>Well I crunched a lot my head ...<br>And finally, I may suggest one thing, based on binded cfc.<br>I'm not sure I'm not going nowhere but in the wrong direction, anyway I couldn't leave my screen as is.</p><p>First, I create a quite simple cfc :<br>[code]<br>&lt;cfcomponent&gt;<br>    &lt;cffunction name="sendmail" access="remote" output="false"&gt;<br>		&lt;cfargument name="numberOfIt" displayname="nb" hint="nb of iterations we call in the bind" type="numeric" default="10" required="no" /&gt;<br>		&lt;cfargument name="Speed" displayname="speed" hint="speed interval in millisecs we call in the bind" type="numeric" default="20" required="no" /&gt;<br>			&lt;cfloop from="1" to="#numberOfIt#" index="nbbs"&gt;<br>				&lt;cflog file="ABdemo" text="This is mail #nbbs# #timeformat(now(),"long")#"&gt;<br>				 &lt;cfscript&gt;<br>				 sleep(Speed);<br>				 &lt;/cfscript&gt;<br>			&lt;/cfloop&gt;<br>&lt;cfreturn "It's over now !"/&gt;<br>    &lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;<br>[/code]</p><p>The tip is both here and in the form page; in fact we will only update the form field value ... providing start (default value of the field) and end (cfc returned value) texts.</p><p>Now, I set a very simple &lt;cfform&gt; page :<br>&lt;head&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br> &lt;cfform&gt;<br>    &lt;cfinput type="text" value="Starting, please wait ..." bind="cfc:threadedMail.sendmail(5,100)" bindonload="yes"  name="CFCstatus" id="CFCstatus"&gt;<br>&lt;!--- The hint is here : default value will display first before CFC's finishes to run the code ---&gt;<br>&lt;/cfform&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p><p>Et voilà ... but just for start and end. Because - as much of you know (I didn't) - firing a &lt;cfresult&gt; is causing the function to stop, so that only first iteration of the loop would be ran.</p><p>Many questions still remain ...<br>1/ Is this method "load safe", or even "clean"<br>2/ Should I prefer to use &lt;cfthread action="sleep" duration="Speed"&gt; instead of CFScript sleep(Speed) ?<br>3/ Based on bind capabilities, I'll be surprised if none of you could find a workaround to update the CFCStatus field while in the loop<br>4/ And finaly, as my final goal is to use this to slow down CFmail campaigns, by grouping and slow down the send process ... how do you think this will fit my needs ?</p><p>Sorry for my froggy English,<br>Thanks in advance for any suggestion.<br>Antoine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715628">17</a> by Raymond Camden
		posted on 12/4/2010 at 2:40 AM
		</div>
		<div class="comment_text"><p>To your first reply - it could be a few things. Browsers decide when to render content. IE, for example, is picky about when it will show stuff. So it could have just been FF saying, "I know you sent me some HTML, but I just don't feel like showing it yet."</p><p>To your second reply: First off, I think doing it via Ajax is _better_. My code above is cool for simple stuff, but handing it off to an Ajax request gives you more control. Therefore - it's safe in my regards. Is it "load safe" - well that depends. If I reload your page many times it will keep making the Ajax request many times. You want to ensure your process _knows_ that it started and doesn't start off again. The code you have above will not do that.</p><p>You almost NEVER want to sleep. I used sleep just for demonstrative purposes. It was a way to make things slow on purpose. There are real needs for it, but generally, you should not be using it.</p><p>3) I'd just switch to using a jQuery solution. :)</p><p>4) oh! So then you may indeed want to use sleep. :) So yeah, I can see that making sense for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715626">18</a> by Antoine
		posted on 12/6/2010 at 2:19 PM
		</div>
		<div class="comment_text"><p>@Ray : Thank you so much. <br>Should I post here modified code (I mean with some Thread control script) ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715625">19</a> by Raymond Camden
		posted on 12/6/2010 at 4:59 PM
		</div>
		<div class="comment_text"><p>Sure - or post a pastebin URL.</p></div>
	</div>
</div>
		