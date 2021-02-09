
<div class="comment" id="c_1713658296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658296">1</a> by Ben Nadel
		posted on 10/17/2006 at 7:05 PM
		</div>
		<div class="comment_text"><p>Also, one subtle issue with using functions: You cannot always treat the returned value of a function AS the value it actually is. This has nothing to do with type compatability, but rather with compile time parsing (I think).</p><p>Take for example the UDF Test:</p><p>&lt;cffunction name="Test"&gt;<br>   &lt;cfreturn ListToArray( "ben,ray" ) /&gt;<br>&lt;/cffunction&gt;</p><p>This function just returns a simple array with two items in it. However, even though it returns an array, you cannot call the method and reference the value in ONE line of code:</p><p>#Test()[1]#</p><p>... will throw the error:</p><p>"Invalid CFML construct found"</p><p>You have to create an interim variable to do this:</p><p>&lt;cfset arrNames = Test() /&gt;<br>#arrNames[ 1 ]#</p><p>This works fine. So, you might never come across this, but if you are getting this error, the error is NOT with the UDF itself, but rather with ColdFusion's compile time parsing issues. Personally, I think this is a *bug*... but that's just me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658301">2</a> by Trond Ulseth
		posted on 10/18/2006 at 12:45 PM
		</div>
		<div class="comment_text"><p>Ray, one method that you yourself mention at least in one other post. "What I typically do, and I have seen others doing this as well, is to create a CFC to store your UDFs. Normally I like to create a CFC called utils...."</p><p>Should/could not this be mentioned as well? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658306">3</a> by Raymond Camden
		posted on 10/18/2006 at 3:10 PM
		</div>
		<div class="comment_text"><p>Trond - no, it should not have. :) In the post I said that what I was showing were _some_ of th ways. I didn't want to get too complex as I was writing for folks just getting into UDFs. So pretend you didn't say that. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658295">4</a> by Trond Ulseth
		posted on 10/18/2006 at 3:28 PM
		</div>
		<div class="comment_text"><p>Ok - then I have a suggestion for another blog post for you:</p><p>"How do I actually use a CFC to store my UDFs" :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658297">5</a> by Ben Nadel
		posted on 10/18/2006 at 3:30 PM
		</div>
		<div class="comment_text"><p>Trond,</p><p>If I may step in for that one:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Findex.cfm%3Fdax%3Dblog%3A257.view%3Aq8zfCNp12SXiFn_qCeArl5LCinM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/index.cfm?dax=blog:257.view">http://www.bennadel.com/ind...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658294">6</a> by Raymond Camden
		posted on 10/18/2006 at 5:45 PM
		</div>
		<div class="comment_text"><p>Dang it Ben, stop that. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658298">7</a> by Ben Nadel
		posted on 10/18/2006 at 5:51 PM
		</div>
		<div class="comment_text"><p>Trond's another CFSkill'er ... gotta take care of my boys :)</p></div>
	</div>
</div>
		