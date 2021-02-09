
<div class="comment" id="c_1713620592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620592">1</a> by Christian Cantrell
		posted on 9/3/2005 at 1:18 AM
		</div>
		<div class="comment_text"><p>I hope you add another part to your series entitled "Using ColdFusion to Configure ColdFusion".  I've used INI files, and I've used plenty of XML, but the best way I've found to configure a CF application is with CF itself.  It's like XML, only smarter. :)</p><p>Christian</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620598">2</a> by Paul Roe
		posted on 9/3/2005 at 1:55 AM
		</div>
		<div class="comment_text"><p>It may appear smarter by it's not cross language friendly. If all of your settings are in cf you cant use those same settings in your php, asp, or perl cgi etc.. applications.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620593">3</a> by stylo~
		posted on 9/3/2005 at 3:10 PM
		</div>
		<div class="comment_text"><p>&gt;you cant use those same settings in your php, asp, or perl cgi etc.. applications</p><p>Most people don't have those other applications and on the extremely rare occasion that anyone actually needed that, he could rewrite it in 4 minutes.</p><p>Of course, if cfml is no better, then might as well use xml.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620596">4</a> by Brian Kotek
		posted on 9/3/2005 at 8:01 PM
		</div>
		<div class="comment_text"><p>Ray just thought I'd get your thoughts on two things. First, is this first example better or worse than the second, and if so, why (hopefully they'll show up)?</p><p>&lt;emailaddresses&gt;<br>&lt;jobsform&gt;hr@foo.com&lt;/jobsform&gt;<br>&lt;contactform&gt;contact@foo.com&lt;/contactform&gt;<br>&lt;/emailaddresses&gt;</p><p>&lt;emailaddresses&gt;<br>&lt;emailaddress name="jobsform" value="hr@foo.com"/&gt;<br>&lt;emailaddress name="contactform" value="contact@foo.com"/&gt;<br>&lt;/emailaddresses&gt;</p><p>Basically one uses XML text and the other uses XML attributes.</p><p>And second, just wanted to point out (you know this but others may not) that you can often make the XML parsing/handling easier by using XPath.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620599">5</a> by Will
		posted on 9/3/2005 at 9:12 PM
		</div>
		<div class="comment_text"><p>This isn't gonna really add anything to the discussion, but I was all cozied up to my puter last night, had a drink, and was  really lookin' forward to this part of the series. I made it to this point: <br>&lt;username&gt;gbush&lt;/username&gt;<br>&lt;password&gt;imdumberthanrock&lt;/password&gt;</p><p>and I thought jeeez ... can ya go for like 30 minutes without preaching about Bush? Especially in a programming tutorial?</p><p>Kinda soured it a little for me. Just speaking my mind and for myself here ... Yeah I know, I don't *have* to read your blog, etc.. But I like reading it. :)</p><p>Will</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620597">6</a> by Raymond Camden
		posted on 9/3/2005 at 9:37 PM
		</div>
		<div class="comment_text"><p>Will - ok - point taken. Now, I will say I talk politics very rarely on this blog, so it's not like every 30 mins, but it didn't belong in the example. Thanks for the gentle nudge.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620604">7</a> by Luis Majano
		posted on 9/7/2005 at 1:11 AM
		</div>
		<div class="comment_text"><p>I agree with placing settings in XML files, but what about, just using the database.  In my case,  we use the power of the database for all our setting files.  We have our application tables and our setting tables.  We include a manager for the settings in all our apps. And basically maintain all our configurations in the database.</p><p>No parsing, no file operations.  Just queries.</p><p>Luis Majano<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.luismajano.com%3AOL-Qj7_Gj7m0xMcyQu5RZivnAhE&amp;cuid=3321886" rel="nofollow noopener" title="www.luismajano.com">www.luismajano.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620603">8</a> by eric
		posted on 9/7/2005 at 5:03 AM
		</div>
		<div class="comment_text"><p>if the configuration is complex i would use XML but for small applications - i would stick with a ini file as they are alot more intuitive and anybody can read a simple ini file top down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620605">9</a> by Jake
		posted on 9/8/2005 at 4:55 PM
		</div>
		<div class="comment_text"><p>Thanks Ray! I'm right now in the process of converting .ini files (which aren't unicode friendly and causing me troubles) to XML. Great timing!</p><p>I've also noticed that BlueDragon seems to have a problem with the get/setprofilestring, strangely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620602">10</a> by Raymond Camden
		posted on 9/12/2005 at 9:59 PM
		</div>
		<div class="comment_text"><p>Hey Brain, I'm just now getting around to answering your email. The honest answer is - I don't know what is right. My _gut_ tells me the first way is right, since I don't see the email address an an "attribute", but more of a value. I don't think that is very clear. Here is an example... if I wanted o specify html or plain text, I'd use an attribute instead. That feels like maybe it is more appropriate.</p></div>
	</div>
</div>
		