
<div class="comment" id="c_1713745121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745121">1</a> by Hຜtor Ramos
		posted on 3/7/2013 at 9:20 PM
		</div>
		<div class="comment_text"><p>The previous version of the push composer defaulted to the Broadcast channel, "". The new Push Console defaults to "Everyone", which would be all Installation objects, regardless of which channels they've been subscribed to.</p><p>When you subscribe to push notifications in Android, you specify an Activity which should be launched based on the channel being targeted. From your example:</p><p>PushService.subscribe(this, "", testpush2.class);<br>PushService.subscribe(this, "foo", testpush2.class);</p><p>These lines tell Parse to launch testpush2.class when a push notification is sent to either the Broadcast channel, or to the "foo" channel.</p><p>Since "Everyone" is not using a channel, there is no Activity associated with it, and you'd see a message indicating so in Logcat.</p><p>You can define a default activity to be launched by default whenever if the incoming push notification is not sent to a specific channel, or the channel has no associated activities:</p><p>PushService.setDefaultPushCallback(this, testpush3.class);</p><p>Now, any push notifications sent to "Everyone", or any channel other than "" or "foo", will be associated with the testpush3.class Activity.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745120">2</a> by Raymond Camden
		posted on 3/7/2013 at 9:22 PM
		</div>
		<div class="comment_text"><p>Dude, awesome, that makes perfect sense. Thank you for responding in all of - what - 5 minutes? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745119">3</a> by Erich Grüttner
		posted on 3/7/2013 at 10:49 PM
		</div>
		<div class="comment_text"><p>Thank you again Raymond...now it works like a charm!<br>Please keep up the good work!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745125">4</a> by raul
		posted on 3/8/2013 at 4:59 PM
		</div>
		<div class="comment_text"><p>Still to me does not work,</p><p>I'm using eclipse 2.4 cordova</p><p>I source code is:</p><p>/ / java</p><p>com.parse.Parse import;<br>com.parse.PushService import;</p><p>Parse.initialize (this, "code", "code");<br>         PushService.subscribe (this, "prova" AlertesAjuntamentActivity.class);<br>       PushService.setDefaultPushCallback (this, AlertesAjuntamentActivity.class);</p><p>/ / manifest</p><p>  &lt;uses-sdk android:minSdkVersion="10"/&gt;</p><p>&lt;uses-permission android:name="android.permission.INTERNET" /&gt;<br>     &lt;uses-permission android:name="android.permission.RECEIVE_BOOT_COMPLETED" /&gt;<br>     &lt;uses-permission android:name="android.permission.VIBRATE" /&gt;<br>     &lt;uses-permission android:name="android.permission.ACCESS_NETWORK_STATE" /&gt;</p><p>  &lt;service android:name="com.parse.PushService" /&gt;<br>     &lt;receiver android:name="com.parse.ParseBroadcastReceiver"&gt;<br>    &lt;intent-filter&gt;<br>    &lt;action android:name="android.intent.action.BOOT_COMPLETED" /&gt;<br>    &lt;action android:name="android.intent.action.USER_PRESENT" /&gt;<br>    &lt;/ intent-filter&gt;<br>    &lt;/ receiver&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745122">5</a> by Raymond Camden
		posted on 3/8/2013 at 5:16 PM
		</div>
		<div class="comment_text"><p>Can you please describe *how* it isn't working? Is your device being subscribed, ie, you see it in the dashboard?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745127">6</a> by Raul
		posted on 3/8/2013 at 5:36 PM
		</div>
		<div class="comment_text"><p>If you register with <a href="http://disq.us/url?url=http%3A%2F%2Fparse.com%3A9NAZCuXuWB_KfP-1b0V6Vh4y4SA&amp;cuid=3321886" rel="nofollow noopener" title="parse.com">parse.com</a> but do not get anything on the phone.</p><p>I tried to send it to all the channel i like you suggested in this article, but neither test has worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745124">7</a> by Raymond Camden
		posted on 3/8/2013 at 8:03 PM
		</div>
		<div class="comment_text"><p>"If you register with..." - um,did you mean you *did* register?</p><p>Can you answer my earlier question - if you see the subscription in the dashboard?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745118">8</a> by Raúl
		posted on 3/9/2013 at 8:36 PM
		</div>
		<div class="comment_text"><p>Yes, I can see the subscription in the dashboard</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745117">9</a> by Raymond Camden
		posted on 3/9/2013 at 8:40 PM
		</div>
		<div class="comment_text"><p>Then you got me. If you want to share your code with me, I'll take a look. I'll consider it NDA. Just email it to raymondcamden@gmail dot com.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745123">10</a> by biapar
		posted on 3/14/2013 at 2:49 PM
		</div>
		<div class="comment_text"><p>Which template Do use you for the app?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745130">11</a> by Raymond Camden
		posted on 3/14/2013 at 3:24 PM
		</div>
		<div class="comment_text"><p>What do you mean, biapar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745128">12</a> by demas
		posted on 5/19/2013 at 11:01 AM
		</div>
		<div class="comment_text"><p>hi ray,<br>thanks for your tutorial, its working!!<br>but, how can i send it to specific user?<br>like uuid or some ID that i created before.<br>please tell me how</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745129">13</a> by Raymond Camden
		posted on 5/19/2013 at 5:00 PM
		</div>
		<div class="comment_text"><p>Yes, see Advanced Targeting: <a href="https://disq.us/url?url=https%3A%2F%2Fparse.com%2Fdocs%2Fpush_guide%23sending-queries%2FiOS%3A_6iCtsLhR87z0KEyzZPqUrJzPxw&amp;cuid=3321886" rel="nofollow noopener" title="https://parse.com/docs/push_guide#sending-queries/iOS">https://parse.com/docs/push...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745126">14</a> by demas
		posted on 5/20/2013 at 8:53 AM
		</div>
		<div class="comment_text"><p>can i setchannel inside phonegap app?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745132">15</a> by Raymond Camden
		posted on 5/20/2013 at 2:35 PM
		</div>
		<div class="comment_text"><p>Um, well, my understanding is that your app sets what it subscribes too. See my earlier post on Parse/Push.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745131">16</a> by Nelson
		posted on 5/28/2013 at 1:18 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I have to record the notification data in sqlite database when the notification arrives, is it possible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745133">17</a> by Raymond Camden
		posted on 5/28/2013 at 2:48 AM
		</div>
		<div class="comment_text"><p>I believe, stress believe, you can't, until the user takes action on the notification and opens the app. You can handle knowing they did so. But you can't run it when the notification arrives. (My confidence on this is not 100%.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745139">18</a> by Nelson
		posted on 5/28/2013 at 4:50 AM
		</div>
		<div class="comment_text"><p>Thanks for the reply Ray. I've tried running your example, but when the user takes action on the notification, a black screen appears for a few seconds and the activity is reloaded. Any idea?, this is my code:</p><p>&lt;!-- index.html --&gt;<br>&lt;!doctype html&gt;<br>&lt;html&gt;<br>	&lt;head&gt;<br>		&lt;title&gt;Prueba Parse Push&lt;/title&gt;<br>		&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" /&gt;<br>        &lt;meta name="format-detection" content="telephone=no" /&gt;<br>        &lt;meta name="viewport" content="user-scalable=no, initial-scale=1, maximum-scale=1, minimum-scale=1, user-scalable=no, width=device-width"/&gt;<br>		&lt;link rel="stylesheet" href="css/jquery.mobile.structure-1.3.1.min.css" /&gt;<br>		&lt;link rel="stylesheet" href="css/<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.3.1.min.css" /&gt;<br>		&lt;link rel="stylesheet" href="css/jquery.mobile.theme-1.3.1.min.css" /&gt;<br>		&lt;script type="text/javascript" src="js/jquery-1.9.1.min.js"&gt;&lt;/script&gt;<br>		&lt;script type="text/javascript" src="js/<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.3.1.min.js"&gt;&lt;/script&gt;<br>		&lt;script type="text/javascript" src="js/cordova-2.6.0.js"&gt;&lt;/script&gt;<br>		&lt;script type="text/javascript" src="js/webintent.js"&gt;&lt;/script&gt;<br>		&lt;script type="text/javascript" src="js/index.js"&gt;&lt;/script&gt;<br>	&lt;/head&gt;<br>	&lt;body&gt;<br>		&lt;div data-role="page"&gt;<br>			&lt;div data-role="header"&gt;<br>				&lt;h1&gt;Prueba Parse Puse&lt;/h1&gt;<br>			&lt;/div&gt;<br>			&lt;div data-role="content"&gt;<br>				&lt;div data-role="fieldcontain"&gt;<br>					&lt;label for="cajaTexto"&gt;Info del Push&lt;/label&gt;<br>					&lt;input type="text" name="cajaTexto" id="cajaTexto"&gt;<br>				&lt;/div&gt;<br>			&lt;/div&gt;<br>			&lt;div data-role="footer"&gt;<br>				&lt;h4&gt;Pie del formulario&lt;/h4&gt;<br>			&lt;/div&gt;<br>		&lt;/div&gt;<br>	&lt;/body&gt;<br>&lt;/html&gt;</p><p>// index.js</p><p>document.addEventListener("deviceready", dispositivoListo, false);</p><p>function dispositivoListo() {<br>	alert("Device Ready");<br>	window.plugins.webintent.hasExtra("com.parse.Data",<br>	function(has) {<br>		if(has) {<br>			window.plugins.webintent.getExtra("com.parse.Data",<br>					function(d) {<br>					//console.log(JSON.stringify(d))<br>					alert('App invoked from alert with data');<br>			}, function() {<br>				// There was no extra supplied.<br>				alert('No data passed');<br>			}<br>			);<br>		}<br>	});<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745137">19</a> by Raymond Camden
		posted on 7/3/2013 at 6:48 PM
		</div>
		<div class="comment_text"><p>Sorry for the delay in responding. Note - in the future - please do not paste large blocks of code here. Use a pastebin or gist link instead. As I'm almost two months late responding, were you able to get around it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745140">20</a> by Stelios Kouremenos
		posted on 7/15/2013 at 7:02 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I used your code to open my phonegap app (cordova 2.9.0) via a Parse Push notification msg. It works great! However, a new instance of the activity is created each time a Notification is clicked and as a result i get multiple instances opened at the same time. Do u have any idea of how i could kill the running activity so as to have only one activity running?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745136">21</a> by Raymond Camden
		posted on 7/15/2013 at 11:03 PM
		</div>
		<div class="comment_text"><p>So are you saying you would see 2+ instances in the open apps listing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745138">22</a> by Stelios Kouremenos
		posted on 7/15/2013 at 11:55 PM
		</div>
		<div class="comment_text"><p>Thank u for your question. No. I dont see 2+ instances in the open apps listing. I realised that the problem is that i use 'navigator.app.exitApp()' to close the application. So, i guess exitApp() closes the open windows one by one. I guess this is not the recommended way to close the application. I am using a Lenovo device Android 2.3.</p></div>
	</div>
</div>
		