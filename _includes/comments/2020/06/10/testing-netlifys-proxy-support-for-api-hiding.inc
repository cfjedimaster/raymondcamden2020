
<div class="comment" id="c_4964578304">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_4btYTQcjqw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4964578304">1</a> by Mike Hunt
		posted on 6/23/2020 at 1:43 AM
		</div>
		<div class="comment_text"><p>So in order to use Netlify's proxy, I just need to setup a _redirects file like so? Only the dynamic parameters have to be defined in the redirects file and the rest can just be hard coded into the url like this?</p><p>/search/* query:=query <a href="https://disq.us/url?url=https%3A%2F%2Fsvcs.ebay.com%2Fservices%2Fsearch%2FFindingService%2Fv1%3F%26GLOBAL-ID%3DEBAY-US%26keywords%3D%3Aquery%3AKl1Qvk7WiqVj_4QIWY4kmKwtbZY&amp;cuid=3321886" rel="nofollow noopener" title="https://svcs.ebay.com/services/search/FindingService/v1?&amp;GLOBAL-ID=EBAY-US&amp;keywords=:query">https://svcs.ebay.com/servi...</a> 200</p></div>
	</div>
</div>
		
<div class="comment" id="c_4965125227">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4965125227">2</a> (In reply to <a href="#c_4964578304">#1</a>) by Raymond Camden
		posted on 6/23/2020 at 2:18 PM
		</div>
		<div class="comment_text"><p>Should be, yep. Did you try?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4965615930">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_4btYTQcjqw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4965615930">3</a> (In reply to <a href="#c_4965125227">#2</a>) by Mike Hunt
		posted on 6/23/2020 at 8:40 PM
		</div>
		<div class="comment_text"><p>I was able to get it to work. One big issue I had was that I didn't know I had to find a way to copy the redirects file into my build directory during the build process. Perhaps mention that somewhere in your post. Netlify's docs didn't show an example of how to do that either.</p><p>I changed my build command in the Netlify UI to be this: npm run build &amp;&amp; cp _redirects build/</p></div>
	</div>
</div>
		
<div class="comment" id="c_4965623019">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4965623019">4</a> (In reply to <a href="#c_4965615930">#3</a>) by Raymond Camden
		posted on 6/23/2020 at 8:46 PM
		</div>
		<div class="comment_text"><p>I didn't mention it because it's specific to certain JAMStack engines. I had to with Eleventy as it ignores files it doesn't recognize, while in Jekyll this wouldn't be an issue. Know what I mean?</p></div>
	</div>
</div>
		