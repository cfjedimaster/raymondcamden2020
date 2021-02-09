
<div class="comment" id="c_1713744213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744213">1</a> by Tom Chiverton
		posted on 1/4/2013 at 2:45 PM
		</div>
		<div class="comment_text"><p>I'd be more tempted to xmlSearch() for something like '//article/body/paragraph' which should return an array of nodes, which is a bit more explicit about what is going on when you come to reread the code :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744216">2</a> by Raymond Camden
		posted on 1/4/2013 at 8:34 PM
		</div>
		<div class="comment_text"><p>Interesting that you said that. The person I helped - she was using xmlSearch. To me, that just feels.... not wrong... but... I don't know. "Direct addressing" - as I did - feels more right. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744212">3</a> by Jim Partin
		posted on 1/7/2013 at 8:33 PM
		</div>
		<div class="comment_text"><p>I normally use XmlSearch myself in a case like this. Purely for performance gains of being able to use a natively compiled library versus the overhead of "directly accessing". The gains are small, but they add up quick for me.</p><p>Can't believe how happy I am that CF10 started supporting xpath 2.0.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744215">4</a> by Raymond Camden
		posted on 1/7/2013 at 8:36 PM
		</div>
		<div class="comment_text"><p>Jim, can you expound more on the performance gains? This is not something I've heard before. Wouldn't a direct access of a node be quicker than a search, even an optimized search?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744217">5</a> by Jim Partin
		posted on 1/7/2013 at 11:43 PM
		</div>
		<div class="comment_text"><p>It comes down to the underlying java that it gets converted down into.</p><p>foo.bar.baz.bobo.wahoo.xmlText</p><p>When one goes to access some node in an xml object, coldfusion first has to determine if the root node is a struct or an xml doc. Then, for each successive node, it must compare the next node name with some sort of hash map to identify the next member of the path.  Equiv of figuring out that <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.bar%3AopUE98Rht-FI89hCtymBuG3SRlM&amp;cuid=3321886" rel="nofollow noopener" title="foo.bar">foo.bar</a> is really foo["bar"]. Or possibly depending on the underlying xml classes, figuring out that <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.bar%3AopUE98Rht-FI89hCtymBuG3SRlM&amp;cuid=3321886" rel="nofollow noopener" title="foo.bar">foo.bar</a> is really foo.getBar() or some other equivelent behind the scenes. This translation takes a little bit of overhead, compounded by each node further down one goes.</p><p>Generally, this is trivial and is ignorable under a lot of circumstances as the cost of ease of use versus direct java manipulation.</p><p>However, when doing complex pattern matching to identify and collect nodes for work, the above in combination with in-cf logic processing adds up quickly when in comparison to using a java native xpath parser such as xmlSearch provides a bridge to.</p><p>Case of proper tool for the job at hand at a given complexity need, much like how ORM is kind of nice, but doesn't fully leverage the power one has of full SQL functionality for complex things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744214">6</a> by Raymond Camden
		posted on 1/7/2013 at 11:47 PM
		</div>
		<div class="comment_text"><p>Fascinating. Thanks for sharing that, Jim.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744219">7</a> by Gilles Tanguay
		posted on 5/2/2013 at 9:11 PM
		</div>
		<div class="comment_text"><p>Hi Raymond. Let's say I have a XML file with A LOT of nodes. Is is possible to parse it and get only the unique nodes. I don't care about the content of the nodes, only want to know which nodes I have in my 31000+ lines XML... Thanks !!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744220">8</a> by Raymond Camden
		posted on 5/4/2013 at 12:08 AM
		</div>
		<div class="comment_text"><p>You could store the node values as keys of a struct. That would be a quick/cheap way to ensure uniqueness.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744218">9</a> by Gilles Tanguay
		posted on 5/4/2013 at 12:11 AM
		</div>
		<div class="comment_text"><p>Thank you for your answer. I'll try to find something on the net to help me how to do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744221">10</a> by Raymond Camden
		posted on 5/4/2013 at 12:14 AM
		</div>
		<div class="comment_text"><p>You don't know how to use structs in ColdFusion? They are pretty easy.</p><p>&lt;cfset s = structNew()&gt;<br>&lt;cfset s["somekey"] = "somevalue"&gt;</p></div>
	</div>
</div>
		