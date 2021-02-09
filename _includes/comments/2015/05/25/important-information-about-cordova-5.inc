
<div class="comment" id="c_2044328571">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2044328571">1</a> by Nic Raboy
		posted on 5/25/2015 at 2:38 PM
		</div>
		<div class="comment_text"><p>Well done dude!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2045565463">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_0mCDyqlAPH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2045565463">2</a> by Victor
		posted on 5/26/2015 at 8:16 AM
		</div>
		<div class="comment_text"><p>Very interesting, thanks a lot! When I saw about this "CSP" stuff i tried to ignore it because it looks really gibberish (all in a single line... yuck!) but now I see it will be important.<br>However, now I tried and it seems like mailto: and tel: schemes do not work in this CSP and must be used like in the old version, by &lt;acces launch-external="yes" origin="mailto:"/&gt; and &lt;access launch-external="yes" origin="tel:"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2048072418">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicolasgrolleau.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2048072418">3</a> by Nicolas Grolleau
		posted on 5/27/2015 at 2:03 PM
		</div>
		<div class="comment_text"><p>If you use the cordova-plugin-whitelist plugin and not configure CSP, you'll get plenty (like a lot) of lines in the logs asking to add CSP in the html files.</p><p>One important thing if you add CSP is to test your app with a device (or simulator) that really supports it.<br>When I migrated my app to cordova 5, I configured CSP mostly with 'self', tested on my primary target device wich runs android jelly bean and thought I was done.<br>But later people tested with KitKat and nothing was working.</p><p>I'd want to add that cordova-plugin-whitelist plugin still needs to be configured in config.xml (with access origin, allow-intent or allow-navigation) in addition to CSP in html.</p><p>An alternative for people wanting to migrate quicker and not focus on new security oportunities is to add cordova-plugin-legacy-whitelist instead (then security works like with older versions)</p><p>And I found CSP was pretty well explained on this page : <a href="http://disq.us/url?url=http%3A%2F%2Fcontent-security-policy.com%2F%3ArtWi2cWNhAWOnXbVR8R9gKp9UY8&amp;cuid=3321886" rel="nofollow noopener" title="http://content-security-policy.com/">http://content-security-pol...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2048317584">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2048317584">4</a> (In reply to <a href="#c_2048072418">#3</a>) by Raymond Camden
		posted on 5/27/2015 at 4:30 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing this, Nicolas!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2049256096">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_0mCDyqlAPH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2049256096">5</a> (In reply to <a href="#c_2045565463">#2</a>) by Victor
		posted on 5/28/2015 at 7:20 AM
		</div>
		<div class="comment_text"><p>Wrong! - well, kinda.<br>From the cordova whitelist plugin documentation, I was missing &lt;allow-intent href="tel:*"/&gt; and the same for mailto:</p><p>If you use &lt;access origin=""&gt; tags for tel: and mailto: it looks like you also have to add  &lt;access origin="*"&gt; for your app to access external requests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2508103131">
	<div>
		<img src="https://disqus.com/api/users/avatars/scaryuste.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2508103131">6</a> by inane
		posted on 2/11/2016 at 2:49 PM
		</div>
		<div class="comment_text"><p>I am having a problem related with this topic, running on ios I have this error in the console...</p><p>Refused to execute inline script because it violates the following Content Security Policy directive: "default-src 'self' data: gap: <a href="https://disq.us/url?url=https%3A%2F%2Fssl.gstatic.com%3APr_dofgwDlrWIvgGHRlFFBdhLYU&amp;cuid=3321886" rel="nofollow noopener" title="https://ssl.gstatic.com">https://ssl.gstatic.com</a> 'unsafe-eval'". Note that 'script-src' was not explicitly set, so 'default-src' is used as a fallback.</p><p>Any clue about it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2508117062">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2508117062">7</a> (In reply to <a href="#c_2508103131">#6</a>) by Raymond Camden
		posted on 2/11/2016 at 2:57 PM
		</div>
		<div class="comment_text"><p>You would need to add unsafe-inline.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2508120264">
	<div>
		<img src="https://disqus.com/api/users/avatars/scaryuste.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2508120264">8</a> (In reply to <a href="#c_2508117062">#7</a>) by inane
		posted on 2/11/2016 at 2:59 PM
		</div>
		<div class="comment_text"><p>my meta-tag line is : "   &lt;meta http-equiv="Content-Security-Policy" content="default-src 'self' data: gap: <a href="https://disq.us/url?url=https%3A%2F%2Fssl.gstatic.com%3APr_dofgwDlrWIvgGHRlFFBdhLYU&amp;cuid=3321886" rel="nofollow noopener" title="https://ssl.gstatic.com">https://ssl.gstatic.com</a> 'unsafe-eval'; style-src 'self' 'unsafe-inline'; media-src *"&gt; "  is not correct?</p><p>Thank you for your soon response...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2508128827">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2508128827">9</a> (In reply to <a href="#c_2508120264">#8</a>) by Raymond Camden
		posted on 2/11/2016 at 3:05 PM
		</div>
		<div class="comment_text"><p>unsafe-inline needs to be in default-src or in a new script-src block</p></div>
	</div>
</div>
		
<div class="comment" id="c_2508148906">
	<div>
		<img src="https://disqus.com/api/users/avatars/scaryuste.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2508148906">10</a> (In reply to <a href="#c_2508128827">#9</a>) by inane
		posted on 2/11/2016 at 3:17 PM
		</div>
		<div class="comment_text"><p>now my meta-tag is:   &lt;meta http-equiv="Content-Security-Policy" content="default-src 'unsafe-inline' data: gap: <a href="https://disq.us/url?url=https%3A%2F%2Fssl.gstatic.com%3APr_dofgwDlrWIvgGHRlFFBdhLYU&amp;cuid=3321886" rel="nofollow noopener" title="https://ssl.gstatic.com">https://ssl.gstatic.com</a> 'unsafe-eval'; style-src 'self' 'unsafe-inline'; script-src 'unsafe-inline'; media-src *"&gt;</p><p>and the error: Refused to load the script 'file:///var/mobile/Containers/Bundle/Application/921B2EDB-53C4-485E-B3F6-9F66585804CF/<a href="http://disq.us/url?url=http%3A%2F%2FSurvey.app%2Fwww%2Fcordova.js%27%3ADczbab4IstFH7lBketUP3vyDGFg&amp;cuid=3321886" rel="nofollow noopener" title="Survey.app/www/cordova.js'">Survey.app/www/cordova.js'</a> because it violates the following Content Security Policy directive: "script-src 'unsafe-inline'".</p><p>:-(</p></div>
	</div>
</div>
		
<div class="comment" id="c_2509204543">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2509204543">11</a> (In reply to <a href="#c_2508148906">#10</a>) by Raymond Camden
		posted on 2/12/2016 at 2:03 AM
		</div>
		<div class="comment_text"><p>Try adding 'self' to script-src too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2628057351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2628057351">12</a> by Clash
		posted on 4/17/2016 at 12:04 PM
		</div>
		<div class="comment_text"><p>&lt;meta http-equiv="Content-Security-Policy" content="</p><p>    default-src 'self' data: gap: <a href="https://disq.us/url?url=https%3A%2F%2Fssl.gstatic.com%3APr_dofgwDlrWIvgGHRlFFBdhLYU&amp;cuid=3321886" rel="nofollow noopener" title="https://ssl.gstatic.com">https://ssl.gstatic.com</a> ‘unsafe-eval’;</p><p>    style-src 'self' 'unsafe-inline';</p><p>    script-src 'self' 'unsafe-inline';</p><p>    connect-src <a href="https://disq.us/url?url=https%3A%2F%2Fenigmatic-springs-67232.herokuapp.com%3AfI8BgN8S1MJgW70t31siGkq4Br4&amp;cuid=3321886" rel="nofollow noopener" title="https://enigmatic-springs-67232.herokuapp.com">https://enigmatic-springs-6...</a>;</p><p>    media-src *"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2628058191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2628058191">13</a> (In reply to <a href="#c_2628057351">#12</a>) by Clash
		posted on 4/17/2016 at 12:05 PM
		</div>
		<div class="comment_text"><p>The code above does not work. I wonder why?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2629588891">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2629588891">14</a> (In reply to <a href="#c_2628058191">#13</a>) by Raymond Camden
		posted on 4/18/2016 at 11:39 AM
		</div>
		<div class="comment_text"><p>How does it not work? What error or unexpected behavior do you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2689031157">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_e2qkgdJJqG.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2689031157">15</a> by Anup Nair
		posted on 5/22/2016 at 8:57 AM
		</div>
		<div class="comment_text"><p>&lt;meta http-equiv="Content-Security-Policy" content="default-src 'self' *.xyz.com data: gap: <a href="https://disq.us/url?url=https%3A%2F%2Fssl.gstatic.com%3APr_dofgwDlrWIvgGHRlFFBdhLYU&amp;cuid=3321886" rel="nofollow noopener" title="https://ssl.gstatic.com">https://ssl.gstatic.com</a> *.xyz.com 'unsafe-eval'; style-src 'self' 'unsafe-inline'; media-src *;connect-src *"&gt;<br>error message that I am getting in visual studio when running in device is : FAILED TO LOAD RESOURE XYZ.COM but the app works fine on ripple browser.<br>is the issue related to csp? if so how may I fix it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2690073011">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2690073011">16</a> (In reply to <a href="#c_2689031157">#15</a>) by Raymond Camden
		posted on 5/23/2016 at 12:31 AM
		</div>
		<div class="comment_text"><p>How are you trying to load stuff?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2690361220">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_e2qkgdJJqG.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2690361220">17</a> (In reply to <a href="#c_2690073011">#16</a>) by Anup Nair
		posted on 5/23/2016 at 5:45 AM
		</div>
		<div class="comment_text"><p>i'am using $.ajax method to post data to <a href="http://disq.us/url?url=http%3A%2F%2Fxyz.com%2Fsomething.php%3AyTzmtimTNl8wLWyoBvv3cl82xgw&amp;cuid=3321886" rel="nofollow noopener" title="xyz.com/something.php">xyz.com/something.php</a> page.its working well while running with ripple in chrome browser but not on my android device</p></div>
	</div>
</div>
		
<div class="comment" id="c_2690619044">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2690619044">18</a> (In reply to <a href="#c_2690361220">#17</a>) by Raymond Camden
		posted on 5/23/2016 at 11:48 AM
		</div>
		<div class="comment_text"><p>In connect-src, try adding <a href="http://disq.us/url?url=http%3A%2F%2Fxyz.com%3AyVW2L2vLBGmlGY8y_tRq7HaoyM4&amp;cuid=3321886" rel="nofollow noopener" title="http://xyz.com">http://xyz.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2837713151">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreszs.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2837713151">19</a> by Andrés Zsögön
		posted on 8/14/2016 at 10:34 PM
		</div>
		<div class="comment_text"><p>The meta tag I was using on WP8 platform (Cordova) does not work anymore for the Windows platform (appx for WP8), all onclick events are ignored. This is the tag that worked: &lt;meta http-equiv="Content-Security-Policy" content="default-src 'self' 'unsafe-inline' 'unsafe-eval' * data:; style-src 'self' 'unsafe-inline'; media-src *; connect-src *"/&gt;<br> Any ideas what could be the problem? Thanks a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2837725449">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_eBcZENd6r7.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2837725449">20</a> by Shubair
		posted on 8/14/2016 at 10:45 PM
		</div>
		<div class="comment_text"><p>Hi there, the setting (connect-src) mentioned in the above nice tutorial worked fine with me in both emulator and the Android device when I read JSONP data remotely hosted on the cloud. With the same setting, I tried to run the function below to run a php file, it worked fine on the Ripple - Nexus  (Galaxy) but failed on the Android device.<br>Do I need more setting to make the php file run on the Android device?</p><p>function SetRec(sid, grp, typ) {<br>        var postData = $(this).serialize();<br>        var str = "?pid=dummy + "&amp;sid=" + sid + "&amp;grp=" + grp + "&amp;typ=" + typ;<br>        $.ajax({<br>            type: 'POST',<br>            data: postData,<br>            url: '<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mywebdomain.com%2Fphp%2Faddrecord.php%27%3AC9yUHgT04d-fQ5u9cS1WEP6y05E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mywebdomain.com/php/addrecord.php'">http://www.mywebdomain.com/...</a> + str,<br>            success: function (data) {<br>                console.log("done.. :-)");<br>            },<br>            error: function () {<br>		console.log("error ..!");<br>	    }<br>        });<br>    }</p></div>
	</div>
</div>
		
<div class="comment" id="c_2839223595">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_eBcZENd6r7.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2839223595">21</a> by Shubair
		posted on 8/15/2016 at 9:04 PM
		</div>
		<div class="comment_text"><p>Solved :-)<br>By using <a href="http://disq.us/url?url=http%3A%2F%2Fcordova.InAppBrowser.open%3AwSBLmHV268VsmRJeZ9kl5iGb9mw&amp;cuid=3321886" rel="nofollow noopener" title="cordova.InAppBrowser.open">cordova.InAppBrowser.open</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2840432534">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2840432534">22</a> (In reply to <a href="#c_2839223595">#21</a>) by Raymond Camden
		posted on 8/16/2016 at 3:33 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing your fix!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2862156808">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_NNMWguHraH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2862156808">23</a> by Durga Prasad
		posted on 8/27/2016 at 11:48 AM
		</div>
		<div class="comment_text"><p>I am getting this error with cordova 6.2.0.Can anyone please help</p><p>TypeError: undefined is not an object (evaluating 'a.event.props.concat')<br>(anonymous function) — <a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.4.5.min.js:1104:294<br>(anonymous function) — <a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.4.5.min.js:1121<br>(anonymous function) — <a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.4.5.min.js:6<br>global code — <a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.4.5.min.js:7</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2862252415">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2862252415">24</a> (In reply to <a href="#c_2862156808">#23</a>) by Raymond Camden
		posted on 8/27/2016 at 1:27 PM
		</div>
		<div class="comment_text"><p>This question is not on topic for this blog post. Please post this to StackOverflow and use the Cordova tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4909296116">
	<div>
		<img src="https://disqus.com/api/users/avatars/vreemt.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4909296116">25</a> by Sandra
		posted on 5/11/2020 at 9:47 AM
		</div>
		<div class="comment_text"><p>Hey, finding this years later - thanks for an awesome write up!</p><p>I spotted a formatting issue - you probably want some css like <code>code { white-space: pre; }</code> to make sure the split lines in the "separated by semi colons" code block display as intended.</p><p>Enjoy the summer (:</p></div>
	</div>
</div>
		
<div class="comment" id="c_4909492842">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4909492842">26</a> (In reply to <a href="#c_4909296116">#25</a>) by Raymond Camden
		posted on 5/11/2020 at 1:48 PM
		</div>
		<div class="comment_text"><p>I've changed code formatters a few times over the life time of the blog. I'll see about updating this post.</p></div>
	</div>
</div>
		