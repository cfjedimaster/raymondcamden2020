
<div class="comment" id="c_1713681595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681595">1</a> by todd sharp
		posted on 6/6/2008 at 6:41 PM
		</div>
		<div class="comment_text"><p>Adrock posted a demo using LCDS - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adrocknaphobia.com%2Fpost.cfm%2Fcoldfusion-demos-v-2%3ALue25LEPt_rAPrIx9KZHwnrurng&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adrocknaphobia.com/post.cfm/coldfusion-demos-v-2">http://www.adrocknaphobia.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681596">2</a> by João Fernandes
		posted on 6/6/2008 at 6:43 PM
		</div>
		<div class="comment_text"><p>Ray, there is always the possibility to use AJAX Data Services which will provide messaging support for AJAX clients. If LCDS price is a problem, messaging is also available with BlazeDS.<br>The advantage with BlazeDS/LCDS is that you don't have to worry about how to implement the full polling system.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681587">3</a> by Raymond Camden
		posted on 6/6/2008 at 6:44 PM
		</div>
		<div class="comment_text"><p>@JF: From what I understand, and please correct me if wrong, the Ajax DS _still_ uses Flash. Right? I mentioned in the blog post that we were assuming 100% Ajax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681589">4</a> by Raul Riera
		posted on 6/6/2008 at 6:56 PM
		</div>
		<div class="comment_text"><p>Currently CFWINDOW is beign displayed BEHIND flash movies on Windows IE 7 and Windows Fireforks. Why is this happening? On IE6 or MAC it shows fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681581">5</a> by João Fernandes
		posted on 6/6/2008 at 6:57 PM
		</div>
		<div class="comment_text"><p>sorry Ray, yes, you are right, it needs a small invisible swf which does the bridge between them. Sorry, missed the 100% ajax solution. My bad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681588">6</a> by joshua cyr
		posted on 6/6/2008 at 7:00 PM
		</div>
		<div class="comment_text"><p>@raul Most likely the flash movie needs to have wmode set to transparent or opaque.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681602">7</a> by Raymond Camden
		posted on 6/6/2008 at 7:03 PM
		</div>
		<div class="comment_text"><p>@JF - no worry - and I should have mentioned that option anyway (like I pushed him to Flex/LDS)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681597">8</a> by Mat Evans
		posted on 6/6/2008 at 7:52 PM
		</div>
		<div class="comment_text"><p>Isn't this sorta thing what COMET was designed for? Pretty sure the facebook messenger isn't using polling, too inefficient as the messages come through strait away, though I could be wrong.</p><p>Mat</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681598">9</a> by Rob Brooks-Bilson
		posted on 6/6/2008 at 8:58 PM
		</div>
		<div class="comment_text"><p>You can do this with Ajax and a JMS gateway as well, if you don't want to use LCDS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681590">10</a> by Rob
		posted on 6/26/2008 at 3:43 AM
		</div>
		<div class="comment_text"><p>Once again, you have come up with the goods! I have used the first section of code as is then added a cfc powered query on the second page that polls new for new messages in my IM application. There is a discussion of other technologies, in you comments, that make the process simpler - why? I can't image the process woul get any simpler/cleaner/obvious than the one yo have provided.</p><p>Thanks again<br>rob</p></div>
	</div>
</div>
		