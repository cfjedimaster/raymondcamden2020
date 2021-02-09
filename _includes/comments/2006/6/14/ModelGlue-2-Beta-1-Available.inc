
<div class="comment" id="c_1713654158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654158">1</a> by Joe Rinehart
		posted on 6/15/2006 at 7:00 AM
		</div>
		<div class="comment_text"><p>Thanks Ray!  I put some serious time into the docs this time around...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654165">2</a> by Andy Matthews
		posted on 6/15/2006 at 6:47 PM
		</div>
		<div class="comment_text"><p>So will this be a big shift in the coding from v1 to v2? I've just started reading your MG series but would be willing to wait if there was a big change in the coding practices.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654171">3</a> by Raymond Camden
		posted on 6/15/2006 at 6:52 PM
		</div>
		<div class="comment_text"><p>It is backwards compatible. I believe 100%. I know my code is running fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654168">4</a> by Joe Rinehart
		posted on 6/15/2006 at 6:55 PM
		</div>
		<div class="comment_text"><p>Nope, not much coding differences.  Main thing is using ColdSpring.xml instead of a &lt;config&gt; block in ModelGlue.xml.</p><p>Use of things like Reactor, &lt;scaffolds&gt; and the Generic Database Messages are completely optional, and pretty well documented.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654167">5</a> by Raymond Camden
		posted on 6/15/2006 at 7:00 PM
		</div>
		<div class="comment_text"><p>And Joe, even the config stuff is optional, right? You don't have to use it. (But you should of course.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654172">6</a> by Marten Oltrogge
		posted on 6/15/2006 at 7:07 PM
		</div>
		<div class="comment_text"><p>Looks very good. But is it normal that it is running a bit slow because of beta or is my machine too slow?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654169">7</a> by Raymond Camden
		posted on 6/15/2006 at 7:20 PM
		</div>
		<div class="comment_text"><p>Is your app reloading on every request? That will definitely slow things down. That may be the default for the default application. CHecking.... yep, it is. In ColdSpring.xml, change the reload prop to false.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654170">8</a> by Marten Oltrogge
		posted on 6/15/2006 at 7:31 PM
		</div>
		<div class="comment_text"><p>Thanks a lot. Now it's better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654176">9</a> by Andy Matthews
		posted on 6/15/2006 at 8:08 PM
		</div>
		<div class="comment_text"><p>Thanks Joe/Ray...</p><p>I wasn't so much worried about compatibility as I was about learning a method of coding then having to learn it again in the new version.</p></div>
	</div>
</div>
		