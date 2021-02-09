
<div class="comment" id="c_1713618683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618683">1</a> by Christian Cantrell
		posted on 6/2/2005 at 7:40 PM
		</div>
		<div class="comment_text"><p>Thanks for fixing this, Ray.  I've seen this issue several times in MXNA.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618682">2</a> by Steven Ross
		posted on 6/6/2005 at 6:29 PM
		</div>
		<div class="comment_text"><p>the line number in the file I downloaded (I got it from this site) was 504...</p><p>is that right or do I have the wrong version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618685">3</a> by Raymond Camden
		posted on 6/6/2005 at 6:38 PM
		</div>
		<div class="comment_text"><p>Nope - I just noticed that myself. I was working from the blog.cfc on my blog, NOT from source. Now that I'm back home, I also noticed it was 504.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618687">4</a> by Steven Ross
		posted on 6/6/2005 at 6:46 PM
		</div>
		<div class="comment_text"><p>I am getting an error when i try to do anything like this in my implementation  (I'm testing using Access locally).</p><p>my blog entry:</p><p>test<br>&lt;code&gt;<br>&lt;cfform format="flash"&gt;</p><p>   &lt;cfinput type="checkbox" name="agree" label="I Agree" required="true" value="1"&gt;<br>   &lt;cfinput type="submit" name="submit" value="Push the button"&gt;</p><p>&lt;/cfform&gt;<br>&lt;/code&gt;</p><p>it appears to break when i try to do anything with cfform</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618684">5</a> by Raymond Camden
		posted on 6/6/2005 at 6:52 PM
		</div>
		<div class="comment_text"><p>Steven - everything inside code should be escaped. What error do you get exactly? (I can't test this second.) Does it go away if you change cfform to form?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618688">6</a> by Steven Ross
		posted on 6/6/2005 at 7:05 PM
		</div>
		<div class="comment_text"><p>no that doesnt</p><p>it even errors if i do this:</p><p>&lt;code&gt;<br>&lt;wrapcode&gt;<br>&lt;cfinput type="checkbox" name="agree" label="I Agree" required="true" value="1"&gt;<br>&lt;cfinput type="submit" name="submit" value="Push the button"&gt;<br>&lt;/wrapcode&gt;<br>&lt;/code&gt;</p><p>the error:</p><p>ScriptName:  	/zerium/client/editor.cfm?id=51E03BEC-E929-B9BB-89D65E5FE6ACE1D5<br>Browser: 	Mozilla/5.0 (Windows; U; Windows NT 5.0; en-US; rv:1.7.8) Gecko/20050511 Firefox/1.0.4<br>Referer: 	http://localhost/zerium/client/editor.cfm?id=51E03BEC-E929-B9BB-89D65E5FE6ACE1D5<br>Message: 	Error Executing Database Query.<br>Type: 	coldfusion.runtime.CfErrorWrapper</p><p>and there is the struct that is dumped...</p></div>
	</div>
</div>
		