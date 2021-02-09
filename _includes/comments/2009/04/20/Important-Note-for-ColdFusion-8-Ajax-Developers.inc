
<div class="comment" id="c_1713714778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714778">1</a> by Sean Corfield
		posted on 4/21/2009 at 6:52 AM
		</div>
		<div class="comment_text"><p>Are you saying that adding secureJSON="true" fixed the problem? I'm puzzled because you say that "disabled the prefix". Shouldn't that be secureJSON="false"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714793">2</a> by Raymond Camden
		posted on 4/21/2009 at 6:54 AM
		</div>
		<div class="comment_text"><p>Typo. Sorry. Fixing now!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714795">3</a> by Shane Zehnder
		posted on 4/21/2009 at 6:21 PM
		</div>
		<div class="comment_text"><p>If you knew the secureJSON parameter was set, couldn't you strip the first X characters from the return string (assuming you knew the prefix)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714794">4</a> by Raymond Camden
		posted on 4/21/2009 at 8:06 PM
		</div>
		<div class="comment_text"><p>Right, if you knew, and expected it, you could. You wouldn't use getJSON, since jQuery expects a JSON response. You would just use get or post, strip the char, and then evaluate() the result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714797">5</a> by Greg Stevens
		posted on 4/21/2009 at 9:20 PM
		</div>
		<div class="comment_text"><p>Guessing you are referring to the onRequest problem that prevents CFCs from being invoked properly because most of us just do something like the following inside of onRequest:</p><p>&lt;cfinclude template="#arguments.targetPage#" /&gt;</p><p>I've been thinking about this lately and why can't we just test to see if the extension is CFC and if it is, cfinvoke the component specified by #arguments.targetPage# and the method specified by URL.method and then pass in an argumentCollection="#url#"?</p><p>Has anyone tried anything like that? If so, has it failed? I haven't tested this myself but probably will be soon.</p><p>If it does work, then I don't think Adobe needs to fix anything since it is working as should be expected.</p><p>Just some random thoughts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714800">6</a> by Sean Corfield
		posted on 4/21/2009 at 9:28 PM
		</div>
		<div class="comment_text"><p>@Greg, you cannot invoke the CFC - you don't know what arguments were passed. The workaround for onRequest() and CFCs is to structDelete() it from both THIS and VARIABLES scopes inside onRequestStart(). Ray blogged this some time ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714799">7</a> by Raymond Camden
		posted on 4/21/2009 at 9:30 PM
		</div>
		<div class="comment_text"><p>SC is right. You can find an example here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F3%2F19%2FAsk-a-Jedi-Ajaxbound-requests-and-onRequest%3Ao-28M7XriwNOSeLnFmpmDxQZYts&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/3/19/Ask-a-Jedi-Ajaxbound-requests-and-onRequest">http://www.coldfusionjedi.c...</a></p><p>And to be fair, I learned the technique from Sean so he gets the credit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714798">8</a> by Sean Corfield
		posted on 4/21/2009 at 9:50 PM
		</div>
		<div class="comment_text"><p>I was being a lazy blogger at the time :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714777">9</a> by Greg Stevens
		posted on 4/21/2009 at 11:47 PM
		</div>
		<div class="comment_text"><p>@Sean, @Ray, thanks for the reply. I've been using the structDelete method for a while now but kept thinking there must be some other way to do it.</p><p>I just threw together some sample code that does successfully invoke a component inside the onRequest method and pass any arbitrary arguments specified in the URL. This code could be expanded to structAppend the Form values as well in order to grab paramaters from either scope.</p><p>Right as I was writing it though I realized it won't work for a lot of the advanced ColdFusion 8 Ajax stuff since it won't convert the return values of the functions back to JSON or whatever returnFormat may be specified.</p><p>As well, it opens a security vulnerability because the component is now being executed from within the application so any function, not just those with access="remote" will also be accessible through the URL.</p><p>Could be beefed up though to check the metadata, only execute remote functions and maybe automatically grab singletons from a factory (LightWire or ColdSpring). Grabbing the singletons from the factory is what made me think of trying this way in the first place.</p><p>If you're interested in the code at all just drop me a line at greg (at) stevens (dot) pro and I'll be more than happy to send it over. Would post it somewhere but don't have an active website up right now.</p><p>Thanks again guys, keep up the great work, been reading your stuff for years now and am always amazed at the wealth of information!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714779">10</a> by Raymond Camden
		posted on 4/22/2009 at 6:05 AM
		</div>
		<div class="comment_text"><p>Follow up you guys may be interested in:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.insideria.com%2F2009%2F04%2Fplaying-with-jquerys-ajaxsetup.html%3AEHGVi5fvXghDf1fB0_YsyU3rPAA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.insideria.com/2009/04/playing-with-jquerys-ajaxsetup.html">http://www.insideria.com/20...</a></p><p>What's cool is that you could literally drop this function into a site and fix this issue client side in a heartbeat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714780">11</a> by Edward Beckett
		posted on 4/22/2009 at 11:55 AM
		</div>
		<div class="comment_text"><p>Thanks Ray ...</p><p>I would have been pulling my hair out for quite a while on this ... :)</p></div>
	</div>
</div>
		