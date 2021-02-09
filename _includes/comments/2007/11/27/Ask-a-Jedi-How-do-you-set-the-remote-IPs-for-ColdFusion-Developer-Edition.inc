
<div class="comment" id="c_1713674587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674587">1</a> by Don R
		posted on 11/28/2007 at 6:10 AM
		</div>
		<div class="comment_text"><p>That's what we do. It has worked out very well. We have 2 licenses of CF... one for production, and one for the staging server. The staging server also hosts our intranet.</p><p>I have a developer version on my laptop, so I can work on the road.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674593">2</a> by thinman
		posted on 11/28/2007 at 10:46 AM
		</div>
		<div class="comment_text"><p>Yeah. I second that motion.  When I ran an IT shop for an NPO, we invested in a second license in addition to the production license. Made life easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674594">3</a> by Simon Harper
		posted on 11/30/2007 at 4:08 AM
		</div>
		<div class="comment_text"><p>You're right of course - this will work. However, it should be pointed out that ColdFusion, no matter how good we all think it is, is very expensive. We've opted to buy two full blown Enterprise versions at a sum which probably translates at $5000 a shot. These are used in a clustered pair which serve our production environment. The idea that we might opt to spend another $10k to replicate our production environment is simply beyond our means. Instead we distribute a developer version in a VMware image per developer (we use Windows for development but prefer Linux for production). We can extend this to clients for the purposes of review within the licence agreement but it's a bit of a pain. Personally I don't think 2 IP addresses is sufficient. Even if Adobe extended that to 100 one still couldn't use it for a serious site. And if you were intent on breaking the licence agreement then you could simply stick the whole thing behind Apache's mod_proxy and make it look like everything was coming from one site. (I should stress, this is not allowed)</p><p>Sorry, rant over. Thanks for such a great (free!) resource...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674595">4</a> by Raymond Camden
		posted on 11/30/2007 at 4:12 AM
		</div>
		<div class="comment_text"><p>@Simon - well to me that sounds like an argument for a free version.</p><p>Question - why not just use a standard edition for dev?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674592">5</a> by Simon Harper
		posted on 11/30/2007 at 4:19 AM
		</div>
		<div class="comment_text"><p>Hi Ray. Not sure I quite understand the 'free version' issue, but I'm happy to pay for the production servers - it's just when it comes to development that things are a pain. In fact we could run up another couple of servers using our licence key which technically would work and would be in the spirit of the licence, but I'd like to stay within the letter of licence if that option is available.</p><p>As for the standard version we think it's important to keep our staging environment identical to the production if at all possible. We've been bitten in the past by software which works fine in development but fails the moment it's released ...</p><p>Simon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674599">6</a> by Raymond Camden
		posted on 11/30/2007 at 4:28 AM
		</div>
		<div class="comment_text"><p>I definitely get wanting to keep dev the same as production - but don't forget CF8 makes it so that basically everything is the same. You just get a slower response in cf7 for things like threading. Code wise though - all works the same except for some tiny differences (like trying to use the Server Monitor API via code, which no one does anyway - afaik).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674596">7</a> by Simon Harper
		posted on 11/30/2007 at 4:41 AM
		</div>
		<div class="comment_text"><p>Yes, I quite agree, but the key for us is the clustering aspect. I need to be convinced that everything we create is 'cluster safe' which to my mind has to be proved before it enters production.</p><p>Personally I think the way forward is some sort of honesty scheme in which organisations are free to deploy systems in whatever way they see fit for the sake of development (i.e. without cost) and that they pay for the production environment. Perhaps I'm an idealist ....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674598">8</a> by Chris Dawes
		posted on 11/30/2007 at 6:39 AM
		</div>
		<div class="comment_text"><p>for dev machines, we just use a asp page on iis and a php page on apache to restart the coldfusion service on windows and off you go...</p></div>
	</div>
</div>
		