
<div class="comment" id="c_1713617249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617249">1</a> by Sean Corfield
		posted on 2/24/2005 at 5:34 AM
		</div>
		<div class="comment_text"><p>onSessionStart() returns a boolean, just like onApplicationStart() and onRequestStart()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617244">2</a> by John Farrar
		posted on 2/24/2005 at 5:35 AM
		</div>
		<div class="comment_text"><p>OK... got a question on the session argument "appScope". Shouldn't this be application scope (beat myself on the head for missing that during the beta). Just asking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617248">3</a> by Darryl Lyons
		posted on 2/24/2005 at 6:17 AM
		</div>
		<div class="comment_text"><p>I nice reason to have Interfaces? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617250">4</a> by Raymond Camden
		posted on 2/24/2005 at 6:22 AM
		</div>
		<div class="comment_text"><p>Sean - the docs say it returns void:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fcoldfusion%2F7%2Fhtmldocs%2Fwwhelp%2Fwwhimpl%2Fcommon%2Fhtml%2Fwwhelp.htm%3Fcontext%3DColdFusion_Documentation%26amp%3Bfile%3Dpart_cfm.htm%3AR_SPec8M6mIaeppnj_UGMA-Nxgw&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/coldfusion/7/htmldocs/wwhelp/wwhimpl/common/html/wwhelp.htm?context=ColdFusion_Documentation&amp;amp;file=part_cfm.htm">http://livedocs.macromedia....</a></p><p>I thought it was boolean as well.</p><p>John: In onSessionEnd, you can't access APPLICATION directly. You access it via a passed in argument. It is a reference so mods to the value will affect the App scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617245">5</a> by John Farrar
		posted on 2/24/2005 at 6:41 AM
		</div>
		<div class="comment_text"><p>OK... got a question on the session argument "appScope". Shouldn't this be application scope (beat myself on the head for missing that during the beta). Just asking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617247">6</a> by Sean Corfield
		posted on 2/24/2005 at 7:24 AM
		</div>
		<div class="comment_text"><p>Weird, yes, void it is... I just tried returning false to abort the session / request but it didn't work. That seems a little inconsistent...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617246">7</a> by tony petruzzi
		posted on 2/24/2005 at 9:49 PM
		</div>
		<div class="comment_text"><p>This has always been one of my biggest beefs with MacroMedia, their documentation. It's either incomplete or doesn't exist.</p><p>The biggest thing was when CFMX (6 and 6.1, not 7) was release. We heard how wonderful it will be to run mulitple instances. But when the product was release there was no simple, complete documentation anywhere telling you how to set this up. You had to hunt around the internet to find instructions from other people. There still isn't an easy, straight forward document explaining clustering in CFMX.</p><p>Granted you don't need this documentation now since CFMX7 has the most wonderful instance manager (I'm in love with it). I would love to see something like this for CFMX6.1. Wonder if you could pull it out of 7 and throw it into 6.1... hmmmmm. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617253">8</a> by luis aragon
		posted on 2/24/2005 at 10:51 PM
		</div>
		<div class="comment_text"><p>Is it possible to redirect a user to a login page when their session times out using onSessionEnd?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617251">9</a> by Raymond Camden
		posted on 2/24/2005 at 10:55 PM
		</div>
		<div class="comment_text"><p>Technically no. Remember that CF defines a session as "a period of activity". So while your session will expire, CF can't force your browser to go somewhere. (That isn't 100% true. You CAN use JavaScript code to detect X amount of time and move the user.)</p><p>What you would want to do instead is make onSessionStart push the user to the login page. Actually - what I'd do instead is use onRequestStart. Make it check for a logged in flag, and if false, push the user there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617252">10</a> by Luis Aragon
		posted on 2/25/2005 at 12:00 AM
		</div>
		<div class="comment_text"><p>Please excuse my ignorance. I thought that onsessionend executed code when a session ends( 20 min of inactivity). I was thinking of trying to put a cflocation tag in the onsessionend tag to relocate a user to a login page when the session expires. Is that what you understood from my last post? If so, I apologize and thanks for the help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617257">11</a> by Raymond Camden
		posted on 2/25/2005 at 12:40 AM
		</div>
		<div class="comment_text"><p>It does execute the code, but it does it on the server. It's not on your browser. Remember that CF is all server side. If you idle for 20 mins, CF can't force your browser to do anything.</p><p>No need to apologize though. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617256">12</a> by Luis Aragon
		posted on 2/25/2005 at 1:26 AM
		</div>
		<div class="comment_text"><p>Thanks for your help. What a major brain cramp. It can not push information to the browser. I guess since my application uses Flash Comm, I could write a push script to detect inactivity and force the user's screen to redirect to the login page.</p><p>Thanks for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617255">13</a> by Sean Corfield
		posted on 2/25/2005 at 2:49 PM
		</div>
		<div class="comment_text"><p>The main point to remember here is that onApplicationEnd() and onSessionEnd() happen asynchronously - so there is no request and therefore no associated browser.</p></div>
	</div>
</div>
		