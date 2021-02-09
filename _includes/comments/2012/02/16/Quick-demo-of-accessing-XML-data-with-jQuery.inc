
<div class="comment" id="c_1713739022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739022">1</a> by PT
		posted on 2/17/2012 at 5:24 AM
		</div>
		<div class="comment_text"><p>Ha!  This is great.  We are just getting into AJaX libraries and XML is one of my classes.  Very timely.  It will be interesting to see how it is taught, vs this example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739023">2</a> by Joel Wallis
		posted on 2/19/2012 at 7:12 PM
		</div>
		<div class="comment_text"><p>I really want to ask you why you aren't using jQuery.parseXML() method instead. Do you had some problem using it?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2FjQuery.parseXML%2F%3AiOX_c8w4RtWxH6Y1kxK7b6x6ugI&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/jQuery.parseXML/">http://api.jquery.com/jQuer...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739025">3</a> by Raymond Camden
		posted on 2/19/2012 at 7:26 PM
		</div>
		<div class="comment_text"><p>I did. When I said the data type was XML, jQuery ran it for me - it converted the string into an XML object for me. If I did a console.dir on res you would see that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739027">4</a> by Jose Manuel
		posted on 2/19/2012 at 7:50 PM
		</div>
		<div class="comment_text"><p>Ii's good you add the 'xml' format parameter, because as far as I have tested it' necessary for IE8</p><p>By the way in Chrome function get only works when data source is http, if it's a file it doesn't work (I was trying to use it for data storage in a cdrom javascript app)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739024">5</a> by Raymond Camden
		posted on 2/19/2012 at 8:24 PM
		</div>
		<div class="comment_text"><p>To be anal, all things you get from http are files (well, you can stream raw data I suppose). I assume you mean you can't get file URIs, if so, that's a security lock down. On your CD ROM app, did you try putting the file in the same folder as your html file and simply do a relative get? ie, get foo.xml?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739028">6</a> by Jose Manuel
		posted on 2/19/2012 at 8:28 PM
		</div>
		<div class="comment_text"><p>Yes, I tried that:</p><p>get('file.xml')</p><p>But if it resolves to a url like 'file://file.xml' Chrome doesn't allow it. I like having my xml data in an independent xml file, but I had to store my xml data in a string because of Chrome</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739030">7</a> by Raymond Camden
		posted on 2/19/2012 at 8:32 PM
		</div>
		<div class="comment_text"><p>Ah, well, interesting note there.</p></div>
	</div>
</div>
		