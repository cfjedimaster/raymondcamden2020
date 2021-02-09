
<div class="comment" id="c_1713622495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622495">1</a> by O?uz Demirkap?
		posted on 11/11/2005 at 2:47 AM
		</div>
		<div class="comment_text"><p>I will test now. Thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622494">2</a> by Raymond Camden
		posted on 11/11/2005 at 2:48 AM
		</div>
		<div class="comment_text"><p>Ack - now I'm scared. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622496">3</a> by O?uz Demirkap?
		posted on 11/11/2005 at 4:11 AM
		</div>
		<div class="comment_text"><p>Ray, I have an error msg on print as following.</p><p>11/11/05 12:09 AM<br>Script Name: 	/blogcfc/print.cfm?id=7C6CFD18-913A-7E96-5F26371C8853774D<br>Browser: 	Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.8) Gecko/20051025 Firefox/1.5<br>Referer: 	http://localhost/blogcfc/index.cfm<br>Message: 	Element ROOTURL is undefined in REQUEST.<br>Type: 	coldfusion.runtime.CfErrorWrapper</p><p>Is that a local problem on my local or a general error on blog software? What do you think?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622490">4</a> by Raymond Camden
		posted on 11/11/2005 at 4:17 AM
		</div>
		<div class="comment_text"><p>You didn't copy a file right. Request.ROOTURL used to be the variable name, not it is Application.rooturl. I double checked source and it is in there right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622491">5</a> by O?uz Demirkap?
		posted on 11/11/2005 at 4:25 AM
		</div>
		<div class="comment_text"><p>Ok. I will check it again.</p><p>A new bug: When there is a Unicode entry title and when I click this title to see details of entry I get error "Sorry<br>There are no blog entries available that match your criteria."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622493">6</a> by Raymond Camden
		posted on 11/11/2005 at 4:29 AM
		</div>
		<div class="comment_text"><p>Can you give me a URL? FYI, I'm fixing to post yet another update, but it is Access only, so you can ignore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622500">7</a> by O?uz Demirkap?
		posted on 11/11/2005 at 4:32 AM
		</div>
		<div class="comment_text"><p>I have on my local but I can put on a server. I will organize this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622492">8</a> by O?uz Demirkap?
		posted on 11/11/2005 at 4:48 AM
		</div>
		<div class="comment_text"><p>Hmm now there is a strange situation.</p><p>I made a fresh installation on a clean domain and you can reach test page via following link.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion.name%2Fblogcfc%2F%3A_CM5gPKKEg5klf4sMWnvJLQx4ts&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfusion.name/blogcfc/">http://coldfusion.name/blog...</a></p><p>The bug that I let you know about Unicode entry title is not on this server but on my local.</p><p>When I compare local and server there is just one difference, webserver. On my local I have Apache 2.x but on server IIS 6. A strange situation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622498">9</a> by johnb
		posted on 11/11/2005 at 3:56 PM
		</div>
		<div class="comment_text"><p>Ray, did timezone offsets make it into 4.0?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622499">10</a> by Raymond Camden
		posted on 11/11/2005 at 5:10 PM
		</div>
		<div class="comment_text"><p>johnb: Yes</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622502">11</a> by Doug Cain
		posted on 11/11/2005 at 6:30 PM
		</div>
		<div class="comment_text"><p>Found the request.rootUrl bug in line 40 of print.cfm in my download of blog cfc 4 aswell, it's an easy fix (change it to application.rooturl).</p><p>Nice work ray, bit of mucking about upgrading from 3.7 but all good now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622497">12</a> by Raymond Camden
		posted on 11/11/2005 at 6:41 PM
		</div>
		<div class="comment_text"><p>Ahah! Will have an updated zip in a few minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622501">13</a> by Tom Kamnikar
		posted on 11/11/2005 at 8:00 PM
		</div>
		<div class="comment_text"><p>I just installed 3.9 about two weeks ago.. so I'm new to blogCFC. How do i go about installing 4.0 without losing all my entries and layout work that i have already done? I didnt see any upgrade instructions anywhere..</p><p>Thanks for the help</p><p>TOM</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622503">14</a> by Randy Everhart
		posted on 11/12/2005 at 4:43 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks for all your work on Blog 4.0</p><p>Just getting started, with your BLOG 4.0.  I installed everything using defaults and got it up and running then decided to try to set it up for multiple Blogs, I changes the Blog Field in the DataBase from "default" to "Somethingelse". then I changed the application.cfm blogname to "Somethingelse" deloded the blog and recieved and error message <br>"somethingelse" isn&amp;apos;t registered as a valid blog.<br>I thought I followed the posted instructions put now I'm stuck as to what I should check next</p><p>addition info MSAccess Database Coldfusion 6.1 Host</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622504">15</a> by Raymond Camden
		posted on 11/12/2005 at 7:21 PM
		</div>
		<div class="comment_text"><p>You must edit the ini file to add a section for [SomethingElse].</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622506">16</a> by Randy everhart
		posted on 11/13/2005 at 1:14 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond,</p><p>I got it working,  it's been a learning process...</p><p>Thank You for again, super application</p><p>Randy Everhart</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622505">17</a> by erik
		posted on 10/13/2006 at 2:09 PM
		</div>
		<div class="comment_text"><p>&gt;&gt;&gt;&gt;<br>Just getting started, with your BLOG 4.0. I installed everything using defaults and got it up and running then decided to try to set it up for multiple Blogs, I changes the Blog Field in the DataBase from "default" to "Somethingelse". then I changed the application.cfm blogname to "Somethingelse" deloded the blog and recieved and error message<br>"somethingelse" isn&amp;apos;t registered as a valid blog.<br>&lt;&lt;&lt;&lt;</p><p>just wondering how u set up multiple blogs - by adding more folders under the `client` folder?<br>i am having the same problem with version 4</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622507">18</a> by Raymond Camden
		posted on 10/13/2006 at 3:23 PM
		</div>
		<div class="comment_text"><p>You don't add more folders under the client folder - rather you have one client folder per blog.</p><p>I would _highly_ recommend however that you upgrade to the latest release.</p></div>
	</div>
</div>
		