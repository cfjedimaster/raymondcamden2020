
<div class="comment" id="c_1713708974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708974">1</a> by Gert Franz
		posted on 10/10/2008 at 6:37 PM
		</div>
		<div class="comment_text"><p>Hi folks,</p><p>in Railo 3 you can do that with the function getMetaData().<br>Just pass a variable string and add a second parameter (true) to it. So the following:<br>&lt;cfdump var="#getMetaData("myVar", true)#"&gt;<br>Displays all the scopes that the variable myVar exists in.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.railo-technologies.com%2Fen%2Findex.cfm%3FtreeID%3D376%3AHnDiDvTfnjmPlNBBay00GzM-N6A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.railo-technologies.com/en/index.cfm?treeID=376">http://www.railo-technologi...</a></p><p>Gert</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708991">2</a> by Raymond Camden
		posted on 10/10/2008 at 7:35 PM
		</div>
		<div class="comment_text"><p>And you should point out - R3 also allows you to block scope lookup. So if X isn't defined in Variables, your engine won't start looking up the scopes. This is something I hope Adobe adds as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1876476029">
	<div>
		<img src="https://disqus.com/api/users/avatars/timsmolders.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1876476029">3</a> by Tim Smolders
		posted on 2/26/2015 at 12:09 PM
		</div>
		<div class="comment_text"><p>for(;i &lt;= listLen(scopes); i++)</p><p>Add '=', otherwise never returns client scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1876639281">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1876639281">4</a> (In reply to <a href="#c_1876476029">#3</a>) by Raymond Camden
		posted on 2/26/2015 at 2:12 PM
		</div>
		<div class="comment_text"><p>Good point. Thanks!</p></div>
	</div>
</div>
		