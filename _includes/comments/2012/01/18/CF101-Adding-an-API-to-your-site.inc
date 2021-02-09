
<div class="comment" id="c_1713738102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738102">1</a> by Tim Brown
		posted on 1/18/2012 at 10:45 PM
		</div>
		<div class="comment_text"><p>I couldn't believe the timing of this post when I received it in my inbox as I've been working (eg: struggling with SOAP) on this exact thing for last few days. I have a couple observations / questions that have come up during the development of our API as a SOAP web service. It seems the way Axis' handles ColdFusion structures by mapping them to the generic complexType of Map and MapItem or using property components to define custom complexTypes via the cfargument type attribute (eg: type="user[]") wreaks havoc when trying to consume the web service from other languages (PHP,.NET) and even another ColdFusion instance. The native SOAP functionality in CF works great for accepting and returning simple values, but bombs out when trying accept/return custom complex data types such as an array of user structures. (<a href="http://disq.us/url?url=http%3A%2F%2Ftjordahl.blogspot.com%2F2008%2F04%2Farray-types-in-coldfusion-web-services.html%29%3AgI1KBXqEPh5UMqmsou5_ILkCoTA&amp;cuid=3321886" rel="nofollow noopener" title="http://tjordahl.blogspot.com/2008/04/array-types-in-coldfusion-web-services.html)">http://tjordahl.blogspot.co...</a>.</p><p>Due to the many quirks with the current implementation of the SOAP protocol in CF9 via the Axis engine, we have opted for a purely HTTP based service that returns JSON.</p><p>Do you see any issues with programming our API to be primarily focused on JSON as our return format and abandoning support for the SOAP protocol?</p><p>It seems like there are a lot of CF web service provider examples that focus on retrieving data, but I was curious if you knew of any examples that were focused on building a web service that not only retrieves information, but focuses on accepting information to be saved via SOAP using complexTypes in the arguments as well as the return?</p><p>A simple example might be allowing someone to add many members to a group by passing in an array of members (eg: [{"UID"="{guid here}","FName"="John","LName"="Doe","Email": "john@doe.com"},{etc.}])<br>Then returning an array of those members with their newly primary key or something (eg: [{"UID"="{guid here}","ID"="12445"},{etc.}]</p><p>Thanks again for this timely post and would appreciate any insight you might have as I continue to develop our API.<br>-tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738103">2</a> by Nick Gleason
		posted on 1/18/2012 at 11:48 PM
		</div>
		<div class="comment_text"><p>Great post Ray.  And very timely for me as well.  We're discussing how best to build out an API for our CMS and the WordPress API with it's simple functions to get page content and so forth is often held up as an example.  It would be interesting to see some examples along those lines if you continue with this topic (which I hope you do).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738104">3</a> by Rob Brooks-Bilson
		posted on 1/19/2012 at 12:44 AM
		</div>
		<div class="comment_text"><p>@Tim, no reason you *have* to go with SOAP.  Your HTTP API that returns JSON is perfectly valid.  You might also want to consider a RESTful API.  There's a nice CF framework called Taffy that makes creating RESTful APIs for ColdFusion pretty simple.  <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fatuttle%2FTaffy%2Fwiki%3AQAAE9lWO4YIUaKNbF0td5SH33Pc&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/atuttle/Taffy/wiki">https://github.com/atuttle/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738101">4</a> by Raymond Camden
		posted on 1/19/2012 at 12:53 AM
		</div>
		<div class="comment_text"><p>Tim, what Rob said. Honest - I just don't think SOAP is worth the complexity. It's nice that my code works as a web service via SOAP w/o me having to worry too much about it, but to be honest, if this were a real API I'd not bother 'advertising' the fact at all.</p><p>Nick, could you expand a bit on what you're looking for?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738100">5</a> by Rob Brooks-Bilson
		posted on 1/19/2012 at 1:08 AM
		</div>
		<div class="comment_text"><p>There are valid reasons to use SOAP over REST in some cases, but from what you've written, your API isn't doing anything that would require a SOAP API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738106">6</a> by Raymond Camden
		posted on 1/19/2012 at 1:10 AM
		</div>
		<div class="comment_text"><p>Can you expand on why you would use SOAP?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738107">7</a> by Raymond Camden
		posted on 1/19/2012 at 1:10 AM
		</div>
		<div class="comment_text"><p>By the way folks, there was a broken link at the end of the article. Fixed now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738105">8</a> by Tim Brown
		posted on 1/19/2012 at 3:21 AM
		</div>
		<div class="comment_text"><p>@Rob, thanks for your reply and I will definitely get taffy installed and see what it can do for us. Thanks for the link.</p><p>Also I am curious, as Ray asked, could you provide an example as to where SOAP makes more sense over using a RESTful approach?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738108">9</a> by Kritner
		posted on 1/19/2012 at 9:15 PM
		</div>
		<div class="comment_text"><p>Probably a dumb question, but is your layout of your CFCs specific to CF versions greater than 8? I've not yet seen a CFC built using non &lt;cf&gt; tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738109">10</a> by Raymond Camden
		posted on 1/19/2012 at 9:23 PM
		</div>
		<div class="comment_text"><p>Correct - CF9 added script based CFCs. To be clear, you can absolutely do what I did in tag based CFCs too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738112">11</a> by Nick Gleason
		posted on 1/20/2012 at 11:12 PM
		</div>
		<div class="comment_text"><p>Hi Ray.  As a follow up, I am talking about internal apis that systems like WordPress and Drupal use.  That would be documentation on all the available functions that a developer can use in plugins and themes.  Here is the link to the WP api: <a href="http://disq.us/url?url=http%3A%2F%2Fcodex.wordpress.org%2FWordPress_API%27s%3AQrvLkUuJ1OtpZFqZ204BOcW0mPA&amp;cuid=3321886" rel="nofollow noopener" title="http://codex.wordpress.org/WordPress_API's">http://codex.wordpress.org/...</a>.</p><p>We've built some of these kinds of functions into our CMS for similar purposes, but it is done using CFCs and as a result the code to invoke them is a little more elaborate (e.g. &lt;cfinvoke&gt;, &lt;cfinvokeargument&gt;, etc.) than using simple functions as in WordPress.  So, I guess that I am wondering if there is a preference or best practice here.  Is it best to stick with the CFC structure or provide functions that are a bit simpler to access (e.g. getpage(12)) without components.  I'm not sure if I'm being clear enough here so let me know if you have any follow up questions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738114">12</a> by Raymond Camden
		posted on 1/20/2012 at 11:16 PM
		</div>
		<div class="comment_text"><p>Ah interesting. Um, I guess it depends on how you read "like Wordpress". WP and Drupal support plugins that let you enhance their functionality. That's an API too, but not the type I had meant here. (External client hits your data/service.)</p><p>To your second example of 'getpage(12)', how do you imagine that would work in your CMS?</p></div>
	</div>
</div>
		