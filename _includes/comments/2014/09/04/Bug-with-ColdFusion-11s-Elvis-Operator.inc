
<div class="comment" id="c_1714083792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083792">1</a> by Adam Cameron
		posted on 9/5/2014 at 12:07 PM
		</div>
		<div class="comment_text"><p>The thing with CFPARAM does make sense after a fashion, but it still catches people out.</p><p>I do think when the CFML is being compiled it should be compiled down in such a way that the default attribute value is *not* executed unless it's needed, but I see how they've taken a generic approach to processing tags, which does mean all values need to be resolved before they're passed into the tag's actual code. Tag attributes are basically function arguments.</p><p>However there's no way that that quirk of how *tags* need to work should filter down into the ?: implementation. That's just wrong.</p><p>Cheers for raising the bug, Ray.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083793">2</a> by Adam Cameron
		posted on 9/5/2014 at 5:09 PM
		</div>
		<div class="comment_text"><p>As per Twitter... Matt Busche noticed that you've got yer () misplaced in that sample. This:</p><p>u2 = encodeForHTML(<a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a>) ?: getfoo();</p><p>Should be this:</p><p>u2 = encodeForHTML(<a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a> ?: getfoo());</p><p>But your point still stands.That's just a typo.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083794">3</a> by Raymond Camden
		posted on 9/5/2014 at 5:10 PM
		</div>
		<div class="comment_text"><p>Why though? I'm using encodeForHTML because I don't trust <a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a>. I trust the result of getfoo to be safe for already.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083797">4</a> by Raymond Camden
		posted on 9/5/2014 at 5:11 PM
		</div>
		<div class="comment_text"><p>(to be safe to display I mean)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083796">5</a> by Adam Cameron
		posted on 9/5/2014 at 5:13 PM
		</div>
		<div class="comment_text"><p>Yeah, but this will fail if <a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a> doesn't exist:</p><p>encodeForHTML(<a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a>)</p><p>And... it does fail. I'm not just making this up.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083795">6</a> by Raymond Camden
		posted on 9/5/2014 at 5:13 PM
		</div>
		<div class="comment_text"><p>Weird - I didn't see that. Testing again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083801">7</a> by Raymond Camden
		posted on 9/5/2014 at 5:15 PM
		</div>
		<div class="comment_text"><p>No, I don't get an error. Just to be precise, here is a gist of what I'm running.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fcfjedimaster%2Fcfb2202b9ed809248ddf%3ANTSS2vO7a_gCb0M6i1zev7PaDi8&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/cfjedimaster/cfb2202b9ed809248ddf">https://gist.github.com/cfj...</a></p><p>i test with and without name being defined in the QS and I never get a runtime error. (I do get the bug with RHS of course.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083806">8</a> by Adam Cameron
		posted on 9/5/2014 at 5:51 PM
		</div>
		<div class="comment_text"><p>Yeah, as per IRC discussion... you done found ANOTHER bug with ?: on CF (I was testing on Railo, which works properly).  For the sake of others reading along, THIS should error:</p><p>encodeForHTML(<a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a>)</p><p>when <a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a> doesn't exist. So it doesn't matter that the next part of the expression has a ?:, because the code should already have errored out.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083810">9</a> by Raymond Camden
		posted on 9/5/2014 at 5:59 PM
		</div>
		<div class="comment_text"><p>Adam, I thought you said it was a bug with encodeForHTML?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083807">10</a> by Timothy Farrar
		posted on 9/5/2014 at 10:13 PM
		</div>
		<div class="comment_text"><p>Run the following code... pretty sad!<br>Not only does it run the second one first.<br>&lt;cfscript&gt;<br>function a(){<br> writeDump('a');<br> return 'a';<br>}</p><p>function b(){<br> writeDump('b');<br> return 'b';<br>}<br>test = a() ?: b();<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083805">11</a> by Raymond Camden
		posted on 9/5/2014 at 10:15 PM
		</div>
		<div class="comment_text"><p>@Timothy: I'm confused - isn't this just what the blog said? Are you trying to show something different?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083808">12</a> by Timothy Farrar
		posted on 9/5/2014 at 10:20 PM
		</div>
		<div class="comment_text"><p>My point was that it not only always runs both sides, but that it runs the right hand side before the left hand side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083809">13</a> by Timothy Farrar
		posted on 9/5/2014 at 10:22 PM
		</div>
		<div class="comment_text"><p>Perhaps this is what you were showing in your blog post, but I missed that. With the above code, I get 'b a' as output. I would have expected at least 'a b' to come back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083811">14</a> by Raymond Camden
		posted on 9/12/2014 at 7:04 PM
		</div>
		<div class="comment_text"><p>The bug is now fixed.</p></div>
	</div>
</div>
		