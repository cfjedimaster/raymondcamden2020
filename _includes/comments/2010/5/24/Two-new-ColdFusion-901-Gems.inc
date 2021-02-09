
<div class="comment" id="c_1713724556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724556">1</a> by Will B.
		posted on 5/24/2010 at 5:18 PM
		</div>
		<div class="comment_text"><p>I think, as a developer community, we must begin leaning away from dynamic queries except in the most extreme of circumstances.  I see dynamic SQL used in place of good design and forethought on a daily basis and it's killing me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724567">2</a> by Raymond Camden
		posted on 5/24/2010 at 5:25 PM
		</div>
		<div class="comment_text"><p>Can you expand on that a bit? I do not see how the form of your query (dynamic or static) impacts your design.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724569">3</a> by Will B.
		posted on 5/24/2010 at 5:30 PM
		</div>
		<div class="comment_text"><p>@Ray, by design I don't mean visual design, I mean more design of the code that must make SQL calls out, such as search tools, etc.  Rather than a block such as:<br>&lt;cfif structKeyExists(form, 'isActiveCheckbox')&gt;<br>   AND customer.isActive = 1<br>&lt;cfelse&gt;<br>   AND custom.isActive = 0<br>&lt;/cfif&gt;</p><p>...that kind of stuff.  Also, I see code frequently with the same kind of &lt;cfif&gt; statements that are doing dynamic joins.  &lt;shudder&gt;</p><p>As to this above, there's a better way...here's one post I know of detailing the better method:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.luismajano.com%2F2010%2F05%2F13%2Fsql-conditional-where%2F%3Alk2uKn3qdUZLqpEEunTlXy_kRCw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.luismajano.com/2010/05/13/sql-conditional-where/">http://www.luismajano.com/2...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724570">4</a> by Jeff
		posted on 5/24/2010 at 6:33 PM
		</div>
		<div class="comment_text"><p>Is the S3 integration documented somewhere on ADOBE's site?</p><p>I searched for it and don't see it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724574">5</a> by Raymond Camden
		posted on 5/24/2010 at 8:31 PM
		</div>
		<div class="comment_text"><p>@Jeff: As far as I know, Adobe almost never publicly prints hints like this. They are just teases. But I've never known Adobe to not ship something they mention like this.</p><p>@WillB: Ah - so what is wrong with a dynamic query then? I mean - maybe you could make the argument that a deeply nested/complex query would be better as a stored proc, but in general, I don't quite get why you would be opposed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724584">6</a> by Sean Corfield
		posted on 5/24/2010 at 8:58 PM
		</div>
		<div class="comment_text"><p>Presumably the native S3 support is similar to the virtual (RAM) file system? An s3:// protocol for file access? Nice to see that coming (and, hopefully, other VFS protocols like ftp:// and so on - see <a href="http://disq.us/url?url=http%3A%2F%2Fclassic.railo.ch%2Fen%2Findex.cfm%3FtreeID%3D339%3Aif5jD27e0zYhjar30FRlMJ-Vn4U&amp;cuid=3321886" rel="nofollow noopener" title="http://classic.railo.ch/en/index.cfm?treeID=339">http://classic.railo.ch/en/...</a> for some examples).</p><p>Nice to hear about HQL in cfquery too - makes a lot of sense. Confirms that Railo made the right choice in our Hibernate implementation since our pre-release of 3.2 already supports HQL in cfquery (returning a query object right now but will optionally return an array of entities by 3.2 launch time).</p><p>Great to see CFML advancing like this and that folks seem to have a shared vision!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724580">7</a> by Raymond Camden
		posted on 5/24/2010 at 11:42 PM
		</div>
		<div class="comment_text"><p>Don't want to comment too much on the syntax - I wasn't able to copy down exactly as Terry showed it and want to be sure I don't break NDA.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724576">8</a> by Ben Riordan
		posted on 5/25/2010 at 11:32 AM
		</div>
		<div class="comment_text"><p>Awesome! I've been working a lot with S3 and had been wondering about something more streamlined.</p><p>Now if we could get SDB as a supported datasource ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724577">9</a> by Richard Steele
		posted on 6/10/2010 at 6:40 PM
		</div>
		<div class="comment_text"><p>What kind of slowdown in showing images should we expect if they were pulled from S3 vs from the CF server drive?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724582">10</a> by Raymond Camden
		posted on 6/10/2010 at 6:46 PM
		</div>
		<div class="comment_text"><p>@Richard: In my demo, I went from localhost to s3. Therefore I think the difference in speed is much more pronounced then it would be "in the real world'. It comes down to - based on your client, what host will respond quicker -yours or Amazon. I'd bet that in most cases, you won't be able to tell the difference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724578">11</a> by Raymond Camden
		posted on 6/10/2010 at 6:47 PM
		</div>
		<div class="comment_text"><p>@Richard - I apologize. I thought you were commenting on the entry I made 2 days ago where I showed a video demo of this. Sorry for the confusion!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724579">12</a> by Richard Steele
		posted on 6/10/2010 at 6:58 PM
		</div>
		<div class="comment_text"><p>The request to show an image on the CF server hard drive would be from its hard drive. With S3, the request to show the image would be across the Internet. Wouldn't there be a perceptible difference there?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724581">13</a> by Raymond Camden
		posted on 6/10/2010 at 7:01 PM
		</div>
		<div class="comment_text"><p>It depends on what you mean by "show". To me, show means rendered in the browser via a IMG tag. In that case, it is a race between a HTTP request to your server or Amazon. Either could be closer depending on where you are/net traffic/etc.</p><p>If by "show" you mean "work with", like for example, gray scaling an image, then absolutely - the local one will be quicker. In cases like that where I had to do work with media on S3, I'd create a temp copy - do my ops - then copy back to S3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724583">14</a> by Richard Steele
		posted on 6/10/2010 at 7:08 PM
		</div>
		<div class="comment_text"><p>Thanks for your explanation. That makes total sense. On another note, is there a utility you like to use for backing up files to S3?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724557">15</a> by Raymond Camden
		posted on 6/10/2010 at 7:10 PM
		</div>
		<div class="comment_text"><p>For personal usage, I'm a Mozy guy, which I'm pretty sure makes use of S3 as well. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724558">16</a> by Richard Steele
		posted on 6/10/2010 at 10:41 PM
		</div>
		<div class="comment_text"><p>Just wondering if you know any CF developers using GoGrid to host their development server and whether they like it.  IN some ways it seems ideal. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724559">17</a> by Joe Mastroianni
		posted on 6/23/2010 at 11:40 PM
		</div>
		<div class="comment_text"><p>In past projects I've used Adobe's Scene7 (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.scene7.com%3Aq5G70getpSF9o2pvHFZ3i65ON3E&amp;cuid=3321886" rel="nofollow noopener" title="www.scene7.com">www.scene7.com</a>) image hosting service and there was little perceptible difference in loading images onto our webpages versus hosting them locally. At the end of the day they are all HTTP requests.</p></div>
	</div>
</div>
		