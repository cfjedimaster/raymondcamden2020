
<div class="comment" id="c_4712841187">
	<div>
		<img src="https://disqus.com/api/users/avatars/armishsonkar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4712841187">1</a> by Armish Sonkar
		posted on 12/5/2019 at 9:31 AM
		</div>
		<div class="comment_text"><p>Thanks a lot for introducing "HERE", hope it would give us street names in Indian cities :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4713057514">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4713057514">2</a> (In reply to <a href="#c_4712841187">#1</a>) by Raymond Camden
		posted on 12/5/2019 at 2:31 PM
		</div>
		<div class="comment_text"><p>I believe our data is good in India but I haven't tested. Please give it a shot and let me know!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4714109093">
	<div>
		<img src="https://disqus.com/api/users/avatars/armishsonkar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4714109093">3</a> by Armish Sonkar
		posted on 12/6/2019 at 10:30 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, I am observing this error while calling the api from a Vue Cli dev server (https call), the url seems to be taking app_id and app_code equal to null but I believe we only need apikey, am i right ?</p><p>Sorry, but the following error occurred: [timeout] <a href="http://disq.us/url?url=http%3A%2F%2Freverse.geocoder.api.here.com%2F6.2%2Freversegeocode.json%3Fxnlp%3DCL_JSMv3.0.17.0%26app_id%3Dnull%26app_code%3Dnull%26prox%3D12.958784399999999%252C77.64304969999999%26mode%3DretrieveAddresses%26maxresults%3D1%3A45MymbGcM99JnYDT0NRq2haV_Co&amp;cuid=3321886" rel="nofollow noopener" title="http://reverse.geocoder.api.here.com/6.2/reversegeocode.json?xnlp=CL_JSMv3.0.17.0&amp;app_id=null&amp;app_code=null&amp;prox=12.958784399999999%2C77.64304969999999&amp;mode=retrieveAddresses&amp;maxresults=1">http://reverse.geocoder.api...</a> request failed</p></div>
	</div>
</div>
		
<div class="comment" id="c_4714135836">
	<div>
		<img src="https://disqus.com/api/users/avatars/armishsonkar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4714135836">4</a> (In reply to <a href="#c_4714109093">#3</a>) by Armish Sonkar
		posted on 12/6/2019 at 11:19 AM
		</div>
		<div class="comment_text"><p>It worked after generating APP_ID and APP_CODE</p></div>
	</div>
</div>
		
<div class="comment" id="c_4734838154">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_mFpJPWq4gM.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4734838154">5</a> by Leandro Landim
		posted on 12/25/2019 at 12:21 AM
		</div>
		<div class="comment_text"><p>Hey, I'm using the first option but in my main.js I have the following code</p><p><code><br><br><br>new Vue({<br><br><br>  router,<br><br><br>  store,<br><br><br>  render: h =&gt; h(App),<br><br><br>}).$mount('#app');<br><br><br></code></p><p>My question is how a configure the geolocation with since in the main.js file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4735853293">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4735853293">6</a> (In reply to <a href="#c_4734838154">#5</a>) by Raymond Camden
		posted on 12/26/2019 at 2:23 PM
		</div>
		<div class="comment_text"><p>It sounds like you are using the Vue CLI to build an application, and in that case you would use Geolocation in one of your components, not the main.js file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4817383480">
	<div>
		<img src="https://disqus.com/api/users/avatars/roarkmcc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4817383480">7</a> by Roark McColgan
		posted on 3/2/2020 at 8:00 AM
		</div>
		<div class="comment_text"><p>Hey Raymond, thanks for the great post.<br>Looking at HERE api, is there a way to calculate the distance between 2 GPS coordinates "as the crow flies" rather than a route by driving or walking?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4817675421">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4817675421">8</a> (In reply to <a href="#c_4817383480">#7</a>) by Raymond Camden
		posted on 3/2/2020 at 3:09 PM
		</div>
		<div class="comment_text"><p>Nope, but that's "simple" math, and by simple math, I mean not simple at all, but it's been done before. If you google for it, you can find JS implementations. Here's one example: <a href="https://disq.us/url?url=https%3A%2F%2Fwww.geodatasource.com%2Fdevelopers%2Fjavascript%3Asu8Zb-9TBUSm2cy2YxDb8h9GNeE&amp;cuid=3321886" rel="nofollow noopener" title="https://www.geodatasource.com/developers/javascript">https://www.geodatasource.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_4818930298">
	<div>
		<img src="https://disqus.com/api/users/avatars/roarkmcc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4818930298">9</a> (In reply to <a href="#c_4817675421">#8</a>) by Roark McColgan
		posted on 3/3/2020 at 2:11 PM
		</div>
		<div class="comment_text"><p>Now that is awesome! thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_5240345789">
	<div>
		<img src="https://disqus.com/api/users/avatars/rowild.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5240345789">10</a> by rowild
		posted on 1/24/2021 at 9:28 PM
		</div>
		<div class="comment_text"><p>Nice tutorial! And also HERE seems to be a fine service! - But since this is a Vue tutorial, you really should explain how you add those HERE scripts and not just leave the user with a "find it on your own in the docu" IMO. Currently, if you don't write the script on CodePen, you get a "H is undefined" error...</p></div>
	</div>
</div>
		