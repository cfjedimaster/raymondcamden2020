
<div class="comment" id="c_1713734940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734940">1</a> by CJM
		posted on 9/2/2011 at 10:19 PM
		</div>
		<div class="comment_text"><p>To anyone out there who hasn't tried MongoDB w/ the CFMongoDB wrapper... DO IT!  It is a great learning experience that will change how your thoughts are constructed in regards to database interaction.</p><p>Marc Esher is a great resource and very responsive on the Google Groups if you have any questions or issues.  Also, as Ray said, the MongoDB docs are excellent.</p><p>One thing to keep in mind with CFMongoDB is that you need to run CF 9.0.1 in order for it to properly function (at least that was the case when I last upgraded).</p><p>I have been running MongoDB in production for 6+ months and I have no had to touch it once.  Now, I am bulk importing data into the collection and only serving content from it on the site but it's been perfect.</p><p>Finally, I also wrote a real time analytics capture sytem with it that logs every possible piece of data about a user's session into the system.  This then ties into a backend console piece that allows customer support to pull up a given user's session and assist them with any issues they had using the site.  The minmal data structuring that you have to do made this project very easy and fast to program.  Data retention is only a couple of weeks because MongoDB will chew through a large portion of disk space and the collections are stored in RAM.  If collectionSize &gt; RAM then you start doing disk reads/writes which is, of course, detrimental to performance.  Something to keep in mind if you are working with very large sets of data.</p><p>Great stuff!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734941">2</a> by Brian Thornton
		posted on 9/3/2011 at 7:07 AM
		</div>
		<div class="comment_text"><p>Mondo is one controller for a true NOSQL enviroment...  I have been beta testing a MOSQL cloud solution for coldfusion at Rackspace and it handles the key pair problem great....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734944">3</a> by Henry Ho
		posted on 9/4/2011 at 8:37 PM
		</div>
		<div class="comment_text"><p>Shameless Plug: Try MongoCFC if you don't feel like learning another api for accessing MongoDB.  <a href="http://disq.us/url?url=http%3A%2F%2Fmongocfc.riaforge.org%3AWa7DoMUdM02ZvqHpR9XRCcnd1FI&amp;cuid=3321886" rel="nofollow noopener" title="http://mongocfc.riaforge.org">http://mongocfc.riaforge.org</a> Enjoy~</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734945">4</a> by Zad Imam
		posted on 6/18/2013 at 1:44 AM
		</div>
		<div class="comment_text"><p>How is this going for you?  I'm curious to see if you are still utilizing a MongoDB / NOSQL environment to your existing projects or current website with CF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734943">5</a> by Raymond Camden
		posted on 6/18/2013 at 1:51 AM
		</div>
		<div class="comment_text"><p>Funny you ask - read this: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F6%2F14%2FMore-on-my-JavaScriptCookbook-Node-project%3A5N1kbpnvzW0Nf2FAj2jtxEMoWf4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/6/14/More-on-my-JavaScriptCookbook-Node-project">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		