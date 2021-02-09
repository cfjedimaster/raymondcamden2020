
<div class="comment" id="c_1713676824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676824">1</a> by Chad
		posted on 2/1/2008 at 9:12 PM
		</div>
		<div class="comment_text"><p>Or when you are developing code that uses a SQL delete and you run the page and it takes WAY longer then it should.  Then you really wish you had setup a development SQL server intead of testing the code on the production database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676840">2</a> by Ben Nadel
		posted on 2/1/2008 at 9:13 PM
		</div>
		<div class="comment_text"><p>Rule #1 for dumping queries with debugging purposes... use TOP attribute.</p><p>I learned this lesson when debugging reports :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676838">3</a> by Hakki
		posted on 2/1/2008 at 9:23 PM
		</div>
		<div class="comment_text"><p>So what.. It is your development server and you are the ONLY one on it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676839">4</a> by joel
		posted on 2/1/2008 at 9:25 PM
		</div>
		<div class="comment_text"><p>Ah, the old Cartesian product. Don't you just love it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676843">5</a> by Tom K
		posted on 2/1/2008 at 9:48 PM
		</div>
		<div class="comment_text"><p>Or when you forget the WHERE clause in DELETE * from....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676844">6</a> by Akira
		posted on 2/1/2008 at 9:48 PM
		</div>
		<div class="comment_text"><p>I usually try to run the queries in a query analyzer before running them in CF... isql has a stop button that comes in rather handy sometimes. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676847">7</a> by luke
		posted on 2/2/2008 at 12:54 AM
		</div>
		<div class="comment_text"><p>updating an advertiser's phone number without the 'where' clause on a very popular classified site... thats one hot number for the evening...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676850">8</a> by robert
		posted on 2/2/2008 at 1:19 AM
		</div>
		<div class="comment_text"><p>my favorite SQL tip for testing queries is to surround all SQL within a transaction in query analyzer.<br>EX:</p><p>BEGIN TRAN</p><p>DELETE....</p><p>SELECT.... (this to see that my previous delete did what I thought it should)</p><p>ROLLBACK TRAN</p><p>Once I am happy with the results I can just change the ROLLBACK TRAN to a COMMIT TRAN.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676848">9</a> by Scott Bennett
		posted on 2/2/2008 at 2:06 AM
		</div>
		<div class="comment_text"><p>@Tom K,</p><p>LOL! yeah that happened to me once on a production system when I was an inexperienced programmer... I Deleted all the orders from the system... then scrambled for the half hour restoring the database (fortunately I had a good back up plan in place and we only lost a few minutes worth of orders). There's a lesson you only want to learn once. Now I always verify any manually written delete statements with a select statement first, then change the "select *" to "Delete" once I'm satisfied I am deleting the right records. Even still I usually feel some "query anxiety" where I flash backs of my 1 and only mistake in that area, and knock on the wood of my desk before I click "execute" =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676851">10</a> by shag
		posted on 2/2/2008 at 3:26 AM
		</div>
		<div class="comment_text"><p>i once ran a delete on a really big (data warehouse) table.  after a few minutes i thought something was up.  then i realized the where clause was incorrect.  hit stop and waited for a few more minutes... fortunately the conditions were so off it was only doing a table scan, but nothing got deleted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676829">11</a> by Camilo
		posted on 2/5/2008 at 9:49 PM
		</div>
		<div class="comment_text"><p>Or when you are developing code that uses a SQL , and testing a mail form, and you have 100000 emails in your box!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676827">12</a> by Dumberer
		posted on 2/6/2008 at 12:33 AM
		</div>
		<div class="comment_text"><p>Back in CF4 days, I did this:</p><p>select email from users, agencies</p><p>cfmail to:#email# ......</p><p>ouch.  &gt;50K emails.  my bad!</p><p>Fortunately I made a SECOND error and accidentally sent all of them to myself....</p><p>yeah.</p></div>
	</div>
</div>
		