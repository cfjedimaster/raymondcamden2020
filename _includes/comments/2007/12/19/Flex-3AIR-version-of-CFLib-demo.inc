
<div class="comment" id="c_1713675628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675628">1</a> by Chad
		posted on 12/20/2007 at 3:09 AM
		</div>
		<div class="comment_text"><p>I played with AIR about 3 months ago and i did not have to do this to access a CFC on server.</p><p>I dont pretend to know Flex/AIR yet, so im curious if Flex/AIR has changed or was it the way i setup my RemoteObject tag?  I used a attribute called endpoint and i noticed you did not in your code.</p><p>&lt;mx:RemoteObject id="roGetJob" destination="ColdFusion" source="test" endpoint="<a href="http://disq.us/url?url=http%3A%2F%2Fdemo.dev%2Fflex2gateway%2F%3AJhaqELHcQMBujEXxyOmej-DozjE&amp;cuid=3321886" rel="nofollow noopener" title="http://demo.dev/flex2gateway/">http://demo.dev/flex2gateway/</a>" <br>	result="onGetJobResult(event)" fault="onGetJobFault(event)"&gt; <br>    &lt;mx:method name="getJob"&gt;<br>        &lt;mx:arguments&gt;<br>            &lt;jobNum&gt;{jobNum.text}&lt;/jobNum&gt;<br>        &lt;/mx:arguments&gt;<br>    &lt;/mx:method&gt;<br>&lt;/mx:RemoteObject&gt;</p><p>Is there a best practice on defining the endpoint?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675625">2</a> by Raymond Camden
		posted on 12/20/2007 at 3:16 AM
		</div>
		<div class="comment_text"><p>Chad, I'm rusty in Flex, and definitely new to AIR. I may have missed the obvious. Try hitting my CFC like I did, see if it works. I mean, my address, your code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675633">3</a> by Steve Glachan
		posted on 12/20/2007 at 3:19 AM
		</div>
		<div class="comment_text"><p>Thanks Ray. Just tried to download your Zip and it does not seems to open. I have 7-Zip, you didn't use anything special to archive this app? Most probably a problem my end but thought I'd ask.</p><p>Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675630">4</a> by Raymond Camden
		posted on 12/20/2007 at 3:24 AM
		</div>
		<div class="comment_text"><p>Notice I said, "I renamed it to <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.zip%3AQtkM6oRlzBJh2HTMo2ocyGH2FEI&amp;cuid=3321886" rel="nofollow noopener" title="cflib.zip">cflib.zip</a> as I'm too lazy..."</p><p>Just rename to .air. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675632">5</a> by Raymond Camden
		posted on 12/20/2007 at 3:26 AM
		</div>
		<div class="comment_text"><p>When I tried this, I got an error when I hit build.</p><p>Error: Cannot assign operations into an RPC Service (endpost)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675631">6</a> by Raymond Camden
		posted on 12/20/2007 at 3:26 AM
		</div>
		<div class="comment_text"><p>Wait, ignore that, I used the wrong property name. Trying again...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675629">7</a> by Raymond Camden
		posted on 12/20/2007 at 3:28 AM
		</div>
		<div class="comment_text"><p>Wow, that worked like a charm! I'll ping Simeon to let him know as well. This is a LOT easier. To my other readers, I won't bother updating the AIR unless I release a new version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675715">8</a> by Chad
		posted on 12/20/2007 at 3:40 AM
		</div>
		<div class="comment_text"><p>Oh good, im glad that works.</p><p>I went to try it on my side and realized my eclipse/AIR setup is all messed up.  I try to execute a compiled AIR app out of my eclipse and i get an error about it requires a version of AIR that is no longer supported.</p><p>I think i just need to upgrade to the latest beta AIR.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675714">9</a> by Chad
		posted on 12/20/2007 at 3:55 AM
		</div>
		<div class="comment_text"><p>Oh... one more comment that i learned when playing with this stuff.</p><p>Im pretty sure it was the endpoint, but, it is case sensitive.  If i remember right i camel cased it (Flex2Gateway) and beat my head against the proverbial wall trying to figure out what was wrong.  You would think if my IIS is not case sensitive on the URL that the endpoint would not be also.</p><p>Also why name it flex2gateway?  Im sure flex 2 is not going to be the last version.  :)</p><p>Or is it meant to be Flex-Too-Gateway not version 2?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675710">10</a> by Gareth
		posted on 12/20/2007 at 7:04 AM
		</div>
		<div class="comment_text"><p>@Chad,<br>I think the way you mention is completely fine.  The only thing I usually end up doing is handling most of it via actionscript instead of in the MXML, but that's all down to personal preference.  If you're going to be using an MVC approach, I think it would make things easier to put it in actionscript in order to separate the view from the other components, but for a quick app, I think it works nicely :)  I'm still reading up on all the blogs and articles for best practices, but I think that's still a work-in-progress :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675711">11</a> by Raymond Camden
		posted on 12/20/2007 at 7:38 AM
		</div>
		<div class="comment_text"><p>One thing I hope people realize - my Flex code is definitely NOT best practices. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675708">12</a> by Derek
		posted on 6/2/2008 at 11:18 AM
		</div>
		<div class="comment_text"><p>I was searching on how to connect to a cfc from flex and stumbled upon this. I tried to run the AIR app, but no dice.</p><p>"This application requires a version of Adobe AIR which is no longer supported. Please contact the application author for an updated version."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675712">13</a> by Raymond Camden
		posted on 6/2/2008 at 3:47 PM
		</div>
		<div class="comment_text"><p>I guess my code is too old to run with the current version. I'll have to see if I can rebuild it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675709">14</a> by Raymond Camden
		posted on 6/2/2008 at 6:04 PM
		</div>
		<div class="comment_text"><p>I updated the code and it should work now in AIR 1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675713">15</a> by Derek
		posted on 6/2/2008 at 9:22 PM
		</div>
		<div class="comment_text"><p>hehe, now i get</p><p>"The application could not be installed because the AIR file is damaged. Try obtaining a new AIR file from the application author."</p></div>
	</div>
</div>
		