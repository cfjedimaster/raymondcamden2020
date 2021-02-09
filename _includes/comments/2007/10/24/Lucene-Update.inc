
<div class="comment" id="c_1713673557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673557">1</a> by todd sharp
		posted on 10/25/2007 at 4:32 PM
		</div>
		<div class="comment_text"><p>How is that you "steal" your own code and "repurpose" other people's code? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673548">2</a> by Raymond Camden
		posted on 10/25/2007 at 5:27 PM
		</div>
		<div class="comment_text"><p>i learned from ms</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673559">3</a> by Grant Straker
		posted on 10/26/2007 at 1:11 PM
		</div>
		<div class="comment_text"><p>About a year ago I wrote a complete Lucene 2 wrapper for our CMS which contains all the functionality of Verity and a lot more. We mainly went to Lucene for the more flexible multilingual support and the ability to write our own analyizers.  The code is wrapped up in a jar and is part of a commercial product so not open source.  We used the following open source 3rd party java libraries to get it work with a number of binary file formats</p><p>PDFBOX - PDF<br>Text Mining Extractors - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.textmining.org%3ABe-Ar64MSoCAjl-51ZW0zuaJEEE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.textmining.org">http://www.textmining.org</a> MS Office documents<br>Java - Text , Images</p><p>We have documented how we call things here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.shadocms.com%2Fshadozoom%2Findex.cfm%3F0B316206-1320-3B37-9EF3-1882EC540AA9%3AoVwmzXXOpXnzQjprIIlSD8dwsCc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.shadocms.com/shadozoom/index.cfm?0B316206-1320-3B37-9EF3-1882EC540AA9">http://www.shadocms.com/sha...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673553">4</a> by Raymond Camden
		posted on 10/26/2007 at 3:14 PM
		</div>
		<div class="comment_text"><p>Grant, there is a small layout issue with your URL - a non closed italics tag. Would you be able to share any code with the project?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673554">5</a> by Grant Straker
		posted on 10/27/2007 at 2:20 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I'll have a chat with the team on Monday but we could certainly look at something like a free version for non commercial use and a $100 or something close to that for commercial use on a project. That way we can release the full code set as we have probably ported all the functionality someone would have ever used in Verity. It's all wrapped up in a simple CF API with a .jar file to add to the server. The main benefits of Lucene are:</p><p>1. It runs on a Mac (multi-platform support is much better than Verity - not that it would hard to beat!)<br>2. Multilingual support is very powerful and easy to extend<br>3. It's easy to cluster (just writes an index to the file system you can easily open and close, or copy to multiple servers)<br>4. It's easy to move (just copy the created index folder)<br>5. You can create your own analyzers, for example the simplest analyizer is a white space one which simply separates words base on whitespace. YOu can easily write a CF analyzer that would search based on "cfset" for example and then search all attributes etc. <br>6. The query syntax is easy to work with and very powerful<br>7. It is very fast</p><p>We're pretty busy but I'll see if we can get something out in the next couple of weeks that would let others use the functionality we've developed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673556">6</a> by Jim Stout
		posted on 5/28/2008 at 1:24 AM
		</div>
		<div class="comment_text"><p>Hey Ray - I've been looking at using your code but am having problems setting up Lucene - can this just be added as a Classpath in CF, or do you have to have it run on a java app server by itself?</p><p>Thanks in advance for any help...:-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673558">7</a> by Raymond Camden
		posted on 5/28/2008 at 1:37 AM
		</div>
		<div class="comment_text"><p>You should be able ot just add it to your classpath.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673555">8</a> by Raymond Camden
		posted on 5/28/2008 at 1:37 AM
		</div>
		<div class="comment_text"><p>FYI, another user sent some bug reports pre-cfobjective. I've been swamped, but hopefully I'll have an update to release sometime soon.</p></div>
	</div>
</div>
		