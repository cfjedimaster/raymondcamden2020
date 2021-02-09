
<div class="comment" id="c_5028734913">
	<div>
		<img src="https://disqus.com/api/users/avatars/tensketchbala.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5028734913">1</a> by TenSketch Bala
		posted on 8/13/2020 at 10:22 AM
		</div>
		<div class="comment_text"><p>Hi how to do this for an image gallery, this is the code,<br><code><br>&lt;div class="container my-5"&gt;<br>        &lt;div class="masonry"&gt;<br>            {{range .Resources.Match "gallery/*" -}}<br>            {{ $image := . }}<br>            &lt;div class="masonry-item"&gt;<br>                <a href="http://disq.us/url?url=%7B%7B.RelPermalink%7D%7D%3AA8l716OUrViIV0IlbdEwjTmwGw8&amp;cuid=3321886" rel="nofollow noopener" title="{{.RelPermalink}}"><br>                    &lt;img src="{{ $image.RelPermalink }}" class="masonry-content lazyload" alt="{{.Name}}"&gt;<br>                </a><br>            &lt;/div&gt;<br>            {{- end }}<br>        &lt;/div&gt;<br>    &lt;/div&gt;<br></code></p><p>Content folder,<br> <a href="https://uploads.disquscdn.com/images/980f5e21521503ce3eeadc1f1e418be749343b21166dcba215d08624f4a64480.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/980f5e21521503ce3eeadc1f1e418be749343b21166dcba215d08624f4a64480.png">https://uploads.disquscdn.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_5029008363">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5029008363">2</a> (In reply to <a href="#c_5028734913">#1</a>) by Raymond Camden
		posted on 8/13/2020 at 3:02 PM
		</div>
		<div class="comment_text"><p>Sorry, I haven't used Hugo in years.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5049923781">
	<div>
		<img src="https://disqus.com/api/users/avatars/tensketchbala.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5049923781">3</a> (In reply to <a href="#c_5029008363">#2</a>) by TenSketch Bala
		posted on 8/29/2020 at 10:26 AM
		</div>
		<div class="comment_text"><p>That is okay. Thank you</p></div>
	</div>
</div>
		