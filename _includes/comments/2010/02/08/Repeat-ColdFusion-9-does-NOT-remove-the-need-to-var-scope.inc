
<div class="comment" id="c_1713721806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721806">1</a> by John gag
		posted on 2/9/2010 at 1:16 AM
		</div>
		<div class="comment_text"><p>I am glad I havnt stopped "VARing".  Sometimes yelling helps! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721804">2</a> by Seth Johnson
		posted on 2/9/2010 at 1:27 AM
		</div>
		<div class="comment_text"><p>One more related change, the var declaration no longer needs to be grouped at the top of the CFC.  For example, if you need to var a loop control variable in the middle of your CFC you can now do that without throwing an exception.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721805">3</a> by Raymond Camden
		posted on 2/9/2010 at 1:28 AM
		</div>
		<div class="comment_text"><p>Good point Seth. I freaking love that change - especially for loop iterators. Also note you can _repeat_ var statements. So you can do var i=1 more than once. Pointless - but it means you can be extra careful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721807">4</a> by Jose Galdamez
		posted on 2/9/2010 at 5:22 AM
		</div>
		<div class="comment_text"><p>For my CF8 apps I got into the habit of just doing this with my CFC methods</p><p>cfset var local = {};</p><p>and then appending to the struct from there. I realize this is nothing earth shattering as people were doing it years before I even figured it out. What killed me was when I did this by accident in several places</p><p>cfset local = {};</p><p>That's when I started pulling my hairs out, in pure denial that I did anything wrong. Ugh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721809">5</a> by Dan Roberts
		posted on 2/9/2010 at 8:41 PM
		</div>
		<div class="comment_text"><p>I haven't yet focused on learning new features in CF9 -- first time I have done that since I started in CF back in 4.5 (honestly I'm a bit tired of CF). With that said I did follow a bunch of discussion leading up to its release and recall something about an option in the CFC to make unscoped variables in CFC functions local by default. Am I imagining this or was this discussed/previewed but not in the final build?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721810">6</a> by Raymond Camden
		posted on 2/9/2010 at 8:58 PM
		</div>
		<div class="comment_text"><p>I don't remember that - then again - my memory is the suck lately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721812">7</a> by Allen
		posted on 2/9/2010 at 11:11 PM
		</div>
		<div class="comment_text"><p>In CF9 as long as one uses the local scope within a method, there is no need for the var keyword to make it private?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721813">8</a> by Raymond Camden
		posted on 2/9/2010 at 11:14 PM
		</div>
		<div class="comment_text"><p>Correct.</p><p>local.x = 1</p><p>is the same as</p><p>var x = 1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721814">9</a> by Judah McAuley
		posted on 2/12/2010 at 2:56 AM
		</div>
		<div class="comment_text"><p>One big gotcha in CF8 that I have not yet tested in CF9 is that implicitly created variables are not var scoped.</p><p>For instance if I do:<br>&lt;cfhttp url="<a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%3AN7Z24oIKkMVc9eNBzSRQUSpuMJ0&amp;cuid=3321886" rel="nofollow noopener" title="http://foo.com">http://foo.com</a>"&gt;</p><p>and reference #cfhttp.filecontent#</p><p>That is not threadsafe!</p><p>Totally bit me in the ass on a production application.</p><p>Instead you need to do:<br>&lt;cfset var httpresult = '' /&gt;<br>&lt;cfhttp url="<a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%3AN7Z24oIKkMVc9eNBzSRQUSpuMJ0&amp;cuid=3321886" rel="nofollow noopener" title="http://foo.com">http://foo.com</a>" result="httpresult"&gt;</p><p>and then reference #httpresult.filecontent#</p><p>I had var scoped every variable in my app...except for the one I didn't create myself and let CF create for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721816">10</a> by Raymond Camden
		posted on 2/12/2010 at 2:58 AM
		</div>
		<div class="comment_text"><p>Yep, result= was added to tags that drop stuff in the variables scope like that. I believe _all_ of them (cfhttp, cfquery come to mind) have this feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721815">11</a> by Julie
		posted on 5/7/2010 at 5:19 AM
		</div>
		<div class="comment_text"><p>If we are using SweetTweets.cfc, are we going to have a problem, with respect to the local keyword being used, when we upgrade to CF9?  Do we need to upgrade this? Thanks for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721874">12</a> by Raymond Camden
		posted on 5/7/2010 at 5:25 AM
		</div>
		<div class="comment_text"><p>I'm using SweetTweets on this blog, which is running CF9. No problems with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721872">13</a> by Dave
		posted on 10/4/2011 at 3:38 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>As of CF9, are you now writing your components entirely in CFScript, or are you mixing CFML and CFScript?</p><p>If you are using CFScript entirely, what are you using for VarScoping? Mike's varscoper does not work in cfScript based on components.</p><p>dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721868">14</a> by Raymond Camden
		posted on 10/4/2011 at 5:30 PM
		</div>
		<div class="comment_text"><p>I'm trying to do all my CFCs in script, and for var scoping, I'm just trying my best to be careful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721869">15</a> by Ryan Eberly
		posted on 12/5/2013 at 9:19 AM
		</div>
		<div class="comment_text"><p>Ray,<br>    Someone posted a decent antlr grammer of CFML/cfscript on github(<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdenuno%2Fcfml.parsing%29%3AEuY95BY49QB9tIwdpLMu8KrcrmI&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/denuno/cfml.parsing)">https://github.com/denuno/c...</a>.</p><p>   I built a var scope checker on top of it. (along with a few only checks).  It consumes (most) CFML and CFScript successfully.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fryaneberly%2Fcfbugs%3A6opPlQGJwF17vUAEJE5Zf1AK8vQ&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/ryaneberly/cfbugs">https://github.com/ryaneber...</a></p><p> Feed back welcome.</p><p>- Ryan.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721870">16</a> by Raymond Camden
		posted on 12/5/2013 at 7:47 PM
		</div>
		<div class="comment_text"><p>That's pretty cool. Only thing that bothers me is the name - cfbugs. Sounds like a bug tracker. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721871">17</a> by Ryan Eberly
		posted on 12/5/2013 at 11:28 PM
		</div>
		<div class="comment_text"><p>Hmm.  Good point.  It started as a reference to FindBugs - the Java code<br>analysis tool we've been using for a couple years.</p><p>It's all about 'finding' bugs, not 'reporting' them.</p><p>The term 'Lint' seems to be popping up a lot lately.  JSLint, CSSLint,<br>etc.  Maybe CF-Lint would be more appropriate.  Though 'lint' didn't mean<br>anything to me up until a couple months ago.  you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721864">18</a> by Raymond Camden
		posted on 12/6/2013 at 1:58 AM
		</div>
		<div class="comment_text"><p>I'm all about the lints. I'd go for CFLint (no dash).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721865">19</a> by Ryan Eberly
		posted on 12/6/2013 at 3:10 AM
		</div>
		<div class="comment_text"><p>I guess so. You just blogged about it a couple days back.  :-) I'm happy with your name suggestion - I'll hit that tonight.</p></div>
	</div>
</div>
		