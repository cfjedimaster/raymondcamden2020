
<div class="comment" id="c_2176779631">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_R32vzZXYuB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2176779631">1</a> by Carlos Santana
		posted on 8/6/2015 at 1:24 AM
		</div>
		<div class="comment_text"><p>Hi Ray great article on an end to end sample. I will be referring back to this for a while.</p><p>Let me know what you find out about Ionic View App.</p><p>By the way this Bluemix thing free? :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2176781192">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2176781192">2</a> (In reply to <a href="#c_2176779631">#1</a>) by Raymond Camden
		posted on 8/6/2015 at 1:25 AM
		</div>
		<div class="comment_text"><p>If I switch to Base64 for the camera, I wonder if the FileTransfer will still work. Obviously Bse64 isn't nice for real apps, but if it worked, it would be ok for a Lab/Demo session which is what this was built for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2178078396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2178078396">3</a> by JeanCarl
		posted on 8/6/2015 at 6:26 PM
		</div>
		<div class="comment_text"><p>Very cool post! Ran this on iPhone 6, 8.4, and it seems the yellow Select Picture button is disabled. Are there any permissions that need to be enabled. Also happens with emulator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2178111368">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2178111368">4</a> (In reply to <a href="#c_2178078396">#3</a>) by Raymond Camden
		posted on 8/6/2015 at 6:45 PM
		</div>
		<div class="comment_text"><p>It should become enabled when deviceready fires. Try debugging remotely w/ Safari and let me know what you see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2178228869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2178228869">5</a> (In reply to <a href="#c_2178111368">#4</a>) by JeanCarl
		posted on 8/6/2015 at 7:50 PM
		</div>
		<div class="comment_text"><p>Seems like this was causing me problems:</p><p>if(window.cordova &amp;&amp; window.cordova.plugins.Keyboard) {<br>  cordova.plugins.Keyboard.hideKeyboardAccessoryBar(true);<br>    }</p><p>Add the keyboard plugin:<br>cordova plugin add com.ionic.keyboard</p><p>I kept stumbling because I didn't install the three plugins. Once they were added, everything worked great. So many neat things to try from this post. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2178236616">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2178236616">6</a> (In reply to <a href="#c_2178228869">#5</a>) by Raymond Camden
		posted on 8/6/2015 at 7:54 PM
		</div>
		<div class="comment_text"><p>Ok, so I was a bit worried about the setup of the new project. Did you follow the directions exactly in terms of making a new Ionic project and pointing it at www?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2178490593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2178490593">7</a> (In reply to <a href="#c_2178236616">#6</a>) by JeanCarl
		posted on 8/6/2015 at 10:29 PM
		</div>
		<div class="comment_text"><p>I might have glossed over the plugins part. ;-) I think I added the ios platform and then moved on, not seeing a command to install the plugins. Does ionic state restore do this? Clarification might help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2178679532">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2178679532">8</a> (In reply to <a href="#c_2178490593">#7</a>) by Raymond Camden
		posted on 8/7/2015 at 12:59 AM
		</div>
		<div class="comment_text"><p>Yes, I think that would have worked here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2230915515">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_nVM2RwhzaQ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2230915515">9</a> by Ben Wilson
		posted on 9/1/2015 at 11:12 PM
		</div>
		<div class="comment_text"><p>Many thanks for this guide. It's hard to know where to start without practical guides like this.</p><p>For those that want to get it working hosted by BlueMix rather than by localhost:</p><p>1. In directory 'server' modify manifest.yml and change IonicBluemixDemo to whatever you called your Blue Mix App (e.g. I called mine camdentest-bmw):</p><p>applications:<br>- services:<br>- camdentest-bmw-MAS<br>- camdentest-bmw-Push<br>- camdentest-bmw-MobileData<br>- camdentest-bmw-Mobile Quality Assurance<br>disk_quota: 1024M<br>host: camdentest-bmw<br>name: camdentest-bmw<br>command: node app.js<br>path: .<br>domain: <a href="http://disq.us/url?url=http%3A%2F%2Fmybluemix.net%3AXUOPOlI6Kr6To440D7NGiEcUCYA&amp;cuid=3321886" rel="nofollow noopener" title="mybluemix.net">mybluemix.net</a><br>instances: 1<br>memory: 128M</p><p>2. In directory 'server' create two files .gitignore and .cfignore with the string 'node_modules' in there. This will make sure all your node_modules don't get uploaded which takes forever and isn't needed.</p><p>3. From 'server' Execute the 4 commands in Ray's post above beginning with 'cd your_new_directory' and ending with cf push - this will upload and restart your instance on BlueMix</p><p>4. After that you should be able to go to <a href="http://disq.us/url?url=http%3A%2F%2Fwhateveryouappiscalled.bluemix.net%2Fdesktop%3APZe64DIK-T7GjRlzxO4y6SKzThk&amp;cuid=3321886" rel="nofollow noopener" title="http://whateveryouappiscalled.bluemix.net/desktop">http://whateveryouappiscall...</a> and see the web browser version working.</p><p>5. To get the Ionic sample to communicate with BlueMix rather than localhost just change http://localhost:3000/uploadpic to  <a href="http://disq.us/url?url=http%3A%2F%2Fwhateveryouappiscalled.bluemix.net%2Fuploadpic%3AlZi5mJiIdBCB3zD4l-SIUknOX5o&amp;cuid=3321886" rel="nofollow noopener" title="http://whateveryouappiscalled.bluemix.net/uploadpic">http://whateveryouappiscall...</a></p><p>6. This will work now for iOS but for Android I found I had to add logic to make sure a jpg file extension is added otherwise a 502 Bad Gateway is returned from BlueMix:</p><p>			//So now we upload it</p><p>			var options = new FileUploadOptions();</p><p>			options.fileKey="image";<br>options.fileName=fileUri.split('/').pop();<br>if(options.fileName.split('.').length == 1) {<br>    options.fileName += '.jpg';<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_2231055173">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2231055173">10</a> (In reply to <a href="#c_2230915515">#9</a>) by Raymond Camden
		posted on 9/2/2015 at 1:02 AM
		</div>
		<div class="comment_text"><p>These are some *damn* good tips, thank you. I'm still learning Bluemix, so stuff like the manifest.yml is new to me. Your second tip is especially useful as I've noticed in the past that updates seem a bit slow - that should help.</p><p>For tip 5, I'd probably suggest using Angular constants so it is a bit easier to tweak. In a real app you may have N routes to call.</p><p>Really, really, *really* thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2231085140">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_nVM2RwhzaQ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2231085140">11</a> (In reply to <a href="#c_2231055173">#10</a>) by Ben Wilson
		posted on 9/2/2015 at 1:27 AM
		</div>
		<div class="comment_text"><p>Thanks Ray! I'm very new to it too so was just pleased to get something working. Slowly it begins to make sense. I'd like to understand how to manage users and passwords with BlueMix's MAS. I've seen lots of howtos for Parse and Firebase on this but nothing for BlueMix. Perhaps a future Blog posting?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2231086048">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2231086048">12</a> (In reply to <a href="#c_2231085140">#11</a>) by Raymond Camden
		posted on 9/2/2015 at 1:27 AM
		</div>
		<div class="comment_text"><p>I assume you mean for users of the mobile app, not users like for services being called from Node?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2231092964">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_nVM2RwhzaQ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2231092964">13</a> (In reply to <a href="#c_2231086048">#12</a>) by Ben Wilson
		posted on 9/2/2015 at 1:33 AM
		</div>
		<div class="comment_text"><p>Yep, how to manage and protect mobile app users' data. I've stored stuff using BlueMix's Mobile Data but it's open to anyone with the right key and secret rather than specific to the user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2231130691">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2231130691">14</a> (In reply to <a href="#c_2231092964">#13</a>) by Raymond Camden
		posted on 9/2/2015 at 2:05 AM
		</div>
		<div class="comment_text"><p>Dude, a *lot* of the CouchDB/PouchDB//Cloudant demos I see are like that - they assume one set of data - which is weird as that is totally not real world. If you look at my blog series on SauceDB, I kind of address this. I have third party oauth on the client and Node.js using it to verify a valid login and then I store that ID with data. See if that series helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2841393509">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_wtK7rfVPeg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2841393509">15</a> by Neeraj Kaushik
		posted on 8/17/2016 at 1:37 AM
		</div>
		<div class="comment_text"><p>Really good tutorial cleared lot of concepts thx. The Watson API specifications have changed.</p><p>var VisualRecognitionV3 = require('watson-developer-cloud/visual-recognition/v3');</p><p>var visual_recognition = new VisualRecognitionV3({<br>  api_key:"&lt;&gt;",<br>  version_date: '&lt;&gt;'<br>});<br>....................<br>		visual_recognition.classify(params, function(err, res) {<br>		  if (err)<br>		    console.log(err);<br>		  else {<br>              console.log(JSON.stringify(res, null, 2));<br>			  var results = [];<br>			  for(var i=0;i&lt;res.images[0].classifiers[0].classes.length;i++) {="" results.push(res.images[0].classifiers[0].classes[i].class);="" }=""&gt;</p></div>
	</div>
</div>
		