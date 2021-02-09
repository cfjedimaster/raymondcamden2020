
<div class="comment" id="c_1713737354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737354">1</a> by Ryan Vikander
		posted on 12/19/2011 at 8:55 PM
		</div>
		<div class="comment_text"><p>This is my favorite new feature so far! Can't wait to use this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737373">2</a> by Steve Bryant
		posted on 12/19/2011 at 10:39 PM
		</div>
		<div class="comment_text"><p>I'm with Ryan. I have been wanting this for a long time. To me, this is a real reason to upgrade.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737370">3</a> by Raymond Camden
		posted on 12/19/2011 at 10:45 PM
		</div>
		<div class="comment_text"><p>Cool to hear you guys like this!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737374">4</a> by Sanoop
		posted on 12/20/2011 at 3:10 PM
		</div>
		<div class="comment_text"><p>Great! I like the stack trace.</p><p>I wish both the function names replaced with each other.<br>callstackDump() name should be callStackGet() and callStackGet() name should be callstackDump()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737376">5</a> by Ben Nadel
		posted on 12/20/2011 at 7:02 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Does the name of the function listed depend on what it was named in the file? Or, what it was named at runtime (ie. is it the value that getFunctionCalledName() would return within a given function)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737375">6</a> by Raymond Camden
		posted on 12/20/2011 at 7:19 PM
		</div>
		<div class="comment_text"><p>Under most circumstances it would be the same, right? Or are you talking about a case where you create a copy of a UDF/method? If you can give me an easy test, I can run it and tell you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737356">7</a> by Ben Nadel
		posted on 12/20/2011 at 7:25 PM
		</div>
		<div class="comment_text"><p>Yeah, mostly the same; just wondering how it would work if I had copies of a method reference. Imagine I had a method that was a generic getter:</p><p>function getXYZ():<br>var name = getFunctionCalledName();<br>var prop = reReplace( name, "^get", "", "one" );<br>return( variables[ prop ] );</p><p>The, I could have something like this in my CFC:</p><p>this.getName = this.getDOB = this.getDateCreated = this.getXYZ;</p><p>I'm not saying I would do that, especially now that we have synthesized accessors; but, just curious what name would be returned in the callstack.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737350">8</a> by Raymond Camden
		posted on 12/20/2011 at 7:26 PM
		</div>
		<div class="comment_text"><p>If you could ping me direct via email with code I could run, I'll drop in callStackDump and tell you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737355">9</a> by Ben Nadel
		posted on 12/20/2011 at 7:47 PM
		</div>
		<div class="comment_text"><p>Done :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737349">10</a> by Raymond Camden
		posted on 12/20/2011 at 7:50 PM
		</div>
		<div class="comment_text"><p>So I tested Ben's code. It shows that we report the REAL name of the function, not the function it was called as. Is that a bug? I have NO idea. Yall decide. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737358">11</a> by Atan
		posted on 12/21/2011 at 2:20 PM
		</div>
		<div class="comment_text"><p>+1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737353">12</a> by Michael Horne
		posted on 1/19/2012 at 12:18 PM
		</div>
		<div class="comment_text"><p>Just read this.<br>Very similar to the trace() function that is floating about as a UDF. However, that doesn't make it any less welcome! Finally, easy child-parent based debugging!</p><p>Having said that... CFSCRIPT... Never have liked it! As much as I appreciate trying to homogenise the syntax of CF with JS and others, in my mind it still makes code more difficult to read and still has differences to other languages, so the problem still remains - my point being I still prefer the tag-based CF because it looks different to, for example JS, so there's no confusion when looking at code.</p><p>It's very early, so that may have been gibberish!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737351">13</a> by Raymond Camden
		posted on 1/19/2012 at 8:24 PM
		</div>
		<div class="comment_text"><p>@Michael: I only use all script in my CFCs, which won't have JS or HTML in them so there is no chance of confusion. I definitely still use tag based CF all the time.</p></div>
	</div>
</div>
		