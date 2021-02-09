
<div class="comment" id="c_1714081469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081469">1</a> by John Bliss
		posted on 1/18/2014 at 3:40 AM
		</div>
		<div class="comment_text"><p>&gt; a private listserv of ColdFusion developers</p><p>Details? How private?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081470">2</a> by Andrew Scott
		posted on 1/18/2014 at 9:13 AM
		</div>
		<div class="comment_text"><p>But I have one question, is there any reason why these settings can not also be set at the application layer as well. For example shared hosting and those who run multiple sites for their clients, could benefit from the ability to just switch on the logging for that application only as well as where to store these log files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081474">3</a> by Sumit Verma
		posted on 1/18/2014 at 10:08 AM
		</div>
		<div class="comment_text"><p>Ya, I got bitten by it few time. Do you know if there is an ER already logged for this for CF 11?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081473">4</a> by Ryan Guill
		posted on 1/18/2014 at 6:51 PM
		</div>
		<div class="comment_text"><p>Yeah, we have been bitten as well. On one server it got to &gt; 70gb before we discovered it, and on another we forgot to turn that setting off when we went to production on a legacy server without a lot of disk space and didn't remember until it had filled the disk up with &gt; 100gb in that one file.</p><p>I agree as well that the application level setting should control it, or at very least have an admin level setting.</p><p>If someone discovers or creates an ER let me know, I would like to vote for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081472">5</a> by Raymond Camden
		posted on 1/18/2014 at 8:02 PM
		</div>
		<div class="comment_text"><p>@john: Sorry, I can't.<br>@andrew: I agree. :)<br>@Sumit: Yes - it should already be corrected in 11.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081475">6</a> by Adam Cameron
		posted on 1/19/2014 at 2:50 AM
		</div>
		<div class="comment_text"><p>John, Ray's almost certainly talking about the ColdFusion 11 Pre-Release programme. People on it like to be secretive about their membership of it despite there being no reason to be (it's *not* part of the NDA they... and I... all signed).</p><p>What they *can't* repeat is the discussions that go on there. I can only presume Ray got special sanction to raise this here. Otherwise this blog post *would* be breaking the NDA...</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081476">7</a> by Andrew Scott
		posted on 1/19/2014 at 4:24 AM
		</div>
		<div class="comment_text"><p><a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3695877%3AyC3uuepouhCnkDhBMcO-6v70UN8&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3695877">https://bugbase.adobe.com/i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081479">8</a> by Raymond Camden
		posted on 1/19/2014 at 7:39 AM
		</div>
		<div class="comment_text"><p>Adam, it really wasn't relevant - that's why I didn't specify the listserv. It wasn't part of me trying to be secretive - it just didn't matter.</p><p>Andrew, thanks - voting it up now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081480">9</a> by Andrew Scott
		posted on 1/19/2014 at 8:15 AM
		</div>
		<div class="comment_text"><p>No problem Ray, I am just surprised something like this has not been raised before.</p><p>On a side note, while talking about ORM &amp; Logging... Does anyone have any actual stats, to show how much overhead logging can add to the request?</p><p>I am trying to gauge how slow is too slow, when it comes to CF-ORM.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081478">10</a> by Pat Branley
		posted on 1/20/2014 at 4:35 AM
		</div>
		<div class="comment_text"><p>Another 'problem'</p><p>log4j.appender.HIBERNATECONSOLE.File=/opt/coldfusion10/cfusion/logs/hibernatesql.log</p><p>so this means its logging to the default instances log folder. However, if you are running multi instance CF10, then this is logging to the wrong instance folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081481">11</a> by Sam Farmer
		posted on 1/20/2014 at 6:51 PM
		</div>
		<div class="comment_text"><p>Thanks for posting Ray (my blog has retired). Though I thought the first rule of fight club was...etc, etc.</p><p>Adam, Andrew: There is a bug out there for this:<br><a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3588717%3AJjMEJdRXZvGfZxh0Hw6S8qYckiw&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3588717">https://bugbase.adobe.com/i...</a></p></div>
	</div>
</div>
		