
<div class="comment" id="c_1713667221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667221">1</a> by Simon Green
		posted on 6/16/2007 at 12:44 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I'm pretty new to CF about 16 months now and i suppose this is not directly related to you post but you say you might abandon the use of CF login. That's all i use to secure my applications at the moment what other technique would you in it place and why other than the reason you have stated about admin API issue.</p><p>Simon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667234">2</a> by Raymond Camden
		posted on 6/16/2007 at 12:54 AM
		</div>
		<div class="comment_text"><p>Ah, heh, well, it is an old beef. Not that the feature is bad or anything, but I've found that in _my_ development, I have problems with it. A lot of my problems were fixed in CF8:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F6%2F3%2FColdFusion-8-Additions-to-Roles-Based-Security%3A2Wyoj0s55bVQcqZGZdTFwPXXmQI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/6/3/ColdFusion-8-Additions-to-Roles-Based-Security">http://www.coldfusionjedi.c...</a></p><p>But my primary complaint, and I think I talk about it in the blog entry - is the lack of being able to separate a login session from the web server and from my CF app. Let me know if that doesn't make sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667233">3</a> by Michael White
		posted on 6/16/2007 at 5:40 PM
		</div>
		<div class="comment_text"><p>I found a weird problem with cflogin and session ending. it seems your session can be cleared out but coldfusion still considers you logged in and you have to explicitly cflogout to get rid of it... that had me going for a while. I'm looking forward to improvements in cf8... it's a lot of work to build a security system from scratch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667235">4</a> by Raymond Camden
		posted on 6/17/2007 at 2:52 AM
		</div>
		<div class="comment_text"><p>Michael, did you remember to use loginStorage="session"? If you forgot, than your logon 'scope' isn't the same as your session.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667238">5</a> by Michael White
		posted on 6/17/2007 at 3:21 AM
		</div>
		<div class="comment_text"><p>I must have missed that in the manual, or it wasn't in the examples or some other lame excuse...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667236">6</a> by Dax Kent
		posted on 1/15/2014 at 7:48 AM
		</div>
		<div class="comment_text"><p>Sorry to drag up a dead horse,</p><p>but was this issue ever addressed?  I'm having the same problem in CF 10.<br>createObject("component","cfide.adminapi.administrator").login overwrites my getauthuser().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667237">7</a> by Raymond Camden
		posted on 1/15/2014 at 7:52 AM
		</div>
		<div class="comment_text"><p>I don't think it ever was. I wish I had a bug # for ya. I know I logged it.</p></div>
	</div>
</div>
		