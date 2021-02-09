
<div class="comment" id="c_1713730338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730338">1</a> by Tim Garver
		posted on 3/11/2011 at 8:06 PM
		</div>
		<div class="comment_text"><p>This is along the same lines as I was doing with my 404 rewrite <a href="http://disq.us/url?url=http%3A%2F%2Fcf404rewrite.riaforge.com%2F%3AkFJCC3cIXNqsMkzWWWUdnKiumas&amp;cuid=3321886" rel="nofollow noopener" title="http://cf404rewrite.riaforge.com/">http://cf404rewrite.riaforg...</a></p><p>Ray the only problem here is that you are assuming people are going to ask for a .cfm file. so the handler would not pick it up if it were a .htm or even a folder request /xbox360/</p><p>If you setup a custom 404 on your web server, then you could also possibly use Solr to search your content folder for possible results and display a list of suggested pages to the user.</p><p>I bet you could even write into each page, its possible misspelled name variants or meta data that it could be searched against and then write a custom search that would parse each of the content pages and read through these meta tags for results. that way you could control the pages that you wanted to search against.</p><p>Anyway just some ideas there.</p><p>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730349">2</a> by Raymond Camden
		posted on 3/11/2011 at 8:08 PM
		</div>
		<div class="comment_text"><p>Tim - yeah - sorry - I shoulda mentioned the code above was CFM only, and it makes sense to handle it web server level too.</p><p>The idea of metadata in the file is pretty darn interesting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730348">3</a> by Lola LB
		posted on 3/11/2011 at 8:10 PM
		</div>
		<div class="comment_text"><p>I suspect this is where user interface experience comes in . . . might well be worth shelling out some $$$ to hire a UX consultant to take a look at your mission-critical site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730346">4</a> by Jim O&amp;aposKeefe
		posted on 3/11/2011 at 8:15 PM
		</div>
		<div class="comment_text"><p>Another strategy would be to send them to the site map. Then they can see if what they were looking for exists on the site. I dislike half-baked AI schemes that try to guess what I want. Once you're logging the failed requests I would use mod rewrite to redirect the most common ones.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730347">5</a> by Geoff
		posted on 3/11/2011 at 8:15 PM
		</div>
		<div class="comment_text"><p>Make sure you add in your statusCode to the location function! You'll want to permanently redirect (301) to the correct page so crawlers etc don't hang on to the old incorrect missing page URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730345">6</a> by David Hammond
		posted on 3/11/2011 at 8:59 PM
		</div>
		<div class="comment_text"><p>One interesting approach that I have been meaning to explore is to use the http referrer to customize the 404 error page based on the source of the bad link.  This also allows you to fire off an email if the bad link is internal to the site.  This article gives an overview of the different options:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.alistapart.com%2Farticles%2Famoreuseful404%3AL5Hv6T2vKynGGuhQCOP3AD11k2o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.alistapart.com/articles/amoreuseful404">http://www.alistapart.com/a...</a></p><p>Google has a widget that you can put on your 404 page that attempts to find the closest match to the requested page.  I haven't used it and I'm not sure if it's really supported any more, but it's an interesting option:<br><a href="http://disq.us/url?url=http%3A%2F%2Fgooglewebmastercentral.blogspot.com%2F2008%2F08%2Fmake-your-404-pages-more-useful.html%3ANXfwTKrcQ0-_qz4NVwfjI2Z4sEs&amp;cuid=3321886" rel="nofollow noopener" title="http://googlewebmastercentral.blogspot.com/2008/08/make-your-404-pages-more-useful.html">http://googlewebmastercentr...</a></p><p>You can also just go with something fun!<br><a href="http://disq.us/url?url=http%3A%2F%2Fmashable.com%2F2011%2F01%2F16%2Ffunny-404-error-pages%2F%3ArMJhkEkob8tz0vuTv3v8fGXScnw&amp;cuid=3321886" rel="nofollow noopener" title="http://mashable.com/2011/01/16/funny-404-error-pages/">http://mashable.com/2011/01...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730350">7</a> by JP
		posted on 3/11/2011 at 9:23 PM
		</div>
		<div class="comment_text"><p>I cache a site map cfc component in my application scope that has a search () method in it. On the web server (I use IIS), I point my 404 errors to 404.cfm, which looks at CGI.query_string to see what was requested. I also call 404.cfm (using cfmodule) from the CF onMissingTemplate method, passing it the requested page as an attribute.</p><p>The fun part happens next... I tokenize the request and then use the tokens to search my site map for possible matches. This works pretty well when spelling is correct, but I didn't get any matches for "conatct." A good 404 handler would offer "contact" as a possible match for "conatct."</p><p>To solve this, I improved my 404 handler by first asking Google to expand my token list, by returning spelling suggestions for each token, and then doing a sitemap search. This works incredibly well and is fast.</p><p>Here's a code example that calls the google suggest api and uses jquery and a CFC that I wrote to make calls into Google. It includes a download of all the source files and is very straight forward. Feel free to use it however you want.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcode.redtopia.com%2Fexamples%2Fgoogle-spellcheck%2F%3Agqqy1cI73r_-pXsJOYiw-zrmmHA&amp;cuid=3321886" rel="nofollow noopener" title="http://code.redtopia.com/examples/google-spellcheck/">http://code.redtopia.com/ex...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730351">8</a> by existdissolve
		posted on 3/11/2011 at 10:47 PM
		</div>
		<div class="comment_text"><p>"...Adobe's web application product"</p><p>Just curious...any particular reason for this choice of words? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730352">9</a> by Doug
		posted on 3/15/2011 at 7:54 PM
		</div>
		<div class="comment_text"><p>I seem to recall this happening earlier this year when people turned to their favorite search engine and asked, "What time is the superbowl?"  The NFL foolishly did not put that info anywhere useful on their website so they weren't even in the top ten hits.</p><p>Can you guess who got to answer the question at #1?  Yep, Huffington Post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730353">10</a> by Doug
		posted on 3/15/2011 at 7:56 PM
		</div>
		<div class="comment_text"><p>Oops, I should mention that I got that info from a Search Engine Optimization article I read somewhere.  Maybe it was the New York Times.  It had very useful information about improving your site to attract the attention Google and other search engines.</p><p>(And of course by writing this I'm improving this blog's SOE value by 110%!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730354">11</a> by Doug
		posted on 3/15/2011 at 7:56 PM
		</div>
		<div class="comment_text"><p>SEO!  Dammit.  An edit option would be useful. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730356">12</a> by Matthew Clemente
		posted on 9/19/2011 at 9:27 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Sorry for what might be a beginner comment on an older post, but where would I put this if I just wanted to log missing template errors for my application? As a cfscript in my missing template handler? or in my app.cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730355">13</a> by Matthew Clemente
		posted on 9/19/2011 at 9:41 PM
		</div>
		<div class="comment_text"><p>NM,</p><p>Found I can just use onMissingTemplate in the app.cfc</p><p>Thanks.</p></div>
	</div>
</div>
		