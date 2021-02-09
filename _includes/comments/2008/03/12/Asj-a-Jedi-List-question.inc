
<div class="comment" id="c_1713678073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678073">1</a> by Jason Brookins
		posted on 3/12/2008 at 11:06 PM
		</div>
		<div class="comment_text"><p>Man, this is right on target.  I can't tell you how many times early in my CF coding career I had to remind myself to use listfind() instead of listcontains().</p><p>And, maybe this is senility creeping in, but I still have to remind myself from time to time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678074">2</a> by Raul Riera
		posted on 3/12/2008 at 11:27 PM
		</div>
		<div class="comment_text"><p>You know what I hate about lists, you cant use listAppend on an empty list (in order to create one from stracth dynamctly). I always end up making arrays.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678072">3</a> by Raymond Camden
		posted on 3/12/2008 at 11:48 PM
		</div>
		<div class="comment_text"><p>@Rual: Eh? Of course you can.</p><p>&lt;cfset l = ""&gt;<br>&lt;cfoutput&gt;#listAppend(l, "Ray")#&lt;/cfoutput&gt;</p><p>That works just fine. The empty string is a list of 0 items, so it adds it as the first item.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678075">4</a> by zac spitzer
		posted on 3/13/2008 at 4:28 AM
		</div>
		<div class="comment_text"><p>I love lists in CF, but i do tend to always fall back on structs because they are faster and more flexible</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678081">5</a> by Raul Riera
		posted on 3/16/2008 at 2:32 AM
		</div>
		<div class="comment_text"><p>I dont know why you always use RUAL as my name lol, but no that doesnt work</p><p>&lt;cfset l = ""&gt;<br>&lt;cfset listAppend(l, "Ray")&gt;<br>&lt;cfset listAppend(l, "Ray 2")&gt;<br>&lt;cfoutput&gt;#l#&lt;/cfoutput&gt;</p><p>Displays an empty string, that exact same example with an array works. In order to make it work I need to do this</p><p>&lt;cfset l = ""&gt;<br>&lt;cfset l = listAppend(l, "Ray")&gt;<br>&lt;cfset l = listAppend(l, "Ray 2")&gt;<br>&lt;cfoutput&gt;#l#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678077">6</a> by Raymond Camden
		posted on 3/16/2008 at 5:53 AM
		</div>
		<div class="comment_text"><p>Because you did it wrong. listAppend _returns_ the list. It doesn't operate on it. You need to _save_ it.</p><p>&lt;cfset l = listAppend(l, "Ray")&gt;</p><p>It is different from array funcs, per the docs. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678080">7</a> by Raul Riera
		posted on 3/16/2008 at 6:12 AM
		</div>
		<div class="comment_text"><p>Yeah, but I dont see the "sense" in that function, it should be operating on the list, why would I want to append something to it and not have it saved automactly? (if the array does the same thing) they shouldnt be named exactly the same (my opinion tough)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678079">8</a> by Raymond Camden
		posted on 3/16/2008 at 5:43 PM
		</div>
		<div class="comment_text"><p>Heh, well, opinion or not - you had said that you can't use listAppend on an empty list - which isn't true. I get you may not like that it doesn't work the same as arrayAppend, but - it _does_ work.</p><p>To be honest - I encounter FAR more developers who get tripped up by how arrayAppend works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678076">9</a> by Raul Riera
		posted on 3/16/2008 at 7:52 PM
		</div>
		<div class="comment_text"><p>fair enough :)</p></div>
	</div>
</div>
		