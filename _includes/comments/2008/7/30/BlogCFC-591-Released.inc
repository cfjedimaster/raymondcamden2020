
<div class="comment" id="c_1713684628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684628">1</a> by Edgar Soto
		posted on 7/31/2008 at 8:47 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>As always, Thank you! Unfortunately I took on a different role that doesn't involve CF programming anymore. I will definitely pass on the information.</p><p>-Edgar</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684630">2</a> by JC
		posted on 8/1/2008 at 7:08 PM
		</div>
		<div class="comment_text"><p>Any plans to make the page functionality more complete? I'd love to be able to use BlogCFC on CF like I do WordPress in PHP... using it as a basic CMS + the blog as a news page.</p><p>I managed to get the login process integrated with our Active Directory, and then get a several year old Contribute-based newsletter thing imported into a copy of BlogCFC a few weeks ago (I'm still impressed with myself :D) and it would be great if I could use it more extensively. I really don't want to give my users the level of learning curve something like Sava would throw at them. And I really don't want to muck about with getting PHP and MySQL running to use Wordpress on our intranet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684627">3</a> by Raymond Camden
		posted on 8/1/2008 at 7:17 PM
		</div>
		<div class="comment_text"><p>Can you be more explicit about what you mean by making the page functionality more complete?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684624">4</a> by JC
		posted on 8/1/2008 at 8:07 PM
		</div>
		<div class="comment_text"><p>Sure! Basically, let pages have (where it makes sense to, anyway) the same functionality available that blog entries: rich text (easy enough to add in, but I expected it to do the page field when I did it on the blog entry field), allowing comments (or not), released or pending status, adding images &amp; files. Also, being able to sort the navigation. Having subpages (and subcategories!) would be great, too, especially if you could opt not to display them except if you're on one of the pages in the parent category.</p><p>I'm still using 5.9.003 though, so maybe some of this is in there.</p><p>And what'd be ultra-super-fantastic is if the wiki-style versioning from Canvas was built in... the latest version of WordPress added that, and it made it significantly more viable as a CMS that you can trust the less tech-savvy users with. And I forget if BlogCFC already supports this or not, but having at least two user levels, so there's one that can submit content but not approve it, would be very handy (and bonus points if permissions can be on a per category basis or something similar to that).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684636">5</a> by Raymond Camden
		posted on 8/4/2008 at 2:52 PM
		</div>
		<div class="comment_text"><p>Comments:</p><p>a) Let pages have a RTE: This would be simple if I followed the same method as blog entries. Please file an ER for this at riaforge.</p><p>b) Allowing comments: Personally I don't believe this makes sense for a page.</p><p>c) Allowing pages to be released/pending: Unless you use the navigation pod, all pages are private unless someone can guess the URL.</p><p>d) Adding images/files: What do you mean? Right now you can use HTML to do so.</p><p>e) How would you setup categories for a page?</p><p>f) User levels for BlogCFC: That's a tough one. I know I'm improving user support for v6 though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684633">6</a> by JC
		posted on 8/13/2008 at 1:01 AM
		</div>
		<div class="comment_text"><p>Sorry for the late response, I've been sick for a week.</p><p>A) Sure thing!</p><p>B) Yeah, I rarely use them. Every once in a while it comes in handy to have comments available to turn on though. "Any questions? Comment below!"</p><p>C) Guess I use the navigation pod then. But a simple status flag for active/inactive or active/pending approval/not ready would be most welcome</p><p>D) BlogCFC's abilities to do this are somewhat limited anyway, but it would be nice if the page tool had access to the same functions for uploading images as the posts tool. (of course, using the rich text editor with uploading enabled negates this issue)</p><p>E) Actually I meant hierarchical pages and was adding in that having subcategories for posts would be handy, too. So you could do, say, intranet pages called Human Resources, Marketing, IT, and when you clicked to those primary pages, subpages would show up in the navigation for, say, department policies, memos, whatever... I know that's a big task and moves BlogCFC more to the realm of a simple CMS instead of a blog tool... but hey, can't hurt to ask/suggest, eh? :)</p><p>F) Again, even a basic Contributor/Approver distinction would be a huge improvement.</p><p>And G) versioning would be so very, very nice, and I bet you already have most of the code written from Canvas... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684631">7</a> by Paul
		posted on 9/4/2008 at 7:47 PM
		</div>
		<div class="comment_text"><p>Hi Ray - *Great* app - cleanly architected. Thank you! And glad to see you survived Gustav....</p><p>Suggestion for V6 re: multiple blogs:<br>I have a test setup now with multiple blogs (using a dynamically generated structure instead of the .ini - neat), but the duplication of so many client files feels odd, especially as most files are common.  It would be cool if you could set up a minimalist client folder - say, containing a index file (and Application?), an images folder, and an admin folder with its index/Application file - and dump the rest of the (common) stuff into the blog root.</p><p>You could then use website/blog/john, website/blog/jane, website/blog/jane/admin, with each client folder being somewhat separated (for images, specific config options) and under 100KB...and it would be readily usable for both single and multiple blogs.  For us, I was only thinking of a few dozen blogs, but even so those client file duplications add up!</p><p>Comments? With your current code, it seems to be soooo close to doable I can almost taste it!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684634">8</a> by Raymond Camden
		posted on 9/4/2008 at 8:00 PM
		</div>
		<div class="comment_text"><p>Paul - the main reason I haven't done more to support multiple virtual blogs on the fly (and that's the critical part - virtual or dynamic blogs) is that evern implementation is different. So some folks want support for</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fx.blog.com%3AcXg0QCo8O_gidFmDOyYBssjHonw&amp;cuid=3321886" rel="nofollow noopener" title="x.blog.com">x.blog.com</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fy.blog.com%3Aoeth5pvPATHCxHhElze3FKb516w&amp;cuid=3321886" rel="nofollow noopener" title="y.blog.com">y.blog.com</a></p><p>and some want</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.com%2Fx%3AeCFfT1VOdFchMp98Iwh08XTkVZA&amp;cuid=3321886" rel="nofollow noopener" title="blog.com/x">blog.com/x</a> or <a href="http://disq.us/url?url=http%3A%2F%2Fblog.com%2Fy%3AktPdDLkPl2oG_K5b1weL6lY_VU8&amp;cuid=3321886" rel="nofollow noopener" title="blog.com/y">blog.com/y</a></p><p>Those are pretty different. The first requires us to look at the host name to determine which blog is loading. The second equires us to look at the cgi.path info and it also requires modification to every link on the system.</p><p>Also, what determines what a valid blog is? For RIAForge, which uses a dynamic system, I have to check the host name against a list of valid RIAForge projects, and those who have blogs enabled.</p><p>It is because of this I did the bare minimum - the "Instance" support, which lets you pass in config info at runtime. The _mechanics_ of your <a href="http://disq.us/url?url=http%3A%2F%2FBlogger.com%3Azai2o2Gc5p9Izr8Q7eQW_qOYBZk&amp;cuid=3321886" rel="nofollow noopener" title="Blogger.com">Blogger.com</a> setup though are up to you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684614">9</a> by John Manoah
		posted on 11/2/2009 at 6:11 PM
		</div>
		<div class="comment_text"><p>Hi Ray - I'm excited!!! I set up a blog using Blog CFC ... thanks!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.xioni.in%2Fblog%2Findex.cfm%3ALjW19csm8-A9bNlxTLlTVSIRsE8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.xioni.in/blog/index.cfm">http://www.xioni.in/blog/in...</a></p><p>- John</p></div>
	</div>
</div>
		