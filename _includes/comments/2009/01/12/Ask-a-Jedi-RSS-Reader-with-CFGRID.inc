
<div class="comment" id="c_1713711466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711466">1</a> by Kumar
		posted on 1/13/2009 at 5:05 AM
		</div>
		<div class="comment_text"><p>I was working with cffeed yesterday, so decided to give this a go.</p><p>One thing I found out is that the cfgrid doesn't behave well with some kinds of text. For example, using the <a href="http://disq.us/url?url=http%3A%2F%2Ffeedproxy.google.com%2FColdfusionbloggersorgFeed%3A8dsjGekF72wDg6vAOBeHNqjnvfg&amp;cuid=3321886" rel="nofollow noopener" title="http://feedproxy.google.com/ColdfusionbloggersorgFeed">http://feedproxy.google.com...</a> I was displaying the Title as a grid column and had the Content as a hidden grid column.</p><p>The display came up as:<br><a href="http://disq.us/url?url=http%3A%2F%2Fi40.tinypic.com%2F33awhom.jpg%3As9V_3SzJ_QmGWunukIAOMZX0N1U&amp;cuid=3321886" rel="nofollow noopener" title="http://i40.tinypic.com/33awhom.jpg">http://i40.tinypic.com/33aw...</a></p><p>The code was very simple,<br>&lt;cffeed source="<a href="http://disq.us/url?url=http%3A%2F%2Ffeedproxy.google.com%2FColdfusionbloggersorgFeed%3A8dsjGekF72wDg6vAOBeHNqjnvfg&amp;cuid=3321886" rel="nofollow noopener" title="http://feedproxy.google.com/ColdfusionbloggersorgFeed">http://feedproxy.google.com...</a>" query="testfeed" action="read"&gt;</p><p>&lt;cfform&gt;<br>&lt;cfgrid name="RSSFeed" query="testfeed" format="html" selectmode="row" pagesize="10" autowidth="true"&gt;</p><p>&lt;cfgridcolumn name="Title" header="Title" width="150"&gt;</p><p>&lt;cfgridcolumn name="Content" header="Description" display="false"&gt;</p><p>&lt;/cfgrid&gt;<br>&lt;/cfform&gt;</p><p>It happened with a post dealing with jQuery, so I am assuming presence of Javascript/code in any of the cfgrid columns causes this.</p><p>There could be a ExtJS function which allows you to specify the format of a grid and make it worth. Haven't checked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711478">2</a> by Jason Fisher
		posted on 1/13/2009 at 8:05 AM
		</div>
		<div class="comment_text"><p>Ray said, "Ajax calls (outside of AIR of course) are limited to hitting the same domain by which they are served."</p><p>A bit OT, but the Ajax call could certainly hit a CF template which used CFHTTP or CFFEED to go hit any URL it wanted to, right?  It's an extra step, but CF could be the conduit to preprocess and return the XML to the callback.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711476">3</a> by Raymond Camden
		posted on 1/13/2009 at 8:25 AM
		</div>
		<div class="comment_text"><p>Jason, I did say that:</p><p>"So if you want to have a feed reader on <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%3AN7Z24oIKkMVc9eNBzSRQUSpuMJ0&amp;cuid=3321886" rel="nofollow noopener" title="foo.com">foo.com</a> and that reads my RSS feed, then you have to write code that will go from JavaScript to your server and from your server to my feed"</p><p>Was it not clear?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711481">4</a> by Jason Fisher
		posted on 1/13/2009 at 5:05 PM
		</div>
		<div class="comment_text"><p>Sheesh, no, that's clear.  I think I'll stop posting on your comments now, since I seem to keep missing some key point along the way :(</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711475">5</a> by Raymond Camden
		posted on 1/14/2009 at 3:36 AM
		</div>
		<div class="comment_text"><p>@Kumar: You may want to htmlEditFormat the code locally before serving it up to the grid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711477">6</a> by Pete Freitag
		posted on 1/15/2009 at 8:38 PM
		</div>
		<div class="comment_text"><p>Actually some sites would probably still block you if you are hitting feeds every ten minutes, 1 hour seams to be the generally accepted frequency if not defined in the RSS feed.</p><p>RSS feeds allow the publisher to specify how frequently they would like you to fetch their feed. There are a few different tags to pay attention to, ttl, skipDays, and skipHours.</p><p>Some more info here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F642.cfm%3AHdIs49c-rOemGNSfrK_cryFlc9E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/642.cfm">http://www.petefreitag.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711479">7</a> by Raymond Camden
		posted on 1/15/2009 at 8:40 PM
		</div>
		<div class="comment_text"><p>Peter, thanks for bringing up those tags - I completely spaced on them.</p></div>
	</div>
</div>
		