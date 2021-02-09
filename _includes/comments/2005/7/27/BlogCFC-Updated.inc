
<div class="comment" id="c_1713619445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619445">1</a> by jen
		posted on 7/28/2005 at 1:56 PM
		</div>
		<div class="comment_text"><p>I'm sorry, but where can I find the latest release?<br>Seems like the links to the betas aren't working<br>anymore, and I can' t seem to locate the link to<br>the latest 3.8.1 anywhere.</p><p>thanx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619440">2</a> by jen
		posted on 7/28/2005 at 2:03 PM
		</div>
		<div class="comment_text"><p>oops, nevermind, my bad.</p><p>I thought the BlogCFC in the right column was<br>a link to the blog entry.</p><p>thanx.  the installation, I guess, is quite<br>simple, is it not?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619447">3</a> by Raymond Camden
		posted on 7/28/2005 at 11:47 PM
		</div>
		<div class="comment_text"><p>I think it is - but I'm biased. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619448">4</a> by Robert Owen
		posted on 7/29/2005 at 2:34 AM
		</div>
		<div class="comment_text"><p>I am having a little trouble with the initial set-up of the blogcfc. I made the changes outlined in the doc but am still getting this error when I try to goto the blog.<br>-------------------------------------------------<br> Could not find the ColdFusion Component <a href="http://disq.us/url?url=http%3A%2F%2Forg.camden.blog.blog%3AyzvXxHJZ-_gXQzJ9UzwfK-QPovg&amp;cuid=3321886" rel="nofollow noopener" title="org.camden.blog.blog">org.camden.blog.blog</a>.<br>Please check that the given name is correct and that the component exists.</p><p>The error occurred in C:\Inetpub\wwwroot\blog\client\Application.cfm: line 41</p><p>39 : &lt;cfif not isDefined("application.init") or isDefined("url.reinit")&gt;<br>40 : 	&lt;!--- load an init blog ---&gt;<br>41 : 	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.blog%3AyPfk_08JbGyDtIai-mjD02kxbvg&amp;cuid=3321886" rel="nofollow noopener" title="application.blog">application.blog</a> = createObject("component","<a href="http://disq.us/url?url=http%3A%2F%2Forg.camden.blog.blog%3AyzvXxHJZ-_gXQzJ9UzwfK-QPovg&amp;cuid=3321886" rel="nofollow noopener" title="org.camden.blog.blog">org.camden.blog.blog</a>").init(blogname)&gt;<br>42 : 	<br>43 : 	&lt;!--- all locale related ---&gt;<br>--------------------------------------------------------</p><p>Obviously I've not done something I was supposed to. Can you lend a hand?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619449">5</a> by Raymond Camden
		posted on 7/29/2005 at 2:44 AM
		</div>
		<div class="comment_text"><p>Ensure that the org folder is under your client folder. If not, ensure there is a CF mapping for ORG.</p></div>
	</div>
</div>
		