
<div class="comment" id="c_1714083011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083011">1</a> by Raymond Camden
		posted on 5/25/2014 at 12:47 AM
		</div>
		<div class="comment_text"><p>FYI - I ended up moving *all* the code into the webkitfullscreen event and it works fine - and is simpler. I assume I don't have to share the code (I just added an else with the right plugin code).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083006">2</a> by Benjamin L.
		posted on 5/28/2014 at 9:11 PM
		</div>
		<div class="comment_text"><p>Thx for that very useful tip.  I would like to take this opportunity to ask you if you'd have any resource regarding switch off and on zooming in a PhoneGap app. I'd like to allow users to pinch to zoom on images while the rest of the content is not zoomable. I am about to develop that from scratch. Before that, I am wondering if there is an easier solution (I was unable to find one browsing here and there for the last days).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083010">3</a> by Raymond Camden
		posted on 5/28/2014 at 10:12 PM
		</div>
		<div class="comment_text"><p>Hmm, so it is easy enough to do globally via meta tags (<a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F11689353%2Fdisable-pinch-zoom-on-mobile-web%29%3AMJafKsVzviP9wiouQje58nZEntE&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/11689353/disable-pinch-zoom-on-mobile-web)">http://stackoverflow.com/qu...</a>, but I'm not sure how you would turn it off when an image is being displayed. In theory you could try modifying the meta tag via dom manipulation, but I'm not sure how that would work in practice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083007">4</a> by Steve Gauthier
		posted on 5/29/2014 at 11:18 PM
		</div>
		<div class="comment_text"><p>This plugin doesn't seem to work with the latest version of cordova. Once the plugin is added it seems to ignore the config.xml preference and allow full rotation under IOS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083008">5</a> by Raymond Camden
		posted on 5/29/2014 at 11:29 PM
		</div>
		<div class="comment_text"><p>Not sure what to say. According to the docs it should work on all platforms. The best I can suggest is filing a bug report with a repro case so the team can look at it. This is where you report issues:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB%3A1TYckZ68QzWOezm6uq7DF-N0D-Y&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB">https://issues.apache.org/j...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083012">6</a> by Benjamin L.
		posted on 5/30/2014 at 9:54 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, thank you for your answer. This is what I've tried in my early stages of research. It actually works. You can switch on and off the zoom using this technique. However, you can't zoom out a zoomed page/image (or at least I didn't find a way to do it) after having pinched it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083009">7</a> by Sean Clark
		posted on 6/24/2014 at 7:19 AM
		</div>
		<div class="comment_text"><p>on iOS this plugin allows the phone to orient at will. BUT, if you just set the orientation with this plugin onReady then it will stay that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1709608602">
	<div>
		<img src="https://disqus.com/api/users/avatars/michaelwager.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1709608602">8</a> by Michael Wager
		posted on 11/24/2014 at 12:02 PM
		</div>
		<div class="comment_text"><p>Somehow the "webkitfullscreenchange" event is not firing if I go into fullscreen using the native html5-video controls' fullscreen button on android. Any ideas why? It only fires on closing the fullscreen via back button.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1709642200">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1709642200">9</a> (In reply to <a href="#c_1709608602">#8</a>) by Raymond Camden
		posted on 11/24/2014 at 12:43 PM
		</div>
		<div class="comment_text"><p>Nothing comes to mind outside of possibly a bug? Maybe try searching the Chrome bug db?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1855916336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1855916336">10</a> by chuang
		posted on 2/14/2015 at 11:34 PM
		</div>
		<div class="comment_text"><p>i cannot get this to work? where should i put the code? am i missing something.. i installed the plugin.. but cannot get the video to go landscape unless i turn the phone...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1857220245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1857220245">11</a> (In reply to <a href="#c_1855916336">#10</a>) by chuang
		posted on 2/15/2015 at 10:51 PM
		</div>
		<div class="comment_text"><p>sorry i forgot to say Please</p></div>
	</div>
</div>
		
<div class="comment" id="c_1857994064">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1857994064">12</a> (In reply to <a href="#c_1855916336">#10</a>) by Raymond Camden
		posted on 2/16/2015 at 1:20 PM
		</div>
		<div class="comment_text"><p>When you say it doesn't work, *how* doesn't it work? Do you get an error in the console? If you aren't testing w/ Remote Debugging, please do so so you can see the console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1858912745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1858912745">13</a> (In reply to <a href="#c_1857994064">#12</a>) by chuang
		posted on 2/16/2015 at 10:46 PM
		</div>
		<div class="comment_text"><p>I will try the remote debugging. sorry this is my first app for phone gap.. there is a lot to set up...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1859172373">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1859172373">14</a> (In reply to <a href="#c_1858912745">#13</a>) by Raymond Camden
		posted on 2/17/2015 at 2:14 AM
		</div>
		<div class="comment_text"><p>Go to the About Me page and look at the list of articles. I have some on remote debugging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1859270799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1859270799">15</a> (In reply to <a href="#c_1859172373">#14</a>) by chuang
		posted on 2/17/2015 at 3:42 AM
		</div>
		<div class="comment_text"><p>Thank you....</p></div>
	</div>
</div>
		
<div class="comment" id="c_2281154396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2281154396">16</a> by Has
		posted on 9/30/2015 at 2:12 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>How could you use the aforementioned plugin in your article above found on PGB <a href="https://disq.us/url?url=https%3A%2F%2Fbuild.phonegap.com%2Fplugins%2F1282%3AfnTCKqUmyCm49POxVZZmy6Fd3h4&amp;cuid=3321886" rel="nofollow noopener" title="https://build.phonegap.com/plugins/1282">https://build.phonegap.com/...</a> so that an app locks the camera api in portrait mode using the screen orientations plugins documentation</p><p>screen.lockOrientation('landscape');</p><p>I have utilised your camera picture to canvas with watermark  tutorial, but would <br>really like the camera to only shoot in portrait.</p><p>Thx</p></div>
	</div>
</div>
		
<div class="comment" id="c_2281155481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2281155481">17</a> (In reply to <a href="#c_2281154396">#16</a>) by Has
		posted on 9/30/2015 at 2:13 AM
		</div>
		<div class="comment_text"><p>Sorry that should be</p><p>screen.lockOrientation('portrait');</p></div>
	</div>
</div>
		
<div class="comment" id="c_2292621813">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2292621813">18</a> (In reply to <a href="#c_2281154396">#16</a>) by Raymond Camden
		posted on 10/6/2015 at 10:40 AM
		</div>
		<div class="comment_text"><p>What did you try?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2904355413">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1IJYNXkKge.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2904355413">19</a> by Deepanshu Sharma
		posted on 9/19/2016 at 7:26 AM
		</div>
		<div class="comment_text"><p>cordova.plugins.screenorientation not supported in android, can u give me plugin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2904474627">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2904474627">20</a> (In reply to <a href="#c_2904355413">#19</a>) by Raymond Camden
		posted on 9/19/2016 at 10:15 AM
		</div>
		<div class="comment_text"><p>According to the docs (<a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Fcordova-plugin-screen-orientation%29%3AxHo9kCmyXybNyTbXosVSWPkUQdA&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/cordova-plugin-screen-orientation)">https://www.npmjs.com/packa...</a> it is supported.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2905984966">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1IJYNXkKge.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2905984966">21</a> by Deepanshu Sharma
		posted on 9/20/2016 at 3:37 AM
		</div>
		<div class="comment_text"><p>nope..sir.it is not suppported</p></div>
	</div>
</div>
		
<div class="comment" id="c_2906285005">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2906285005">22</a> (In reply to <a href="#c_2905984966">#21</a>) by Raymond Camden
		posted on 9/20/2016 at 10:27 AM
		</div>
		<div class="comment_text"><p>Where do you see that in the docs? Can you copy and paste?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2906311727">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1IJYNXkKge.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2906311727">23</a> (In reply to <a href="#c_2906285005">#22</a>) by Deepanshu Sharma
		posted on 9/20/2016 at 11:00 AM
		</div>
		<div class="comment_text"><p>yess</p></div>
	</div>
</div>
		
<div class="comment" id="c_2906417487">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2906417487">24</a> (In reply to <a href="#c_2906311727">#23</a>) by Raymond Camden
		posted on 9/20/2016 at 12:42 PM
		</div>
		<div class="comment_text"><p>Heh what I meant is - can you copy and paste the text here that says Android isn't supported. I do not see that. Also the URL of the docs you are using.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2908228925">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1IJYNXkKge.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2908228925">25</a> by Deepanshu Sharma
		posted on 9/21/2016 at 10:57 AM
		</div>
		<div class="comment_text"><p>video.AddListener ? how it work in video page(phonegap),, is there work for special plugin add in config file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2908502570">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2908502570">26</a> (In reply to <a href="#c_2908228925">#25</a>) by Raymond Camden
		posted on 9/21/2016 at 2:21 PM
		</div>
		<div class="comment_text"><p>I have no idea what you're asking. Can you rephrase?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2910204509">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1IJYNXkKge.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2910204509">27</a> (In reply to <a href="#c_2908502570">#26</a>) by Deepanshu Sharma
		posted on 9/22/2016 at 10:16 AM
		</div>
		<div class="comment_text"><p>video.addEventListener('playing', function() {<br>     var so = cordova.plugins.screenorientation;<br>     so.setOrientation(so.Orientation.LANDSCAPE);<br>}, false);</p><p> Tell me about <br>video.addEventListener event, How Its work in phonegap?</p><p>any third party Plugin  for this,, can u explain me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2910281002">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2910281002">28</a> (In reply to <a href="#c_2910204509">#27</a>) by Raymond Camden
		posted on 9/22/2016 at 11:43 AM
		</div>
		<div class="comment_text"><p>How it works? It's an event listener so you are stating what you want to do when an event happens. Do I misunderstand you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3237158739">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_39j2NCdwMh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3237158739">29</a> by Amit Nair
		posted on 4/3/2017 at 4:38 AM
		</div>
		<div class="comment_text"><p>I am also facing the same issue. But I am using iframe instead. I need to run the videos both in landscape and portarit on orientation change. How can I achieve the same. I have set the app to work only in portrait mode in config.xml file</p></div>
	</div>
</div>
		
<div class="comment" id="c_3237444119">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3237444119">30</a> (In reply to <a href="#c_3237158739">#29</a>) by Raymond Camden
		posted on 4/3/2017 at 11:46 AM
		</div>
		<div class="comment_text"><p>I believe if you set the orientation in the config.xml, it locks it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3237468928">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_39j2NCdwMh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3237468928">31</a> (In reply to <a href="#c_3237444119">#30</a>) by Amit Nair
		posted on 4/3/2017 at 12:11 PM
		</div>
		<div class="comment_text"><p>Is there any way I can override that setting only for iframe</p></div>
	</div>
</div>
		
<div class="comment" id="c_3237510948">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3237510948">32</a> (In reply to <a href="#c_3237468928">#31</a>) by Raymond Camden
		posted on 4/3/2017 at 12:44 PM
		</div>
		<div class="comment_text"><p>Not as far as I know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3237593706">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_39j2NCdwMh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3237593706">33</a> (In reply to <a href="#c_3237510948">#32</a>) by Amit Nair
		posted on 4/3/2017 at 1:50 PM
		</div>
		<div class="comment_text"><p>So is there any other way of setting app orientation to portrait other than config.xml </p></div>
	</div>
</div>
		
<div class="comment" id="c_3238287962">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3238287962">34</a> (In reply to <a href="#c_3237593706">#33</a>) by Raymond Camden
		posted on 4/3/2017 at 9:07 PM
		</div>
		<div class="comment_text"><p>There is a plugin I believe that lets you set orientation.</p></div>
	</div>
</div>
		