
<div class="comment" id="c_1713673359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673359">1</a> by Pete Freitag
		posted on 10/16/2007 at 1:48 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Yes, so the HTTP RFC doesn't mention ETag as being required when they mention If-Modified-Since, but it is probably a good idea to use it as a general rule of thumb.</p><p>It's probably not an issue when you are dealing with RSS feeds, but if you are fetching a page that may be different for different users, then you would want to use Etags. Because the etag is kind of like a unique id for the content of the page, and the last modified date is simply a timestamp, the issue arrises if there is more than one version of the page. So it's not a big deal with RSS, but in general it's probably a good idea to use them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673372">2</a> by Richard Davies
		posted on 2/10/2009 at 4:22 AM
		</div>
		<div class="comment_text"><p>The way I understand it (the relationship between the if-modified-since and etag headers) is that the two headers are entirely independent of each other. They are simply two different mechanisms for allowing user agents to cache HTTP responses and perform conditional get requests to check if their cache is outdated.</p><p>There is no requirement that they be used together. Therefore, you will likely find user agents and HTTP servers that support one or the other method, or both.</p><p>As Pete alluded to in his comment, there are some subtle advantages and disadvantages to the two methods. If-modified-since is an easy method that works well when serving files that have a "modified" date. When dealing with more abstract data, such as dynamic pages, etags might make more sense since you're assigning a unique identifier to the data and don't have to worry about calculating some sort of pseudo-modification date.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673367">3</a> by Marcus Coia
		posted on 10/1/2012 at 9:36 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I was just wondering if you made the cfc you mentioned in this post. I searched for it but I couldn't find it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673370">4</a> by Raymond Camden
		posted on 10/1/2012 at 10:54 PM
		</div>
		<div class="comment_text"><p>Wow, to be honest, I don't think I did write it. Maybe I was planning on it. At minimum, the code for CFB is up on my GitHub account. You can see code using this technique in action there.</p></div>
	</div>
</div>
		