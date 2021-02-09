
<div class="comment" id="c_1713674444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674444">1</a> by Shane Zehnder
		posted on 11/16/2007 at 4:21 AM
		</div>
		<div class="comment_text"><p>I've done that more times than I am likely to publicly admit again.  Now I make a mental note not to name a variable anything remotely close to any scope.</p><p>I see it can even happen to the best of us. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674427">2</a> by Nolan Erck
		posted on 11/16/2007 at 4:38 AM
		</div>
		<div class="comment_text"><p>I seem to be in the minority these days, but this is one of the reasons I'm a big fan of some sort of Hungarian/type-prefixing on my variable names.  It seriously reduces the possibility that I'll accidentally use a reserved word.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674449">3</a> by Dan Sorensen
		posted on 11/16/2007 at 4:55 AM
		</div>
		<div class="comment_text"><p>Just to clarify your headline, it's still a good idea to use the 'arguments' scope to prefix variables within a cffunction or cfc, just not OTHER scopes right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674442">4</a> by David Herman
		posted on 11/16/2007 at 5:00 AM
		</div>
		<div class="comment_text"><p>@Dan, Yes but he's saying don't have a variable named form or url or arguments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674439">5</a> by Raymond Camden
		posted on 11/16/2007 at 5:45 AM
		</div>
		<div class="comment_text"><p>@Dan - David answered, but I just want to be 100% clear. I do not mean to avoid using the scope name. I do it for everything but variables scope stuff (and I do use variables. inside of a CFC). I meant - don't name a variable after a built in scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674433">6</a> by Dan Vega
		posted on 11/16/2007 at 6:40 AM
		</div>
		<div class="comment_text"><p>This happens to everyone! I was just working on a project not to long ago where the business object was actually a Client so whenever I called <a href="http://disq.us/url?url=http%3A%2F%2Fclient.xxx%3AtVIriwC9PZHS0Se1sgiq52EP68M&amp;cuid=3321886" rel="nofollow noopener" title="client.xxx">client.xxx</a> is was not defined. As well all know client is already a scope so stay away from reserved words and scopes is the moral of this story! Thanks for the reminder...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674434">7</a> by Jared Rypka-Hauer
		posted on 11/16/2007 at 7:14 AM
		</div>
		<div class="comment_text"><p>OMG! Ray! Yer a n00b!</p><p>hehehehehehehehe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674428">8</a> by Brian Panulla
		posted on 11/16/2007 at 6:08 PM
		</div>
		<div class="comment_text"><p>@Nolan: +1 on the Hungarian-prefixy thing, especially on database column names. There's nothing worse for portability than converting a database to a new type of server than suddenly discovering a the RDBMS treats a column name as a reserved word. ("timestamp" comes to mind).</p><p>Maybe that's why Ruby on Rails gives me hives.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674440">9</a> by James Marshall
		posted on 11/16/2007 at 6:17 PM
		</div>
		<div class="comment_text"><p>I'm another that finds Hungarian notation does the job. Sure, it's extra typing, and there are people who think it has no place in a dynamically typed language, but I wouldn't be without it.</p></div>
	</div>
</div>
		