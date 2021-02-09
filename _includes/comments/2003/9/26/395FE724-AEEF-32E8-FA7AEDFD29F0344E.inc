
<div class="comment" id="c_1713614973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614973">1</a> by Tony Brandner
		posted on 9/26/2003 at 5:48 PM
		</div>
		<div class="comment_text"><p>So the problem goes away with the newest version of Apache? That's interesting.</p><p>We've been having the problem for a month or so, and it was driving us crazy. We fixed the problem by changing a setting in JRUN for multi-homed servers, but that causes CFMX to slow to a crawl.</p><p>It's kind of a catch-22.</p><p>Interestingly, now we find all sorts of people talking about this issue. Still no solutions that will fix our error.</p><p>We're not using Apache 2.x, and after these problems I think we're all a little nervous about making a change like that. What are your thoughts on Apache 1.x and 2.x? Would it be worth considering the change? Are there any other known issues with Apache 2.x and CF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614974">2</a> by Matt Liotta
		posted on 9/26/2003 at 6:58 PM
		</div>
		<div class="comment_text"><p>Considering that Apache 2.0.44 works fine with virtual hosts when not using CFMX, I believe the issue lies with CFMX and not Apache. I am glad upgrading to the latest version fixed your problem, but I don't think the real problem has been fixed yet in CFMX. For example, when the next version of Apache comes out that you decide to upgrade to will the problem repeat? Who knows, but obviously it is possible and that sucks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614980">3</a> by Raymond Camden
		posted on 9/26/2003 at 7:01 PM
		</div>
		<div class="comment_text"><p>Matt: Actually you are quite right. I noticed that any HTML request worked fine. Of course, maybe CFMX only supports 2.0.47? I'd have to check the docs and they are a bit hard to search so iI won't bother.</p><p>Tony: I'm not using Apache/Virtual Servers on a production box, but I can say that everything seems very zippy. I'm using IIS/Virtual Servers on a production box and everything runs just fine. I can't give you my thoughts re: Apache1/2 because I'm  really just a neophyte at both. I use em - but just the simple features really, and I do not use it a on a production server. (Well, not w/ CF anyway.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614977">4</a> by Matt Knight
		posted on 9/26/2003 at 8:09 PM
		</div>
		<div class="comment_text"><p>I have tested CFMX 6.1 with Apache 1.3.X and 2.0.x, both with over 100 vhosts.  The issue comes from CF caching the domain info from the request.  There is an option to tell CF not to cache the domain info.  Can't remember where I did it at (been a few months) but it fixed our problems right away.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614976">5</a> by Matt Liotta
		posted on 9/26/2003 at 8:18 PM
		</div>
		<div class="comment_text"><p>Raymond should have probably mentioned that this was already discussed on a mailing list where he indicated that he did change the "cacherealpath" setting and still had the problem.</p><p>I also noticed the following blog entry from a Macromedia employee that seems to also think an Apache upgrade is a solution. I continue to disagree.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.talkingtree.com%2Fblog%2Findex.cfm%3Fdata%3D20030926%23DEA0BB3D-45A6-2844-7E5C7E92D080057C%3AsbRjqKVTub8kB-M5uwrppXwFmOo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.talkingtree.com/blog/index.cfm?data=20030926#DEA0BB3D-45A6-2844-7E5C7E92D080057C">http://www.talkingtree.com/...</a></p></div>
	</div>
</div>
		