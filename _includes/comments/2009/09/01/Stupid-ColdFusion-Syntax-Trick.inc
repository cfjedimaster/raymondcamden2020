
<div class="comment" id="c_1713718070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718070">1</a> by Brian Rinaldi
		posted on 9/1/2009 at 10:28 PM
		</div>
		<div class="comment_text"><p>Don't tell Ben Nadel or he'll add in line breaks and spaces before every parentheses ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718094">2</a> by Henry Ho
		posted on 9/1/2009 at 10:28 PM
		</div>
		<div class="comment_text"><p>Hmm... I think that works with Java/C# too.  White spaces generally don't matter, if I'm not mistaken.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718086">3</a> by Dave DuPlantis
		posted on 9/1/2009 at 11:35 PM
		</div>
		<div class="comment_text"><p>Yep, that's right. Whitespace is ignored ... which means you get standards wars in most dev groups. When I worked in groups, it was interesting to see how people could be so passionate about things that didn't matter at all to the parser. (Sometimes "people" meant me!)</p><p>function(x)<br>function( x )<br>function (x)<br>function ( x )</p><p>all the same thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718092">4</a> by Andrew Scott
		posted on 9/2/2009 at 7:47 AM
		</div>
		<div class="comment_text"><p>That is correct Henry, every language I have used is able to do this. If fact in our coding guidelines we actually have it documented that we use a space in this sitaution, and I have seen javaScript with this in a lot of examples in the last 15 years as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718080">5</a> by Rob Dudley
		posted on 9/2/2009 at 12:57 PM
		</div>
		<div class="comment_text"><p>I'd second Brian's comment - Mr Nadel makes extensive use of white space in his function calls ... annoys the hell out of me personally but each to their own</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718087">6</a> by Raymond Camden
		posted on 9/2/2009 at 3:12 PM
		</div>
		<div class="comment_text"><p>@Andrew - funny, I don't think I've ever seen functionSPACE( before, but maybe I just never noticed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718076">7</a> by Andrew Scott
		posted on 9/3/2009 at 1:37 AM
		</div>
		<div class="comment_text"><p>@Ray - There is nothing from stopping you writing code like this either.</p><p>function<br>(<br>  myVar, // Example1<br>  myVar1, //Example2<br>  myVar2, //Example 3<br>  myVar3, //Example 4<br>)</p><p>The parser should ignore all spaces, tabs and end of lines until it finds what it needs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718074">8</a> by Raymond Camden
		posted on 9/3/2009 at 1:40 AM
		</div>
		<div class="comment_text"><p>That's wrong. You must be stopped Andrew. I'm creating a time machine just so I can go back in time and take care of that.</p><p>On a serious note - I do employ syntax like that a bit for jQuery.</p><p>$("...").foo(function() {<br>lots<br>of<br>stuff<br>here<br>})</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718075">9</a> by Andrew Scott
		posted on 9/3/2009 at 2:35 AM
		</div>
		<div class="comment_text"><p>hehe....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718077">10</a> by Grant Eagon
		posted on 12/21/2009 at 4:37 AM
		</div>
		<div class="comment_text"><p>You can also do this: <br>&lt;cfscript&gt;<br>myvar =<br>					/*<br>						Here's my lovely comment about why I'm doing this<br>					*/<br>					CreateObject("component", "mycomponent").init();<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		