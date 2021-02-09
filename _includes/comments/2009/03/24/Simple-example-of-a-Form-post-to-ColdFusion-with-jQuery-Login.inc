
<div class="comment" id="c_1713714067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714067">1</a> by Joshua Siok
		posted on 3/24/2009 at 5:22 PM
		</div>
		<div class="comment_text"><p>From what I know, doing this will send the authentication information (username/password) in clear-text and would be easily sniffed in a MITM attack.  From what I understand of AJAX, this is still true even if the login.cfm page is used under SSL.  If I am correct, could we use a JavaScript function to hash the password on the client before sending.  Then use an identical CF hashing method to compare what's in the password database with what we get from the client?  Maybe there's a better way to secure the communications.  If I know the communications can be secured with an encryption method, I would definitely implement similar code in a project I'm currently working on.   Ray - I'd like to hear your thoughts on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714068">2</a> by Raymond Camden
		posted on 3/24/2009 at 5:27 PM
		</div>
		<div class="comment_text"><p>I don't believe you are right. If the pages were under SSL, then the request to hit the CFC would use the same domain and protocol, and would also be SSL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714070">3</a> by Joshua Siok
		posted on 3/24/2009 at 6:00 PM
		</div>
		<div class="comment_text"><p>@Ray  As usual... You're correct! My occasional misconceptions of how things work sometimes make me jump to concussions.  I've just recently began using jQuery primarily as a client side solution (with ColdFusion) and examples like this are great for sparking ideas and thinking outside the box.  Thanks for the great advice and keep up the good work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714078">4</a> by Raymond Camden
		posted on 3/24/2009 at 6:24 PM
		</div>
		<div class="comment_text"><p>Please know, I'm still a Padawan of Ajax, and certainly jQuery. :) Don't assume I'm right. Except when I am. Then I'm brilliant. When I'm wrong, blame the docs! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714077">5</a> by Joshua Siok
		posted on 3/24/2009 at 7:06 PM
		</div>
		<div class="comment_text"><p>@Ray If I wasn't so busy, I would do some actually testing.  After doing some quick research on AJAX/SSL/jQuery, I found that you're most likely correct.  I'll give you the benefit of the doubt anyway.  I'd definitely like to hear from some other people to verify this claim of security. Can someone please test this under an SSL page to see what server port the AJAX request is coming in on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714079">6</a> by Brian
		posted on 3/24/2009 at 9:49 PM
		</div>
		<div class="comment_text"><p>confirmed -- SSL roundtrip</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714088">7</a> by Raymond Camden
		posted on 3/24/2009 at 9:51 PM
		</div>
		<div class="comment_text"><p>Does this mean I'm brilliant? (Lie to me please.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714080">8</a> by Brian
		posted on 3/24/2009 at 9:55 PM
		</div>
		<div class="comment_text"><p>5.5W White LED brilliant :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714082">9</a> by Chris
		posted on 3/24/2009 at 10:04 PM
		</div>
		<div class="comment_text"><p>Ha! I did something just like this.  Except mine is a bit more verbose.  I used .ajax() instead of .post().  Both work though.  I've also coupled it with a nice jquery dialog logout screen.</p><p>Thanks Ray for showing me that I'm not a complete idiot and I'm on the right track...hahah</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714081">10</a> by Joshua Siok
		posted on 3/24/2009 at 10:24 PM
		</div>
		<div class="comment_text"><p>@Brian - Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714085">11</a> by Daniel
		posted on 3/27/2009 at 3:35 PM
		</div>
		<div class="comment_text"><p>I have this example working (nice stuff), but I was wondering if you have tried using the jQuery load() function in ColdFusion?  I have tried doing something as simple as:<br>$.('#result').load('post.cfm');</p><p>But nothing appears to be returned.  All I'm asking it to do is return a string of text, so I don't understand what could go wrong.  Are you able to use .load()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714087">12</a> by Raymond Camden
		posted on 3/27/2009 at 3:38 PM
		</div>
		<div class="comment_text"><p>Yes, it does work. I assume you tested in Firebug. What do you see there?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714086">13</a> by Daniel
		posted on 3/27/2009 at 4:48 PM
		</div>
		<div class="comment_text"><p>After looking at my code a little more closely, I seemed to feel a disturbance in the force.  I saw that there was a single extra period after the dollar sign (shown in my original comment).  That period didn't belong there.  So with a firm grasp of my light saber, I struck it away and reclaimed the harmony of the force.  So satisfying this victory was.  I think I'll head over to the Cantina coffee shop for a chat with Greedo.  Come on over, I'll buy you a drink!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714083">14</a> by Jeff
		posted on 8/21/2009 at 1:49 AM
		</div>
		<div class="comment_text"><p>I'm trying to get this example to work for me but I'm not sure if it is my code or if its that stupid OnRequest in the Application.cfc bug that is causing me problems (I did the work around <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F3%2F19%2FAsk-a-Jedi-Ajaxbound-requests-and-onRequest%3Ao-28M7XriwNOSeLnFmpmDxQZYts&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/3/19/Ask-a-Jedi-Ajaxbound-requests-and-onRequest">http://www.coldfusionjedi.c...</a> but I am not sure exactly how it breaks the code I would assume it just wouldn't work at all????).</p><p>What happens for me is when I submit the form, my CFC is logging me in. It returns "success" to the javascript code. But the code to deal with the returned data ("Success" or "Failure") doesn't run properly.</p><p>The odd thing is if I just display what my CFC returns using jquery it shows "Success" or "Failure" depending on if I supplied the proper login or not.</p><p>I changed the code to...</p><p> &lt;script&gt;</p><p>function sendForm() {<br>    $("#status").html('Logging in...');<br>    $.post('ajaxtest.cfc?method=processLogin&amp;returnFormat=plain',$("#loginForm").serialize(),function(data,status){<br>        data = $.trim(data)<br>        if (data == 'success') {<br>            $("#status").html('&lt;b&gt;You are logged in!&lt;/b&gt;');<br>        } else {<br>            //good login<br>            $("#status").html(data);</p><p>        }</p><p>});</p><p>return false</p><p>}</p><p>$(document).ready(function() {<br>$("#loginForm").submit(sendForm)<br>})</p><p>&lt;/script&gt;</p><p>As you can see if data equals "success" display that I logged in. Else just display what data is.</p><p>This part of the code doesn't work even if data equals "success".</p><p>if (data == 'success') {<br>            $("#status").html('&lt;b&gt;You are logged in!&lt;/b&gt;');</p><p>But this part of the code works.</p><p>else {<br>            //good login<br>            $("#status").html(data);</p><p>It will display "Success" or "Failure" depending on if I supplied the proper login or not.</p><p>My question is, is this caused by the OnRequest bug or is my script messed up??? I'm not sure what the bug does as far as breaking ajax, remoting, etc. I know that is does break it, but I'm not sure in what way, like I said before I'd assuming that it just wouldn't work. But the fact that I'm passing my login to the CFC and the CFC is returning a variable to my jquery and I can display that variable, I just can't process it in the code, doesn't seem like the OnRequest bug would do that. Or am I wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714084">15</a> by Raymond Camden
		posted on 8/21/2009 at 1:52 AM
		</div>
		<div class="comment_text"><p>If you console.log (assuming you have Firebug) data, what do you see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714091">16</a> by Jeff
		posted on 8/21/2009 at 11:48 PM
		</div>
		<div class="comment_text"><p>Ray, Thanks for getting back to me. I've been reading you blog a lot lately. Awesome stuff. Thank you!</p><p>Any way, I'm super new to firebug so I don't know exactly how every thing works. But I checked the console logs, no errors as far as I could tell. All it said was POST (domain name) 200 OK.</p><p>So I broke my test application down to the basics and added one piece at a time. Found out that it was an include file in the onRequestEnd. It had a bit of html in it (&lt;/body&gt; and &lt;/html&gt;) (since found out that you really shouldn't use OnRequestEnd for the footer but still doesn't explain this...)</p><p>&lt;!--- Runs at end of request ---&gt;<br>&lt;cffunction name="onRequestEnd" returnType="void" output="true"&gt;<br>&lt;cfargument name="thePage" type="string" required="true"&gt;<br>&lt;cfinclude template="includes/footer.cfm"&gt;<br>&lt;/cffunction&gt;</p><p>But if I had CF in it instead, it worked.</p><p>I'm still learning about Application.cfc, ajax, jQuery but that just seems odd to me.</p><p>The other weird thing I found was if I declared Application variables in my Application.cfc like<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> = "ApplicationName"&gt;<br>And didn't have an onRequestStart and onRequest I couldn't call the Application Variable. It would through an error. It wasn't defined.</p><p>I didn't think either of those were connected to Application Variables.</p><p>Every thing works now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714089">17</a> by Raymond Camden
		posted on 8/21/2009 at 11:54 PM
		</div>
		<div class="comment_text"><p>If I may be so bold, here is a video blog I did on real basic Firebug stuff: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.insideria.com%2F2009%2F06%2Fquick-video-example-of-firebug.html%3AvwlzLfdr-6m_6e-vIOR823Lwbf8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.insideria.com/2009/06/quick-video-example-of-firebug.html">http://www.insideria.com/20...</a></p><p>Firebug would have been helpful in seeing that the response included the extra HTML. That 'broke' your "sucess" response.</p><p>As for your next issue - I think we need to clarify it. If you definite an Application variable within onApplicationStart, it will be available, period, whether or not you use onRequestStart. If you see otherwise, ping me via email and let's try to reproduce the situation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714092">18</a> by Jeff
		posted on 8/22/2009 at 2:00 AM
		</div>
		<div class="comment_text"><p>I'll watch the FireBug video. Thank you.</p><p>Now thinking about it, looking through FireBug earlier it did say &lt;/body&gt; and &lt;/html&gt; in one of the tabs when I hit the + next to the POST (domain name) 200 OK.</p><p>I did just email you the Application.cfc and OnRequestStart/OnRequest problem.</p><p>Hopefully you are reproduce what is happening.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714093">19</a> by Shawn
		posted on 1/21/2011 at 10:09 PM
		</div>
		<div class="comment_text"><p>This works great except in IE8 it wont redirect to the url using document.location.href='mypage.cfm'. I even tried window.location='mypage.cfm' etc and nothing...works great in FF and Chrome.</p><p>It just loads the same page....any work arounds?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714097">20</a> by Raymond Camden
		posted on 1/23/2011 at 10:17 PM
		</div>
		<div class="comment_text"><p>I just tried in my IE8 and it worked ok. Can you try again?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714095">21</a> by Mark Slade
		posted on 5/13/2011 at 2:23 PM
		</div>
		<div class="comment_text"><p>Hi there,</p><p>I really like the articles - they are clear and easy to follow.</p><p>I've replicated this page and got it working OK on my server (which is running Coldfusion MX7 so I can take advantage of returnFormat=plain but I can manipulate the string that is returned and work around it)</p><p>My problem is when I use exactly rhe same code on jquery mobile.</p><p>So I've got a page linking to the relevant libraries. Nothing at all changes on the page apart from the following:-</p><p>On the page that works I've got this form on the page and nothing else really:-</p><p>	&lt;form name="loginForm" id="loginForm" onsubmit="sendForm();" action="" method="post" &gt;    <br>       		Account Ref &lt;input type="text"     name="client_ref"  /&gt;<br>    		   Password &lt;input type="password" name="password" /&gt;<br>			&lt;input type="submit" name="button" id="button" value="Log me in" data-theme="b" /&gt;  <br>	&lt;/form&gt;<br>&lt;div id="status"&gt;&lt;/div&gt;</p><p>That works fine - as soon as you click submit you get the 'logging in' text in the status div and then:-  incorrect client_ref and password give an error message in the status div; correct data sends you to another page</p><p>Great I thought - I'll now put the mobile stuff in there so I commented out the above and added in the following instead:-</p><p>&lt;div data-role="page" data-theme="b" id="home"&gt;<br>  &lt;div data-role="content"&gt;   <br> 	&lt;form name="loginForm" id="loginForm" onsubmit="sendForm();" action="" method="post" &gt;    <br>       		Account Ref &lt;input type="text"     name="client_ref"  /&gt;<br>    		   Password &lt;input type="password" name="password" /&gt;<br>			&lt;input type="submit" name="button" id="button" value="Log me in" data-theme="b" /&gt;  <br>	&lt;/form&gt;<br>     &lt;div id="status"&gt;&lt;/div&gt;<br>  &lt;/div&gt;  <br>&lt;/div&gt;</p><p>It's the same code except wrapped in the data-role divs <br>Now it seems to fall over when making the .post call - it briefly shows the 'logging in' message (which is the line before the .post line)</p><p>	$.post('auth.cfc?method=processLogin&amp;returnFormat=plain',$("#loginForm").serialize(),function(data,status){<br>        .... Heres my checking......<br>        });</p><p>And then it does nothing - the page returns to as it was before. The status div is wiped each time but I'm not sure how. The result is the same whether I give correct or incorrect login details. I've tried adding data-ajax="false" to the second version to see if that helped but it didn't do anything.</p><p>Any ideas?</p><p>Thanks for your help</p><p>Mark Slade</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714094">22</a> by Raymond Camden
		posted on 5/14/2011 at 1:39 AM
		</div>
		<div class="comment_text"><p>Can you post it online (with a valid username/password we can use)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714098">23</a> by Mark Slade
		posted on 5/16/2011 at 11:10 AM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>If you go to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.fidler.co.uk%2Fmobtest%2Findex.cfm%3AJoW2NnWmuT8PElJSWBKRUuBjZPw&amp;cuid=3321886" rel="nofollow noopener" title="www.fidler.co.uk/mobtest/index.cfm">www.fidler.co.uk/mobtest/in...</a> I've set up links to the two versions of the file - one that works, one that doesn't.  Logging in with guest and secret should succeed - anything else should fail.</p><p>Thanks</p><p>Mark</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714096">24</a> by Raymond Camden
		posted on 5/17/2011 at 3:54 PM
		</div>
		<div class="comment_text"><p>I don't think it will matter, but I'd change</p><p>&lt;form name="loginForm" id="loginForm" onSubmit="sendForm();" action="" method="post" &gt;</p><p>to</p><p>&lt;form name="loginForm" id="loginForm" onSubmit="return sendForm();" action="" method="post" &gt;</p><p>And actually I'd get rid of the onSubmit and use a submit handler in your jQuery code. But let's take it slowly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714099">25</a> by Mark Slade
		posted on 5/17/2011 at 3:57 PM
		</div>
		<div class="comment_text"><p>Ok thanks - do you want me to make those changes and see what happens?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714100">26</a> by Raymond Camden
		posted on 5/17/2011 at 3:58 PM
		</div>
		<div class="comment_text"><p>Yep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714101">27</a> by Mark Slade
		posted on 5/17/2011 at 5:15 PM
		</div>
		<div class="comment_text"><p>Thanks again Ray - I've done that now - made those changes in both files - no change.</p><p>I did have a jQuery submit handler in the code and it's still there - I only added in the onsubmit thing because it wasn't working. Currently I have both in there</p><p>Here's the submit handler I have:-</p><p>$(document).ready(function() {<br>   $("#loginForm").submit(sendForm)<br>})</p><p>(I also just tried taking out the onsubmit altogether but that didn't seem to change anything)</p><p>Cheers</p><p>Mark</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714103">28</a> by Raymond Camden
		posted on 5/19/2011 at 3:20 PM
		</div>
		<div class="comment_text"><p>If you have both, go ahead and remove the onsubmit. Switch to what you have in the comment, update the code, and let me know. I'll take another look at it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714102">29</a> by Mark Slade
		posted on 5/19/2011 at 8:00 PM
		</div>
		<div class="comment_text"><p>Thanks - I've done that now - I've taken out the onsubmit() on both pages - can't see any change. On the incorrect one the page flickers though so not sure if something is being displayed that I can't see</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714104">30</a> by Raymond Camden
		posted on 5/19/2011 at 8:04 PM
		</div>
		<div class="comment_text"><p>You forgot to prevent the default action of the submit. In your handler, ensure you have e as an argument:</p><p>function sendForm(e)</p><p>and do</p><p>e.preventDefault();</p><p>as your first line.</p><p>Also, your code is removing WDDX from the result. Why? You specified returnformat=plain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714106">31</a> by Raymond Camden
		posted on 5/19/2011 at 8:06 PM
		</div>
		<div class="comment_text"><p>It may be even simpler - change your submit button to a regular button and bind to the click event for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714105">32</a> by Mark Slade
		posted on 5/20/2011 at 8:17 PM
		</div>
		<div class="comment_text"><p>Brilliant! - your second version worked. I still put in the e.preventdefault() line as well though. Sorry about the delay in replying - for some reason I'm not getting emails when you post a response.<br>Anyway, Many many thanks for sorting this out</p><p>Cheers,</p><p>mark</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714107">33</a> by Mark Slade
		posted on 5/20/2011 at 8:19 PM
		</div>
		<div class="comment_text"><p>Forgot to add - you asked why I'm removing the WDDX from the result because I'd specified returnformat=plain. <br>I'm running CFMX7 which doesn't recognise the returnformat option - I think it was introduced with CF8. Hence I manipulate the output to make it work.</p><p>Thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714108">34</a> by Raymond Camden
		posted on 5/20/2011 at 8:20 PM
		</div>
		<div class="comment_text"><p>Whenever you post a comment to BlogCFC, even if you've done it N times in a thread, you have to reclick subscribe. I did that because I wanted to be REAL anal about sending emails to folks. If you don't REALLY want it, I err on the side of not sending. There's also a link to just subscribe though if you forget.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714110">35</a> by Raymond Camden
		posted on 5/20/2011 at 8:22 PM
		</div>
		<div class="comment_text"><p>re: WDDX comment: Ah ok. I'd probably recommend pointing your Ajax to a CFM then. Have the CFM call the CFC and use a CFC to generate your JSON. Or just output since you were ok with plain anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714112">36</a> by Mark Slade
		posted on 5/21/2011 at 1:11 AM
		</div>
		<div class="comment_text"><p>Thanks again ray</p></div>
	</div>
</div>
		