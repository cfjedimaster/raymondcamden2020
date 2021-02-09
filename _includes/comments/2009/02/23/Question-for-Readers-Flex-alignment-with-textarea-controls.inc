
<div class="comment" id="c_1713713323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713323">1</a> by Kevin Schmidt
		posted on 2/23/2009 at 11:02 PM
		</div>
		<div class="comment_text"><p>Hey Ray, if you add paddingLeft="5" to the VBox, does the red border show further left than the text?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713332">2</a> by Raymond Camden
		posted on 2/23/2009 at 11:06 PM
		</div>
		<div class="comment_text"><p>The vbox already has paddingleft=10. Did you mean to add 5 more?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713334">3</a> by thebouv
		posted on 2/23/2009 at 11:21 PM
		</div>
		<div class="comment_text"><p>As I tweeted to you, I think the TA is aligned fine.  The labels are slightly to the right actually, probably due to font issues.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fthebouv.com%2Ffiles%2FflexTAborder.jpg%3A2y6A5KMKdtCGQm4_ruC2B9b7-cI&amp;cuid=3321886" rel="nofollow noopener" title="http://thebouv.com/files/flexTAborder.jpg">http://thebouv.com/files/fl...</a></p><p>That is with a border on the VBox, no padding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713338">4</a> by Jim Summer
		posted on 2/23/2009 at 11:28 PM
		</div>
		<div class="comment_text"><p>Have you tried reducing the padding right? Just a thought.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713340">5</a> by Raymond Camden
		posted on 2/24/2009 at 12:36 AM
		</div>
		<div class="comment_text"><p>@thebouv - wow, you are right. Is there anyway I can 'push' the text font over?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713341">6</a> by Brian
		posted on 2/24/2009 at 12:58 AM
		</div>
		<div class="comment_text"><p>How about applying some negative margin to the labels?  Something (in CSS) like:</p><p>label: margin-left: -5px;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713339">7</a> by Brian
		posted on 2/24/2009 at 1:01 AM
		</div>
		<div class="comment_text"><p>Of course, you'll probably want to make sure that IE, Moz, and Opera play well with the margin push...They are notoriously finicky about pixel adjustments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713342">8</a> by Raymond Camden
		posted on 2/24/2009 at 1:02 AM
		</div>
		<div class="comment_text"><p>Well, this is Flex, so it shouldn't matter. ;) I tried it though - but it didn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713344">9</a> by Brian
		posted on 2/24/2009 at 1:45 AM
		</div>
		<div class="comment_text"><p>Probably because in CSS a Flex label doesn't really exist...</p><p>How about this?  I wish I could test it, but we have no Flex loaded here...</p><p>&lt;?xml version="1.0" encoding="utf-8"?&gt;<br>&lt;mx:Application xmlns:mx="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2F2006%2Fmxml%3A4hjhY2twhj6ocrP8KGam6QWbZyk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/2006/mxml">http://www.adobe.com/2006/mxml</a>" layout="vertical" horizontalAlign="left"&gt;</p><p> &lt;mx:Style&gt;<br>	  Label { margin-left: -5px; }<br> &lt;/mx:Style&gt;</p><p>   &lt;mx:VBox paddingLeft="10" paddingRight="10" width="80%"&gt;</p><p>      &lt;mx:Label text="First Label" /&gt;<br>      &lt;mx:TextArea borderColor="#ff0000" borderThickness="3"/&gt;<br>      &lt;mx:Label text="Second Label" /&gt;</p><p>   &lt;/mx:VBox&gt;</p><p>&lt;/mx:Application&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713348">10</a> by Steve W
		posted on 2/24/2009 at 4:24 AM
		</div>
		<div class="comment_text"><p>I cannot duplicate the problem you are seeing, but if you want to indent the text of the text area, just add textIndent=2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713346">11</a> by Steve W
		posted on 2/24/2009 at 4:29 AM
		</div>
		<div class="comment_text"><p>I guess I should finish my thought before hitting Post.  The attribute 'textIndent' only indents the first line, while paddingLeft, as a textArea attribute, moves all lines left.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713352">12</a> by Raymond Camden
		posted on 2/26/2009 at 2:34 AM
		</div>
		<div class="comment_text"><p>@Brian: margin-left does nothing for me. :( I added another item (setting color to red) and it did apply the color - just not the margin.</p><p>As it stands - folks - don't worry too much about this. The designer decided to change the UI of the thing in general. Still though - kinda interesting.</p></div>
	</div>
</div>
		