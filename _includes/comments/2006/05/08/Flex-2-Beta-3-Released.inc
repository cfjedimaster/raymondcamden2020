
<div class="comment" id="c_1713652696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652696">1</a> by Malcolm Hawker
		posted on 5/9/2006 at 5:56 AM
		</div>
		<div class="comment_text"><p>Ray, I just keep getting the Flash Player installer telling me to install FP8 I have 8.5 installed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652686">2</a> by Raymond Camden
		posted on 5/9/2006 at 5:57 AM
		</div>
		<div class="comment_text"><p>You need the latest player from labs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652685">3</a> by Ryan Guill
		posted on 5/9/2006 at 6:18 AM
		</div>
		<div class="comment_text"><p>Ah, see ray gets to play with b3 before anyone else, thats how he rolls...</p><p>Hey ray, why not just publish the source with the swf so we can right click and view it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652688">4</a> by Raymond Camden
		posted on 5/9/2006 at 6:20 AM
		</div>
		<div class="comment_text"><p>I don't think it will grab the CFC. I'll try tomorrow morning. I'm not doing it tonight as I'm behind on some stuff I need to do. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652670">5</a> by Will Belden
		posted on 5/9/2006 at 6:20 AM
		</div>
		<div class="comment_text"><p>Ray -- same problem as above.  Trying to view the site, both in Firefox and IE.  Keeps saying (in FF, at least) "Downloading from <a href="http://disq.us/url?url=http%3A%2F%2Ffpdownload.macromedia.com%3AYkIWMUfmeK237s1h6WNvCR43Jz0&amp;cuid=3321886" rel="nofollow noopener" title="fpdownload.macromedia.com">fpdownload.macromedia.com</a>".  Just keeps on.  Not sure what to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652698">6</a> by Jeff Houser
		posted on 5/9/2006 at 6:23 AM
		</div>
		<div class="comment_text"><p>I had the same infinite install loop.  According to the Flex 2 beta 3 install, the flash player was updated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652693">7</a> by Raymond Camden
		posted on 5/9/2006 at 6:29 AM
		</div>
		<div class="comment_text"><p>Hmpth. So I went to duplicate this. On labs though, even though it says Flash Player beta 3, the download says beta 2.</p><p>Double check. When you downloaded it, did it say b2 or somesuch in the link?</p><p>If so - I bet this is just a hiccup in the labs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652671">8</a> by Will Belden
		posted on 5/9/2006 at 6:38 AM
		</div>
		<div class="comment_text"><p>Ray -- no it said "You must install Flash Player 8, do you want to install it?"  In Firefox, the install began, told me to shut down Firefox, it then did it's thing, reopened Firefox and went the intended URL (of your Flex gizmo page), but it just never got going.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652675">9</a> by Scott P
		posted on 5/9/2006 at 7:14 AM
		</div>
		<div class="comment_text"><p>I had the same problem as the others.  This is what I did to get it to work, use at your own risk.</p><p>In Firefox, type about:plugins in the addressbar and look at the ShockWave Flash filename and version:<br>Shockwave Flash<br>File name: NPSWF32.dll<br>Shockwave Flash 9.0 b296</p><p>Mine was still at 8. something even after installing the latest plugin from the labs.</p><p>If you have installed Flash Player 9, search your harddrive for NPSWF32.dll</p><p>The version on the file should be 9.0.0.296.  Copy this file into your plugins folder and overwrite the version in there.</p><p>Hint: C:\Documents and Settings\&lt;user name&gt;\Application Data\Mozilla\Firefox\Profiles\&lt;Profile name&gt;\plugins</p><p>Restart browser and check the about:plugins</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652674">10</a> by Raymond Camden
		posted on 5/9/2006 at 7:33 AM
		</div>
		<div class="comment_text"><p>Weird. I didn't have to do all that - but I had... um earlier access. Anyway - Scott - are you able to see the demo now? (And my wonderful design skills?) I'm heading to bed now. See everyone in the morning. The doc gave me some "special" cough syrup that does wonder for my sleeping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652677">11</a> by Scott P
		posted on 5/9/2006 at 7:51 AM
		</div>
		<div class="comment_text"><p>Ray - yes I was able to view it.</p><p>I think that a big part of my problem was I am running portable firefox so my profile directories are in a different location.  The installers from lab look (seem to look) in standard places for firefox then skip over it if they don't find them.  I had opera installed and saw that it did work in opera, but not firefox.</p><p>I copied the dll from the opera plugin folder to the firefox plugin folder and it worked.</p><p>gotta love good drug based cough syrups....warm fuzzy feeling aside, they actually do help. (spam filter dropped my word there)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652690">12</a> by Nick Tong
		posted on 5/9/2006 at 1:25 PM
		</div>
		<div class="comment_text"><p>OT: coughing - just eat chocolate: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bupa.co.uk%2Fhealth_information%2Fhtml%2Fhealth_news%2F301104chocolatecough.html%3AiLxqTjcum4MeR5hx1cKZ6C8I8Ys&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bupa.co.uk/health_information/html/health_news/301104chocolatecough.html">http://www.bupa.co.uk/healt...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652691">13</a> by Nick Tong
		posted on 5/9/2006 at 1:29 PM
		</div>
		<div class="comment_text"><p>I had this problem - I ran the active x download instead of the plug-in download and it worked fine after that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652694">14</a> by Raymond Camden
		posted on 5/9/2006 at 3:14 PM
		</div>
		<div class="comment_text"><p>Ok so guys - what do you think? Cool, eh? I mean the code behind this was so trivial, and yet to me, this version is better than the html version because of how fast you can get stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652701">15</a> by Phillip Senn
		posted on 5/9/2006 at 4:34 PM
		</div>
		<div class="comment_text"><p>It doesn't work for me.  I just get a blank (steel blue) screen.<br>In IE 6.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652700">16</a> by Scot
		posted on 5/9/2006 at 4:36 PM
		</div>
		<div class="comment_text"><p>Damn, I want to see but am in OS lockdown here at work. I won't be able to enjoy flex until they review, test, package, repackage, release the right flash player to the client computers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652699">17</a> by Raymond Camden
		posted on 5/9/2006 at 4:37 PM
		</div>
		<div class="comment_text"><p>Phillip - last night I mentioned how the downloads for FP seemed "stuck" at b2. Try them again. They seem to be updated. Also, you want to uninstall the old FP 8.5 player first.</p><p>Scott - just wait till you get home. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652703">18</a> by Justice
		posted on 5/9/2006 at 4:55 PM
		</div>
		<div class="comment_text"><p>I just installed the Flex IDE beta 3, which comes with the latest flash player, and both IE and FF work perfect.  Very cool Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652702">19</a> by Joshu Cyr
		posted on 5/9/2006 at 5:36 PM
		</div>
		<div class="comment_text"><p>This has been my only real frustration with flex thus far.  I made the mistake of assuming that the prompt would download the right flash player (it doesn't).</p><p>For any of us sending anyone not super knowledgable about flex to our flex app prompts them to do the wrong thing (do the wrong ugrade to flash), and from then on they only see a blank page.  I understand that adobe doesn't want to prompt people to install a beta flash player at this point, but perhaps a better warning or prompt instead?  I think a lot of people are just not seeing flex at all, and walking away, instead of working to get the proper player.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652704">20</a> by Phillip Senn
		posted on 5/9/2006 at 7:28 PM
		</div>
		<div class="comment_text"><p>I got it working by downloading the "Uninstall Flash Player" program from the knowledgebase at<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fknowledgebase%2Findex.cfm%3Fid%3Dtn_14157%3ACPIrI1w2LnZCa_MWsp1PsKkLT0k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/knowledgebase/index.cfm?id=tn_14157">http://www.adobe.com/cfusio...</a></p><p>It's like my mother used to tell me:<br>"Phillip" she'd say (because that's my name).  "It's ALLLLWAAAAYYYSSSS something."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652706">21</a> by Arclight
		posted on 5/31/2006 at 12:14 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>My Flex 2 Beta 2 application compiled for the 8.5 viewer will not run in the 9.0 Flash plugin.  The 9.0 plugin will run other older content, just not mine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652707">22</a> by Raymond Camden
		posted on 5/31/2006 at 12:16 AM
		</div>
		<div class="comment_text"><p>I'm still rather new to this, Arclight. I'd suggest the labs forums perhaps for help.</p></div>
	</div>
</div>
		