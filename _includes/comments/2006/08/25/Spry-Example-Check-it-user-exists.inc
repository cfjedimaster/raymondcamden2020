
<div class="comment" id="c_1713656792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656792">1</a> by BL
		posted on 8/26/2006 at 2:54 AM
		</div>
		<div class="comment_text"><p>Nice.  Works good.</p><p>Can you explain this call:</p><p>request.xhRequest.responseText</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656814">2</a> by James Edmunds
		posted on 8/26/2006 at 5:59 AM
		</div>
		<div class="comment_text"><p>Ray, you might be able to use Prototype's formObserver instead of onkeyup. If I wasn't on vacation typing this from my laptop lying on the hotel bed, I might give a rip at a sample for you, but at the very least I'll bookmark this for a look when I get back!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656813">3</a> by Raymond Camden
		posted on 8/26/2006 at 4:56 PM
		</div>
		<div class="comment_text"><p>Yeah - You keep raving about it and I can't wait to see it at the UG meeting. You know - something we should consider - maybe doing a joint preso on Breeze sometime from my office. If our meeting goes well "live", lets talk about it more. I bet my readers would love to see me do Spry again, _and_ see an alternative.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656812">4</a> by Raymond Camden
		posted on 8/26/2006 at 4:57 PM
		</div>
		<div class="comment_text"><p>BL: That is just the API I found in other examples. I don't believe it is properly documented it yet though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656811">5</a> by Edward T
		posted on 8/26/2006 at 5:09 PM
		</div>
		<div class="comment_text"><p>I see examples like this just-in-time lookup in AJAX libraries, but I'm not convinced.  Even at my modest typing speed, the HTTP calls are so far behind me that I'm done and on to the next field before the first of 5 to 7 calls returns.  For that reason, I'm still a big fan of the onBlur event.  Nonetheless, thanks for the Spry example!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656816">6</a> by Rob Brooks-Bilson
		posted on 8/26/2006 at 6:09 PM
		</div>
		<div class="comment_text"><p>I think the type ahead idea is cool, but I don't think I'd ever use it to show usernames for an application.  That seems to me to be inviting trouble as you're essentially giving people (potentially the wrong people) one component of the login.  It's a security issue.  A person with less than the best of intentions could essentially hit the letter "a" and get a list of all your "a" users, etc.</p><p>For "sensitive" sites such as customer portals, you may be giving away more information than that to competing customers, or competitors.</p><p>You're blog reaches a lot of people, so I'd hate to see any of them adopt the type ahead technique for this exact purpose, knowing that it creates a security concern.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656817">7</a> by Raymond Camden
		posted on 8/26/2006 at 6:19 PM
		</div>
		<div class="comment_text"><p>Edward: As I mentioned, I was using a synch approach. This slows down the lookup. This is NOT optimal and should be switched to an asynch approach. There was another reason why I didn't do that, but that reason no longer applies so I'm going to post a follow up (because it shows another technique as well.)</p><p>Rob: Rob, was that to me? I don't use the type ahead to reveal usernames, I just use it to reveal dupes. So you can't type A and see Andy, Andrew, etc.  The code only fires when usernames are more than 3 characters and to find a dupe you would need to know the name of the dupe. You _could_ use it to get a list of usernames, but only a bit faster than you could w/o it. If I wanted to sniff usernames w/o AJAX, I'd fill the form out, click submit, and go Back and tweak the username. I _do_ see your point, but I don't believe this would help hackers very much. Now - one thing I should point - and I just realized this, the CFM file does NOT check the length, so it would be a security hole. It should also check the referer (which can be faked, but would stop most script kiddies).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656819">8</a> by Rob Brooks-Bilson
		posted on 8/26/2006 at 6:27 PM
		</div>
		<div class="comment_text"><p>See what I get for skimming the post!  My appologies Ray, you're right.  I missed the part about pulling back just the dupes.</p><p>I still don't think it's a good idea to show them if a username exists, though.  Same for a bad login.  I know some sites will tell you "username not found", but in my book, sites shouldn't give back any more information than "invalid login".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656820">9</a> by Raymond Camden
		posted on 8/26/2006 at 6:39 PM
		</div>
		<div class="comment_text"><p>Rob, this isn't a logon though, it is a registration (and if that isn't clear, it is my fault).</p><p>However - all in all - I feel strongly enough about your comments that I'm going to ban you - no wait, I mean I'm going to edit the entry to make sure folks read your comments below. You know - if you have any doubt when it comes to security crap, it is probably almost always a good idea to lean towards the more secure option. (Entry will be edited in 5 mins.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656794">10</a> by Rob Brooks-Bilson
		posted on 8/26/2006 at 6:40 PM
		</div>
		<div class="comment_text"><p>Ok, I obviously shouldn't post this early in the morning on a Sat, and definitely not before a cup of coffee.</p><p>Ray, just ignore my comments.  Right after I posted the last one I realized you weren't checking on a login form, but rather an account sign-up form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656821">11</a> by Raymond Camden
		posted on 8/26/2006 at 6:42 PM
		</div>
		<div class="comment_text"><p>Rob, absolutely not! If there is ANYTHING to be anal or 'sensitive' about, this is exactly it. I'm very happy you made these comments. I'm still going to ban you, but thanks. ;)</p><p>Seriously though - folks may be so turned on by AJAX that they may forget security issues. This is something folks should definitely keep in mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656815">12</a> by mbeach
		posted on 8/27/2006 at 8:44 PM
		</div>
		<div class="comment_text"><p>Is this supposed to be "Check if user exists"? it/if<br>thanks for the examples.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656823">13</a> by Raymond Camden
		posted on 8/27/2006 at 8:45 PM
		</div>
		<div class="comment_text"><p>Yes. Was it not clear?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656822">14</a> by mbeach
		posted on 8/28/2006 at 4:45 PM
		</div>
		<div class="comment_text"><p>just referring to the potential typo in the heading.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656824">15</a> by Raymond Camden
		posted on 8/28/2006 at 5:12 PM
		</div>
		<div class="comment_text"><p>Oops. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656826">16</a> by Dan G. Switzer, II
		posted on 8/28/2006 at 5:56 PM
		</div>
		<div class="comment_text"><p>Back to security issues, doing this does open the door a bit for a hacker. Right now as this script stands, it's very easy for a hacker to start posting data to the userchecker.cfm template to harvest a list of valid usernames.</p><p>It's always important to be things in place to monitor for suspicious looking traffic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656828">17</a> by Raymond Camden
		posted on 8/28/2006 at 5:59 PM
		</div>
		<div class="comment_text"><p>I definitely agree that the CFM file, as stands, is too insecure. It should have a length check, like the front end. It should check REFERER, which can be faked, but it would be nice to check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656832">18</a> by Raymond Camden
		posted on 8/28/2006 at 6:06 PM
		</div>
		<div class="comment_text"><p>I'm planning a followup to this article to show using XML results in Spry (again, non-dataset ones). In my followup, I'm going to change it to a simple string lookup type function. For example, you can imagine a CMS that demands you use unique page names.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656830">19</a> by William from Lagos
		posted on 9/1/2006 at 6:43 PM
		</div>
		<div class="comment_text"><p>JUST TESTING YOUR COMMENTS VIA BLOGCFC FLEX</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656829">20</a> by xavier francis
		posted on 6/25/2007 at 8:39 PM
		</div>
		<div class="comment_text"><p>I am not able to get the demo included here to work. I also tried to copy the code and test. Nothing happens - I even tried with a onBlur event - same results. Could some one tell me what I am doing wrong and point me to a working version? Thanks for all the great work.<br>The code I tested with:<br>REGISTER.CFM<br>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>" xmlns:spry="<a href="http://disq.us/url?url=http%3A%2F%2Fns.adobe.com%2Fspry%3A0EUJPQwcPdEoFcLHHCdKdxPWbb8&amp;cuid=3321886" rel="nofollow noopener" title="http://ns.adobe.com/spry">http://ns.adobe.com/spry</a>"&gt;<br>&lt;head&gt;<br>	&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1"&gt;&lt;title&gt;Spry Test&lt;/title&gt;<br>	&lt;script language="JavaScript" type="text/javascript" src="../SpryAssets/xpath.js"&gt;&lt;/script&gt;<br>	&lt;script language="JavaScript" type="text/javascript" src="../SpryAssets/SpryData.js"&gt;&lt;/script&gt;<br>	&lt;script language="JavaScript" type="text/javascript" src="../SpryAssets/SpryUtils.js"&gt;&lt;/script&gt; <br>	&lt;script language="JavaScript" type="text/javascript"&gt;<br>	&lt;!--<br>	function checkUsername() {<br>	   var uvalue = document.getElementById("username").value;<br>	   if(uvalue.length &lt; 4) { status(''); return; }<br>	   Spry.Utils.loadURL("GET","registerChecker.cfm?username="+encodeURIComponent(uvalue), false, usercheck);<br>	}<br>	function usercheck(request) {<br>	   var result = request.xhRequest.responseText;<br>	   if(result == 0) status("Username not available!");<br>	   else status('');<br>	}<br>	function status(str) {<br>	   var resultblock = document.getElementById("resultblock");<br>	   resultblock.innerHTML = str;   <br>	}<br>	--&gt;<br>	&lt;/script&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>&lt;form id="userform" action="null.html" method="post"&gt;<br>&lt;h2&gt;Register&lt;/h2&gt;<br>&lt;table width="600" border="0"&gt;<br>   &lt;tr valign="top"&gt;<br>      &lt;td align="right" width="200"&gt;username (min 4 characters)&lt;/td&gt;<br>      &lt;td width="400"&gt;&lt;input type="text" id="username" name="username" onBlur="checkUsername()"&gt;<br>      &lt;span id="resultblock" class="error"&gt;&lt;/span&gt;&lt;/td&gt;<br>   &lt;/tr&gt;<br>   &lt;tr&gt;<br>      &lt;td align="right"&gt;password&lt;/td&gt;<br>      &lt;td&gt;&lt;input type="password" name="password"&gt;&lt;/td&gt;<br>   &lt;/tr&gt;<br>   &lt;tr&gt;<br>      &lt;td align="right"&gt;confirm password&lt;/td&gt;<br>      &lt;td&gt;&lt;input type="password2" name="password2"&gt;&lt;/td&gt;<br>   &lt;/tr&gt;<br>   &lt;tr&gt;<br>      &lt;td&gt;&amp;nbsp;&lt;/td&gt;<br>      &lt;td&gt;&lt;input type="button" value="Fake Submit"&gt;&lt;/td&gt;<br>   &lt;/tr&gt;<br>&lt;/table&gt;<br>&lt;/form&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p><p>REGISTERCHECKER.CFM<br>&lt;cfsetting showdebugoutput=false&gt;<br>&lt;cfparam name="url.username" default="bob"&gt;<br>&lt;cfset takennames="victor,jack,ashley,gloria,nikki"&gt;<br>&lt;cfif listFindNoCase(takennames, url.username)&gt;<br>   &lt;cfset available = 0&gt;<br>&lt;cfelse&gt;<br>   &lt;cfset available = 1&gt;<br>&lt;/cfif&gt;<br>&lt;cfoutput&gt;#available#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656831">21</a> by Raymond Camden
		posted on 6/25/2007 at 10:21 PM
		</div>
		<div class="comment_text"><p>For the demo, try here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fspryuser%2Findex.html%3AP0mDhOtNrXYImS52F5D29wwsCJ8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/spryuser/index.html">http://www.coldfusionjedi.c...</a></p><p>As for your own code - do you get a JS error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656833">22</a> by xavier francis
		posted on 6/26/2007 at 12:42 AM
		</div>
		<div class="comment_text"><p>No JavaScript error. Now that I checked, it is actually sending back the value of available - the issue is it is not displaying this either in the resultblock div or in an alert box (i just get a blank alert box). When i check the response on my Firebug console, i do see the value as 1.</p><p>I need to capture the values returned and update the form fields as well as the dataset in the master detail set up that i am planning to use this for.</p><p>Thanks,<br>-Xavier</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656836">23</a> by Duane Hardy
		posted on 8/18/2008 at 10:31 PM
		</div>
		<div class="comment_text"><p>I am testing this on a form I am developing.  I have put the REGISTERCHECKER.CFM in the form of a component.</p><p>I am having trouble with the loadURL return (var result = request.xhRequest.responseText;).</p><p>I got tons of html.  The cfc returns the proper result if I enter the url directly ( http://76.12.43.89/cfc/reg.cfc?method=userCheck&amp;uvalue=dthardy ).</p><p>I have an alert that pops up with the var result @ http://76.12.43.89/_action/registration_tmp2.cfm</p><p>I am testing it on the "Invitation Code" textfield.  I have been struggling with this all day.  Any ideas how to fix?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656835">24</a> by Raymond Camden
		posted on 8/18/2008 at 10:34 PM
		</div>
		<div class="comment_text"><p>Actually, you aren't. View source on the URL and you see a lot of stuff on top. Both comments and the fact that the CFC wddx-encoded the response. In order to use a CFC and not have stuff around it, you need to use returnFormat, which will work in CF8. See the docs for more info on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656838">25</a> by Duane Hardy
		posted on 8/19/2008 at 1:32 AM
		</div>
		<div class="comment_text"><p>Looked through livedocs for CF8.  Saw where invoking a cfc by url "returns a result using the cfreturn tag, ColdFusion converts the text to HTML edit format (with special characters replaced by their HTML escape sequences), puts the result in a WDDX packet, and includes the packet in the HTML that it returns to the client."  I couldn't find specific instructions to get rid of said HTML!</p><p>I came up with returnformat="plain".  This removed the wddx packet stuff but all the HTML info is still showing up before the 0 or 1.</p><p>How do you get rid of the rest of the HTML?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656844">26</a> by Raymond Camden
		posted on 8/19/2008 at 1:35 AM
		</div>
		<div class="comment_text"><p>If you view source, you will see it's a lot of html comments. That's being generated by something else on your server, most likely an Application.cfm or Application.cfc file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656845">27</a> by Duane Hardy
		posted on 8/19/2008 at 1:55 AM
		</div>
		<div class="comment_text"><p>It was in the application.cfm file.  I commented out all the cfoutput html.  Hopefully I won't need any of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656841">28</a> by Duane Hardy
		posted on 8/19/2008 at 1:55 AM
		</div>
		<div class="comment_text"><p>I meant to conclude with "It works now!"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656840">29</a> by Duane Hardy
		posted on 8/27/2008 at 6:00 AM
		</div>
		<div class="comment_text"><p>I am now trying to get "check if user exists" to work with spry textfield validation for required, minchar, and maxchar.  I have written a javascript function that runs through each form field to check validation status before performing the next process.  I am having trouble adding checkUsername process to the validation function.  I tried making 'result' a global variable but it caused both the usercheck and validation function to fail.  What is a better method?  Here is the key elements of what I have now.</p><p>**************My function*****************</p><p>		function userValidate(){	<br>			userNameObj.validate();<br>			firstNameObj.validate();<br>			lastNameObj.validate();<br>			genderObj.validate();<br>			zipCodeObj.validate();</p><p>			if ((userNameObj.validate() &amp;&amp; firstNameObj.validate() &amp;&amp; lastNameObj.validate() &amp;&amp; genderObj.validate() &amp;&amp; zipCodeObj.validate() === true) &amp;&amp; (result != 0)) {<br>				sp1.showPanel('findCause');<br>			}else{<br>				return false;<br>			}</p><p>***********What I changed in your example***********</p><p>	     var result = "";</p><p>             function usercheck(request) {<br>		   result = request.xhRequest.responseText;</p><p>		   if(result == 0) status("Username not available!");<br>		   else status('');<br>		}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656842">30</a> by Raymond Camden
		posted on 8/27/2008 at 6:34 PM
		</div>
		<div class="comment_text"><p>The issue is that my code uses an asynch process to check the value. Ie, fire and call some func when done. You would need to change it to a synch process in your validation. Check the docs for Spry.Utils.loadURL to see if that is possible. It should be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656846">31</a> by Daniil
		posted on 10/24/2008 at 8:46 PM
		</div>
		<div class="comment_text"><p>I am trying to use your script to check for existing product title in the DB, which works well except when i click on another tab in firefox, then it gives me a following spry error (pops up in the lowest right corner of the browser):<br>Exception caught while loading agentSites/userchecker.cfm?productname=hiking%20in%20cuba: Function expected</p><p>I tried googling it and changing all the possible things in the script, but the error still exists.</p><p>Maybe you can shine the light on the problem?</p><p>i am using onBlur() to trigger the check, can that be an issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656849">32</a> by Raymond Camden
		posted on 10/24/2008 at 9:39 PM
		</div>
		<div class="comment_text"><p>Well in theory, if onBlur was the issue, then you could click anywhere on the page to force it. To be honest, I've _never_ seen a JS bug thrown by clicking on another tab. Do you also get it if you click in the chrome some place?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656847">33</a> by Daniil
		posted on 10/24/2008 at 10:00 PM
		</div>
		<div class="comment_text"><p>Thanks a lot for answer! <br>It seems like clicking on another tab (or anywhere else for that matter, since onblur triggers anyways) causes that error most of the time, though it happens when i just click off the field too, just more rarely i guess.</p><p>What really throws me off is that it is such a random error... It pops up both when it finds the same product name and when there is no same name in db.</p><p>Here is the code: <br>&lt;script&gt;<br>Spry.Data.Region.debug = true;<br>function checkProductname() {<br>	var uvalue = document.getElementById("productTitle").value;<br>Spry.Utils.loadURL("GET","agentSites/userchecker.cfm?productname="+encodeURIComponent(uvalue), false, productcheck);<br>}<br>function productcheck(request) {<br>	var result = request.xhRequest.responseText;<br>	if(result == 0){<br>		status("&lt;br /&gt;This title already exists! Please choose another one.");		document.getElementById("productTitle").focus();		document.getElementById("productTitle").select();<br>	}else{ <br>		status('');<br>	}<br>}<br>function status(str) {<br>	var resultblock = document.getElementById("resultblock");<br>	resultblock.innerHTML = str;	<br>}<br>&lt;/script&gt;</p><p>And here is the usechecker.cfm:<br>&lt;cfsetting showdebugoutput=false&gt;<br>&lt;cfparam name="url.productname" default=""&gt;<br>&lt;cfquery name="checkName" datasource="agent_sites"&gt;<br>	SELECT productTitle<br>	FROM products<br>&lt;/cfquery&gt;<br>&lt;!--- Create a list of existing products ---&gt;<br>&lt;cfset productList = valueList(checkName.productTitle, ",")&gt;<br>&lt;cfif listFindNoCase(productList, url.productname)&gt;<br>   &lt;cfset available = 0&gt;<br>&lt;cfelse&gt;<br>   &lt;cfset available = 1&gt;<br>&lt;/cfif&gt;<br>&lt;cfoutput&gt;#available#&lt;/cfoutput&gt;</p><p>I mean if your example works fine for me, than its gotta be something with backend...</p><p>Also, that page uses spry for form validation as well, maybe its two spry scripts colliding???</p><p>Thanks again for help, i am so desperate already, i am trying to punish this error for like ever now ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656851">34</a> by Raymond Camden
		posted on 10/24/2008 at 11:25 PM
		</div>
		<div class="comment_text"><p>Well it says that productcheck doesn't exist. productcheck is the call back function you wrote to handle the result. I don't see any possible way for your code to accidentally overwrite it. Honestly I have no idea unfortunately. Is it online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656848">35</a> by Daniil
		posted on 10/24/2008 at 11:42 PM
		</div>
		<div class="comment_text"><p>Its on the company's internal website, so i can't really give access to that :(</p><p>Thank you very much for trying to help out, i really appreciate it.</p><p>I will let you know if i find the solution (the weirdest thing is that when i google something like "spry function expected" it doesnt even give me any good results, so it must be something wrong with my setup...)</p><p>This script is within another massive website, which i havent built, so its possible that something there is causing the problems. So i guess i should really start with isolating your script and seeing how it works standalone...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656857">36</a> by Daniil
		posted on 10/28/2008 at 12:16 AM
		</div>
		<div class="comment_text"><p>As i promised, i would post the result of my fight with the script. Well it seems like it's fixed now.</p><p>What i did is get rid of status(str) function (since that is what was giving me a hard time) and in the end have that:</p><p>if(result == 0){<br>			document.getElementById("resultblock").innerHTML = "&lt;br /&gt;This title already exists! Please choose another one.";<br>		}else{ <br>			document.getElementById("resultblock").innerHTML = "";<br>		}</p><p>Not sure if anyone else will have a problem like that, but i thought i would just share it.</p><p>Thank you again for trying to help out and mostly for the script itself!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656855">37</a> by Dani
		posted on 9/16/2009 at 9:36 PM
		</div>
		<div class="comment_text"><p>Hello Raymond, not the first time I write to you and always with great attention from you.<br>Raymond, I wasn't able to make your demo (not the code, but the demo) to work. The link on your post doesn't work, and the link you gave to Xavier on June 25, 2007 doesn't respond to the validation.</p><p>I'm creating a form where designers add collections to the database. Basically I need to avoid the same collection is entered again and I would love to do it without submitting the form (real time username validation). Do you have a sample for this?</p><p>Thanks so much, as usual.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656854">38</a> by Raymond Camden
		posted on 9/16/2009 at 9:39 PM
		</div>
		<div class="comment_text"><p>I just tested and it worked for me in FF3.5. I entered "victor" and it told me the user was taken. Did you enter that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656853">39</a> by Dani
		posted on 9/16/2009 at 10:01 PM
		</div>
		<div class="comment_text"><p>My mistake. I apologize.<br>Let me ask you something else: my hosting provider needs to have what installed? Just CF8 or something else?</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656856">40</a> by Raymond Camden
		posted on 9/17/2009 at 3:27 PM
		</div>
		<div class="comment_text"><p>Not even CF8 - this should work with ... shoot, CF1 even. It's mainly the Spry code. CF is just returning a 1 or a 0.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656860">41</a> by Dani
		posted on 10/1/2009 at 8:20 PM
		</div>
		<div class="comment_text"><p>Hello again Ray, I have a question about this: I'm doing some tests with two different names. It works with one of them but not with the other one. I've tried putting a text message in case the name is available and tried entering the one taken and it shows it as available.</p><p>Do you know why this could be happening?</p><p>Thanks, as usual.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656863">42</a> by Dani
		posted on 10/1/2009 at 8:50 PM
		</div>
		<div class="comment_text"><p>Something new just discovered: It will respect the latest value. Let's say I enter a new username, so if I try to re-enter that one, it will display the warning. Now, if I enter another one, the the previous one will show as available....checking the code to see where I'm telling my query to check the latest record...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656862">43</a> by Dani
		posted on 10/1/2009 at 9:01 PM
		</div>
		<div class="comment_text"><p>I think it's solved with Daniii comment from  October 27 2008. Almost a year ago. Thanks Daniii, thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656861">44</a> by Raymond Camden
		posted on 10/1/2009 at 9:19 PM
		</div>
		<div class="comment_text"><p>Catching up now. Glad you got it. :)</p></div>
	</div>
</div>
		