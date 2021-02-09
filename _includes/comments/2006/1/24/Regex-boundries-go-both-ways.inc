
<div class="comment" id="c_1713649527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649527">1</a> by Steve Gustafson
		posted on 1/24/2006 at 5:35 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Regular Expressions are one of the most powerful tools available to a developer, and probably the area with the least expertise.  The reason for this is simple... they are hard to master!</p><p>I highly recommend the book "Mastering Regular Expressions" ( <a href="http://disq.us/url?url=http%3A%2F%2Fwww.oreilly.com%2Fcatalog%2Fregex2%2F%3APeM-F2Xc12ChZhRwn5y4c14vlvI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.oreilly.com/catalog/regex2/">http://www.oreilly.com/cata...</a> ) to anyone that wants to really get a handle on Regexes.  It is not an easy read, but I guarantee it will save you countless hours for the rest of your career.</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649539">2</a> by Steve Gustafson
		posted on 1/24/2006 at 6:00 PM
		</div>
		<div class="comment_text"><p>One additional note, beware the "Word Boundry"  it has a different meaning than it does in English, and can mean different things in different programming languages.</p><p>In the examples below, the first to will match "Ray", the third will not.  This is because the engine treats " ' ", and " - " as Non-AlphaNumeric thus a word boundary, but treats " _ " as AlphaNumeric.</p><p>reFindNoCase("\bRay\b", "This is Ray's blog.") Match<br>reFindNoCase("\bRay\b", "This is Ray-Camdens blog.") Match<br>reFindNoCase("\bRay\b", "This is Ray_Camdens blog.") No Match</p><p>Regexes are great, just be sure to understand them well or you may get unexpected results.</p><p>Gus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649538">3</a> by Phillip Senn
		posted on 1/24/2006 at 6:29 PM
		</div>
		<div class="comment_text"><p>What is Regex?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649537">4</a> by Raymond Camden
		posted on 1/24/2006 at 6:57 PM
		</div>
		<div class="comment_text"><p>Phil, this will be a VERY bad short description: Regex is "Regular Expressions." You can think of it like a pattern language for strings. So for example, this: [0-9] means any number 0-9. This:  [acd] means either an "a", "c", or "d". Using these patterns, you can do things like checking if a string is a valid email or URL.</p><p>Read the docs for more info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649540">5</a> by jim collins
		posted on 1/24/2006 at 7:09 PM
		</div>
		<div class="comment_text"><p>I loathe regex and avoid it whenever possible. I much prefer to use Xpath expresions. However, sometimes its unavoidable. here are some links if you want to learn more about regex:<br>Regex Coach <a href="http://disq.us/url?url=http%3A%2F%2Fwww.weitz.de%2Fregex-coach%2F%3ANH4Xb9c-3qhRg-RbeM0VoLMpE0U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.weitz.de/regex-coach/">http://www.weitz.de/regex-c...</a><br>Regex Builder <a href="http://disq.us/url?url=http%3A%2F%2Frenschler.net%2FRegexBuilder%2F%3ALqZmMQX3nPpGNQ6RkYjYDWFAO8k&amp;cuid=3321886" rel="nofollow noopener" title="http://renschler.net/RegexBuilder/">http://renschler.net/RegexB...</a><br>The Regulator <a href="http://disq.us/url?url=http%3A%2F%2Fregex.osherove.com%2F%3AZebqF1qvSkkQnVkrMDDjbM5hp0E&amp;cuid=3321886" rel="nofollow noopener" title="http://regex.osherove.com/">http://regex.osherove.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649544">6</a> by jim collins
		posted on 1/24/2006 at 7:14 PM
		</div>
		<div class="comment_text"><p>More regex goodness: <a href="http://disq.us/url?url=http%3A%2F%2Fregexlib.com%2F%3ANNFZ7FrGy7ItNmYGL7WT0s3lmm4&amp;cuid=3321886" rel="nofollow noopener" title="http://regexlib.com/">http://regexlib.com/</a><br>Ok I'll stop now :)</p></div>
	</div>
</div>
		