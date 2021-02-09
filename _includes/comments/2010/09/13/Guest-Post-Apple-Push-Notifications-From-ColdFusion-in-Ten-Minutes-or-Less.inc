
<div class="comment" id="c_1713726422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726422">1</a> by Confinedspace
		posted on 9/14/2010 at 1:50 PM
		</div>
		<div class="comment_text"><p>Don't suppose you know one for Blackberry Push do you?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726424">2</a> by Daniel Budde
		posted on 9/14/2010 at 5:20 PM
		</div>
		<div class="comment_text"><p>Now, I have to say, this is pretty cool.  Ray, we'll give you a little more than 1% since you host all this great information in 1 place for all of us CF-ers.  Thanks for the work Erik, I can see where this will come in handy to many of us in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726423">3</a> by Nick Hill
		posted on 9/14/2010 at 7:44 PM
		</div>
		<div class="comment_text"><p>Great Post from 2 of my CF inspirations. I have a feeling this will become quite the search engine fodder in the days to come. Nice work Erik!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726425">4</a> by molaro
		posted on 9/15/2010 at 9:22 PM
		</div>
		<div class="comment_text"><p>Ray, <br>This is a dumb question, I'm sure but I thought I'd ask anyway! In a multi-home environment, what should be entered as the server web root value when installing plugins? My setup is:<br>    C:\\Jrun4\<br>             \servers\<br>                  \cfusion\</p><p>    D:\\Inetpub\<br>             \apps\<br>                  \CFIDE\<br>                   \site1\<br>                   \site2\<br>                   \site3\<br>             \extensions\     (CFCs outside root for security)<br>                   \....<br>             \wwwroot\<br>                   \{EMPTY}</p><p>I've tried 3 or 4 extensions and have the same issue.  I've been entering the path to my "apps" directory where the CFIDE lives, and then I usually install the extension inside the apps directory, sometimes in a "site" directory.  The extension installs.  Then when I try to run the extension (yours or anybody's), I'll get an error that pages can;t be found.  In this case I, I'm in site1, right-click and choose JSONView&gt;Do It, and I get:  File not found: /site3/JSON View/handlers/getjson.cfm</p><p>There doesn't seem to be any info in the extensions docs about multi-home setups.  I'm hoping the answer isn;t that I need to install it for every site I want to use it in (b/c I have about 40 sites).</p><p>Can you suggest what path I might enter so I can use extensions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726428">5</a> by Raymond Camden
		posted on 9/15/2010 at 10:15 PM
		</div>
		<div class="comment_text"><p>That isn't on topic for this thread. Please send in the question via my Contact link above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726426">6</a> by molaro
		posted on 9/15/2010 at 10:21 PM
		</div>
		<div class="comment_text"><p>Ray, no problem.  Doing that now. Thx!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726429">7</a> by Stéphane
		posted on 11/16/2010 at 1:03 AM
		</div>
		<div class="comment_text"><p>Hi guys,</p><p>this looks indeed really cool (and I thank you for that because we'll need this very soon), but I've heard apple servers'd prefer lot of info at the same time rather than lot of 'calls' with one info at the time. How would you do to group everything in the same payload, or send everything in a 'batch file'?</p><p>Thanks in advance,</p><p>Stéphane</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726430">8</a> by Raymond Camden
		posted on 11/16/2010 at 1:05 AM
		</div>
		<div class="comment_text"><p>You could store the messages in a db and use a scheduled task to send them out. Ie, if you sent them hourly you can get the messages from the past 60 minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726436">9</a> by Stéphane
		posted on 11/16/2010 at 1:34 AM
		</div>
		<div class="comment_text"><p>Thanks for your quick reply Ray!<br>thus something like <br>&lt;cfloop query="qMessages"&gt;<br>   &lt;cfset APNSService.push(qMessages.token, qMessages.payload) /&gt;<br>&lt;/cfloop&gt;<br>?<br>I was wondering if it'd do the trick; I'll give it a try.<br>Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726434">10</a> by Raymond Camden
		posted on 11/16/2010 at 3:59 AM
		</div>
		<div class="comment_text"><p>Yeah, that's what I meant. You may also want to include logic to 'mark' the db row when it is sent so you don't accidentally resend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726435">11</a> by Stéphane
		posted on 11/18/2010 at 5:07 PM
		</div>
		<div class="comment_text"><p>Hello i'm here again :  I've tested but get an issue with the push method : errors says it's not defined (actually it is, but when I dump the object initially created, this method has got one argument, whereas I'm trying to call it with two : token and payload).<br>I've tried to javacast token and payload as strings so that no conflict with datatypes can occur, but doesn't help... Any clue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726451">12</a> by Raymond Camden
		posted on 11/20/2010 at 1:38 AM
		</div>
		<div class="comment_text"><p>No idea - sorry. This was a guest post - I haven't done it myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726450">13</a> by Jim Hankins
		posted on 12/21/2010 at 10:27 AM
		</div>
		<div class="comment_text"><p>Any examples on using coldfusion with this and the request for inactive devices poll?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726452">14</a> by eyemkent
		posted on 1/4/2011 at 12:41 AM
		</div>
		<div class="comment_text"><p>I'm also wondering if anyone has successfully used this with the request for inactive devices. Any example would be very much appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726453">15</a> by Erik Madsen
		posted on 1/12/2011 at 1:14 AM
		</div>
		<div class="comment_text"><p>You can poll for inactive devices with this method...</p><p>APNSService.getInactiveDevices()</p><p>You'll get back a struct of inactive APNsTokens you can use to manage any records you are managing on those devices.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726455">16</a> by Tim
		posted on 2/10/2011 at 1:49 AM
		</div>
		<div class="comment_text"><p>Does this work with CF8?   Our CF9 test box works fine, CF8 says it can't find the push method on the last send line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726454">17</a> by Raymond Camden
		posted on 2/10/2011 at 2:14 AM
		</div>
		<div class="comment_text"><p>Are you sure the Java ob is correct? Try dumping it to see if the push method is there, and if so, what args it takes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726457">18</a> by Tim
		posted on 2/10/2011 at 2:16 AM
		</div>
		<div class="comment_text"><p>We have tried it on 2 CF9's and 2 CF8's.   9's work fine.  8's give us this:</p><p>The push method was not found.</p><p>Either there are no methods with the specified method name and argument types, or the push method is overloaded with argument types that ColdFusion cannot decipher reliably. ColdFusion found 0 methods that matched the provided arguments. If this is a Java object and you verified that the method exists, you may need to use the javacast function to reduce ambiguity.</p><p>Looking further into it.  I'll post if I find it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726456">19</a> by Tim
		posted on 2/11/2011 at 12:38 AM
		</div>
		<div class="comment_text"><p>Seems CF8 needs things a little differently.    Team effort, one of our guys and aqx over at experts-exchange.</p><p>&lt;cfset APNS = createObject( "java", "com.notnoop.apns.APNS" )&gt;<br>&lt;cfset APNSService = createObject( "java", "com.notnoop.apns.APNS" ).newService()<br>   .withCert("c:\websites\apns-dev-cert.p12", "joemeade")<br>   .withSandboxDestination()<br>   .build() /&gt;</p><p>&lt;cfset payload = createObject( "java", "com.notnoop.apns.APNS" ).newPayload()<br>                  .badge(0)<br>                  .alertBody("Just Checking.")<br>                  .sound("PushNotification.caf")<br>                  .build()/&gt;</p><p>&lt;cfset token = "264ffac53653a20ef657dcff02d5ce70aeb7c53bce0f517a8af08952539987f2"&gt;    <br>&lt;cfset APNSNotification = createObject ("java", "com.notnoop.apns.SimpleApnsNotification").init(javacast("string",token),javacast("string",payload)) /&gt;<br>&lt;cfset APNSService.push(APNSNotification)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726462">20</a> by Tim
		posted on 2/11/2011 at 12:44 AM
		</div>
		<div class="comment_text"><p>My bad:   AGX over at experts-exchanged helped debug this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726464">21</a> by Benn
		posted on 2/15/2011 at 6:33 AM
		</div>
		<div class="comment_text"><p>@Tim<br>Thanks a lot! That seems to work.</p><p>It looks like CF8 isn't recognizing the methods of the abstract class (AbstractApnsService), though, because getInactiveDevices() is also returning a "method not found" error.</p><p>Is this a problem unique to this library or is there a better workaround for CF8? My next step will be to re-compile it with an overriding method in ApnsServiceImpl that just calls the abstract class' getInactiveDevices().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726468">22</a> by Brandon
		posted on 5/10/2011 at 12:48 AM
		</div>
		<div class="comment_text"><p>Any updates to the getInactiveDevices() "method not found" issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726460">23</a> by Benn
		posted on 5/10/2011 at 2:39 AM
		</div>
		<div class="comment_text"><p>I did some additional research and found that the issue wasn't with CF8. There were some changes with an update to the Java-apns library that caused it to stop working.</p><p>I wrote a UDF that works around it, though. You're free to use it if you'd like, although I can't offer any support. At the very least, I hope it gets you closer. I've uploaded the code to my personal site here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennlinger.com%2Fuploads%2Fget_inactive_devices.txt%3Aazf92j2q9NKy928c1qCzsHDM4pI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennlinger.com/uploads/get_inactive_devices.txt">http://www.bennlinger.com/u...</a></p><p>It should return a struct with a mapping of device tokens to dates (representing when they became inactive).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726463">24</a> by Brandon
		posted on 5/10/2011 at 8:18 PM
		</div>
		<div class="comment_text"><p>Just wanted to pass on my gratitude to you all for this post and the speedy response to my question!!!</p><p>Special thanks to Raymond Camden, Tim, Benn.</p><p>One suggestion would be to incorporate Tim's CF8 code in the article or note that CF8 code is below.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726465">25</a> by R. Graf
		posted on 5/11/2011 at 7:00 AM
		</div>
		<div class="comment_text"><p>Hello, thank you for this interesting topic and also for the comments. I'm working with CF 8 on Win 2008 / JRE 1.6.24 and tried the code from comments no 19+23, but keep getting this error when performing the final function call:</p><p>javax.net.ssl.SSLHandshakeException: Received fatal alert: handshake_failure</p><p>What am I missing here? Thanks in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726466">26</a> by Benn
		posted on 5/11/2011 at 7:07 AM
		</div>
		<div class="comment_text"><p>I got that message when my certificates were bad. In my case, they were either expired or invalidated through the provisioning portal.</p><p>In your situation, I'd first try re-downloading the certificates from the provisioning portal (and converting to .p12 as shown above). If that doesn't work, I'd create an entirely new App ID with push notifications enabled and try its certificates as a sanity check. If that works, then you know it's an issue with the other app's configuration on the provisioning portal.</p><p>Aside from that, I'm not sure what to tell you. That error is just telling you that Apple is rejecting your certificate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726467">27</a> by R. Graf
		posted on 5/13/2011 at 12:26 AM
		</div>
		<div class="comment_text"><p>Thank you - turred out that i had the wrong certificate, now everything is running fine!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726469">28</a> by Carey Richardson
		posted on 5/19/2011 at 2:26 AM
		</div>
		<div class="comment_text"><p>I have been struggling getting this to work. I finally have all my classpaths correct and I'm getting this error:</p><p>The push method was not found.</p><p>Either there are no methods with the specified method name and argument types...</p><p>Here is all the code in my testPush.cfm file:<br>&lt;cfset APNSService = createObject( "java", "com.notnoop.apns.APNS" ).newService()<br>     .withCert("C:\apns-dev-cert.p12", "000000")<br>     .withProductionDestination()<br>     .build() /&gt;</p><p>&lt;cfset payload = createObject( "java", "com.notnoop.apns.APNS" ).newPayload()<br>	.badge(3)<br>	.alertBody("Hello, world.")<br>	.sound("PushNotification.caf")<br>	.build()/&gt;</p><p>&lt;cfset APNSService.push("8367252c 52b31eee 9fcd2c00 7500725f 42520649 c5d8889a e10cc066 6bd73efd", payload) /&gt;</p><p>Help, please...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726470">29</a> by Carey Richardson
		posted on 5/19/2011 at 2:56 AM
		</div>
		<div class="comment_text"><p>I actually didn't read a few posts up. I copied their code and it worked perfect. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726472">30</a> by RKA
		posted on 5/23/2011 at 1:59 PM
		</div>
		<div class="comment_text"><p>Hi,<br>             What will be the element names in the structure returned by getInactiveDevices()  method? Does anybody implemented this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726471">31</a> by RKA
		posted on 5/24/2011 at 4:43 PM
		</div>
		<div class="comment_text"><p>With regard to comment 23,<br>Benn,<br>         I tried to implement the inactive device code posted in your site(<a href="http://disq.us/url?url=http%3A%2F%2Fbennlinger.com%3Ansk0LhzquEJQEetCRU2tqXu5LEU&amp;cuid=3321886" rel="nofollow noopener" title="bennlinger.com">bennlinger.com</a>).<br>A push notification was sent initially and uninstalled the application from the device later. Then , I just passed the certificate path and password used to the function for checking inactive device, but it is returning an empty structure.<br>Any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726473">32</a> by Andrew
		posted on 6/4/2011 at 8:58 PM
		</div>
		<div class="comment_text"><p>Has anyone tried using the "deviceTokens" parameter to send to multiple devices at once?  The JavaDocs show that it is possible by passing in a "Collection&lt;String&gt;".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726474">33</a> by Kenny
		posted on 6/28/2011 at 7:26 AM
		</div>
		<div class="comment_text"><p>What encoding is the CF api expecting for the device token? On the Objective-C side, I Base64 encoded the NSData and then passed that off to my server. Should the CF decode it and re-encode it as something else? The api accepts a String token and String payload, how should the String token be encoded?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726475">34</a> by Benn Linger
		posted on 6/28/2011 at 4:33 PM
		</div>
		<div class="comment_text"><p>You could check the JavaDocs for the third-party library to be sure, but if it's accepting strings, I'm fairly sure they're Base64 encoded strings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726479">35</a> by Kenny
		posted on 6/28/2011 at 8:57 PM
		</div>
		<div class="comment_text"><p>It turns out that the API above is expecting hex encoded strings.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F6501260%2Fapn-device-token-encoding-when-using-coldfusion-com-notnoop-apns-simpleapnsnotifi%2F6501486%3AzZ_q49xuRlglycsVdmpfC5gOavs&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/6501260/apn-device-token-encoding-when-using-coldfusion-com-notnoop-apns-simpleapnsnotifi/6501486">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726481">36</a> by mael94420
		posted on 7/19/2011 at 1:22 PM
		</div>
		<div class="comment_text"><p>Hello,<br>First, thanks for your code.<br>Second, I had a problem with the push method. I used the Tim code and it work better. However, now, i've got this error : <br>"java.net.NoRouteToHostException: No route to host: connect " <br>and I really don't know why. It's first time for me to use a java class and I don't understand this error. Is there a network problem?<br>Path of my p12 is right. I tried the easy way with c:\mycert.p12, I tried a path accessible directly from my website and an other a little bit more secure but no way...<br>If someone have any idea, i'll be very grateful.<br>Thanks for your answers<br>Maël</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726482">37</a> by Eric Tippin
		posted on 8/2/2011 at 8:47 PM
		</div>
		<div class="comment_text"><p>Assumed if I have an alerts table with message (checked = 1 or 0 = new).  Can you please show me to write a simple Apple App would would display the message with checked flag = 0 that would call APN to send push notification.</p><p>Would be highly appreciate if you could show us how to write this simple app, assume that we have everything is setup or as needed (as far as the development concern).</p><p>Thank you in advance.  Awesome works on the APN push notification via iPhone app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726484">38</a> by John Prince
		posted on 2/4/2012 at 7:12 PM
		</div>
		<div class="comment_text"><p>Did anyone figure out APNSService.getInactiveDevices()?</p><p>I'm still getting back method not found.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726483">39</a> by John P
		posted on 2/9/2012 at 6:44 PM
		</div>
		<div class="comment_text"><p>Finally got inactive devices to work!! Thanks to this blog and the link posted above: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennlinger.com%2Fuploads%2Fget_inactive_devices.txt%3Aazf92j2q9NKy928c1qCzsHDM4pI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennlinger.com/uploads/get_inactive_devices.txt">http://www.bennlinger.com/u...</a></p><p>Also, if it returns an empty struct, that's probably good -- It won't return anything until after you attempt a notification. IE, You send notifications out and then they will return which ones fail. They don't collect those ids as the person uninstalls, they collect them after you attempt to deliver a message.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726485">40</a> by Dheeraj Wadhwa
		posted on 4/9/2012 at 12:35 PM
		</div>
		<div class="comment_text"><p>we can't call this method mapper.writeValueAsString() in org.codehaus.jackson.ObjectCodec   package <br>please tell some solution  what i will do</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726486">41</a> by Talal M.
		posted on 9/13/2012 at 7:35 PM
		</div>
		<div class="comment_text"><p>How to do the same for android please? Is there any tutorial same as above for android push using coldfusion ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726487">42</a> by bindupavan
		posted on 3/19/2013 at 4:52 PM
		</div>
		<div class="comment_text"><p>Thanks a lot Raymond</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726489">43</a> by Adil
		posted on 4/4/2013 at 9:57 PM
		</div>
		<div class="comment_text"><p>I couldn't find any JAR file at: <a href="http://disq.us/url?url=http%3A%2F%2Fgithub.com%2Fnotnoop%2Fjava-apns%3AJReHrCSdrnCABuQKaFBISug6XcA&amp;cuid=3321886" rel="nofollow noopener" title="http://github.com/notnoop/java-apns">http://github.com/notnoop/j...</a><br>Can you please help me with that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726491">44</a> by Jim Hankins
		posted on 4/4/2013 at 11:05 PM
		</div>
		<div class="comment_text"><p>Here you go! <br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fnotnoop%2Fjava-apns%2Fdownloads%3Ano-U2-eXLrEJGLDH4tmoWIyzYic&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/notnoop/java-apns/downloads">https://github.com/notnoop/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726493">45</a> by Adil
		posted on 4/9/2013 at 8:03 PM
		</div>
		<div class="comment_text"><p>@Jim Hankins Thanks<br>Can you please let me know if I have to do anything in CFAdmin except creating classpath? Do I need to import p12 file as we do in case of pem files?<br>Because currently I am getting the following error:<br>Security: The requested template has been denied access to ../JAR/DevPushCertificates.p12</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726494">46</a> by Adil
		posted on 4/10/2013 at 3:51 PM
		</div>
		<div class="comment_text"><p>I fixed the Access Rights issue. But now when I run the CF code mentioned above, it shows me plain while screen and no code bellow this code is executed. It seems there is some exception but I cannot see that. I have written the code in try catch but still I cannot see the exception. Can you please let me know how to debug this issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726498">47</a> by Adam
		posted on 2/21/2014 at 5:39 AM
		</div>
		<div class="comment_text"><p>Just a note incase anyone is having the same problem I had. When you export your .p12 file from the Keychain Access. You may need to select both the certificate and the key at the same time and then select 'Export' 2 items to make a .p12 file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726497">48</a> by Eric Belair
		posted on 8/8/2014 at 5:11 PM
		</div>
		<div class="comment_text"><p>I'm just starting a new project to enable Push Notifications on an existing iOS app, that another consulting firm developed. In addition, the app is actually compiled and distributed as a enterprise app by one of our clients. So, this is not "my app", and I'm not sure where to start. I also need to be able to send certain messages to certain users - how can I link device ids to users?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726496">49</a> by Eric Belair
		posted on 9/18/2014 at 12:50 AM
		</div>
		<div class="comment_text"><p>Ignore my last question. I'm actually starting to develop this now, and right off the bat I'm getting a strange exception:</p><p>&lt;cfset LOCAL.APNS = createObject( "java", "com.notnoop.apns.APNS" ) /&gt;</p><p>&lt;cfset LOCAL.APNSService =<br>    CreateObject(<br>        "java",<br>        "com.notnoop.apns.APNS"<br>        ).newService(<br>            ).withCert(<br>                "MyCert.p12",<br>                ""<br>                ).withSandboxDestination().build() /&gt;</p><p>java.io.IOException: failed to decrypt safe contents entry: java.lang.ArithmeticException: / by zero</p><p>Stack Trace:</p><p>com.notnoop.exceptions.InvalidSSLConfig: java.io.IOException: failed to decrypt safe contents entry: java.lang.ArithmeticException: / by zero<br>	at com.notnoop.apns.internal.Utilities.newSSLContext(<a href="http://disq.us/url?url=http%3A%2F%2FUtilities.java%3AOqdlv2hGORLWbDpAHa3kNqaCqIk&amp;cuid=3321886" rel="nofollow noopener" title="Utilities.java">Utilities.java</a>:102)<br>	at com.notnoop.apns.ApnsServiceBuilder.withCert(<a href="http://disq.us/url?url=http%3A%2F%2FApnsServiceBuilder.java%3AVYSNnAwr_in9ZCWzmq_G8wYDW38&amp;cuid=3321886" rel="nofollow noopener" title="ApnsServiceBuilder.java">ApnsServiceBuilder.java</a>:139)<br>	at com.notnoop.apns.ApnsServiceBuilder.withCert(<a href="http://disq.us/url?url=http%3A%2F%2FApnsServiceBuilder.java%3AVYSNnAwr_in9ZCWzmq_G8wYDW38&amp;cuid=3321886" rel="nofollow noopener" title="ApnsServiceBuilder.java">ApnsServiceBuilder.java</a>:114)<br>	at sun.reflect.NativeMethodAccessorImpl.invoke0(Native Method)<br>	at sun.reflect.NativeMethodAccessorImpl.invoke(Unknown Source)<br>	at sun.reflect.DelegatingMethodAccessorImpl.invoke(Unknown Source)<br>	at java.lang.reflect.Method.invoke(Unknown Source)<br>	at coldfusion.runtime.StructBean.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FStructBean.java%3AG7UcKwYvWrYbuqOsOvgA2fxDhrg&amp;cuid=3321886" rel="nofollow noopener" title="StructBean.java">StructBean.java</a>:511)<br>	at coldfusion.runtime.CfJspPage._invoke(<a href="http://disq.us/url?url=http%3A%2F%2FCfJspPage.java%3ADrFcmjVQk5qzfPgU8u4mJFJc9BM&amp;cuid=3321886" rel="nofollow noopener" title="CfJspPage.java">CfJspPage.java</a>:2300)</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726495">50</a> by Eric Belair
		posted on 9/18/2014 at 1:22 AM
		</div>
		<div class="comment_text"><p>Nevermind, it was due to the fact that the apns lib requires the cert to have a password.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726500">51</a> by Eric Belair
		posted on 9/30/2014 at 7:38 PM
		</div>
		<div class="comment_text"><p>I am unable to call getInactiveDevices() in ColdFusion 8. The link above no longer works. I've started a SO post (<a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F25914987%2Fwhy-cant-i-call-java-apns-getinactivedevices-method-in-coldfusion-8%29%3AJv5JfGJ-sbc888mgQDSw74zleEE&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/25914987/why-cant-i-call-java-apns-getinactivedevices-method-in-coldfusion-8)">http://stackoverflow.com/qu...</a>. Really need help here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726499">52</a> by Jerry Aguilar
		posted on 10/10/2014 at 10:41 PM
		</div>
		<div class="comment_text"><p>My test doesn't work :(</p><p>Just in the line where I try to initialize the pusher component:</p><p>&lt;cfset pusher = createObject("component","dasien.componentes.pushservices.pusher").init(<br>          mode = "development",<br>          appleCertificatePath = "#EXPANDPATH('componentes/pushservices/Certificados.p12')#",<br>          appleCertificatePassword = "XXXXXX",<br>          googleAPIKey = "XXXXXX"<br>)/&gt;</p><p>The script stops and the server returns a blank page with no detail about the fail but with error code 500.</p><p>When I go to the Application server log I find this:</p><p>"Could not initialize class com.notnoop.apns.internal.Utilities"</p><p>However if I extract all the content of the jar file, the Utilities class is actually there. Hope you can help me :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2271504413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2271504413">53</a> by Ian O'Sullivan
		posted on 9/24/2015 at 1:07 PM
		</div>
		<div class="comment_text"><p>Erik and Ray. Thank you so much! Heros! ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3753733425">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3753733425">54</a> (In reply to <a href="#c_1713726425">#4</a>) by dawesi
		posted on 2/11/2018 at 11:19 PM
		</div>
		<div class="comment_text"><p>I know this is old (i need to write a new article with new libs), but this response may confuse people who still see this through google searches. #sigh ..</p><p>Before coding coldfusion apps, you should read the 101 docs for coldfusion about where to put things.</p><p>No such thing as extensions directories (as in a fixed place). In this case just setup 'custom tag paths' perhaps (not necessary but for 40 sites might be worth it). BTW path should be either relative to executing dir or a mapped path. All in basic CF docs.</p></div>
	</div>
</div>
		