
<div class="comment" id="c_1713650600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650600">1</a> by jimjay
		posted on 3/1/2006 at 8:51 PM
		</div>
		<div class="comment_text"><p>Is Chuck Norris in this TB list? - You would have to be a gamer to get this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650594">2</a> by todd
		posted on 3/2/2006 at 12:53 AM
		</div>
		<div class="comment_text"><p>Thanks for this ray...i've been getting killed with tb spam lately...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650602">3</a> by Raymond Camden
		posted on 3/2/2006 at 12:56 AM
		</div>
		<div class="comment_text"><p>Make sure you have the latest build. It had some additional spam blocking code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650593">4</a> by tony of the weeg clan
		posted on 3/2/2006 at 4:55 AM
		</div>
		<div class="comment_text"><p>i figured out the BEST WAY to do this... disabled trackbacks :)</p><p>since i cannot figure out what they do or why i would want them, i just killed them.</p><p>ray, what are they for anyway?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650596">5</a> by Raymond Camden
		posted on 3/2/2006 at 7:15 PM
		</div>
		<div class="comment_text"><p>A TB is simply a way of saying, "Hey, I wrote about your blog entry, and here is my entry."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650604">6</a> by Jeff Gladnick
		posted on 3/28/2006 at 11:27 PM
		</div>
		<div class="comment_text"><p>I wanted to let our users upload images easily to the blog, so i just used the existing enclosure option Ray built, and i added the following code the index.cfm file, around line 217, right at the end of the part where it displays the blog body:</p><p>&lt;!--- added 3/28/2006 by jeff gladnick; this will display the enclosure at the bottom of the blog entry as an image if the enclosure is a jpg/gif/png ---&gt;<br>		&lt;cfif len(enclosure)&gt;<br>			&lt;cfif Right(urlEncodedFormat(getFileFromPath(enclosure)), 3) EQ "jpg" OR Right(urlEncodedFormat(getFileFromPath(enclosure)), 3) EQ "gif" OR Right(urlEncodedFormat(getFileFromPath(enclosure)), 3) EQ "PNG"&gt;<br>			&lt;img src="#application.rooturl#/enclosures/#urlEncodedFormat(getFileFromPath(enclosure))#"&gt;<br>			&lt;/cfif&gt;		<br>		&lt;/cfif&gt;</p><p>That is just a simple check to see what the file extension is, and if its a jpg/gif/png, it will display it  right after the blog message.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650587">7</a> by Gijs Leussink
		posted on 3/30/2007 at 3:49 PM
		</div>
		<div class="comment_text"><p>If you're interested in using another way in fighting spam, look at 'Distributed approaches' in the 'Comment spam' on Wikipedia. <a href="http://disq.us/url?url=http%3A%2F%2FLinkSleeve.org%3A_w-m_l-KcRQqO8-qZHYVHYoAr9w&amp;cuid=3321886" rel="nofollow noopener" title="LinkSleeve.org">LinkSleeve.org</a> and <a href="http://disq.us/url?url=http%3A%2F%2FAkismet.com%3AmEjQk2q4Qxd6-AU7Jx9AjmIbZKY&amp;cuid=3321886" rel="nofollow noopener" title="Akismet.com">Akismet.com</a> are names appearing there. Akismet is AFAIR free for open source tools.<br>LinkSleeve is free. I wrote a small CFC to communicate with it. If you'd like to do something with the CFC I wrote, send me a message.</p></div>
	</div>
</div>
		