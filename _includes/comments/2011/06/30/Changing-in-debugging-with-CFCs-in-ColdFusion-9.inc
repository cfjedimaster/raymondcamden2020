
<div class="comment" id="c_1713733958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733958">1</a> by Mark Mandel
		posted on 7/1/2011 at 4:28 AM
		</div>
		<div class="comment_text"><p>Ah yep - I've seen this in mxUnit, and always wondered why.</p><p>If you click on a specific test, it goes directly to the CFC, so you never get the debugging. At least now I know I'm not totally crazy :) Thanks for the confirmation Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733959">2</a> by Raymond Camden
		posted on 7/1/2011 at 4:29 AM
		</div>
		<div class="comment_text"><p>No problem, and I should clarify, I went to Adobe (heh, that's me soon ;) to verify this was intended. It wasn't accidental.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733963">3</a> by Adam Cameron
		posted on 7/1/2011 at 3:29 PM
		</div>
		<div class="comment_text"><p>Ah!  This had me thinking I was going loopy!</p><p>It's annoying.</p><p>Is there any way to make it work as per before?  It's handy to have it on when running MXUnit tests sometimes, and I believe it should be MY decision as to whether I have debugging switched on or not: I'm a big enough boy to switch debugging on and off as and when necessary.  It's annoying to have that freedom taken away from me.</p><p>I have to say that with this and the CFABORT/CFLOCATION bug that has bitten me on the bum this week, I am not finding myself particularly happy with your new employers, Ray.</p><p>:-|</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733968">4</a> by Raymond Camden
		posted on 7/1/2011 at 3:38 PM
		</div>
		<div class="comment_text"><p>I honestly think it was a matter of 900 people fussing their Ajax was broken (even when it was their fault) versus 2 people who actually liked this. Now - that being said - you are the second person to mention using it via mxunit. Best I can suggest is file an ER for it and get folks to vote it up. Maybe the logic can be if cfsetting showdebugoutput=true is on in the CFC, it works. That way you would have to go out of your way a bit, but it would work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733961">5</a> by Raymond Camden
		posted on 7/1/2011 at 3:45 PM
		</div>
		<div class="comment_text"><p>As an experiment, I wrote an onRequestEnd that did this:</p><p>&lt;cfinclude template="/WEB-INF/debug/classic.cfm"&gt;</p><p>and this fails here:</p><p>&lt;cfset qEvents = cfdebugger.getDebugger().getData()&gt;</p><p>Because getDebugger() returned null. So it looks like Adobe killed the access at a real low level. Now I'm curious if this broke debugging in CFB as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733960">6</a> by Raymond Camden
		posted on 7/1/2011 at 3:50 PM
		</div>
		<div class="comment_text"><p>Nah, CFB debugging works fine. That was kind of a dumb test I guess. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733965">7</a> by Pritesh
		posted on 7/1/2011 at 5:03 PM
		</div>
		<div class="comment_text"><p>Ah, This is what I usually do to check performance of CFC. Created test page which parse CFC's ajax request URL and called it based on passed arguments in URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733967">8</a> by Raymond Camden
		posted on 7/1/2011 at 5:07 PM
		</div>
		<div class="comment_text"><p>This change should not - afaik - impact the Server Monitor too. So if you have slow queries in your CFCs - they should still show up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733964">9</a> by Landon (WolffenTCI)
		posted on 7/1/2011 at 7:57 PM
		</div>
		<div class="comment_text"><p>Thank you for looking into this Ray. Interesting to see Adobe went to such a low level to kill the access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733962">10</a> by Landon (WolffenTCI)
		posted on 7/2/2011 at 12:07 AM
		</div>
		<div class="comment_text"><p>Btw, I've added this as Bug/ER 86966 if anyone else wants to vote for this. (Hopefully I filled everything in right. Never submitted and ER to Adobe before).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733966">11</a> by Adam Cameron
		posted on 7/2/2011 at 4:02 PM
		</div>
		<div class="comment_text"><p>I've voted for the bug: <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D86966%3AVUmcT4KdKLQHHePka1EBzDtU7NA&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=86966">http://cfbugs.adobe.com/cfb...</a>.</p><p>Ray, I know what you mean about 900 people getting confused and only two people "liking" it, but that's specious for a coupla reasons:<br>* that debugging output on CFC requests was not "a problem", the problem was that the people getting confused by it are muppets.  It's not for Adobe to fix that.<br>* people who use this functionality as it was will not email Adobe and go "hey, cool, that still works as expected: thanks for that".  So it's a meaningless metric to mention the 900 vs 2 people. I know you did not mean to suggest it was a statistically sound or meaningful analysis, but it probably actually *was* Adobe's rationale for "fixing" it.</p><p>Basically this was a stupid way of dealing with a non-problem.</p><p>And it should be backed out.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733970">12</a> by Raymond Camden
		posted on 7/2/2011 at 4:23 PM
		</div>
		<div class="comment_text"><p>Fair enough point Adam. And it's getting my vote too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733969">13</a> by Paul Connell
		posted on 7/4/2011 at 1:53 PM
		</div>
		<div class="comment_text"><p>At my workplace AJAX call data has comments (START-END) around the data, and the content is stripped from between them by the javascript, nobody realised you could cfcontent reset and showdebug=no with a cfabort if required.  I can see both sides but I'd much prefer to decide myself, so voted for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733972">14</a> by Tomas Sancio
		posted on 11/11/2011 at 9:09 PM
		</div>
		<div class="comment_text"><p>Thanks Ray for all your work supporting ColdFusion developers.</p><p>As a newcomer to ColdFusion (started last year), I've only worked with CFCs directly from Flex. I guess this means that I'm going to have to write some debugging CFMs unless we're spoiled once more by the easy integration between Flex &amp; CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733979">15</a> by Tomas Sancio
		posted on 11/11/2011 at 9:35 PM
		</div>
		<div class="comment_text"><p>Actually you can debug the CFC without writing a CFM. Just open the CFC with a browser, select the method and enter the parameters in the URL. Gets messy for complex parameters.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733989">16</a> by Landon (WolffenTCI)
		posted on 11/11/2011 at 9:39 PM
		</div>
		<div class="comment_text"><p>That works in CF8 and prior, but as of CF9, no debug information outputs when executing a CFC using the URL method (hence the reason I submitted the ER/bug). Are you running CF9?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733990">17</a> by Raymond Camden
		posted on 11/11/2011 at 10:21 PM
		</div>
		<div class="comment_text"><p>@Tomas: Ditto Lando. The entire point of this entry is about that change. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733992">18</a> by Tomas
		posted on 11/13/2011 at 1:23 AM
		</div>
		<div class="comment_text"><p>Actually yes, it does work with CF9 through the URL as long as access="remote". For example, I type http://localhost:8500/QPMServerCF/CFAssetPropertyService.cfc?method=getPropertiesFromShipItemWithId&amp;siteid=2&amp;ruta=520&amp;boxid=3539 and get a bunch of warbled text followed by the reports that Ray describes in his recent Adobe video, but without having to write the CFM.</p><p>Thanks to everybody</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733987">19</a> by Raymond Camden
		posted on 11/13/2011 at 1:32 AM
		</div>
		<div class="comment_text"><p>Maybe it's 901. Are you on 9.0? Obviously all of us can't be wrong here. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733991">20</a> by Tomas
		posted on 11/13/2011 at 1:53 AM
		</div>
		<div class="comment_text"><p>This is what I'm doing (QuickTime video): <a href="http://disq.us/url?url=http%3A%2F%2Fwww.scamecanica.com%2Fsoftware%2Fqpm_shots03%2Fcf02572.mov%3AaHB9CAykW33_dYXInxIElaGis-0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.scamecanica.com/software/qpm_shots03/cf02572.mov">http://www.scamecanica.com/...</a> to debug my CF app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733993">21</a> by Raymond Camden
		posted on 11/13/2011 at 1:55 AM
		</div>
		<div class="comment_text"><p>That video doesn't show what version of CF you are running.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733994">22</a> by Adam Cameron
		posted on 11/13/2011 at 2:09 AM
		</div>
		<div class="comment_text"><p>I'm pretty sure (80%, say) it came in with 9.0.1.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733996">23</a> by Tomas
		posted on 11/13/2011 at 2:11 AM
		</div>
		<div class="comment_text"><p>Here's the info. Thanks</p><p>Debugging Information<br>ColdFusion Server Developer	9,0,0,251028<br>Template	/QPMServerCF/CFAssetPropertyService.cfc<br>Time Stamp	12-Nov-11 04:20 PM<br>Locale	English (US)<br>User Agent	Mozilla/5.0 (Macintosh; Intel Mac OS X 10_5_8) AppleWebKit/534.50.2 (KHTML, like Gecko) Version/5.0.6 Safari/533.22.3<br>Remote IP	127.0.0.1<br>Host Name	localhost</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733995">24</a> by Raymond Camden
		posted on 11/13/2011 at 2:15 AM
		</div>
		<div class="comment_text"><p>That would be 9.0, not 9.0.1. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734000">25</a> by Tomas
		posted on 11/13/2011 at 2:34 AM
		</div>
		<div class="comment_text"><p>Worth mentioning that my experience with ColdFusion so far has been great. Everything that could've gone wrong (this, for example) has gone right and the productivity achieved with this software (server + CF Builder) is incredible (as admitted by someone who sits next to me and works with php). We've already had one customer buy a server license and are expecting more down the road. Thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733999">26</a> by Raymond Camden
		posted on 11/13/2011 at 2:38 AM
		</div>
		<div class="comment_text"><p>Sweet. Love to hear people loving CF. Keep on - it just gets better!</p><p>p.s. I may be biased. Nah, I'm not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734002">27</a> by Bill Franklin
		posted on 6/18/2012 at 9:21 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>who at Adobe confirmed that this was as of 9.0.1? I can't tell, by the release notes, that it was part of that release.</p><p>We use the SQL Query debug information all the time via Charles Proxy to determine what queries were run for a given AMF request....or we did, until we upgraded from 8 to 9.0.1...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734004">28</a> by Raymond Camden
		posted on 6/19/2012 at 4:53 AM
		</div>
		<div class="comment_text"><p>Are you asking where it is documented? If so - I don't know. Unfortunately there is no way to toggle this off. It is what it is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734005">29</a> by Al Serize
		posted on 11/8/2012 at 12:19 AM
		</div>
		<div class="comment_text"><p>Ray - I'm trying to build a script that would dynamically change the getDebugTemplate value from false to true. what I currently have is not working as Coldfusion is telling me that I can't change the value of a function. Here is what I got:</p><p>&lt;cfset dbObj.getDebugTemplate() = true&gt;</p><p>What you run into this in the past? Any help would be appreciated</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734007">30</a> by Raymond Camden
		posted on 11/8/2012 at 12:24 AM
		</div>
		<div class="comment_text"><p>I do not see that API in CF10. I don't have CF9 anymore to test. In general though that's now how you use functions.</p><p>&lt;cfset smething.somefunc(value)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734009">31</a> by Al Serize
		posted on 11/18/2012 at 12:22 AM
		</div>
		<div class="comment_text"><p>hey Ray - Thanks for the response and looking into this. I'm actually using CF10, basically what I'm trying to do is to dynamically change the robust error reporting based on IP address. I tried approaching it by setting up the Java object but got an error in CF. Have you tried anything like this before?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734010">32</a> by Raymond Camden
		posted on 11/18/2012 at 12:58 AM
		</div>
		<div class="comment_text"><p>ColdFusion 10 added this.enableRobustException=true/false to the Application.cfc file. You could try logic like this in App.cfc:</p><p>if(some condition) this.enableRobustException=true;<br>else this.enableRobustException=false;</p><p>That may work. Don't forget too that if you are using proper error handling (ala onError), you can do if(somecondition) cfdump the error and get the exact same info.</p></div>
	</div>
</div>
		