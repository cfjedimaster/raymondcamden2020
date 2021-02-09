
<div class="comment" id="c_3486223795">
	<div>
		<img src="https://disqus.com/api/users/avatars/glynn_bird.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486223795">1</a> by glynn_bird
		posted on 8/25/2017 at 1:17 PM
		</div>
		<div class="comment_text"><p>Totally agree that (a,b) =&gt; { } was very difficult to read at first. It drove me mad too!</p><p>I resisted at first, but am happy to switch to arrow functions if they fix the this/bind nonsense :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486360998">
	<div>
		<img src="https://disqus.com/api/users/avatars/photokandy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486360998">2</a> by Kerri Shotts
		posted on 8/25/2017 at 2:50 PM
		</div>
		<div class="comment_text"><p>I followed a similar path to you, I think, when it came to arrow functions. At first glance my brain just went, "WTF" and stopped while I mentally translated what it would be in the previous style. Every once in a bit it still trips me up, to be honest. But once I started writing code that used arrow functions, I fell in love, and haven't looked back. That said I still have no idea how to pronounce these things, and I've not seen a lot of consensus from the wider community either. Oh well...!</p><p>Editing suggestion for the post:</p><p>The lines "The other benefit of arrow functions are how they correct issues with this. If you’ve ever written a call back and realized that this.something inside wasn’t working correctly, this is something you’ll appreciate." don't differentiate JS `this` vs "this" as a word... so it took me a second to understand what you meant. Might want to demarcate the JS `this`.</p><p>And a few additional thoughts:</p><p>The `setInterval` method works like this too:</p><p>```<br>setInterval(() =&gt; this.age++, 1000);<br>```</p><p>... if you're into terseness, anyway, and understand that the engine won't include the "1000" as part of the function body.</p><p>Also, if you have a single parameter but are destructuring the argument, the parens have to come back: `([key, value]) =&gt; this[key] = value`.</p><p>And when you're using the short form with objects -- be sure to use parentheses to avoid ambiguity: `x =&gt; ({someKey: x})`</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486668979">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486668979">3</a> (In reply to <a href="#c_3486360998">#2</a>) by Raymond Camden
		posted on 8/25/2017 at 5:53 PM
		</div>
		<div class="comment_text"><p>Thanks! (FYI, about the "this" edit - I agree - it will go up next time I deploy the blog.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486893364">
	<div>
		<img src="https://disqus.com/api/users/avatars/anbalcsaracarvalho.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486893364">4</a> by Aníbal César A. Carvalho
		posted on 8/25/2017 at 8:15 PM
		</div>
		<div class="comment_text"><p>I don't use new stuff to be cool, but when they are useful, like most of ES6 updates, them I start to use and recommend them on my code reviews whenever possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3487109716">
	<div>
		<img src="https://disqus.com/api/users/avatars/benjaminfarrell.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3487109716">5</a> by Benjamin Farrell
		posted on 8/25/2017 at 10:56 PM
		</div>
		<div class="comment_text"><p>Fat arrows are nearly indispensable for me. I'm using ES6 classes right now in most of my work. Saying it helps manage "this" is an understatement! Especially when using web components and extending HTMLElement to roll your own, I often want to assign a mouse event to an element inside my component. Having a clean class with a onMouseEvent method inside that knows the scope of the component is huge. The best way to pull this off is to use fat arrows IMO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3490890916">
	<div>
		<img src="https://disqus.com/api/users/avatars/phillipsenn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3490890916">6</a> by Phillip Senn
		posted on 8/28/2017 at 4:28 PM
		</div>
		<div class="comment_text"><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3D6sQDTgOqh-I%3ATqu6y5YZyuFSVcpFnVtGVDiE3NA&amp;cuid=3321886" rel="nofollow noopener" title="https://www.youtube.com/watch?v=6sQDTgOqh-I">https://www.youtube.com/wat...</a> uses .filter, .map and .reduce in his example, and is able to remove even the name of the function itself, instead calling it anonymously.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3491358932">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_G9MdPtMpd8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3491358932">7</a> by David Levin
		posted on 8/28/2017 at 9:24 PM
		</div>
		<div class="comment_text"><p>I'm still not a fan of arrow functions.  In my opinion, it makes a function declaration too abbreviated.  When I'm searching through many lines of code and looking for a particular function, I like to see the name "function()" actually written.  Call me old fashioned but I think it reads much better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3492470062">
	<div>
		<img src="https://disqus.com/api/users/avatars/Truelove.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3492470062">8</a> (In reply to <a href="#c_3491358932">#7</a>) by Truelove
		posted on 8/29/2017 at 3:19 PM
		</div>
		<div class="comment_text"><p>If take a look here <a href="https://disq.us/url?url=https%3A%2F%2Fjsperf.com%2Farrow-functions%2F10%3Avnbg-98zuNxNoZhZ7uCsEXx_uxI&amp;cuid=3321886" rel="nofollow noopener" title="https://jsperf.com/arrow-functions/10">https://jsperf.com/arrow-fu...</a>, I might say that there is no difference between arrow and plain functions with only exception when bind is not used.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3492472493">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3492472493">9</a> (In reply to <a href="#c_3492470062">#8</a>) by Raymond Camden
		posted on 8/29/2017 at 3:21 PM
		</div>
		<div class="comment_text"><p>Sorry - are you saying there is no (real) difference in performance? (Trying to understand your comment and I'm not quite getting it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3492836280">
	<div>
		<img src="https://disqus.com/api/users/avatars/coltpini.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3492836280">10</a> by coltpini
		posted on 8/29/2017 at 6:51 PM
		</div>
		<div class="comment_text"><p>I think one of my favorite aspects of the arrow function is in currying or similar techniques. For example if I want to take a function, return that function and use the returned function for something I would do this in the old syntax:</p><p>```<br>let example = function(prop1){<br>    return function(prop2){<br>        return prop1 + prop2;<br>    }<br>}<br>example(1)(2) // returns 3;<br>```</p><p>but when I do that using arrow functions it is a lot more clear.</p><p>```<br>let example = prop1 =&gt; prop2 =&gt; prop1 + prop2;<br>example(1)(2) // returns 3;<br>```</p><p>If you don't understand the syntax, to your point above clear could be debated, but when you understand it, the second example is so much cleaner and clearer!</p><p>I love it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5238177998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5238177998">11</a> by stephane
		posted on 1/22/2021 at 11:23 PM
		</div>
		<div class="comment_text"><p>Thanks for this post - it's given me understanding and hope I'll get used to arrow functions.  I'm getting back into application development after having lived in SQL for the past 15 years, and even then I was using old technologies.  I'm now trying to develop a web app and while I have a deep understanding of programming and data, the learning curve of javascript / typescript, react, CSS, git, yarn, npm, node, express and everything else is very steep for an old hand.  These arrow functions, "wrongly quoted" strings and lots of other stuff have me tear my hair out.  Putting data on a screen and saving it back into a database sure was a lot easier in the good old client server days!</p></div>
	</div>
</div>
		