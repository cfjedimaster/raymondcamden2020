
<div class="comment" id="c_1713621417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621417">1</a> by Dave Hill
		posted on 10/14/2005 at 6:45 PM
		</div>
		<div class="comment_text"><p>This is great!  I can't wait to try it out.  Thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621419">2</a> by Barneyb
		posted on 10/14/2005 at 8:19 PM
		</div>
		<div class="comment_text"><p>One significant advantage of the "parse out the tokens" method is that you can embed options in the tokens.  For example, your %name% token could take an optional param for indicating whether the first, last, or full name should be inserted (i.e. %name=full%).  You can do the same thing with three tokens (firstname, lastname, and fullname), but as you get more options for your tokens, that quickly becomes unweildly.</p><p>In one of our content management tools, we have an abstract token parser that pulls out ${command;opt:value;opt:value;...} type tokens.  You register command listeners with the parser, and when a command is found the parser looks for a listener that can handle the command, and passes off processing to it.  Certainly more complex, but very powerful as it lets you do dynamic processing to create the "injected" content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621423">3</a> by Raymond Camden
		posted on 10/14/2005 at 8:21 PM
		</div>
		<div class="comment_text"><p>Neat approach Barney! FYI, for those who want a way to get tokens like that, you could use the reGetAll udf from cflib. There are other ways as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621418">4</a> by Barneyb
		posted on 10/14/2005 at 8:24 PM
		</div>
		<div class="comment_text"><p>I'm not finding a reGetAll UDF on cflib...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621426">5</a> by Raymond Camden
		posted on 10/14/2005 at 10:36 PM
		</div>
		<div class="comment_text"><p>Listen to what I mean, not what I say... reFindAll. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621422">6</a> by Roger Benningfield
		posted on 10/14/2005 at 10:48 PM
		</div>
		<div class="comment_text"><p>An additional tip, and a different approach.</p><p>Tip: One additional reason to use Ray's approach and loop over the token list is security. If you loop over the tokens and try to process them, someone could slip something like this into a page:</p><p>"Let's see what we have here: %email.getClass()%"</p><p>The result would be relatively harmless, and you can code around it, but you get the idea. Sticking to a known set of tokens is just safer.</p><p>Different approach:</p><p>I'll just throw this into the mix... don't forget about namespaced custom tags. They're not for everyone, but it's worth considering.</p><p>JournURL's template scheme is simple, but does the job of a micro-programming language... flow control, variable setting, looping. It uses a mix of parsed tokens and custom tags, but the tokens stick to the format of a tag. In other words, in this example:</p><p>[weblog:entries]<br>[h1][weblog:title filter="xml"][/h1]<br>[p][weblog:body excerpt="255"][/p]<br>[div][weblog:date format="rfc822"][/div]<br>[/weblog:entries]</p><p>...the title, body, and date tags are actually custom tags, while "entries" is a token that's parsed via regex. The fact that they all work like normal tags makes things easier on the end-user, and I get some added flexibility in organizing code.</p><p>Of course, in this scenario, the security concern I outlined above becomes even more significant. I pre-scan every template page for issues before parsing out the tokens and then feeding the leftovers to CF. Be careful out there.</p><p>P.S. Ray... could you add a notice to the blog.cfc comment box, telling commenters if/how they need to escape markup? Every system is different, so it's handy to have a one-sentence description available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621421">7</a> by Per
		posted on 10/14/2005 at 11:17 PM
		</div>
		<div class="comment_text"><p>For those about to java, Apache commons Jelly works perfectly with CF:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjakarta.apache.org%2Fcommons%2Fjelly%2F%3Adq1Ocsw3sQ_J3g2Z6z4U22_Qc4Y&amp;cuid=3321886" rel="nofollow noopener" title="http://jakarta.apache.org/commons/jelly/">http://jakarta.apache.org/c...</a></p><p>With the new CFCProxy i suppose you could write tags in CF and execute them in Jelly as well.</p><p>I'm getting dizzy....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621425">8</a> by Raymond Camden
		posted on 10/15/2005 at 1:08 AM
		</div>
		<div class="comment_text"><p>Roger- will add it to my todo list for 4.0. If I forget, slap me around a bit.</p></div>
	</div>
</div>
		