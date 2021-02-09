
<div class="comment" id="c_1713668134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668134">1</a> by Dan G. Switzer, II
		posted on 7/9/2007 at 6:49 PM
		</div>
		<div class="comment_text"><p>Just a note that the variable "getit" would also need to be var'ed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668136">2</a> by Tom Chiverton
		posted on 7/9/2007 at 6:57 PM
		</div>
		<div class="comment_text"><p>And #dsn# and #bean#.<br>Why Adobe consider this a feature I've no idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668135">3</a> by Raymond Camden
		posted on 7/9/2007 at 6:58 PM
		</div>
		<div class="comment_text"><p>Oh, sorry if it wasn't clear. The code above is a subset of the entire method. Everything else was properly var scoped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668133">4</a> by Josen Ruiseco
		posted on 7/9/2007 at 10:49 PM
		</div>
		<div class="comment_text"><p>Is the code snippet the fixed code?</p><p>If not, can you post the fixed code as an example?</p><p>Josen</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668139">5</a> by Raymond Camden
		posted on 7/9/2007 at 10:55 PM
		</div>
		<div class="comment_text"><p>I didn't fix the code like a syntax error, I just added the missing var scope. Since this is confusing folks though, I'll add it to the blog entry. Reload in 5 minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668138">6</a> by David Fekke
		posted on 7/10/2007 at 1:52 AM
		</div>
		<div class="comment_text"><p>Tom,</p><p>Adobe did not do anything wrong. That is th proper behavior. If you do not scope a variable in a CFC, ColdFusion assumes it should be in the variables scope. The variables scope is like the this scope in Java.</p><p>David Fekke.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668141">7</a> by Joshua Curtiss
		posted on 7/11/2007 at 1:46 AM
		</div>
		<div class="comment_text"><p>Although in Java you have to explicitly declare your variables. I suppose the combo of implicit declaration of variables and a function scope (the var scope) does indeed lend itself to this common coding mistake.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668137">8</a> by JC
		posted on 7/15/2007 at 8:17 AM
		</div>
		<div class="comment_text"><p>Coldfusion should default scope variables in methods to the var scope, period.</p><p>I was hoping CF8 was going to fix this major annoyance.</p><p>At least give us an option to tell Coldfusion what is the default scope inside functions.</p><p>Common sense lost at Adobe?  If I create a variable inside a function, I think according to common sense that variable should be defaulted to being in the var scope unless given a scope.</p><p>In my opinion, Adobe did get this wrong...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668144">9</a> by Joshua Curtiss
		posted on 7/15/2007 at 10:04 PM
		</div>
		<div class="comment_text"><p>At first your comment made sense to me. But then I started thinking about other scopes. Should custom tags default to the ThisTag scope? The Attributes scope? Or are they right to default to the Variables scope? What about references to variables in Application.cfc/.cfm? It would get confusing really fast if you had "context-based scope".</p><p>Not attacking you, it's just a thought.</p></div>
	</div>
</div>
		