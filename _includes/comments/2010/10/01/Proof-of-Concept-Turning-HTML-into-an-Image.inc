
<div class="comment" id="c_1713726758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726758">1</a> by Josh Tischer
		posted on 10/1/2010 at 10:23 PM
		</div>
		<div class="comment_text"><p>Could't you use javascript before the submission to get the height and width of the div container? then pass that along so the cropping can be appropriate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726760">2</a> by Andrew Duvall
		posted on 10/1/2010 at 10:57 PM
		</div>
		<div class="comment_text"><p>@Josh<br>yes and no,<br>you could do that for the cropping part, which is the 2nd of two things going on here.  The first part however, which is turning the HTML into a PDF in the first place also needs some way to know the the height and width of the content in the PDF being generated via the cfdocument tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726763">3</a> by Andrew Duvall
		posted on 10/1/2010 at 11:24 PM
		</div>
		<div class="comment_text"><p>disregard my last comment.  My head was somewhere else.  yes if you already had a Div existing on the page, yes you could get the Height and Width and pass that into both the cfdocument tag as well as the imageCrop() function.</p><p>Actually, If i could only find a way to get around the forced white background issue, i was going to take this prototype and put it into a remote function for additional ajax stuff; so Height and Width would have been attributes passed in via JS like you suggested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726757">4</a> by Josh Tischer
		posted on 10/1/2010 at 11:48 PM
		</div>
		<div class="comment_text"><p>what about rendering the content in canvas first, then you could have a transparent png if you wanted..</p><p>quick googling..<br><a href="http://disq.us/url?url=http%3A%2F%2Fajaxian.com%2Farchives%2Fcrazy-times-rendering-html-in-canvas%3AACZezRSL1H6hOmwFeB1liDIE3PI&amp;cuid=3321886" rel="nofollow noopener" title="http://ajaxian.com/archives/crazy-times-rendering-html-in-canvas">http://ajaxian.com/archives...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726762">5</a> by Andrew Duvall
		posted on 10/2/2010 at 8:10 PM
		</div>
		<div class="comment_text"><p>@Josh,<br>that canvas project seems quite interesting and in my brief testing, i verified that in fact the background is transparent.  However, I felt it was lacking some necessities... For example, the demo doesn't work in i.e7 or i.e8.  and it looks like currently the only html tags supported for parsing are the following tags: HTML, BODY, P, B, and SPAN.</p><p>the fck_editor generates &lt;strong&gt; instead of &lt;b&gt;  and many other tags.  So, to implement this type of solution would require building onto the list of tags supported and I'm not even sure how the css styles would come into play.</p><p>For me, I'm going to shy away from this since it doesn't seem cross-browser compatible (FF 3.5+ and Webkit based browsers only)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726759">6</a> by Edy Ionescu
		posted on 10/4/2010 at 3:37 PM
		</div>
		<div class="comment_text"><p>This would be really cool if it could be extended to webpage screenshot generation. Unfortunately, grabbing the HTML source code isn't enough if the list of cfdocument supported CSS styles is not complete.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726764">7</a> by Raymond Camden
		posted on 10/4/2010 at 3:53 PM
		</div>
		<div class="comment_text"><p>I've actually blogged this before. cfdocument supports sourcing to a url. Makes it pretty simple. As you say - it isn't "modern browser" compat, but it looks close enough.</p></div>
	</div>
</div>
		