
<div class="comment" id="c_1713734054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734054">1</a> by Jeremy Battle
		posted on 7/6/2011 at 6:42 PM
		</div>
		<div class="comment_text"><p>When using special characters to denote markup of some kind I usually go with a super simple regex like:</p><p>s = rereplace(s, "\*(.*?)\*","&lt;b&gt;\1&lt;/b&gt;","all");</p><p>so it will catch links like you mentioned above, or spaces in words, however, it runs into the problem is someone has multiple * or _ in their posts that are not actually related to one another it will create undesired formatting which is something avoided with your regex.</p><p>I am sure someone has figured out the best way to do this right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734069">2</a> by Raymond Camden
		posted on 7/6/2011 at 6:45 PM
		</div>
		<div class="comment_text"><p>I had .* as well, but it messed up with my single * char. I found \w worked great as it ensured alphanum between the * chars. Any spaces or punctuation would break it, which I'm fine with. So this would fail (probably, didn't test): I am in *love.*</p><p>But I'd be ok with that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734068">3</a> by Nathan Sego
		posted on 7/6/2011 at 6:52 PM
		</div>
		<div class="comment_text"><p>Ray, I have been reading for years.  I love you writing style and your corky fun attitude to life.  I was just teasing my soon to be wife about walking slow yesterday.  Made me laugh.  Keep it up.</p><p>~Nathan Sego~</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734074">4</a> by Peter Boughton
		posted on 7/6/2011 at 7:27 PM
		</div>
		<div class="comment_text"><p>If you catch yourself using .*? you should stop and say "what do I _really_ want to match here", because it's usually not "don't match anything if you don't have to; oh, ok, well just one of any char then move on; oh, well if I must, then two of any character; etc".<br>Often, it's better to do a greedy negated character class containing any characters that cannot occur, so in this case [^*]+ though sometimes it needs to be more complicated (e.g. negative lookahead).</p><p>For the solo * problem, one way of solving that is using word boundaries to guarantee both the * characters are "touching" words, rather than in isolation. So \B\*\b[^*]+\b\*\B means that there must *not* be alphanumerics "outside" either of the asterisks, but there must be alphanumerics "inside" the asterisks. Still not perfect though.</p><p>I'd probably just solve this problem by using Markdown - there's a Java version available which I've got working via CFML; just a create object and a then a single method call, and it'll do the HTML conversion for you. :)</p></div>
	</div>
</div>
		