
<div class="comment" id="c_1713659626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659626">1</a> by Mark Fuqua
		posted on 11/28/2006 at 5:01 AM
		</div>
		<div class="comment_text"><p>How are the roles stored in the first example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659627">2</a> by Joe Rinehart
		posted on 11/28/2006 at 6:35 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>I've been dealing with this problem in Web Services for a while...the solution I used works well in Flex.  I blogged it here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.firemoss.com%2Fblog%2Findex.cfm%3Fmode%3Dentry%26entry%3D2C311CBF-3048-55C9-43278B6693F197FA%3AnesCbGBxDpCiL7VNWlHygChXHzY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.firemoss.com/blog/index.cfm?mode=entry&amp;entry=2C311CBF-3048-55C9-43278B6693F197FA">http://www.firemoss.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659623">3</a> by Raymond Camden
		posted on 11/28/2006 at 7:59 AM
		</div>
		<div class="comment_text"><p>Mark - a cookie.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659628">4</a> by Meep
		posted on 11/28/2006 at 8:16 PM
		</div>
		<div class="comment_text"><p>my coworker/boss have all used CF a lot longer than me (since version 2 whereas I started with 6 and slightly the end of 5). They all swear by custom login and security models vs cflogin. Most times they cite previous vulnerabilities and shortcomings of cflogin and the like.</p><p>Just curious to everyone heres opinion on the matter since as I said I don't have a long CF background so I feel like its hard to discern things in the environment I'm in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659625">5</a> by Raymond Camden
		posted on 11/28/2006 at 8:56 PM
		</div>
		<div class="comment_text"><p>Meep, listen to your coworkers. They are exactly right. I still use cflogin in all my apps - I just haven't had a chance to rip them out yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659629">6</a> by TJ Downes
		posted on 11/28/2006 at 10:01 PM
		</div>
		<div class="comment_text"><p>I've typically been a fan of cflogin because of it's ease of use. I have been using CF since 2.0 but did not start using CFLOGIN until about a year ago. Once I discovered how easy it was I was enthusiastic.</p><p>Unfortunately over the last few months I discovered a couple of things which have changed my mind about CFLOGIN.</p><p>First and foremost, CFLOGIN runs on every request. In a high-traffic environment this could cost you significanty.</p><p>Secondly, there is a bug in Flash player that prevents file uploads from happening in Firefox (PC and Mac) and Safari when using CFFORM when the format is Flash. Technically this is an issue with Flash, not CFLOGIN. However, by avoiding the use of CFLOGIN altogether, I would not have encountered this issue. Now I am in a position of redesigning my entire security schema for a particular app because the majority of users using my tools are FF or Safari users.</p><p>My advice: skip CFLOGIN.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659631">7</a> by Sami Hoda
		posted on 11/29/2006 at 12:43 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Maybe you and I can tag team on this one as an Enhancement Request/Bug entry for Scorpio. They seem to listen when more than one person complains. What do you think? I'd like to cflogin fixed rather than rip it out of my code as well.</p><p>Sami</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659630">8</a> by James Edmunds
		posted on 11/29/2006 at 7:28 PM
		</div>
		<div class="comment_text"><p>I fall into the camp of wishing CFLOGIN fixed rather than abandoned -- although this may prove nothing more than that I am lazy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659633">9</a> by Chris
		posted on 1/31/2008 at 8:30 PM
		</div>
		<div class="comment_text"><p>Not terribly useful. How does cflogin know which table in your db to use for authentication? I can't believe the CF docs leave out this important detail...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659642">10</a> by Raymond Camden
		posted on 1/31/2008 at 8:37 PM
		</div>
		<div class="comment_text"><p>Um, it doesn't. CFLOGIN does not hit a database. CFLOGIN simply helps manage your login status. You may want to authenticate people against LDAP. You may want to authenticate people again values in a text file. Whatever. CFLOGIN leaves that up to you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659644">11</a> by Scott
		posted on 7/9/2008 at 1:42 AM
		</div>
		<div class="comment_text"><p>I think the loginStorage="session" won't work because from what I understand session variables do not exist in Flex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659647">12</a> by Adam Bellas
		posted on 1/6/2009 at 8:35 AM
		</div>
		<div class="comment_text"><p>I know CFLOGIN can be a royal pain, however I can't ignore the roles attribute on CFFUNCTION and how nice that wraps up all my API's into a ColdFusion security layer.</p><p>We tried inventing a roll-you-own system to handle AJAX security and it's just not as easy and fast as the built in stuff.  If you can stomach the CFLOGIN roller-coaster of woe, that is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659648">13</a> by Reinhard Jung
		posted on 11/18/2009 at 5:26 AM
		</div>
		<div class="comment_text"><p>Thanx for the BlogEntry!</p></div>
	</div>
</div>
		