
<div class="comment" id="c_1713664550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664550">1</a> by Brian
		posted on 4/30/2007 at 5:38 PM
		</div>
		<div class="comment_text"><p>Ray, in your first example I think you mean session.URLToken...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664549">2</a> by Raymond Camden
		posted on 4/30/2007 at 7:50 PM
		</div>
		<div class="comment_text"><p>Fixed. Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664553">3</a> by Evert
		posted on 4/30/2007 at 9:31 PM
		</div>
		<div class="comment_text"><p>Don't forget that allowing to set a session id through a url can make it a lot easier to steal someone's session..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664552">4</a> by Raymond Camden
		posted on 4/30/2007 at 9:36 PM
		</div>
		<div class="comment_text"><p>Nod - one reason to use a UUID for a token or jsessions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664554">5</a> by Raymond Camden
		posted on 4/30/2007 at 9:36 PM
		</div>
		<div class="comment_text"><p>And to be fair - I would not say it makes it a lot easier. A hacker can just as easily change his cookie as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664555">6</a> by Evert
		posted on 4/30/2007 at 9:52 PM
		</div>
		<div class="comment_text"><p>The difference is that the hacker can specify a session id in the url, link the user to that page (or through a frame or other method). At that point the hacker will know the session id.. and can just use it himself..</p><p>So I'm not talking about brute-forcing.. The evil guy can specify the session id the user will use..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664557">7</a> by Raymond Camden
		posted on 4/30/2007 at 9:57 PM
		</div>
		<div class="comment_text"><p>I don't quite get you. So I make a URL. I convince you to link to it. How do I then know your session id? You talking about the refererrer variable? That would only work if I had write access to the server so I could add the offset link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664559">8</a> by Evert
		posted on 4/30/2007 at 10:10 PM
		</div>
		<div class="comment_text"><p>Ok, say I go to your site and I get linked to ..</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fexample.com%3Fcfid%3D123%26cftoken%3D123%3AjMU1jVjTdcTVUKehx0DYYzup7hM&amp;cuid=3321886" rel="nofollow noopener" title="http://example.com?cfid=123&amp;cftoken=123">http://example.com?cfid=123...</a></p><p>Now, if I can trick someone to go <a href="http://disq.us/url?url=http%3A%2F%2Fwww.evil.com%3AcW5BP9CDbH_Brtwr4dcEKJHrtuE&amp;cuid=3321886" rel="nofollow noopener" title="www.evil.com">www.evil.com</a>, which has a link, or image tag looking like:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fexample.com%3Fcfid%3D123%26cftoken%3D123%3AjMU1jVjTdcTVUKehx0DYYzup7hM&amp;cuid=3321886" rel="nofollow noopener" title="http://example.com?cfid=123&amp;cftoken=123">http://example.com?cfid=123...</a></p><p>The session gets attached.. (usually those methods provide a way to specify a session id both through the cookie and the url)</p><p>The next time the user logs in on that site.. the user will have the session tokens I specified before on my site.. dr. evil goes to the site and will be sharing the session with the unsuspecting user..</p><p>A quick google showed up this paper: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.technicalinfo.net%2Fpapers%2FWebBasedSessionManagement.html%3AJTijAPVMYc5JbShuGUAaCIZ3aps&amp;cuid=3321886" rel="nofollow noopener" title="http://www.technicalinfo.net/papers/WebBasedSessionManagement.html">http://www.technicalinfo.ne...</a></p><p>Could be a good read, in case I'm not really being clear..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664556">9</a> by Raymond Camden
		posted on 4/30/2007 at 10:23 PM
		</div>
		<div class="comment_text"><p>Right -I guess I'm assuming people _know_ this already, but good point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664558">10</a> by nate
		posted on 1/24/2008 at 2:20 AM
		</div>
		<div class="comment_text"><p>urlSessionFormat() seems to work well.  But, it sure would be nice not to have to use this function all over the place in our code on every single link.  Might there be a way to add something to onrequeststart that wraps this function around every link or something like that?  Maybe there should be a new feature in cfadmin to do something like this with the click of a checkbox?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664560">11</a> by Raymond Camden
		posted on 1/24/2008 at 2:27 AM
		</div>
		<div class="comment_text"><p>Perhaps. I think DotNet has a solution for that. It would add overhead though as CF would have to do some parsing on each link, and it would have no know what are external links versus internal links. You can always make it a udf so it's a bit short:</p><p>&lt;a href="#link('products.cfm?id=4')#"&gt;</p></div>
	</div>
</div>
		