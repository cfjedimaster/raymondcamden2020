
<div class="comment" id="c_1713727713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727713">1</a> by Rick O
		posted on 11/18/2010 at 8:21 PM
		</div>
		<div class="comment_text"><p>I know this isn't all that helpful, but the security practices really are the exact same.  It may seem like mobile practices are more strict (like don't assume the device or connection are secure), but those practices apply to the desktop, too.  It only seems like there's a difference because it's easy to get lazy and forget about things like open WiFi or shared workstations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727729">2</a> by Ben Nadel
		posted on 11/18/2010 at 8:21 PM
		</div>
		<div class="comment_text"><p>As we move towards mobile, I think we're also going to be moving towards "rich" clients in which the servers acts more like an API / webservice and less so a server of HTML. While there is no fundamental difference between requesting data vs. requesting HTML, Jason Dean makes a great point in his API security talks - we are increasing our "attack surface". Things that my have previously been more encapsulated might now be accidentally exposed in ways that are not secure.</p><p>While I cannot speak to the actual packaging and encrypting of *installed* apps, I would definitely check out Jason's API preso for general thoughts on API security.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727720">3</a> by Raymond Camden
		posted on 11/18/2010 at 8:25 PM
		</div>
		<div class="comment_text"><p>Re: Ben</p><p>I just searched UGTV for Dean, and while not 100% security - there are good resources here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.carehart.org%2Fugtv%2Flist.cfm%3Fsearch%3Ddean%3AuAtWbSVhw_4SMaq2PUc6qqXNhlY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.carehart.org/ugtv/list.cfm?search=dean">http://www.carehart.org/ugt...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727728">4</a> by Ben Nadel
		posted on 11/18/2010 at 8:26 PM
		</div>
		<div class="comment_text"><p>Yeah, I think the one I was talking about was the Practical AJAX Security.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727723">5</a> by Phil Duba
		posted on 11/18/2010 at 8:30 PM
		</div>
		<div class="comment_text"><p>The other thing that we've found in regards to mobile platforms and security is the ability to lock down a phone is severely lacking outside of the Blackberry platform. What I mean by this is that in my current place of employment we deal with sensitive patient information. Doctors want to be able to use iPhones or Droids for business purposes. Since neither of these have security around the access of the phone and/or its data, there is too great of a risk to allow these to handle "business" transactions/data. Until that changes, I really don't see the mobile platform expanding in the business world, consumers on the other hand don't seem to mind the lack of security around their phone and data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727732">6</a> by Dave Ferguson
		posted on 11/18/2010 at 8:30 PM
		</div>
		<div class="comment_text"><p>One thing that I always consider is that just because I am writing it for mobile does not mean it will be ran there.  A lot of mobile designed apps can be ran in a browser on the desktop.  For example the mobile version of BlogCFC runs just fine in a browser.</p><p>Once in the browser you have many more tools at your disposal to deconstruct a running application and do bad things to it.  Tools like FireBug and Charles allow you to deconstruct a running application and do very bad things to it.  So, just like any browser based application, you have to consider that any data coming from the client is bad until proven good.</p><p>Anyone building an app should be concerned about security at some level.  Application security should not be an afterthought or a side note.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727722">7</a> by Jason Dean
		posted on 11/18/2010 at 8:43 PM
		</div>
		<div class="comment_text"><p>So it is my opinion that secure mobile application development is going to have most of the same guidelines as:</p><p>Secure Web Development + Secure Desktop Development</p><p>Essentially, with mobile development, just as with most desktop AIR development, you are combining local/desktop development with a web application.</p><p>Of course there are exceptions where you might be doing one or the other, but most apps will use some aspects of each.</p><p>The thing that I think a lot of people forget (at least at first) is that when an app is installed on an end users machine (be it a computer or a phone) you are sending the source code of your app to the end user and giving them control over it and compiled or not, that source is viewable.</p><p>An app can be decompiled and the source can be made viewable.  I am not sure what the "copy protection" was that was offered to Ray when he submitted his app. I think it may have been more of a rights management thing than a security feature.</p><p>Anyway, I could go on ALL day about this stuff.  Instead I will plug two of my presentations.</p><p>As Ben said, in my Ajax Security Preso I discuss some of the security concerns that would exist in a mobile scenario. That is linked above.</p><p>I also have an AIR Security presentation that I will be doing on the ColdFusion Meetup in early december. This will address some of the other AIR-specific concerns that will also be concerns in mobile development of any type.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727730">8</a> by Raymond Camden
		posted on 11/18/2010 at 8:45 PM
		</div>
		<div class="comment_text"><p>re: copy protection<br>It was an option when I uploaded my AIR app. The next time I do so I'll turn it on and see what changes. It may be entirely UI specific (ie, you can't do anything the normal way) with nothing done at the OS level (so if you root into the machine you can still get it).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727725">9</a> by Jason Dean
		posted on 11/18/2010 at 8:51 PM
		</div>
		<div class="comment_text"><p>@Phil,</p><p>I am confused by what you mean about iPhone and Android not having security around access.  They can both be password locked. And apps can even require that.</p><p>For example, with ActiveSync, we can require that any iPhone or Android phone have PIN security enabled before a user is allowed to access the exchange server via the phone.</p><p>I am not sure to what extent normal app developers have to this type of security and control, but it is, at least, possible.</p><p>Also, with features like Encrypted SQLite DBs and the encrypted local store, we can also control access to data.</p><p>Is there something more to what you are talking about?  I guess I don't know what BlackBerry is doing that the others are not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727727">10</a> by anon
		posted on 11/18/2010 at 10:33 PM
		</div>
		<div class="comment_text"><p>You might pick up a 2600 if you can find one near you.  There's all kinds of info on mobile exploits in those things... probably enough to make you cancel your phone service. :)</p><p>But on a different note, I was recently at an Android user group in which a Security professional gave a talk about the state of mobile security.  It sounds pretty grim, honestly.  The level of security on phones these days is comparable to the pre-antivirus days of desktops, with the difference being that phones are pretty much "always online".</p><p>Scary. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727724">11</a> by MikeG
		posted on 11/18/2010 at 11:15 PM
		</div>
		<div class="comment_text"><p>You don't just have to worry about the device security either; you have to worry about data in transit.  While the literature says that cell phone transmissions are encrypted (not wireless though as that will depend on the security of the device you connect through), take a read at this interesting and scary article.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbit.ly%2FaFM88e%3Ae2IWQqHYUKun6AJlcCAD7-jSCNk&amp;cuid=3321886" rel="nofollow noopener" title="http://bit.ly/aFM88e">http://bit.ly/aFM88e</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727717">12</a> by Joe Rinehart
		posted on 11/19/2010 at 5:05 AM
		</div>
		<div class="comment_text"><p>One thing to consider is that we often store credentials on the device for mobile applications.  Users hate having to log in each time.</p><p>The same EncryptedLocalStore we're used to using for Adobe AIR is -not- available on mobile platforms, so it's important to cook up some form of encryption.  I recommend looking into the AS3 Crypto library at <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fas3crypto%2F%3A3lcrZ3QSf0Hzpys8PqBsILcl7EY&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/as3crypto/">http://code.google.com/p/as...</a> if you need to hold anything locally.  If anyone has better ideas, I'd love to know what they are!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727716">13</a> by Raymond Camden
		posted on 11/19/2010 at 8:03 PM
		</div>
		<div class="comment_text"><p>Joe - I had no idea AIR/Mobile didn't support ELS. Do you happen to know why? I thought the only real limitations were some of the UI controls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727718">14</a> by Jason Dean
		posted on 11/21/2010 at 9:34 AM
		</div>
		<div class="comment_text"><p>@Joe,  that is something I have been wondering about.  It makes sense, but I was hoping that Adobe would find a way to make it work.</p><p>@Ray, the ELS in AIR is actually only an API to the Operating Systems local encrypted storage. So on a Mac it uses KeyChain, on Windows it uses DPAPI (Data Protection API) and on Linux is uses either KWallet (KDE) or KeyRing (Gnome).</p><p>If Android (or PlayBook, or any mobile platform) does not have such a store, then AIR cannot use it :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727719">15</a> by Raymond Camden
		posted on 11/22/2010 at 4:29 AM
		</div>
		<div class="comment_text"><p>@Jason: Thanks - I didn't know that!</p></div>
	</div>
</div>
		