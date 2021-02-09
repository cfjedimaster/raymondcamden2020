
<div class="comment" id="c_1713745867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745867">1</a> by Craig Inman
		posted on 4/17/2013 at 11:42 PM
		</div>
		<div class="comment_text"><p>This does work really well. It has the domain under the field for username and won't let you enter any foreign characters, so you should not be able to enter any other Google App domains.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745864">2</a> by Adrian Lynch
		posted on 4/29/2013 at 1:19 AM
		</div>
		<div class="comment_text"><p>Out of interest, what, if anything, do you store from the information provided by Google/Facebook/LinkedIn? The IDs? Profile photos?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745889">3</a> by Dave White
		posted on 4/29/2013 at 3:39 AM
		</div>
		<div class="comment_text"><p>Great stuff (Again).<br>I liked the LinkedIn and Facebook posts as well and intend to use them all so users can login with whatever method they want.</p><p>I was wondering whether you were planning on doing a Sign in with Twitter post to complement the others ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745887">4</a> by Raymond Camden
		posted on 4/29/2013 at 6:10 PM
		</div>
		<div class="comment_text"><p>@Adrian: What you store would be up to you. What your app needs. Obviously you would have to content w/ the fact that those details may change.</p><p>@Dave: I looked into Twitter this weekend actually. Unfortunately they are OAuth1 so it isn't as easy. Fortunately, someone has already blogged on it so I don't have to. ;)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.delbridge.org%2Fpost.cfm%2Ftackling-twitter-s-oauth-with-coldfusion%3A9DbIxIN2cY50BxUF7H1Ph36FjjY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.delbridge.org/post.cfm/tackling-twitter-s-oauth-with-coldfusion">http://www.delbridge.org/po...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745884">5</a> by Dave White
		posted on 4/29/2013 at 6:53 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. You are a gentleman and a scholar.<br>Now I have to roll it all up and make a loginUsing.cfc<br>Also I have to agree that CodeSchool is excellent, hanks for the Hall Pass :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745890">6</a> by Joel Spriggs
		posted on 5/1/2013 at 4:26 PM
		</div>
		<div class="comment_text"><p>Nice post, explains it well.  What would be your thoughts on utilizing that as the login interface for an app that uses primarily rest endpoints to connect a JS/html front-end with an ORM based backend?</p><p>Their api page does give information about token validation, so my thought is that every endpoint call requires the token be attached as a header element, and just cache the public keys from google to do validation against the tokens.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745892">7</a> by Raymond Camden
		posted on 5/1/2013 at 6:49 PM
		</div>
		<div class="comment_text"><p>"What would be your thoughts on utilizing that as the login interface for an app that uses primarily rest endpoints to connect a JS/html front-end with an ORM based backend?"</p><p>Um, do you mean _your_ app is primary client-side code w/ CF REST stuff ont he back?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745895">8</a> by Joel Spriggs
		posted on 5/1/2013 at 6:50 PM
		</div>
		<div class="comment_text"><p>Yes</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745897">9</a> by Raymond Camden
		posted on 5/1/2013 at 6:51 PM
		</div>
		<div class="comment_text"><p>Well, your client-side code could run a CFC that then hits Google. Basically the CFC acts as a proxy. Or you could hit Google directly if they support JSON/P or CORS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745896">10</a> by Tolo USN
		posted on 6/9/2013 at 12:27 AM
		</div>
		<div class="comment_text"><p>Once again - I love all of your posts. I'm a fan and a subscriber. Although I feel like I'm missing something here.  This line in particular: new google(application.clientid, application.clientsecret); Do I need some sort of additional file to have this work? Does it matter if I use application.cfm instead of cfc? I feel so lost... :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745898">11</a> by Raymond Camden
		posted on 6/9/2013 at 7:25 PM
		</div>
		<div class="comment_text"><p>As I didn't provide a zip, you have to get the code from the blog entry. google.cfc is the second to last, where I say, "This is the CFC..."</p><p>You can use App.cfm instead of App.cfc, but... honestly, it is time to move on from App.cfm! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745901">12</a> by Tolo USN
		posted on 6/12/2013 at 3:15 AM
		</div>
		<div class="comment_text"><p>Haha - I know.  Sometimes I have much less to say about those things than I'd like to - ergo my limited experience with CFC files.  Thanks Raymond - once again I owe you a beer.  Actually it's a whole case by now. :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745900">13</a> by Raymond Camden
		posted on 6/12/2013 at 5:28 AM
		</div>
		<div class="comment_text"><p>Enjoy man. Warning - I've got pricey taste in beer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745899">14</a> by martin timmers
		posted on 7/4/2013 at 1:07 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FKfdZiAG4%3AODvktEEuxmaYahOTd8JOCTxRbcA&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/KfdZiAG4">http://pastebin.com/KfdZiAG4</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745904">15</a> by martin timmers
		posted on 7/4/2013 at 1:09 PM
		</div>
		<div class="comment_text"><p>Hi i just posted a question with a bit of code.</p><p>This got rejected so i posted a pastebin link.</p><p>Thanks for the tutorial.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745906">16</a> by Raymond Camden
		posted on 7/4/2013 at 7:45 PM
		</div>
		<div class="comment_text"><p>It may be that the order isn't preserved in the second one and that may matter to Google. I've never used that particular API though so - sorry - can't really help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745905">17</a> by Misty
		posted on 8/31/2013 at 8:26 PM
		</div>
		<div class="comment_text"><p>Hi ray, Followed Your post, i am using Application.cfm rather than CFC</p><p>But when i logs into Google auth and it comes back to callback, it just hangs there</p><p>don't know what is the matter, any idea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746005">18</a> by Raymond Camden
		posted on 9/3/2013 at 12:15 AM
		</div>
		<div class="comment_text"><p>So you come back to the CFM and... nothing happens? The CFM never outputs anything? Do you see anything logged at all?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746035">19</a> by Misty
		posted on 9/3/2013 at 8:59 AM
		</div>
		<div class="comment_text"><p>Nothing gets logged, i used try catch blocks, site wide error, application based error, nothing. it just hangs up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746021">20</a> by Raymond Camden
		posted on 9/3/2013 at 2:34 PM
		</div>
		<div class="comment_text"><p>Then I'm not sure what to suggest. So to be clear, you leave <a href="http://disq.us/url?url=http%3A%2F%2Fgoogle.com%3A_IuuuaY93QHJ-V0RbKBx3HKnPG4&amp;cuid=3321886" rel="nofollow noopener" title="google.com">google.com</a>, see your server load in the browser, see the cfm in the browser bar, and nothing. If you add "Hello World" to the top of the CFM, does that come out?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746022">21</a> by Misty
		posted on 9/3/2013 at 3:50 PM
		</div>
		<div class="comment_text"><p>It shows nothing, Nothing anywhere, not in console, not error anywhere where i can search of. i tried creating log also when a callback is returned but it does not write, something is going wrong</p><p>not sure what, if you wanna check</p><p>here is the link:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2Fktjdgh6%3ARas7ToY4AG9l5Mp8QGPeD-ggU5g&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/ktjdgh6">http://tinyurl.com/ktjdgh6</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746032">22</a> by Raymond Camden
		posted on 9/3/2013 at 3:53 PM
		</div>
		<div class="comment_text"><p>It worked for me. I see the dump in the popup window.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746030">23</a> by Misty
		posted on 9/3/2013 at 4:22 PM
		</div>
		<div class="comment_text"><p>Strange, Did you checked twitter too</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746039">24</a> by Adrian Lynch
		posted on 9/3/2013 at 4:35 PM
		</div>
		<div class="comment_text"><p>Same here. I see a dump after submitting in the Google pop-up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746019">25</a> by Raymond Camden
		posted on 9/3/2013 at 5:36 PM
		</div>
		<div class="comment_text"><p>With Twitter processLogin.cfm loads, but displays nothing. Please share (pastebin or gist!) your code there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746025">26</a> by Misty
		posted on 9/3/2013 at 5:44 PM
		</div>
		<div class="comment_text"><p>ok, i thing something is going bad on my end, but not sure what, i tried different browsers, its a hosted application, i have to check again, but guys have you all the three of just one. Can you please confirm all 3 are working or just 1 or 2 only</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746042">27</a> by Raymond Camden
		posted on 9/3/2013 at 5:46 PM
		</div>
		<div class="comment_text"><p>I tested two - and one showed what you saw. At this point it would be helpful to see your code. In a pastebin or gist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746034">28</a> by Misty
		posted on 9/3/2013 at 7:17 PM
		</div>
		<div class="comment_text"><p>Here is the Pastebin Code for Twitter:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FMvFue9Be%3A-hccAjzT8IQTsDG6LDjJhZiQXtc&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/MvFue9Be">http://pastebin.com/MvFue9Be</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746020">29</a> by Raymond Camden
		posted on 9/3/2013 at 7:23 PM
		</div>
		<div class="comment_text"><p>To be clear, are you using a different CFM file for each? I thought you were using the same. If you are, please do not share just a portion of your code, share *everything*.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746027">30</a> by Raymond Camden
		posted on 9/3/2013 at 7:27 PM
		</div>
		<div class="comment_text"><p>Misty, did you debug this at all? Your code looks at the URL structure for a value called loginType. If you look at the value in the URL from Twitter, you can see login type is not there.</p><p>Sorry if that sounds rough, but as part of the debugging you should have done, you should have noticed that, right?</p><p>I'll echo my request that it would be more helpful if you were to share the entire CFM so we can see the app as it is being executed. Another test would be to add</p><p>&lt;cfdump var="#url#" abort&gt;</p><p>SO we can see what happens _immediately_ after the return from Twitter. You may have something else doing a cflocation later on in the process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746026">31</a> by Misty
		posted on 9/3/2013 at 7:49 PM
		</div>
		<div class="comment_text"><p>Hi Ray, Never took your comments as tough and harsh, I have always something new from you, so let me debug that and i will share the code also which i am using now</p><p>should i send the code in the email address</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746041">32</a> by Raymond Camden
		posted on 9/3/2013 at 7:55 PM
		</div>
		<div class="comment_text"><p>No, lets keep it here. If you have something secret in the CFM, like an APP Id, you can definitely change it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746028">33</a> by Misty
		posted on 9/3/2013 at 8:04 PM
		</div>
		<div class="comment_text"><p>i did some debugging and noticed that with twitter the application scope which i had defined as:</p><p>&lt;cfcase value="twitter"&gt;<br>			&lt;cfset application.current_login_method = 'twitter'&gt;<br>			&lt;cfset twitterLogin = objLogin.get_request_token()&gt;<br>		&lt;/cfcase&gt;</p><p>is coming as [empty string] when it comes back from authorization, note here that i am not using the twitter4j library for authetication, do i need to use it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746031">34</a> by Raymond Camden
		posted on 9/3/2013 at 8:19 PM
		</div>
		<div class="comment_text"><p>Don't know. I think this is why I skipped Twitter when I was doing my OAuth series.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746024">35</a> by Misty
		posted on 9/3/2013 at 8:41 PM
		</div>
		<div class="comment_text"><p>ok, i will check this out and see what i can figure out here, so another question is: even yahoo can be done with oauth, have not debugged t yet, but just guessing</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746029">36</a> by Raymond Camden
		posted on 9/3/2013 at 8:44 PM
		</div>
		<div class="comment_text"><p>Cool - to be honest - I don't pay much attention to Yahoo. They have some cool APIs and stuff, but I just... well I just don't pay attention to em. Maybe I should. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746023">37</a> by Fabio
		posted on 11/12/2013 at 4:06 PM
		</div>
		<div class="comment_text"><p>This tut did save my life! Thank you so much! ^___^</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746037">38</a> by Allan Johnson
		posted on 12/3/2013 at 3:34 AM
		</div>
		<div class="comment_text"><p>Hi Ray, Thanks for great tutorial and the tip at the end. Quick question.... Do you know of a way to access a Google folder's file list using OAuth &amp; Coldfusion completed by the server only? No human clicking the agree and authenticate button? Looking to build an automated web app to reach into a Generic User's Google drive and access a folder where students have shared papers, presentations, projects, and artwork photos stored in their Google Drives. Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746038">39</a> by Raymond Camden
		posted on 12/3/2013 at 3:50 AM
		</div>
		<div class="comment_text"><p>Hmm. In theory, you could automate it with cfhttp. But you would need the user's email/password of course. Not sure how much faith I'd put into that though. Seems like a brittle solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746033">40</a> by Allan Johnson
		posted on 12/4/2013 at 5:54 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I agree as Google is dropping their client access in 2015. I am reading up on OAUTH for Google. I think from what I am gathering, there is a way to do this as long as I log in as the user 1 time and retrieve a valid refresh token for my app (which I did today). Now I just need to figure out how to get the whole thing to work. If I succeed, I'll post back. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746036">41</a> by Misty
		posted on 3/8/2014 at 2:26 PM
		</div>
		<div class="comment_text"><p>Hi ray, Coming back again, I am unable to access the google login API, I can find google + API, but not google Login, is it same or different, i user new google+ but did not worked</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746040">42</a> by Raymond Camden
		posted on 3/8/2014 at 5:55 PM
		</div>
		<div class="comment_text"><p>You need to give me more detail. What happens exactly?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746045">43</a> by Misty
		posted on 3/9/2014 at 7:26 PM
		</div>
		<div class="comment_text"><p>Hi ray,</p><p>How to fetch additional Information of google API like email address, login username etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746048">44</a> by Raymond Camden
		posted on 3/9/2014 at 9:08 PM
		</div>
		<div class="comment_text"><p>You've been asking similar questions on two posts - I replied on the other one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746047">45</a> by Misty
		posted on 3/11/2014 at 5:27 PM
		</div>
		<div class="comment_text"><p>how you write this in cffunction</p><p>public function getProfile(accesstoken) {</p><p>		var h = new com.adobe.coldfusion.http();<br>		h.setURL("<a href="https://disq.us/url?url=https%3A%2F%2Fwww.googleapis.com%2Foauth2%2Fv1%2Fuserinfo%3A-HFP7AqFStSGbt2FEeMNBfSDsLM&amp;cuid=3321886" rel="nofollow noopener" title="https://www.googleapis.com/oauth2/v1/userinfo">https://www.googleapis.com/...</a>");<br>		h.setMethod("get");<br>		h.addParam(type="header",name="Authorization",value="OAuth #accesstoken#");<br>		h.addParam(type="header",name="GData-Version",value="3");<br>		h.setResolveURL(true);<br>		var result = h.send().getPrefix();<br>		return deserializeJSON(result.filecontent.toString());<br>	}</p><p>it will cfhttp call., but what about the following line:</p><p>h.send().getPrefix(); - only explanation need to this line</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746049">46</a> by Raymond Camden
		posted on 3/11/2014 at 5:55 PM
		</div>
		<div class="comment_text"><p>h.send() means, make the http call. getPrefix gets the result. So result (the variable) is equal to &lt;cfhttp url="..." result="result"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746050">47</a> by Misty
		posted on 3/11/2014 at 6:01 PM
		</div>
		<div class="comment_text"><p>hi ray,</p><p>you said, its possible to get email address, so check this link:</p><p>in pastebin, i will expire in 1 hours</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FRVzey1uQ%3Ah9Glk1l9B4xonAX2F0HN6_dPO1g&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/RVzey1uQ">http://pastebin.com/RVzey1uQ</a></p><p>This shows my Infor but does not show my email address info, if i try same in google editor which they had provided in the console window, the emails array is shown, what we are missing here then</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746051">48</a> by Raymond Camden
		posted on 3/11/2014 at 6:04 PM
		</div>
		<div class="comment_text"><p>I believe you will need to ask for the email scope. <a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2F%2B%2Fapi%2Foauth%23login-scopes%3ATnqanEmme8gTMz-_XuVRV_5SmuA&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/+/api/oauth#login-scopes">https://developers.google.c...</a>.</p><p>You should be able to add this to the existing scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746052">49</a> by Misty
		posted on 3/11/2014 at 6:21 PM
		</div>
		<div class="comment_text"><p>and where i should add this</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746053">50</a> by Raymond Camden
		posted on 3/11/2014 at 6:23 PM
		</div>
		<div class="comment_text"><p>Um, did you read the blog post? It is one of the code samples, and documented. Please look again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746056">51</a> by Misty
		posted on 3/11/2014 at 6:33 PM
		</div>
		<div class="comment_text"><p>i followed exactly as your code, doing a copy/paste, but in your above demo too, no email address is showing,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746055">52</a> by Raymond Camden
		posted on 3/11/2014 at 6:35 PM
		</div>
		<div class="comment_text"><p>You aren't getting it - the Scope value determines what you can get back. You need to *add* to it to get email support. See my comment a few things above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746057">53</a> by Misty
		posted on 3/11/2014 at 7:20 PM
		</div>
		<div class="comment_text"><p>okay, i read the full blog post, and the code too. even though it has ben specified anywhere about email and not even getting the one:</p><p>what if we have a code which is doing a call to the api like this:</p><p>&lt;cffunction access="public" name="getProfileEmail" returntype="any" returnformat="json"&gt;<br>    	&lt;cfargument name="accesstoken" default="" required="yes" type="any"&gt;<br>        &lt;cfhttp url="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.googleapis.com%2Foauth2%2Fv1%2Fuserinfo%3A-HFP7AqFStSGbt2FEeMNBfSDsLM&amp;cuid=3321886" rel="nofollow noopener" title="https://www.googleapis.com/oauth2/v1/userinfo">https://www.googleapis.com/...</a>" method="get" resolveurl="yes" result="httpResult"&gt; <br>        	&lt;cfhttpparam type="header" name="Authorization" value="OAuth #arguments.accesstoken#"&gt;<br>            &lt;cfhttpparam type="header" name="GData-Version" value="3"&gt;<br>        &lt;/cfhttp&gt;<br>        &lt;cfreturn DeserializeJSON(httpResult.filecontent)&gt;    <br>    &lt;/cffunction&gt;</p><p>but this just shows me an a string value:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fuserinfo.email%3AkULv4KfDNtMbCc4s7_qk-1OQ4D0&amp;cuid=3321886" rel="nofollow noopener" title="https://www.googleapis.com/auth/userinfo.email">https://www.googleapis.com/...</a></p><p>what i need to change here to bring actual email address instead of this string</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746058">54</a> by Misty
		posted on 3/11/2014 at 7:21 PM
		</div>
		<div class="comment_text"><p>read this line  even though it has ben specified anywhere about email and not even getting the one:</p><p>as</p><p> even though it has not been specified anywhere about email and not even getting the one:</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746060">55</a> by Misty
		posted on 3/11/2014 at 8:07 PM
		</div>
		<div class="comment_text"><p>I tried again with this:</p><p>cfhttp url="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.googleapis.com%2Fplus%2Fv1%2Fpeople%2F11337769120286%3Ffields%3Demails%3Al5AZzSjXkgAyxpnCQ2hjPtFCFZ4&amp;cuid=3321886" rel="nofollow noopener" title="https://www.googleapis.com/plus/v1/people/11337769120286?fields=emails">https://www.googleapis.com/...</a>" method="get" resolveurl="yes" result="httpResult"&gt; <br>        	&lt;cfhttpparam type="header" name="Authorization" value="OAuth #access_token#"&gt;<br>            &lt;cfhttpparam type="header" name="GData-Version" value="3"&gt;<br>        &lt;/cfhttp&gt;<br>              &lt;cfoutput&gt;#httpResult.filecontent#&lt;/cfoutput&gt;</p><p>i get empty response as: {}</p><p>does it have any dependency on verified response</p><p>i tried in <a href="http://disq.us/url?url=http%3A%2F%2Fcflive.net%3A8LIHPrXSVKXKSBGEhJAnBKMkUy0&amp;cuid=3321886" rel="nofollow noopener" title="cflive.net">cflive.net</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746059">56</a> by Raymond Camden
		posted on 3/11/2014 at 9:20 PM
		</div>
		<div class="comment_text"><p>Misty: Do you, or do you not, see the code portion that involves Scope. It is above. The comment above is talks about how you have to change it. None of your comments seem to imply you get that you have to change the scope - so can you please answer that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746061">57</a> by Misty
		posted on 3/11/2014 at 9:43 PM
		</div>
		<div class="comment_text"><p>Ray, I am following what you are saying, but the code below google may not support after sept 2014</p><p>I use this:</p><p>&lt;cfset googleLogin = objLogin.initiate_login(<br>				loginUrlBase = "<a href="https://disq.us/url?url=https%3A%2F%2Faccounts.google.com%2Fo%2Foauth2%2Fauth%3ARb08cqL2E5VLM1I1XWrvxEDVUH4&amp;cuid=3321886" rel="nofollow noopener" title="https://accounts.google.com/o/oauth2/auth">https://accounts.google.com...</a>",<br>				loginClientID = application.google_client_id,<br>				loginRedirectURI = application.google_redirecturl,<br>				loginScope = "<a href="https://disq.us/url?url=https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fuserinfo.email%3AkULv4KfDNtMbCc4s7_qk-1OQ4D0&amp;cuid=3321886" rel="nofollow noopener" title="https://www.googleapis.com/auth/userinfo.email">https://www.googleapis.com/...</a>"<br>			)&gt;</p><p>I get email with this, but if i use the <a href="https://disq.us/url?url=https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fpeople.get%3A7nP12xB4ZHbFqWA1T1e_hJYf88U&amp;cuid=3321886" rel="nofollow noopener" title="https://www.googleapis.com/auth/people.get">https://www.googleapis.com/...</a></p><p>i do not get the email in that</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746062">58</a> by Raymond Camden
		posted on 3/11/2014 at 9:44 PM
		</div>
		<div class="comment_text"><p>So your saying - you don't want to use this method. You want to use the method I described in G+? Or are you saying something else? I'm really confused here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746064">59</a> by Misty
		posted on 3/11/2014 at 9:50 PM
		</div>
		<div class="comment_text"><p>I do not want to use the method of Google+ u described in another post, wanna use the method the comments are posted in. <br>i had to check many things before i make a complete rewrite of login with google+. right now, the old way of oauth2, going by google login side and fetching the contents</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746063">60</a> by Raymond Camden
		posted on 3/11/2014 at 9:57 PM
		</div>
		<div class="comment_text"><p>So... you don't want to use my method, and you don't want to use the G+ method. Then I don't know what to tell you. As I described, multiple times, the docs say you need to *ask* (via Scope) for email permission, and I've seen it work with my code. If you are using your own code, than I don't think I can help you more than I have tried to do so already.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746065">61</a> by Joe Genshlea
		posted on 4/10/2014 at 7:39 PM
		</div>
		<div class="comment_text"><p>Great Post Raymond.</p><p>Any chance someone from the ColdFusion community could contribute code samples to Google's developer portal?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746066">62</a> by Raymond Camden
		posted on 4/10/2014 at 7:45 PM
		</div>
		<div class="comment_text"><p>If somebody wants to submit it - I'm all for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746067">63</a> by Ron Coulter
		posted on 5/3/2014 at 1:08 AM
		</div>
		<div class="comment_text"><p>I noticed you used localhost as the domain of your callback url. Is that actual code? My development server is behind a firewall, and it seems to be causing problems.<br>At first I kept getting uri mismatch errors. I found a workaround for that by adding a <a href="http://disq.us/url?url=http%3A%2F%2Fbit.ly%3ABZBuwyfJB4b-A-u_1SLyV4oGrw8&amp;cuid=3321886" rel="nofollow noopener" title="bit.ly">bit.ly</a> url in my console and supplying that url as the callback parameter. That at least got me to Google's "Allow access" page. But then when I grant access I get "State values do not match" on the callback page.<br>Any thoughts? Thanks!<br>Ron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746068">64</a> by Raymond Camden
		posted on 5/3/2014 at 6:59 PM
		</div>
		<div class="comment_text"><p>For oauth redirect, the remote server sends a header back to the browser saying,"Go Here." For my testing then, localhost works fine. In a 'real' app, you would not do that of course. Thing is - a firewall should not impact that. If your browser can hit the URL, then it should just plain work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746069">65</a> by Ron Coulter
		posted on 5/3/2014 at 7:55 PM
		</div>
		<div class="comment_text"><p>OK, Thanks. I'll take another look at the code with a fresh set of eyes Monday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746070">66</a> by Ron Coulter
		posted on 5/7/2014 at 12:28 AM
		</div>
		<div class="comment_text"><p>Sure enough, even after triple- and quadruple-checking my callback url, i still had a typo in it. Works fine now. Thanks for the help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746074">67</a> by Iftkhar
		posted on 6/28/2014 at 2:49 AM
		</div>
		<div class="comment_text"><p>How can I get user email ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746073">68</a> by Raymond Camden
		posted on 6/28/2014 at 6:34 AM
		</div>
		<div class="comment_text"><p>The scope value determines what data is returned. You have to ask for email.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2F%2B%2Fapi%2Foauth%3Agr_-D1R-f3BIQsBWHuqROsRU1YY&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/+/api/oauth">https://developers.google.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1706459089">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_MRQszfbnmr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1706459089">69</a> by Amit Aggarwal
		posted on 11/22/2014 at 2:36 AM
		</div>
		<div class="comment_text"><p>I am having an issue with the `Google OAuth` using `cfhttp` in Safari. It works in my local environment but on our hosted environment everytime I use google oauth, I get the return code below:</p><p>Error detail:<br>    string	400 Bad Request</p><p>File content:<br>    string	{ "error" : "invalid_grant", "error_description" : "Code was already redeemed." }</p><p>Header:<br>&gt;string	HTTP/1.1 400 Bad Request Content-Type: application/json Cache-Control: no-cache, no-store, max-age=0, must-revalidate Pragma: no-cache Expires: Fri, 01 Jan 1990 00:00:00 GMT Date: Sat, 22 Nov 2014 01:38:30 GMT X-Content-Type-Options: nosniff X-Frame-Options: SAMEORIGIN X-XSS-Protection: 1; mode=block Server: GSE Alternate-Protocol: 443:quic,p=0.02 Transfer-Encoding: chunked</p><p>        &lt;cffunction name="getGoogleToken" access="public" output="false"&gt;<br>		&lt;cfargument name="Event" type="any"&gt;<br>		&lt;cfargument name="code" type="any"&gt;<br>		&lt;cfset var="" rc="Event.getCollection()"/&gt;<br>		&lt;cfscript&gt;<br>			var postBody = "code=" &amp; UrlEncodedFormat(arguments.code) &amp; "&amp;";<br>				 postBody = postBody &amp; "client_id=" &amp; UrlEncodedFormat(rc.googleclientid) &amp; "&amp;";<br>				 postBody = postBody &amp; "client_secret=" &amp; UrlEncodedFormat(rc.googleclientsecret) &amp; "&amp;";<br>				 postBody = postBody &amp; "redirect_uri=" &amp; UrlEncodedFormat(rc.googlecallback) &amp; "&amp;";<br>				 postBody = postBody &amp; "grant_type=authorization_code";<br>		&lt;/cfscript&gt;</p><p>		&lt;cfhttp url="<a href="https://disq.us/url?url=https%3A%2F%2Faccounts.google.com%2Fo%2Foauth2%2Ftoken%3AVpdRHKhZ4mSOVMcM8ZLCCmMqFvc&amp;cuid=3321886" rel="nofollow noopener" title="https://accounts.google.com/o/oauth2/token">https://accounts.google.com...</a>" method="post" result="result" charset="utf-8"&gt; <br>		    &lt;cfhttpparam type="header" name="Content-Type" value="application/x-www-form-urlencoded"&gt; <br>		    &lt;cfhttpparam type="body" value="#postBody#"&gt; <br>		&lt;/cfhttp&gt;</p><p>		&lt;cfreturn deserializejson(result.filecontent.tostring())=""/&gt;</p><p>	&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1707015931">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1707015931">70</a> (In reply to <a href="#c_1706459089">#69</a>) by Raymond Camden
		posted on 11/22/2014 at 2:22 PM
		</div>
		<div class="comment_text"><p>I'd Google "Code was already redeemed" and see what it suggests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1707019348">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_MRQszfbnmr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1707019348">71</a> (In reply to <a href="#c_1707015931">#70</a>) by Amit Aggarwal
		posted on 11/22/2014 at 2:26 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. I tried that and it said its typically if the token is already used. The strange thing is it works perfectly fine in Firefox, Chrome and IE, it's just safari which is having an issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609258035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609258035">72</a> by Leo
		posted on 4/6/2016 at 1:38 PM
		</div>
		<div class="comment_text"><p>Hi Raymond..thanx for posting but i have one small question.. m new to cf + api and did not get the workflow behind your <a href="http://disq.us/url?url=http%3A%2F%2Fcode.is%3AzLV4OT1BJ8YgyWUiOskKpBdF4Ec&amp;cuid=3321886" rel="nofollow noopener" title="code.is">code.is</a> it possible for you to provide at github with necessary files? and sorry but should i execute google.cfc with any cfm file or it will direct execute??</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609270456">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609270456">73</a> (In reply to <a href="#c_2609258035">#72</a>) by Raymond Camden
		posted on 4/6/2016 at 1:46 PM
		</div>
		<div class="comment_text"><p>All the code that was used is in the blog article, so I can't provide more really.</p><p>"and sorry but should i execute google.cfc with any cfm file or it will direct execute??"</p><p>I'm not quite sure I understand what you are saying. If you don't know what CFCs are in general, I'd start with the ColdFusion docs to get the basics.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4806887843">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cbywBsXm2Y.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4806887843">74</a> by Athelene
		posted on 2/23/2020 at 9:00 PM
		</div>
		<div class="comment_text"><p>Raymond, I realize this is an old post but I'm hoping you will be able to follow up. FYI, while I don't have this working just yet, it is the most instructional post I've found on the topic. Thank you!</p><p>I feel I've followed the post. I have the login.cfm file which provides the link to login. I get the Google authentication page. However, when I authenticate with Google, I come back to the login.cfm page, not the callback page I've registered with Google. I get no errors coming up. I decided to try putting the lines below on the login.cfm page that comes up to see if I'm even getting any return from Google but the test comes back that I have no token. I can't figure out a way to troubleshoot where this is going wrong without errors or any returned info. I can't even figure out how it can come back to the login.cfm page. Any thoughts or guidance?</p><p><code>&lt;cfif isdefined("session.token")=""&gt;<br>I have a token.<br> &lt;cfset me="application.google.getProfile(session.token.access_token)"&gt;<br>&lt;cfdump var="#me#" label="me"&gt;<br>&lt;cfelse&gt;<br>I have no token.<br>&lt;/cfif&gt;</code></p><p>One other note, I was testing the &lt;cfoauth&gt; tag earlier. While I didn't get that completely working either, it did at least send me to the callback page after authenticating with Google. So I'm pretty sure I have the correct callback page registered properly with Google.</p><p>Thanks in advance for any help you might have. Athelene</p></div>
	</div>
</div>
		
<div class="comment" id="c_4806988299">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cbywBsXm2Y.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4806988299">75</a> (In reply to <a href="#c_4806887843">#74</a>) by Athelene
		posted on 2/23/2020 at 10:49 PM
		</div>
		<div class="comment_text"><p>Just wanted you to know that I've got it worked out. First problem described above was an idiot typing error. Then I had do to some updating of the endpoints and such. But the basic structure of your post was still extremely helpful. Thank you so much!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4807524959">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4807524959">76</a> (In reply to <a href="#c_4806988299">#75</a>) by Raymond Camden
		posted on 2/24/2020 at 1:51 PM
		</div>
		<div class="comment_text"><p>Cool - glad to hear it.</p></div>
	</div>
</div>
		