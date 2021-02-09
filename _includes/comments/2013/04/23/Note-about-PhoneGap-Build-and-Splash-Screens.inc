
<div class="comment" id="c_1713746075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746075">1</a> by Mike
		posted on 4/23/2013 at 10:59 PM
		</div>
		<div class="comment_text"><p>I've been using a similar method and it works quite well.  I start a timer when your js starts loading and subtract that from the current time removing the splash screen after 5 seconds minus that interval.  That normalized the load time across iOS and different classes of Android devices.</p><p>Should also note that with PhoneGap 2.5 on Build the splash screen starts out covering the entire screen, then the image shifts down to show signal/batter bar at the top.  Reverting to PhoneGap 2.3 fixes the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746087">2</a> by Raymond Camden
		posted on 4/23/2013 at 11:01 PM
		</div>
		<div class="comment_text"><p>There is a config setting, &lt;preference name="fullscreen" value="true" /&gt;, that should fix this. Have you tried it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746084">3</a> by Mike
		posted on 4/23/2013 at 11:08 PM
		</div>
		<div class="comment_text"><p>Yes, but that makes the entire app full screen, which is not desired by our clients.  They only want the splash to be full screen, which &lt;= 2.3 does.</p><p>Looks like this is fixable if you're not using Build -</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F15346603%2Fphonegap-2-5-0-splashscreen-shifts-down-during-display%3AkuBUBDvp90S1-MvRhTBSVFzXWVc&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/15346603/phonegap-2-5-0-splashscreen-shifts-down-during-display">http://stackoverflow.com/qu...</a></p><p>Community Topic -</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcommunity.phonegap.com%2Fnitobi%2Ftopics%2F2_5_0_ios_splash_screen_issue%3AURFF0c8rpqJzVAELbEpOJ0PFC7w&amp;cuid=3321886" rel="nofollow noopener" title="http://community.phonegap.com/nitobi/topics/2_5_0_ios_splash_screen_issue">http://community.phonegap.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746076">4</a> by Raymond Camden
		posted on 4/24/2013 at 1:06 AM
		</div>
		<div class="comment_text"><p>Ah, cool, thanks for sharing this Mike!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746077">5</a> by Adam Tuttle
		posted on 4/24/2013 at 4:22 PM
		</div>
		<div class="comment_text"><p>"I then wrote a bit of JavaScript that made use of the PhoneGap Screen Shot API:" -- I think you meant Splash Screen API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746086">6</a> by radu wifi
		posted on 4/24/2013 at 4:24 PM
		</div>
		<div class="comment_text"><p>Great post, I had this problem but imagined I did something something wrong. <br>One the other hand at some early build I had splash was displaying a spinner in the middle that was nice feature...is there any XML config setting to trigger spinner how while splash is on?</p><p>Thank you,<br>Radu</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746085">7</a> by radu wifi
		posted on 4/24/2013 at 4:27 PM
		</div>
		<div class="comment_text"><p>one mention, I have:<br> &lt;preference name="show-splash-screen-spinner" value="true" /&gt;</p><p>set but still missing spinner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746079">8</a> by Raymond Camden
		posted on 4/24/2013 at 11:15 PM
		</div>
		<div class="comment_text"><p>@Adam: Fixed, thanks.</p><p>@Radu: Um, if you don't see it in the docs, then I'd say no.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746078">9</a> by Mkhuda
		posted on 4/26/2013 at 10:54 AM
		</div>
		<div class="comment_text"><p>Hi, Mr. Raymond !<br>I created splash screen with some code in Activity like this :<br>		super.setIntegerProperty("splashscreen", R.drawable.splash);<br>		super.loadUrl("file:///android_asset/www/index.html", 3000);</p><p>and place some images in res/drawable folder.<br>its work perfectly ! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746081">10</a> by Raymond Camden
		posted on 4/26/2013 at 2:29 PM
		</div>
		<div class="comment_text"><p>Mikhuda, right, you can do it via native code too. But this article was specifically about how to do it via PhoneGap Build.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746080">11</a> by Nell
		posted on 5/23/2013 at 8:10 AM
		</div>
		<div class="comment_text"><p>Can you talk about including admob in phonegap build using Dreamweaver.  No one seems to know how to do this.  If not Dreamweaver then can you do a tutorial with phonegap and admob.  Monetization is very important for developers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746083">12</a> by Raymond Camden
		posted on 5/23/2013 at 11:32 PM
		</div>
		<div class="comment_text"><p>I've yet to work with Admob. I tried Google Adsense once for a PG ad (not sure if I was supposed to, but I did ;).</p><p>I'll put this in my "To Blog" email folder, but no promises.</p><p>I don't use DW. My editor of choice is Brackets.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746082">13</a> by Nell
		posted on 5/23/2013 at 11:37 PM
		</div>
		<div class="comment_text"><p>Yes it's against their policies, you have to use admob or they eventually will ban your adsense account.  I wish I could use adsense though, alot easier and better.</p><p>On the other hand, what's the differences between Brackets and Dreamweaver?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746089">14</a> by Raymond Camden
		posted on 5/23/2013 at 11:41 PM
		</div>
		<div class="comment_text"><p>"On the other hand, what's the differences between Brackets and Dreamweaver?"<br>Night and Day. ;)</p><p>Brackets is a light weight editor focused on HTML/JS/CSS development *only*. Check it out: <a href="http://disq.us/url?url=http%3A%2F%2Fbrackets.io%3AFjjHQL2_EeCoeYFNTtbC9k3rFqQ&amp;cuid=3321886" rel="nofollow noopener" title="http://brackets.io">http://brackets.io</a></p><p>Be warned though, it is still in development so it is missing a few features.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746088">15</a> by Nell
		posted on 5/23/2013 at 11:44 PM
		</div>
		<div class="comment_text"><p>Any advantages over Dreamweaver for strictly phonegap mobile apps?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746092">16</a> by Raymond Camden
		posted on 5/23/2013 at 11:46 PM
		</div>
		<div class="comment_text"><p>Hmm, maybe not. I just find Brackets to be more to my liking. DW feels a bit "heavy." Editors are ver much a personal choice though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746091">17</a> by Nell
		posted on 5/23/2013 at 11:53 PM
		</div>
		<div class="comment_text"><p>ok thanks for the prompt response!</p><p>While I have you on the phone.......  I'm currently using json to load wordpress blogs.  When I have a blog that have a lot of posts it takes a long time for the application to load while it's retrieving the posts.</p><p>Is there a way I can  store the posts locally once it's downloaded, or at least the post titles to a local database.  Therefore improving the performance and allowing them to access the posts while offline?</p><p>I did this with sqllite with objective c but it was with xml and objective c.  Wondering what would be the best way to do this with phonegap etc..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746110">18</a> by Raymond Camden
		posted on 5/23/2013 at 11:56 PM
		</div>
		<div class="comment_text"><p>PhoneGap supports 3 types of local storage:</p><p>1) LocalStorage <br>2) WebSQL (which is the same as SQLite pretty much)<br>3) FIle System</p><p>Check out the WebSQL stuff. It would be perfect for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746102">19</a> by Nell
		posted on 5/23/2013 at 11:57 PM
		</div>
		<div class="comment_text"><p>ok thanks!  Do you have any tutorials or examples?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746106">20</a> by Raymond Camden
		posted on 5/23/2013 at 11:59 PM
		</div>
		<div class="comment_text"><p>Of course. ;) Search for phonegap here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746109">21</a> by Nell
		posted on 5/24/2013 at 12:01 AM
		</div>
		<div class="comment_text"><p>I meant with json, websql and phonegap maybe even with wordpress would be awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746101">22</a> by Raymond Camden
		posted on 5/24/2013 at 12:02 AM
		</div>
		<div class="comment_text"><p>Right, I do. As I said, search for phonegap, and the titles should lead you to the right place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746103">23</a> by Nell
		posted on 5/24/2013 at 12:06 AM
		</div>
		<div class="comment_text"><p>ok thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746105">24</a> by Adam Tuttle
		posted on 5/24/2013 at 12:11 AM
		</div>
		<div class="comment_text"><p>WebSQL is broken in Phonegap 2.7 on Android. They recommend using localStorage instead.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.infil00p.org%2Fwhats-new-for-cordova-2-7-0%2F%3AJG8g-4P6HxM2IZ33pWeKJYN4x3c&amp;cuid=3321886" rel="nofollow noopener" title="http://www.infil00p.org/whats-new-for-cordova-2-7-0/">http://www.infil00p.org/wha...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746108">25</a> by Raymond Camden
		posted on 5/24/2013 at 12:12 AM
		</div>
		<div class="comment_text"><p>Ugh, really? And this comment makes no sense:</p><p>"localStorage is once again persistant, this breaks WebSQL on Android 4.x"</p><p>Why would a fix to localStorage (and who knew it was broken) break WebSQL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746107">26</a> by Raymond Camden
		posted on 5/24/2013 at 12:13 AM
		</div>
		<div class="comment_text"><p>Just read the details. (Which doesn't explain why LocalStorage is involved.) I know that WebSQL is deprecated, but w/o IndexedDB, this is a *huge* issue. LocalStorage is *not* appropriate for storing large amounts of ad hoq data.</p><p>Shit. Shit. Shit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746104">27</a> by nwilliams
		posted on 5/28/2013 at 10:16 AM
		</div>
		<div class="comment_text"><p>Excellent post, however I am having problems getting my splash screen to display, I've gone as far as downloading the phone gap starter app from the internet and changing the config.xml to use my images but when i start the app on my device (nexus 7) i am not seeing the splash screen. Any suggestion as to why the splash screen would not be showing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746113">28</a> by Raymond Camden
		posted on 5/28/2013 at 6:24 PM
		</div>
		<div class="comment_text"><p>Hmm, nothing comes to mind. I'd maybe consider posting the question to the PGB support (and please let us know if you figure it out).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746114">29</a> by Klaus Barkhausen
		posted on 2/26/2014 at 5:04 AM
		</div>
		<div class="comment_text"><p>Creating all of the splash pages and icons in different sizes became too time consuming for us. Every time we wanted to change our splash or icon images we had to re-create them in all of the different device sizes. We created a simple tool that allowed us to automate the process and even integrate it into our build process.</p><p>Check it out at: <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.5starstechnology.com%2Fproducts%2Fcordova-splash-and-icon-maker%3A4FNsp7kpHpAjh3S_fMd0lKMfnvM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.5starstechnology.com/products/cordova-splash-and-icon-maker">http://www.5starstechnology...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746111">30</a> by Mike Balmes
		posted on 5/23/2014 at 2:31 PM
		</div>
		<div class="comment_text"><p>Hi guys, i need some help. my splash screen is not working.i don't know what is the problem.may be you can help me</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746115">31</a> by Roozbeh
		posted on 6/20/2014 at 5:08 PM
		</div>
		<div class="comment_text"><p>Hi, thx for your great tut. What if we targeting both tablets and mobiles? How could we define a splash screen that supports both horizontal/vertical and both for iphone and ipad screen size?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746118">32</a> by Raymond Camden
		posted on 6/20/2014 at 5:54 PM
		</div>
		<div class="comment_text"><p>You can use multiple gap:splash tags. Check the docs for more info.</p></div>
	</div>
</div>
		