
<div class="comment" id="c_1713725233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725233">1</a> by Robert Gatti
		posted on 7/15/2010 at 8:33 PM
		</div>
		<div class="comment_text"><p>Can you create a mapping to an S3 storage like you can in Railo?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725232">2</a> by Raymond Camden
		posted on 7/15/2010 at 8:41 PM
		</div>
		<div class="comment_text"><p>Yes. I added this to my Application.cfc:</p><p>this.mappings["/testfoo"] = "<a href="http://disq.us/url?url=s3%3A%2F%2Fdemos3.coldfusionjedi.com%3A1DTvZHWrSeCHKlr1ICg-R30BwYU&amp;cuid=3321886" rel="nofollow noopener" title="s3://demos3.coldfusionjedi.com">s3://demos3.coldfusionjedi.com</a>";</p><p>I then copied a CFM over to it and did:</p><p>&lt;cfinclude template="/testfoo/test.cfm"&gt;</p><p>and it worked fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725234">3</a> by Steven Erat
		posted on 7/15/2010 at 10:00 PM
		</div>
		<div class="comment_text"><p>As you may remember, one of the things that concerned me was the security of the authentication credentials since you can generate the s3 path in the form of s3://myID:myKey@myBucket/.  Later I learned that this file path is not used directly as a kind of net protocol but is instead transformed into an HTTPS url that interacts with the Amazon S3 REST API, so I was relieved to know that the credentials are in fact secure, as was confirmed by Rupesh Kumar of the CF Engineering team on your June blog post on the topic.</p><p>Rupesh also shared that *all* s3 operations occur over HTTPS.  While that's great for security, for high volume binary file transfers that could be a bit of a performance drag. So it is not possible through the built-in s3 support in CF 9.01 to switch to HTTP for faster, non-ssl transfers.</p><p>When reviewing Barney's s3 CFC I noticed that in his s3url function he provides the option to use either HTTP or HTTPS, so that's an advantage over the s3 support offered by CF 9.01 if performance is a concern.  Even so, Barney's code is an excellent demonstration of how to maintain secure credentials by utilizing a signature generated with your Secret Access Key to generate a Hash Message Authentication Code (HMAC) as fully explained here: <a href="http://disq.us/url?url=http%3A%2F%2Fbit.ly%2F8ZeqTm%3AtZLVjrvKuNBV5uyreEh5wrT-bTs&amp;cuid=3321886" rel="nofollow noopener" title="http://bit.ly/8ZeqTm">http://bit.ly/8ZeqTm</a></p><p>So the main point of my comment is to share what I learned about securing credentials with s3 in ColdFusion and to point out that Barney's code may be a more performant alternative.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725237">4</a> by Jeff
		posted on 7/16/2010 at 4:20 AM
		</div>
		<div class="comment_text"><p>Reminder for the Timed links to secure Files :).  Great overview though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725239">5</a> by Raymond Camden
		posted on 7/16/2010 at 4:45 AM
		</div>
		<div class="comment_text"><p>Jeff, I did mention it in the bullet points at the end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725236">6</a> by Jay
		posted on 7/16/2010 at 2:48 PM
		</div>
		<div class="comment_text"><p>Fantastic Ray, awesome article, very excited to try this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725235">7</a> by todd sharp
		posted on 7/16/2010 at 11:12 PM
		</div>
		<div class="comment_text"><p>Hey raymond this is uber cool stuff!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725238">8</a> by Aaron Neff
		posted on 7/21/2010 at 11:22 AM
		</div>
		<div class="comment_text"><p>Just wanted to add my thanks, Ray, for taking the time to put together this helpful article. Very good.</p><p>Thanks!,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725242">9</a> by Rupesh Kumar
		posted on 7/22/2010 at 10:26 AM
		</div>
		<div class="comment_text"><p>Actually there *is* a way to choose whether you want to perform all the operation over https but unfortunately that is a global setting and not an application or operation specific setting.<br>This setting is a Java system property which is "s3service.https-only", which if set to false (default is true), will do the communication over http and not over https.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725241">10</a> by Raymond Camden
		posted on 7/22/2010 at 4:02 PM
		</div>
		<div class="comment_text"><p>Rupesh, is this documented?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725243">11</a> by Steven Erat
		posted on 7/22/2010 at 7:24 PM
		</div>
		<div class="comment_text"><p>Thanks for the update Rupesh.</p><p>I haven't seen CF specific docs on this, but have found the following docs regarding the JetS3t Toolkit:<br><a href="http://disq.us/url?url=http%3A%2F%2Fjets3t.s3.amazonaws.com%2Ftoolkit%2Fconfiguration.html%3AN3DFx_M2YxygWeB0Pqm33Enf5u8&amp;cuid=3321886" rel="nofollow noopener" title="http://jets3t.s3.amazonaws.com/toolkit/configuration.html">http://jets3t.s3.amazonaws....</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fjets3t.s3.amazonaws.com%2Fapi%2Forg%2Fjets3t%2Fservice%2FS3Service.html%3AALnUD22-kaCEN_VJbibZd_cl78I&amp;cuid=3321886" rel="nofollow noopener" title="http://jets3t.s3.amazonaws.com/api/org/jets3t/service/S3Service.html">http://jets3t.s3.amazonaws....</a></p><p>It appears to be integrated into CF:<br>$ pwd<br>/opt/ColdFusion9/lib<br>$ ls jets*<br>jets3t-0.7.3.jar</p><p>I'm interested to find out if that system property is configurable at runtime.  An advantage of Barney's code is that the option of http/https can selected at runtime.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725244">12</a> by Steven Erat
		posted on 7/22/2010 at 7:30 PM
		</div>
		<div class="comment_text"><p>Various thoughts are still coming to me as I think about s3 uses... It occurred to me that s3 would be a solution for a limitation of running ColdFusion on the <a href="http://disq.us/url?url=http%3A%2F%2FStax.net%3AO0hCyEPGRtmN71Tdx9-o-dvjQc8&amp;cuid=3321886" rel="nofollow noopener" title="Stax.net">Stax.net</a> cloud environment.  With Stax, the problem exists that any files written to disk may not be there later if your cloud instance moves around, so writing to s3 would allow your files to persist while your server roams in the cloud.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725245">13</a> by Saul
		posted on 7/31/2010 at 3:32 PM
		</div>
		<div class="comment_text"><p>I'm trying to use S3 as an of site file location for a database backup. On my home dev machine this works just fine, I just do a dump out from mySQL and then &lt;cffile action = "copy"<br>source = "#backupPath##filename#" <br>destination = "s3://myID:myKey@myBucket/#filename#"&gt; and all is good. However, the production server at work is behind a router/firewall controlled/managed by a 3rd party. I read somewhere that S3 needs port 843 open to work (and then lost that reference) but does the CF built in function connect to a particular IP at amazon so I could ask for that port open for just that IP?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725246">14</a> by Steven Erat
		posted on 7/31/2010 at 4:42 PM
		</div>
		<div class="comment_text"><p>@Saul: I did a network packet trace to watch all connections between my local CF server and the remote Amazon S3 server.  I found that all connections were over the default HTTPS port 443.</p><p>I also found that the Amazon IP would vary depending on which bucket you are connecting to.  I don't know how reliable or constant the IP for your host would remain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725309">15</a> by Steven Erat
		posted on 7/31/2010 at 4:47 PM
		</div>
		<div class="comment_text"><p>Researching port 843, I just learned that the Amazon s3 Console is what requires it.  That is an optional Flash based web interface to manage your bucket.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Faws.amazon.com%2Fconsole%2F%3AZ3N-hAoJhnXsEUbthN80Z6tl51I&amp;cuid=3321886" rel="nofollow noopener" title="http://aws.amazon.com/console/">http://aws.amazon.com/console/</a></p><p> Q: Are there any requirements for use of the Amazon S3 Console?<br>    Yes, the Amazon S3 Console requires that you have a 10.x version of Adobe Flash and access to TCP port 843. These requirements do not apply to the management of other services in the AWS Management Console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725311">16</a> by Saul
		posted on 7/31/2010 at 9:36 PM
		</div>
		<div class="comment_text"><p>Thanks Steven, how did you examine the network traffic to figure out what was going on? I looked at firebug and Charles but I only see calls to the local page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725306">17</a> by Saul
		posted on 7/31/2010 at 11:15 PM
		</div>
		<div class="comment_text"><p>Using MS network monitor the only thing I can see different between running it locally and on the work network is when run at work there are several "retransmit" frames</p><p>8634	19:49:02 31/07/2010	60.7759789	jrun.exe	<a href="http://disq.us/url?url=http%3A%2F%2Fs3-3-w.amazonaws.com%3AMroQEjp_4WW_wGVQxLgX4Rt9WQQ&amp;cuid=3321886" rel="nofollow noopener" title="s3-3-w.amazonaws.com">s3-3-w.amazonaws.com</a>	172.21.62.239	TCP	TCP:[ReTransmit #7672]Flags=...AP..., SrcPort=HTTPS(443), DstPort=50768, PayloadLen=677, Seq=1389272228 - 1389272905, Ack=3800477662, Win=400 (scale factor 0x6) = 25600	{TCP:15, IPv4:14}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725310">18</a> by Dumitru Alin
		posted on 8/15/2010 at 10:57 PM
		</div>
		<div class="comment_text"><p>hey I don't know why Adobe Coldfusion  builder 9 cant find the jndi port, I try to connect with localhost, and gives me that error, says cannot find the jndy port, I try port 8080, or 2901 or others, but seems it doesn not work, I dont know why, and I need help please..answer me here, or answer me on grayeras@yahoo.com, thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725313">19</a> by Raymond Camden
		posted on 8/16/2010 at 12:39 AM
		</div>
		<div class="comment_text"><p>You're asking about CFBuilder? This blog entry is on CF901 S3 support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725315">20</a> by Michael
		posted on 11/18/2010 at 6:16 PM
		</div>
		<div class="comment_text"><p>any idea for what this.s3.defaultLocation is good for?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725316">21</a> by Raymond Camden
		posted on 11/18/2010 at 6:18 PM
		</div>
		<div class="comment_text"><p>Nope - I'm asking an Adobe engineer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725314">22</a> by Rupesh Kumar
		posted on 11/18/2010 at 6:52 PM
		</div>
		<div class="comment_text"><p>A bucket on S3 storage can be stored in one of these  regions - US, EU and US-WEST. the defaultLocation setting on the application.cfc defines what will be the default location for the bucket that you create and the default value for this is 'US'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725318">23</a> by Raymond Camden
		posted on 11/18/2010 at 7:20 PM
		</div>
		<div class="comment_text"><p>Thanks Rupesh!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725319">24</a> by Derek
		posted on 12/20/2010 at 11:24 AM
		</div>
		<div class="comment_text"><p>Much obliged for a great piece of work. I have a system that has a number of users. I need to track the bandwidth used by each user on the fly. I.E.,as I the user has uploaded or downloaded something, I need to know. Any ideas - this is my deal maker or breaker</p><p>Thanks in advance<br>Derek</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725312">25</a> by Raymond Camden
		posted on 12/20/2010 at 5:37 PM
		</div>
		<div class="comment_text"><p>If you record when they upload something,  you've got that direction. If you record when then they request something,  you got that as well. It's an estimate though. If I try to download file A, and get 50% through and then abort, and they try again, your system will record 2 requests for A.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725320">26</a> by Derek
		posted on 12/20/2010 at 8:36 PM
		</div>
		<div class="comment_text"><p>Thanks again, I am happy with an estimate. The problem I am facing is what method of download to use that allows me to record when a request has taken place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725317">27</a> by Raymond Camden
		posted on 12/20/2010 at 8:38 PM
		</div>
		<div class="comment_text"><p>Amazon supports creating temporary URLs for items. This isn't directly supported by Adobe's s3:// file system, but can be done with a bit of code. Search Barny B's blog for his S3 code as he has a simple UDF for this. So if you have that - you can use that to also log the request and "bill" them for the bandwidth.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725323">28</a> by Derek
		posted on 12/26/2010 at 2:02 AM
		</div>
		<div class="comment_text"><p>Thanks for all the help Raymond. Haven't built the solution but between your and Barney's blogs I have enough to make a go of it.</p><p>Cheers<br>Derek</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725327">29</a> by Lee
		posted on 2/11/2011 at 10:05 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I've just started experimenting with S3 for some image upload stuff (user uploads an image and I use CFImage to create thumbnails etc).</p><p>I've stumbled across an issue that I can't figure out - and it doesn't appear to be documented anywhere as far as I can tell.</p><p>I have a number of buckets already in place, i.e '<a href="http://disq.us/url?url=http%3A%2F%2Fthumbnails.mysite.com%3A5VKmikmQqVWWileal_zYMzjPL-s&amp;cuid=3321886" rel="nofollow noopener" title="thumbnails.mysite.com">thumbnails.mysite.com</a>'.  User uploads their image, I do some CFImage processing, then I'm using ImageWrite to send to thumbnail to S3 ( &lt;cfset ImageWrite(img1, "<a href="http://disq.us/url?url=s3%3A%2F%2Fthumbnails.mysite.com%2F%23thumbnail%23%3AMBfQ6oWYYk_epMWxXVDlrVYd_t4&amp;cuid=3321886" rel="nofollow noopener" title="s3://thumbnails.mysite.com/#thumbnail#">s3://thumbnails.mysite.com/...</a>")&gt; ).  That all works fine, and using the S3 console shows the file there no problem.</p><p>However, no-one else can see the image (which I'm trying to display on the page after processing, as well as reference in a DB for later viewing).  The issue is obviously related to permissions - if I manually 'make public' the image in AWS console, it shows up fine.</p><p>My above ImageWrite code won't accept your example ( storeacl="#perms# ) as a variable, so I'm not sure how I can tell S3 to make the image public without having to manually go in and do it for each and every image (which, obviously, isn't workable).</p><p>Am I missing something or do I need to perhaps look at doing ImageWrite locally, then cffile copy to S3 (which, I presume will allow me to set permissions?).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725308">30</a> by Raymond Camden
		posted on 2/12/2011 at 8:01 PM
		</div>
		<div class="comment_text"><p>You can set permissions at any time. It makes more _sense_ to do it after you imageWrite. I'm not sure why you say you can't do it. image writing, and setting ACLs, are two different calls. You can't do it in one function call nor should you need to. Just write your image, than set the ACLs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725307">31</a> by Lee
		posted on 2/12/2011 at 10:45 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for the reply.  It appeared to me to make sense to do it all at once, if it was possible, in the same way you demonstrate creating a directory and setting permissions.</p><p>Is there any documentation anywhere to show how you set the ACLs in a CF call?  I'm not even sure which tag I would use to do it (cffile, perhaps?).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725321">32</a> by Raymond Camden
		posted on 2/12/2011 at 10:47 PM
		</div>
		<div class="comment_text"><p>It's actually in the blog entry. ;)</p><p>"You can set ACLs using storeSetACL(url, array). This will set all the permissions of the object."</p><p>Note - you won't find this in the _main_ CFML Reference. It's only in the 901 release notes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725325">33</a> by Lee
		posted on 2/12/2011 at 11:27 PM
		</div>
		<div class="comment_text"><p>Thanks again for the swift reply Ray.</p><p>I did pick up on the storeSetACL part in the main entry - however my confusion came about because your demo shows it as part of the cfdirectory, hence me heading down the road of doing it as part of ImageWrite.</p><p>If I'm following this correctly then, I should be able to do it like this;</p><p>&lt;cfset ImageWrite(img1, "<a href="http://disq.us/url?url=s3%3A%2F%2Fthumbnails.mysite.com%2F%23thumbnail%23%3AMBfQ6oWYYk_epMWxXVDlrVYd_t4&amp;cuid=3321886" rel="nofollow noopener" title="s3://thumbnails.mysite.com/#thumbnail#">s3://thumbnails.mysite.com/...</a>")&gt;<br>&lt;cfset storeSetACL(<a href="http://disq.us/url?url=s3%3A%2F%2Fthumbnails.mysite.com%2F%23thumbnail%23%3AMBfQ6oWYYk_epMWxXVDlrVYd_t4&amp;cuid=3321886" rel="nofollow noopener" title="s3://thumbnails.mysite.com/#thumbnail#">s3://thumbnails.mysite.com/...</a>, #perms#)&gt;</p><p>(above assumes I've set 'perms' in the same manner you demonstrate in the blog entry).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725322">34</a> by Raymond Camden
		posted on 2/12/2011 at 11:30 PM
		</div>
		<div class="comment_text"><p>Lee, that looks right to me. I believe - and stress - believe - if you set the permissions on the bucket it will apply to new files. If you did NOT set it on the bucket, then you will have to do it per file. Let me do a quick test though as I want to confirm. My guess is that if ACLs are set at the bucket and NOT overridden on the file then they will cascase down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725326">35</a> by Raymond Camden
		posted on 2/12/2011 at 11:38 PM
		</div>
		<div class="comment_text"><p>I stand corrected. At the bucket level, I can give everyone list, upload/delete, view permission, and edit permission access. I can not give you plain view to files. So I've got a dir you can view:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fs3.amazonaws.com%2Ftest1.coldfusionjedi.com%2F%3Anq2YIkdHqSNXu9UBjJhfzmHV7r8&amp;cuid=3321886" rel="nofollow noopener" title="https://s3.amazonaws.com/test1.coldfusionjedi.com/">https://s3.amazonaws.com/te...</a></p><p>But trying to view one file: <a href="https://disq.us/url?url=https%3A%2F%2Fs3.amazonaws.com%2Ftest1.coldfusionjedi.com%2Ftest2.txt%3AZ-8Bp7HcUsNUvo_KNAWUJSD9UI4&amp;cuid=3321886" rel="nofollow noopener" title="https://s3.amazonaws.com/test1.coldfusionjedi.com/test2.txt">https://s3.amazonaws.com/te...</a></p><p>gives you an access denied. So you definitely do want to follow up with an ACL set to give everyone permission.</p><p>To be honest, it's probably better s3 err on the side of caution.</p><p>Thanks for bringing this up!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725324">36</a> by Lee
		posted on 2/13/2011 at 12:36 AM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>My initial assumption was that setting permissions at bucket level would apply to all items within the bucket.  If that had been the case, because I'm only dealing with a handful of buckets, I wouldn't need to deal with ACLs with Coldfusion at all.</p><p>As you say, it's probably best that S3 does it the way it does.  Thanks for the clarification on how to do this - it's certainly an area that could use more examples - I was surprised at not finding the same question asked elsewhere before.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725332">37</a> by Tom Ortega
		posted on 3/11/2011 at 8:39 PM
		</div>
		<div class="comment_text"><p>One question I had is on bandwidth. For all s3 functionality, do the files travel through the CF server during upload and download? Or does CF pass a url to the browser that directly handles the transfer, bypassing the CF server?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725331">38</a> by Raymond Camden
		posted on 3/13/2011 at 7:36 PM
		</div>
		<div class="comment_text"><p>It goes through the server. S3 does support creating URLs for resources. Not in CF's implementation, but if you check RIAForge there is code there for this. You can then use those URLs in your HTML and the browser goes directly to the S3 server. I use this at Adobe Groups (<a href="http://disq.us/url?url=http%3A%2F%2Fgroups.adobe.com%3AZ8BESXfHtr55BqYKAzEolGyF4Uk&amp;cuid=3321886" rel="nofollow noopener" title="groups.adobe.com">groups.adobe.com</a>).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725337">39</a> by Raymond Camden
		posted on 3/13/2011 at 7:36 PM
		</div>
		<div class="comment_text"><p>This is the project I used I think: <a href="http://disq.us/url?url=http%3A%2F%2Famazons3.riaforge.org%2F%3AXK47y_xcziFA8JnZPniJrMyh-io&amp;cuid=3321886" rel="nofollow noopener" title="http://amazons3.riaforge.org/">http://amazons3.riaforge.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725342">40</a> by Tom Ortega
		posted on 3/13/2011 at 7:38 PM
		</div>
		<div class="comment_text"><p>Awesome to hear. Thanks Ray for the answer and for the awesome post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725335">41</a> by Raymond Camden
		posted on 3/13/2011 at 7:46 PM
		</div>
		<div class="comment_text"><p>I should also point out - you don't need special code if the bucket is readable by the public. If you set up a host to point to it, like <a href="http://disq.us/url?url=http%3A%2F%2Fimages.foo.com%3AQDQ1Kk0BF3OfzApw6xjEtUQlfFw&amp;cuid=3321886" rel="nofollow noopener" title="images.foo.com">images.foo.com</a>, then you just plain link to <a href="http://disq.us/url?url=http%3A%2F%2Fimages.foo.com%2FX%3AsbGA4fHjIMCCxyzXYYki_2pj4NI&amp;cuid=3321886" rel="nofollow noopener" title="images.foo.com/X">images.foo.com/X</a> where X was the file name. So in that example, you use CF to copy the file to S3 but your HTML links are just simple links. (Hope that makes sense.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725345">42</a> by Chris
		posted on 3/23/2011 at 12:46 PM
		</div>
		<div class="comment_text"><p>I'm having trouble getting this to work.  As far as I can tell I have upgraded to 9.0.1 all ok, but when I try to run this code in my testing, The file keeps being created in the TMP directory on my server - and not in the bucket on AmazonS3.</p><p>Any ideas what I may be doing wrong here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725339">43</a> by Raymond Camden
		posted on 3/23/2011 at 2:50 PM
		</div>
		<div class="comment_text"><p>Do a cfdump on the server scope. Do you see the version being 901?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725349">44</a> by Chris
		posted on 3/24/2011 at 3:19 AM
		</div>
		<div class="comment_text"><p>well... no.... well that's odd... excuse me while I go for a labotomy....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725340">45</a> by Raymond Camden
		posted on 3/24/2011 at 6:24 AM
		</div>
		<div class="comment_text"><p>It happens. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725344">46</a> by Chris
		posted on 3/25/2011 at 5:56 AM
		</div>
		<div class="comment_text"><p>Right - now that my CF is updated can I just say...<br>This is awesome!</p><p>Congratulations to all involved and thanks again Ray for this great post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725338">47</a> by Grace007
		posted on 4/22/2011 at 11:17 AM
		</div>
		<div class="comment_text"><p>There is yet another option for Windows,Mac and LInux  users. Check out Bucket Explorer, its is useful to manage S3, CloudFront and AWS Import/ Export on Windows . Try for 30 days trials....http://<a href="http://disq.us/url?url=http%3A%2F%2Fwww.bucketexplorer.com%2Fbe-download.html%3A69J59TIzJCyt3IZmsiLpyORYXkI&amp;cuid=3321886" rel="nofollow noopener" title="www.bucketexplorer.com/be-download.html">www.bucketexplorer.com/be-d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725336">48</a> by tej kiran
		posted on 4/25/2011 at 9:48 AM
		</div>
		<div class="comment_text"><p>Thanks Grace007 for suggesting Bucket Explorer,<br>and also thanks to author of this blog for writing good content.</p><p>I am from development team side. Bucket Explorer is one of the best tool for amazon s3 and cloudfront services.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725343">49</a> by Chris
		posted on 7/17/2011 at 4:50 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks again for this great post. I know its a bit old know, and you're probably flat strap at adobe these days, but I've run across something with large files and amazon s3, and was wondering if anyone else has done something like it.</p><p>My little app pulls a whole bunch of files together into one zip file and then tranfers them to my amazon bucket.  All works like a charm when the files are less than say 100MB, but when they get larger 200,300+MB then I run into all sorts of headaches. Mainly with the file transfer timing out, with my process taking anywhere up to 1 hour to run.  Not nice.</p><p>I'm trying to trigger several of these sends at once, each with similar size zip files to send to the same bucket (different names obviously).</p><p>It seems that even though each one of the sends is triggered seperately, coldfusion is waiting for one to finish, before sending the next one.</p><p>The process that does the sending is a function in a CFC.</p><p>I would've thought each send would've been handled in a separate thread.</p><p>Perhaps the S3 implementation in CF only allows one connection to the amazons3 bucket at once, and while it's being used no other connection can get through?</p><p>Does that make any sense? Has anyone seen anything like this happening, or has any more info?</p><p>Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725347">50</a> by Rupesh Kumar
		posted on 7/18/2011 at 11:24 AM
		</div>
		<div class="comment_text"><p>@Chris, can you log a bug for this (<a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%3A3rlDZ3dbl-KwgQ4_1ERgz_3GHRQ&amp;cuid=3321886" rel="nofollow noopener" title="cfbugs.adobe.com">cfbugs.adobe.com</a>) and we will investigate that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725346">51</a> by Chris
		posted on 7/19/2011 at 9:20 AM
		</div>
		<div class="comment_text"><p>@Rupesh - Done.  Hopefully what I've put in there makes sense.<br>First time I've posted a there.</p><p>On further thought about it, we're running on ColdFusion Standard - and I know that it only has one thread to use (when using CFTHREAD) and then they get queued.  Could that be waht the problem is, even though I'm not using CFTHREAD in this case.  ie. Does CF still handle the request in the same way?</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725341">52</a> by Rupesh Kumar
		posted on 7/19/2011 at 9:37 AM
		</div>
		<div class="comment_text"><p>Thanks Chris.<br>S3 does not use the threadpool used by CFThread. So it can't be because of that. We will investigate this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725352">53</a> by Chris
		posted on 7/28/2011 at 6:04 AM
		</div>
		<div class="comment_text"><p>I'm still having plenty of fun with this, and apologies if this was mentioned in earlier comments, but I am performing a file copy with both the source and destination being on Amazon S3 bucket (different object names in the same bucket).</p><p>Does this bring the file down to the local server (temporary location) - then copy it - and then post it back to the Amazon S3 bucket. Or does it do it within the S3 bucket itself?</p><p>I've noticed that it seems to take a while for the copy operation to complete if the file is large (&gt;10MB).</p><p>Any ideas anyone?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725351">54</a> by Chris
		posted on 8/19/2011 at 4:24 AM
		</div>
		<div class="comment_text"><p>OK.  It seems that not much is happening with that bug report.</p><p>Bit of backwards and forwards with Adobe about this.  Seems we have to purchase platinum support in order to get any action?  Just can't believe this.. to have to pay $$$k to get support for a bug with a product that we only paid ~$1.5k for in the first place.  wow.</p><p>I have started using the REST wrapper available on RIAFORGE <a href="http://disq.us/url?url=http%3A%2F%2Famazons3.riaforge.org%2F%3AXK47y_xcziFA8JnZPniJrMyh-io&amp;cuid=3321886" rel="nofollow noopener" title="http://amazons3.riaforge.org/">http://amazons3.riaforge.org/</a> and that works much better in terms of threading etc.  large file going up to my bucket in seconds rather than minutes.  And seems to be threaded correctly with multiple threads firing off at once.  Problem with large files still though being held in memory as a result of the PUT operation (mainly due to available memory on our server).</p><p>So I am no attempting to do this with a Multipart Post operation via the REST Wrapper.</p><p>My concern is - by doing this am I essentially going to recreate the issues that I'm seeing using the native CF9.0.1 techniques described here, and end up with the threading problem/bug again.</p><p>Here goes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725348">55</a> by Raymond Camden
		posted on 8/19/2011 at 4:28 AM
		</div>
		<div class="comment_text"><p>It is flat out wrong that you have to pay to get a bug fixed. Period. You may have to give your CC# when calling in to support, but you are not charged for bugs. Period.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725356">56</a> by Chris
		posted on 8/19/2011 at 4:32 AM
		</div>
		<div class="comment_text"><p>Sorry Ray,</p><p>Didn't meant to have a go at Adobe there.  I did mean to say "Is this correct?" afterwards.</p><p>So far both of the Adobe support guys I've spoken to/emailed with have asked for our platinum support number in order to get this investigated.  I was told if I didn't have platinum support then there would be very little chance of the bug being fixed promptly.</p><p>If that's incorrect then it makes me very happy. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725354">57</a> by Raymond Camden
		posted on 8/19/2011 at 8:45 AM
		</div>
		<div class="comment_text"><p>Chris - as far as I know - real bugs should not charge you anything. That does NOT mean you will automatically get a hot fix. But it shouldn't cost to get it reported (well it's reported) and ask.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725350">58</a> by Evelin Varghese
		posted on 9/15/2011 at 2:24 PM
		</div>
		<div class="comment_text"><p>Hi Chris,<br>We are looking into this issue.We would like to get some more details on this.It would be great if you can give your mail address. <br>Also what is the bug number?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725355">59</a> by Chris
		posted on 10/5/2011 at 6:39 AM
		</div>
		<div class="comment_text"><p>Sorry for the delayed response, I must'nt have subscribed to my last posting here.</p><p>Bug number is 86983 - all the details are in there.</p><p>I haven't seen anything happening on it - so I just presumed there would be no action.</p><p>I am now almost completed building a java process that does the heavy lifting for these large files.  This is housed on an EC2 instance and means that there is no need for huge files to be handled by ColdFusion.  I decided to get the Amazon S3 to get them itself rather than have them pushed by CF.</p><p>It would be so much simpler to run with the out of the box solution - but unfortunately I couldn't wait for that solution to present itself.</p><p>I think going forward that this bug needs to be sorted out by Adobe - as eventually others are going to hit the problem. More and more of our clients are expecting this stuff to be "easy", with all this "cloud" marketing that is out there.</p><p>Thanks to all who had suggestions. And thanks again to Ray for the original post and soapbox to get my problem heard/discovered. Here's hoping Adobe fix this up in the next release/patch/whatever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725353">60</a> by Stefan Richter
		posted on 11/25/2011 at 9:41 PM
		</div>
		<div class="comment_text"><p>I had some issues getting cffile upload to work with S3 (basically it didn't work for me) and I've published a short post on a little workaround:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.therealtimeweb.com%2Findex.cfm%2F2011%2F11%2F25%2Fcf-upload-to-s3%3AiyQpAGyo9gKCa0vqwDLHKeq7b30&amp;cuid=3321886" rel="nofollow noopener" title="http://www.therealtimeweb.com/index.cfm/2011/11/25/cf-upload-to-s3">http://www.therealtimeweb.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725360">61</a> by Larry McFarlane
		posted on 7/18/2012 at 5:29 PM
		</div>
		<div class="comment_text"><p>Weird...All of the documentation (including here) says to do this:</p><p>dlist = directoryList("s3://mybucket");</p><p>However, I get an error that says this in the exception log (truncated):</p><p>&lt;Message&gt;The AWS Access Key Id you provided does not exist in our records.&lt;/Message&gt;&lt;AWSAccessKeyId&gt;null&lt;/AWSAccessKeyId&gt;</p><p>However when I do this:</p><p>directoryList("s3://#accessKeyId#:#awsSecretKey#@mybucket");</p><p>It's okay! (although, this way spews superfluous data that I don't need)</p><p>I implemented the exact code Ray has here in his blog.  Am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725359">62</a> by Raymond Camden
		posted on 7/18/2012 at 7:31 PM
		</div>
		<div class="comment_text"><p>If you do not include the access info in the URL, you must include it in Application.cfc. Did you remember to do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725361">63</a> by Larry McFarlane
		posted on 7/19/2012 at 12:35 AM
		</div>
		<div class="comment_text"><p>Thanks for the reply Ray.</p><p>As it turns out...</p><p>I was doing everything in cfscript inside a cfc and calling the component directly without referencing it in a cfm page which is why it wasn't working.  grrrr.</p><p>Once I saved it as a .cfm template and replaced the component container with cfscript, it worked like a charm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725363">64</a> by Larry McFarlane
		posted on 7/19/2012 at 12:45 AM
		</div>
		<div class="comment_text"><p>In fact, there was a considerable amount of people not really getting answers to this problem so if you don't mind, I'm going to post the error the debugger threw out at me to hopefully save some poor soul some time...</p><p>org.apache.commons.vfs.FileSystemException: Unknown message with code "S3 Error Message."..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725362">65</a> by Xavier Pujol
		posted on 12/3/2012 at 3:37 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I've just signed up to Amazon S3 and I've found your post great to get started with it.</p><p>However, the application I'm working on has a lot of legacy code and it still uses Application.cfm instead of Application.cfc. So the question is, how do I provide the credentials? I've tried setting them in the application scope and the this scope, but it doesn't work.</p><p>Is it possible to provide them or should I switch to Application.cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725364">66</a> by Raymond Camden
		posted on 12/3/2012 at 8:20 PM
		</div>
		<div class="comment_text"><p>Yes, you absolutely can. You may have missed this above: "However, you can also provide the credentials in the path itself. " Please see the CF docs for an example of this, I don't have it offhand, but it is a _bit_ like this: "username@password:/s3pathetcetc". Basically you encode the username and password in there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725366">67</a> by Xavier Pujol
		posted on 12/3/2012 at 8:43 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond, I know about this option, it's in the documentation here: <a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FDeveloping%2FWSd160b5fdf5100e8f-4439fdac128193edfd6-7f08.html%3A_yqMqhIB4t5d47SBoXsJCgu5eCY&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/Developing/WSd160b5fdf5100e8f-4439fdac128193edfd6-7f08.html">http://help.adobe.com/en_US...</a></p><p>It's just that it would be great if I didn't have to pass the credentials with every single request...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725368">68</a> by Raymond Camden
		posted on 12/3/2012 at 8:44 PM
		</div>
		<div class="comment_text"><p>You can. Use Application.cfc. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725367">69</a> by Xavier Pujol
		posted on 12/3/2012 at 8:55 PM
		</div>
		<div class="comment_text"><p>Yeah, I suppose it's time to switch! Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725365">70</a> by Cody Kratzer
		posted on 5/2/2013 at 7:09 PM
		</div>
		<div class="comment_text"><p>Great article, Ray!</p><p>I'm having trouble with the directoryList("<a href="http://disq.us/url?url=s3%3A%2F%2Fmydomain.com%3AhuSUfChiHoOz4G0W3wJVht5r8_E&amp;cuid=3321886" rel="nofollow noopener" title="s3://mydomain.com">s3://mydomain.com</a>") yielding a result. When I dump the variable its empty. However, my s3 bucket is filled with files. When I cfdump storeGetACL("s3:..mydomain.com") I get back the values I would expect (correct displayName, ID, and permissions at "FULL_CONTROL") so I know I can connect to my buckets. Any advice on why my directoryList is coming back empty?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725373">71</a> by Raymond Camden
		posted on 5/2/2013 at 7:18 PM
		</div>
		<div class="comment_text"><p>I've run into bugs with directoryList where certain files would throw errors on the CF side, but I've not seen a case where it would return an empty list. Unfortunately, I've not touched S3 via CF again because of the bugs I ran into (this and another one I blogged about). Best I can suggest is to file a bug report w/ a reproducible example. There's also a good S3 CFC out there by... Barney B I believe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725369">72</a> by Lareman
		posted on 5/2/2013 at 7:30 PM
		</div>
		<div class="comment_text"><p>DList was working for me, but all of a sudden it stopped and started returning nothing w/o warning.  I couldn't figure out why, but I was able to get around it by placing my AccessKeyID and SecretKey in the DList path:</p><p>dlist = directoryList(MyAccessKeyId:MyAWSSecretKey@MyRootFolder/subdirectory,true, "name","","asc");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725370">73</a> by Raymond Camden
		posted on 5/2/2013 at 7:34 PM
		</div>
		<div class="comment_text"><p>So to be clear, it was working before, when the credentials were in the Application scope, and then it stopped working. You then put the credentials in the directory path and it worked again?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725372">74</a> by Lareman
		posted on 5/2/2013 at 7:40 PM
		</div>
		<div class="comment_text"><p>Yes, that would be true.  My best guess (since we didn't update CF 9 before this happened) is that something may have changed at Amazon that wouldn't allow it and CF to talk to one another after the change.  This happened around 2-3 months ago and I haven't had an issue since the workaround.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725375">75</a> by Raymond Camden
		posted on 5/2/2013 at 7:40 PM
		</div>
		<div class="comment_text"><p>You may wish to post a bug report on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725376">76</a> by Lareman
		posted on 5/2/2013 at 7:43 PM
		</div>
		<div class="comment_text"><p>Y'know...That's a good idea...:)  Will do...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725378">77</a> by Cody Kratzer
		posted on 5/2/2013 at 9:05 PM
		</div>
		<div class="comment_text"><p>I just can't help but feel like there is an element I am missing... Here is what I have:</p><p>Application.cfc<br>&lt;cfcomponent output="no"&gt;<br>     &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> = "lny" /&gt;<br>     &lt;cfset this.s3.accessKeyId = "[my access key id]" /&gt;<br>     &lt;cfset this.s3.awsSecretKey = "[my secret key]" /&gt;<br>     ...</p><p>Test Page<br>&lt;cfif not directoryExists("<a href="http://disq.us/url?url=s3%3A%2F%2Fmedia.lightingnewyork.com%3Aq03rkLYMi-YWtL0ehiwq_IT1GUU&amp;cuid=3321886" rel="nofollow noopener" title="s3://media.lightingnewyork.com">s3://media.lightingnewyork.com</a>")&gt;<br>    &lt;cfset directoryCreate("<a href="http://disq.us/url?url=s3%3A%2F%2Fmedia.lightingnewyork.com%3Aq03rkLYMi-YWtL0ehiwq_IT1GUU&amp;cuid=3321886" rel="nofollow noopener" title="s3://media.lightingnewyork.com">s3://media.lightingnewyork.com</a>")&gt;<br>&lt;/cfif&gt;<br>&lt;cfset local.dir = directoryList("<a href="http://disq.us/url?url=s3%3A%2F%2Fmedia.lightingnewyork.com%3Aq03rkLYMi-YWtL0ehiwq_IT1GUU&amp;cuid=3321886" rel="nofollow noopener" title="s3://media.lightingnewyork.com">s3://media.lightingnewyork.com</a>") /&gt;<br>&lt;cfdump var="#local.dir#" /&gt;</p><p>dump returns: array empty</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725377">78</a> by Raymond Camden
		posted on 5/2/2013 at 9:53 PM
		</div>
		<div class="comment_text"><p>Cody, if that is _all_ your code, then it makes sense. You made a directory but you didn't copy files to it. Therefore the directoryList would be a 0-length array.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725379">79</a> by Cody Kratzer
		posted on 5/2/2013 at 10:03 PM
		</div>
		<div class="comment_text"><p>That is, indeed, all of my code... But I already have an s3 bucket filled with subfolders and files pointing to that domain. Shouldn't the directory recognize the existing content?</p><p>I noticed that if I used your code to put a new text file into the directory that the array would then populate with that newly added file, but still not show my other existing files on the bucket. Likewise, I could not see the newly created text file in my s3 console. It was that test that brought me to the conclusion that I must be missing an important piece of information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725382">80</a> by Raymond Camden
		posted on 5/2/2013 at 10:04 PM
		</div>
		<div class="comment_text"><p>Cody, I thought you were different then the earlier commenter Lareman. Are you the same person?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725383">81</a> by Cody Kratzer
		posted on 5/2/2013 at 10:08 PM
		</div>
		<div class="comment_text"><p>I am not Lareman. Although I just now saw his comments and I felt it is interesting to share that I just tried the alternate method (s3://accessKey:secretKey@bucket) and it works! This is enough to get me started on my project, although I am curious why it doesn't recognize my domain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725385">82</a> by Raymond Camden
		posted on 5/2/2013 at 10:10 PM
		</div>
		<div class="comment_text"><p>Weird. Well hopefully lareman will post that bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725386">83</a> by Eric
		posted on 6/3/2013 at 3:51 AM
		</div>
		<div class="comment_text"><p>Ray, how do we connect to AWS GovCloud's S3....change the end point for S3 in ACF 10?   They have a different endpoint than the standard S3.   defaultlocation comment above mentions above US, EU, US-WEST...is there a posting of other codes we could use?   We can't be the only CF shop in GovCloud I hope!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725384">84</a> by Raymond Camden
		posted on 6/3/2013 at 5:55 PM
		</div>
		<div class="comment_text"><p>I'd simply use one of the open source S3/CF solutions out there. Unfortunately, I almost have to recommend that more than the built in S3 integration as there have been bugs with directory listing operations and other things. I just came across this new bug as well: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F10830823%2Fcoldfusion-s3-directorylist-throws-this-error-an-error-occurred-when-performing%3A9kM61aEsv_Vkv-QHDve8SDmlmLA&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/10830823/coldfusion-s3-directorylist-throws-this-error-an-error-occurred-when-performing">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725388">85</a> by Eric
		posted on 6/3/2013 at 10:25 PM
		</div>
		<div class="comment_text"><p>Hi Ray, so maybe Barney's cfc is the way to go...lots of rewriting since our S3 works well but this transition for this customer will take lots of extra efforts since good old cffile won't work!   Thanks though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725387">86</a> by Eric
		posted on 6/3/2013 at 10:29 PM
		</div>
		<div class="comment_text"><p>Sorry, for recap for others, Barney's: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.barneyb.com%2Fbarneyblog%2Fprojects%2Famazon-s3-cfc%2F%3ATQl58MSlehNQ4FjbA_U_Ea0HOLo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.barneyb.com/barneyblog/projects/amazon-s3-cfc/">http://www.barneyb.com/barn...</a> or Joe's: <a href="http://disq.us/url?url=http%3A%2F%2Famazons3.riaforge.org%2F%3AXK47y_xcziFA8JnZPniJrMyh-io&amp;cuid=3321886" rel="nofollow noopener" title="http://amazons3.riaforge.org/">http://amazons3.riaforge.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725389">87</a> by Raymond Camden
		posted on 6/4/2013 at 1:01 AM
		</div>
		<div class="comment_text"><p>Thanks for posting those links!</p></div>
	</div>
</div>
		