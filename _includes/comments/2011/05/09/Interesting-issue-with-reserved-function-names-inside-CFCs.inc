
<div class="comment" id="c_1713732207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732207">1</a> by Hal Helms
		posted on 5/10/2011 at 10:32 AM
		</div>
		<div class="comment_text"><p>Thanks, Ray: very helpful</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732221">2</a> by Ciaran Archer
		posted on 5/10/2011 at 12:28 PM
		</div>
		<div class="comment_text"><p>Thanks for the writeup: can I ask what is the thinking behind using the _functionName convention? i.e. Why use an underscore?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732218">3</a> by Raymond Camden
		posted on 5/10/2011 at 2:43 PM
		</div>
		<div class="comment_text"><p>@Hal: You are welcome</p><p>@Claran: You mean in the original CFC? That was Tony's code, not mine. If I had to guess - both for why Adobe used it sometimes and him, it would be to help 'mark' the methods as being special within the CFC/class.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732216">4</a> by Jeremy Battle
		posted on 5/11/2011 at 9:08 AM
		</div>
		<div class="comment_text"><p>Very interesting, I could definitely see myself using a few of those non-underscored functions . I wonder if other parts of the coldfusion.runtime have a similar issue or if its particular to CfjspPage. Might have to check that out myself!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732225">5</a> by Jeremy Battle
		posted on 5/11/2011 at 9:09 AM
		</div>
		<div class="comment_text"><p>Woops, that should say non-underscored function *names*, I wouldn't actually try to use the functions themselves, heh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732222">6</a> by salvatore fusto
		posted on 5/26/2011 at 11:41 AM
		</div>
		<div class="comment_text"><p>so this is why i had a lot of problems using the "_" char in coding.<br>thanks a lot Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_2399268337">
	<div>
		<img src="https://disqus.com/api/users/avatars/jorkzijlstra.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2399268337">7</a> by Jork Zijlstra
		posted on 12/8/2015 at 9:31 AM
		</div>
		<div class="comment_text"><p>Thanks for the list of methods. Apparently they still haven't fixed it.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D4093045%3A_jCN13QKcJU7RUL06MgYoieYgZ8&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=4093045">https://bugbase.adobe.com/i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2399339314">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2399339314">8</a> (In reply to <a href="#c_2399268337">#7</a>) by Raymond Camden
		posted on 12/8/2015 at 11:04 AM
		</div>
		<div class="comment_text"><p>Not surprised. It probably isn't documented either. I'd edit the docs, but the Wiki form is gone now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2399426436">
	<div>
		<img src="https://disqus.com/api/users/avatars/jorkzijlstra.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2399426436">9</a> (In reply to <a href="#c_2399339314">#8</a>) by Jork Zijlstra
		posted on 12/8/2015 at 12:41 PM
		</div>
		<div class="comment_text"><p>No, it isn't in the documentation. I had to find it out the hard way. I did add all the exposed methods to the bug report so that other developers might find it earlier in the adobe bugbase.</p></div>
	</div>
</div>
		