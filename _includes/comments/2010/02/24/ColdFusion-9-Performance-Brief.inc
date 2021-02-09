
<div class="comment" id="c_1713722202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722202">1</a> by Pete Freitag
		posted on 2/24/2010 at 9:55 PM
		</div>
		<div class="comment_text"><p>Ray, my understanding of the Cache Template in Request setting is that it works like Trusted Cache, but only for the life of the request, whereas trusted cache does the same thing but persists until the server is restarted or flushed.</p><p>So given my understanding of it, I don't think this new setting will give any additional gains when Trusted Cache is turned on, but I have not done any tests to back this up.</p><p>But either way if you are using trusted cache you might as well keep this setting on as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722188">2</a> by Emmet
		posted on 2/25/2010 at 12:23 AM
		</div>
		<div class="comment_text"><p>I wish they would have done some image manipulation comparisons</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722199">3</a> by Raymond Camden
		posted on 2/25/2010 at 2:50 AM
		</div>
		<div class="comment_text"><p>@PeteF: Let's dig some more on that. You know where...</p><p>@Emmet: They did actually. One of the tests involved image resizing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722201">4</a> by Marc Ackermann
		posted on 2/25/2010 at 2:50 PM
		</div>
		<div class="comment_text"><p>CF9 with Java Version 1.6.0_14 vs. CF8 with Java version 1.6.0_04. A test like this makes no sense. Not CF9 is faster, it is the JVM!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722203">5</a> by Raymond Camden
		posted on 2/25/2010 at 5:10 PM
		</div>
		<div class="comment_text"><p>That is _not_ the only change made, Marc. If you read the brief you will see that many places were updated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722209">6</a> by Raymond Camden
		posted on 2/25/2010 at 9:17 PM
		</div>
		<div class="comment_text"><p>Want to make sure people see Pete F's blog post on "Cache Template in Request":</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F744.cfm%3AtYKKU_uy9fyZ9-Gjgw0lIJ2NaWI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/744.cfm">http://www.petefreitag.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722200">7</a> by Steven "Dont shoot the me
		posted on 2/25/2010 at 10:52 PM
		</div>
		<div class="comment_text"><p>With my background in science, I've never liked the ColdFusion Performance reviews since they are essentially a product of marketing's interpretation of engineering results.  While it looks fancy schmancy, and while there may be useful &amp; important data to convey, the actual presentation is cartoon fluff and over simplified.   I like to see raw data, standard error, number of trials, and other detailed test conditions.</p><p>One issue in this brief that irks me is the UUID perf improvement.  Table 2 shows 10,000% improvement, and Figure 4's caption says 100x improvement (which is equivalent but should always be expressed in same format not x times OR x percent), however Figure 4 data graph actually shows CF9s bar as about 690 and CF8s bar as about 110.  This is actually a 6.3x improvement based on the graph data, equivalent to a ~550% improvement.  This doesn't jive with the text claims of 10,000% or 100x improvement.</p><p>Another thing, of the many, that irks me is Figure 1 for CanvasWiki.  The graph shows CF9 throughput (which lacks units) as about 590 and CF8 as about 440.  590/440 = 1.34, which is to say 34% faster.  And the caption conveniently rounds that up to 40%.</p><p>My comments aren't intended to ding ColdFusion or Adobe. Rather, I feel that the marketing fingerprints on the document provides bait for detractors.  The document would be much stronger if it were presented in a more scientific fashion.</p></div>
	</div>
</div>
		