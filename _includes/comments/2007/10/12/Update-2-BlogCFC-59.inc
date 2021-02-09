
<div class="comment" id="c_1713673276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673276">1</a> by Tomas
		posted on 10/13/2007 at 7:23 AM
		</div>
		<div class="comment_text"><p>Excellent news, Ray. I'm looking forward to a better separation of the design elements for redesign and standards compliance work :)</p><p>Reminds me, I guess it's time to give your wishlist some attention :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673265">2</a> by Raymond Camden
		posted on 10/13/2007 at 7:28 AM
		</div>
		<div class="comment_text"><p>V6 will have 100% separation. I promise. That's the main feature of V6, themes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673275">3</a> by O?uz Demirkap?
		posted on 10/13/2007 at 8:27 AM
		</div>
		<div class="comment_text"><p>Let us try ...  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673280">4</a> by Tim Davis
		posted on 10/13/2007 at 8:32 AM
		</div>
		<div class="comment_text"><p>I also look forward to the separation of design &amp; Content in V6!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673282">5</a> by Gary F
		posted on 10/13/2007 at 12:50 PM
		</div>
		<div class="comment_text"><p>Ray, I'd really love to integrate BlogCFC into an existing community website where anyone can start up their own blog. Therefore the setup process of making a new blog needs to be under total programatic control of my own application so users of the community site don't need to do anything apart from typing in the name of their new blog and selecting a theme (CSS). My community app will use their existing username/profile (from an existing db table) to set up their blog instantly.</p><p>The user can choose other users to co-edit their blog. (My app will give them a list of community users so they can pick co-editors and my app will tell BlogCFC about it)</p><p>Is this possible with 5.9 or could these ideas be added to 6.0 so other community sites like mine can use BlogCFC? I don't want to re-invent the wheel since so much excellent work has already been ploughed into BlogCFC.</p><p>I actually have the same set of questions about Galleon 2 if that was integrated into an existing community site so users can request their own conference which my app will set up automatically for them. Again, existing usernames/profiles should be used. Is any of this possible? (Perhaps you already have CFCs that will let my app interface/control BlogCFC and Galleon?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673279">6</a> by Raymond Camden
		posted on 10/13/2007 at 4:46 PM
		</div>
		<div class="comment_text"><p>Gary: BlogCFC has supported the idea of "virtual" blogs for a little while. Look at RIAForge for an example. However - this isn't something that works out of the box per se. Essentially, you have to mod the code in Application.cfm. You create a structure of settings that represent what you see in blog.ini.cfm. The settings are used then instead of the INI file.</p><p>So the idea is - you do whatever you have to do set the settings. Like RIAForge, maybe you look at the hostname and say, if it is <a href="http://disq.us/url?url=http%3A%2F%2Fx.riaforge.org%3ADa4lynxejsQbjc08OTtfQfV7-c8&amp;cuid=3321886" rel="nofollow noopener" title="x.riaforge.org">x.riaforge.org</a>, then my blogname is x.</p><p>So you have to do _some_ work. My feeling was that everyone has a unique idea of what a <a href="http://disq.us/url?url=http%3A%2F%2FBlogger.com%3Azai2o2Gc5p9Izr8Q7eQW_qOYBZk&amp;cuid=3321886" rel="nofollow noopener" title="Blogger.com">Blogger.com</a> style implementation means. So I can't code it to handle everyone - but I can make it so that whatever logic you choose, you can just plug it in and BlogCFC will work with it.</p><p>Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673277">7</a> by Gary F
		posted on 10/13/2007 at 6:19 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, that's great. It sort of makes sense. I guess I should look at the code. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673283">8</a> by Charlie Arehart
		posted on 10/14/2007 at 4:38 PM
		</div>
		<div class="comment_text"><p>Ray, thanks as always for your work on BlogCFC. Of course, the negative is that you're so prolific, I'm now 9 releases behind (still running 5.005)!</p><p>Anyway, about the contact form, I don't recall asking for that directly, though I have long been on a tear to get bloggers to identify themselves. I would prefer that an "about" pod be offered by default. I don't think bloggers always choose to be anonymous (though some do), but rather they just don't think about creating a place for people to learn who they are.</p><p>I'd be happy with just a name! :-) But a little bio could help, and either could help them, as well. I've made my plea at:</p><p>Do you blog? Do you identify yourself on your blog? Please do!<br><a href="http://disq.us/url?url=http%3A%2F%2Fcarehart.org%2Fblog%2Fclient%2Findex.cfm%2F2006%2F10%2F6%2Fbloggers_please_identify_yourselves%3AdTUa2NuxADaEzn0Jz0Pn9T5Nwlo&amp;cuid=3321886" rel="nofollow noopener" title="http://carehart.org/blog/client/index.cfm/2006/10/6/bloggers_please_identify_yourselves">http://carehart.org/blog/cl...</a></p><p>Maybe you did add an about pod later, Ray. If so, thanks. And a contact form is a nice touch, too. Glad to hear of the continued evolution of the product. It's been a huge benefit to the entire community. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673281">9</a> by Raymond Camden
		posted on 10/14/2007 at 5:46 PM
		</div>
		<div class="comment_text"><p>Ah no - I didn't do an About pod. That would require the user to write something. I thought I had also heard you publicly say you wish there were easier ways to ping authors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673286">10</a> by Charlie Arehart
		posted on 10/15/2007 at 12:26 AM
		</div>
		<div class="comment_text"><p>I hope you'll consider an about pod. I mean, sure, people have to add something to it, but that's the point: it would make them think to do it. They could easily comment it out in the layout.cfm file.</p><p>Or even if you don't want to make be "enabled" by default, just having it commented out in the layout.cfm by default could help people realize it's there as an option (especially if the docs also pointed it out).</p><p>I just think people don't realize how unreachable they are behind their blogs, especially when some don't integrate their blog into the rest of their site's interface, so there may not even be any obvious way to get "back" to their real site (as is the case in my own blog, in fact).</p><p>As for whether you'd heard me wish blog authors were easier to reach, well, yeah, it's a corollary to this. We readers ought to be able to easily find out who the blogger is and how to reach them (otherwise, people are forced often to leave as a comment something that they would/should have been sent by email to them).</p><p>Again, folks can debate this on the blog entry I linked to above. I don't mean to derail the comments here. Just pleading with you as blog-maker to consider this feature, even if people don't think to ask for it. :-)  That's kind of my point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673289">11</a> by Raymond Camden
		posted on 10/15/2007 at 5:27 PM
		</div>
		<div class="comment_text"><p>Fair point Charlie. It won't be in 5.9, but can definitely be in 6.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673267">12</a> by Charlie Arehart
		posted on 10/15/2007 at 6:07 PM
		</div>
		<div class="comment_text"><p>Thanks, man. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673268">13</a> by Scott Bennett
		posted on 10/30/2007 at 3:02 AM
		</div>
		<div class="comment_text"><p>I put BlogCFC up on my site this weekend, and it worked out quite nicely, I've been wanting to start blogging for a while now but I've just been unwilling to give up my limited free time to build the functionality myself =).</p><p>It only took me an hour or so to get it set up and most of that was tweaking my look and feel. So thank you very much and I may just get you something from your wish list... don't hold your breath for that giant TV though, it's not that great =P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673269">14</a> by Hospedagem
		posted on 4/23/2008 at 9:38 PM
		</div>
		<div class="comment_text"><p>Is this possible with 5.9 or could these ideas be added to 6.0 so other community sites like mine can use BlogCFC? I don't want to re-invent the wheel since so much excellent work has already been ploughed into BlogCFC</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673266">15</a> by Raymond Camden
		posted on 4/23/2008 at 10:09 PM
		</div>
		<div class="comment_text"><p>Is -what- possible?</p></div>
	</div>
</div>
		