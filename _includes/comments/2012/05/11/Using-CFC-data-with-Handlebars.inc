
<div class="comment" id="c_1713741112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741112">1</a> by andy matthews
		posted on 5/11/2012 at 7:03 PM
		</div>
		<div class="comment_text"><p>I absolutely hate that ColdFusion returns JSON in a non-standard format. Yes it might be "better" from a data transfer perspective but it guarantees that you'll have to manipulate the data either server side or client side before actually using it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741114">2</a> by Raymond Camden
		posted on 5/11/2012 at 7:04 PM
		</div>
		<div class="comment_text"><p>I disagree completely, Mr. Mathews. This is very much JSON format. It's just in a style that isn't helpful.</p><p>Yes - I'm being picky. ;) But when you say "standard" I think it implies something. It _is_ JSON.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741135">3</a> by Sam Farmer
		posted on 5/11/2012 at 7:31 PM
		</div>
		<div class="comment_text"><p>ColdFusion serializes entities beautifully preserving the case of the properties and everything.</p><p>We've found serializing entities much easier to work with templating engines than the query object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741127">4</a> by Jim O&amp;aposKeefe
		posted on 5/11/2012 at 7:33 PM
		</div>
		<div class="comment_text"><p>Ray, 2 quick questions - I've only used console.log, what is console.dir? Also in the callback function when you call the cfc, what's that second argument "code" about?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741132">5</a> by Raymond Camden
		posted on 5/11/2012 at 7:37 PM
		</div>
		<div class="comment_text"><p>console.dir creates a 'tree' like view of data. Think of it like cfdump. On Firefox/Firebug it is nicely rendered out. On Chrome, it's a tree you have to manually open. I prefer the Firebug method. But - just consider it a way to handle complex data. I believe, in Chrome, console.log works fine for complex objects too... I just like being specific. ;)</p><p>jQuery Ajax events return the data and a status code. If you care about it, you can look at it and respond to it. I don't. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741128">6</a> by Gene
		posted on 5/11/2012 at 8:33 PM
		</div>
		<div class="comment_text"><p>Another way to render a more friendly json format, is to write another CFC function which takes a query and converts it to an array of structs (then returns in json format). Its an extra step but letting CF handle it might be easier, so the javascript can be simple. We do this where I work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741136">7</a> by Raymond Camden
		posted on 5/11/2012 at 9:57 PM
		</div>
		<div class="comment_text"><p>@Gene: Yep, good idea. I did mention that at the _very_ end though. :) Would an example of that be helpful? Basically the CF version of my cfNormalizeQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741125">8</a> by Cutter
		posted on 5/11/2012 at 10:11 PM
		</div>
		<div class="comment_text"><p>I have a JQuery Plugin, serializeCFJSON, up on GitHub. It will convert the CF native query JSON return to the proper setup. In fact, I used it with HandlebarsJS in my ajaxPager project demo (also on GitHub). You can see it in the ajaxPager demo:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fexamples.cutterscrossing.com%2FajaxPager%2F%3AyUvVCfL6cXmCE6vO-V5PYtt9et8&amp;cuid=3321886" rel="nofollow noopener" title="http://examples.cutterscrossing.com/ajaxPager/">http://examples.cutterscros...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741129">9</a> by Raymond Camden
		posted on 5/11/2012 at 10:12 PM
		</div>
		<div class="comment_text"><p>Awesome - thanks for sharing that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741130">10</a> by Adrian J. Moreno
		posted on 5/12/2012 at 2:54 AM
		</div>
		<div class="comment_text"><p>Ask and ye shall recieve.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fiknowkungfoo.com%2Fblog%2Findex.cfm%2F2012%2F5%2F11%2FArrayCollectioncfc-a-custom-JSON-renderer-for-ColdFusion-queries%3An_gL5XmvtyYSIC68tR2DSmqwls8&amp;cuid=3321886" rel="nofollow noopener" title="http://iknowkungfoo.com/blog/index.cfm/2012/5/11/ArrayCollectioncfc-a-custom-JSON-renderer-for-ColdFusion-queries">http://iknowkungfoo.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741134">11</a> by Andrew Scott
		posted on 5/12/2012 at 6:04 AM
		</div>
		<div class="comment_text"><p>Not to mention this has been around for 5 years</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.epiphantastic.com%2Fcfjson%2F%3A3eMw3gAttZSTsJLQlqqRjOKs7Wc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.epiphantastic.com/cfjson/">http://www.epiphantastic.co...</a></p><p>Which serialise json as well to what ExtJS and other JS frameworks had set the standard format too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741131">12</a> by Brad P.
		posted on 5/9/2013 at 2:41 AM
		</div>
		<div class="comment_text"><p>Thank you for this Ray1 I've been stuck on trying to display the returned data.</p></div>
	</div>
</div>
		