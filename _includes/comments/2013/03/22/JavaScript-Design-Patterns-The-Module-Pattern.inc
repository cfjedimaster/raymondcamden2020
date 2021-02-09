
<div class="comment" id="c_1713745355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745355">1</a> by Dan G. Switzer, II
		posted on 3/22/2013 at 10:37 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>Hopefully this article will help a lot of people. I personally prefer the following module pattern:</p><p>window.someModule = (function(someModule) {<br>  var privateVar = "cfjedimaster";<br>  someModule.publicMethod = function (){<br>    return privateVar;<br>  }<br>  return someModule;<br>})(window.someModule || {});</p><p>While it's very similar, what it allows you to do is easily extend a module if it already exists on the page, but still allows you to provide that separation in your logic.</p><p>This works really well when you might have parts of JS logic being include dynamically.</p><p>The trick is the "window.someModule || {}" argument being feed to the self executing function. What this does is either pass in the reference to the global variable or it passes in an empty Object. Very clean and effective.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745353">2</a> by William Eatman
		posted on 3/22/2013 at 10:53 PM
		</div>
		<div class="comment_text"><p>The module pattern is what I use.  It really helps clean things up.  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745360">3</a> by Dave Anderson
		posted on 3/23/2013 at 11:04 PM
		</div>
		<div class="comment_text"><p>Looks like it's time to start using jQuery promises.  Maybe the next post will refactor this code with $.deferred, eh?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745354">4</a> by Raymond Camden
		posted on 3/23/2013 at 11:06 PM
		</div>
		<div class="comment_text"><p>Dave, interesting, why do you think this is necessary? To me, promises seem more useful when you may have N items firing async and want to wait for them to complete. For my API, I really don't. I just have a doX(run this on done) type API that seems simple enough. Unless I'm missing your point?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745364">5</a> by Dave Anderson
		posted on 3/23/2013 at 11:17 PM
		</div>
		<div class="comment_text"><p>I'm still working to grasp when $.deferred is most useful myself, but I was under the impression that whenever you see nested callbacks, there's a good chance the code can be refactored for read- and maintainabililty with promises.<br>Now I'm reading a tutorial, so if I figure out how to make those function(foo, function(bar, function()))s go away, I will report back.<br>(Unless someone who really gets what I'm trying to say can chime in.  It's entirely possible I'm totally full of crap.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745357">6</a> by Raymond Camden
		posted on 3/23/2013 at 11:21 PM
		</div>
		<div class="comment_text"><p>I suppose, _technically_, I have nested callbacks. Ie, this button -&gt; on click -&gt; do a db call -&gt; then X</p><p>But since once call back is the handler for a DOM event and one is the callback for my db call, I wouldn't want to mix em up.</p><p>To me, it seems reasonably simple enough. But I've been looking at JS code for a while now. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745365">7</a> by Raymond Camden
		posted on 3/23/2013 at 11:21 PM
		</div>
		<div class="comment_text"><p>Btw - this is excellent stuff to discuss of course. Keep it up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745363">8</a> by Dave Anderson
		posted on 3/23/2013 at 11:21 PM
		</div>
		<div class="comment_text"><p>You know what?  My mistake.  Scratch all that.  I took your advise and didn't read every line of code the first time.  I see now that the functions I was thinking of are all db-related, rather than async processes.  I suspect promises wouldn't necessary apply here.</p><p>Carry on!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745358">9</a> by Raymond Camden
		posted on 3/23/2013 at 11:23 PM
		</div>
		<div class="comment_text"><p>Actually, the DB stuff *is* async. :) Look at the module.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745356">10</a> by Dave Anderson
		posted on 3/24/2013 at 12:13 AM
		</div>
		<div class="comment_text"><p>Yeah, that's right, but the db.transaction()s don't return a promise like a $.post() or $.get() do.</p><p>Question:  where does 't' get defined?  Does the transaction pass itself to the initDB() method?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745362">11</a> by Russ
		posted on 3/24/2013 at 2:58 AM
		</div>
		<div class="comment_text"><p>Lately I've been using Require.js, which handles JS dependencies while utilizing the module pattern (it also does a lot of other useful stuff). If you haven't taken a look at it yet, I definitely recommend giving it a shot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745359">12</a> by Raymond Camden
		posted on 3/24/2013 at 3:39 AM
		</div>
		<div class="comment_text"><p>@Dave: Yes, it is a transaction object. Don't focus too much on WebSQL. It is a kick ass technology, easy to use, pretty familiar to those of us with server-side experience, but also a dead technology. :(</p><p>@Russ: I've "used" Require.js, but I wouldn't say I exactly grok it yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745367">13</a> by RogerTheGeek
		posted on 3/25/2013 at 6:32 PM
		</div>
		<div class="comment_text"><p>What is the difference between this and using namespaces?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745366">14</a> by Raymond Camden
		posted on 3/25/2013 at 6:40 PM
		</div>
		<div class="comment_text"><p>I don't know. I haven't really thought about that yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745361">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745361">15</a> by dawesi
		posted on 3/25/2013 at 7:06 PM
		</div>
		<div class="comment_text"><p>Reminds me of Sencha's frameworks it does ;-) - it's almost ColdFusion and ExtJS where written with the same thought processes... serious synergy there...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745376">16</a> by Dan G. Switzer, II
		posted on 3/25/2013 at 7:14 PM
		</div>
		<div class="comment_text"><p>@RogerTheGeek:</p><p>I'm assuming when you say "namespaces" you're referring to just using an object to declare your functions. If so, the significant difference is the module pattern allows for private variables/functions that can only be executed by the module.</p><p>For all intents and purposes, the module pattern is just a form of providing a namespace for your variable and method declarations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745373">17</a> by Justin Treher
		posted on 3/27/2013 at 4:03 PM
		</div>
		<div class="comment_text"><p>Your post goes well with this post for the new ECMAScript shortcut:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fariya.ofilabs.com%2F2013%2F03%2Fes6-and-method-definitions.html%3ACJePMAzjihDUmFhnufCrA7lLwPk&amp;cuid=3321886" rel="nofollow noopener" title="http://ariya.ofilabs.com/2013/03/es6-and-method-definitions.html">http://ariya.ofilabs.com/20...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745375">18</a> by Raymond Camden
		posted on 3/27/2013 at 5:33 PM
		</div>
		<div class="comment_text"><p>Yeah, ECMA6 is looking *very* sweet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745374">19</a> by Dennis
		posted on 6/5/2013 at 9:49 PM
		</div>
		<div class="comment_text"><p>Tried running the final version in Chrome 27.0.1453.110. Clicking "Write Entry" button does not load add.html.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745377">20</a> by Raymond Camden
		posted on 6/6/2013 at 11:28 AM
		</div>
		<div class="comment_text"><p>Do you see anything in the console?</p></div>
	</div>
</div>
		