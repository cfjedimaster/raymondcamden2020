
<div class="comment" id="c_1713709186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709186">1</a> by Edward Beckett
		posted on 10/18/2008 at 8:23 PM
		</div>
		<div class="comment_text"><p>Couldn't &lt;cfdump var="#variables#" Label="Variables"&gt; run on the calling template determine that?</p><p>E</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709198">2</a> by ike
		posted on 10/18/2008 at 8:35 PM
		</div>
		<div class="comment_text"><p>Or just structKeyExists(getFunctionList(),"x")</p><p>-- that'll be faster than listFindNoCase("x",structKeyList(getFunctionList()))</p><p>The old StripTags function has this in it because of changes to regex in CF6</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%2Fudf%2FStripTags%3AQl0xOCY31bmISn-g2DC1kTJERfE&amp;cuid=3321886" rel="nofollow noopener" title="http://cflib.org/udf/StripTags">http://cflib.org/udf/StripTags</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709207">3</a> by ike
		posted on 10/18/2008 at 8:39 PM
		</div>
		<div class="comment_text"><p>@Edward - I think he may be wanting to determine it programmatically in a situation where he's not sure if function "x" will exist when he writes the code, but wants to use it if it's available at run-time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709206">4</a> by Edward Beckett
		posted on 10/18/2008 at 8:51 PM
		</div>
		<div class="comment_text"><p>@Ike ... gotcha ... I wasn't considering his possible case scenario.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709201">5</a> by Raymond Camden
		posted on 10/18/2008 at 11:12 PM
		</div>
		<div class="comment_text"><p>@EB - Yes, Ike is right, it was programmatic access.</p><p>@Ike - Duh. Can I blame it on being too early in the morning and me having a few too many Newcastles? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709202">6</a> by ike
		posted on 10/18/2008 at 11:26 PM
		</div>
		<div class="comment_text"><p>@Ray - If you want to give people the impression that you load up on ale first thing in the morning, sure. :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709199">7</a> by Edward Beckett
		posted on 10/18/2008 at 11:28 PM
		</div>
		<div class="comment_text"><p>That might come in real handy if someone wants to determine which rogue UDF's may be causing problems in an application ... very cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709203">8</a> by Brandon Hansen
		posted on 10/20/2008 at 5:11 AM
		</div>
		<div class="comment_text"><p>Thanks Ray!<br>I am going to run that right now.  Yeah, the app that I am building allows for custom "plugins" to be installed, and sometimes those plugins need to know if other plugins have been loaded first.  So this function will allow them to find out the information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709204">9</a> by Brandon hansen
		posted on 10/20/2008 at 6:16 AM
		</div>
		<div class="comment_text"><p>Works perfectly!  Thanks so much!</p></div>
	</div>
</div>
		