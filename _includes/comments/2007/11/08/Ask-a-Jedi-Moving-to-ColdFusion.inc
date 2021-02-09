
<div class="comment" id="c_1713674156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674156">1</a> by Sammy Larbi
		posted on 11/8/2007 at 8:39 PM
		</div>
		<div class="comment_text"><p>Re: hosting, it might not be a bad idea if the questioner has enough clients and/or start up funds to invest in a box at Rackspace (or some other managed host) and CF8, and do the hosting personally.  It might result in an extra source of income, anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674153">2</a> by Terrence Ryan
		posted on 11/8/2007 at 8:54 PM
		</div>
		<div class="comment_text"><p>As much I love ColdFusion, and I do, when it does generate xhtml content, it does tend to be un-compliant. Anything that embeds image or objects will do so un-compliantly. (CFimage, cfchart, cfform flash only, etc)</p><p>That shouldn't be an obstacle however, as most XHTML produced why your application will be your own.  And there are ways to get around tags that output un-compliant HTML.  Ben Nadel has a great post on taming cfimage that could be applied to other tags.</p><p>As for Cfform, it is in the clear as long as you don't use flash forms, and you don't mind inline JavaScript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674150">3</a> by David
		posted on 11/8/2007 at 11:15 PM
		</div>
		<div class="comment_text"><p>The only general comment I'd add about making a move to ColdFusion is to get into a user group in your area. It opens many doors, and it is a tremendously helpful community.</p><p>A list of user groups can be found here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fusergroups%2Findex.cfm%3AUXFjZhqZO4LaKqXd7mpvYi2uO5k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/usergroups/index.cfm">http://www.adobe.com/cfusio...</a></p><p>Cheers,</p><p>Davo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674139">4</a> by tony petruzzi
		posted on 11/8/2007 at 11:22 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>another thing to mention for the xhtml stuff is that there are a lot of replacement functions on cflib for the built in output functions that generate valid xhtml code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674154">5</a> by Gary F
		posted on 11/9/2007 at 12:45 AM
		</div>
		<div class="comment_text"><p>@Terrence, you probably know this trick so this is for other XHTML nerds out there ;-) Wrapping your cfchart or cfimage or whatever in cfsavecontent will allow you to improve the HTML output if you search &amp; replace using a good regex. e.g. replace &gt; with /&gt; Then just output the result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674152">6</a> by Dave Anderson
		posted on 11/9/2007 at 2:13 AM
		</div>
		<div class="comment_text"><p>Hosting recommendation:  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.edgewebhosting.net%2F%3A0GGDvlKft3AQq0k8YaGVygICDBI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.edgewebhosting.net/">http://www.edgewebhosting.net/</a></p><p>Edgeweb is great.  Might be pricier than some alternatives, but you pet what you're gay for.  Er, I mean you get what you pay for.  In a previous job we used them for years, and during that time I never had a complaint about the service.  One caveat:  we had colo servers there, and could remotely admin everything ourselves, so I can't vouch for hosted sites and whatnot, but like I said -- never a complaint about the service.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674147">7</a> by Tony Garcia
		posted on 11/9/2007 at 2:15 AM
		</div>
		<div class="comment_text"><p>I know exactly where Ola is coming from, since I also work with only small companies and organizations and also had to weight the pros and cons of CF versus "free" PHP. I'll still use some OS PHP stuff like the Joomla CMS, depending on the situation. But whenever I "roll my own" code (which is most of the time), I've embraced CF and haven't regretted it one bit. I also endorse Host My Site as a good CF host for shared or VPS plans. For more "budget" hosts, Ola might want to look at these blog posts:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rabidgadfly.com%2F%3Fp%3D41%3AjWVrzuyUZ3HgE9bU2iM_v7kT5YQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rabidgadfly.com/?p=41">http://www.rabidgadfly.com/...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rabidgadfly.com%2F%3Fp%3D48%3ANLuQeMBl0ZZLvmzkF71pV0nCCPY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rabidgadfly.com/?p=48">http://www.rabidgadfly.com/...</a></p><p>Just keep in mind that sometimes you get what you pay for if you go by just cost (that goes for CF or non-CF hosts).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674159">8</a> by Ola
		posted on 11/9/2007 at 3:37 AM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>Thanks so much for the quick response. I am definitely feeling like this is the way to go. I also want to say thanks to everyone else that chimed in. All your feedback is definitely valuable. Nice to know that CF has a very helpful tight knit community.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674157">9</a> by Raymond Camden
		posted on 11/9/2007 at 3:45 AM
		</div>
		<div class="comment_text"><p>Tight knit is one way to describe it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674162">10</a> by Dynamic Developer
		posted on 11/9/2007 at 4:47 AM
		</div>
		<div class="comment_text"><p>Crystaltech is my recommendation for hosting. <br>I've used hostmysite as well. I found they weren't as good as crystaltech, and they had some unresolved issues with mysql dbs. Go with crystaltech.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674148">11</a> by Lola LB
		posted on 11/9/2007 at 5:31 AM
		</div>
		<div class="comment_text"><p>I will just say that those planning to switch over to CF and using CF hosts need to take a very careful look at their list of tags that they disable or restrict usage of as opposed to planned projects that may either need these tags immediately, or down the road with eyes to future growth.  And make their decisions on these CF hosts accordingly.  It wouldn't do to be in the middle of a developing a critical project and and be in for a nasty surprise when codes fail and the host refuses to enable needed tags, or spend lots of billable hours trying to find workarounds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674161">12</a> by Mike Petersen
		posted on 11/9/2007 at 9:00 AM
		</div>
		<div class="comment_text"><p>For hosting I've had good success with both Ayera and HostMySite.  They were two of the only hosting companies that had knowledgeable staff and were willing to work with me on custom requests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674164">13</a> by Hapex
		posted on 11/9/2007 at 4:27 PM
		</div>
		<div class="comment_text"><p>I second Lola LB, check what your potential hoster does/does not allow.  HostMySite (where I am hosted) allow almost everything, even stuff I wasn't expecting, and do allow customisation if asked nicely.</p><p>It would be quite a headache to write a site and use a whizzy new function only to find later that your host doesn't (and will never) support its use on their servers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674158">14</a> by Michael White
		posted on 11/10/2007 at 8:40 PM
		</div>
		<div class="comment_text"><p>I ran into the "Lola Syndrome" with DailyRazor for one client. the didn't support several tags I needed and had to disable some features in my application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674142">15</a> by cfgurney
		posted on 11/12/2007 at 8:35 AM
		</div>
		<div class="comment_text"><p>This summer I made a complete switch from other environments to Coldfusion. I also use Dreamweaver CS3. I renovated the site <a href="http://disq.us/url?url=http%3A%2F%2Fwww.mecumauction.com%3A5J7nLpy3OyNtBCeTgInDTIaSix8&amp;cuid=3321886" rel="nofollow noopener" title="www.mecumauction.com">www.mecumauction.com</a>. There is an extensive suite of admin functions for handling the lots and the photos. I could have not done this work without the tight integration between CF and DW in the time I had available. I'm sure that many of you readers are far better engineers than I - but the client is delighted and so are their customers and for me, that's the test.</p><p>I've been doing n-tier web development since 2000 and I have never been more productive than I have with CF.</p><p>As for hosts, I strongly recommend hostmysite. The support is simply phenomenal and I discovered that when the first interation of the Mecum website over taxed the shared environment. We're on their VPS environment now. They worked very hard to get the site switched and dealt with an obscure  MySQL driver issue. I was very pleased.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674143">16</a> by Paul Birkeland-Green
		posted on 11/17/2007 at 2:53 PM
		</div>
		<div class="comment_text"><p>I have worked with Coldfusion since 2001 and have to say it is probably the best decision I have made in web dev.<br>I have yet to find something it can't do. It is highly stable, poweful and secure; and backward compatible (can it turn straw into gold perhaps?). I have written big, small, fun, experimental all with great success. It is also easy to return to years later without having to spend hours interpreting code. There are some issues with it and Dreamweaver if your careless but otherwise I can't fault it.<br>Now Adobe (was Alliare when I started) and still 1999 compatable. What else can claim that? It may not be the cheapest but then what of any value is!</p></div>
	</div>
</div>
		