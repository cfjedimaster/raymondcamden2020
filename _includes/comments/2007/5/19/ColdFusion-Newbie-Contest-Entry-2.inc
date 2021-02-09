
<div class="comment" id="c_1713665516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665516">1</a> by Robert Owen
		posted on 5/20/2007 at 8:21 AM
		</div>
		<div class="comment_text"><p>Is there a demo url for this one..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665520">2</a> by Robert Owen
		posted on 5/20/2007 at 8:23 AM
		</div>
		<div class="comment_text"><p>Wow.. totally read over the demo part in the first paragraph.. sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665519">3</a> by Peter Tilbrook
		posted on 5/20/2007 at 9:39 AM
		</div>
		<div class="comment_text"><p>Why use Application scoped variables (consume RAM) when the Request scope is quite sufficient - locking or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665500">4</a> by Raymond Camden
		posted on 5/20/2007 at 4:58 PM
		</div>
		<div class="comment_text"><p>While it is a bit less important since we have only one variable, his code is recreating the variable on each and every hit. In general I'd say cache it in RAM and make it just once. Again - with him using ONE variable, it doesn't matter quite as much, but I'd still recommend it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665518">5</a> by Peter Tilbrook
		posted on 5/20/2007 at 5:09 PM
		</div>
		<div class="comment_text"><p>That is bullshit and you know it!</p><p>If you use "request" at the very top then it is not a given.</p><p>You really need to further research the use of REQUEST scope or stop pretending to be a CF Jedi Master.</p><p>And you anre using CF 8 (beta 2) so why still the gay image crap?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665517">6</a> by Peter Tilbrook
		posted on 5/20/2007 at 5:14 PM
		</div>
		<div class="comment_text"><p>While it is a bit less important since we have only one variable, his code is recreating the variable on each and every hit. In general I'd say cache it in RAM and make it just once. Again - with him using ONE variable, it doesn't matter quite as much, but I'd still recommend it.</p><p>Proof that Ray can be an idiot. He is saying scope it to Application or worse. Request is great because it NEVER CHANGES and DOES NOT consume RAM. Of course you must consider how to use it but for say DataSourceNames is quite awesome and Ray is full of shit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665523">7</a> by Ben Nadel
		posted on 5/20/2007 at 5:26 PM
		</div>
		<div class="comment_text"><p>@Peter,</p><p>Aside from the senseless hostility, can you please explain to us where REQUEST-scoped variables get stored if they do not get stored in the server's RAM? Also, what do you mean by the fact that REQUEST never changes? It is wiped out from page request to page request. Also, during a single request, you can do whatever you want to it, including clearing it completely.</p><p>Your comments confuse me, so perhaps I am full of S**t as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665524">8</a> by Ben Nadel
		posted on 5/20/2007 at 5:28 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I am quite impressed with both these first two entries. The designs alone are much better than anything I assume would have been entered. When I saw the first screen shot above, I thought it looked like a FLEX application. Cool stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665527">9</a> by Peter Tilbrook
		posted on 5/20/2007 at 5:35 PM
		</div>
		<div class="comment_text"><p>You set your REQUEST vars (eg datasoursename) once only.</p><p>Used and abused.</p><p>A Request is "top down". With ColdFusion it starts with Application.cfm and ends with OnRequestEnd.cfm.</p><p>So anything that NEVER changes set in the REQUEST scope in Application.cfm,</p><p>There is nothing to "store" as such - the beauty of the request scope.</p><p>Web page is opened.... Application.cfm - yep - my page/s - yep - OnRequestEnd.cfm.  check!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665501">10</a> by DK
		posted on 5/20/2007 at 7:29 PM
		</div>
		<div class="comment_text"><p>@Peter - I think Ray meant you set it once and forget it for the life of the app running until onappstart is called again.</p><p>Request variables persist through the http request<br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F7%2Fhtmldocs%2Fwwhelp%2Fwwhimpl%2Fcommon%2Fhtml%2Fwwhelp.htm%3Fcontext%3DColdFusion_Documentation%26file%3D00001016.htm%3Ae1GPwYPJz7bwVXUAPnNYwgr3-Cg&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/7/htmldocs/wwhelp/wwhimpl/common/html/wwhelp.htm?context=ColdFusion_Documentation&amp;file=00001016.htm">http://livedocs.adobe.com/c...</a></p><p>I get what you're saying, but I think its apples and oranges to the first part Ray was referring to. If I understood it right anyhow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665502">11</a> by Jamie
		posted on 5/20/2007 at 9:11 PM
		</div>
		<div class="comment_text"><p>@Peter, DSN variables in the REQUEST scope?  Please explain this.  DSN stuff is something that will change per application, not per request, and it's something that all users of the app should share.  Therefore it belongs in the APPLICATION scope.  REQUEST is good for holding someone's login in (like when using NT Authentication) or parsing something out of the URL or the like, not datasource information storage.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665503">12</a> by Gary Funk
		posted on 5/20/2007 at 11:39 PM
		</div>
		<div class="comment_text"><p>Wow, I detect a little PMS in Peter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665504">13</a> by Raymond Camden
		posted on 5/20/2007 at 11:48 PM
		</div>
		<div class="comment_text"><p>First and foremost let me address the nature of your comments Peter. I have NO problem with people saying I'm wrong. In fact, thats one of the things I love about my blog. I can say X and gets LOT of good response, alternatives, AND corrections.</p><p>But your tone is not acceptable. In no way did I attack you personally. You also followed up this comment with a personal email to me that was also rude.</p><p>Please explain why you feel you need to attack me? I understand you don't agree with me, but if you can't be polite, I will simply start deleting your comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665507">14</a> by Raymond Camden
		posted on 5/20/2007 at 11:51 PM
		</div>
		<div class="comment_text"><p>So now that I've responded to the Peter's rudeness, let me respond to his technical response:</p><p>"Request is great because it NEVER CHANGES and DOES NOT consume RAM."</p><p>Um. Peter - where do you think variables are stored? All variables exist in RAM. It's just that some don't persist.</p><p>When you use the request scope as the author did, you put the values in the RAM scope on every hit. Lets say the variables take N bytes of RAM. So on every request you _create_ the variables and store them.</p><p>Using application n variables, you only create them once. You use the SAME amount of RAM. You just use it for longer. But the upshot is that you only make them once.</p><p>Now for string variables, this is no big deal. Shoot, I bet you could set 1000 string variables in &lt; 10 ms. But if I can set them one time and not have to set them again, that is less work that CF is doing on future requests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665508">15</a> by Jason
		posted on 5/21/2007 at 12:03 AM
		</div>
		<div class="comment_text"><p>When you have an application.cfm and you are setting request variables but want to change those over to application variables..should you do something like this...</p><p>&lt;cfif NOT isDefined("Application.DSN")&gt;<br>   &lt;cfset Application.DSN = "trees"&gt;<br>&lt;/cfif&gt;<br>or should you just do it without the cfif?<br>  &lt;cfset Application.DSN = "trees"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665506">16</a> by Raymond Camden
		posted on 5/21/2007 at 12:05 AM
		</div>
		<div class="comment_text"><p>If you are using old school app.cfm, then yes, you would use a cfif. If you are concerned about race conditions, you need to lock, but most folks don't have this worry.</p><p>If you are using app.cfc, then you don't have to worry at all. You just use onApplicationStart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665510">17</a> by Damon Gentry
		posted on 5/21/2007 at 1:25 AM
		</div>
		<div class="comment_text"><p>I still use the REQUEST scope for DSN variables.  I picked up the habit back in the 'old' Fusebox days.  Basically, I didn't want anyone to guess at a qryDeleteUser.cfm template and have the CFQUERY tag reference an APPLICATION scope variable that would be valid.  Essentially, the database calls only worked if the request followed the framework.  (Bypass the framework, and you don't get to the database!)  It gave me a small added bit of security, and I still use that when writing apps today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665509">18</a> by Simeon
		posted on 5/21/2007 at 1:33 AM
		</div>
		<div class="comment_text"><p>Wow, im glad this is a cf comp not a design comp as compared to these my entry is an ugly duckling!!!</p><p>Nice to see all the other entries too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665511">19</a> by DK
		posted on 5/21/2007 at 2:25 AM
		</div>
		<div class="comment_text"><p>@Damon<br> that sounds like something your app.cfc/app.cfm could/should prevent from happening. I never let users directly access files under an app that I don't want them to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665512">20</a> by John Ramon
		posted on 5/21/2007 at 4:49 AM
		</div>
		<div class="comment_text"><p>I like it but the dark side of me would have created Black Sheeps muhahahaha!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665514">21</a> by James Holmes
		posted on 5/21/2007 at 7:04 AM
		</div>
		<div class="comment_text"><p>As for setting the DSN, I prefer to init the CFC with this property and cache the CFC in the Application scope, in OnApplicationStart(). This makes the CFC independent of any scopes and since every query is in the CFC there's no reason to keep the DSN in a memory scope elsewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665513">22</a> by CoolJJ
		posted on 5/21/2007 at 9:24 AM
		</div>
		<div class="comment_text"><p>"Request is great because it NEVER CHANGES and DOES NOT consume RAM"</p><p>All variables are stored in RAM no matter what scope they are in. So are you saying that storing them in the REQUEST scope does not consume RAM? If they are stored in the APPLICATION scope they are stored once and can be accessed by the entire application. What if you store the DSN in the REQUEST scope and you have 5 simultaneous users? DSN is set and stored 5 times, no? What if your application had 1000 users? 10,000? I think you get the point.</p><p>CoolJJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665522">23</a> by Rob Makowski
		posted on 5/21/2007 at 5:29 PM
		</div>
		<div class="comment_text"><p>Wow, two submission that have a gui 1000 times better than mine.  When i first looked at the screen shot i thought that it was a flex 2 app as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665530">24</a> by Nick Sweeney
		posted on 5/21/2007 at 6:17 PM
		</div>
		<div class="comment_text"><p>As a Newb, I will humbly admit I am having trouble keeping up with some of the "speak" of what "we" (noobs) should be doing.</p><p>But my ears are perking up - but I think I am missing what some of the key "how to" - or better yet - Should Do - suggestions.</p><p>Particularly with Application.cfm vs .cfc and now with the Request scope. (Both items I know I need to learn more about.)</p><p>At the end of all these entries, are you going to go over the "most common suggestions" and maybe list links to "read these articles and tutorials to to learn how!"</p><p>While I am learning and trying to follow - I confess that sometimes everyone may as well be telling me to change my blinker fluid. :)</p><p>You know what you don't know, but it's hard to explain what you don't know when you don't know it. Know what I mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665529">25</a> by Raymond Camden
		posted on 5/21/2007 at 6:32 PM
		</div>
		<div class="comment_text"><p>I normally do run a 'wrap up' at the end. For what you mention though it may require more complete blog entries. Just hit me up at the end and let me know if there is something you want covered in more detail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665528">26</a> by Jonathon Stierman
		posted on 5/21/2007 at 7:32 PM
		</div>
		<div class="comment_text"><p>Yep -- I'm using the same Request.DSname functionality in my apps.</p><p>Is the Application scope always going to be available?  If I recall correctly, it's defined as long as you have a &lt;cfapplication&gt; tag or an Application.cfc <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> declaration.  Where-as the Request scope is always available without needing extra tags.  I may be way off on this though -- someone correct me!</p><p>And yep, my submission looks like crap compared to these two as well!  Let's see some ugly ones to make us non-designers feel better! :D</p><p>Jonathon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665531">27</a> by Quan Tran
		posted on 5/21/2007 at 10:31 PM
		</div>
		<div class="comment_text"><p>I think it's a best practice to use the request scope for something like DSN. Since the DSN shouldn't change per request, but could change at the application level.</p><p>I think Ben forta wrote an article on it a while back. Basically, by putting DSN at the request scope you avoid the possiblity of having a request with Mixed DSN's if someone happened to change the DSN in the application scope. Think the ideal way was to set the DSN in the application scope, and set request vars off those and use the request var in the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665526">28</a> by DK
		posted on 5/21/2007 at 10:45 PM
		</div>
		<div class="comment_text"><p>@Quan - do you mean this one? <a href="http://disq.us/url?url=http%3A%2F%2Fwww.forta.com%2Fblog%2Findex.cfm%3Fmode%3Dentry%26entry%3DA61B7134-3048-80A9-EF1BF3AB62874DC2%3ANAdpTNXQ6Wujx2Y5Lg5WyfYVRbw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.forta.com/blog/index.cfm?mode=entry&amp;entry=A61B7134-3048-80A9-EF1BF3AB62874DC2">http://www.forta.com/blog/i...</a></p><p>I see what he's saying I guess, but I think it depends on the scope of the application/variable. My .02 anyhow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665532">29</a> by Doug McCaughan
		posted on 5/21/2007 at 10:46 PM
		</div>
		<div class="comment_text"><p>In the way back, maybe 5 years ago, Ben Forta wrote an article for the ColdFusion Developer's Journal (I'll look up issue number and page number if anyone is that interested) begging people to switch from using application scope to request scope for variables like DSN. I think all of us were using application.dsn or application.datasource and Ben Forta gave very good reasons to start using the request scope instead. Frankly I don't remember the reasons but the habit sure stuck.</p><p>Hmmm. Should I be concerned that my captcha letters spell "nut"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665534">30</a> by Doug McCaughan
		posted on 5/21/2007 at 10:46 PM
		</div>
		<div class="comment_text"><p>In the way back, maybe 5 years ago, Ben Forta wrote an article for the ColdFusion Developer's Journal (I'll look up issue number and page number if anyone is that interested) begging people to switch from using application scope to request scope for variables like DSN. I think all of us were using application.dsn or application.datasource and Ben Forta gave very good reasons to start using the request scope instead. Frankly I don't remember the reasons but the habit sure stuck.</p><p>Hmmm. Should I be concerned that my captcha letters spell "nut"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665537">31</a> by Raymond Camden
		posted on 5/21/2007 at 11:13 PM
		</div>
		<div class="comment_text"><p>If you look at the article, he is STILL using application variables. He simply uses the request scope for a copy so you don't have to lock your reads from it.</p><p>And note the article is from 2001, back in the old (bad) days of needing to use cflock all the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665535">32</a> by Raymond Camden
		posted on 5/21/2007 at 11:24 PM
		</div>
		<div class="comment_text"><p>@JS - Yes, the app scope isn't always available, but since we are talking about application development here, I think it makes sense to assume we are talking about code that makes use of app.cfm/cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665536">33</a> by Quan Tran
		posted on 5/21/2007 at 11:37 PM
		</div>
		<div class="comment_text"><p>here's an article by Charlie Arehart<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfdj.sys-con.com%2Fread%2F41791.htm%3AVQHsi3rlz5L45dc5MGPif1b17LE&amp;cuid=3321886" rel="nofollow noopener" title="http://cfdj.sys-con.com/read/41791.htm">http://cfdj.sys-con.com/rea...</a></p><p>But this isn't the article i'm refering to in my example, i'm pretty sure ben forta wrote something on this.</p><p>Basically if you have mutiple queries in a single request and use application.dsn. What could happen is that if you change application.dsn, you could end up with a request that have queries hitting 2 dsn's. IE Development and Production. Which can be a major problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665539">34</a> by Raymond Camden
		posted on 5/21/2007 at 11:42 PM
		</div>
		<div class="comment_text"><p>When has a person changed the value of a dsn in production w/o restarting the application? I honestly don't feel like this is a valid reason. Yes, it _could_ happen, but I don't consider it something folks need to be afraid of.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665541">35</a> by Sammy Larbi
		posted on 5/21/2007 at 11:47 PM
		</div>
		<div class="comment_text"><p>Tell me the next one is called JamaicanMon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665544">36</a> by Dustin
		posted on 5/22/2007 at 12:47 AM
		</div>
		<div class="comment_text"><p>Since there seems to be some confusion about this, lets just reference the livedocs and see what they have to say:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F7%2Fhtmldocs%2F00001168.htm%3AsuuEckui3uAASV1BD0xCSb1bjqM&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/7/htmldocs/00001168.htm">http://livedocs.adobe.com/c...</a></p><p>For the lazy:</p><p>You do not need to use cflock when you read a variable or call a user-defined function name in the Session, Application, or Server scope if it is set in only one place in the application, and is only read (or called, for a UDF) everywhere else. Such data is called write-once. If you set an Application or Session scope variable in Application.cfm and never set it on any other pages, you must lock the code that sets the variable, but do not have to lock code on other pages that reads the variable's value. If you set the variable in the corresponding start method in Application.cfc (for example, onApplicationStart for Application scope variables), you do not have to lock the code that sets the variable.</p><p>However, although leaving code that uses write-once data unlocked can improve application performance, it also has risks. You must ensure that the variables are truly written only once. For example, you must ensure that the variable is not rewritten if the user refreshes the browser or clicks a back button. Also, it can be difficult to ensure that you, or future developers, do not later set the variable in more than one place in the application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665542">37</a> by Dustin
		posted on 5/22/2007 at 12:56 AM
		</div>
		<div class="comment_text"><p>Further, the reason for using the REQUEST scope is:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F7%2Fhtmldocs%2F00000912.htm%3Aw-L6TLKXl7_kYmamuhusXhiOWSA&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/7/htmldocs/00000912.htm">http://livedocs.adobe.com/c...</a></p><p>For the lazy:</p><p>REQUEST:<br>Used to hold data that must be available for the duration of one HTTP request. The Request scope is available to all pages, including custom tags and nested custom tags, that are processed in response to the request.</p><p>This scope is useful for nested (child/parent) tags. This scope can often be used in place of the Application scope, to avoid the need for locking variables. Several chapters discuss using the Request scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665543">38</a> by Mike V
		posted on 5/22/2007 at 1:56 AM
		</div>
		<div class="comment_text"><p>I wish I could agree with not needing to lock the session and application scope in a write-once scenario, but my own hands on experience is that it is absolutely necessary even in MX 6 and 7.</p><p>If you disagree, then either of these two situation is probably true: The site does not receive enough load, say around 5-10 simultaneous requests average or you do not receive errors in such a fashion where it would be apparent that random undefined session variable errors are occurring.</p><p>Took me about a week to figure this out. I would set a session var inside of my cflogin tag. In some circumstances that var would then be referenced 10 times before finally failing as being undefined. Made absolutely no sense. Finally I started using duplicate() inside a read-only session scope lock to copy the entire session scope into request.session and changed all my references so that a cflock was present regardless of whether I read or wrote. Problem solved. Similar problems with the application scope spurred me to do the same there.</p><p>Only reason why I mention load is that the issue never surfaced during the entire trial phase of development. Not until the site was live and the usage increased did the issue appear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665548">39</a> by Raymond Camden
		posted on 5/22/2007 at 2:33 AM
		</div>
		<div class="comment_text"><p>Mike: Interesting. I don't think I've seen that, and I've worked on sites with load like this. Did you file a bug report with Adobe on it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665549">40</a> by Mike V
		posted on 5/22/2007 at 3:32 AM
		</div>
		<div class="comment_text"><p>No, never did but I did open it up for discussion on the Adobe CF Advanced Techniques forum. Looking back at that reminded me that when the problem occurs a cfdump of the entire scope shows that the variable exists, but it's value is "[undefined struct element]".</p><p>Kind of on the same topic, but I tried instantiating my components into the application scope to improve performance. I found that when doing so my "var" defined method variables were not as private as advertised. For instance, my RSA encryption algorithm begins by finding two prime numbers and saves them in a 2d array. It then uses those values in a loop while checking for a suitable key. Somehow my two primes were being changed mid-loop causing out-of-bounds errors. Originally I made the mistake of storing these primes in the "this" scope, so the error made sense. The problem persisted however after rewriting the method to return the array into the "var" method variable.</p><p>Ever since my session errors, I've always duplicated both the application and session scopes into the request scope at the end of my onRequestStart() method. Because components could not be duplicated, I had to check each application scope variable using getMetaData() before duplicating. Components were simply referenced whereas all other variables were duplicated. Not being able to do that meant duplicating the application scope prior to instantiating the components, but I continued to instantiate every component at the end of the onRequestStart() because doing so per-page as needed was something I didn't have time to deal with. Kind of a sucker-punch straight to the gut.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665547">41</a> by Raymond Camden
		posted on 5/22/2007 at 4:55 PM
		</div>
		<div class="comment_text"><p>I definitely encourage you to give this a try in CF8 when you can - if you still have code left in the original form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665546">42</a> by David C-L
		posted on 5/25/2007 at 3:27 AM
		</div>
		<div class="comment_text"><p>I'll speak up as one more person who uses the Request scope for data source names.  A few reasons:</p><p>First, one of my production sites still runs CF 5, and there are locking issues with the application scope.  I realize this is anathema to many of you, but it's my world.</p><p>Second, we actually do change the data source name occasionally.  When we do maintenance on our primary database server, we switch our request variables to point to a backup database server.</p><p>Using the application scope for this is certainly a standing convention-- if you're not doing it in your code, another developer would certainly have reason to ask you why.  But the truth is, there's no technical drawback to using the request scope.  We're talking about a tiny little string defined in the request scope-- there's no possible argument that this is going to have any negative effect from a performance standpoint.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665550">43</a> by Jason Martin
		posted on 6/16/2007 at 3:11 AM
		</div>
		<div class="comment_text"><p>I disagree with writing the DSN values to the Request scope. If there are hundreds of thousands of page views a day, each view is going to require CF to read AND write to memory. If the application writes ONCE and reads many your better off. What you can do is write a resetter gateway that will overwrite parts of your application scope when you need to reset it(if it's a large scope). Don't make the application scope flat, store parts and pieces in structures, and on reset build a temp structure with new values and at the end of the method overwrite the application value with the new built value. The reason you want to use a gateway is that if it takes a few seconds to rebuild the application scope, the page will still load fast(using the old application scope), but will rebuild in the background. The only person that takes the hit is the first person that hits the site after the service is restarted.</p></div>
	</div>
</div>
		