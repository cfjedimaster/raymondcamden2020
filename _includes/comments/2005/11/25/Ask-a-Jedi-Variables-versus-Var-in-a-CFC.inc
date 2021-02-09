
<div class="comment" id="c_1713622943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622943">1</a> by Nick Tong
		posted on 11/25/2005 at 6:33 PM
		</div>
		<div class="comment_text"><p>Great - thanks Ray.  Am I right in saying that the variables scope is also the 'dumping' ground for anything that’s not scope? Not that anyway leave variables un-scoped of course ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622946">2</a> by Nick Tong
		posted on 11/25/2005 at 6:41 PM
		</div>
		<div class="comment_text"><p>Shame you can't edit previous posts - damn typos!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622947">3</a> by Raymond Camden
		posted on 11/25/2005 at 6:59 PM
		</div>
		<div class="comment_text"><p>I'm pretty sure yes - however - I always use variables.X for my variables, just to be safe. There is no scope for local, var scoped variables, so you don't want tog et confused. If you don't see a scope, you should assume it is var scoped.</p><p>Let me rewrite that. Just never, ever, leave the scope off of Variables values. Always specify it. The only unscoped vars should be local variables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622945">4</a> by noname
		posted on 11/25/2005 at 7:36 PM
		</div>
		<div class="comment_text"><p>So var is essentially the same as declaring a private variable, ie it will cease to exist outside of the cfcomponent tag.?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622944">5</a> by Raymond Camden
		posted on 11/25/2005 at 7:49 PM
		</div>
		<div class="comment_text"><p>No. A var scoped variable exists in the METHOD only. A Variables scoped variable exists in the COMPONENT. Loop counters are a good example of stuff you want to exist only in a method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622950">6</a> by Justin Alpino
		posted on 11/25/2005 at 8:48 PM
		</div>
		<div class="comment_text"><p>Another reason to use 'var' in your methods is to keep your shared components threadsafe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622954">7</a> by noname
		posted on 11/25/2005 at 10:10 PM
		</div>
		<div class="comment_text"><p>Gotcha, thanks! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622951">8</a> by Brett Liotta
		posted on 11/26/2005 at 2:40 AM
		</div>
		<div class="comment_text"><p>now, what about the "this" scope?  i know you've been preaching not to use it.  how is it different from a variables scope in a cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622949">9</a> by tony of the weeg clan
		posted on 11/26/2005 at 2:45 AM
		</div>
		<div class="comment_text"><p>ray,</p><p>i use this var method like you preach, have since i got a preaching sometime ago, years maybe.  anyway, when working with that method, or function i feel weird not having a "something." in front of it, like its an unscoped variable, and i could maybe duplicate names or something, it just feels odd.  anyway, does this have a prefix?</p><p>later</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622952">10</a> by Raymond Camden
		posted on 11/26/2005 at 7:19 AM
		</div>
		<div class="comment_text"><p>Tony, I hear ya man. That's why you should be anal about using <a href="http://disq.us/url?url=http%3A%2F%2Fvariables.foo%3A2t_dD2fr_pvM_uOYAgwpAVwdViI&amp;cuid=3321886" rel="nofollow noopener" title="variables.foo">variables.foo</a> and <a href="http://disq.us/url?url=http%3A%2F%2Farguments.foo%3A8LHlpP26KRskusivfUs0EetMwm4&amp;cuid=3321886" rel="nofollow noopener" title="arguments.foo">arguments.foo</a>. That way you know that if you see foo, it MUST be a local scoped variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622948">11</a> by Raymond Camden
		posted on 11/26/2005 at 7:20 AM
		</div>
		<div class="comment_text"><p>Brett: Like Variables, This scoped variables are available throughout the CFC. Unlike Variables, the This scope data will be also be available outside the cfc. So if FOO is an instance of the CFC, and <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> is ray, you can output <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.name%3Ar5Bu80OIF6KmfuLnYB8Zh7Mshvg&amp;cuid=3321886" rel="nofollow noopener" title="foo.name">foo.name</a> and see ray. Also, if you do FOO.jedi = 1, inside the CFC, this.jedi will not exist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622955">12</a> by tony of the weeg clan
		posted on 11/26/2005 at 7:41 AM
		</div>
		<div class="comment_text"><p>i do. or at least i "know" to do</p><p>sometimes in like spur of the moment game programming i might forget to, but i do not think there are any cases where i do not use a scoped variable, EVER, i find it in legacy code all the time, but i just fix and go on.</p><p>its funny to look back at old code and see instances of too many and WHOLLY not needed #'s all over the place.</p><p>anyway, ok, so im not the only one on this... nice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622956">13</a> by wolf2k5
		posted on 11/26/2005 at 4:41 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I always use the 'variables' prefix to scope variables, even outside CFCs.</p><p>In CFCs methods (and UDFs), I always use local scoped variables when I don't need to retain the value.</p><p>I usually create a local scoped structure to hold them, e.g.:</p><p>&lt;cfscript&gt;<br>var local = structNew();</p><p>local.myVar1 = ...<br>local.myVar2 = ...<br>&lt;/cfscript&gt;</p><p>That way you recognize local scoped variables very easily.</p><p>I borrowed this technique from a Fusebox sample application and it worked fine for me so far.</p><p>What do you think about it?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622953">14</a> by tony of the weeg clan
		posted on 11/27/2005 at 2:23 AM
		</div>
		<div class="comment_text"><p>i can dig that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622960">15</a> by Raymond Camden
		posted on 11/28/2005 at 7:29 AM
		</div>
		<div class="comment_text"><p>wolk2k5 - I personally don't care for that. No 'real' reason, just don't prefer it.</p></div>
	</div>
</div>
		