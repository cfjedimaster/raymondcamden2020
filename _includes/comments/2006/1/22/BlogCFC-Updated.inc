
<div class="comment" id="c_1713649484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649484">1</a> by Scott
		posted on 1/23/2006 at 8:08 AM
		</div>
		<div class="comment_text"><p>Educate me, is there a reason to use the listlast on the scriptname instead of using contains?</p><p>&lt;cfif #cgi.script_name# contains 'blog.ini.cfm'&gt;</p><p>instead of</p><p>&lt;cfif listlast(cgi.script_name, "/") is "blog.ini.cfm"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649489">2</a> by charlie griefer
		posted on 1/23/2006 at 8:17 AM
		</div>
		<div class="comment_text"><p>I'll take a guess...</p><p>listLast() will automatically evalute that element at the final position in the list, whereas the "CONTAINS" keyword has to parse the entire string.</p><p>Again, just a guess, because I'm not 100% sure that listLast() wouldn't have to parse the string into a list 'under the hood' so to speak.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649475">3</a> by Mujeebur Rahmansaher
		posted on 1/23/2006 at 9:28 AM
		</div>
		<div class="comment_text"><p>I would like to take the same guess as Charlie .. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649485">4</a> by Gareth Edwards
		posted on 1/23/2006 at 4:56 PM
		</div>
		<div class="comment_text"><p>Surely if you place your config and cfc's outside of a directory accessable to the web this would fix your issues? ie. Create a coldfusion mapping to the com directory or something?</p><p>btw. I'm yet to use BlogCFC, although I think your doing great work and would like to maybe contribute down the track some time.</p><p>Cheers<br>Gareth.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649487">5</a> by Raymond Camden
		posted on 1/23/2006 at 5:15 PM
		</div>
		<div class="comment_text"><p>Gareth, yes, moving stuff out from web root would have solved everything. However, many people who use my apps cannot move stuff out fromw eb root.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649488">6</a> by Raymond Camden
		posted on 1/23/2006 at 5:30 PM
		</div>
		<div class="comment_text"><p>While contains would work, listLast is more proper because I want the last value in the list to be that file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649486">7</a> by Big Mad Kev
		posted on 1/23/2006 at 5:34 PM
		</div>
		<div class="comment_text"><p>Ray it seems that blog.cfc is set to 4.0.3.100 and your project page is 4.0.3.101 Just a small over look I guess :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649491">8</a> by Raymond Camden
		posted on 1/23/2006 at 5:49 PM
		</div>
		<div class="comment_text"><p>Oops. Should be fixed now. The zip is already right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649490">9</a> by Jacob Munson
		posted on 1/25/2006 at 6:27 AM
		</div>
		<div class="comment_text"><p>Excuse my ignorance, but how does one get "the result of getVersion from your blog"?  I tried all the stuff I could think of...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649493">10</a> by Raymond Camden
		posted on 1/25/2006 at 8:02 AM
		</div>
		<div class="comment_text"><p>If your ORG folder is under web root, you can call the CFC method from your browser:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Forg%2Fcamden%2Fblog%2Fblog.cfc%3Fmethod%3Dgetversion%3AgN5DGm8vl4vZJLif3-0ulIJ_QNY&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/org/camden/blog/blog.cfc?method=getversion">http://ray.camdenfamily.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649492">11</a> by Jacob Munson
		posted on 1/25/2006 at 9:59 AM
		</div>
		<div class="comment_text"><p>Thanks Ray.  However, I get 4.0.3.100 from this, even though I just downloaded the zip file this afternoon.  And my readme.txt file (in the install folder) shows 4.0.3.101.  No big deal, just an FYI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649494">12</a> by Jacob Munson
		posted on 1/25/2006 at 10:25 AM
		</div>
		<div class="comment_text"><p>If anybody is curious like me, I was able to add this line to my site to get put the current version in a variable for display (I hope this doesn't get stripped out of my comment):<br>cfinvoke component="<a href="http://disq.us/url?url=http%3A%2F%2Fblog.org.camden.blog.blog%3AVj1D0NobFgxgLUl_kbqDsKdae68&amp;cuid=3321886" rel="nofollow noopener" title="blog.org.camden.blog.blog">blog.org.camden.blog.blog</a>" method="getversion" returnvariable="blogVersion"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649495">13</a> by Raymond Camden
		posted on 1/25/2006 at 7:27 PM
		</div>
		<div class="comment_text"><p>Either a) you need to refresh your cache or b) I may have left it at 100 and wrote 101 in the docs. ;) Either way, next release will be 102 and I'll be sure to get it right. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649483">14</a> by Jacob Munson
		posted on 1/25/2006 at 9:06 PM
		</div>
		<div class="comment_text"><p>Yeah, I opened blog.cfc and saw release="4.0.3.100".  I was a bad boy and changed it to 101!  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649481">15</a> by Big Mad Kev
		posted on 1/25/2006 at 9:29 PM
		</div>
		<div class="comment_text"><p>I've added this line as the last TR in \tags\layout.cfm</p><p>&lt;tr&gt;<br>	&lt;td colspan="2"&gt;Powered by &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fprojects%2Fblogcfc%2F%3ArrqQxbmExgeh7ipDMyrkMWrAPi4&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/projects/blogcfc/">http://ray.camdenfamily.com...</a>" target="_blank"&gt;Raymond Camden's BlogCFC&lt;/a&gt; &lt;strong&gt;Version:&lt;/strong&gt; #application.blog.GetVersion()#&lt;/td&gt;<br>&lt;/tr&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649482">16</a> by Test Jones
		posted on 1/31/2006 at 2:00 AM
		</div>
		<div class="comment_text"><p>this is just a test</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649480">17</a> by James
		posted on 2/6/2006 at 1:28 PM
		</div>
		<div class="comment_text"><p>This is just a test.</p><p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut PVII excelsior magna aliquam erat very cool. Ut wisi enim ad minim veniam, quis nostrud exerci tation Murray suscipit lobortis nisl ut aliquip ex ea commodo sound asleep. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel Gerry et Al dolore eu feugiat nulla BMW zoom zoom at vero eros et accumsan et I-95 South odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut we be cool.</p></div>
	</div>
</div>
		