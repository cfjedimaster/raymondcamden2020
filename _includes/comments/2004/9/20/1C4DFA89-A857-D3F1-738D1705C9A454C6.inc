
<div class="comment" id="c_1713616205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616205">1</a> by ForgetFoo
		posted on 9/20/2004 at 11:33 PM
		</div>
		<div class="comment_text"><p>very cool... thanks again! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616218">2</a> by Roger Benningfield
		posted on 9/24/2004 at 6:21 AM
		</div>
		<div class="comment_text"><p>Ray: I spotted a few immediate problems.</p><p>(1) atom:entry can contain more than a single atom:link, and many of them (rel="service.feed", for example) probably aren't the kinds of things you're looking to store. All you really want are rel="alternate" links.</p><p>(2) Many Atom feeds (particularly some of those produced by Blogger) do not contain an atom:content element, but *do* contain atom:summary. And since atom:summary shares the general Atom content model, since point 3 below for further considerations.</p><p>(3) atom:content allows distinct content types within the element. If the type="application/xhtml+xml", then doing entries[x].content.xmlText will return an empty string. You have to retrieve the nested XHTML node  to get anything useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616201">3</a> by Roger Benningfield
		posted on 9/24/2004 at 6:21 AM
		</div>
		<div class="comment_text"><p>er, make that "see point 3"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616203">4</a> by Raymond Camden
		posted on 9/24/2004 at 1:04 PM
		</div>
		<div class="comment_text"><p>Roger, thank you very much for the comments. 1) I thought I -was- using rel=alternative links. My code certainly seems to return it. 2) Makes sense. 3) Hmm. In the sample feed I used, I noticed two different tpes under the content node, either plain text or html text. In both cases, xmlText had valid data. Are you saying there are cases where it will not? If so, I probably wouldn't -want- the blank return anyway if it is some non-text media.</p><p>Please let me know and I'll post a new version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616219">5</a> by Roger Benningfield
		posted on 9/24/2004 at 2:39 PM
		</div>
		<div class="comment_text"><p>Ray:</p><p>(1) I'm referring to the Atom-parsing code you posted. Unless I've gone completely blind (and I'm not far off), this is the only line I can see that's devoted to links:</p><p>[cfset <a href="http://disq.us/url?url=http%3A%2F%2Fnode.link%3Agc1PftE18zOlfp9oYQ5RghT8MqQ&amp;cuid=3321886" rel="nofollow noopener" title="node.link">node.link</a> = entries[x].link.xmlAttributes.href]</p><p>All that will do is grab the first atom:link in an entry... which may be the Atom API link for the entry, or a link to an external file, or something else entirely. If you're looking for the permalink, you need to make sure you're only fetching the href from an atom:link that includes a rel="alternate" attribute.</p><p>(3) There are currently three content types in the Atom content model: text/plain, text/html, and application/xhtml+xml. In the latter case, the content is actually well-formed XML, so content.xmlText will return an empty string... there's no text node there, after all. Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616212">6</a> by Raymond Camden
		posted on 9/24/2004 at 3:07 PM
		</div>
		<div class="comment_text"><p>1) Now that makes sense. Do you have any example Atom feeds that use multiple links that I can test against? Obviously the feed I chose is somewhat simple.</p><p>3) So what I wonder is - would the well formed XML actually be something a usser would expect to search. Maybe... maybe not. But I do think my code should grab the xml anyway as it is the "content." Question - same as above - you know a good Atom feed that would demonstrate this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616211">7</a> by Roger Benningfield
		posted on 9/24/2004 at 10:58 PM
		</div>
		<div class="comment_text"><p>(1) Pick just about any TypePad blog at random, or <a href="http://disq.us/url?url=http%3A%2F%2Fdiveintomark.org%2Fxml%2Fblink.xml%3ANRU4ng6Pq-PehScZNK_y992JkV4&amp;cuid=3321886" rel="nofollow noopener" title="http://diveintomark.org/xml/blink.xml">http://diveintomark.org/xml...</a></p><p>(2) Given that more and more systems are producing XHTML, it won't be long before that's the only content available in an Atom feed. First example:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fadmin.support.journurl.com%2F%3Ftemplate%3Datom%3AYGrsYywcr9YimzTqc1TrvRwptKs&amp;cuid=3321886" rel="nofollow noopener" title="http://admin.support.journurl.com/?template=atom">http://admin.support.journu...</a></p><p>(I need to enter a bug report with the validator... it's squaking about the atom:ids in that feed, but they're definitely compliant with Atom 0.3. They will *not* be compliant with Atom 1.0, though, since it will probably require tag URIs.)</p><p>Of course, the above feed is a bit misleading. All JournURL entries are well-formed XML by default, but Blogger and TypePad still let their users create ill-formed content in some cases. The result is a mix of the two types of content in one feed. Example:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flifeandthensome.typepad.com%2Flife_then_some%2Fatom.xml%3AHTkjKFoLnITL9jspfpiOm9BmAgA&amp;cuid=3321886" rel="nofollow noopener" title="http://lifeandthensome.typepad.com/life_then_some/atom.xml">http://lifeandthensome.type...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616204">8</a> by Growly Bear
		posted on 10/15/2005 at 12:04 AM
		</div>
		<div class="comment_text"><p>I don't know how this will stand up but for the blogger feeds this works for me when I want to get the link.</p><p>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fnode.link%3Agc1PftE18zOlfp9oYQ5RghT8MqQ&amp;cuid=3321886" rel="nofollow noopener" title="node.link">node.link</a> = entries[x].link[2].xmlAttributes.href&gt;</p></div>
	</div>
</div>
		