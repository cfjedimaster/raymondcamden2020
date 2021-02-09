
<div class="comment" id="c_1713737148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737148">1</a> by Derek Winstead
		posted on 12/7/2011 at 1:02 AM
		</div>
		<div class="comment_text"><p>When you click the link for "TEST" and goes to test.cfm it throws an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737149">2</a> by Raymond Camden
		posted on 12/7/2011 at 1:06 AM
		</div>
		<div class="comment_text"><p>It would help if I uploaded the file. Done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737151">3</a> by Chris Walker
		posted on 12/7/2011 at 1:36 AM
		</div>
		<div class="comment_text"><p>I just did a whole suite of tools for a client.  Took a while to get it running.  The api spec is typically loaded with tons of developer assumptions about the audience.  But once you make 100 or so mistakes the flow starts to make sense.  I am in the process of scoping out all big google apis to oauth 2.  Feel free to contact me for any hints.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737150">4</a> by Derek Winstead
		posted on 12/7/2011 at 1:41 AM
		</div>
		<div class="comment_text"><p>@Chris - I would like to get some information, you can add me on Google+ here to talk: <a href="https://disq.us/url?url=https%3A%2F%2Fplus.google.com%2Fu%2F0%2F109478969095694584913%3As96A0CFhGyDnI1lmLY-wNAQOuSA&amp;cuid=3321886" rel="nofollow noopener" title="https://plus.google.com/u/0/109478969095694584913">https://plus.google.com/u/0...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737153">5</a> by Brian Swartzfager
		posted on 12/7/2011 at 1:47 AM
		</div>
		<div class="comment_text"><p>Good stuff (as usual).  The whole "get ticket, then send ticket back to get token" routine is pretty much the same deal as what I have to do to connect my ColdFusion apps to our campus Jasig CAS (Common Authentication System) implementation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737152">6</a> by Chris Walker
		posted on 12/8/2011 at 8:34 AM
		</div>
		<div class="comment_text"><p>I'm not sure what's going on with Oauth 2 over at Google (<a href="https://disq.us/url?url=https%3A%2F%2Faccounts.google.com%2Fo%2Foauth2%2Ftoken%29%3A9J5wCxPAwqRAa_WqlAz4gSt1qm0&amp;cuid=3321886" rel="nofollow noopener" title="https://accounts.google.com/o/oauth2/token)">https://accounts.google.com...</a> but tonight, we are no longer receiving the refresh_token.  It seems to be replaced with something called id_token.</p><p>My client noticed it this afternoon and about 8PM tonight I saw it.</p><p>Ray, to check, cfdump cfhttp.filecontent in method getAccessToken and see if the refresh token has gone away.  No notes out there on Google about it.</p><p>I should note that i wrote my own a few weeks back, but its basically the same concept.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737154">7</a> by Raymond Camden
		posted on 12/8/2011 at 5:33 PM
		</div>
		<div class="comment_text"><p>Not sure. My Googling didn't find anything definitive. It does seem to be related to OpenID. That's the best I can say. In my testing last night, I did not see this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737155">8</a> by Chris Walker
		posted on 12/8/2011 at 9:32 PM
		</div>
		<div class="comment_text"><p>I started a thread: <a href="https://disq.us/url?url=https%3A%2F%2Fgroups.google.com%2Fforum%2F%23%21topic%2Foauth2-dev%2F2ej1pLwpVcU%3ARi_AgEFhSaP6MAGWd0hzkuTfJwg&amp;cuid=3321886" rel="nofollow noopener" title="https://groups.google.com/forum/#!topic/oauth2-dev/2ej1pLwpVcU">https://groups.google.com/f...</a></p><p>I already have received one reply that validates my discovery and offers some insite.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737156">9</a> by Raymond Camden
		posted on 12/8/2011 at 9:52 PM
		</div>
		<div class="comment_text"><p>You mind posting back here when you get a final resolution?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737159">10</a> by Chris Walker
		posted on 12/8/2011 at 10:56 PM
		</div>
		<div class="comment_text"><p>Monday, November 14, 2011<br>Upcoming changes to OAuth 2.0 endpoint</p><p>By Justin Smith, Senior Product Manager</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgooglecode.blogspot.com%2F2011%2F10%2Fupcoming-changes-to-oauth-20-endpoint.html%3ABYmn8Zh3bH9wNZZs0CNMibVfqqE&amp;cuid=3321886" rel="nofollow noopener" title="http://googlecode.blogspot.com/2011/10/upcoming-changes-to-oauth-20-endpoint.html">http://googlecode.blogspot....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737158">11</a> by Chris Walker
		posted on 12/8/2011 at 11:20 PM
		</div>
		<div class="comment_text"><p>if you concat "&amp;access_type=offline&amp;approval_prompt=force" to the end of your login link, the Oauth process works exactly as it did before they changed the API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737160">12</a> by Raymond Camden
		posted on 12/9/2011 at 12:43 AM
		</div>
		<div class="comment_text"><p>Wow, thank you. And note:</p><p>UPDATE 11/14: After considering the feedback and timing, we have decided to delay the launch of the changes described in this post. The new date for these changes is December 7th, 2011. Once again, we expect these changes to have minimal impact. If you have any questions or comments, please post on the OAuth 2.0 Group. We will be actively monitoring that group and will work to respond quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737162">13</a> by Christopher Walker
		posted on 1/4/2012 at 7:05 AM
		</div>
		<div class="comment_text"><p>Please feel free to check out my Google Oauth2 harness for ColdFuion</p><p>The oAuth 2.0 Connector for ColdFusion 8 and 9 allows developers to quickly integrate the Google oAuth 2.0 API to their site. Available modules include: oAuth API connector, Contacts API connector, and Calendar API connector. Developers can view authenticated user's basic contact information, upload an event, view contact lists, add contacts and view calendar metas.</p><p>Great for kick starting your jQuery Mobile or Flash Builder/Android application.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.appwise.org%2Fgoogle%2Foauth%2Findex.cfm%3Ay-1tNLS0Yz8unQV5Cx_SOhqLKnM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.appwise.org/google/oauth/index.cfm">http://www.appwise.org/goog...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737161">14</a> by Chris Hampton
		posted on 4/22/2012 at 9:42 AM
		</div>
		<div class="comment_text"><p>I'm trying to integrate with WePay (who uses OAuth2) and I can't get the Authorization header to work.  According to the WePay documentation, it needs to be send in the following format: <br>Authorization: Bearer &lt;access-token&gt;</p><p>I've tried several permutations of this with cfhttpparam, but none of them work. Has anyone tried this before? Am I missing something stupid?</p><p>I've tried</p><p>&lt;cfhttpparam type="header" name="Authorization" value="Bearer #Application.WepayToken#" /&gt;</p><p>&lt;cfhttpparam type="header" name="Authorization" value="Authorization: Bearer #Application.WepayToken#" /&gt;</p><p>&lt;cfhttpparam type="header" name="Authorization" value="Bearer:#Application.WepayToken#" /&gt;</p><p>I'm pretty sure by the time I get this working, I won't have any hair left.  If anyone has any ideas or thoughts, please let me know.</p><p>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737163">15</a> by Christopher Walker
		posted on 4/22/2012 at 5:17 PM
		</div>
		<div class="comment_text"><p>Not quite sure what you're doing but here is how I return the bearer token (arguments.access_token) to Google in their oAuth2 process.<br>&lt;code&gt;<br>		&lt;cfhttp method="get" url="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Fm8%2Ffeeds%2Fcontacts%2F%23arguments.GoogleAPI_email%23%2Ffull%3Fupdated-min%3D%23dateFormat%28arguments.latestDate%2C%27yyyy-mm-dd%27%29%23T00%3A00%3A00%3AAKKJ4XoO65ONWzstdhmDM7Ieysg&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/m8/feeds/contacts/#arguments.GoogleAPI_email#/full?updated-min=#dateFormat(arguments.latestDate,'yyyy-mm-dd')#T00:00:00">https://www.google.com/m8/f...</a>" result="latestContacts"&gt;<br>        	&lt;cfhttpparam type="header" name="GData-Version" value="3.0"&gt;<br>            &lt;cfhttpparam type="header" name="Authorization" value="GoogleLogin auth=#arguments.access_token#"&gt;</p><p>        &lt;/cfhttp&gt;<br>&lt;/code&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737164">16</a> by Christopher Walker
		posted on 4/22/2012 at 6:39 PM
		</div>
		<div class="comment_text"><p>According to the manual (<a href="https://disq.us/url?url=https%3A%2F%2Fstage.wepay.com%2Fdeveloper%2Ftutorial%2Fapi_call%29%3AO6wDF-49NlXhPT_Pq1D2C6LfgHs&amp;cuid=3321886" rel="nofollow noopener" title="https://stage.wepay.com/developer/tutorial/api_call)">https://stage.wepay.com/dev...</a></p><p>you should try:</p><p>&lt;cfhttpparam type="header" name="Authorization" value="Bearer #Application.WepayToken#" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737165">17</a> by Chris Hampton
		posted on 4/22/2012 at 8:10 PM
		</div>
		<div class="comment_text"><p>Thanks Christopher.  There must be something else going one because that was the first combination I tried.</p><p>&lt;cfhttp url="#Application.WepayApiUrl#" method="post"&gt;<br>&lt;cfhttpparam type="header" name="Authorization" value="Bearer #Application.WepayToken#" /&gt;<br>&lt;/cfhttp&gt;</p><p>I've tried as a post and as a get, but neither seem to make a difference. Each time it returns a statuscode 501.</p><p>At this point, I'm guessing the problem lies somewhere other than the cfhttpparam tag, so it's probably beyond the scope of this blog post.  If I find an answer, I'll post it for those with morbid curiosity.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737166">18</a> by Chris Hampton
		posted on 4/22/2012 at 10:41 PM
		</div>
		<div class="comment_text"><p>Well...</p><p>It looks like the default example they have shown to return your user info does not work, but the other API calls work just fine. So there was nothing wrong with what I was doing, but instead something with that particular example.  Now I've got a basic model of an interface to their API working.</p><p>Thanks for the advice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737167">19</a> by Clayton Stone
		posted on 5/1/2012 at 8:20 AM
		</div>
		<div class="comment_text"><p>Is your oauth 2.0 / coldfusion / gcal api project on hold or forthcoming ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737168">20</a> by Raymond Camden
		posted on 5/1/2012 at 3:17 PM
		</div>
		<div class="comment_text"><p>On hold just because I do not have the time. If I need to github this so you can fork it/add to it, let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737169">21</a> by Clayton Stone
		posted on 5/2/2012 at 7:43 AM
		</div>
		<div class="comment_text"><p>I'm a beginner. No need to github it. I've been trying to implement on my site. Just hoping to peruse your code and glean what I could from it. Many thanks though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737171">22</a> by Raymond Camden
		posted on 5/2/2012 at 3:52 PM
		</div>
		<div class="comment_text"><p>Looks like I did not post the demo. Best I can suggest is using the code in the example above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737172">23</a> by Michael Ennis
		posted on 5/8/2012 at 9:57 PM
		</div>
		<div class="comment_text"><p>Thanks for this Ray! I've got the auth working and can use token to hit API. Could you suggest the best way to automagically retrieve a new access token using a refresh token stored in a db when the access token expires?</p><p>Thx!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737174">24</a> by Raymond Camden
		posted on 5/9/2012 at 1:14 AM
		</div>
		<div class="comment_text"><p>I don't have an example of it handy - but I believe you pass the refresh token back to the API. I remember playing with it back when I did this blog post. It _should_ be simple. (Speak up if not.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737175">25</a> by Clayton Stone
		posted on 6/16/2012 at 8:53 AM
		</div>
		<div class="comment_text"><p>Just wanted to say thanks for all the info, tutorials and suggestions that you and other developers put out freely on the web. Using your demo and other bits of info from coldfusion blogs like yours, I've been able to start working on my own udfs for the Google Calendar API. What I have so far just performs very simple operations, but it works and I've learned a lot in the process.<br>Thanks again,<br>CRS</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737176">26</a> by Raymond Camden
		posted on 6/16/2012 at 6:29 PM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737177">27</a> by Randy Johnson
		posted on 7/13/2012 at 6:57 AM
		</div>
		<div class="comment_text"><p>I wanted to clarify:</p><p>On the getRefreshToken, I am guessing you would check an error message being returned from Google stating the token has expired and then you would call that function and try again?  Or is there a better way to do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737257">28</a> by Randy Johnson
		posted on 7/13/2012 at 7:04 AM
		</div>
		<div class="comment_text"><p>I also noticed that when using your example that the perform these operations when I am not using this application is missing. From what I can see you have to choose another option and it gives you a private key to download.  Anyone have any sample code for that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737253">29</a> by Raymond Camden
		posted on 7/13/2012 at 11:19 PM
		</div>
		<div class="comment_text"><p>+Randy1 - yea - If I remember right you would get an error that made it clear you needed to refresh the token. I recommend checking the docs to be sure.</p><p>+Randy2 - sorry - no idea what your second comment is saying.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737252">30</a> by Tom Ridings
		posted on 8/18/2012 at 7:28 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks so much for all the work you have done on the coldfusion google API stuff, has been a massive help over the last couple of weeks.</p><p>I have managed to successfully authorize my app for logging into the api however I am running into the infamous XMLparse error when trying to parse the contents of the returned XXX.filecontent</p><p>Dumping XXX i can see the data but am still getting the parsing errors.</p><p>Have tried xmlparse( trim( XXXX ) ) but with no success</p><p>Woud seem unusual for google to have incorrectly formatted their XML though.</p><p>Thanks in advance for any help you can give.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737258">31</a> by Raymond Camden
		posted on 8/18/2012 at 6:12 PM
		</div>
		<div class="comment_text"><p>Could you take the XML, save it, and send me a copy?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737248">32</a> by Craig Larson
		posted on 10/11/2012 at 5:22 AM
		</div>
		<div class="comment_text"><p>When running the function getAccessToken, I am receiving an error: "JSON parsing failure at character 1:'C' in Connection Failure".  the only thing I can think of is that I do not have a cert installed for my site.  Is this a requirement for doing the cfhttp call?  Looking at your demo, it does not look like you have a cert installed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737245">33</a> by Raymond Camden
		posted on 10/11/2012 at 5:26 AM
		</div>
		<div class="comment_text"><p>Hmm - I don't remember adding a cert for google. That being said, it _could_ be an issue for you. Also - it may be a general network issue. If you RDP to the machine (or rlogin), can you hit <a href="http://disq.us/url?url=http%3A%2F%2Faccounts.google.com%3A0NEHgreu8_5thjD6LdxQORvHClw&amp;cuid=3321886" rel="nofollow noopener" title="accounts.google.com">accounts.google.com</a> from the server itself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737250">34</a> by Craig Larson
		posted on 10/11/2012 at 5:45 AM
		</div>
		<div class="comment_text"><p>Unfortunately, I am trying to get this to work on a hosted site on Hostek.  No access to RDP into the machine itself.  It could very well be something on their side.  I will try to contact them and see what's up.</p><p>Thanks for a quick reply. If I can get any information I'll share it here for others who may run into the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737247">35</a> by Raymond Camden
		posted on 10/11/2012 at 5:58 AM
		</div>
		<div class="comment_text"><p>I'd recommend building a simple CFM with only a cfhttp to the url. Dump the result. That way it is easier to show them the connection issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737256">36</a> by Rick Smith
		posted on 11/6/2012 at 8:44 AM
		</div>
		<div class="comment_text"><p>Hey Ray, just went to riaforge to checkout your Google Cal ater reading this post... is that the "updated" version or the old version?  If not, do you plan on updating it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737266">37</a> by Grant
		posted on 11/7/2012 at 10:36 PM
		</div>
		<div class="comment_text"><p>I have followed this line by line and I keep getting "HTTP/1.1 405 Method Not Allowed Allow: POST Connection: close Expires: Wed, 07 Nov 2012 17:35:19 GMT Date: Wed, 07 Nov 2012 17:35:19 GMT Server: GSE X-Frame-Options: SAMEORIGIN Cache-Control: private, max-age=0 X-XSS-Protection: 1; mode=block Content-Type: text/html; charset=UTF-8 X-Content-Type-Options: nosniff"</p><p>I have been researching this for over 5 hours and the closest lead I have is something related to CORS - totally frustrated.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737249">38</a> by Raymond Camden
		posted on 11/8/2012 at 12:27 AM
		</div>
		<div class="comment_text"><p>When do you get it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737246">39</a> by Grant
		posted on 11/8/2012 at 3:11 AM
		</div>
		<div class="comment_text"><p>I was getting it when I was trying to get the Token from the Code.<br>I wiped out all my code and started over and it works now.<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737262">40</a> by Raymond Camden
		posted on 11/8/2012 at 3:33 AM
		</div>
		<div class="comment_text"><p>Nice!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737251">41</a> by Raymond Camden
		posted on 11/9/2012 at 2:42 AM
		</div>
		<div class="comment_text"><p>@Rick Smith: I honestly don't know. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737254">42</a> by Marc de Ruijter
		posted on 12/5/2012 at 10:12 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Last year you said that this blogpost was not a guide. I found another guide, $30, updated last year but no one commented or liked so i won't buy it.</p><p>I have a small SMS app, actually personal for me to send easy, free SMS from the keyboard, and i would like to integrate this small webapp with Google contacts (i want to send an sms to, say, 30% of my contacts).</p><p>Any change of you explaining how i can easily, simple, few lines of code, can integrate with g.contacts ?</p><p>Regards.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737264">43</a> by Raymond Camden
		posted on 12/10/2012 at 4:02 AM
		</div>
		<div class="comment_text"><p>Marc, I just did this and it was rather easy.</p><p>First, you have to change the SCOPE value to use the one for Google Contacts. According to the Contacts API docs, that is:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Fm8%2Ffeeds%3AAe0IsmsV6zay-SiAfTLubcXh_EA&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/m8/feeds">https://www.google.com/m8/f...</a></p><p>That's it. Literally. I skimmed the API docs and saw that this URL represents the currently authenticated user and their complete contact list:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Fm8%2Ffeeds%2Fcontacts%2Fdefault%2Ffull%3ASqSY60w-DLy0VsV06X6yz9VhSuI&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/m8/feeds/contacts/default/full">https://www.google.com/m8/f...</a></p><p>So I used this:</p><p>&lt;cfhttp url="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Fm8%2Ffeeds%2Fcontacts%2Fdefault%2Ffull%3ASqSY60w-DLy0VsV06X6yz9VhSuI&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/m8/feeds/contacts/default/full">https://www.google.com/m8/f...</a>"&gt;<br>    &lt;cfhttpparam type="header" name="Authorization" value="OAuth #session.token.access_token#" &gt; <br>&lt;/cfhttp&gt;<br>&lt;cfdump var="#xmlParse(cfhttp.filecontent)#"&gt;</p><p>and it dumped my contacts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737255">44</a> by Marc
		posted on 12/15/2012 at 9:04 PM
		</div>
		<div class="comment_text"><p>Raymond, thanks for your answer.</p><p>How do i get the #session.token.access_token# ?<br>I find the Oauth2 proces very hard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737265">45</a> by Raymond Camden
		posted on 12/15/2012 at 11:01 PM
		</div>
		<div class="comment_text"><p>In the guide above I describe how this is set. Please reread it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737260">46</a> by JP
		posted on 12/18/2012 at 8:38 PM
		</div>
		<div class="comment_text"><p>Thank you!<br>Awesome!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737263">47</a> by Allan Johnson
		posted on 12/12/2013 at 9:48 PM
		</div>
		<div class="comment_text"><p>Just an FYI the concat "&amp;accesstype=offline&amp;approvalprompt=force" to the end of your login link mentioned above should have underscores:</p><p>"&amp;access_type=offline&amp;approval_prompt=force"</p><p>In order to get refresh token.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737259">48</a> by Raymond Camden
		posted on 12/12/2013 at 9:49 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing that, Allan.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737267">49</a> by Allan Johnson
		posted on 12/12/2013 at 9:50 PM
		</div>
		<div class="comment_text"><p>Not sure why, but it removed the underscores in my post (Or I left them out). Try that again:</p><p>"&amp;access_UNDERSCORE_type=offline&amp;approval_UNDERSCORE_prompt=force"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737261">50</a> by Ian Finch
		posted on 10/29/2014 at 7:50 AM
		</div>
		<div class="comment_text"><p>In case it may help someone else - I struggled with the HTTP header for the access token, getting 401 errors - turns out that "AuthoriZation" is not the same as "AuthoriSation". Two hours of needless pain ... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4173343112">
	<div>
		<img src="https://disqus.com/api/users/avatars/bern_e_bern.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4173343112">51</a> (In reply to <a href="#c_1713737248">#32</a>) by Bern e Bern
		posted on 11/1/2018 at 1:48 PM
		</div>
		<div class="comment_text"><p>I'm getting this too. Did you figure it out?</p></div>
	</div>
</div>
		