
<div class="comment" id="c_1713620612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620612">1</a> by Leif
		posted on 9/7/2005 at 8:48 PM
		</div>
		<div class="comment_text"><p>you *really* need to consider placing these into separate entries... that way the topic/subject will get pushed up in your google rankings!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620613">2</a> by Tom Mollerus
		posted on 9/7/2005 at 9:27 PM
		</div>
		<div class="comment_text"><p>Regarding using the Enter key to submit a form: remember that in some browsers (IE on the Mac comes to mind) using the Enter key means that you may not get the name of the button submitted as a form scope variable. Since I often look for the name of the button in the form scope, my form code may not process correctly in such instances.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620611">3</a> by Damien
		posted on 9/7/2005 at 9:27 PM
		</div>
		<div class="comment_text"><p>&gt; Is there a way to set a submit button to be the<br>&gt; default when you hit the enter key?</p><p>Excluding cfform and cfgrid for a moment... In regular forms this is controlled by two things: the order in which the submittable input fields (submit/button/image/reset) appear, and the tabindex of each submittable field.  Basically when you hit Enter in most browsers the first submittable input is activated, regardless of whether its specifically a type="submit", type="image", etc, they're all considered the same in this regard.  If you wish to change the order this happens you need to set tabindexes for each field, then the submittable field with the lowest tabindex is what gets activated.  These particularly come into play when you have large forms with several buttons with Javascript actions, or are using CSS to move your fields around.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620616">4</a> by Raymond Camden
		posted on 9/7/2005 at 9:49 PM
		</div>
		<div class="comment_text"><p>Leif, normally I would, but I felt these questions were short and simple so it wouldn't really make much sense to have a bunch of tiny entries. Normally I care a _lot_ about Google, but in this case I do not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620617">5</a> by Connie Decinko
		posted on 9/8/2005 at 12:51 AM
		</div>
		<div class="comment_text"><p>I get an error when submitting a question:  File not found: /morpheus/blog/index.cfm</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620615">6</a> by Raymond Camden
		posted on 9/8/2005 at 12:55 AM
		</div>
		<div class="comment_text"><p>What browser? I can't reproduce the error. Oh... are you going to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.camdenfamily.com%2Fmorpheus%2Fblog%3A99JQqxG-XLjNRG_5veeFCtqi3Mk&amp;cuid=3321886" rel="nofollow noopener" title="www.camdenfamily.com/morpheus/blog">www.camdenfamily.com/morphe...</a>, or <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%3F%3A0xtIYc20FXQo8clS8Y6qqPOt4gw&amp;cuid=3321886" rel="nofollow noopener" title="ray.camdenfamily.com?">ray.camdenfamily.com?</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620619">7</a> by Tim Lux
		posted on 9/8/2005 at 1:06 AM
		</div>
		<div class="comment_text"><p>I get that error too... when asking a question from <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%3AD4cy8FVphGxHWryjM6-uPIcT7Vg&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm">http://ray.camdenfamily.com...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620624">8</a> by Tim Lux
		posted on 9/8/2005 at 1:07 AM
		</div>
		<div class="comment_text"><p>Another question--is is possible to jump to a specific accordion page from outside the cfform document? Im wondering how to open a specific accordion page upon page load if that is possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620623">9</a> by Raymond Camden
		posted on 9/8/2005 at 1:10 AM
		</div>
		<div class="comment_text"><p>wierd - what browser?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620618">10</a> by Raymond Camden
		posted on 9/8/2005 at 1:13 AM
		</div>
		<div class="comment_text"><p>I do not believe you can manipulate the form from outside the  flash form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620622">11</a> by Connie Decinko
		posted on 9/8/2005 at 1:22 AM
		</div>
		<div class="comment_text"><p>I've been all over the web this week and can't find any sample code showing how to use multiple queries or a struct in a single CFForm.  Seems the repeater panel pukes on structs.  I want to display the full record of a user when selected from a data grid, and a list of categories they are part of, coming from a different table.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620621">12</a> by Raymond Camden
		posted on 9/8/2005 at 1:26 AM
		</div>
		<div class="comment_text"><p>Right - the repeater will choke on a struct. You need to pass it a query. As for your particular item, showing user details when a person clicks - that is very doable. Does your original query, the one put in cfgrid, contain the user info? If so, it won't be a problem. If the data isnt' connected - I'd ask, why? You can rewrite your query to join them. Or you could modify the original query before passing it to cfform.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620620">13</a> by Tim Lux
		posted on 9/8/2005 at 1:39 AM
		</div>
		<div class="comment_text"><p>IE6 - standard flavor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620625">14</a> by Bob L.
		posted on 9/8/2005 at 4:23 PM
		</div>
		<div class="comment_text"><p>Regarding the drag and drop behavior in cfform:</p><p>This is possible in flash forms( without installing flex).For an example check out the MXNA reader they build over at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.ASFUSION.com%2Fmxna%3AjI-MwGWQVgVmhs-__iOCwNfw3to&amp;cuid=3321886" rel="nofollow noopener" title="www.ASFUSION.com/mxna">www.ASFUSION.com/mxna</a>. You can drag an drop an entry into the favourites section, pretty cool</p></div>
	</div>
</div>
		