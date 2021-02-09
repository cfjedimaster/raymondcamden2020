
<div class="comment" id="c_1714081834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081834">1</a> by Ty Whalin
		posted on 2/23/2014 at 12:11 AM
		</div>
		<div class="comment_text"><p>Nice work Ray, took a minute to read through all the documentation; but well worth it. At this point in time I have already created my own secure sign-in system and not sure if I can find use for this just yet. Will have to place some thought into it before I actually try incorporate this into a site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081839">2</a> by Misty
		posted on 3/9/2014 at 8:55 PM
		</div>
		<div class="comment_text"><p>So what is the basic difference between google+ and google login, is the google login going to get depreciated in near future, i have read it somewhere in google developer page.</p><p>What exactly it differs from if we implement this http call to get user profile and authenticate info:</p><p>&lt;cfhttp url="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.googleapis.com%2Foauth2%2Fv1%2Fuserinfo%3A-HFP7AqFStSGbt2FEeMNBfSDsLM&amp;cuid=3321886" rel="nofollow noopener" title="https://www.googleapis.com/oauth2/v1/userinfo">https://www.googleapis.com/...</a>" result="userInfo" method="get" resolveurl="true"&gt;<br>			&lt;cfhttpparam type="header" name="Authorization" value="OAuth #application.google_access_token#"&gt;<br>			&lt;cfhttpparam type="header" name="GData-Version" value="3"&gt;<br>		&lt;/cfhttp&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081836">3</a> by Raymond Camden
		posted on 3/9/2014 at 9:05 PM
		</div>
		<div class="comment_text"><p>"So what is the basic difference between google+ and google login"<br>Google login is based on a GMail login or Google for Apps. Google+ is the same, but in theory I think you can have a G+ signin w/o GMail. Not entirely sure on that though.</p><p>"Is the google login going to get depreciated in near future, i have read it somewhere in google developer page"</p><p>Um - I don't know. It sounds like you know more than me.</p><p>I don't understand your last question. To be clear, the information you get back on profile is based on the scopes you request. All of the OAuth demos I shared here follow that pattern. You need to check *their* docs to see what fields are returned and what you have to ask for to get additional fields.</p><p>As I said elsewhere, try cfdumping the result and see all the fields. Don't see what you need? Then check the docs and see what scopes you need to add.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081835">4</a> by Misty
		posted on 3/9/2014 at 9:19 PM
		</div>
		<div class="comment_text"><p>Hi Ray, Finding more with google Developer Console, Here is the ink I was talking about</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2F%2B%2Fapi%2Fauth-migration%3ArcN0nflSNoiClUPJXL7T2imfXJM&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/+/api/auth-migration">https://developers.google.c...</a></p><p>Another Question: The Demo you shared for Google Plus Login Consist of Login via client side, is that the only way of Google+ signin as of now.</p><p>I shall be very thankful if you can share the tag type code of the above cfscript, I know that code, but love the cf way.</p><p>Is there any performance based you always prefer script based</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081837">5</a> by Raymond Camden
		posted on 3/9/2014 at 9:22 PM
		</div>
		<div class="comment_text"><p>"Another Question: The Demo you shared for Google Plus Login Consist of Login via client side, is that the only way of Google+ signin as of now. "</p><p>Yes - note on top where I say there are 3 paths to using the auth - and one is server-side only.</p><p>"I shall be very thankful if you can share the tag type code of the above cfscript, I know that code, but love the cf way. "<br>Um, it *is* CF. :) I don't have any plans on rewriting it as tags. You should be able to do this yourself. If you have a specific question about how a particular script thing maps to tags, ask.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081838">6</a> by Misty
		posted on 3/9/2014 at 10:01 PM
		</div>
		<div class="comment_text"><p>Ok, I tried making it work, but in my case, it is neither opening popup and always showing as:</p><p>Sign-in state: immediate_failed</p><p>Code i changed in auth.cfc</p><p>private function getGoogleToken(code) {<br>		var postBody = "code=" &amp; UrlEncodedFormat(arguments.code) &amp; "&amp;";<br>			 postBody = postBody &amp; "client_id=" &amp; UrlEncodedFormat("#application.google_client_id#") &amp; "&amp;";<br>			 postBody = postBody &amp; "client_secret=" &amp; UrlEncodedFormat("#application.google_secretkey#") &amp; "&amp;";<br>			 postBody = postBody &amp; "redirect_uri=" &amp; UrlEncodedFormat("postmessage") &amp; "&amp;";<br>			 postBody = postBody &amp; "grant_type=authorization_code";</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081841">7</a> by Raymond Camden
		posted on 3/10/2014 at 5:24 AM
		</div>
		<div class="comment_text"><p>Can you tell me what you changed in getGoogleToken?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081840">8</a> by Misty
		posted on 3/10/2014 at 7:38 AM
		</div>
		<div class="comment_text"><p>I added my Own Google Secret Key and Client ID to match whatever i have specified in the developer console</p><p>This is what i changed</p><p>#application.googleclientid#</p><p>#application.googlesecretkey#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081844">9</a> by Raymond Camden
		posted on 3/10/2014 at 3:17 PM
		</div>
		<div class="comment_text"><p>It may be that you need to enable G+ in your apps dashboard. Outside of that I do not know. If you have it online where I can hit, I can try to take a look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081845">10</a> by Ron Coulter
		posted on 5/7/2014 at 4:46 AM
		</div>
		<div class="comment_text"><p>@Misty, if you are still struggling with this, note you have to change to client id value in auth.cfc and test2.cfm. I missed it in test2.cfm at first and got the same message you reported.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081847">11</a> by Sean Ford
		posted on 5/22/2014 at 3:49 AM
		</div>
		<div class="comment_text"><p>HAve you attempted to get the new cfOauth tags working in CF11 yet?  I gave it a shot with the beta, but had no luck.  About to try again with the release version, but was hoping to come across a proof of concept or some guidance before I dive in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081842">12</a> by Raymond Camden
		posted on 5/22/2014 at 4:48 PM
		</div>
		<div class="comment_text"><p>Nope, I haven't played with that yet. I wanted to so I could compare.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081843">13</a> by Giuseppe
		posted on 10/17/2014 at 10:09 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>thanks for sharing this piece of code.</p><p>It works great but how do I access the user profile after successful login ?<br> I looked into the session object but there's isn't much to see .</p><p>Am I missing something ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081846">14</a> by Raymond Camden
		posted on 10/17/2014 at 10:17 PM
		</div>
		<div class="comment_text"><p>You would need to either do it server side with a cfhttp call to Google or do it via their JS API and pass the value to the server via Ajax. I don't have a demo of this prepared though.</p></div>
	</div>
</div>
		