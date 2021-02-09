
<div class="comment" id="c_1713746381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746381">1</a> by Raymond Camden
		posted on 5/8/2013 at 11:51 PM
		</div>
		<div class="comment_text"><p>P.S. To be clear, I told em more than this. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746399">2</a> by Jim O&amp;aposKeefe
		posted on 5/9/2013 at 12:13 AM
		</div>
		<div class="comment_text"><p>Does selling unit testing to your client imply that testing your code costs more than not testing your code? I'm not sure that I agree with the premise or that I would involve the client in that decision.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746396">3</a> by Jim O&amp;aposKeefe
		posted on 5/9/2013 at 12:15 AM
		</div>
		<div class="comment_text"><p>But I did like your example, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746402">4</a> by Raymond Camden
		posted on 5/9/2013 at 12:22 AM
		</div>
		<div class="comment_text"><p>The issue he was running into was selling the fact that it costs more. To me, I consider unit testing as just "part" of the whole. It isn't done w/o tests. Will it run w/o? Sure. Maybe. I'd even argue you simply include it in your estimates as an assumption. If I give you an estimate of 2 hours, I'm not going to break it down to the detail of, "I'll spend 5 minutes naming variables" and "I'll spend 30 minutes tabbing instead of spacing." That level of detail isn't necessary for the client. I think we (we being the greater dev community) maybe need to get to a point where it is just plain assumed that you're going to test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746384">5</a> by Sean Corfield
		posted on 5/9/2013 at 3:06 AM
		</div>
		<div class="comment_text"><p>I know you're just talking about testing - and mostly after the fact - but if you use TDD / BDD where you write the tests before you write production code, you can often use those tests to illustrate your understanding of the requirements and communicate with your client to ensure you create the code they want.</p><p>The terminology of BDD (vs TDD) usually makes that easier because it's in the form of "Given (some situation) When (the user does something) Then (the result should be...)" and you can write these expectations at a high level that uses business terminology.</p><p>That in turn guides your development to follow the business more closely.</p><p>I agree that we should just be building this into our estimates and process without needing to "sell" testing as a separate piece of work!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746385">6</a> by Raymond Camden
		posted on 5/9/2013 at 3:35 AM
		</div>
		<div class="comment_text"><p>Great points Sean. To be honest, i always felt like writing the tests first seemed like overkill, but the concept of using it to ensure you understand what the API is supposed to do is... well obvious I guess... but I just didn't think about it in that way. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746387">7</a> by Sean Corfield
		posted on 5/9/2013 at 4:38 AM
		</div>
		<div class="comment_text"><p>We've been developing a REST API recently and used a BDD framework to create it "test first". The REST API is written in CFML but the test suite is written in Clojure. A typical test might be:</p><p>(given (some-api-call-without-credentials)<br>  (expect :http-status 403))</p><p>(given (some-valid-api-call)<br>  (expect :http-status 200<br>          :photoCount 15))</p><p>Given an API call<br>Expect the following things to be true of the result</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746388">8</a> by Richard Hughes
		posted on 5/9/2013 at 6:20 PM
		</div>
		<div class="comment_text"><p>I am working a side project, that is as ad-hoc as it gets. I came up with a completely correct solution for a problem I miss-understood. I requested the client to write the test in text. The solution passes if x condition, fails in y condition. This is the data we used for the test...</p><p>IDK if I could get them to budget for unit testing &amp; regression testing. I'd like to.</p><p>I like the un-tested budget airline answer!</p><p>I use selenium to aide in my dev testing when it is mulltiple forms &amp; steps to get to what I am working on. This saves me time in development, logging in, filling forms... I could pass it on to the QA team when I am complete.</p><p>Most places that I have worked, had QA teams, but they followed scripts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746386">9</a> by Phillip Senn
		posted on 5/9/2013 at 7:36 PM
		</div>
		<div class="comment_text"><p>I think a lot of programming is proof-of-concept, so you can't ask people to write tests for something that they're trying to get to work for the first time to begin with.</p><p>If you're comfortable with the language, then you've leveled up to writing unit tests in addition to the original code.</p><p>I know that in my case, the minute that I get something to work, I've got the next task to do, so writing tests becomes an afterthought.</p><p>But that being said, I am a proponent of testing, or what I call diagnostics.  Something goes bump in the night, you want to know if everything is alright.  I tell my students "You're in a submarine and something goes "bang!".  What do you do?"</p><p>The answer is that you would want to see a board of buttons, any of which would be lit up if something were wrong in that compartment.</p><p>But this requires someone to be looking at the board of buttons all the time.  In the old days, that was a computer operator in the glass encased computer room.</p><p>There's a difference between production tests and development TDD.</p><p>BTW, I'm agreeing with you, in case it sounds like I'm not.</p></div>
	</div>
</div>
		