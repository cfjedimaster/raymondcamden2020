
<div class="comment" id="c_1713684637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684637">1</a> by Daniel Sellers
		posted on 7/31/2008 at 11:40 PM
		</div>
		<div class="comment_text"><p>Would it be possible (though a little less clean) to have a .cfm page that called the cfc and displayed the result and then bind to that .cfm instead of the cfc? Haven't tried this yet... but just a thought. Shouldn't have the json conversion then.</p><p>May not work for Doug's application though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684647">2</a> by Raymond Camden
		posted on 7/31/2008 at 11:45 PM
		</div>
		<div class="comment_text"><p>Why bother though? You can tell a CFC to not JSON over the wire using returnFormat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684646">3</a> by Dominic
		posted on 8/1/2008 at 12:18 AM
		</div>
		<div class="comment_text"><p>I ran into this problem a while ago.  For what it's worth, it will also strip leading zeroes.  Unfortunately the returnformat trick doesn't work for me either. (version 8,0,1,195765, 64bit)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684648">4</a> by Raymond Camden
		posted on 8/1/2008 at 1:00 AM
		</div>
		<div class="comment_text"><p>Ok now I'm confused.</p><p>Please grab</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Ftest.cfm.zip%3AOa2HFcZ4RkiOwcLzI9Ym0yAQ9vA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/test.cfm.zip">http://www.coldfusionjedi.c...</a></p><p>This what I'm using to test with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684638">5</a> by Dominic
		posted on 8/4/2008 at 9:10 PM
		</div>
		<div class="comment_text"><p>Sorry I was away from my computer all day friday.  Looks like that's pointing to a different test file now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684640">6</a> by Raymond Camden
		posted on 8/5/2008 at 2:02 AM
		</div>
		<div class="comment_text"><p>Does this mean then my code works for you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684639">7</a> by Dominic
		posted on 8/5/2008 at 2:55 AM
		</div>
		<div class="comment_text"><p>No.  The code in the file that is linked above is not related to the JSON issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684641">8</a> by Raymond Camden
		posted on 8/5/2008 at 4:02 AM
		</div>
		<div class="comment_text"><p>Ugh - wrong file was uploaded. My machine is not available right now so I'll have to post it in the morning probably.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684643">9</a> by Raymond Camden
		posted on 8/5/2008 at 4:14 AM
		</div>
		<div class="comment_text"><p>I recreated the code on anew machine, and it still works fine for me:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fnewtest.zip%3AakH29isg_SugIdLbUhGqWMITRhE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/newtest.zip">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684645">10</a> by Dominic
		posted on 8/5/2008 at 5:28 PM
		</div>
		<div class="comment_text"><p>Ah okay this makes more sense.  I was thrown off by the code above</p><p>&lt;cfset s = "12345678980123456789801234567898012345"&gt;<br>&lt;cfset encoded = serializeJSON(s)&gt;<br>&lt;cfoutput&gt;#encoded#&lt;/cfoutput&gt;</p><p>I thought that's what your cfc was doing.  Your test.cfc works as expected for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684644">11</a> by Raymond Camden
		posted on 8/5/2008 at 5:54 PM
		</div>
		<div class="comment_text"><p>Ah yes. I had wanted to compare the display of similar code but not over Ajax. So my test file had 1 call to Ajax, another call with the url format, then the inline code.</p></div>
	</div>
</div>
		