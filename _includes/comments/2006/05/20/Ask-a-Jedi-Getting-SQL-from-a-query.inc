
<div class="comment" id="c_1713653201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653201">1</a> by Matt
		posted on 5/20/2006 at 7:12 PM
		</div>
		<div class="comment_text"><p>I guess I should have looked in my documentation, a little better. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653197">2</a> by matthew too
		posted on 5/20/2006 at 8:15 PM
		</div>
		<div class="comment_text"><p>What are some of the "hacks" to do it pre cfmx 7?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653202">3</a> by Nathan Mische
		posted on 5/20/2006 at 8:35 PM
		</div>
		<div class="comment_text"><p>I'd be interested in seeing the code that replaces the question marks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653204">4</a> by Rob Brooks-Bilson
		posted on 5/20/2006 at 9:13 PM
		</div>
		<div class="comment_text"><p>Pre MX 7, you could get the SQL by turning debugging on and using the serviceFactory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653203">5</a> by Scott P
		posted on 5/20/2006 at 9:42 PM
		</div>
		<div class="comment_text"><p>Good post, please add this to the cookbook.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653206">6</a> by Raymond Camden
		posted on 5/20/2006 at 11:03 PM
		</div>
		<div class="comment_text"><p>Hey Scott, you are right. This would be a good cookbook question . I'll probably make it a bit shorter and just focus on the two important keys to result.</p><p>Nathan: I just realized that the code I have probably isn't perfect. If I remember right I just replaced all the ?. Well obviously if your sql had something hard coded like,</p><p>where name like 'eh?'</p><p>then it wouldn't work. You could do a regex search for ? NOT inside quotes and that would probably work better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653205">7</a> by Raymond Camden
		posted on 5/20/2006 at 11:12 PM
		</div>
		<div class="comment_text"><p>Entry posted. Thanks again for the idea Scott!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653208">8</a> by tof
		posted on 5/22/2006 at 3:57 AM
		</div>
		<div class="comment_text"><p>Just a stupid question...</p><p>If you do use that "result" parameter in your cfquery, do you get some of the returned variables twice, and if yes, does it create a lot of overhead?</p><p>For example, columnList and recordCount are returned in queryName.* already.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653212">9</a> by Raymond Camden
		posted on 5/22/2006 at 4:47 AM
		</div>
		<div class="comment_text"><p>Um, I'd say yes, it does take more work. Is it significant, probably not. That being said, I only use result= when I'm testing stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653207">10</a> by Fernando da Silva Trevisan
		posted on 5/25/2006 at 6:40 AM
		</div>
		<div class="comment_text"><p>Don't know about CF7, but in 6.1 you could use &lt;cfabort&gt; right before the &lt;/cfquery&gt;: it'll display the query. Not so good code but it works... But there is no way to bypass &lt;cfqueryparam&gt;, that still appears as question marks (?).<br>Best wishes!</p></div>
	</div>
</div>
		