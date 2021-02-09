
<div class="comment" id="c_1714081570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081570">1</a> by Salvatore fusto
		posted on 1/31/2014 at 1:12 PM
		</div>
		<div class="comment_text"><p>Ray, i've found the same problem with &lt;cfheader&gt;, so i tried:<br>getPageContext().getResponse().setHeader( "Access-Control-Allow-Origin", "*" ) that is a good basic solution imho.<br>for all undocumented getpageContext() refer to:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F758-ColdFusion-GetPageContext-Massive-Exploration.htm%3AAedfetdZ6SfaQilouaN_dCJQaB8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/758-ColdFusion-GetPageContext-Massive-Exploration.htm">http://www.bennadel.com/blo...</a><br>regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081571">2</a> by Raymond Camden
		posted on 1/31/2014 at 4:39 PM
		</div>
		<div class="comment_text"><p>Err, I'm confused. The issue with cfheader was the bad quotes. The fix was to use proper quotes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081572">3</a> by Salvatore fusto
		posted on 1/31/2014 at 8:06 PM
		</div>
		<div class="comment_text"><p>Ray, time ago i tested an angular app working on my laptop, with an ip, fetching data from my server with another ip, using ajax, and of course i had CORS issues. i tried your solution, writing th code by hand with single and double quotes in attribute values, with no luck.<br>then i tested a jsonp call and getpageContext() as mentioned and all worked fine, jsonp and getPageContext().<br>regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081573">4</a> by Raymond Camden
		posted on 1/31/2014 at 8:27 PM
		</div>
		<div class="comment_text"><p>Hmm. If you can ever go back and revert to cfheader, let me know. I'd like to see it.</p></div>
	</div>
</div>
		