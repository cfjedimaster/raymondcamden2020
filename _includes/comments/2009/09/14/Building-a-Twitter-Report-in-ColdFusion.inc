
<div class="comment" id="c_1713718296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718296">1</a> by Paul
		posted on 9/14/2009 at 6:40 PM
		</div>
		<div class="comment_text"><p>This is pretty much how I collect the results for <a href="http://disq.us/url?url=http%3A%2F%2Fwww.tweettrail.com%3AV-ticsjMPh3Jw6ENzhaqNpFFbb4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.tweettrail.com">http://www.tweettrail.com</a> one thing to watch out for is looping till done.  If twitter has an issue some some reason it will create infinite loops ( yes it happened to me ).  I created some max error counts to break out of the loop if case this occurs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718307">2</a> by Raymond Camden
		posted on 9/14/2009 at 6:41 PM
		</div>
		<div class="comment_text"><p>I believe my max requests will take care of that, won't it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718308">3</a> by Paul
		posted on 9/14/2009 at 6:42 PM
		</div>
		<div class="comment_text"><p>Oh yeah I should never doubt that the Jedi hasn't thought ahead :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718310">4</a> by Paul
		posted on 9/14/2009 at 6:48 PM
		</div>
		<div class="comment_text"><p>Because I found that about 1 in 50ish http requests fail I continue to process ( ie try again ) when I don't get a 200 response but if I get more then X errors per search term I stop the search and dropout as something might be wrong at twitter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718306">5</a> by Raymond Camden
		posted on 9/14/2009 at 6:53 PM
		</div>
		<div class="comment_text"><p>Yeah, mine right now says: If bad, just stop. Although technically if it got N results first those still work. I kinda figured that since it was a search report, and run daily, it didn't need to be anal about retries.</p><p>Do you think it is worthwhile maybe to say, "hey, I failed, but lets try again a few times." I could, on failure, NOT add to HTTP requests, BUT keep a counter of errors, and stop at 3 or some such.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718311">6</a> by Paul
		posted on 9/14/2009 at 7:08 PM
		</div>
		<div class="comment_text"><p>Well I found I had to do that or I'd get results that were really inaccurate and I cache the results for 5 hours so I really didn't want bad data for such a long time.  Perhaps because lots of http:// requests were coming from the same IP/account or that my VPS network caused it to error occasionally who knows.  1 in 50 was a loose guess and it occurred with terms that were really common ie jQuery and I would have to do 50-100+ http requests to get all the data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718375">7</a> by Raymond Camden
		posted on 9/14/2009 at 7:09 PM
		</div>
		<div class="comment_text"><p>Hmm. Well maybe at minimum I should log the errors to get a bit more info when things go wrong. I need to deploy this to my own server, but I'm waiting till part 2 (later this week).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718384">8</a> by AJ
		posted on 9/15/2009 at 11:22 AM
		</div>
		<div class="comment_text"><p>I tested this report, it looks great. I’ve been wanting to list users tweets on my website based on a keyword for a long time.</p><p>These are some suggestions I’d like to see in future reports if possible:</p><p>1. Keywords filtering: I was wondering if there is a way we can filter out inappropriate words within the users’ tweets such as “sex”, the F-word etc.. Basically, if a tweet has an inappropriate tweet, ignore it, do not display it..</p><p>2. Pages Navigation bar at the bottom of the page so we can page maybe 20 pages at a time</p><p>3. Would the report refresh itself automatically? Or the user has to refresh the page in order to see the new recent tweets.</p><p>4. Maybe a search field so a user will have the option to change the search criteria</p><p>I think I am asking too much, lets hope :-)</p><p>Thank you. This is a very good start..</p><p>-AJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718379">9</a> by Raymond Camden
		posted on 9/15/2009 at 3:12 PM
		</div>
		<div class="comment_text"><p>Items 2, 3, and 4 really only work if the report isn't scheduled base. Remember the main idea here was to run this at midnight via a scheduled task. You could use it as a user-runnable page though. To handle 2, you would want to cache the results though. 3 could be done with Ajax. 4 would also work if you cached the results.</p><p>1) is something that I'm going to support in part 2 of this article - kinda. You will see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718378">10</a> by AJ
		posted on 9/15/2009 at 8:29 PM
		</div>
		<div class="comment_text"><p>Thank you Ray! I look forward to seeing Part-2 of this report..</p><p>On a side note, I was wondering if the data we are retrieving from Twitter can be imported into a database such as MS Access which will help me a great deal in formatting my own Reports and tackling my questions in my prior thread, and not to mention that my Reports will always work regardless if Twitter is down since I'll be pulling data from my own database, which should also speed up the retrieval process..</p><p>Sorry for all these questions, I am just throwing ideas. Hope you don’t mind :)</p><p>-AJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718383">11</a> by Raymond Camden
		posted on 9/15/2009 at 8:33 PM
		</div>
		<div class="comment_text"><p>You absolutely could import it into a DB, and then do trending, which will mesh will with part 2. (I'm thinking maybe to be posted Wednesday.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718377">12</a> by AJ
		posted on 9/15/2009 at 8:35 PM
		</div>
		<div class="comment_text"><p>By the way, how do I change my Avatar in this Blog? I didn't see an option to upload my own when I post my comments..</p><p>Thx.<br>-AJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718392">13</a> by Raymond Camden
		posted on 9/15/2009 at 8:36 PM
		</div>
		<div class="comment_text"><p>Its a Gravatar. Go to <a href="http://disq.us/url?url=http%3A%2F%2FGravatar.com%3AtvFghmc7ClK-IaIldQBFTQEAfsM&amp;cuid=3321886" rel="nofollow noopener" title="Gravatar.com">Gravatar.com</a> and you can upload a picture there. Many services make use of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718394">14</a> by Aaron Longnion
		posted on 9/16/2009 at 12:27 PM
		</div>
		<div class="comment_text"><p>Thanks as always Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718381">15</a> by Ben Nadel
		posted on 9/16/2009 at 5:42 PM
		</div>
		<div class="comment_text"><p>Awesome post. And a very cool idea!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718380">16</a> by Raymond Camden
		posted on 9/16/2009 at 5:44 PM
		</div>
		<div class="comment_text"><p>Bah, this is nothing! Wait to the next one! ;) (Which I need to make time for @ lunch.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718376">17</a> by Emmet McGovern
		posted on 9/16/2009 at 5:49 PM
		</div>
		<div class="comment_text"><p>Even more gooder...</p><p>Name your class  .twit_0 and .twit_1</p><p>class="twit_#x mod 2#"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718385">18</a> by Raymond Camden
		posted on 9/16/2009 at 5:50 PM
		</div>
		<div class="comment_text"><p>@Emmet: Yeah, I know that, I just don't like the ugly CSS names. Picky - I know. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718388">19</a> by Ben Nadel
		posted on 9/16/2009 at 5:50 PM
		</div>
		<div class="comment_text"><p>Ha ha, awesome - can't wait.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718382">20</a> by Emmet McGovern
		posted on 9/16/2009 at 5:57 PM
		</div>
		<div class="comment_text"><p>Bah...  ugly.  You know I have to comment on your padawan designer skills any way I can.  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718390">21</a> by Raymond Camden
		posted on 9/16/2009 at 5:59 PM
		</div>
		<div class="comment_text"><p>Yeah I'm actually surprised you let me get by with that CSS snobbishness. You know my design skills well. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718387">22</a> by Raymond Camden
		posted on 9/16/2009 at 8:00 PM
		</div>
		<div class="comment_text"><p>Warning. There is a bug in this code. I lost the SINCE attribute when building up the link. I've fixed this in my new report code (blog post at lunch), but to fix it, change these lines:</p><p>&lt;cfset yesterday = dateAdd("d", -1, now())&gt;<br>&lt;cfset searchURL = search &amp; " since:#dateFormat(yesterday,'yyyy-mm-dd')#"&gt;<br>&lt;cfset searchURL = urlEncodedFormat(searchURL)&gt;</p><p>Specifically the 3rd line was urlEncoding search, not searchURL. This is NOT fixed in the zip, but my next blog entry will include both reports and will have fixed code in both.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718391">23</a> by AJ
		posted on 9/26/2009 at 12:59 AM
		</div>
		<div class="comment_text"><p>Greetings -</p><p>I haven't seen any updates recently, just wondering if there are more features coming.. Thx.</p><p>-AJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718386">24</a> by Raymond Camden
		posted on 9/26/2009 at 1:02 AM
		</div>
		<div class="comment_text"><p>Did you not see part 2?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F9%2F16%2FBuilding-a-Twitter-Report-in-ColdFusion-Part-2%3AhZ3bAFpi7jjd9mvjALwrnv_6H5I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/9/16/Building-a-Twitter-Report-in-ColdFusion-Part-2">http://www.coldfusionjedi.c...</a></p><p>Part 2 involved robots, snakes, and giant armadillos. Really. Well, maybe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718389">25</a> by egemen
		posted on 11/16/2011 at 1:48 PM
		</div>
		<div class="comment_text"><p>Raymond is a great and wise human.because he share information.thank you raymond.</p></div>
	</div>
</div>
		