
<div class="comment" id="c_1713716024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716024">1</a> by Nick
		posted on 6/10/2009 at 10:02 PM
		</div>
		<div class="comment_text"><p>This is a very slick tip. I've done something similar with images and categories (not just making folders by date). I guess I did not do the mental math to know that CF would handle the folder creation if 2 of the 3 parts already existed, but its one of those "of course it will" moments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716023">2</a> by Raymond Camden
		posted on 6/10/2009 at 10:05 PM
		</div>
		<div class="comment_text"><p>Nick - to be clear, I did NOT think it would. Maybe it didn't in CF7 or 6. I seem to remember having to 'walk the path', in fact, I was planning on it for the blog entry. If someone is on 7 or 6 and wants to test, I'd love to see it. And if you and I right that it changed, I'll do an example of that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716027">3</a> by Eric Cobb
		posted on 6/10/2009 at 11:00 PM
		</div>
		<div class="comment_text"><p>Wow!  You're right.  I just did a quick test on CF 8 where I created a directory with 3 other directories inside of it.  I know for a fact that this didn't work before, because I've had to create a java object and use mkdirs() to get it to work in the past.  But, at that time we were actually running CF 6, 7, and 8 servers so I don't remember which one it was....</p><p>Good find!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716032">4</a> by Gary Funk
		posted on 6/10/2009 at 11:07 PM
		</div>
		<div class="comment_text"><p>CF7 will create the necessary directories.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716025">5</a> by Raymond Camden
		posted on 6/10/2009 at 11:18 PM
		</div>
		<div class="comment_text"><p>Someone want to find a CF6 server and test? I think we can stop there and not worry about CF5. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716028">6</a> by Daniel Sellers
		posted on 6/10/2009 at 11:50 PM
		</div>
		<div class="comment_text"><p>Just tested on CF 6 and while the fileMove breaks it creates the file structure perfectly. Even if part of it has already been created.</p><p>Must have been 5 or 4 that had problems with walking directory structure...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716031">7</a> by Raymond Camden
		posted on 6/10/2009 at 11:53 PM
		</div>
		<div class="comment_text"><p>Thanks for testing Daniel, Gary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716026">8</a> by sam Farmer
		posted on 6/11/2009 at 1:00 AM
		</div>
		<div class="comment_text"><p>This is like two ColdFusion Quickies in one entry: <br>- the slick example<br>- and finding out cfdirectory will create more than one directory</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716029">9</a> by Raymond Camden
		posted on 6/11/2009 at 1:10 AM
		</div>
		<div class="comment_text"><p>@sam: I am aim to please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716030">10</a> by dickbob
		posted on 6/11/2009 at 1:51 AM
		</div>
		<div class="comment_text"><p>Hey, why not use DateFormat(Now(),"yyyy/mm/dd") for the date part of the pathname?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716034">11</a> by Raymond Camden
		posted on 6/11/2009 at 1:54 AM
		</div>
		<div class="comment_text"><p>Because that would be simpler. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716033">12</a> by Pragnesh Vaghela
		posted on 6/11/2009 at 9:07 PM
		</div>
		<div class="comment_text"><p>Posting this solution in case you have a ton of files to organize: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.37signals.com%2Fsvn%2Farchives2%2Fid_partitioning.php%3AABS8-3SNvJrJnivDN8frVBTgkdA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.37signals.com/svn/archives2/id_partitioning.php">http://www.37signals.com/sv...</a></p></div>
	</div>
</div>
		