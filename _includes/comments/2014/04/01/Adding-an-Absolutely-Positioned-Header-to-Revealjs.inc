
<div class="comment" id="c_1714082554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082554">1</a> by Ray Villalobos
		posted on 4/1/2014 at 8:45 PM
		</div>
		<div class="comment_text"><p>Wow...Brony slides all the way! But I digress.</p><p>You could do two headers by creating headers with two different classes...one for left and one for right. You can put this right between the div with the reveal and slides class.</p><p>```<br>&lt;header class="left" style="position: absolute; left: 10px;"&gt;&lt;/header&gt;<br>&lt;header class="right" style="position: absolute; right: 10px;"&gt;&lt;/header&gt;<br>```</p><p>Then whenever you want to create a slide with an element to the right. you use</p><p>```<br>&lt;section data-state="headright"&gt;<br>&lt;style&gt;.headright header.right:after { content: "headline"; }&lt;/style&gt;<br>```</p><p>and an element to the left</p><p>```<br>&lt;section data-state="headleft"&gt;<br>&lt;style&gt;.headleft header.left:after { content: "headline"; }&lt;/style&gt;<br>```</p><p>Here's a gist with it working.<br><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fplanetoftheweb%2F9917884%3ArfF1xjLP31SyJBr8zrktaSXGIQ0&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/planetoftheweb/9917884">https://gist.github.com/pla...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082561">2</a> by Simon MacDonald
		posted on 4/1/2014 at 10:10 PM
		</div>
		<div class="comment_text"><p>Great tip Ray. Here's a related question. How do you make an image full screen? Everytime I add and image it is centered and boxed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082547">3</a> by Raymond Camden
		posted on 4/1/2014 at 10:14 PM
		</div>
		<div class="comment_text"><p>Use data-background="..". You can also do width too. Details are on the reveal.js readme:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fhakimel%2Freveal.js%3ACHZCrCnWDpbkxOD137vh7mhKerE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/hakimel/reveal.js">https://github.com/hakimel/...</a></p><p>(CTRL+F for Slide Backgrounds)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082558">4</a> by Saki
		posted on 11/18/2014 at 8:02 AM
		</div>
		<div class="comment_text"><p>This does not seem to work if `parallaxBackgroundImage` is defined.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082544">5</a> by Raymond Camden
		posted on 11/18/2014 at 4:52 PM
		</div>
		<div class="comment_text"><p>Thanks for the warning.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2343230114">
	<div>
		<img src="https://disqus.com/api/users/avatars/ggio_miranda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2343230114">6</a> by Gregório
		posted on 11/4/2015 at 10:35 PM
		</div>
		<div class="comment_text"><p>Nice solution, thx for sharing!</p><p>I have had some trouble making it work with `data-markdown`, but the workaround is simple:</p><p>just put the &lt;style&gt; thing BEFORE the &lt;section&gt; tag</p><p>like this:</p><p>```</p><p>&lt;style&gt;.header1 header:after { content: "Header 1 Example"; }&lt;/style&gt;<br>&lt;section data-markdown="" data-state="header1"&gt;</p><p>content</p><p>&lt;/section&gt;</p><p>```</p></div>
	</div>
</div>
		
<div class="comment" id="c_2353995142">
	<div>
		<img src="https://disqus.com/api/users/avatars/ggio_miranda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2353995142">7</a> (In reply to <a href="#c_1714082554">#1</a>) by Gregório
		posted on 11/11/2015 at 7:22 PM
		</div>
		<div class="comment_text"><p>what about BOTH in the same slide? is that possible?</p><p><b>Edit.: Yes, it is!</b></p><p></p><pre><code><br>&lt;style&gt;.f1 footer:after { content: "f1"; }&lt;/style&gt;<br>&lt;style&gt;.h1 header:after { content: "h1"; }&lt;/style&gt;<br>&lt;section data-state="f1 h1"&gt;<br></code></pre></div>
	</div>
</div>
		
<div class="comment" id="c_2354350938">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2354350938">8</a> (In reply to <a href="#c_2353995142">#7</a>) by Raymond Camden
		posted on 11/11/2015 at 11:18 PM
		</div>
		<div class="comment_text"><p>I still wish Reveal had an easier way of doing this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2469766865">
	<div>
		<img src="https://disqus.com/api/users/avatars/romanfroow.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2469766865">9</a> by romanfroow
		posted on 1/21/2016 at 11:34 AM
		</div>
		<div class="comment_text"><p>My solution <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fhakimel%2Freveal.js%2Fissues%2F180%23issuecomment-173543708%3AGkdxyjI7EPnapxE--M0KqB-N4Gc&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/hakimel/reveal.js/issues/180#issuecomment-173543708">https://github.com/hakimel/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2469921538">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2469921538">10</a> (In reply to <a href="#c_2469766865">#9</a>) by Raymond Camden
		posted on 1/21/2016 at 1:54 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing that!</p></div>
	</div>
</div>
		