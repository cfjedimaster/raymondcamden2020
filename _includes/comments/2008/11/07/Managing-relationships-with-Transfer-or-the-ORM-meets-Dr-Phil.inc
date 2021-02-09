
<div class="comment" id="c_1713709763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709763">1</a> by Dan Vega
		posted on 11/8/2008 at 9:36 PM
		</div>
		<div class="comment_text"><p>Great stuff Ray, Keep the Transfer stuff coming! The TQL stuff is what I have not got into yet so I am interested in reading about that and writing decorators.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709745">2</a> by Matt Quackenbush
		posted on 11/9/2008 at 11:41 PM
		</div>
		<div class="comment_text"><p>@ Ray- I was writing out a comment, but it got waaaaaayyyyy too long.  So I made a post about it.  Hope it helps with the brain clicking.  :-)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.quackfuzed.com%2Findex.cfm%2F2008%2F11%2F9%2FTransfer-ManytoOne-or-OnetoOne%3AwPQntkNOeLG8PnwVUnyLfo5TR0o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.quackfuzed.com/index.cfm/2008/11/9/Transfer-ManytoOne-or-OnetoOne">http://www.quackfuzed.com/i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709748">3</a> by Will Wilson
		posted on 11/10/2008 at 2:14 AM
		</div>
		<div class="comment_text"><p>Do I get a prize for spotting the bug?</p><p>How about using :</p><p>getDirectoryFromPath(expandpath("../transfer1.1/"))</p><p>the path would then be :</p><p>/Users/ray/Documents/webroot/empdirectory/transfer1.1/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709747">4</a> by Yves
		posted on 11/10/2008 at 5:41 AM
		</div>
		<div class="comment_text"><p>Love this Transfer series of posts....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709749">5</a> by Raymond Camden
		posted on 11/10/2008 at 8:42 AM
		</div>
		<div class="comment_text"><p>@WillWillson - that was the older code though, not the newer version.</p><p>@MattQ: I'll read your article, but bear in mind. I didn't say the way my brain thought about ManyToOne was _right_. I'm just saying it is how my brain worked. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709751">6</a> by Scott Brady
		posted on 6/22/2009 at 6:16 AM
		</div>
		<div class="comment_text"><p>Thanks for this post, Ray!  I searched all over for a good example of a similar relationship in Transfer and, in particular, how to save them. You really cleared this up for me (especially in the manytoone vs. onetomany for cases when it's really a onetoone relationship).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709750">7</a> by Raymond Camden
		posted on 6/22/2009 at 6:20 AM
		</div>
		<div class="comment_text"><p>You are welcome. I still refer to this post, and the docs, when I work with Transfer. This particular part of Transfer just has a hard time sticking in my brain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709757">8</a> by Peter Mattes
		posted on 9/17/2009 at 4:10 PM
		</div>
		<div class="comment_text"><p>Nice Post Ray! <br>But what's the solution, if i want a list of all Employes from a Department.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709774">9</a> by Raymond Camden
		posted on 9/17/2009 at 5:01 PM
		</div>
		<div class="comment_text"><p>I'm a bit rusty on this code now (almost a year old ;) but I believe Transfer allows you to define the relationship on both sides if you want. So you could define the reverse in the Department definition. You could also build a decorator for the Department that uses TQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709776">10</a> by Peter Mattes
		posted on 9/21/2009 at 3:20 PM
		</div>
		<div class="comment_text"><p>Thank you Ray,<br>Yeah realtionship on both sides is possible. <br>I have to set lazzy="true"</p></div>
	</div>
</div>
		