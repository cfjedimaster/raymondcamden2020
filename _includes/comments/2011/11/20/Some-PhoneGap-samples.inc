
<div class="comment" id="c_1713736868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736868">1</a> by 420 Colorado
		posted on 11/21/2011 at 3:23 AM
		</div>
		<div class="comment_text"><p>Yes, post the examples on GitHub</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736875">2</a> by Piyush
		posted on 11/21/2011 at 6:53 AM
		</div>
		<div class="comment_text"><p>Will u upload the presentation slides</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736872">3</a> by Raymond Camden
		posted on 11/21/2011 at 7:36 AM
		</div>
		<div class="comment_text"><p>@Piyush - the slides were pretty simple, mainly me explaining what you would get at <a href="http://disq.us/url?url=http%3A%2F%2Fphonegap.com%3Ax_63I-G4Cdxs06lKZChHQPwb0Pk&amp;cuid=3321886" rel="nofollow noopener" title="phonegap.com">phonegap.com</a>. I spent most of my time showing the code examples.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736878">4</a> by Mikel
		posted on 11/21/2011 at 6:14 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.  It is always great to have some good examples!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736876">5</a> by Mikel
		posted on 11/22/2011 at 7:15 PM
		</div>
		<div class="comment_text"><p>I've done some "Googling" but haven't found a really good solution yet.  Have any of you had any luck configuring a splash screen and changing the icon for a app from the default icon?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736870">6</a> by Raymond Camden
		posted on 11/22/2011 at 7:34 PM
		</div>
		<div class="comment_text"><p>For the splash screen, it is kinda documented, but not at PhoneGap, rather on Android's docs, which makes sense.</p><p>Do not take this for gospel truth, but it worked for me: Make your image, then drop it in res/drawable-*. Ie, a copy in each. I believe you are supposed to use different DPIs, but I didn't bother. Then, in your main activity Java file, do something like so:</p><p>    public void onCreate(Bundle savedInstanceState) {<br>        super.onCreate(savedInstanceState);<br>        super.setIntegerProperty("splashscreen", R.drawable.splash);<br>        super.loadUrl("file:///android_asset/www/index.html",700);<br>    }</p><p>The 700 is the # of milliseconds to let the splash screen wait around.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736877">7</a> by Mikel
		posted on 11/23/2011 at 12:06 AM
		</div>
		<div class="comment_text"><p>Your example worked like a champ!  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736881">8</a> by Mikel
		posted on 11/24/2011 at 1:34 AM
		</div>
		<div class="comment_text"><p>My first app is built and running on my phone!  Wow!!  Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736884">9</a> by Raymond Camden
		posted on 11/24/2011 at 1:44 AM
		</div>
		<div class="comment_text"><p>Thank the PhoneGap folks. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736887">10</a> by Aleksey
		posted on 12/27/2011 at 8:35 PM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>Can you recommend any good solution (some model) for mobile site security which build with PhoneGap? I've done an lot of secured sites on CF and now just interesting how to rebuild some of them to mobile versions. I know I can use XHR requests to server's CFC and get results from there. But what after that? Store results into cookie scope is not looking so secure. <br>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736886">11</a> by Raymond Camden
		posted on 12/27/2011 at 8:43 PM
		</div>
		<div class="comment_text"><p>If you make a call to a remote CFC and it uses the session scope to mark you as online, any future XHR requests from your PG app will _also_ have those session variables.</p><p>Thst's it. :) It's really that simple.</p></div>
	</div>
</div>
		