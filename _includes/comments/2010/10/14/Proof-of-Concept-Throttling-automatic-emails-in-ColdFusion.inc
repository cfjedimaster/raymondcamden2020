
<div class="comment" id="c_1713727005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727005">1</a> by Dan G. Switzer, II
		posted on 10/18/2010 at 6:45 PM
		</div>
		<div class="comment_text"><p>Why not just use a cache name (i.e. key) for the e-mail instead of using the body text and regex for caching--which can get ugly.</p><p>So, if no key is used, use the body text for caching--which basically assumes it's static text. Otherwise, provide a cache name like "general-error", and all e-mails with the same cache name will be treated like they're the same e-mail content. Yes, you'd have to use unique cache names, but I think that's easier in the long run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727019">2</a> by Raymond Camden
		posted on 10/18/2010 at 6:52 PM
		</div>
		<div class="comment_text"><p>The idea was to minimize the work necessary to use it. I didn't want you to have to worry about naming the cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727020">3</a> by Dan G. Switzer, II
		posted on 10/18/2010 at 7:05 PM
		</div>
		<div class="comment_text"><p>It just seems like having to write a regex is going to be way more difficult than just a static cache name for most users. That's why I also suggested using the body text as the default cache name, that way you only have to supply a cache name if the message might be altered slightly in each message.</p><p>For example, this would be very difficult to use as-is if your error handler dumped the user's session information into an e-mail, but the root cause of the error was the same. If a user's session ends up containing any kind of "last updated" time stamp, it's going to be virutally useless as a new e-mail will always be sent.</p><p>I just know that most of my error pages end up including form post data, session data, etc and that stuff would be extremely difficult to parse out in a regex (if not impossible.)</p><p>It just seemed like this code was designed to stop sending tons of e-mail when you have a global problem (like the database server being down,) but my error messages always contain stuff that makes the message highly dynamic.</p><p>Just some food for thought...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727021">4</a> by Raymond Camden
		posted on 10/18/2010 at 7:08 PM
		</div>
		<div class="comment_text"><p>Hmm. Good point. It's not like it would be that difficult to add a 4th optional argument to support that. If used, regex is ignored and the key isn't the hash but what you specify. I'll write a quick update and post it as a new blog entry (since this one seems to have been ignored by everyone but you ;).</p></div>
	</div>
</div>
		