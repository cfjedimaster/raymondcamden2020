
<div class="comment" id="c_1713649627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649627">1</a> by Cole Barksdale
		posted on 1/27/2006 at 1:38 AM
		</div>
		<div class="comment_text"><p>I've used a datasource for client storage and what a nightmare that turned out to be.</p><p>At first it wasn't so bad, but then there were so many records that it was crashing JRun. JRun would start and then at the first browser request, it would process and process and process and the site would never come up and then all of the resources would be used and then I'd get the "Application server..." error thing.</p><p>It took me quite a while to figure out what was going on with the server, but when I finally did, I vowed never to use a datasource as client storage.</p><p>Of course this was just my experience with it. At the time, I was running CFMX 7.0, Fedora Core 3, MySQL 4.1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649648">2</a> by Raymond Camden
		posted on 1/27/2006 at 1:42 AM
		</div>
		<div class="comment_text"><p>Interesting. Most of the time when I've heard people complain, it was when they were using the Registry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649636">3</a> by Raymond Camden
		posted on 1/27/2006 at 1:43 AM
		</div>
		<div class="comment_text"><p>Oh - now I have heard that turning off the client updates (last hit, etc) helps quite a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649638">4</a> by Mike Rankin
		posted on 1/27/2006 at 2:00 AM
		</div>
		<div class="comment_text"><p>I once worked on a site that started getting LOTS of traffic.  While I don't use client variables much any more, putting them in cookies is a good way to push some of the load out to the visitor's computer.  With the power of today's servers and databases, it's usually not as important as it once was, IMHO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649643">5</a> by Scott Stroz
		posted on 1/27/2006 at 2:38 AM
		</div>
		<div class="comment_text"><p>I sued cookie for an early application I developed, but only becasue I did not know any better.  It has since been changed to datasource.</p><p>On a side note, I have worked with an application that uses (well, creates, I am not sure it uses them all) over 900 client variables.  Obviously, this was in a datasource.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649646">6</a> by Michael Dinowitz
		posted on 1/27/2006 at 2:44 AM
		</div>
		<div class="comment_text"><p>There is a price to using client vars in cookies and that is that every browser that comes to the site gets a memory based structure called client. This is not a problem until you get a lot of bots hitting your site. Each bot hit is it's own client var and it can bring down your server in a pseudo-memory leak<br>(<a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogoffusion.com%2Findex.cfm%2F2005%2F11%2F28%2Fpseudomemory-leak%29%3AR5Zhy-pMtH-u8aJS0kS4s1ql-0I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.blogoffusion.com/index.cfm/2005/11/28/pseudomemory-leak)">http://www.blogoffusion.com...</a></p><p>I still use client vars in cookies but have additional code that prevents them from being set for the most popular bots. That being done, it's a lot less traffic than DB and much safer than the registry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649647">7</a> by Peter Tilbrook
		posted on 1/27/2006 at 3:11 AM
		</div>
		<div class="comment_text"><p>I use cookies only because my current hosting provider keeps screwing around with server settings and I got sick of logging into the site and seeing errors all the time related to Client vars. Hopefully new host CFDynamics will be better - then back to database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649650">8</a> by Craig Taylor
		posted on 1/27/2006 at 6:54 AM
		</div>
		<div class="comment_text"><p>There are actually a few reasons to use client vars. I have been using client vars with database storage for sometime. The main reason I use them is for true failover support within a clustered environment. Also, they are handy for storing persistent information between browser sessions for as long as you specify within the administrator. For example, customized site preferences, styles, and the alike.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649652">9</a> by Shigeru
		posted on 1/27/2006 at 2:48 PM
		</div>
		<div class="comment_text"><p>We use a datasource for client storage with our product.<br>But it is one of bottle-neck about performance.<br>I've heard that there are some problems in a purges processing and a purges schedule.<br>And sometimes its problem causes crash ColdFusion(JRun) .<br>One of our developer asked to a developer of Macromedia very before.<br> What is a best practice for client storage?<br>The answer was "cookie".</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fcfusion%2Fknowledgebase%2Findex.cfm%3Fid%3Dtn_19590%3ANrxC_hPJ8QBMsfnqXQreCUOSLaQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/cfusion/knowledgebase/index.cfm?id=tn_19590">http://www.macromedia.com/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649653">10</a> by Raymond Camden
		posted on 1/27/2006 at 7:29 PM
		</div>
		<div class="comment_text"><p>Interesting perspectives here. Shigeru - I was wondering - did you try disabling the updates for client vars? Anyway - the whole reason for my Ask a Jedi series was to flesh out opinions like this - so thank you to everyone in the thread.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649654">11</a> by Che Vilnonis
		posted on 1/27/2006 at 9:18 PM
		</div>
		<div class="comment_text"><p>So, I were to implement option #3 from Michael Dinowitz's link at (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogoffusion.com%2Findex.cfm%2F2005%2F11%2F28%2Fpseudomemory-leak%29%3AR5Zhy-pMtH-u8aJS0kS4s1ql-0I&amp;cuid=3321886" rel="nofollow noopener" title="www.blogoffusion.com/index.cfm/2005/11/28/pseudomemory-leak)">www.blogoffusion.com/index....</a>...</p><p>bots would continue to be able to index my site? I ask because I have a tracking script that is no longer picking up the bots since I've implemented this code.</p></div>
	</div>
</div>
		