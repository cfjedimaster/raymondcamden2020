
<div class="comment" id="c_1713717046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717046">1</a> by Shaun Mccran
		posted on 7/17/2009 at 7:57 PM
		</div>
		<div class="comment_text"><p>Instead of encrypting it you could use the compile command in CF server. That is an irreversible compilation of your source code.</p><p>Just remember to do it on a separate copy of your code base, as you cannot undo it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717048">2</a> by Raymond Camden
		posted on 7/17/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>You can decompile though. You won't get CFML back, but you will get the Java back, and that could be checked for stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717049">3</a> by Jeffry Houser
		posted on 7/17/2009 at 8:17 PM
		</div>
		<div class="comment_text"><p>From a business perspective, I find a lot of misconceptions with the question.</p><p> How you implement a licensing scheme depends greatly on your business model.  What is your business model?  Who are your customers?  How will you make money? How you will support your customers?  How will you support prospects?</p><p> You only answer one of these question in the quote Ray used: you plan to make money by selling software.  And I'd sum up your question as  "Where can I get DRM for ColdFusion?"</p><p> Your licensing scheme, and the type of DRM that enforces that scheme, is going to depend greatly on your business model; something we don't know about yet.</p><p> If you're selling to enterprise customers with a full support staff you need very different resources [and DRM restrictions] than if you're selling to programmer consultants.</p><p> Thinking long-term, is DRM really the way to go?  It might be.  It might not; I'm not sure.  Customers have proven time and time again in the music and movie and software industry that they don't like DRM; and will find ways to circumvent it.  Can you implement it in a 'casual' enough way that it protects your IP while also not inconveniencing users?</p><p> I don't know; I struggle with that issue myself for Flextras.  Flextras builds Interface Flex components for Flex Developers; and we easily spent 6 months working on the business model; which does include a form of DRM.</p><p> With Flextras any registered user can get no cost developer editions of our components.  If served anywhere but localhost, this edition is watermarked.  But, it is fully functional and the prospect can use it to prove to themselves, their boss, their clients, or whomever that our component works in the application.</p><p> When it comes time to deploy, they can come to our site and purchase a single domain license.  This is a serial number that they plug in that will remove the watermark when the application (a SWF File) is served off the domain.</p><p> Our unlimited deployment edition has no watermarking code and includes the full source.</p><p> Legal Agreements prevent the source from being distributed outside of the application.</p><p> Could I implement this business model if I were building a ColdFusion app instead of a Flex app?  I don't know.  Most watermarking style solutions I can envision can easily be circumvented if you have the source.</p><p> Given consumer's reluctance to DRM, is this business model a good long term strategy?  Again, I don't fully know.</p><p> If I were planning to build and sell a ColdFusion application I would probably look at business models where the application is easily available and I provide premium service on top of that; such as support.  The Mura CMS has a business model like this; and I understand business is doing great.  I spent quite some time chatting with them after the User Group meeting earlier this week--they've been making rounds in the northeast.</p><p> It is easy to find other samples of successful businesses doing similar things around Open Source.  Flex is one sample; MySQL is another.  The FarCry framework / CMS is another.</p><p> I guess in summary, before you start building a commercial app think very carefully about the business around it.  If your business fails, it will probably have nothing to do with technology choices or ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717047">4</a> by Shaun Mccran
		posted on 7/17/2009 at 8:19 PM
		</div>
		<div class="comment_text"><p>Does it return valid Java then, if you decompile? I'd never examined it that closely, just noted that it doesn't return useable cfml.</p><p>For a project along these lines I was involved in the company was charging per license, as everything was behind a login, so you could monitor active accounts over ‘N’ time period. So if 35 people logged in that month, then you bill for the correct amount.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717050">5</a> by Raymond Camden
		posted on 7/17/2009 at 8:22 PM
		</div>
		<div class="comment_text"><p>@Shaun: I'm not sure if it is _valid_ java, but if you had something secret in there, like an encryption key, it might be visible. Now I'm definitely going into unknown territory, so take what I say with a grain of salt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717051">6</a> by Sean Corfield
		posted on 7/17/2009 at 10:15 PM
		</div>
		<div class="comment_text"><p>One thing that Kevin didn't ask that ought to be clarified: is he planning to sell the application as a "standalone" system or as something to install on an existing CFML server?</p><p>If the former, he needs to consider the licensing of the server itself and either OEM ColdFusion from Adobe or use one of the free open source servers (Railo, OpenBD).</p><p>If he wants to protect his source code, I'd definitely recommend distributing compiled source (supported in one form or another by all three engines - as plain compiled source on ColdFusion and as archives on Railo and OpenBD). And, yes, if you decompile Java class files any encryption key is going to be exposed so you will have to consider how that is used in licensing.</p><p>I wrote a network licensing tool back in the early 90's and it essentially worked by activating the software once, via the network, using a serial number from which it created an encrypted local key file by making a remote call to the host server (so the encryption was handled on a separate server to the actually licensed software - ensuring decryption of the distributed software and license key file does not yield anything useful). The activation process used a "fingerprint" of the local server as part of the encryption (so you couldn't copy the key file to another server) and it also stored that on the host server (to prevent multiple activations from other local servers).</p><p>How much effort you put in depends on how much - or how little - you trust your users and how much money you're charging them (we were in fairly high-end territory at $6-9k per seat so it was worth our while to be pretty thorough).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717056">7</a> by Gary Kraeger
		posted on 7/18/2009 at 4:31 AM
		</div>
		<div class="comment_text"><p>Does anyone know how this is licensed by Adobe, I understand you need Enterprise, is a copy of CF Enterprise required for each deployment, if so that could add a large cost onto your application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717054">8</a> by Kevin
		posted on 7/18/2009 at 4:08 PM
		</div>
		<div class="comment_text"><p>&lt;&lt;&lt;One thing that Kevin didn't ask that ought to be clarified: is he planning to sell the application as a "standalone" system or as something to install on an existing CFML server?&gt;&gt;&gt;</p><p>It would be installed on an existing CFML server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717052">9</a> by Gary Kraeger
		posted on 7/18/2009 at 5:15 PM
		</div>
		<div class="comment_text"><p>For those that wouldn't be installing on an existing CF server this information would be helpful, if anyone knows the answer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717055">10</a> by Steve Caldwell
		posted on 7/21/2009 at 9:58 PM
		</div>
		<div class="comment_text"><p>Depending on the type of app we're talking about, you could just host the app on your own Enterprise server, put it behind a login and just get a yearly or monthly fee for use.</p><p>Everything is going to RIA's anyway. I mean, Google is launching an OS that is web based. I wouldn't be surprised if Microsoft follows with its own "Live" (or Bing ?) OS.</p><p>Cloud computing and technologies like AIR are the 'big change' that is going to take place in the next decade. I need to learn Flex!</p></div>
	</div>
</div>
		