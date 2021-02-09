
<div class="comment" id="c_1713619047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619047">1</a> by pat branley
		posted on 7/15/2005 at 4:29 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>we had this issue on one of our production boxes. It also has implications with flash remoting and cfchart (both are URLs to cfm pages or servlets that dont map to physical files)</p><p>the basic way around it is to turn this off in IIS and use the Missing Template Handler page in CFAdmin to point to your 404 error. So IIS doesnt care if the page exists and lets CF deal with it. If  CF cant find it, then the Missing Template Handler kicks in.</p><p>Hope this helps</p><p>Pat</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619052">2</a> by Anthony
		posted on 7/15/2005 at 6:59 AM
		</div>
		<div class="comment_text"><p>What I've done on boxes with multiple sites is change the 404 error on that site only from it's default file to a URL of a coldfusion page. then you have that page parse the cgi variable (can't remember which right now) to figure out where they were trying to go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619051">3</a> by Jeff Coughlin
		posted on 7/15/2005 at 9:22 AM
		</div>
		<div class="comment_text"><p>For years I've come across many issues while trying to overcome the SES problems by using domain/index.cfm/var/varAnswer.</p><p>So earlier this year I came up with the idea to use Spike Milligan's FriendlyURL servlet to look for domain/go/.  When it finds it I have it load a custom file (go.cfm, loadMe.asp, whatever) and it does the same work in the background (similar concept to what you're doing).</p><p>Of course Spike's servlet didn't have this feature at first, so when I had him down here in Jan/Feb 2005 I had him modify it to include that feature.  Five minutes later I was up and running (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.midhosp.org%3A5a9Fmn6bel9RtehfRVYhe2rd-iE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.midhosp.org">http://www.midhosp.org</a>).</p><p>It will solve this current problem and many future problems (trust me, this technique has a few drawbacks that affected me on several sites).  The downside is that the server requires a servlet...  and I'm guessing many of your users wont want to go this route.</p><p>However, since your code already exists, it would only take a minute to add this.  If you did you could just give your users the option to activate it.  Thoughts?  Suggestions?</p><p>Which reminds me... I have been diligent to upgrade each version of blogCFC as each one has been released.  Is this new SES url change optional?  I notice that every time Ray makes a change, MXNA re-posts "many" of his recent blog posts (and other blogCFC users).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619055">4</a> by Raymond Camden
		posted on 7/15/2005 at 6:03 PM
		</div>
		<div class="comment_text"><p>Pat - my problem with the missing template feature is that it iserver wide. I need to specify something _per_ domain.</p><p>Jeff: that's the thing - I'm looking for a solution that uses no external resources, if possible. Also - no, the SES change applies to all new posts. You can modify the makeLink function if you want. I've never seen the behavior you descrive though. This is the first change in a while where the URLs have changed, so RSS feeds should have been pretty stable for a long time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619056">5</a> by Jeff Coughlin
		posted on 7/15/2005 at 6:12 PM
		</div>
		<div class="comment_text"><p>Each time you have made a change to the new SES feature I've seen people comment about the MXNA replication problem.  I'm guessing at this point that you probably just never noticed their questions/comments (although I think I only saw one response in one of your blog posts... Probably after the first time you played with SES on the blog.  I've seen other comments in other blogs that have upgraded to your SES addition and had their sites replicated all over again in MXNA).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619058">6</a> by Raymond Camden
		posted on 7/15/2005 at 6:20 PM
		</div>
		<div class="comment_text"><p>Jeff - the SES changes were only in the recent beta. I did make search engine optimization changes before that, but the URL did not change. Since the SES changes involve the URLs changing, I would except MXNA to probably pick them up again - but I guess I just don't see this as a big deal. Is this really a problem for folks? It should be a one time thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619057">7</a> by Jeff Coughlin
		posted on 7/15/2005 at 6:32 PM
		</div>
		<div class="comment_text"><p>I guess I'm just wondering what MXNA will look like when all blogCFC users agregated on it they upgrade :).</p><p>Here's an example of Ray Camden's blog aggregation on MXNA recently:<br><a href="http://disq.us/url?url=http%3A%2F%2Fweblogs.macromedia.com%2Fmxna%2Freports%2FfeedReport%2Findex.cfm%3FfeedId%3D141%26feedName%3DRaymond%2520Camden%3AUxI6-qhvGSlT7vBN9Zuo-Zin9HI&amp;cuid=3321886" rel="nofollow noopener" title="http://weblogs.macromedia.com/mxna/reports/feedReport/index.cfm?feedId=141&amp;feedName=Raymond%20Camden">http://weblogs.macromedia.c...</a></p><p>Hover over the last few posts.  Keep going and you'll see many of them repeast over agin (the last time you did a change to the code I'm assuming).  I believe I saw you do this 3 times over the last month.  Other's who have played with your betas had the same thing happen on MXNA.</p><p>Its probably just the way MXNA is setup.  Maybe they need to change the way they look for RSS changes (insteadd of URL changes).  Maybe the problem is not with your code, but rather we should bring this to their attention.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619059">8</a> by Raymond Camden
		posted on 7/15/2005 at 6:39 PM
		</div>
		<div class="comment_text"><p>Ah, this is not surprising. My urls have changed twice now since I changed the format of my SES. Either way - I'm not too concerned. Folks tend to upgrade slowly as it stands. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619120">9</a> by Rob Gonda
		posted on 7/15/2005 at 7:00 PM
		</div>
		<div class="comment_text"><p>I tried a couple of things too over the past couple of months. Thus far no good solution. I found that I could change the IIS 404 error page to point to a CF page, that will act as a controller and redirect traffic, and in case it cant find it, I change the page header and include the IIS 404. Well, that worked perfectly, with the excpetion that it was excesively slower<br>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619115">10</a> by Anthony Hixon, Jr.
		posted on 8/3/2005 at 6:28 AM
		</div>
		<div class="comment_text"><p>I'm receiving "Server Error</p><p>--------------------------------------------------------------------------------<br>Either the Macromedia application server is unreachable or it does not have a mapping to process this request.</p><p>Is this related to the same issue or something else? My site is hosted by VIUX so I won't be able to turn that setting off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619117">11</a> by Raymond Camden
		posted on 8/3/2005 at 6:31 AM
		</div>
		<div class="comment_text"><p>Hmm, not quite sure what it could be. Maybe check the logs for more info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619118">12</a> by Anthony Hixon, Jr.
		posted on 8/3/2005 at 6:45 AM
		</div>
		<div class="comment_text"><p>Everything works perfect except for any new blog entries I make and you try to follow the new link style:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.foo.com%2Ffoo%2Findex.cfm%2Fx%2F1%3A_ZdsZ5M-ECSeok8AJGpw6O1YbJc&amp;cuid=3321886" rel="nofollow noopener" title="www.foo.com/foo/index.cfm/x/1">www.foo.com/foo/index.cfm/x/1</a></p><p>All of my old entries work fine. If it were related to the IIS issue, I should see a 404 instead of the Macromedia error correct?</p><p>I don't have access to any IIS logs from my hosting company so I really don't know how to troubleshoot this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619110">13</a> by Brett Cortese
		posted on 1/18/2006 at 3:53 AM
		</div>
		<div class="comment_text"><p>I received this error "Either the Macromedia application server is unreachable or it does not have a mapping to process this request.  A simple IIS restart addressed the issue.  I believe IIS had some initial issues when enabling execute permissions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619116">14</a> by Rob Wilkerson
		posted on 2/18/2006 at 7:20 PM
		</div>
		<div class="comment_text"><p>I'm running into this problem while developing on a WinXP machine (IIS 5.1).  Can anyone point me in the right direction to correct the problem.  I don't mind tweaking a setting manually, but I can't seem to find whatever it is I need to tweak.</p><p>Any help/suggestions would be appreciated.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619160">15</a> by Raymond Camden
		posted on 2/19/2006 at 3:42 AM
		</div>
		<div class="comment_text"><p>I don't have a IIS 5 machine to test with - but maybe you can try a date-based search on google? Filter to the times when 5.1 was more the standard is what I mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619119">16</a> by Elko van den Busken
		posted on 6/6/2006 at 6:22 PM
		</div>
		<div class="comment_text"><p>We had the same problem with one of our servers.</p><p>We restarted the "Macromedia JRun CFusion Server" and our problem was solved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619114">17</a> by Elko van den Busken
		posted on 6/6/2006 at 6:24 PM
		</div>
		<div class="comment_text"><p>In addition:</p><p>I meant in the services panel of the server itself (and NOT the entire server ofcourse).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619113">18</a> by Allen
		posted on 12/10/2009 at 9:14 PM
		</div>
		<div class="comment_text"><p>May be having a similar SES issue here.  I'm curious if anyone has new suggestions or follow up to this one.  And yes, I have been searching around Google for them, too.</p><p>Thanks!</p></div>
	</div>
</div>
		