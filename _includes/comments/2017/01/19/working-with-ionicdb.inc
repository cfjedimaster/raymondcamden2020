
<div class="comment" id="c_3108661471">
	<div>
		<img src="https://disqus.com/api/users/avatars/fa1ken.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3108661471">1</a> by ⊥ᵒᵚ Cᵸᵎᶺᵋ⤷╨ᵒᵘ
		posted on 1/19/2017 at 9:49 PM
		</div>
		<div class="comment_text"><p>Nice. How does it handle disconnected or occasionally connected clients? What about update conflicts? </p></div>
	</div>
</div>
		
<div class="comment" id="c_3108671637">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_hXw2jTsXfq.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3108671637">2</a> (In reply to <a href="#c_3108661471">#1</a>) by Nick Hyatt
		posted on 1/19/2017 at 9:55 PM
		</div>
		<div class="comment_text"><p>Good question! Right now we don't support offline mode so you can only read and write documents when connected to the IonicDB. Offline support including handling the update conflicts that can arise from supporting offline mode is definitely on our radar though!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3109303214">
	<div>
		<img src="https://disqus.com/api/users/avatars/fa1ken.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3109303214">3</a> (In reply to <a href="#c_3108671637">#2</a>) by ⊥ᵒᵚ Cᵸᵎᶺᵋ⤷╨ᵒᵘ
		posted on 1/20/2017 at 8:40 AM
		</div>
		<div class="comment_text"><p>It'd be great to see that soon. At the moment it looks like a more complicated and less popular version of PouchDB to be honest. A framework for mobile use that requires a connection will be a non-starter for all our projects.<br>The hard part you could make easy would be things like background opportunistic sync and write-only/readonly collections (high scrores/shared data)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3123136310">
	<div>
		<img src="https://disqus.com/api/users/avatars/martinhollerweger.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3123136310">4</a> (In reply to <a href="#c_3108671637">#2</a>) by Holla
		posted on 1/27/2017 at 2:11 PM
		</div>
		<div class="comment_text"><p>Hi Nick, the biggest benefit to switch to IonicDB would be offline support for me. Offline support in the browser is a complex task. Was IonicDB built with consideration for offline support? Is there any more concrete timeline ? - The Firebase team has javascript offline support aso on the radar for over a year</p></div>
	</div>
</div>
		
<div class="comment" id="c_3191339446">
	<div>
		<img src="https://disqus.com/api/users/avatars/henriquedezani.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3191339446">5</a> by Henrique Dezani
		posted on 3/7/2017 at 8:07 PM
		</div>
		<div class="comment_text"><p>Greate article. I implements this exemple, but my connection close when I open other app and come back to this again. Some time, the second time that I open the same Page, the connection is already cloned. Cloud you help me? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3191375390">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3191375390">6</a> (In reply to <a href="#c_3191339446">#5</a>) by Raymond Camden
		posted on 3/7/2017 at 8:28 PM
		</div>
		<div class="comment_text"><p>Not without more detail. So you say when you come back to the app and the connection has been closed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3191390972">
	<div>
		<img src="https://disqus.com/api/users/avatars/henriquedezani.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3191390972">7</a> (In reply to <a href="#c_3191375390">#6</a>) by Henrique Dezani
		posted on 3/7/2017 at 8:37 PM
		</div>
		<div class="comment_text"><p>Exactly. The db try reconnect, but fails all times. Just to know, I already tried open connection before fetch() and just in login. The problem occurs in both cases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3191400867">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3191400867">8</a> (In reply to <a href="#c_3191390972">#7</a>) by Raymond Camden
		posted on 3/7/2017 at 8:43 PM
		</div>
		<div class="comment_text"><p>This smells like a bug w/ the DB service itself then. Think you can file a bug w/ screenshots of it failing? Sorry to essentially punt on this, but you may have better 'ammo' to start the process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3191427597">
	<div>
		<img src="https://disqus.com/api/users/avatars/henriquedezani.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3191427597">9</a> (In reply to <a href="#c_3191400867">#8</a>) by Henrique Dezani
		posted on 3/7/2017 at 8:58 PM
		</div>
		<div class="comment_text"><p><a href="https://uploads.disquscdn.com/images/48174b1bc51ef32ec0444215cf5af92dec9b3702cc5c3302919d995a75f7f5d4.jpg" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/48174b1bc51ef32ec0444215cf5af92dec9b3702cc5c3302919d995a75f7f5d4.jpg">https://uploads.disquscdn.c...</a> </p></div>
	</div>
</div>
		
<div class="comment" id="c_3191584564">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3191584564">10</a> (In reply to <a href="#c_3191427597">#9</a>) by Raymond Camden
		posted on 3/7/2017 at 10:36 PM
		</div>
		<div class="comment_text"><p>You got me there - again - I'd consider filing this with Ionic directly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3195283165">
	<div>
		<img src="https://disqus.com/api/users/avatars/henriquedezani.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3195283165">11</a> (In reply to <a href="#c_3191584564">#10</a>) by Henrique Dezani
		posted on 3/9/2017 at 9:47 PM
		</div>
		<div class="comment_text"><p>Hi Raymon, how are you? I fixed the issue updating the dependencies:</p><p>"dependencies": {<br>    "@angular/common": "2.4.8",<br>    "@angular/compiler": "2.4.8",<br>    "@angular/compiler-cli": "2.4.8",<br>    "@angular/core": "2.4.8",<br>    "@angular/forms": "2.4.8",<br>    "@angular/http": "2.4.8",<br>    "@angular/platform-browser": "2.4.8",<br>    "@angular/platform-browser-dynamic": "2.4.8",<br>    "@angular/platform-server": "2.4.8",<br>    "@ionic/cloud-angular": "0.11.0",<br>    "@ionic/storage": "1.1.9",<br>    "ionic-angular": "2.2.0",<br>    "ionic-native": "2.4.1",<br>    "ionicons": "3.0.0",<br>    "rxjs": "5.0.1",<br>    "sw-toolbox": "3.4.0",<br>    "zone.js": "0.7.2"<br>  }.</p><p>But now, I have a question. If I have the follow document in my collection:</p><p>{<br>  "id": "1234567890",<br>  "user": {<br>    "id" : "321321321",<br>    "status": true<br>  }<br>}</p><p>Are there same way, using, findAll, for example, that I can query the documents by user.status = true?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3195423453">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3195423453">12</a> (In reply to <a href="#c_3195283165">#11</a>) by Raymond Camden
		posted on 3/9/2017 at 11:01 PM
		</div>
		<div class="comment_text"><p>Yes, they do support filters. Please see the docs - I don't remember offhand the syntax.</p></div>
	</div>
</div>
		