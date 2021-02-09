
<div class="comment" id="c_1713728802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728802">1</a> by Paul Dynan
		posted on 1/13/2011 at 12:06 AM
		</div>
		<div class="comment_text"><p>We started encountering the same error with code that was working fine up to that point.  It was to connect to 37Signal's Highrise API in our case.  I never found a solution, and we ended up discontinuing our connection to that service.</p><p>I was hopeful for a moment that this could be the cause/solution at first, until I got to the part about it being CF9 ent/dev only.  This was CF8 standard.</p><p>NBD since we've already killed that offering in our code, but I would have been interested to know what went down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728799">2</a> by Kevin
		posted on 1/13/2011 at 1:41 AM
		</div>
		<div class="comment_text"><p>We had the same issue with cfhttp having problems authenticating and we ended up using a 3rd party C++ tag called cfx_httpd which has been working great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728800">3</a> by Kevin
		posted on 1/13/2011 at 1:42 AM
		</div>
		<div class="comment_text"><p>Correction to my last post, the tag is called cfx_http5</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728790">4</a> by Todd Schlomer
		posted on 1/13/2011 at 2:04 AM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>Awesome!  Thanks for posting that.  I actually had that same problem with another API I was using, which I used the provider removal solution.  I didn't think to link it to the same problem when I was trying to use the Zencoder API.</p><p>With the Zencoder API, I actually wrote it to use cURL; which works fine, but not a very nice solution to something that should just work.  The call itself is abstracted out, so it will be an easy change to use your fix.</p><p>Since you're working on a Zencoder API, I have quite a bit of one already written.  So it would be nice to combine efforts.</p><p>Shoot me an email if you're interested in working on the Zencoder API together.</p><p>Todd</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728808">5</a> by Raymond Camden
		posted on 1/13/2011 at 2:06 AM
		</div>
		<div class="comment_text"><p>No reason to duplicate efforts. I don't have your email address so use my contact form and I'll reply to that. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728803">6</a> by Grant Eagon
		posted on 1/13/2011 at 4:24 AM
		</div>
		<div class="comment_text"><p>@Ray<br>Had the same problem on CF7 with paypal.</p><p>Those errors are tough for me to debug because I don't have so many smart friends and the error is pretty terse.</p><p>PS - New gravatar is awesome.  Love the beard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728801">7</a> by Pete Freitag
		posted on 1/13/2011 at 8:22 PM
		</div>
		<div class="comment_text"><p>I've narrowed this down a bit further, and removing the KeyAgreement.DiffieHellman from the RSA JsafeJCE provider (which causes the default sun implementation to be used instead) seams to work, and probably has less of an effect on your server than removing the entire provider would. Here's how you do it:</p><p>&lt;cfset objSecurity = createObject("java", "java.security.Security") /&gt;<br>&lt;cfset storeProvider = objSecurity.getProvider("JsafeJCE") /&gt;<br>&lt;cfset dhKeyAgreement = storeProvider.getProperty("KeyAgreement.DiffieHellman")&gt;<br>&lt;!--- dhKeyAgreement=com.rsa.jsafe.provider.JSA_DHKeyAgree  ---&gt;<br>&lt;cfset storeProvider.remove("KeyAgreement.DiffieHellman")&gt;</p><p>Do your http call, but pack the key agreement if you want:</p><p>&lt;cfset storeProvider.put("KeyAgreement.DiffieHellman", dhKeyAgreement)&gt;</p><p>I figured this out by using the SSLSocketFactory to create a https connection, which provided a bit more details in the stack trace, than when using cfhttp:</p><p>yadayadayada<br>Caused by: java.security.InvalidKeyException: Cannot build a secret key of algorithm TlsPremasterSecret<br>	at com.rsa.jsafe.provider.JS_KeyAgree.engineGenerateSecret(Unknown Source)<br>	at javax.crypto.KeyAgreement.generateSecret(DashoA13*..)<br>	at com.sun.net.ssl.internal.ssl.DHCrypt.getAgreedSecret(<a href="http://disq.us/url?url=http%3A%2F%2FDHCrypt.java%3AoMxHF72E0Wi-wkqKJS4DJ3rr2Fo&amp;cuid=3321886" rel="nofollow noopener" title="DHCrypt.java">DHCrypt.java</a>:166)</p><p>Would be great if the exception thrown from ColdFusion was a bit less generic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728806">8</a> by Jason Dean
		posted on 1/13/2011 at 9:38 PM
		</div>
		<div class="comment_text"><p>After speaking with Adam Lehman (The ColdFusion Product Manager) about this issue, he encouraged me to log a detailed bug. I have done so. Please take the time to go vote on it and provide additional comments.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D85815%3AxIQRVXPNIsg-ey0GHJUcOGURt2w&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=85815">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728804">9</a> by Larry C. Lyons
		posted on 1/13/2011 at 11:19 PM
		</div>
		<div class="comment_text"><p>"At this point I did what all good developers do when stuck (and after Googling) - I punted. I posted on a private list serv and got some great responses."</p><p>What you mean you don't do what most other CF devs do - send you an emai? ;)</p><p>Anyhow thanks for the excellent post, it came in handy today - I was having a similar problem.</p><p>regards,<br>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728791">10</a> by Raymond Camden
		posted on 1/13/2011 at 11:23 PM
		</div>
		<div class="comment_text"><p>I tried emailing me but I took too long to respond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728793">11</a> by Larry C. Lyons
		posted on 1/14/2011 at 12:03 AM
		</div>
		<div class="comment_text"><p>May have something to do with the beard. He probably didn't recognize you...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728789">12</a> by Amir H
		posted on 3/16/2011 at 2:39 AM
		</div>
		<div class="comment_text"><p>Thank you so much for sharing this! I cannot tell you how long I've pulled my hair out over this. I used this solution to fix a broken Basecamp integration.</p><p>Thank you thank you thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728792">13</a> by David Vaccaro
		posted on 3/22/2011 at 7:47 PM
		</div>
		<div class="comment_text"><p>Has anyone heard of any proper fixes for this?<br>Adding the cert to the CF cert store is not the best solution for one of my apps.<br>Our API provider just updated their cert causing our app to break.<br>I am using cfhttp5 as a temp solution. Any experiences with cfhttp5?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728794">14</a> by Jason Dean
		posted on 3/22/2011 at 8:00 PM
		</div>
		<div class="comment_text"><p>David,</p><p>Needing to have the cert in the store is not a "bug", per se. It is a security feature of Java. There will not be a fix for it because a "fix" would work around the security.</p><p>I suppose one way you could fix it is by getting your certificate from a Certificate Authority that already has their root cert in the JVM keystore.</p><p>NOTE: Needing the keystore in the runtime CA certs file is a COMPLETELY different issue fromt he bug that I reported (linked in my comment above) where certain certs do not work even if you have added them to the cacerts file. That issue is a bug and has been reported.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728795">15</a> by David Vaccaro
		posted on 3/22/2011 at 8:17 PM
		</div>
		<div class="comment_text"><p>Jason,</p><p>That makes sense that it is NOT a bug. However still creates the problem I just faced.<br>We have a partner that we use an API with and by renewing their cert...  it breaks our app.<br>Is there a way to check/add using cf that you know of?<br>This would be a great benefit to this app in particular.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728796">16</a> by Jason Dean
		posted on 3/22/2011 at 8:26 PM
		</div>
		<div class="comment_text"><p>What I would encourage you to do is to note the expiration date of that cert and mark your calendar.</p><p>I would also consider seeing if that API provider offers a notification service to those that use it so they can be informed of such changes. If not, scold them and tell them they should offer one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728905">17</a> by Brian
		posted on 3/23/2011 at 4:39 AM
		</div>
		<div class="comment_text"><p>This is most definitely not a CF9 only bug.  I experience this on CF8 both developer and enterprise editions.</p><p>You can vote up this bug in Adobe's tracker: <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D82997%3AdOMWBAKIiG4FsikEwy1_oGFKB5E&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=82997">http://cfbugs.adobe.com/cfb...</a></p><p>And Jason Dean's later, more specific bug:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D85815%3AxIQRVXPNIsg-ey0GHJUcOGURt2w&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=85815">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728906">18</a> by Ellis Wood
		posted on 6/22/2011 at 5:01 PM
		</div>
		<div class="comment_text"><p>Guys, none of this worked for me UNTIL I saved the certificate as a DER-encoded binary file...as per this instruction <a href="http://disq.us/url?url=http%3A%2F%2Fwww.java-samples.com%2Fshowtutorial.php%3Ftutorialid%3D210%3Aj9WcaFvxR5SxvXogguXhjFItkRI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.java-samples.com/showtutorial.php?tutorialid=210">http://www.java-samples.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728912">19</a> by Brian FitzGerald
		posted on 6/22/2011 at 11:04 PM
		</div>
		<div class="comment_text"><p>Ray, thank you for sharing this, but I am getting VERY odd results.  I am literally going crazy as a result of this bug.</p><p>For an entire day I was trying to integrate with the <a href="http://disq.us/url?url=http%3A%2F%2FSpreedly.com%3A7OFh5Qd9nK4mDmR-o3JWO_-qmoU&amp;cuid=3321886" rel="nofollow noopener" title="Spreedly.com">Spreedly.com</a> API, and no matter what I did (importing certificates, etc.) I got the original "PEER could not authenticate" message.</p><p>Then, I finally came across this post, plugged in the workaround (tried both Simon Free's and Pete Freitag's), and it worked great for 1 day exactly.</p><p>Then, the workaround stopped working again.  Then it started again.  Then it stopped again.  I cannot get any consistent results from this thing!  I don't know if my requests are being routed to different servers on Spreedly's end that are somehow configured differently, or what, but I know this is the bug.</p><p>I would just leave the "fix" in all the time, but when I do and it's not required, it breaks the application.  When I take it out, and it is required, it breaks the application.</p><p>I have setup the simplest possible test page here, without workaround: [can't post link, thinks it's spam]</p><p>And with workaround: [can't post link, thinks it's spam]</p><p>On my production server it seems to always work with the workaround, but on my development machine, it swaps back and forth, but now more often than not it works without the workaround.  This stuff is over my head, unfortunately.  Does anyone have any sugggestions?</p><p>Thanks,<br>Brian</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728910">20</a> by Raymond Camden
		posted on 6/23/2011 at 8:44 PM
		</div>
		<div class="comment_text"><p>Not sure what to suggest. As I said - this was all a bit confusing. If the work around causes an issue when it's used all the time, what about wrapping the work around in a try/catch where you ignore the error (if and only if it the 'error cuz i wasnt neeeded' type error).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728914">21</a> by Brian FitzGerald
		posted on 6/23/2011 at 9:40 PM
		</div>
		<div class="comment_text"><p>Thank you for the suggestion, Ray.  No worries, what had me all confused was that it works one way on my production server and another way on my dev machine.  But hey, as long as it works on my production server that's what matters, right?</p><p>Hopefully Adobe will address the bug report to avoid future hassles.  Thanks again for the reply.</p><p>Brian</p><p>fwi, I'm not sure why BlogCFC is flagging my comments as spam, but for some reason it won't let me put a website in the web site field</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728916">22</a> by Raymond Camden
		posted on 6/23/2011 at 9:41 PM
		</div>
		<div class="comment_text"><p>Sorry about the issues you have with your URL. You are the second person to note that. My spam checking is effective - but a bit aggressive. I use Honeypot and Akismet so it's pretty strong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728917">23</a> by jason
		posted on 3/19/2012 at 1:01 PM
		</div>
		<div class="comment_text"><p>i'm trying this method with cfhttp but i'm getting error "variable storeprovider is undefined..." please assist</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728911">24</a> by Raymond Camden
		posted on 3/19/2012 at 3:43 PM
		</div>
		<div class="comment_text"><p>You need to provide more detail. I assume you followed Pete's comment, since his mentions that variable. Perhaps you can use Pastebin to share the code you tried.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728908">25</a> by Jason
		posted on 3/19/2012 at 3:52 PM
		</div>
		<div class="comment_text"><p>argh.. sorry for the repetitive posts</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fraw.php%3Fi%3D66KEfhxY%3AXSySA4mpGRNFEXsg0n3pPRDWk60&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/raw.php?i=66KEfhxY">http://pastebin.com/raw.php...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728919">26</a> by Raymond Camden
		posted on 3/19/2012 at 5:30 PM
		</div>
		<div class="comment_text"><p>(I deleted your mistake comments.)</p><p>Well it looks like the API returning storeprovider returned null instead. I'll have to lean on Pete, but if he can't respond, then I'd suggest looking at the JavaDocs and see if they explain why the method would return null.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728907">27</a> by Marco Betschart
		posted on 3/29/2012 at 2:52 PM
		</div>
		<div class="comment_text"><p>@Jason:<br>I'm struggling here with the same problems and have a hint for you're missing storeProvider.<br>If you have set the java.args Flag "-Dcoldfusion.disablejsafe=true" in your jvm.config then the JsafeJCE Provider its not loaded and therefore will be missing. See the following page in the docs talking about "Disable the FIPS-140-only cryptography setting": <a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Fhtmldocs%2Fhelp.html%3Fcontent%3Dfunctions_e-g_01.html%3AapxbZhGVKSdO-XG0gVaBhxpbt7M&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/htmldocs/help.html?content=functions_e-g_01.html">http://livedocs.adobe.com/c...</a></p><p>I'm working here on my local machine with the ColdFusion 9.0.1 Built-In Webserver and SSL and had to add this flag since a https-request without this setting seems to be possible in combination with the built-in web server :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728921">28</a> by Charlie Atkinson
		posted on 4/30/2012 at 10:21 PM
		</div>
		<div class="comment_text"><p>I'm having a problem with this.<br>Trying to do a CFHTTP to a https URL, but the security certificate is not valid.<br>I keep getting: I/O Exception: peer not authenticated</p><p>I added the lines you mentioned above and it now give me:<br>Variable STOREPROVIDER is undefined. at variables.objSecurity.insertProviderAt(storeProvider, 1)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728913">29</a> by Patrick Heppler
		posted on 6/11/2012 at 12:22 PM
		</div>
		<div class="comment_text"><p>I have the same issue. STOREPROVIDER is undefined.<br>I changed objSecurity.getProvider("JsafeJCE") to objSecurity.getProviders() and dumped it. There is no JsafeJCE. I'm running CF 9,0,1,274733 Standard Edition. Also tried to import my cert into /opt/coldfusion9/runtime/jre/lib/security/cacerts. Still get I/O error. Any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728920">30</a> by Michael
		posted on 6/11/2012 at 6:31 PM
		</div>
		<div class="comment_text"><p>Having looked at the cacerts file with the free gui tool KeyStore Explorer, I can't see any good reason why I shouldn't import the certificates on my Dev system, then copy the cacerts file across to Test and Production.  It would be nice if you didn't have to restart Coldfusion though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728925">31</a> by Aatif
		posted on 7/4/2012 at 3:23 PM
		</div>
		<div class="comment_text"><p>Hello,</p><p>trying to run the given code snippet, but:</p><p>&lt;cfset storeProvider = objSecurity.getProvider("JsafeJCE")/&gt;</p><p>seems to be doing nothing as I get "storeProvider undefined" on trying to add the provider back;</p><p>&lt;cfset objSecurity.insertProviderAt(storeProvider, 1)/&gt;</p><p>Any help or suggestion please ...</p><p>Also, can I work around by attaching the cert/pfx file with my CFHTTP request, if the above method fails on my machine.</p><p>&lt;cfhttp url="https://..." clientsert="path/to/pfx"&gt;</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728924">32</a> by R࿍iger Graf
		posted on 9/26/2012 at 5:32 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>I have to call both <a href="https://disq.us/url?url=https%3A%2F%2Fbuy.itunes.apple.com%3AUOK2Z4oL1kcLohDkue4x49AJhoQ&amp;cuid=3321886" rel="nofollow noopener" title="https://buy.itunes.apple.com">https://buy.itunes.apple.com</a> and <a href="https://disq.us/url?url=https%3A%2F%2Fsandbox.itunes.apple.com%2FverifyReceipt%3A7ZcsRKpxllF5SZ7HQsGYXqp0Lmk&amp;cuid=3321886" rel="nofollow noopener" title="https://sandbox.itunes.apple.com/verifyReceipt">https://sandbox.itunes.appl...</a> via CF 8 with CFHTTP. The first URL is working fine, because I imported the corresponding certificate into the keystore. The second one does not word, but gives this error:</p><p>"Connection failure - I/O Exception: Name in certificate `<a href="http://disq.us/url?url=http%3A%2F%2Fbuy.itunes.apple.com%3Aovwu_HP22_WSBXgIk4X8FfXhfhw&amp;cuid=3321886" rel="nofollow noopener" title="buy.itunes.apple.com">buy.itunes.apple.com</a>' does not match host name `<a href="http://disq.us/url?url=http%3A%2F%2Fsandbox.itunes.apple.com%3AV4YiAHjVfl6JQSmmGsNpBKoazeE&amp;cuid=3321886" rel="nofollow noopener" title="sandbox.itunes.apple.com">sandbox.itunes.apple.com</a>'"</p><p>As the same certificate is being used by Apple for both Subdomains, I have no idea how to overcome this. Is there any possibility to fix this issue?</p><p>Best regards, <br>Rüdiger</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728923">33</a> by Matthew
		posted on 10/27/2012 at 7:21 AM
		</div>
		<div class="comment_text"><p>Anyone know if this issue is still an issue in CF 10?</p><p>Thanks,<br>Matthew</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728918">34</a> by Steve Sommers
		posted on 12/11/2012 at 10:15 PM
		</div>
		<div class="comment_text"><p>I'm having the same problem as Patrick -- basically the opposite of the initial post. I have a development version of CF9 on my desktop. I imported the certs using keytool. Everything works great. I do the same on the "closer to production" server and I get the peer not authenticated issue. Both are patched to the same version but the failed server is running CF standard.</p><p>Patrick, did you ever solve your issue. Or does anyone have further ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728922">35</a> by Steve Sommers
		posted on 12/11/2012 at 10:50 PM
		</div>
		<div class="comment_text"><p>I found my issue. As per usual, a site or two after a made this post had the answer.</p><p>For my issue the fix was simple. Look at the Setting Summary page within the ColdFusion administrator and verify where the JRE home directory is. In my case, our production servers are not using the default CF9 JRE. Once I found this out, I used the keytool to import my certs, restarted CF, and presto - success.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728909">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728909">36</a> by Aaron Longnion
		posted on 2/7/2013 at 4:28 AM
		</div>
		<div class="comment_text"><p>@Pete - your solution on your comment here worked like a charm on CF 8 Developer edition!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2011%2F1%2F12%2FDiagnosing-a-CFHTTP-issue--peer-not-authenticated%23cFF97E658-A2F7-5B15-29A4B13F09FF5F30%3AnsMrL19eOoPHFusOrfTWi4XwbK0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2011/1/12/Diagnosing-a-CFHTTP-issue--peer-not-authenticated#cFF97E658-A2F7-5B15-29A4B13F09FF5F30">http://www.raymondcamden.co...</a></p><p>Thanks, and see you around!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728926">37</a> by Jenny Mostert
		posted on 2/21/2013 at 8:18 PM
		</div>
		<div class="comment_text"><p>I added -Dcoldfusion.disablejsafe=true to my JVM Arguments, and no longer needed the other code provided. The statuscode returned as OK. Thanks for all of the help guys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728915">38</a> by Nick S.
		posted on 2/22/2013 at 7:59 PM
		</div>
		<div class="comment_text"><p>I've also found this error can occur from a wrong server date / time. In our case, the date was off by 2.5 years after a hardware swap. The date didn't get set b/c of strict PCI controls blocking outbound access.</p><p>Once we set the proper date and time, it started working again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728930">39</a> by Victor
		posted on 4/30/2013 at 12:48 PM
		</div>
		<div class="comment_text"><p>Thanks for this article. I added -Dcoldfusion.disablejsafe=true to JVM arguments but it didn't help. Then I opened  C:\CF9\runtime\jre\lib\security\<a href="http://disq.us/url?url=http%3A%2F%2Fjava.security%3AnJLtAPDoZvjQwcLw3SelzxMUNI0&amp;cuid=3321886" rel="nofollow noopener" title="java.security">java.security</a> and changed ssl.TrustManagerFactory.algorithm=PKIX to ssl.TrustManagerFactory.algorithm=SunX509<br>Now it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728932">40</a> by Giancarlo Gomez
		posted on 12/19/2013 at 7:36 PM
		</div>
		<div class="comment_text"><p>This started happening on my CF10 production servers a few days ago with Stripe connectivity which was working without any issue previously. I could not replicate on any of my development servers, so I looked a little deeper to see what was different on my CF installations other than platform and on the production server my JVM was at 1.7.0_17 while my development servers are at 1.7.0_15 and 1.6.0_29 and both worked without a problem. I updated my production server which is now at 1.7.0_45 and it started working again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728934">41</a> by Ben Mueller
		posted on 1/20/2014 at 8:14 PM
		</div>
		<div class="comment_text"><p>Figured I'd add my two cents.</p><p>A week ago, this started happening with the Citrix API to me...and apparently to other CF installations as well, which suggests *something* changed on the Citrix end, even though they didn't know of anything...</p><p>Anyway, the interesting wrinkle for me is that it broke not only on my local Developer Edition, but also my CF9 Standard Edition, which runs against the detail that this problem only shows up on Developer and Enterprise editions.  I cribbed my solution from here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fnaveenchhabra.wordpress.com%2F2010%2F10%2F18%2Ftrusting-certificate-in-coldfusion-using-keytool-utility%2F%3ASQG_7TSFcS_2vks-mA_D318-CJA&amp;cuid=3321886" rel="nofollow noopener" title="http://naveenchhabra.wordpress.com/2010/10/18/trusting-certificate-in-coldfusion-using-keytool-utility/">http://naveenchhabra.wordpr...</a></p><p>...which worked on both the Developer and Standard Editions.  One change was that I had Citrix give the certificate file to me, which came to me as a .crt file.  The instructions state that the file extension is .cer.  I decided to leave it as .crt, and that appeared to work.</p><p>I did *not* have to put in any of the code Raymond lists above as coming from Simon Free.  I tried that initially, without doing the command line stuff, and that failed.  After installing the certificate in CF's keystore, there was no need for the code from Simon.</p><p>So, I post this in the hopes that it might help others, but also because it's a little different from what others have seen, which may mean the problem has morphed, or it may mean that the root cause is a little bit different, even though the initial error message is the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728935">42</a> by Lee Parker
		posted on 2/18/2014 at 6:54 PM
		</div>
		<div class="comment_text"><p>Thanks for this thread.  We had the same issue.  We started off by adding the cert (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.talkingtree.com%2Fblog%2Findex.cfm%2F2004%2F7%2F1%2Fkeytool%29%3AIgv1OCWxQXrQgizt1JTPQrIzl9Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.talkingtree.com/blog/index.cfm/2004/7/1/keytool)">http://www.talkingtree.com/...</a>, but that didn't seem to help.  Then I noticed Giancarlo Gomez's comment above about updating Java.  That did the trick.  Thanks Giancarlo - this helped us out tremendously.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728936">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728936">43</a> by Nando Breiter
		posted on 11/6/2014 at 10:29 PM
		</div>
		<div class="comment_text"><p>Thanks for posting this Ray. In my case, I've been getting a "Connection Failure: Status code unavailable" message in scheduler.log on cfhttp calls to the same server after installing SSL certs. I've tried, it seems, the whole gamut of suggestions I've found. Upgrading the JVM solved another https issue I was having sending emails via Amazon's SMS service (after they dropped support for SSLv3 in response to Poodle), but it a combination of JVM upgrade and installing certs to the java keystore didn't do the trick for me. Adding the following to onApplicationStart() worked tho'!</p><p>if ( not structKeyExists(application, "sslfix") ) {<br>	var abjSecurity = createObject("java", "java.security.Security");<br>	abjSecurity.removeProvider("JsafeJCE");<br>	application.sslfix = true;<br>}</p><p>(Source <a href="http://disq.us/url?url=http%3A%2F%2Fforum.hostek.com%2Fshowthread.php%3F709-Fix-for-CFHTTP-Connection-Failures-over-HTTPS%29%3AwjhZ56HMyZEHbVbqW6kkP_UQaok&amp;cuid=3321886" rel="nofollow noopener" title="http://forum.hostek.com/showthread.php?709-Fix-for-CFHTTP-Connection-Failures-over-HTTPS)">http://forum.hostek.com/sho...</a></p><p>The strange thing about this code snippet is it seems to work at server level, across all applications. Since my (vital) cfhttp calls started working again, I've left it as is, but the if() block seems a little strange to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1723796537">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1723796537">44</a> by Nic Raboy
		posted on 12/3/2014 at 4:18 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I hate to dig up a dinosaur here, but we are currently running ColdFusion 9 and are trying to update our other servers to protect from the POODLE SSL vulnerability.</p><p>A colleague of mine said that using what you mentioned in your write-up should bypass the problem that we're experiencing in ColdFusion.</p><p>However, I am hesitant because I feel like removing JSafeJCE will only disable the security rather than resolve it.  Am I correct in this sense?  I want to make sure that removing the provider on a specific basis won't open us up to further vulnerabilities.</p><p>Please let me know if this makes sense.</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1725380495">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1725380495">45</a> (In reply to <a href="#c_1723796537">#44</a>) by Raymond Camden
		posted on 12/4/2014 at 2:14 PM
		</div>
		<div class="comment_text"><p>No worries on digging it up - but I honestly have no idea. :\ Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1725416963">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1725416963">46</a> (In reply to <a href="#c_1725380495">#45</a>) by Nic Raboy
		posted on 12/4/2014 at 2:40 PM
		</div>
		<div class="comment_text"><p>Alright thanks anyways :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1743461301">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1743461301">47</a> (In reply to <a href="#c_1725380495">#45</a>) by Nic Raboy
		posted on 12/15/2014 at 5:20 PM
		</div>
		<div class="comment_text"><p>I actually managed to resolve this issue by upgrading the JRE from 6 to 7.  This became available starting in Hotfix 3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1782747702">
	<div>
		<img src="https://disqus.com/api/users/avatars/pixelwiz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1782747702">48</a> by pixelwiz
		posted on 1/9/2015 at 5:04 PM
		</div>
		<div class="comment_text"><p>What if you ran the first 3 lines of the fix and removed the provider, but did not run the 4th line to put it back.  Is it now permanently gone?  Is there any way to restore that provide once it's removed but after the original call?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1850001508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1850001508">49</a> (In reply to <a href="#c_1782747702">#48</a>) by perm
		posted on 2/12/2015 at 5:04 PM
		</div>
		<div class="comment_text"><p>Restarting CF worked for me on CF 9 dev</p></div>
	</div>
</div>
		
<div class="comment" id="c_1913936647">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_MUsI3EPfHH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1913936647">50</a> by Pedro Morin
		posted on 3/18/2015 at 3:00 PM
		</div>
		<div class="comment_text"><p>The "hack" worked for me, just put the 3 lines of code before my cfhttp call and viola, it started working again, THANKS!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2490296349">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_0VGWWLzB0G.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2490296349">51</a> by Charles Robertson
		posted on 2/1/2016 at 9:55 PM
		</div>
		<div class="comment_text"><p>Just to say Ray, that the header Authorization part is correct, but the Disqus text editor scrambles it a little...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2490306815">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2490306815">52</a> (In reply to <a href="#c_2490288327">#0</a>) by Raymond Camden
		posted on 2/1/2016 at 10:02 PM
		</div>
		<div class="comment_text"><p>Afaik that was the idea. Honestly though I haven't thought of this in the past 5 years. Sorry. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_2490469416">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2490469416">53</a> (In reply to <a href="#c_2490306815">#52</a>) by Charles Robertson
		posted on 2/1/2016 at 11:55 PM
		</div>
		<div class="comment_text"><p>OK. This did not work for me. I will try restarting CF10, and then I will turn off the firewall. Desperate measures but I have no idea why this issue suddenly started out of the blue...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2491416243">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2491416243">54</a> by Charles Robertson
		posted on 2/2/2016 at 10:06 AM
		</div>
		<div class="comment_text"><p>Just out of interest why does this CFHTTP call need to use a security provider in the first place. Is it to do with SSL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2491916470">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2491916470">55</a> (In reply to <a href="#c_2491416243">#54</a>) by Raymond Camden
		posted on 2/2/2016 at 1:56 PM
		</div>
		<div class="comment_text"><p>As far as I know. This area of Java is a bit fuzzy for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2495786463">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2495786463">56</a> by Charles Robertson
		posted on 2/4/2016 at 3:28 PM
		</div>
		<div class="comment_text"><p>Just to let you know Ray. I have an answer but not a solution.</p><p>First of all, all my certificates in cacerts are up-to-date.</p><p>PayPal's API security updates to iits certificate &amp; cipher requirements, require that Railo/Lucee use the JSafeJCE cipher suite. ACF11 has an updated JsafeJCE suite and so my API operations now work locally again, after I installed CF11. I use Lucee 4.5 on my production server, and now require an update to the security provider list. I have put in a request. I await with baited breath. Until then, my production PayPal API operations are dead...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2495823892">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2495823892">57</a> (In reply to <a href="#c_2495786463">#56</a>) by Raymond Camden
		posted on 2/4/2016 at 3:45 PM
		</div>
		<div class="comment_text"><p>Sorry to hear that - but I hope it works out for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2495850229">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2495850229">58</a> by Charles Robertson
		posted on 2/4/2016 at 3:55 PM
		</div>
		<div class="comment_text"><p>Thanks Ray...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2497835324">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2497835324">59</a> by Charles Robertson
		posted on 2/5/2016 at 4:41 PM
		</div>
		<div class="comment_text"><p>And finally after a week of blood, sweat &amp; tears. Locally, removed CF10 and installed CF11. Issue solved. Remotely, removed Railo 4.2 and installed Lucee 4.5. Issue solved. Just thought I would let you know, in case you ever do any work with the Paypal API...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2497882461">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2497882461">60</a> (In reply to <a href="#c_2497835324">#59</a>) by Raymond Camden
		posted on 2/5/2016 at 5:07 PM
		</div>
		<div class="comment_text"><p>Good to hear!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2497900953">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2497900953">61</a> by Charles Robertson
		posted on 2/5/2016 at 5:17 PM
		</div>
		<div class="comment_text"><p>Cheers Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3385465665">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HBrrXaEfym.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3385465665">62</a> by Darren Cook
		posted on 6/25/2017 at 9:43 PM
		</div>
		<div class="comment_text"><p>I am fighting this issue and quick application of the various techniques isn't working so I am starting at the very top, with a fine-tooth comb.</p><p>You wrote:<br>"This tech note is the one you want: How to import certificates into certificate stores (ColdFusion). So I tried that - on multiple machines - but it never actually worked."<br>I discovered that above article has a bug in the example code:<br>keytool -list -v -keystore JAVA_HOME\jre\lib\security\cacert -alias myServer-cert -storepass changeit<br>"cacert" should be "cacerts".  With this change, the cert was recognized and the Adobe tech note works. I've commented on it to let them know as well, hopefully they'll change it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3385741634">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HBrrXaEfym.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3385741634">63</a> (In reply to <a href="#c_3385465665">#62</a>) by Darren Cook
		posted on 6/26/2017 at 2:47 AM
		</div>
		<div class="comment_text"><p>Of course, I have to do this with two different URLs, and only the first one worked, the second is giving the same error even after adding to the cert store. Back to the drawing board....</p></div>
	</div>
</div>
		
<div class="comment" id="c_3386225049">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3386225049">64</a> (In reply to <a href="#c_3385741634">#63</a>) by Raymond Camden
		posted on 6/26/2017 at 1:17 PM
		</div>
		<div class="comment_text"><p>Good luck!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3648353420">
	<div>
		<img src="https://disqus.com/api/users/avatars/jonhayes.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3648353420">65</a> by Jon Hayes
		posted on 12/5/2017 at 9:55 PM
		</div>
		<div class="comment_text"><p>The Api I was connecting to does not support TLS 1.0.  While Java 1.7 states that it supports TLS 1.1 and 1.2,  ColdFusion 10 requires Java 1.8 to connect using TLS 1.1 or 1.2  -   it's a combination of the remote api service and the jvm. <br>Patch your jvm's now, as june 30 2018 is around the corner...</p></div>
	</div>
</div>
		