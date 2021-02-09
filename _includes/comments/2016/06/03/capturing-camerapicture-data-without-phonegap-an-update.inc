
<div class="comment" id="c_2717948560">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_uC8iW86l6S.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2717948560">1</a> by Gary F
		posted on 6/8/2016 at 1:39 AM
		</div>
		<div class="comment_text"><p>Interesting experimentation. Saves me from working it out. Thanks Ray. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2717967969">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2717967969">2</a> (In reply to <a href="#c_2717948560">#1</a>) by Raymond Camden
		posted on 6/8/2016 at 1:55 AM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2870738614">
	<div>
		<img src="https://disqus.com/api/users/avatars/robcaldecott.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2870738614">3</a> by Rob Caldecott
		posted on 9/1/2016 at 12:56 PM
		</div>
		<div class="comment_text"><p>Very useful. One question: when I record a video on iOS using HTML &lt;inout&gt; where are they stored? Once recorded there is no way to get back to the video if you wanted to, for example, let the user try and select it. Unless you do something with the file when the user taps "Use Video" then it's gone. Is there any way to use the File object and copy the video to the user's photo library?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2870875355">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2870875355">4</a> (In reply to <a href="#c_2870738614">#3</a>) by Raymond Camden
		posted on 9/1/2016 at 2:18 PM
		</div>
		<div class="comment_text"><p>You absolutely cannot write to the user's library. Web apps can't do that. However, I'm surprised you are seeing the video *not* being stored in the gallery. Are you sure?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2870878142">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2870878142">5</a> (In reply to <a href="#c_2870875355">#4</a>) by Raymond Camden
		posted on 9/1/2016 at 2:19 PM
		</div>
		<div class="comment_text"><p>Interesting. You are right, it is *not* saved. Maybe the idea is that iOS thinks this is a temp video.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2870885773">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2870885773">6</a> (In reply to <a href="#c_2870878142">#5</a>) by Raymond Camden
		posted on 9/1/2016 at 2:24 PM
		</div>
		<div class="comment_text"><p>So if you inspect the value, you see:</p><p>c:\fakepath\capturedvideo.MOV</p><p>The best I can suggest is text on the web page warning the user that their video won't be saved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2870890186">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2870890186">7</a> (In reply to <a href="#c_2870885773">#6</a>) by Raymond Camden
		posted on 9/1/2016 at 2:26 PM
		</div>
		<div class="comment_text"><p>As just an FYI, on Mobile Android, the video is saved and available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3059891390">
	<div>
		<img src="https://disqus.com/api/users/avatars/prospecttoreza.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3059891390">8</a> by prospecttoreza
		posted on 12/19/2016 at 10:11 PM
		</div>
		<div class="comment_text"><p>Hi Raymond. Thank you for the informative article.<br>I need to send the image back to my iis server. Is there a simple way to do it?<br>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3060240732">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3060240732">9</a> (In reply to <a href="#c_3059891390">#8</a>) by Raymond Camden
		posted on 12/20/2016 at 2:42 AM
		</div>
		<div class="comment_text"><p>It is a regular form field/type=file, so you can POST it to your server. If you are ok using XHR2, you can do a file upload via Ajax as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3080990461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3080990461">10</a> by Romky
		posted on 1/3/2017 at 4:32 PM
		</div>
		<div class="comment_text"><p>Happy new year, Raymond!<br>I'm thinking about this as a solution for mobile / iOS devices in combo with the getUserMedia spec for desktop devices in order to record a video.<br>I hope, this thought makes sense...</p><p>Imho, your browser test is missing the desktop version of Safari. Or is that outcome predictable?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3080992939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3080992939">11</a> (In reply to <a href="#c_3080990461">#10</a>) by Romky
		posted on 1/3/2017 at 4:34 PM
		</div>
		<div class="comment_text"><p>Omg... I should have read the article until the very end... I'm sorry for that question at the end of my previous post...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3081011838">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3081011838">12</a> (In reply to <a href="#c_3080992939">#11</a>) by Raymond Camden
		posted on 1/3/2017 at 4:44 PM
		</div>
		<div class="comment_text"><p>No worries. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3119457002">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3119457002">13</a> by Antonio Gallo
		posted on 1/25/2017 at 5:32 PM
		</div>
		<div class="comment_text"><p>This article is wonderfull! As soon as i've free time then i wish to create an ionic2 component that will transparently degrade to the above solution if the camera plugin is not present. This is in order to use a single source for both a Mobile App and a PWA (Progressive Web Application).</p></div>
	</div>
</div>
		
<div class="comment" id="c_3119500973">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3119500973">14</a> (In reply to <a href="#c_3119457002">#13</a>) by Raymond Camden
		posted on 1/25/2017 at 5:42 PM
		</div>
		<div class="comment_text"><p>Cool. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3184139086">
	<div>
		<img src="https://disqus.com/api/users/avatars/robcaldecott.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3184139086">15</a> (In reply to <a href="#c_2870878142">#5</a>) by Rob Caldecott
		posted on 3/3/2017 at 9:01 AM
		</div>
		<div class="comment_text"><p>What's worse is that one of our users is now out of space on their device (they have recorded lots of videos using the &lt;input&gt; mechanism) and there seems to be no way of clearing the data. We have hunted through the various iOS manage storage settings and even clearing all web site data does not fix it. It's as if the device is not removing these temp videos and as they don't show up anywhere we're looking at a factory reset to fix it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3184744171">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3184744171">16</a> (In reply to <a href="#c_3184139086">#15</a>) by Raymond Camden
		posted on 3/3/2017 at 5:15 PM
		</div>
		<div class="comment_text"><p>Ouch - let me know if you can reproduce this consistently - a bug should be filed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3234937130">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3234937130">17</a> (In reply to <a href="#c_3184139086">#15</a>) by Raymond Camden
		posted on 4/1/2017 at 3:30 PM
		</div>
		<div class="comment_text"><p>I did some testing with the latest iOS. I could confirm available storage went down after recording some long videos. However, on device restart the storage was returned. It's possible what you saw was a bug that has been fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3834834642">
	<div>
		<img src="https://disqus.com/api/users/avatars/RobFergusonOrg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3834834642">18</a> by RobFergusonOrg
		posted on 4/1/2018 at 11:21 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>Great post :)</p><p>Have you tried your script on a device running iOS 11?</p><p>See: <a href="https://disq.us/url?url=https%3A%2F%2Fforum.ionicframework.com%2Ft%2Fios-11-its-not-me-its-you%2F126556%3A7ZMPLR54tXFWhT3ZbCuiLK1OUZE&amp;cuid=3321886" rel="nofollow noopener" title="https://forum.ionicframework.com/t/ios-11-its-not-me-its-you/126556">https://forum.ionicframewor...</a></p><p>Cheers<br>Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_3834863296">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3834863296">19</a> (In reply to <a href="#c_3834834642">#18</a>) by Raymond Camden
		posted on 4/1/2018 at 11:54 PM
		</div>
		<div class="comment_text"><p>What did you find? I read your post but it seems incomplete - like I’m missing something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3834881334">
	<div>
		<img src="https://disqus.com/api/users/avatars/RobFergusonOrg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3834881334">20</a> (In reply to <a href="#c_3834863296">#19</a>) by RobFergusonOrg
		posted on 4/2/2018 at 12:14 AM
		</div>
		<div class="comment_text"><p>Ok, so I'm building a PWA using the Ionic Framework (v3) and I just started working on the Page that allows the user to 'Take a Photo' and/or use an image from their 'Photo Library'.</p><p>It works fine on my Android device but not on my iPhone running iOS 11.2.6. The camera will launch but you get a black screen.</p><p>See: <a href="https://disq.us/url?url=https%3A%2F%2Fstackoverflow.com%2Fquestions%2F46228218%2Fhow-to-access-camera-on-ios11-home-screen-web-app%2F46350136%3As4L4mFmH1iqUoInkrlXM4av1_tM&amp;cuid=3321886" rel="nofollow noopener" title="https://stackoverflow.com/questions/46228218/how-to-access-camera-on-ios11-home-screen-web-app/46350136">https://stackoverflow.com/q...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3835438724">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3835438724">21</a> (In reply to <a href="#c_3834881334">#20</a>) by Raymond Camden
		posted on 4/2/2018 at 1:26 PM
		</div>
		<div class="comment_text"><p>I see you got a fix - have you tried in 11.3?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3836272168">
	<div>
		<img src="https://disqus.com/api/users/avatars/RobFergusonOrg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3836272168">22</a> (In reply to <a href="#c_3835438724">#21</a>) by RobFergusonOrg
		posted on 4/2/2018 at 11:16 PM
		</div>
		<div class="comment_text"><p>No, its still an issue in 11.2.6 :(</p><p>However, I just installed 11.3 and the camera launches and it works :)</p><p>I haven't tried the navigator.mediaDevices.getUserMedia method (which returned undefined in 11.2.6):</p><p></p><pre><code><br>  public ngAfterViewInit() {<br><br>    const constraints = {<br>      audio: false,<br>      video: {<br>        width: { min: 1024, ideal: 1280, max: 1920 },<br>        height: { min: 776, ideal: 720, max: 1080 },<br>        facingMode: 'environment'<br>      }<br>    };<br><br>    if (navigator.mediaDevices &amp;&amp; navigator.mediaDevices.getUserMedia) {<br><br>      navigator.mediaDevices.getUserMedia(constraints).then(stream =&gt; {<br>        this.video.nativeElement.src = window.URL.createObjectURL(stream);<br>        this.stream = stream;<br>        this.video.nativeElement.play();<br>      }).catch(function(err) {<br>        this.logger.error(err.name + ': ' + err.message);<br>      });<br><br>    } else {<br>      this.logger.error('Your browser does not support the mediaDevices API');<br>    }<br>  }<br></code></pre></div>
	</div>
</div>
		
<div class="comment" id="c_4498810447">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_5NXkIwty70.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4498810447">23</a> by Yee Wei Kheoh
		posted on 6/12/2019 at 2:18 AM
		</div>
		<div class="comment_text"><p>When I do take a picture with my phone camera, is it supposed to trigger the 'onChange' handler in &lt;input type="file"/&gt; ? Cuz I'm trying to display preview images on screen with the 'createObjectURL' right after a picture is taken..</p></div>
	</div>
</div>
		
<div class="comment" id="c_4499634206">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4499634206">24</a> (In reply to <a href="#c_4498810447">#23</a>) by Raymond Camden
		posted on 6/12/2019 at 4:59 PM
		</div>
		<div class="comment_text"><p>It should work - can you share your code online so I can see?</p></div>
	</div>
</div>
		