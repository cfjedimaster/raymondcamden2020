
<div class="comment" id="c_1713617336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617336">1</a> by jonese
		posted on 3/2/2005 at 9:32 PM
		</div>
		<div class="comment_text"><p>I'm so there with you ray! and i'm also one of those people who SOOO doesn't do this all the time.</p><p>It's a matter of getting into the habit and then forcing yourself to remember this stuff, and then apply it. Even if it means going back to OLD code and fixing it up...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617337">2</a> by joe rinehart
		posted on 3/2/2005 at 9:32 PM
		</div>
		<div class="comment_text"><p>Go Ray!</p><p>This stuff irks me to no end.  I wrote a fairly long blog post about it at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.clearsoftware.net%2Fclient%2Findex.cfm%3Fmode%3Dentry%26amp%3Bentry%3D359C6071-A480-2E86-D4F61082F2D04139%3AH4MEd4DRA5al22EC871gKjjZLno&amp;cuid=3321886" rel="nofollow noopener" title="http://www.clearsoftware.net/client/index.cfm?mode=entry&amp;amp;entry=359C6071-A480-2E86-D4F61082F2D04139">http://www.clearsoftware.ne...</a> .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617341">3</a> by Adam Dray
		posted on 3/2/2005 at 11:11 PM
		</div>
		<div class="comment_text"><p>Worse, if a site is vulnerable to very basic editing of a url parameter, it's probably also vulnerable to SQL injection hacks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617340">4</a> by Damon Gentry
		posted on 3/2/2005 at 11:48 PM
		</div>
		<div class="comment_text"><p>I recently discovered a little quirk in the way URL variables are handled by the Flash Services gateway.</p><p>I'm a system administrator, and our developers noted some odd behavior when using a url variable named 'reg' (short for region).  So, a request like:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsome.server.com%2Findex.cfm%3Ffoo%3Dbar%26amp%3Breg%3D0%26amp%3B%3A8jLyQ6EhX3V96yGp9VQkmNE0Svk&amp;cuid=3321886" rel="nofollow noopener" title="http://some.server.com/index.cfm?foo=bar&amp;amp;reg=0&amp;amp;">http://some.server.com/inde...</a>....</p><p>Caused a 404 error to show up in the server logs and the request obviously failed.</p><p>It turns out that the string '&amp;amp;reg;' is an HTML character entity.  It also turns out that XML-based user agents will not allow the use of the ampersand sign in a url.  Read the following W3C article:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2F%23C_12%3A0tGtPNV00lECjm7S-NYn0Vj1fG0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/#C_12">http://www.w3.org/TR/xhtml1...</a></p><p>Also, if you are a developer, please be sure NOT to use URL variables that can be viewed as character entities like (amp, gt, lt, et...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617348">5</a> by Craig Rosenblum
		posted on 3/3/2005 at 12:27 AM
		</div>
		<div class="comment_text"><p>That's why i use cfparam's, and pass the url variables to the local scoped variable, but using cfparam data type.</p><p>Then instead of checking for existance of url variables, i check if local variable greater than 0 or greater than ""</p><p>Which is much cleaner to work with.</p><p>Basically the more you prepare your code for all possibilities, the better you are in the end.</p><p>And we all should have a testing process...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617345">6</a> by Jim
		posted on 3/3/2005 at 2:59 AM
		</div>
		<div class="comment_text"><p>Also, why do some sites use generic ColdFusion error messages:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fbroken.cfm%3AgPAMP6rUwAUiTJF4yB4CcH2hvK4&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/broken.cfm">http://ray.camdenfamily.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617347">7</a> by Raymond Camden
		posted on 3/3/2005 at 3:05 AM
		</div>
		<div class="comment_text"><p>Because we are too lazy to set 404 files in our IIS settings. ;) Yeah yeah, I know I need to add that. I would argue that isn't a security risk though. :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617349">8</a> by Darryl Lyons
		posted on 3/3/2005 at 3:37 AM
		</div>
		<div class="comment_text"><p>Yeah, it's pretty easy to add application-wide error handling (even server-wide).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617344">9</a> by Brett Liotta
		posted on 3/3/2005 at 5:37 AM
		</div>
		<div class="comment_text"><p>ha, I do this all the time Ray.  why?  I don't know.  I want to see how many lazy developers are out there.  are they lazy or just don't know?  eh, maybe a little of both.  I'm not perfect either but I don't have to worry as much b/c most of my development work is on secured Intranets.  i'm allowed to be a bit lazy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617346">10</a> by Dean H. Saxe
		posted on 3/3/2005 at 5:54 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I presented to ACFUG on this topic, and other security topics, just last year.  See the PowerPoint at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.acfug.org%2Findex.cfm%3Ffa%3Dmeetings.meetingdetail%26amp%3BEventID%3D52%3A_dH2M0OWpfyUvyXEY28EJK1-_XY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.acfug.org/index.cfm?fa=meetings.meetingdetail&amp;amp;EventID=52">http://www.acfug.org/index....</a>.  It's not all inclusive, but it covers a lot of good basics that I have also found to be lacking in other sites.</p><p>-dhs</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617446">11</a> by mark
		posted on 3/3/2005 at 5:21 PM
		</div>
		<div class="comment_text"><p>Good Article, anther of my "tests" is seeing if I can submit empty contact us forms.  That drives me nuts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617447">12</a> by Rick
		posted on 3/4/2005 at 1:58 AM
		</div>
		<div class="comment_text"><p>First of all, I do agree that URL parameter validation (and form parameter validation too!) is important.</p><p>But I have to admit that I don't always validate URL parameters, mostly out of laziness and the fact that the only way someone is going to break them usually is to hand type a URL because they're TRYING to break it.</p><p>That being said, I felt the need after reading this entry to check BlogCFM to see if I'd handled it.  In fact I could only find one URL parameter available to the public:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogcfm.org%2Findex.cfm%3Fmode%3Dcat%26amp%3Bcategory_id%3DDEA969D3-F7F1-3DC9-5CB3BF8A2FE55DBB%3AUvEP0NmkXA66iWAhY-UArnWICc0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.blogcfm.org/index.cfm?mode=cat&amp;amp;category_id=DEA969D3-F7F1-3DC9-5CB3BF8A2FE55DBB">http://www.blogcfm.org/inde...</a></p><p>I'm happy to see that I do handle it :)  Phew!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogcfm.org%2Findex.cfm%3Fmode%3Dthree%3A-0kONi62M4E0jRyY15rCc9j749I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.blogcfm.org/index.cfm?mode=three">http://www.blogcfm.org/inde...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogcfm.org%2Findex.cfm%3Fmode%3Dcat%26amp%3Bcategory_id%3Dxxx%3AfToIwWFobLbo8fgKqrs1hwYM9bY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.blogcfm.org/index.cfm?mode=cat&amp;amp;category_id=xxx">http://www.blogcfm.org/inde...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogcfm.org%2Findex.cfm%3Fmode%3Dcat%26amp%3Bfoo%3D1%3AZcv1buLexouPNFp_eVJk75siSg8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.blogcfm.org/index.cfm?mode=cat&amp;amp;foo=1">http://www.blogcfm.org/inde...</a></p><p>As for this statement:</p><p>"Worse, if a site is vulnerable to very basic editing of a url parameter, it's probably also vulnerable to SQL injection hacks."</p><p>I would disagree.  I may not always validate URL variables, but I do ALWAYS use cfqueryparam when passing variables to queries.</p><p> - Rick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617450">13</a> by gary
		posted on 4/23/2005 at 8:47 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>its lazyness, pure and simple. I have caught myself doing this on numerous occasions when under time contraints.  And its something that obviously should never be put aside.</p><p>Nice rant, it just brought it to the fore again for me.</p></div>
	</div>
</div>
		