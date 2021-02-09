
<div class="comment" id="c_1713743851">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743851">1</a> by Nando Breiter
		posted on 11/30/2012 at 6:33 PM
		</div>
		<div class="comment_text"><p>Hi Ray! Yes, I DO want to learn more about Edge, especially Edge Inspect. I feel stupid asking, but I can't find any documentation how to use the thing.  Not having tried Shadow before, I find it kind of quirky. First I installed Edge Inspect, and when I tried to open the app, nothing happened. I found that it was running by digging into the Activity Monitor, but didn't know if this behavior was normal or not.</p><p>When I finally figured out how to get it connected, I found that it doesn't work for my localhost development server on my laptop "An error occurred: Web page not available". Ok, I can kind of understand why if it functions through a service, but don't get how to fix this. Maybe I should install a Weinre server on my laptop?</p><p>Then I don't really get the workflow needed to debug the javascript event stuff that is at the heart of the difficulties I'm facing. For instance, my iPad doesn't follow interface events like clicks and blurs, which are exactly where the problems I'm trying to fix are, but when I start touching the interface on the iPad, it gets disconnected from Edge Inspect. Should it remain connected and display debugging info about the request, I particularly need debugging output via console.log to try and figure out what events are being triggered, and how ...</p><p>I could continue to stumble around, but I thought you might know where the in-depth resources are hiding for this tool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743870">2</a> by Raymond Camden
		posted on 11/30/2012 at 8:12 PM
		</div>
		<div class="comment_text"><p>Thanks for the comments Nando. Let me respond to each.</p><p>1) Docs<br>I think you may have a fair point here. There is a FAQ (<a href="http://disq.us/url?url=http%3A%2F%2Fhtml.adobe.com%2Fedge%2Finspect%2Ffaq.html%29%3AT-0YrnRHkaa1MUx2ncfUQZdV2Ls&amp;cuid=3321886" rel="nofollow noopener" title="http://html.adobe.com/edge/inspect/faq.html)">http://html.adobe.com/edge/...</a>, but it doesn't clearly say how to use it.</p><p>Although - I notice now that when I start Edge Inspect, it opens a Getting Started Guide. Oddly my page has no URL so I'm assuming it is a local guide that app opened up. Ahah, I just did view source and it's loading via the extension. But I could see some merit in that Getting Started Guide being available elsewhere.</p><p>Also, when I log into Creative Cloud, go to Apps, click the Learn More by Edge Inspect, I see a small doc there too.</p><p>Overall though, I think it could be a bit more clear _directly_ from the product landing page here: <a href="http://disq.us/url?url=http%3A%2F%2Fhtml.adobe.com%2Fedge%2Finspect%2F%3AUTemrh_CxHXx1fgbOVWpcRh3yck&amp;cuid=3321886" rel="nofollow noopener" title="http://html.adobe.com/edge/inspect/">http://html.adobe.com/edge/...</a></p><p>2) localhost: I believe you want to hit it via IP instead. 127.0.0.1 works for me just fine.</p><p>3) Have you tried clicking the Remote Inspector button in the Chrome Extension? This gives you a Chrome Dev Tools for your remote device, including the console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743873">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743873">3</a> by Nando Breiter
		posted on 11/30/2012 at 8:18 PM
		</div>
		<div class="comment_text"><p>Continuing to stumble ... here <a href="http://disq.us/url?url=http%3A%2F%2Fhtml.adobe.com%2Fedge%2Finspect%2Ffeatures.html%3Ap7RnFm-LaH7O2mCKlhGt-JsbSQc&amp;cuid=3321886" rel="nofollow noopener" title="http://html.adobe.com/edge/inspect/features.html">http://html.adobe.com/edge/...</a> I see "Edge Inspect works with URLs containing localhost, and 127.0.0.1. " OK, but how? Looking at the Firewall settings on my Mac, I see that Adobe Edge Inspect has been automatically set up to allow incoming connections. That doesn't seem to be enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743868">4</a> by Raymond Camden
		posted on 11/30/2012 at 8:21 PM
		</div>
		<div class="comment_text"><p>Hmm, last time I tried localhost it failed for me and when I switched to 127.0.0.1, it just plain worked. So neither work for you? Are both machines (desktop + mobile) on the same network?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743861">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743861">5</a> by Nando Breiter
		posted on 11/30/2012 at 8:30 PM
		</div>
		<div class="comment_text"><p>Thanks very much for the reply Ray. 127.0.0.1 doesn't work for me, same as localhost. To be clear, this is trying to hit the inbuilt ColdFusion webserver - 127.0.0.1:8500/ or localhost:8500 - so maybe I need to open access to that webserver in the firewall settings, but I'm not sure how at this point.</p><p>Maybe you could fill the gap in terms of the missing in depth docs? A preso we could find online would be really helpful. Stupid thing, but I was lost for a day over the fact that there was no interface when I tried to open Edge Inspect ... for instance.</p><p>I'm going to try again to use the remote inspector and use the interface via the iPad to see if it disconnects again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743871">6</a> by Raymond Camden
		posted on 11/30/2012 at 8:33 PM
		</div>
		<div class="comment_text"><p>1) I'd try this. Figure out your desktop's IP on the network. Then go to your mobile device, open the browser, and attempt to hit it. If you can't, then Edge is not going to be able to either. If you can't, then you need to check firewall settings some more I suppose.</p><p>2) I think once you get things working it will make more sense. :) It really is pretty simple. You go to site X in your desktop and your mobile devices do the same. Here's one video on it: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DSyzZHS-1fPE%3AkFt1SL-VMWjZKWexr8O3Xan2lI0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.youtube.com/watch?v=SyzZHS-1fPE">http://www.youtube.com/watc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743865">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743865">7</a> by Nando Breiter
		posted on 11/30/2012 at 9:20 PM
		</div>
		<div class="comment_text"><p>I just checked and I can access my local dev server just fine from the iPad using the local network ip address. Bummer - I'm at a dead end there.</p><p>Yeah, I already have my iPad connected and following along - your blog opens on it just fine - this form is open on it right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743874">8</a> by Raymond Camden
		posted on 11/30/2012 at 9:23 PM
		</div>
		<div class="comment_text"><p>Ok, so let's double check a few other things.</p><p>1) You are running the EI program on your desktop?<br>2) You have the CHrome Extension installed and it is turned on?<br>3) You ran the EI program on your iPad?<br>4) You connected to your desktop from the iPad?<br>5) On your desktop, in the Chrome Extension, you entered the passcode and see your device?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743863">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743863">9</a> by Nando Breiter
		posted on 11/30/2012 at 9:31 PM
		</div>
		<div class="comment_text"><p>Maybe the firewall on the router needs to be open to allow incoming traffic from the internet, as if I was hosting a webserver on premises?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fmessage%2F4764105%3ADpvnac9ObcXS8iiv7Teti5AE4_M&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/message/4764105">http://forums.adobe.com/mes...</a> Here Mark Rausch seems to be saying that if the browser on the device can access localhost, it should work.</p><p>If the firewall on the router needs to be opened for this to work, but can't be opened because of security issues, then maybe the best solution is to install a local Weinre server?</p><p>It's stuff like this that would be really good to sort out for developers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743860">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743860">10</a> by Nando Breiter
		posted on 11/30/2012 at 9:35 PM
		</div>
		<div class="comment_text"><p>Regarding your double check list of 5 points, all of those I can definitely answer in the affirmative. I'm seeing this form on your blog right now via EI on my iPad, and once I post it I"ll be looking at your blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743864">11</a> by Raymond Camden
		posted on 11/30/2012 at 9:37 PM
		</div>
		<div class="comment_text"><p>Oh, so to be clear, on your desktop you went to my blog and the iPad followed? So, EI "works" just not for your local stuff?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743866">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743866">12</a> by Nando Breiter
		posted on 11/30/2012 at 9:52 PM
		</div>
		<div class="comment_text"><p>Damn.</p><p>I had EI working for everything but local stuff yesterday and all of today. It would follow every move I made in Chrome, except the local stuff - anything I tried to access at localhost:8500 or 127.0.0.1:8500 on my local machine would render an error on the EI app on my iPad - "An error occurred: Web page not available". Until a few minutes ago ...</p><p>You told me to figure out the IP of dev machine on the local network, so I did that and tried in the iPad's browser - 192.168.1 118:8500 - and it worked. I saw my CF dev server index page on the iPad.</p><p>Then when I switched back to EI on the iPad, suddenly it started working with my localhost pages. I know it's easy to get confused with this stuff, but I'm absolutely sure it was not working all day with the localhost pages, and that I didn't change any firewall settings or any settings in EI. Maybe it was browsing to your blog that triggered it to start working! ;-)</p><p>In any case, thanks for going through this with me!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743867">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743867">13</a> by Nando Breiter
		posted on 11/30/2012 at 10:15 PM
		</div>
		<div class="comment_text"><p>Ray, I got one more thing about this tool that I'm not getting. Maybe it seems not to be working because of the flaky connection, or maybe it just doesn't work that way, not sure.</p><p>You wrote "Have you tried clicking the Remote Inspector button in the Chrome Extension? This gives you a Chrome Dev Tools for your remote device, including the console."</p><p>Yes, I've tried that. What happens is that the iPad follows me to the main url, but when use any interaction in the browser that either is posted to the server via a form or via ajax or it's just a simple DOM manipulation via jQuery, the iPad doesn't follow that. Ok, fine. But then, if I interact with my application interface on the ipad, within Edge Inspect, the remote inspector gets disconnected and I don't get the debugging information I'm looking for.</p><p>Is that the expected behavior? If so, I really need the debugging information you'd get interacting with the application interface on the device itself, especially since touch devices trigger other events in the browser than desktop devices do. If Edge Inspect can't do this, how do folks get this feedback when debugging mobile apps???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743862">14</a> by Raymond Camden
		posted on 11/30/2012 at 10:31 PM
		</div>
		<div class="comment_text"><p>"Yes, I've tried that. What happens is that the iPad follows me to the main url"</p><p>This doesn't make sense. Clicking the icon to get the dev tools isn't asking for a new url. It is saying, "Show me Dev Tools on the Mobile Device for the current URL we are sharing." So yes, it does open a new tab, but just to hold the dev tools.</p><p>You are saying that when you did it, your iPad browser went to a new URL.</p><p>Did you really mean that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743869">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743869">15</a> by Nando Breiter
		posted on 11/30/2012 at 11:18 PM
		</div>
		<div class="comment_text"><p>"You are saying that when you did it, your iPad browser went to a new URL. Did you really mean that?"</p><p>No. Dev Tools for the mobile device opens in the new tab, as you say, but I can't work out how to debug the interactions I'm talking about. I'm saying that in terms of debugging, Dev Tools only follows me to a new URL, but all interactions on that page itself - mouse clicks for instance that transform a text into a text field for editing - neither the Dev Tools interface, nor the EI browser window on the device - follow those interactions. And when I go to the device and click on that text that changes into a form field for editing via ajax, the Dev Tools window on my laptop say it got disconnected.</p><p>So in essence, I don't know if I'm using the tool in the wrong way to debug this stuff, or the tool isn't designed for this.</p><p>What I've got is a list of start times to end times that I have set up with jQuery to be editable via ajax, so users can just click through them and change these details quickly without needing to open the form for each "event". I've got the form field submitting on blur and on keypress of the enter key, but it's not working right on the iPad, and I'm not sure which events are getting fired, or what else might be getting screwed up because of the different event architecture of a touch device. So I'm trying to figure out how to debug that, maybe by putting stuff like console.log('blur event fired on start time field'); throughout the javascript code. But so far, I don't get if it's possible to see that using EI, or in fact if there is some other tool that would make it possible that I'm not aware of.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743872">16</a> by Raymond Camden
		posted on 12/1/2012 at 12:59 AM
		</div>
		<div class="comment_text"><p>A few things:</p><p>"but all interactions on that page itself - mouse clicks for instance that transform a text into a text field for editing - neither the Dev Tools interface, nor the EI browser window on the device - follow those interactions"</p><p>This is expected. EI follows navigation, it doesn't mimic all your events. So if you had a button where, on click, it did an alert('hi'), it would NOT run on the mobile device. EI is following *navigation* events only. (Although it is pretty sophisticated. It can recognize a History API change ala jQuery Mobile.)</p><p>So, from what I can see in your last paragraph, it seems like you want to a) open the dev tools and b) type/click stuff on the iPad to try to fire the events.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743875">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743875">17</a> by Nando Breiter
		posted on 12/3/2012 at 5:52 PM
		</div>
		<div class="comment_text"><p>"So, from what I can see in your last paragraph, it seems like you want to a) open the dev tools and b) type/click stuff on the iPad to try to fire the events."</p><p>Yes, if that would be possible. Most importantly, but not stated directly would be c) see what is going on via the remote console in Dev Tools. So if, for instance, I've got the following jQuery code on the start time for an event:</p><p>       $(".st").click(function() {<br>		console.log('click triggered on start time text');<br>	});</p><p>... there would be some way of getting to that log information when I touch the start time on the iPad (or any other touch device), as an example, to make sure the click event was firing as I want it. (To be clear, it is. The trouble I'm facing today is elsewhere, but the foundational problem is that I don't know how to get to this information to debug javascript on touch devices ...)</p><p>I was hoping that EI would be able to do this sort of debugging since it connected the device to Chrome's Dev Tools, but right now it seems not.</p><p>And maybe there is another way of doing this that I'm not aware of? Bottom line is I need a way to see what events are being fired, and what variables / values are being manipulated on the touch device's DOM when I poke at it with my finger. Thanks for any insight you can provide!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743876">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743876">18</a> by Nando Breiter
		posted on 12/3/2012 at 7:59 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Looking elsewhere, I dug up this relatively new method of debugging Safari on iOS 6 only:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2Fc9yqebs%3AGl4ljyFTcTzThKsOFe8UL1SM9Ug&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/c9yqebs">http://tinyurl.com/c9yqebs</a></p><p>I have yet to try it, but the description specifically indicates that console.log() works with this approach, so I expect it will work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743855">19</a> by Raymond Camden
		posted on 12/3/2012 at 8:04 PM
		</div>
		<div class="comment_text"><p>console.log does work for me. Tell me, in the console, can you type alert('hi') and see it pop open on the iPad? If not, and if everything else works, than I'm at a lost and will ask you to try the official EI forums.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743854">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743854">20</a> by Nando Breiter
		posted on 12/3/2012 at 8:58 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Good you said that, because I tried again and this time EI worked as I was hoping it would. I set up a connection, navigated to the page I"ve been trying to debug, and then started using the page I've developed on the iPad and got the console.log info via Chrome Remote Dev Tools Console output on my desktop! Every time I've tried before, I got disconnected, so I thought it wasn't supposed to work that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743852">21</a> by Raymond Camden
		posted on 12/3/2012 at 9:02 PM
		</div>
		<div class="comment_text"><p>Glad you got it!</p></div>
	</div>
</div>
		