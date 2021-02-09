
<div class="comment" id="c_1713678019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678019">1</a> by Boyan Kostadinov
		posted on 3/11/2008 at 3:59 PM
		</div>
		<div class="comment_text"><p>Actually, there is a way to expose the database through HTTP endpoints but only in SQL Server 2005. Check out this blog post: <a href="http://disq.us/url?url=http%3A%2F%2Fweblogs.asp.net%2Fmuhammadadnan%2Farchive%2F2008%2F01%2F24%2Fcreate-http-endpoing-web-service-in-sql-server-2005-2k5.aspx%3AgOFHed46Y3-VZ9mThB2DutkT5Pk&amp;cuid=3321886" rel="nofollow noopener" title="http://weblogs.asp.net/muhammadadnan/archive/2008/01/24/create-http-endpoing-web-service-in-sql-server-2005-2k5.aspx">http://weblogs.asp.net/muha...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678011">2</a> by Joel Watson
		posted on 3/11/2008 at 4:31 PM
		</div>
		<div class="comment_text"><p>This could get expensive, depending on the number of languages and amount of data returned, but one could also use a filter, correct?  That way, one could switch back and forth between languages without having to reload the dataset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678022">3</a> by Ray Buechler
		posted on 3/11/2008 at 4:44 PM
		</div>
		<div class="comment_text"><p>There a Dreamweaver extension called XML Export. It allows you export a recordset as XML. You are still generating XML but the XML is generated on the fly.</p><p>The extension is free when you purchase Adobe CS3.</p><p>Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678021">4</a> by Raymond Camden
		posted on 3/11/2008 at 5:04 PM
		</div>
		<div class="comment_text"><p>@Boyan - I have 0 experience with that - but it scares me. ;) I assume they have security as to what you can expose? Seems like just one more thing to worry about.</p><p>@Ray - Generating XML is easy enough I wouldn't bother buying an extension. :) You can always use toxml.cfc, my XML making component.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678023">5</a> by Boyan Kostadinov
		posted on 3/11/2008 at 5:22 PM
		</div>
		<div class="comment_text"><p>@Ray, yup, security is defined at the database level, check out the security section in this article: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.developer.com%2Fdb%2Farticle.php%2F3390241%3AfureO5iQQI4eEATadhO0zwnKDOs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.developer.com/db/article.php/3390241">http://www.developer.com/db...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678025">6</a> by Raymond Camden
		posted on 3/11/2008 at 5:27 PM
		</div>
		<div class="comment_text"><p>Doesn't this just mean one more thing to secure? Like for example, if we say users of type X can get data Y, I'd secure this in my web app, and now I have to secure it at the db instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678017">7</a> by Andrew
		posted on 3/11/2008 at 6:14 PM
		</div>
		<div class="comment_text"><p>I know exactly what the sender of this post is going through.   I had the same issue when I was first introduced to Spry.  If you are using Dreamweaver CS3 the free extension is the way to go in my opinion.  If you're using CFEclipse, the toxml() is a good alternative.  If you're building/maintaining a dynamic site using a database and CF8 I'm not sure why you'd want to use Spry if you're interacting up data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678018">8</a> by Raymond Camden
		posted on 3/11/2008 at 6:21 PM
		</div>
		<div class="comment_text"><p>@Andrew - While CF8 has very cool Ajax features, it doesn't mean that everyone wants to use them. I know I still use Spry for example. Some people avoid the UI features in CF8 because they don't like the overhead. And to be clear, using Spry doesn't mean NOT using CF8 features. I can use Spry to talk to a CFC that returns JSON (thanks to the new returnFormat in CF8). It is definitely not an 'either/or' situation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678016">9</a> by Ray Buechler
		posted on 3/11/2008 at 11:01 PM
		</div>
		<div class="comment_text"><p>Ray: I didn't actually buy the extension. I bought Dreamweaver and the extension came with it free. ;)</p></div>
	</div>
</div>
		