
<div class="comment" id="c_1713678276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678276">1</a> by zac spitzer
		posted on 3/19/2008 at 3:59 AM
		</div>
		<div class="comment_text"><p>Ray, i would have to disagree with your last statement "Missing var scopes are one of the most difficult bugs to track down." because <a href="http://disq.us/url?url=http%3A%2F%2Fvarscoper.riaforge.org%2F%3AOW0Sjl9T3HvFL9yInc28cc0YnUM&amp;cuid=3321886" rel="nofollow noopener" title="http://varscoper.riaforge.org/">http://varscoper.riaforge.org/</a> really does help solve most of the problem.</p><p>It should be used as part of every release process</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678277">2</a> by Willy
		posted on 3/19/2008 at 8:04 AM
		</div>
		<div class="comment_text"><p>Slightly OT:</p><p>We usually do...<br>&lt;cfscript&gt;<br>   var Local = structNew();<br>&lt;/cfscript&gt;</p><p>Then we can do</p><p>Local.y = 2;<br>etc.</p><p>Without having to do another var declaration.  This cuts down on accidentally leaving it out.</p><p>/willy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678275">3</a> by Kevin Sargent
		posted on 3/19/2008 at 9:24 AM
		</div>
		<div class="comment_text"><p>I also do  var LOCAL = structNew()</p><p>then  you get in the habit of calling EVERY var insode a function / method either LOCAL or ARGUMENTS</p><p>very slim chance of un varing a var...:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678269">4</a> by Tom Chiverton
		posted on 3/19/2008 at 1:59 PM
		</div>
		<div class="comment_text"><p>VarScoper is a good tool, but it's not perfect (can't do cfscript yet, some times gets confused). <br>It's also coming to a CFEclipse near you soon too :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678282">5</a> by Lola LB
		posted on 3/19/2008 at 3:28 PM
		</div>
		<div class="comment_text"><p>I think Ray is still right . . . if you don't know of VarScoper, it still is hard to track down those misbehaving vars.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678279">6</a> by Adrian J. Moreno
		posted on 3/19/2008 at 7:12 PM
		</div>
		<div class="comment_text"><p>I've got a couple of posts about this. They start here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.iknowkungfoo.com%2Fblog%2Findex.cfm%2F2007%2F8%2F22%2FObject-Oriented-Coldfusion--4--The-var-scope%3AwKK8eR_Kluvig9qlA-09eo2o1eU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.iknowkungfoo.com/blog/index.cfm/2007/8/22/Object-Oriented-Coldfusion--4--The-var-scope">http://www.iknowkungfoo.com...</a></p><p>In that post, I've linked to another great example from Dave Shuck that exposes threading issues when you don't use the var scope.</p><p>@Tom: The latest version of varScoper has support for cfscript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678278">7</a> by Tom Chiverton
		posted on 3/19/2008 at 7:38 PM
		</div>
		<div class="comment_text"><p>@Adrian<br>I hadn't seen the updates it has had.<br>cfscript parsing is still labeled 'experimental' but it *is* improved, cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678280">8</a> by Jeremy Prevost
		posted on 3/19/2008 at 7:55 PM
		</div>
		<div class="comment_text"><p>VarScoper is quite handy (just ran some of my CFCs through it and it caught a couple of functions I had missed).</p><p>@Tom: This in CFEclipse would rock. Any chance of a plugin or script coming that'll de-suck code written before coffee has kicked in? (Maybe in the form of not allowing me to open Eclipse until my caffeine levels reach a specified level).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678281">9</a> by Tom Chiverton
		posted on 3/19/2008 at 8:00 PM
		</div>
		<div class="comment_text"><p>@Jeremy<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.fusionauthority.com%2Fcommunity%2F4735-an-interview-with-mark-drew-speaker-at-cfunited-europe.htm%3AF40bDy9fFP0sTMjh--QvSTwwXng&amp;cuid=3321886" rel="nofollow noopener" title="http://www.fusionauthority.com/community/4735-an-interview-with-mark-drew-speaker-at-cfunited-europe.htm">http://www.fusionauthority....</a><br>"One [thing I'm building for CFEclipse], which I am porting from ColdFusion to Java, is the variable scoper, which finds un-var'd variables in functions."</p></div>
	</div>
</div>
		