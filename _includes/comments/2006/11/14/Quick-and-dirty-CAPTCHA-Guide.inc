
<div class="comment" id="c_1713659130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659130">1</a> by Tom Mollerus
		posted on 11/14/2006 at 8:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>In the non-quick-and-dirty implementation of a CAPTCHA, do you think there would be any advantage to storing the hash value in SESSION scope?  That way you wouldn't have to expose the hash value to the user in the HTML code.</p><p>I know that if there's an expiration period to the hash that it's not a big risk in letting the user see it.  But I'm curious what you think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659138">2</a> by Peter J. Farrell
		posted on 11/15/2006 at 1:00 AM
		</div>
		<div class="comment_text"><p>Tom,<br>You can store the hash reference in the session scope if you wish.  It does single thread the captcha -- could be a problem if a user has a page open with the captcha and has another tab open and surfs to a page with the cpatcha.</p><p>The hash reference is the captcha text + salt (random text that auto-generated) that is hashed.  It would be very difficult to break.</p><p>Best,<br>.Peter J. Farrell<br>LylaCaptcha</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659132">3</a> by Tom Mollerus
		posted on 11/15/2006 at 1:13 AM
		</div>
		<div class="comment_text"><p>Peter,</p><p>I agree that a hash is almost impossible to break, but that's not the danger that I'm considering.  I'm supposing that IF a CAPTCHA system doesn't have an expiration for the hash (or if it has an unreasonably long expiration for the hash, such as 30 minutes), that a malicious human user might be able to hand the hash value and the answer text value off to a bot.  The bot could then abuse the site until the hash expired. Is that correct, or am I missing something else?</p><p>My scenario may not be very likely, but it could be used to spam every blog entry of someone's site in a few minutes. Also, I'm aware that LylaCaptcha does default to expiration of hashes, so please don't consider this a criticism of your software or of anyone else's-- it's more of an academic discussion of what might be possible under a poor CAPTCHA implementation by a site developer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659140">4</a> by Aaron West
		posted on 11/15/2006 at 5:46 PM
		</div>
		<div class="comment_text"><p>One thing to add is that LylaCaptcha does not work in a Linux environment. At least, I *think* this is true. I haven't spent much time on it but I was not able to get LylaCaptcha to work on RedHat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659135">5</a> by Peter J. Farrell
		posted on 11/15/2006 at 9:30 PM
		</div>
		<div class="comment_text"><p>Tom, the hash references don't expire and could potentially be a security hole.  Using the session will fix that. Luckily for me, Lyla is still Alpha-ware and I haven't had as much time to work on it as I wish.  Been busy with Mach-II, the ColdFusion Weekly Podcast and of course - getting married last month.</p><p>Aaron, Lyla will run on Linux.  I have it running with CF on CentOS 3 (which is the Open Source version of RHEL3).  You must be missing one of the optional packages for RH like x11-deprecated-libs which has the fonts etc.  Does your cfcharting work?  Also, are you running the RH machine as headless?  I've gotten reports on Lyla running on headless machine, but it has to be properly configured.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659129">6</a> by Shaji
		posted on 11/20/2006 at 7:25 AM
		</div>
		<div class="comment_text"><p>Aaron,</p><p>LylaCaptcha does work on RedHat Linux environment without issue. I am sure that it is permission issue on RedHat Linux. Your name is familiar to me and I think your site is at web hosting provider where I am working. Drop email at support department with subject "Atten Shaji: Captcha issue". I am happy to look on it for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659136">7</a> by sarah
		posted on 12/1/2006 at 1:49 AM
		</div>
		<div class="comment_text"><p>Hi, I hope this isn't too dumb a question, but where is the test2.cfm file you refer to as an attachment?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659141">8</a> by Raymond Camden
		posted on 12/1/2006 at 1:54 AM
		</div>
		<div class="comment_text"><p>It is in the download.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659131">9</a> by Mike M
		posted on 12/2/2006 at 1:09 AM
		</div>
		<div class="comment_text"><p>The test.cfm was not included in the zip I downloaded either. Perhaps it was missed when creating the archive?</p><p>Uncompressed folder: 76799 bytes contained:<br>captcha.xml 7k<br>captchaService.cfc 38k<br>captchaServiceConfigBean.cfc 22k<br>lylaCaptchaLicense.txt 11k</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659139">10</a> by Raymond Camden
		posted on 12/2/2006 at 2:27 AM
		</div>
		<div class="comment_text"><p>So to be clear - you are clicking the word "Download" on my blog entry. It is right above the Savvy ad.  I just clicked it again and the zip had the right files in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659142">11</a> by Farrah Omar
		posted on 1/8/2007 at 8:21 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>It is actually a question and not a comment but I only see a broken image in test2.cfm. I am using ColdFusion MX 6.1. Any help is appreciated.<br>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659134">12</a> by Raymond Camden
		posted on 1/9/2007 at 7:53 AM
		</div>
		<div class="comment_text"><p>try right clicking and viewing the image by itself and see if you see an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659133">13</a> by Farrah
		posted on 1/10/2007 at 7:40 PM
		</div>
		<div class="comment_text"><p>I copied the image location and opened it in another tab and this is the error I got:</p><p> Attribute validation error for tag CFCONTENT.<br>The tag does not allow the attribute(s) VARIABLE. The valid attribute(s) are DELETEFILE,FILE,RESET,TYPE.</p><p>The error occurred in D:\Inetpub\wwwroot\library\farrah\lyla\captcha.cfm: line 6</p><p>4 : <br>5 : &lt;cfset variables.captcha = application.captcha.createCaptchaFromHashReference("file",url.hash) /&gt;<br>6 : &lt;cfcontent type="image/jpg"  variable="#variables.captcha.fileLocation#" reset="false" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659143">14</a> by Raymond Camden
		posted on 1/10/2007 at 9:47 PM
		</div>
		<div class="comment_text"><p>Ah, variable was added in cf7. Hmmm. try removing the variable and just cfoutput it after the cfcontent tag. I can't test right now but that may work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659137">15</a> by Franco
		posted on 2/7/2007 at 9:30 AM
		</div>
		<div class="comment_text"><p>I added your first script before my form and got this error message: Before application variables can be used, the application state management system must be enabled using the CFAPPLICATION tag. What am I missing here? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659144">16</a> by Raymond Camden
		posted on 2/7/2007 at 4:09 PM
		</div>
		<div class="comment_text"><p>Well the error message tells you exactly what you need - a cfapplication tag. Just add an application.cfm file to the folder with a cfapplication tag in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659147">17</a> by Megan
		posted on 5/6/2007 at 3:37 PM
		</div>
		<div class="comment_text"><p>Much thanks for the guide - has reminded me (once again) of my own coding limitations and appreciation for people like you ;-) Cheers. M</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659148">18</a> by Brett
		posted on 5/17/2007 at 3:04 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>I recently made updates to this examples based off the simplification steps found here: <a href="http://disq.us/url?url=http%3A%2F%2Fcarehart.org%2Fblog%2Fclient%2Findex.cfm%2F2006%2F8%2F17%2Fsimplifying_lyla_in_blogcfc%3ACjFiCiNMydpED0w9MwFoN6TPIf4&amp;cuid=3321886" rel="nofollow noopener" title="http://carehart.org/blog/client/index.cfm/2006/8/17/simplifying_lyla_in_blogcfc">http://carehart.org/blog/cl...</a></p><p>However, after making the updates and refreshing I'm not seeing the updates on test2.cfm. Is there a reset tag somewhere, are the settings cached? How can I refresh the settings?</p><p>Thanks!<br>Brett</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659146">19</a> by Raymond Camden
		posted on 5/17/2007 at 7:43 PM
		</div>
		<div class="comment_text"><p>Yes, you need to hit your blog with ?reinit=1 in the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659153">20</a> by Haseeb Khan
		posted on 6/6/2007 at 10:37 PM
		</div>
		<div class="comment_text"><p>Hi All,</p><p>Really a very nice post.</p><p>Can you please specify that LylaCaptcha works with ColdFusion 6.1 or not? I am facing many issues with that.</p><p>I am very new to ColdFusion. It would be great if a step by step guide can be provided for beginners like me.</p><p>Any help would be highly appreciated.</p><p>Would certainly wait for your replies.</p><p>Thanks and Regards,</p><p>Haseeb Khan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659149">21</a> by Nita
		posted on 10/13/2007 at 12:10 AM
		</div>
		<div class="comment_text"><p>Does this work with mx7. I downloaded the code. I don't see the image and also I get this error:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.naperville-lib.info%2Fcaptcha.cfm%3Fhash%3D1057976334220A924A0796FCC56F03A4EF83B5C1%3A8k4RHncPMC6mwNcA2S_32SZM2IU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.naperville-lib.info/captcha.cfm?hash=1057976334220A924A0796FCC56F03A4EF83B5C1">http://www.naperville-lib.i...</a><br>Element INSTANCE.HASHREFERENCECACHETIMESTAMP is undefined in VARIABLES.</p><p>The error occurred in C:\Websites\132648ha2\captchaService.cfc: line 937<br>Called from C:\Websites\132648ha2\captchaService.cfc: line 680<br>Called from C:\Websites\132648ha2\captchaService.cfc: line 659<br>Called from C:\Websites\132648ha2\captchaService.cfc: line 120<br>Called from C:\Websites\132648ha2\captcha.cfm: line 5</p><p>935 : 	&lt;/cffunction&gt;<br>936 : 	&lt;cffunction name="getHashReferenceCacheTimestamp" access="public" returntype="numeric" output="false"&gt;<br>937 : 		&lt;cfreturn variables.instance.hashReferenceCacheTimestamp /&gt;<br>938 : 	&lt;/cffunction&gt;<br>939 :</p><p>***************</p><p>Thanks for the open source code. Hope this work for me as I am tired of receiving spam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659152">22</a> by Raymond Camden
		posted on 10/15/2007 at 8:31 PM
		</div>
		<div class="comment_text"><p>I believe this goes away if you add this to the XML:</p><p>     	&lt;config name="hashValidPeriod" value="1800000"/&gt;&lt;!-- in milliseconds --&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659151">23</a> by N
		posted on 10/15/2007 at 11:49 PM
		</div>
		<div class="comment_text"><p>I added the information in xml file along with other configs but still it is giving me the same error.</p><p>Where is the hash value coming from for this page?<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.naperville-lib.info%2Fcaptcha.cfm%3Fhash%3DBE483BBBB8D397002933D6598F40BB142539A53B%3Aiw3z7zblyF2ngybGNtpi4MDzHSc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.naperville-lib.info/captcha.cfm?hash=BE483BBBB8D397002933D6598F40BB142539A53B">http://www.naperville-lib.i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659154">24</a> by Raymond Camden
		posted on 10/15/2007 at 11:58 PM
		</div>
		<div class="comment_text"><p>Not sure what to suggest. I just tried again with the code, even w/o that XML there, and it worked just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659150">25</a> by Nita
		posted on 10/16/2007 at 7:25 AM
		</div>
		<div class="comment_text"><p>I am using cf MX7 and I have all the files listed together in  the same directory, is this ok?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659156">26</a> by Nita
		posted on 10/16/2007 at 8:19 AM
		</div>
		<div class="comment_text"><p>hello Raymond:<br>Finally it is working fine on my PC (which acts as test server), after I configured the testing for the folder with the test server. However when I upload to our website the image doesn't get displayed(hosted by <a href="http://disq.us/url?url=http%3A%2F%2Fhostmysite.com%3AztrKeOUKmog7P-dSXj3cUUhcUfs&amp;cuid=3321886" rel="nofollow noopener" title="hostmysite.com">hostmysite.com</a>). I am quite new to cf. What do I need to configure on the website server for this to work? Hey  it looks like I am getting closer to get this to work, keeping my finger crossed.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659157">27</a> by Raymond Camden
		posted on 10/16/2007 at 6:02 PM
		</div>
		<div class="comment_text"><p>You probably need to ping HostMySite. You may want to expose the error by right clicking on the broken image and selecting View.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659158">28</a> by Nita
		posted on 10/16/2007 at 8:35 PM
		</div>
		<div class="comment_text"><p>This is my site where I am trying to get it work<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.naperville-lib.info%2Fcaptcha%2Ftest2.cfm%3AD0RG7dcJ5f3OJe7wXib07v0mkS8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.naperville-lib.info/captcha/test2.cfm">http://www.naperville-lib.i...</a></p><p>There is no option to view the image, however I can go to properties and get the error link, which is;<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.naperville-lib.info%2Fcaptcha%2Fcaptcha.cfm%3Fhash%3DB2DB77E7632EA2D69108CBB838A40140A4A8E32C%3Abix67ZPoiRFXgwrgMoSubNQBCkM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.naperville-lib.info/captcha/captcha.cfm?hash=B2DB77E7632EA2D69108CBB838A40140A4A8E32C">http://www.naperville-lib.i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659155">29</a> by Raymond Camden
		posted on 10/16/2007 at 8:38 PM
		</div>
		<div class="comment_text"><p>At this point I'd suggest pinging the Lyla Project directly. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659159">30</a> by Nita
		posted on 10/16/2007 at 8:45 PM
		</div>
		<div class="comment_text"><p>Sorry, how do I do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659162">31</a> by Raymond Camden
		posted on 10/16/2007 at 8:50 PM
		</div>
		<div class="comment_text"><p>I linked to Lyla in the blog entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659163">32</a> by Nita
		posted on 10/16/2007 at 10:28 PM
		</div>
		<div class="comment_text"><p>the application name says lylademo, should I change this on application.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659161">33</a> by Raymond Camden
		posted on 10/16/2007 at 10:36 PM
		</div>
		<div class="comment_text"><p>It shouldn't matter -b ut try it. But seriously though - I'd contact the Lyla project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659164">34</a> by Nita
		posted on 10/23/2007 at 11:20 PM
		</div>
		<div class="comment_text"><p>Hi Ray:<br>I just will let you know that after emailing Peter the problem, figured out that I had to download the newer version of Lyla, then it started to display the image.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659165">35</a> by Lynn Burkholder
		posted on 1/15/2008 at 2:24 AM
		</div>
		<div class="comment_text"><p>I have downloaded the zip file from your site with all the needed files and tests. However when I make changes to the captcha.xml file, such as alphaUCase, etc. and upload it, there are no changes in the captcha image. What am I doing wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659166">36</a> by Raymond Camden
		posted on 1/15/2008 at 2:32 AM
		</div>
		<div class="comment_text"><p>It may be caching on your web server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659167">37</a> by Lynn Burkholder
		posted on 1/15/2008 at 3:06 AM
		</div>
		<div class="comment_text"><p>Sorry, here is the link to my test site.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.flexroofingsystems.com%2Fcaptcha%2Ftest2.cfm%3AtEVQps_Xix4ESC-O-snF5ibLcZ0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.flexroofingsystems.com/captcha/test2.cfm">http://www.flexroofingsyste...</a></p><p>I checked with the hosting service and they cleared the cache and still no changes.</p><p>Any other ideas?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659169">38</a> by Raymond Camden
		posted on 1/15/2008 at 3:10 AM
		</div>
		<div class="comment_text"><p>Heh, I forgot my own code. Notice this section:</p><p>&lt;cfif not structKeyExists(application, "captcha")&gt;<br>   &lt;cfset application.captcha = createObject("component", "captchaService").init(configFile="captcha.xml") /&gt;<br>   &lt;cfset application.captcha.setup()&gt;<br>&lt;/cfif&gt;</p><p>This caches your settings. Add this to the CFIF</p><p>or isDefined("url.init")</p><p>Then hit your site with ?init=1 in the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659171">39</a> by Lynn Burkholder
		posted on 1/15/2008 at 3:36 AM
		</div>
		<div class="comment_text"><p>Thanks for the prompt response!</p><p>So sorry, however, I am hopelessly not a programmer and all I can do is cut and paste what sombody shows me. Would you be so kind as to put that code in the CFIF for me because I don't know where it goes? I can then put it in place and do the new url as you indicated.</p><p>Thanks so much!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659170">40</a> by Raymond Camden
		posted on 1/15/2008 at 4:33 AM
		</div>
		<div class="comment_text"><p>Try:</p><p>&lt;cfif not structKeyExists(application, "captcha") or isDefined("url.init")&gt;<br>&lt;cfset application.captcha = createObject("component", "captchaService").init(configFile="captcha.xml") /&gt;<br>&lt;cfset application.captcha.setup()&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659172">41</a> by Nita
		posted on 1/16/2008 at 9:40 AM
		</div>
		<div class="comment_text"><p>Ask your hosting services to restart service for cfm. Thats what worked for me. Just uploading the file and removing cache did not help much.<br>Good Luck!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659174">42</a> by Lynn Burkholder
		posted on 1/16/2008 at 11:17 PM
		</div>
		<div class="comment_text"><p>Thanks for the syntax. It all seems to be working great now and I am happy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659173">43</a> by Matt Bogdanovich
		posted on 1/23/2008 at 3:51 AM
		</div>
		<div class="comment_text"><p>Thanks for saving me time!  Real good job on a simplification.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659175">44</a> by Matt Bogdanovich
		posted on 1/23/2008 at 4:33 AM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>Have you had any problems with this rendering in Firefox and not IE?  I am getting the big X like there is no image in IE.  Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659177">45</a> by Raymond Camden
		posted on 1/24/2008 at 3:28 AM
		</div>
		<div class="comment_text"><p>Hmm. I want to say I have... but I can't remember exactly why. Sorry. YOu can try right clicking on the image and viewing it, and seeing what you get in the browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659176">46</a> by Matt Bogdanovich
		posted on 1/24/2008 at 4:10 AM
		</div>
		<div class="comment_text"><p>hehe....Your sorry?  You just saved me a ton of time.  For anyone else that has this problem;  it was obvious that the paths were correct because the dynamic information was in the source of the page.  I messed with the css and have no idea what I did, but all is great now.  Thanks again for the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659178">47</a> by Richard Braxton
		posted on 3/26/2008 at 12:34 AM
		</div>
		<div class="comment_text"><p>You should know that this page and the LylaCaptcha code is invaluable.  I was able to get the captcha up and running in no time!</p><p>Thank You!</p><p>PS:  Be wary of the code contained in the PDF in <a href="http://disq.us/url?url=http%3A%2F%2FLylaCaptcha_v1Beta.zip%3Ay_XRoqZ1f8Zd-x2ym7vuw2ER1zc&amp;cuid=3321886" rel="nofollow noopener" title="LylaCaptcha_v1Beta.zip">LylaCaptcha_v1Beta.zip</a> - some variables were not fully qualified - the correct function call begins with the word 'create' - and the order of arguments for one of the functions was reversed.  Other than that, Awesome! (And thank you Lyla!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659179">48</a> by Rose
		posted on 3/26/2008 at 3:32 AM
		</div>
		<div class="comment_text"><p>Thank you *so* much for this - I was scratching my head and about to give up because of the Lyla documentation, but your example files helped me get it working within a few minutes.</p><p>You're a star!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659180">49</a> by Raymond Camden
		posted on 3/26/2008 at 5:20 AM
		</div>
		<div class="comment_text"><p>As just an FYI, I plan on writing an updated guide for CF8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659185">50</a> by Amit
		posted on 3/30/2008 at 4:20 AM
		</div>
		<div class="comment_text"><p>Hi Raymond - This is probably ironic considering in ur last post you talked about writing for CF8. I have a site running on CF5 where I need this implemented but got an error on test2.cfm.</p><p>Just in time compilation error<br>Invalid parser construct found on line 4 at position 74. ColdFusion was looking at the following text:<br>.<br>Invalid expression format.</p><p>Also on test.cfm i got this:</p><p>An error occurred while evaluating the expression: <br> structKeyExists(variables, "error")<br>Error near line 28.</p><p>I have very little exposure in CF and would greatly appreciate your help. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659182">51</a> by Raymond Camden
		posted on 3/30/2008 at 4:22 AM
		</div>
		<div class="comment_text"><p>Lyla makes use of CFCs, which aren't available in CF5.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659183">52</a> by amit
		posted on 3/30/2008 at 4:37 AM
		</div>
		<div class="comment_text"><p>ouch! ok thanks.</p><p>do you know of any other solutions out there which would work with cf5?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659186">53</a> by Raymond Camden
		posted on 3/30/2008 at 4:38 AM
		</div>
		<div class="comment_text"><p>Unfortunately no.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659188">54</a> by Daniel Greenfeld
		posted on 3/30/2008 at 5:52 PM
		</div>
		<div class="comment_text"><p>The way to get captcha into CF5 is to use a third party service like <a href="http://disq.us/url?url=http%3A%2F%2Fcaptchas.net%3AVcJXR83Uhx6vLo-FljKeesKE9o8&amp;cuid=3321886" rel="nofollow noopener" title="captchas.net">captchas.net</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659193">55</a> by Raymond Camden
		posted on 3/30/2008 at 6:18 PM
		</div>
		<div class="comment_text"><p>The CF8 version: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F3%2F29%2FQuick-and-Dirty-ColdFusion-8-CAPTCHA-Guide%3ApOCQQIXQ-XFURx30M_fH4XIrink&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/3/29/Quick-and-Dirty-ColdFusion-8-CAPTCHA-Guide">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659190">56</a> by Bayliss
		posted on 4/11/2008 at 9:18 PM
		</div>
		<div class="comment_text"><p>If you are having problems seeing the image on your live site (but it works fine on your local machine) then <br>it is important to restart coldfusion - ask your hosts to do it which they will do at their convenience.</p><p>(On your local machine the easiest way it to just restart your pc.)</p><p>Thanks for the files.</p><p>We use it on this site <a href="http://disq.us/url?url=http%3A%2F%2Fwww.medarc-limited.co.uk%3AUxaWUmC1G0H4Gxic_tO8ve5hMMg&amp;cuid=3321886" rel="nofollow noopener" title="www.medarc-limited.co.uk">www.medarc-limited.co.uk</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659189">57</a> by koko
		posted on 6/20/2008 at 1:50 PM
		</div>
		<div class="comment_text"><p>I have downloaded your entire blogcfc52 and I dont see any test.cfm file, could you please give me the link to where it is ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659191">58</a> by Raymond Camden
		posted on 6/20/2008 at 4:38 PM
		</div>
		<div class="comment_text"><p>You need to click the Download link at the bottom of the article text. That will give you <a href="http://disq.us/url?url=http%3A%2F%2Flyla.zip%3ACQzPxsjaF96cO9ZlpUF7Gb-VyNk&amp;cuid=3321886" rel="nofollow noopener" title="lyla.zip">lyla.zip</a> which includes all the files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659192">59</a> by Noel
		posted on 6/30/2008 at 1:10 PM
		</div>
		<div class="comment_text"><p>SPAM is forcing me now to start adding Captcha's to all my forms :/<br>So.. I'm trying the demo (the one with test.cfm and test2.cfm), but when running test2.cfm I keep getting an error in line 3 "Variable application is undefined."<br>I've unzipped all the files in one directory.<br>The error is with MX7 running on a Linux server.</p><p>Anyone here who might know what could be wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659194">60</a> by Raymond Camden
		posted on 6/30/2008 at 3:34 PM
		</div>
		<div class="comment_text"><p>Rename application.cfm to Application.cfm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659195">61</a> by Noel
		posted on 6/30/2008 at 3:51 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond. That did the trick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659196">62</a> by Rick
		posted on 7/2/2008 at 5:19 AM
		</div>
		<div class="comment_text"><p>I'd like to update the captcha image by updating captcha.xml. But it looks like the edits never stick. How do I re-instantiate the captcha object after making changes to the XML file so that I can see the updates?</p><p>Thanks so much<br>Rick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659198">63</a> by Rick
		posted on 7/2/2008 at 5:27 AM
		</div>
		<div class="comment_text"><p>By the way, I'm not using the captcha on BlogCFC, so I cannot use the ?renit method. Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659199">64</a> by Raymond Camden
		posted on 7/2/2008 at 3:27 PM
		</div>
		<div class="comment_text"><p>Did you see this code in test2.cfm?</p><p>&lt;!--- create captcha ---&gt;<br>&lt;cfif not structKeyExists(application, "captcha")&gt;<br>	&lt;cfset application.captcha = createObject("component", "captchaService").init(configFile="captcha.xml") /&gt;<br>	&lt;cfset application.captcha.setup()&gt;<br>&lt;/cfif&gt;</p><p>You can modify the CFIF to look for url.reinit so you can force a refresh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659201">65</a> by Rick
		posted on 7/2/2008 at 6:01 PM
		</div>
		<div class="comment_text"><p>I do see that code...unfortunately, I'm not quite sure how to modify it to look for url.reinit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659202">66</a> by Raymond Camden
		posted on 7/2/2008 at 6:04 PM
		</div>
		<div class="comment_text"><p>You don't know how to check for the existence of a variable? That's pretty basic CF. I'm not trying to be mean here - please note that - but that is something that all CF developers should have a grip on. There are 2 ways of doing it. isDefined or with structKeyExists. Here is an example of both:</p><p>&lt;cfif not structKeyExists(application,"captcha") or isDefined("url.reinit")&gt;</p><p>or</p><p>&lt;cfif not structKeyExists(application,"captcha") or structKeyExists(url,"reinit")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659205">67</a> by Rick
		posted on 7/2/2008 at 7:03 PM
		</div>
		<div class="comment_text"><p>ah, got it...I do know how to do this. Sorry, have too many things going on at once. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659204">68</a> by Karen
		posted on 9/27/2008 at 1:24 AM
		</div>
		<div class="comment_text"><p>Thanks for the tutorial Raymond, it was a big help. I know very little CF so the instructions that Peter provides w/ the Lyla download were over my head. Your step-by-step explanation and samples gave me enough direction to get my LylaCaptcha functioning perfectly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659203">69</a> by Chris
		posted on 11/3/2008 at 12:33 PM
		</div>
		<div class="comment_text"><p>Hello Gurus,</p><p>I encountered some problems installing Lyla for the first time.  On my local machine running CF8, everything is fine.</p><p>On my production server running CF MX 6.1, none of my images appear.</p><p>Looking at captcha.cfm, I get the following error:</p><p>=====================<br> Attribute validation error for tag CFCONTENT.<br>The tag does not allow the attribute(s) VARIABLE. The valid attribute(s) are DELETEFILE,FILE,RESET,TYPE.</p><p>4 : <br>5 : &lt;cfset variables.captcha = application.captcha.createCaptchaFromHashReference("stream",url.hash) /&gt;<br>6 : &lt;cfcontent type="image/jpeg"  variable="#<a href="http://disq.us/url?url=http%3A%2F%2Fvariables.captcha.stream%3AB0hifdt5eRd7vAEYs1eAdOat-ZM&amp;cuid=3321886" rel="nofollow noopener" title="variables.captcha.stream">variables.captcha.stream</a>#" reset="false" /&gt;<br>=====================</p><p>Any known workarounds for those of us on CF MX 6.1?</p><p>Note I did change the cfcontent type to "image/jpeg" from "image/jpg" which I read was also required - can anyone confirm this?</p><p>Thanks for your great support,<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659206">70</a> by Raymond Camden
		posted on 11/3/2008 at 9:37 PM
		</div>
		<div class="comment_text"><p>I believe you want to remove variable from cfcontent, and after the end of the tag, try either &lt;cfoutput&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Fvariables.captcha.stream%3AB0hifdt5eRd7vAEYs1eAdOat-ZM&amp;cuid=3321886" rel="nofollow noopener" title="variables.captcha.stream">variables.captcha.stream</a>#&lt;/cfoutput&gt; or &lt;cfoutput&gt;#toBinary(<a href="http://disq.us/url?url=http%3A%2F%2Fvariables.captcha.stream%3AB0hifdt5eRd7vAEYs1eAdOat-ZM&amp;cuid=3321886" rel="nofollow noopener" title="variables.captcha.stream">variables.captcha.stream</a>)#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659207">71</a> by Chris
		posted on 11/4/2008 at 12:15 AM
		</div>
		<div class="comment_text"><p>Thanks for your quick suggestions Raymond.</p><p>Unfortunately, it did not completely solve the problem.</p><p>Now I'm receiving the following error:</p><p>====================<br>Error Occurred While Processing Request<br>Element INSTANCE.HASHREFERENCECACHETIMESTAMP is undefined in VARIABLES.</p><p>The error occurred in \Htdocs\test\lyla\captchaService.cfc: line 936</p><p>Called from \Htdocs\test\lyla\captchaService.cfc: line 680</p><p>Called from \Htdocs\test\lyla\captchaService.cfc: line 659</p><p>Called from \Htdocs\test\lyla\captchaService.cfc: line 120</p><p>Called from \Htdocs\test\lyla\captcha.cfm: line 5<br>====================</p><p>This is getting much deeper than my level of understanding so I may need to find an alternative solution.</p><p>If anyone has additional input for us MX 6.1 users, it would be appreciated.</p><p>Thanks for your expertise -<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659211">72</a> by Chris
		posted on 11/6/2008 at 10:25 AM
		</div>
		<div class="comment_text"><p>Just adding these comments I received from Peter J. Farrell, author of Lyla Captcha, in case anyone is following this discussion regarding MX 6.1:</p><p>====================<br>"You cannot server via a stream on 6.1 - you'll need to use the file type createCaptchaFromHashReference("file", url.hash") instead and then use a .cfm page that serves that file via cfcontent."<br>====================</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659208">73</a> by Tim
		posted on 12/17/2008 at 6:35 AM
		</div>
		<div class="comment_text"><p>Does anybody out there have a working sample for version 6.1?  I got it to work on 7 but not 6.1 servers.  Code samples would greatly be appreciated.    I'm aware of the posts regarding version 6 not being able to stream and having to using cf via cfcontent... samples would be great!</p><p>errors i'm getting:<br>captcha The tag does not allow the attribute(s) VARIABLE. The valid attribute(s) are DELETEFILE,FILE,RESET,TYPE</p><p>Thanks in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659210">74</a> by Frank Gerritse
		posted on 5/27/2009 at 4:09 PM
		</div>
		<div class="comment_text"><p>On some sites on CF7 I have the following problem. When restarting the server or de Coldfusion services for some reason. Lylacaptcha won't work The image is not display. But if I change the application name and restart the services again the captcha is working fine untill we restart the services or server for some reason again ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659209">75</a> by Raymond Camden
		posted on 5/27/2009 at 4:19 PM
		</div>
		<div class="comment_text"><p>@Tim: Variable was added to cfcontent in 7. You would need to change the code to save the binary data to a temp file and then use the file attribute.</p><p>@Frank: May be best to ping the Lyla project direct for support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659213">76</a> by Vikie
		posted on 10/31/2009 at 6:13 PM
		</div>
		<div class="comment_text"><p>I think there is no need in captcha at all at the most of the cases. For example, on <a href="http://disq.us/url?url=http%3A%2F%2Fwww.buyselldress.com%3APMm-7zdB5FV7oQwxJA3NpNPfDBY&amp;cuid=3321886" rel="nofollow noopener" title="www.buyselldress.com">www.buyselldress.com</a> we implement fairly simple but effective approach to block spam messages. Several steps are made, but obvious check for mouse movements in browser is best thing to block most of spambots. And this is very convenient for users. I hate captchas as user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659212">77</a> by James
		posted on 11/11/2009 at 1:10 AM
		</div>
		<div class="comment_text"><p>Is Lyla still around, I tried going to the site, but it not up.  Does anyone else have the code I need for this to work? I'm running MX7.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659215">78</a> by Raymond Camden
		posted on 11/11/2009 at 1:28 AM
		</div>
		<div class="comment_text"><p>I'm thinking it is just temporary. I was at <a href="http://disq.us/url?url=http%3A%2F%2Flyla.maestropublishing.com%2F%3AHkqay4lgiO57zKGxVClWi8O08eM&amp;cuid=3321886" rel="nofollow noopener" title="http://lyla.maestropublishing.com/">http://lyla.maestropublishi...</a> a few days ago and it was fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659218">79</a> by Lisa
		posted on 2/15/2010 at 3:21 AM
		</div>
		<div class="comment_text"><p>I am hoping you can offer a bit of advice. I have successfully installed the Lyla Captcha to several websites all residing on my CF7 server. I have moved another site, who I had hosted elsewhere on a CF8 server and then moved it onto my CF7 server. The captcha broke because in CF7 there is no cfimage tag. Now, I copy the exact files, code, etc. for the CF7 captcha into this new site but keep getting an error. Either a cfscript error (no ending tag --which there is) or a "captcha not available" error. I have the cfapplication set up exactly as the others with no luck. Any suggestions? I'm running out of ideas to try. Thank you so much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659217">80</a> by Raymond Camden
		posted on 2/15/2010 at 6:38 PM
		</div>
		<div class="comment_text"><p>Not sure what I ca do here to help. It sounds like you have multiple issues. I'd try to focus in on one at a time. The "captcha not available" error is something the Lyla folks discuss on their FAQ I believe, and you should check there first. (<a href="http://disq.us/url?url=http%3A%2F%2Flyla.maestropublishing.com%2FFAQ.cfm%29%3AmXznqxODnT-jWNGha8Hc2THN32k&amp;cuid=3321886" rel="nofollow noopener" title="http://lyla.maestropublishing.com/FAQ.cfm)">http://lyla.maestropublishi...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659214">81</a> by Lisa
		posted on 2/16/2010 at 5:24 AM
		</div>
		<div class="comment_text"><p>I have already looked at Lyla's site and it's already in an persistent scope. Just can't figure out why the exact same code is working for 5+ sites and not for this one. 20 minute task has become 3 days...</p><p>Thanks though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659219">82</a> by Sebastian VanDyke
		posted on 2/24/2010 at 1:20 AM
		</div>
		<div class="comment_text"><p>Thanks for this.  Lifesaver dude.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659220">83</a> by Bobbi
		posted on 7/8/2010 at 10:29 PM
		</div>
		<div class="comment_text"><p>I'm using captcha in one of my forms.  Yet for some reason, I'll get an error that the hash(form.password)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659221">84</a> by Bobbi
		posted on 7/8/2010 at 10:34 PM
		</div>
		<div class="comment_text"><p>Sorry about previous post.<br>I'm using captcha in a form (myform.cfm), where I have an input field for the password (userInput), and a hidden field (hashVal) that has its value set to #rndHash#, which is a generated hash value.  Then in my action form (myaction.cfm) I compare the values of "userInput" and "hashVal" .  If they match the form is processed, else the user is notified that an invalid password was entered.   Sometimes, I get this notification even though I can see that the hash value of "userInput" is equal to the value of "hashVal".  I can't figure out why this happens.  Help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659223">85</a> by Raymond Camden
		posted on 7/8/2010 at 10:47 PM
		</div>
		<div class="comment_text"><p>Not sure what to tell you. If it works sometimes and not others, it could mean many things. Perhaps you can share your code (via pastebin).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659230">86</a> by Bobbi
		posted on 7/9/2010 at 4:07 PM
		</div>
		<div class="comment_text"><p>I'd be glad to!  What's pastebin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659228">87</a> by Raymond Camden
		posted on 7/9/2010 at 6:37 PM
		</div>
		<div class="comment_text"><p>Free service that lets you paste up code and share with others.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F%3AoZdOJq_TOVqvg-_kPu0hsvDlN4I&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/">http://pastebin.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659229">88</a> by Bobbi
		posted on 7/12/2010 at 5:00 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I've posted my code to pastebin.  Thanks!!!<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F0yayvW88%3Axewy5V1BUYrIgNcV0Qt77ewgCNs&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/0yayvW88">http://pastebin.com/0yayvW88</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659231">89</a> by Raymond Camden
		posted on 7/12/2010 at 5:08 PM
		</div>
		<div class="comment_text"><p>Nothing really stands out. How do you generate your random string?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659232">90</a> by Bobbi
		posted on 7/12/2010 at 5:18 PM
		</div>
		<div class="comment_text"><p>I think it's just an attribute of the cfimage tag:<br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Fhtmldocs%2Fhelp.html%3Fcontent%3DTags_i_02.html%3AqNmY0Lnd7N_vntUJI2S0Dlxf3D4&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/htmldocs/help.html?content=Tags_i_02.html">http://livedocs.adobe.com/c...</a></p><p>Thanks!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659233">91</a> by Raymond Camden
		posted on 7/12/2010 at 5:20 PM
		</div>
		<div class="comment_text"><p>No - you create the string, not the tag. The tag just takes your string and makes it ugly in the picture. I think you may need to provide your _complete_ code templates, not just snippets.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659234">92</a> by Bobbi
		posted on 7/12/2010 at 5:27 PM
		</div>
		<div class="comment_text"><p>Sorry.  I've posted all of the code.  I was trying to prevent you from having to wade through all of the code.  But in doing so, I missed the code to generate the image:<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FE4DQubAS%3AI0SXDCmIU4coC_DEHnBiQVdhb5k&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/E4DQubAS">http://pastebin.com/E4DQubAS</a></p><p>Thanks!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659238">93</a> by Raymond Camden
		posted on 7/13/2010 at 12:31 AM
		</div>
		<div class="comment_text"><p>You got me. I don't see any reason why it would fail. I'd maybe add a cflog before your cfif in the action page and write out the two values. Maybe they are NOT exactly the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659239">94</a> by Cassi
		posted on 9/20/2011 at 3:00 AM
		</div>
		<div class="comment_text"><p>I tried to modify the width setting in captcha.xml and captchaServiceConfigBean.cfc but it doesn't change.  Please advise how to change the width of the captcha image.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659240">95</a> by Raymond Camden
		posted on 9/20/2011 at 3:03 AM
		</div>
		<div class="comment_text"><p>Doesn't just adding width="..." to the cfimage tag do it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659241">96</a> by Donnie Carvajal
		posted on 12/28/2011 at 9:17 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I am having a problem with older versions of IE on older OS's popping up SSL warnings and if the warning is declined, the CAPTCHA image will not load.  We do not see this issue in any other browsers or newer versions of IE/OS.</p><p>I've implemented the CAPTCHA image in the same fashion that you have mentioned in this post.  I have an img tag with the src calling a CF template that creates the image and uses cfcontent to load the image.  The img src attribute is set to have an https url, since the CF template that creates the image is on a different server.</p><p>Are you aware of any issues using this method and SSL warning on IE?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659242">97</a> by Raymond Camden
		posted on 12/28/2011 at 10:04 PM
		</div>
		<div class="comment_text"><p>If your site is not on https and the image is, isn't that a normal mixed content warning?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659243">98</a> by Donnie Carvajal
		posted on 12/28/2011 at 10:11 PM
		</div>
		<div class="comment_text"><p>Thanks for the quick reply.</p><p>Actually, the form is https and the img src is https, but we are still seeing the warning, which doesn't make sense why a mixed content warning would come up.  If we decline it, the CAPTCHA image is broken, so we are pretty confident it is the img src that is causing the warning.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659244">99</a> by Raymond Camden
		posted on 12/28/2011 at 10:13 PM
		</div>
		<div class="comment_text"><p>Any chance I can see it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659245">100</a> by Donnie Carvajal
		posted on 12/28/2011 at 10:49 PM
		</div>
		<div class="comment_text"><p>Sure can. <a href="https://disq.us/url?url=https%3A%2F%2Fwww.hospicebr.org%2Fexplore.cfm%2Fvolunteerform%2F%3AM3EuR9RV0y3R1ylBg9t_-ZvUtW8&amp;cuid=3321886" rel="nofollow noopener" title="https://www.hospicebr.org/explore.cfm/volunteerform/">https://www.hospicebr.org/e...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659246">101</a> by Raymond Camden
		posted on 12/28/2011 at 10:55 PM
		</div>
		<div class="comment_text"><p>When I try to open the captcha, <a href="https://disq.us/url?url=https%3A%2F%2Flib.tfmx.com%2Fcaptcha%3FhashReference%3D85CE0491-3FFF-59FD-B723606A3022B88E%3Ah0L6pRf1fDMR9btqdnURpkKwO5A&amp;cuid=3321886" rel="nofollow noopener" title="https://lib.tfmx.com/captcha?hashReference=85CE0491-3FFF-59FD-B723606A3022B88E">https://lib.tfmx.com/captch...</a>, it never responds. You sure the server is available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659247">102</a> by Donnie Carvajal
		posted on 12/28/2011 at 11:05 PM
		</div>
		<div class="comment_text"><p>It's available and loaded for me. Did the image load for you when you first loaded the form?  If so, then the server is available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659248">103</a> by Raymond Camden
		posted on 12/28/2011 at 11:09 PM
		</div>
		<div class="comment_text"><p>Nope, no image. Maybe it's only available to you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659249">104</a> by amy
		posted on 9/4/2013 at 5:20 AM
		</div>
		<div class="comment_text"><p>All this time and this resource is STILL useful. :) I'm working on a project hosted on an old CF7 box. I grabbed your zip file, popped it up on the server and the test files run great.</p><p>Problem is -- forms are spread over the site. I've tried to implement this code in a form... but I am obviously failing on how to put paths in the create captcha cfif.</p><p>The files are in /Common/lyla. How would I reference them?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659252">105</a> by Raymond Camden
		posted on 9/4/2013 at 5:20 AM
		</div>
		<div class="comment_text"><p>Use a cfmapping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659250">106</a> by amy
		posted on 9/4/2013 at 5:51 AM
		</div>
		<div class="comment_text"><p>Logical /lyla mapped to d:\inetpub\leithpetwerks\common\lyla . In creating the object, though, I don't recall how to tell it the cfc resides elsewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659253">107</a> by Raymond Camden
		posted on 9/4/2013 at 6:36 AM
		</div>
		<div class="comment_text"><p>Um... I don't get your comment. :) Can you rephrase it?</p></div>
	</div>
</div>
		