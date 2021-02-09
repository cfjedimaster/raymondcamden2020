
<div class="comment" id="c_1713676589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676589">1</a> by Nathan Mische
		posted on 1/27/2008 at 2:51 AM
		</div>
		<div class="comment_text"><p>One thing to keep in mind, you can't use application specific mappings with cfimport.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676594">2</a> by John Farrar
		posted on 1/27/2008 at 9:05 AM
		</div>
		<div class="comment_text"><p>I have proposed for the "next" CF that we add Application.cfc based tag library prefix settings. The issue as it has been explained to me is that with each compile of the CF script page into java code it must create these mappings. Therefore to have a dynamic variable would create a performance hit that would not be acceptable. Yet, it does seem that to hardcode these inside the Application.cfc would be something that would resolve this. Yes, every time these got updated that would mean any files with that prefix would have to be reconverted. Yet, the programming gain seems worth it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676591">3</a> by Geoff Bowers
		posted on 1/27/2008 at 11:53 AM
		</div>
		<div class="comment_text"><p>Application specific mappings are broken if you ask me:<br><a href="http://disq.us/url?url=http%3A%2F%2Fblog.daemon.com.au%2Fgo%2Fblog-post%2Fapplication-specific-mappings-are-horribly-broken%3ApNuCcVAUZGVcTPqD45as0E3G_hQ&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.daemon.com.au/go/blog-post/application-specific-mappings-are-horribly-broken">http://blog.daemon.com.au/g...</a></p><p>There is no reason why you couldn't have a compile time config for the application.  Hell if New Atlanta (Bluedragon) can do it, there's little or no reason Adobe can't.  In any event the documentation needs to be updated -- as it stands it implies Application specific mappings are like their CFIDE equivalent.  They are not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676596">4</a> by Raymond Camden
		posted on 1/28/2008 at 1:29 AM
		</div>
		<div class="comment_text"><p>I'm not sure I'd call it broken. I can see your points about what it doesn't support, but it is still darn handy in my opinion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676645">5</a> by Tony Piscotti
		posted on 1/28/2008 at 9:18 PM
		</div>
		<div class="comment_text"><p>I personally wouldn't prefer calling site headers directly from Application.cfc either.  I was just hoping there might be a way to organize the cfimport calls into one area to keep it simple and cut down on redundancy.  Similar to doing a cfinclude of UDF libraries in onRequestStart, for example.</p><p>But I'm definitely fine with using cfmodule or cf_tagname formats for now.</p><p>I appreciate the assistance on this one...thank you!</p><p>Tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676646">6</a> by Joshua Curtiss
		posted on 2/14/2008 at 12:00 PM
		</div>
		<div class="comment_text"><p>Excuse me if I'm missing the mark here, but don't forget that you CAN group custom tags with directories within your custom tags directory. That grouping will not be reflected in the custom tag name, but your physical files will be organized.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676647">7</a> by Tony Piscotti
		posted on 2/14/2008 at 8:20 PM
		</div>
		<div class="comment_text"><p>So, basically, you're saying I can for have the following type of directory structure:</p><p>/customtags<br>.../subtags1<br>.../subtags2<br>.../subtags3<br>....../subtags3a<br>....../subtags3b</p><p>and as long as my mapping is set for that top-level /customtag directory of that site it will also account for any tags within the subdirectories?</p><p>Just wanted to make sure I understand what you're saying.</p><p>Thanks, Joshua!<br>-Tony</p></div>
	</div>
</div>
		