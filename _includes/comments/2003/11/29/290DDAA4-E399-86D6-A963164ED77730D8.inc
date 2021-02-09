
<div class="comment" id="c_1713615183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615183">1</a> by Bob Connolly
		posted on 12/8/2003 at 10:41 PM
		</div>
		<div class="comment_text"><p>Darn, try as I might, I keep getting, 'Could not find the template <a href="http://disq.us/url?url=http%3A%2F%2Forg.camden.blog.blog%3AyzvXxHJZ-_gXQzJ9UzwfK-QPovg&amp;cuid=3321886" rel="nofollow noopener" title="org.camden.blog.blog">org.camden.blog.blog</a>' what I am doing wrong? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615184">2</a> by Raymond Camden
		posted on 12/8/2003 at 10:48 PM
		</div>
		<div class="comment_text"><p>Is the org folder under your web root?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615196">3</a> by Bob Connolly
		posted on 12/8/2003 at 10:51 PM
		</div>
		<div class="comment_text"><p>It is now thanks! But uh uh, I am getting Blog must be run under ColdFusion RedSky.</p><p>I thought we had installed 6.1 -- maybe not...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615186">4</a> by Josh Trefethen
		posted on 12/10/2003 at 11:59 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I just spent several ours getting blog.cfc working for MySQL/Linux  I woul love to be involved in the project and share code...</p><p>I was also wondering if you were planning on adding some other functionality that I see here on your blog, such as links and recent entries on the right han bar...(or maybe I have an old version?)</p><p>Anyhow.  would love to be involved.</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615190">5</a> by Raymond Camden
		posted on 12/10/2003 at 5:39 PM
		</div>
		<div class="comment_text"><p>Josh, the 3.0 beta already supports mySQL. Sorry if the docs were not clear in it. And all the right hand stuff is also supported, its in the new pods directory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615192">6</a> by Josh Trefethen
		posted on 12/10/2003 at 9:48 PM
		</div>
		<div class="comment_text"><p>I guess I just wasted some time...bummer.  I will check out the 3.0 beta!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615197">7</a> by brad
		posted on 12/11/2003 at 8:37 AM
		</div>
		<div class="comment_text"><p>Alrighty, I have created the MSSQL tables.....piece of cake...now I am looking to edit the .ini but the only on eI can find is the one under the camden/blog directory.....is that right?  And if so what do I change the dsn settings to .....I am a little confused about that.....?</p><p>As of right now I get a error that reads:::</p><p> Attribute validation error for tag CFAPPLICATION.<br>The tag does not allow the attribute(s) LOGINSTORAGE. The valid attribute(s) are APPLICATIONTIMEOUT,CLIENTMANAGEMENT,CLIENTSTORAGE,NAME,SESSIONMANAGEMENT,SESSIONTIMEOUT,SETCLIENTCOOKIES,SETDOMAINCOOKIES.   The Error Occurred in D:\Inetpub\WWWroot\greenrockRoad\client\Application.cfm: line 15</p><p>13 : &lt;cfset setEncoding("url","utf-8")&gt;<br>14 : <br>15 : &lt;cfapplication name="blog" sessionManagement=true loginStorage="session"&gt;<br>16 : &lt;cfinclude template="includes/udf.cfm"&gt;<br>17 :</p><p>Much thanks for any help....this is my first voyage into .cfm, after learning a little about it at MAX I decided to give it a go.</p><p>Thank!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615189">8</a> by Raymond Camden
		posted on 12/11/2003 at 6:07 PM
		</div>
		<div class="comment_text"><p>Sorry about all the trouble you are having. Documentation will be in the RC. There is only one ini file. You change the dsn to match whatever you used in the CF Datasource admin. YOu then need to change blogDBType to mysql. If you dont see an entry for it, just add</p><p>blogDBType=MYSQL</p><p>As for your error - you are not running MX 6.1, which the blog requires.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615187">9</a> by Josh Trefethen
		posted on 12/11/2003 at 8:06 PM
		</div>
		<div class="comment_text"><p>Just wanted to note that the blog.cfc does not work as is for cfmx6.1 on linux with MySQL.</p><p>You need to go in and change all the tablenames in the blog.cfc file to be lowercase to match the database.  Looks like you took care of all the date functions for the MySQL code though..good work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615194">10</a> by Josh Trefethen
		posted on 12/14/2003 at 7:24 AM
		</div>
		<div class="comment_text"><p>Just integrated the blog with &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfdev.com%2Factivedit%2Fcoldfusion.cfm%3A2MjroPXcbxPqE8U0nSJhHpnH8Dw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfdev.com/activedit/coldfusion.cfm">http://www.cfdev.com/active...</a>"&gt;activedit&lt;/a&gt; -- works much better!  we should find a good, free, open-source wysiwyg text tool for this blog that you can bundle with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615195">11</a> by Mickey Chandler
		posted on 1/3/2004 at 9:44 AM
		</div>
		<div class="comment_text"><p>I'm not seeing the some of right hand stuff (like Links) in the pods directory.</p><p>Am I missing something or is this something I'll need to code myself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615193">12</a> by Raymond Camden
		posted on 1/4/2004 at 5:33 AM
		</div>
		<div class="comment_text"><p>The pods you see on my blog are not the same as the ones I put in the zip - mainly because I assume people don't want the same pods as my site. I only include a few samples pods in the installer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615188">13</a> by Mark Kruger
		posted on 4/30/2005 at 9:33 PM
		</div>
		<div class="comment_text"><p>Ray - I'm just finishing up switching to your blog software (I think I must be the last one - ha).  I was wondering if there is a central repository of pods somewhere that we can draw from and submit?</p></div>
	</div>
</div>
		