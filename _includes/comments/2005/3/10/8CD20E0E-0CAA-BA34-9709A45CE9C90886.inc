
<div class="comment" id="c_1713617513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617513">1</a> by Daniel Short
		posted on 3/10/2005 at 9:54 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>I found a bug with the &amp;lt;CFFORM&amp;gt;s using XML and multiple select boxes. You said the onSessionEnd bug was filed... Where would I go about filing a bug for CFMX7?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617514">2</a> by Raymond Camden
		posted on 3/10/2005 at 10:02 PM
		</div>
		<div class="comment_text"><p>I believe you go to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fgo%2Fwish%3Aj6eIw0rxH2bmxXnMyQZ-YFwXuss&amp;cuid=3321886" rel="nofollow noopener" title="www.macromedia.com/go/wish">www.macromedia.com/go/wish</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617515">3</a> by Daniel Short
		posted on 3/10/2005 at 11:45 PM
		</div>
		<div class="comment_text"><p>Cool, got it added. The bug is here in case you're interested...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.dansshorts.com%2F%3Fday%3D3%2F6%2F2005%23blog311%3AzA4KpWpKkaYd3NYaVFzUCC6YeqM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dansshorts.com/?day=3/6/2005#blog311">http://www.dansshorts.com/?...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617516">4</a> by barry.b
		posted on 3/11/2005 at 1:36 PM
		</div>
		<div class="comment_text"><p>forgive my ignorance but how could you pass the session timeout into the Application.cfm?</p><p>our turnkey apps have different timeout settings depending on site/install *and* application...</p><p>thanx<br>barry.b</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617517">5</a> by Raymond Camden
		posted on 3/11/2005 at 6:35 PM
		</div>
		<div class="comment_text"><p>Application.cfm does not support onSessionEnd. Only Application.CFC under CFMX7. To specify the sessiontimeout, you use</p><p>&lt;cfset this.sessionTimeOut=createTimeSpan(0,0,20,0)&gt;</p><p>Obviously you can tweak the numbers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617518">6</a> by barry.b
		posted on 3/14/2005 at 9:52 AM
		</div>
		<div class="comment_text"><p>&gt;&gt; Application.cfm does not support onSessionEnd</p><p>D'oh! I meant App.CFC...</p><p>now I get it. Because these settings can otherwise  be done in Application.cfm (or elsewhere) they are (basically) public properties of App.cfc.</p><p>I just might look at App.cfc with java.Reflection to get a list all the public properties...</p><p>thanx<br>barry.b</p></div>
	</div>
</div>
		