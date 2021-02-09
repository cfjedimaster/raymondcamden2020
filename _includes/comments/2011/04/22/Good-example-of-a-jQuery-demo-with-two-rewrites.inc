
<div class="comment" id="c_1713731823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731823">1</a> by Dan G. Switzer, II
		posted on 4/25/2011 at 5:55 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>The purpose of the following line is to add a "js" class to the &lt;html&gt; tag:</p><p>document.documentElement.className += " js";</p><p>For their code sample, this style doesn't have any effect. However, what it allows you to do is provide your elements with a CSS style to show elements in a collapsed state by default.</p><p>So, if you add a style like:</p><p>html.js .collapsed {<br>  display: none;<br>}</p><p>Then any browser w/JS enabled would see the headings collapsed. For browsers w/JS *disabled* the elements would show expanded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731841">2</a> by Raymond Camden
		posted on 4/25/2011 at 5:57 PM
		</div>
		<div class="comment_text"><p>Well hot damn. That is slick and DOES make sense. Thanks Dan.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731845">3</a> by Dan G. Switzer, II
		posted on 4/25/2011 at 6:03 PM
		</div>
		<div class="comment_text"><p>What's nice is you can add that line anywhere after the &lt;html&gt; tag, so you can put it at the top of your document output stream to ensure the browser renders the design based upon the state of JS being available or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731842">4</a> by JP
		posted on 4/25/2011 at 7:14 PM
		</div>
		<div class="comment_text"><p>Ray, a few weeks ago one of your readers posted an article (in a comment thread) about why you should never use the .live() method: <a href="http://disq.us/url?url=http%3A%2F%2Fjupiterjs.com%2Fnews%2Fwhy-you-should-never-use-jquery-live%3ArrIKSfgHz9PNW2H1SRKVXjPF6zY&amp;cuid=3321886" rel="nofollow noopener" title="http://jupiterjs.com/news/why-you-should-never-use-jquery-live">http://jupiterjs.com/news/w...</a></p><p>Are you still thinking that it's okay to use the .live() method? When I read stuff like that, I get scared and lean towards the "better" way, which I believe is using .delegate().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731844">5</a> by Raymond Camden
		posted on 4/25/2011 at 7:22 PM
		</div>
		<div class="comment_text"><p>JP - I tend to take a practical view of things. In cases where A is better than B but B still works, I don't get scared about forgetting to use B. I don't think that - for most of us - the difference in live vs delegate is going to make a large difference. We aren't - again - most of us - building GMail.</p><p>I'm probably going to be flamed righteously for that. ;) Please remember - I've been doing CF for 10+ years. I've been getting "heavy" into JS a lot shorter. Consider my code the code of a noob.</p></div>
	</div>
</div>
		