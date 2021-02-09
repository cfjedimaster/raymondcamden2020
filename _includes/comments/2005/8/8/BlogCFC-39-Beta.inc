
<div class="comment" id="c_1713619849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619849">1</a> by EdG
		posted on 8/8/2005 at 7:56 PM
		</div>
		<div class="comment_text"><p>hi</p><p>thanks for the blog code - we're intending to use it internally as a comms tool. one quick query: we haven't been able to get the SES URLs to work. they return a 404 Not Found: &lt;head&gt;&lt;title&gt;JRun Servlet Error&lt;/title&gt;&lt;/head&gt;&lt;h1&gt;404 /blog/client/index.cfm/2005/8/3/weblinkapi&lt;/h1&gt;&lt;body&gt;<br>/blog/client/index.cfm/2005/8/3/weblinkapi&lt;/body&gt;</p><p>we're running CF under JRun via J2EE via Apache. obviously this is a webserver issue but we've been unsuccessful in finding the cause - has anyone had a similar error?</p><p>thanks,<br>ed</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619848">2</a> by Raymond Camden
		posted on 8/8/2005 at 9:33 PM
		</div>
		<div class="comment_text"><p>Sorry - I'm not too sure about that setup. I _do_ run with Apache on my local dev box, but CF is directly connected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619852">3</a> by Roger Benningfield
		posted on 8/9/2005 at 7:49 AM
		</div>
		<div class="comment_text"><p>Ray: A suggested tweak... given the semantics of rss:category, this:</p><p>[category]foo,bar[/category]</p><p>...is interpreted as the "foo,bar" category, rather than something in two distinct cats. You might want to loop over the categories and give them each an rss:category of their own.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619850">4</a> by Raymond Camden
		posted on 8/9/2005 at 4:48 PM
		</div>
		<div class="comment_text"><p>Roger - done. You should see it in this blog's rss. I'm not going to update the zip though till I release it officially. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619847">5</a> by EdG
		posted on 8/9/2005 at 8:58 PM
		</div>
		<div class="comment_text"><p>If anyone's running a J2EE setup and wants to run BlogCFC (or indeed any app that uses search engine safe SES URLs) and is experiencing the same JRun 404 issue we reported, here's the MM TechNote containing the fix:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fcfusion%2Fknowledgebase%2Findex.cfm%3Fid%3D2addd247%3AgSZRNO7IMo9GdI4BtsuciC2n5TU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/cfusion/knowledgebase/index.cfm?id=2addd247">http://www.macromedia.com/c...</a></p><p>It requires a simple change to the web.xml file for the server instance you're using for the blog. Thanks for the BlogCFC code Ray - might be worth adding a line to your install doc about this? Hope it's useful anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619851">6</a> by Raymond Camden
		posted on 8/9/2005 at 9:06 PM
		</div>
		<div class="comment_text"><p>EdG: I updated the Word doc. It will be in the final release.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619853">7</a> by Jack Dalaa
		posted on 8/12/2005 at 12:06 AM
		</div>
		<div class="comment_text"><p>Couple of feature requests:</p><p>1) Add a Permalink feature, so it's easy for people to copy/bookmark a direct link to the blog entry, and naturally SES. See <a href="http://disq.us/url?url=http%3A%2F%2Fwww.engadget.com%3AXp6tn2Aj81RzAsm4954xAYf2_hY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.engadget.com">http://www.engadget.com</a> for example.</p><p>2) Search engine friendly category ID's, based on the category title, so your ColdFusion category instead of:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%3Fmode%3Dcat%26catid%3D395FA1CE-D93A-60DF-CBD9B942C80F06B0%3AIah0x1i70IpqYv9iV8txyYdOB9o&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm?mode=cat&amp;catid=395FA1CE-D93A-60DF-CBD9B942C80F06B0">http://ray.camdenfamily.com...</a></p><p>would be:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%3Fmode%3Dcat%26catid%3Dcoldfusion%3ApIv7IDy6R1WIzuNv_IJLB6TA_h8&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm?mode=cat&amp;catid=coldfusion">http://ray.camdenfamily.com...</a></p><p>Otherwise, really impressed by your blog product. Expect to launch a blog shortly using it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619856">8</a> by Raymond Camden
		posted on 8/12/2005 at 12:08 AM
		</div>
		<div class="comment_text"><p>For permalink, don't you just mean the detail link? How is not bookmarkable now? I used have "Link" in the footer, but when I made the title clickable, it seemed silly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619854">9</a> by Jack Dalaa
		posted on 8/12/2005 at 12:19 AM
		</div>
		<div class="comment_text"><p>I actually didn't notice the headline being a link, but obviously I can use that, since it's a link.</p><p>But I think it needs to be more obvious, which is why the permalink works so well--it has sort of become a standard way of offering no-BS links to blog entries. Just my 2 cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619855">10</a> by Jack Dalaa
		posted on 8/12/2005 at 12:21 AM
		</div>
		<div class="comment_text"><p>Also, while we're at the feature requests:</p><p>It'd be *great* to have an 'add comment' form at the bottom of the comments on the "detail" page:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%2F2005%2F8%2F8%2FBlogCFC-39-Beta%3AqQsjjul4JFEm2bpxocOEcDK7Zes&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm/2005/8/8/BlogCFC-39-Beta">http://ray.camdenfamily.com...</a></p><p>.. Now I have to scroll all the way back up, click the comments link, then in the pop window, scroll all the way back down to post a reply.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619860">11</a> by Raymond Camden
		posted on 8/12/2005 at 11:43 PM
		</div>
		<div class="comment_text"><p>I've added Jack's request to my bug tracker.</p></div>
	</div>
</div>
		