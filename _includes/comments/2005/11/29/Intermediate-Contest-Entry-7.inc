
<div class="comment" id="c_1713623045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623045">1</a> by Seth Petry-Johnson
		posted on 11/30/2005 at 6:31 AM
		</div>
		<div class="comment_text"><p>&gt; As with many other submissions, his CFC doesn't use <br>&gt; var scoping. (Yes, I'm getting to be a bit crazy about it, <br>&gt; aren't I?)</p><p>As well you should.  Var scoping sucks, and I think we all prefer other languages in which variables defined within a block are local to that block, but its a necessary part of CFC development.  Besides, its better to start the var habit NOW rather than later. Who wants to go through thousands of lines of old code adding "var" over and over?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623049">2</a> by Rob Gonda
		posted on 11/30/2005 at 6:51 AM
		</div>
		<div class="comment_text"><p>Seth,</p><p>I disagree. Javascript, ActionScript, and Java, require var scoping. Let me inform you that Java is the most used language in the planet, CF is number 19. I particularly like the control of choosing whether the variable should be local or global. CF should not make that assumption. You should be glad and thank Macromedia for adapting this from Java and giving you the freedom and control over your code.</p><p>IMO</p><p>-Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623046">3</a> by Jeff
		posted on 11/30/2005 at 6:07 PM
		</div>
		<div class="comment_text"><p>I'm with Seth on this one.</p><p> In Java, don't you use the var keyword to declare a variable for it's usage?  In CF you do not need to declare a variable before using it; that is the benefit of a loosely typed language.  Because of this, the var keyword seems like a huge kludge.</p><p> JavaScript (also loosely typed) operates much like CF does in this regards, except you can use the var anywhere in the function (it doesn't have to be at the top).  JavaScript, however, is loosely typed.</p><p> I don't know enough about ActionScript to make a statement about it, although from what I hear about AS3, I suspect it is leaning towards the Java implementation.</p><p> Back to CF, I don't understand why variables are not local to the function by default.  I don't understand why we can't use the var keyword whenever we create the variable.  Why does it have to be on top?  <br> I also do not understand why local variable don't have a scope that exists during the function execution (why use the var keyword at all)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623047">4</a> by Rob Gonda
		posted on 12/1/2005 at 1:28 AM
		</div>
		<div class="comment_text"><p>Jeff,</p><p>I'm with you on 'must be at the top'. I do not understand the reason behind that... Should be anywhere, just like JS/AS...</p></div>
	</div>
</div>
		