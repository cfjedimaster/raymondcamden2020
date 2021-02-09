
<div class="comment" id="c_1713713664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713664">1</a> by Peter
		posted on 3/8/2009 at 11:25 PM
		</div>
		<div class="comment_text"><p>Ray, can you talk a bit about caching strategy for the above situation. Are you just writing the pdf document to disk and the "check" you are referring to is to see if the file exists on disk.</p><p>What are the option available for coldfusion beside cfcache: memcache, custom application scope variable?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713642">2</a> by Joshua Siok
		posted on 3/8/2009 at 11:46 PM
		</div>
		<div class="comment_text"><p>I would have to agree with you, but it's not always possible.  I have considerable experience using cfdocument, cfpdf, and cfimage and have found that there's a lot of overhead when generating files.  One tip I have for anyone working with these tags is to ceate a CFC method that houses the cfpdf or cfdocument code.  I've observed noticable performance improvements over running inline code within the CFM itself.  This is especially evident when running batches.</p><p>Great blog... keep em coming!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713649">3</a> by David CL
		posted on 3/9/2009 at 1:28 AM
		</div>
		<div class="comment_text"><p>After hitting a performance/traffic wall with our application recently, my team just rewrote our application to cache a lot of our content statically to disk on the web servers, so a dynamic page which used to involve in 50 queries is now usually served by a much quicker series of cffile operations.  I think this stuff is very application-specific, though-- I wouldn't necessarily recommend this approach to folks who aren't experiencing these particular performance problems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713651">4</a> by Raymond Camden
		posted on 3/9/2009 at 2:41 PM
		</div>
		<div class="comment_text"><p>@peter: Yes, the logic was as simple as:</p><p>if file doesn't exist, make it<br>return file data</p><p>This blog entry focused on one reason you might cache (working with binary data), therefore my example focused on how you would cache it. I probably would not (again, normally) cache binary data in RAM. But certainly that is an option.</p><p>@Joshua: Yep, you can't always cache the data unfortunately. I have to say I do not think you are right though about the CFC code being quicker. There is nothing inherently quicker about a CFC. If you can make a simple example to help proove this, I'd like to see it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713650">5</a> by Rob Brooks-Bilson
		posted on 3/10/2009 at 8:42 PM
		</div>
		<div class="comment_text"><p>You might want to have a look at the presentation I did at MAX 08 on Advanced ColdFusion Caching Strategies.  There's a lot of good info in the beginning on strategies for what to cache, when and where.  You can view and listen to the preso on Adobe TV:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftv.adobe.com%2F%23vi%2Bf15383v1018%3AcJLPKbdQdCJoFeUiwolpgaCONxk&amp;cuid=3321886" rel="nofollow noopener" title="http://tv.adobe.com/#vi+f15383v1018">http://tv.adobe.com/#vi+f15...</a></p></div>
	</div>
</div>
		