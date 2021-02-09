
<div class="comment" id="c_1713741106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741106">1</a> by Mike
		posted on 5/10/2012 at 9:12 PM
		</div>
		<div class="comment_text"><p>I have never used this before :) I will have to give it a shot.</p><p>I usually end up using the debug in build with weinre it make it really simple to just build and test it our online.</p><p>Thanks for the info though I will have to give this a shot because weinre can be a little buggy with IOS for some reason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741108">2</a> by Adam Tuttle
		posted on 5/10/2012 at 9:14 PM
		</div>
		<div class="comment_text"><p>If you use PhoneGap:Build there is an option to enable debugging, which embeds Weinre in your application. Then you simply click the "debug" button on your application's page (in PG:B) and that opens up the computer-side of the Weinre session. Boom, console'd.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741107">3</a> by Raymond Camden
		posted on 5/10/2012 at 9:15 PM
		</div>
		<div class="comment_text"><p>I've had no luck with Weinre and Android on Windows, but I know it works wonders for others. I don't believe though that you can do console debugging, can you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741103">4</a> by Raymond Camden
		posted on 5/10/2012 at 9:15 PM
		</div>
		<div class="comment_text"><p>Ah so console does work? I thought just the DOM stuff worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741101">5</a> by Raymond Camden
		posted on 5/10/2012 at 9:19 PM
		</div>
		<div class="comment_text"><p>Yeah, I thought I remembered testing this. You don't get console.log messages in it. You get a console, and I assume you can manually do things, but you don't get logging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741102">6</a> by Adam Tuttle
		posted on 5/11/2012 at 4:20 PM
		</div>
		<div class="comment_text"><p>I use the logging almost every day. You definitely get console.log messages in the console when you let PG:B inject Weinre into your app for you.</p><p>Maybe it's not "stock" Weinre (so if you're doing it manually), but whatever they're doing when I enable debugging in PG:B, I get console.log messages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741100">7</a> by Raymond Camden
		posted on 5/11/2012 at 5:47 PM
		</div>
		<div class="comment_text"><p>Ah, I was using Weinre via Shadow, not via the script include. I've only had luck with Weinre via Shadow, never via injection - or not reliably. Again though, I've heard on OSX it works perfectly fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741110">8</a> by Adam Tuttle
		posted on 5/11/2012 at 5:59 PM
		</div>
		<div class="comment_text"><p>Maybe that's it, I'm on OSX. It's really easy to use in PG:B, you just check a box and it re-builds your app with weinre included, and then there's a link on the site to open up the debug console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741109">9</a> by kim_ras
		posted on 5/11/2012 at 7:37 PM
		</div>
		<div class="comment_text"><p>Yep.. i was struggeling alot when I started "porting"to iPhone..<br>It showed up that it failed on a <a href="http://disq.us/url?url=http%3A%2F%2Fconsole.info%3A0DizfQQlkqdui-PsMuRJ22g9iqo&amp;cuid=3321886" rel="nofollow noopener" title="console.info">console.info</a> message..</p><p>This is what I found:<br>//  NOTE.. iOS only support Log,Error,warning  <br>//         Android supports Log,Error,Warning,Info,Debug</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741105">10</a> by Chuy
		posted on 3/24/2014 at 10:34 PM
		</div>
		<div class="comment_text"><p>I'm testing on a chrome-default-browser device (moto g) and the console tag is "chromium", not "Web Console".</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741104">11</a> by Rafael
		posted on 5/30/2014 at 4:27 PM
		</div>
		<div class="comment_text"><p>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2306751342">
	<div>
		<img src="https://disqus.com/api/users/avatars/shivam01.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2306751342">12</a> by Shivam01
		posted on 10/14/2015 at 12:49 PM
		</div>
		<div class="comment_text"><p>Hi,<br> If i want to get console.og on command prompt of mac, so is there any command for that.</p><p>Regards<br>Shivam</p></div>
	</div>
</div>
		
<div class="comment" id="c_2306979368">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2306979368">13</a> (In reply to <a href="#c_2306751342">#12</a>) by Raymond Camden
		posted on 10/14/2015 at 2:56 PM
		</div>
		<div class="comment_text"><p>Maybe via Android's command line tools. I know you can monitor it via the "monitor" app which probably has a CLI back end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2308586993">
	<div>
		<img src="https://disqus.com/api/users/avatars/shivam01.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2308586993">14</a> (In reply to <a href="#c_2306979368">#13</a>) by Shivam01
		posted on 10/15/2015 at 12:38 PM
		</div>
		<div class="comment_text"><p>'monitor' ,is this application ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2308611415">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2308611415">15</a> (In reply to <a href="#c_2308586993">#14</a>) by Raymond Camden
		posted on 10/15/2015 at 12:57 PM
		</div>
		<div class="comment_text"><p>Oh it's just one of the Android SDK tools.</p></div>
	</div>
</div>
		