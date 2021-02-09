
<div class="comment" id="c_1713622915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622915">1</a> by Brett
		posted on 11/23/2005 at 11:21 AM
		</div>
		<div class="comment_text"><p>Noooooo not the smiley language.</p><p>I'm going threw your apps now and doing a pretty intense integration.  I'll send you my thoughts in a week or so, but I already have quite a few suggestions.</p><p>The biggest change I had to do (I'm actually converting them to a fusebox type approach with a single file handler so that I can include them in another application) is that you use the base of the application scope for storing all your application vars.</p><p>I'm including your apps in a larger application so I have had to put them in thier own scope in application (application.blogcfc, application.galleon).</p><p>Could be a very transparent change for you to do in your code base that would really help in future integrations.</p><p>thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622917">2</a> by Daniel Greenfeld
		posted on 11/23/2005 at 7:40 PM
		</div>
		<div class="comment_text"><p>At my job we wouldn't dare deploy a forum without smileys!  Attachments are nothing compared to the smileys!</p><p>Anyway, we plan to review your Galleon to include in several planned applications, doing some sort of conenction with the Model-Glue framework that we plan to adapt everywhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622913">3</a> by Roger Benningfield
		posted on 11/24/2005 at 2:41 AM
		</div>
		<div class="comment_text"><p>Ray: I felt the same way about emoticons for a long time, but I've since surrendered. I'm not sure why I softened on them... after a while, it just seemed like fighting folks' expectations just wasn't worth it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622918">4</a> by Stefan
		posted on 12/28/2005 at 6:03 PM
		</div>
		<div class="comment_text"><p>Bug using MySQL &lt; 5.01?<br>The database booleans are defined as TINYINT(1) but in the queries the CF_SQL_BIT parameter is used. Does not work, have to be the CF_SQL_TINYINT parameter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622914">5</a> by Raymond Camden
		posted on 1/3/2006 at 7:11 PM
		</div>
		<div class="comment_text"><p>It should work fine w/ MySQL 4.1 using the drive from MySQL, NOT the built-in driver.</p></div>
	</div>
</div>
		