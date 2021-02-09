
<div class="comment" id="c_1713618892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618892">1</a> by Michael Dinowitz
		posted on 6/23/2005 at 11:45 PM
		</div>
		<div class="comment_text"><p>I'd like to mention that if you remove the UUID and replace it with a numeric ID it will help, especially if you run the whole url through a SES setup. I do it and it works (number 2 on google under ColdFusion).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618899">2</a> by Raymond Camden
		posted on 6/24/2005 at 12:05 AM
		</div>
		<div class="comment_text"><p>Do you have any stats on numeric IDs being better than a string based ID? I assume you dont use "id" by itself. One of the Google rules is to not use id=. Also, I really don't want to give up my cross platform (cross db I mean) code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618900">3</a> by Michael Dinowitz
		posted on 6/24/2005 at 12:12 AM
		</div>
		<div class="comment_text"><p>No solid stats other than the fact that before the SES urls were put in we were below number 2, sometimes not even on the front page.</p><p>Are you referring to the UUID for crossplatform? Why can't you use either a DB based auto-number or a CF generated one to do the work. A Blog is not a DB intensive thing when creating records, so a second CFTRANSACTION based query to get the last ID will not have any real overhead.</p><p>I'd love to see <a href="http://disq.us/url?url=http%3A%2F%2Fwww.satanstool.com%2Fentry.cfm%2Fentry%3A255%3AFgoeQ2LqfKgwx-Nys4rbvaG6wuI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.satanstool.com/entry.cfm/entry:255">http://www.satanstool.com/e...</a><br>or the like. Even having everything read through an index.cfm lowers your ranking as you really only have a single file in use. The more files you have adds to the impression with Google that you have more content. SES urls make you look like you have a single file per entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618895">4</a> by Michael Dinowitz
		posted on 6/24/2005 at 12:13 AM
		</div>
		<div class="comment_text"><p>BTW, I've avoided doing all this to your blog software out of respect and time. I'd love to rip it apart and make it into something that Google will love.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618897">5</a> by Raymond Camden
		posted on 6/24/2005 at 12:23 AM
		</div>
		<div class="comment_text"><p>I'll respond to your last comment first. Please do not hold back. I made BlogCFC available to all so folks could use it, rip it apart, etc. You will not offend me if you rewrite every single line (although I'd ask you to use a new name ;).</p><p>As for the autonumber. It could be done. It would mean more code though, and more chances for a problem. You mentioned a CF created autonumber... not to sure what you mean by that.</p><p>Lastly - I don't want to use SES URLs because it tends to be a problem making code to read SES stuff work on multiple types of web servers. I figured since there were server side options (Apache Rewrite, and IISRewrite), I thought it would be a bit of a waste of time since a person could just do it server side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618896">6</a> by Michael Dinowitz
		posted on 6/24/2005 at 12:38 AM
		</div>
		<div class="comment_text"><p>But if I can convince you of the need for features and you impliment them, then its less work and support for me. :)</p><p>When you said cross server portability I assumed you meant DB wise. Personally I hate UUIDs and never use them. If your using them because of a fear that some DBs don't support auto-number, then doing a <br>CFTRANSACTION<br>CFQUERY - get last record ID<br>CFQUERY - Add record with lastid +1<br>close CFTRANSACTION<br>gets you the same thing with little overhead. Yes its extra code, but it's tight.</p><p>As for SES urls, I've got some code which works perfectly on IIS and I'm sure it'll work on Apache as well. Having a switch to use a specific SES method will work just as well as any other switch (i.e. DB) that you may already have in place. The benefits outweigh the switch for web servers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618898">7</a> by Rob Brooks-Bilson
		posted on 6/24/2005 at 1:28 AM
		</div>
		<div class="comment_text"><p>I believe Mike's right about the SES style URLs.  Even though Google is capable of indexing "dynamic" pages, it does appear that it prefers indexing "static" pages.  So, basically instead of each page being a URL parameter, with a SES URL, even though the content is still dynamic, it has the appearance of being a unique directory/file.</p><p>I haven't been able to find any evidence that having a UUID vs. a number for a parameter matters, though.  Except maybe from a human readable standpoint.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618901">8</a> by ike
		posted on 6/24/2005 at 5:50 AM
		</div>
		<div class="comment_text"><p>You can generate a number with CF by using a year-to-second timestamp... #dateformat(now(),"yyyymmdd")##timeformat(now(),"HHmmss")# which is a bit less than half the length of a UUID string, although being a 14 digit number I'm not sure if it would help readability much. Another alternative is to use an epoch date - that is, seconds since Jan. 1, 1970... #datediff("s","1/1/1970",now())# Which may be fewer digits, I'm not sure. But in any case, you're not likely to have two blog entries for the same second... unless you clone yourself of course. :)</p></div>
	</div>
</div>
		