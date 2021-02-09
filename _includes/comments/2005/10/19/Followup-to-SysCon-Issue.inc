
<div class="comment" id="c_1713621467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621467">1</a> by Gus
		posted on 10/19/2005 at 8:20 PM
		</div>
		<div class="comment_text"><p>This explanation still does not make sense to me.  Particularly since Sys-Con is (was.. the article was removed) claiming the copyright for the content!</p><p>Typically when a publisher reproduces an article with an authors consent you would see something like 'Reprinted by permission of Ray Camden' and not 'Copyright © 2005 SYS-CON Media. All Rights Reserved.'</p><p>Still smells fishy to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621471">2</a> by Raymond Camden
		posted on 10/19/2005 at 9:18 PM
		</div>
		<div class="comment_text"><p>Well, that is probably part of the main template. We shall see. I'm surprised the article got removed that quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621473">3</a> by Jeff
		posted on 10/19/2005 at 10:12 PM
		</div>
		<div class="comment_text"><p>It might be time to add something like this:</p><p>All material copyright 2005 Ray Camden.  All rights reserved.  Do not use w/o permission</p><p>to your footer of your pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621469">4</a> by Roger Benningfield
		posted on 10/20/2005 at 2:46 AM
		</div>
		<div class="comment_text"><p>Ray: I was about to send you a Trackback ping, but I noticed your autodisco has some problems.</p><p>(1) The rdf:about and dc:identifier should both be set to the permalink of the post to be pinged... right now, you've got them filled with the URI of your blog's front page instead.</p><p>(2) You're missing some trailing slashes... all the URIs look like this: http://ray.camdenfamily.comtrackback.cfm</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621470">5</a> by Raymond Camden
		posted on 10/20/2005 at 5:35 PM
		</div>
		<div class="comment_text"><p>Thanks Roger! My plan was to wrap up 4.0 this week, so this is perfect timing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621468">6</a> by Jake
		posted on 10/23/2005 at 5:22 AM
		</div>
		<div class="comment_text"><p>I hadn't thought about the ads before. Knowing that clicking them (relevant ones of course) will help you keep up the great content you've been adding lately, I'll be keeping a closer eye on them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621472">7</a> by Raymond Camden
		posted on 10/26/2005 at 5:27 AM
		</div>
		<div class="comment_text"><p>Roger, your items are fixed in my latest build, which will hopefully be up tonight (look for the blogcfc related post). Let me know if not please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621474">8</a> by Roger Benningfield
		posted on 10/28/2005 at 4:59 PM
		</div>
		<div class="comment_text"><p>Ray: A comment and a question...</p><p>Comment: Looks good to me.</p><p>Question: Are "friendly URIs" the default in BlogCFC? If not, you might want to warn folks about the murky relationship between query-strings and Trackback.</p><p>Basically, 6A never got around to clarifying how URIs are to be treated inside the autodiscovery RDF. It seems obvious (to me) that it should be treated like normal XML, even if most tools parse it with regex. Unfortunately, I've come across at least two TB implementations that handle a URI like this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%2Findex.cfm%3Ffoo%3Dbar%26foobar%3Dfubar%3AoJmLBT7BQFkyeFs1h9wf2OkD8Kk&amp;cuid=3321886" rel="nofollow noopener" title="http://foo.com/index.cfm?foo=bar&amp;foobar=fubar">http://foo.com/index.cfm?fo...</a></p><p>...in different ways. One expects the ampersand to be escaped, the other doesn't. And you can't officially declare one of them The Right Way, because the spec is silent.</p><p>So all things being equal, folks should opt for friendly URIs or expect occasional incompatibility. Except for Trackback spammers, who _always_ seem to get it right. :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621476">9</a> by Raymond Camden
		posted on 10/28/2005 at 5:18 PM
		</div>
		<div class="comment_text"><p>Technically - SES urls are the default, unless you have old content or you modify blog.cfc yourself. So unless folks muck with stuff, they are stuck with it.</p></div>
	</div>
</div>
		