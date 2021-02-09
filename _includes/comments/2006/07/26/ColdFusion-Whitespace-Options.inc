
<div class="comment" id="c_3492135855">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3492135855">1</a> by Charles Robertson
		posted on 8/29/2017 at 11:21 AM
		</div>
		<div class="comment_text"><p>Ray. Thanks for this post.</p><p>I still get whitespace with the following, which disrupts my layout, by adding about 4 extra whitespaces after each child &lt;div&gt;:</p><p></p><pre><code><br>&lt;cfprocessingdirective suppresswhitespace="true"&gt;<br>  <br>    &lt;div class="social-media-icons-block #sharesocialmediaiconssize#"&gt;<br>    <br>      &lt;cfif sharesocialmediaiconsfacebook=""&gt;<br>        &lt;div class="social-media-icon-block-container #sharesocialmediaiconssize#"&gt;<br>          &lt;a class="social-media-icon-block facebook #sharesocialmediaiconssize#" href="https://www.facebook.com/sharer/sharer.php?u=https%3A//www.establishmindfulness.com/subscribe" target="_blank"&gt;&lt;/a&gt;<br>        &lt;/div&gt;<br>      &lt;/cfif&gt;<br>      <br>      &lt;cfif sharesocialmediaiconstwitter=""&gt;<br>        &lt;div class="social-media-icon-block-container #sharesocialmediaiconssize#"&gt;<br>          &lt;a class="social-media-icon-block twitter #sharesocialmediaiconssize#" href="https://twitter.com/home?status=https%3A//www.establishmindfulness.com/subscribe" target="_blank"&gt;&lt;/a&gt;<br>        &lt;/div&gt;<br>      &lt;/cfif&gt;<br>      <br>      &lt;cfif sharesocialmediaiconsemail=""&gt;<br>        &lt;div class="social-media-icon-block-container #sharesocialmediaiconssize#"&gt;<br>          &lt;a class="social-media-icon-block email #sharesocialmediaiconssize#" href="mailto:mailto:enquiries@establishmindfulness.com" target="_blank"&gt;&lt;/a&gt;<br>        &lt;/div&gt;<br>      &lt;/cfif&gt;<br>      <br>      &lt;cfif sharesocialmediaiconslinkedin=""&gt;<br>      <br>        &lt;div class="social-media-icon-block-container #sharesocialmediaiconssize#"&gt;<br>          &lt;a class="social-media-icon-block linkedin #sharesocialmediaiconssize#" href="https://www.linkedin.com/shareArticle?mini=true&amp;url=https%3A//www.establishmindfulness.com" target="_blank"&gt;&lt;/a&gt;<br>        &lt;/div&gt;<br>      <br>      &lt;/cfif&gt;<br>      <br>      &lt;cfif sharesocialmediaiconsgoogleplus=""&gt;<br>        &lt;div class="social-media-icon-block-container #sharesocialmediaiconssize#"&gt;<br>          &lt;a class="social-media-icon-block googleplus #sharesocialmediaiconssize#" href="https://plus.google.com/share?url=https%3A//www.establishmindfulness.com" target="_blank"&gt;&lt;/a&gt;<br>        &lt;/div&gt;<br>      &lt;/cfif&gt;<br>      <br>    &lt;/div&gt;<br>  <br>  &lt;/cfprocessingdirective&gt;<br><br></code></pre><p></p><p>Any thoughts?.</p><p>Sorry. This text editor is not showing all my code, despite using the correct Disqus syntax...<br>But, hopefully you get the idea...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3492251802">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3492251802">2</a> (In reply to <a href="#c_3492135855">#1</a>) by Raymond Camden
		posted on 8/29/2017 at 1:03 PM
		</div>
		<div class="comment_text"><p>It's been a few years, but I think the cfsetting route is the only 100% solution. I'd maybe switch to that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3492295417">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3492295417">3</a> (In reply to <a href="#c_3492251802">#2</a>) by Charles Robertson
		posted on 8/29/2017 at 1:33 PM
		</div>
		<div class="comment_text"><p>OK. I was trying to avoid cfsetting becuase it means I have to surround lots of small portions of code with cfoutput. Its about time CF sorted this issue out properly. Just one tag that, reliably, gets rid of whitespace, caused by CF processing lag.</p><p>I have to say I have never found a satisfactory solution to this issue.</p><p>In the end I decided to get rid of the &lt;divs&gt; altogether and use a table instead. It sorted out the issue, because tables have one wonderful unique property. A table adds an equal amount of width to cells thaty have no CSS width applied to them. This perfectly spaces the cells that do have CSS width applied to them. Tables get a raw deal, but sometimes they just get the job done.</p><p>So, my solution was a CSS/HTML one, this time.</p><p>But thanks for your advice anyway!</p></div>
	</div>
</div>
		