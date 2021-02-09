
<div class="comment" id="c_1713739793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739793">1</a> by Dominic Watson
		posted on 3/13/2012 at 8:10 PM
		</div>
		<div class="comment_text"><p>Neat stuff, something I'm really into at the mo - using as little server resource as possible.</p><p>You can actually achieve this with 'zero server' if you use Amazon S3's website bucket feature (ok, not a real CDN and there are obviously servers running somewhere, but close enough).</p><p>You setup your default page to index.html and your error page to index.html, the js can handle the routing, including 404s for stuff it doesn't know what to do with.</p><p>Also, take a look at backbone.js and it's routing if you haven't already - designed for this sort of thing (so less wheel reinventing)</p><p>S3 websites:<br><a href="http://disq.us/url?url=http%3A%2F%2Faws.typepad.com%2Faws%2F2011%2F02%2Fhost-your-static-website-on-amazon-s3.html%3AFY4wrs_eb75TsIUDHRxZiIohiEE&amp;cuid=3321886" rel="nofollow noopener" title="http://aws.typepad.com/aws/2011/02/host-your-static-website-on-amazon-s3.html">http://aws.typepad.com/aws/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739791">2</a> by Raymond Camden
		posted on 3/13/2012 at 8:17 PM
		</div>
		<div class="comment_text"><p>re: Amazon - you know - I think it IS on Amazon - but not S3, EC2.</p><p>re: Backbone.js: Not a fan. I don't think it's bad, I just don't dig it. I much prefer Angular.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739774">3</a> by andy matthews
		posted on 3/13/2012 at 8:37 PM
		</div>
		<div class="comment_text"><p>Ray...</p><p>I'd love for you to take a look at my Ember.js article. Curious to see what you think about it. It's super lightweight as far as code goes.</p><p>Brian Rinaldi asked me to expand on it for an article that will be published in ADC next month (most likely).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739784">4</a> by Phillip Senn
		posted on 3/13/2012 at 9:02 PM
		</div>
		<div class="comment_text"><p>I like Terry's choice of fonts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739778">5</a> by Dominic Watson
		posted on 3/13/2012 at 9:56 PM
		</div>
		<div class="comment_text"><p>I've just popped on to the Angular site and seen your testimonial on there, nice ;). Really like the WhichElement site too.</p><p>I'd say the approach was sound. Probably using backbone or angular for the routing is overkill seeing as you've condensed it down to such slim code.</p><p>To offer yet another, serverless approach, did you consider an offline CMS such as Jekyll? Jekyll powers github pages which are pure static content (my blog runs this way). This way, you need no alternative for crawlers. Only issue I see is search, though I'm sure there are JS implementations out there...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739786">6</a> by Raymond Camden
		posted on 3/13/2012 at 10:38 PM
		</div>
		<div class="comment_text"><p>@andy: I saw your Ember blog post. It looks ok. :)</p><p>@Phillip: Another thing Terry turned me on too.</p><p>@DW: Nope, never considered it. Never even heard of it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739792">7</a> by Terrence Ryan
		posted on 3/13/2012 at 11:35 PM
		</div>
		<div class="comment_text"><p>@dominic From what I know of Jekyll it's powered by Ruby.  While I might get away with doing a server less backend, I couldn't get away with doing one that even staticly is powered by something other then ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739789">8</a> by Dominic Watson
		posted on 3/14/2012 at 12:32 AM
		</div>
		<div class="comment_text"><p>Ha ha, ok. Site sponsored by Adobe? I personally use my local machine to build my site and deploy it - no server involved and I can install what I like (should that be the issue).</p><p>Anyways, its good to look around, will be interesting to see what sort of solutions come around when (and if) we can run CF from the command line. E.g. a CF implementation along the lines of Jekyll (that does not need a running CF server to generate).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739785">9</a> by Raymond Camden
		posted on 3/14/2012 at 12:36 AM
		</div>
		<div class="comment_text"><p>Nope, the site isn't sponsored by Adobe (outside of that fact that stuff like this is part of our jobs).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739798">10</a> by Dominic Watson
		posted on 3/14/2012 at 1:06 AM
		</div>
		<div class="comment_text"><p>@Ray Yeah, I guess being Adobe ColdFusion Evangelists does rather change the position! (didn't realise that TR was one also -duh to me).</p><p>On the flip side - I do believe (as I'm sure you do to), that exploring solutions outside of CF really benefits us as CF developers and eventually the community (I'm not saying that you should use Jekyll here, would clearly be an odd choice).</p><p>But anyways, I've hijacked your post with enough yadda yadda already. Great work on the site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739780">11</a> by Raymond Camden
		posted on 3/14/2012 at 1:09 AM
		</div>
		<div class="comment_text"><p>Actually, I'm not a ColdFusion evangelist. My role (and Terry too) is in a group dedicated to web standards. I've been spending a lot of my time lately in HTML5, CSS3, and JS APIs. It's absolutely fascinating.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739787">12</a> by Dominic Watson
		posted on 3/14/2012 at 1:16 AM
		</div>
		<div class="comment_text"><p>My bad, I read 'Developer Evangelist' and misinterpreted. But yeah, sure is - a job by itself.</p></div>
	</div>
</div>
		