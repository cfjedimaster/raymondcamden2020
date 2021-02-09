
<div class="comment" id="c_1713663124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663124">1</a> by DK
		posted on 3/14/2007 at 9:19 PM
		</div>
		<div class="comment_text"><p>Thats some really significant savings. I'm glad you posted this because I've never had time/anything applicable to really look at JSON with.</p><p>There was a post on the spry forums way back that someone implemented their own JSON into spry 1.3<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fwebforums%2Fforum%2Fmessageview.cfm%3Fforumid%3D72%26catid%3D602%26threadid%3D1183156%26highlight_key%3Dy%26keyword1%3Djson%3AnwJPGddg6eEdItcNAvwuUtTD0ZQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/webforums/forum/messageview.cfm?forumid=72&amp;catid=602&amp;threadid=1183156&amp;highlight_key=y&amp;keyword1=json">http://www.adobe.com/cfusio...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663122">2</a> by Andy Matthews
		posted on 3/14/2007 at 10:00 PM
		</div>
		<div class="comment_text"><p>Andy Powell spoke at the Nashville CFUG on Spry. If I recall, he said that Adobe was planning on implementing JSON into the final release version of Spry. Just FYI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663109">3</a> by Joshua Curtiss
		posted on 3/14/2007 at 10:06 PM
		</div>
		<div class="comment_text"><p>I love JSON. I had a similar experience where I could measure my AJAX packets in kilobytes with XML, but in bytes with JSON.</p><p>I also found JSON easier to generate, but now with tools like toXML and CFJSON, that's irrelevant. :-)</p><p>I haven't stepped out of the Prototype/JSON world yet.. My problem (if you could call it that) is that I actually LIKE JavaScript, so I don't mind some of the manual higher-level AJAX processing that you do when you just have Prototype. But your Spry preso a few weeks back really impressed on me how quickly Spry lets you implement basic AJAX functionality!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663126">4</a> by Lola LB
		posted on 3/14/2007 at 10:07 PM
		</div>
		<div class="comment_text"><p>The "final" release of Spry being the final final?  You mean, in the next version, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663128">5</a> by Elliott Sprehn
		posted on 3/15/2007 at 8:45 AM
		</div>
		<div class="comment_text"><p>JSON is a pretty nifty way to serialize data and is for sure less dense than XML, but it's also a good way to introduce security holes in your applications if you're not careful...</p><p>There's a tendency to just eval() the response in the browser since its JavaScript anyway, but that leaves your application open for some very nasty XSS attacks.</p><p>Always make sure you validate the result in the browser before eval'ing it. :)</p><p>(Note that the JSON library at <a href="http://disq.us/url?url=http%3A%2F%2Fjson.org%3AMHt-C2KZL5Y1AVq63C2be4XFTAA&amp;cuid=3321886" rel="nofollow noopener" title="json.org">json.org</a> does this for you.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663132">6</a> by Joshua Curtiss
		posted on 3/15/2007 at 4:40 PM
		</div>
		<div class="comment_text"><p>@Lola: I believe he means "Final" as in the non-beta release. Even though it is a 1.x release, it's a beta.</p><p>@Elliott: I'm aware of the danger of XSS in AJAX/JSON, but frankly I don't understand logistically how this can happen since by default the AJAX will only accept responses from the same server. How can XSS occur?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663130">7</a> by Elliott Sprehn
		posted on 3/16/2007 at 11:14 PM
		</div>
		<div class="comment_text"><p>@Joshua:</p><p>Well it depends entirely on how the JSON is requested. Ajax is often used to mean using a XMLHTTPRequest, but in practice iframes and script tags get used too which open different attack vectors.</p><p>In the case of a XMLHTTP request a "man in the middle" attack is one example. If you're using an XMLHTTP driven admin section on your site, lets say your blog, and I return a JSON packet to your client that selects all the entries and submit()'s them for deletion you'd be rather unhappy. Of course a blog is a trivial case, something far worse could happen in other places. Of course HTTPS helps quite a bit in such cases.</p><p>Now if we think about XML here, no combination of XML response data on the page can create an unexpected "delete" operation.</p><p>Its the same reason that its bad practice to evaluate() CF code even if the code you're evaluating is only coming from another server inside the internal network... You're leaving yourself open for potential attacks.</p><p>If you google around you can find other examples of JSON security issues.</p><p>Here's an interesting one about CSRF: <a href="http://disq.us/url?url=http%3A%2F%2Fgetahead.org%2Fblog%2Fjoe%2F2007%2F03%2F05%2Fjson_is_not_as_safe_as_people_think_it_is.html%3AbDAJGbh7CCn7xxgFyV9h9lqol9M&amp;cuid=3321886" rel="nofollow noopener" title="http://getahead.org/blog/joe/2007/03/05/json_is_not_as_safe_as_people_think_it_is.html">http://getahead.org/blog/jo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663131">8</a> by Joshua Rountree
		posted on 12/27/2007 at 7:17 PM
		</div>
		<div class="comment_text"><p>Took your advice on the JSON format but have a question...<br>I used CFJSON to convert a query object and it gives me recordcount, columns, and data, etc but how do I output it using spry:repeat...</p><p>var mydata = new Spry.Data.JSONDataSet(getURL(), { path: "data" });</p><p>That's what I changed the XMLDataSet to and it's outputting the data as one line with comma separated...</p><p>Any pointers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663127">9</a> by Raymond Camden
		posted on 12/28/2007 at 7:49 PM
		</div>
		<div class="comment_text"><p>Most likely you need to add this to your options for your DS:</p><p>pathIsObjectOfArrays: true</p></div>
	</div>
</div>
		