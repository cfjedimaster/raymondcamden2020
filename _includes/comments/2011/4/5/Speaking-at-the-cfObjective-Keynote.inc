
<div class="comment" id="c_1713731462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731462">1</a> by Matthew Bruenner
		posted on 4/6/2011 at 9:33 PM
		</div>
		<div class="comment_text"><p>First off, a huge congrats on the speaker gig with Cf Objective. I wish I could afford to go to those events because I know they are awesome.</p><p>I wanted to suggest to you an idea since I know how connected you are with the Adobe team.  Is it at all possible to add in a PLEASE keyword to the CFTRY/CFCATCH api?  And to keep with the proper naming convention it might even make sense to call it CFPLEASE.  And here's what I think it would be for.......</p><p>Basically, when your app gets an error and you snag it with CFTRY/CFCATCH if someone does something in the application during that process that would actually make that code work again, you could ask ColdFusion to PLEASE TRY again before you get a final exception and basically just give up and put the error on your screen.</p><p>It could be a really good fit and I was hoping you might be able to pull some strings and get that in front of the ColdFusion team for me, at least suggesting it.  Thoughts on CFPLEASE?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731441">2</a> by Raymond Camden
		posted on 4/6/2011 at 9:40 PM
		</div>
		<div class="comment_text"><p>I've never heard of PLEASE before as a exception handling thing. Does it work in any other language?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731459">3</a> by Matthew Bruenner
		posted on 4/6/2011 at 9:54 PM
		</div>
		<div class="comment_text"><p>Hi Ray!!!</p><p>In other languages, I don't know I only do ColdFusion and have since version 6 and I learned with your book!!  So I don't know for sure it might be something that would be unique and useful for ColdFusion.  There are times when it will work right directly after the error happens and this would be a useful way to ask CF to give it a try before it gives up.  CFPLEASE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731461">4</a> by Raymond Camden
		posted on 4/6/2011 at 9:56 PM
		</div>
		<div class="comment_text"><p>Well, there is FINALLY support. This always runs. You could do something like PLEASE there. You wouldn't want to re-copy the code in the TRY block of course, but you could do some other process to let CF knows it should rerun the attempt. Perhaps even a cflocation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731460">5</a> by Raymond Camden
		posted on 4/6/2011 at 9:56 PM
		</div>
		<div class="comment_text"><p>I can say that the 'standard' way to request something is to use the public bug tracker to make an ER (enhancement request):</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%3A_X3SytQfggPoTF_n55sEsA7v1EA&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731463">6</a> by Matthew Bruenner
		posted on 4/6/2011 at 10:10 PM
		</div>
		<div class="comment_text"><p>This is actually really really good to read because I had suggested that we do something after the first exception like redirect to another script to handle further logic and stuff and I was chastised for sending a header to the browser or something like that during an exception.  Our whole business reads your blog so this is like a huge justification for me right now! :)  Thank you Ray, great idea!</p></div>
	</div>
</div>
		