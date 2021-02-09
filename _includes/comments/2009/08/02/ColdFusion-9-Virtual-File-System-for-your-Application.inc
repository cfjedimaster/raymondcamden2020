
<div class="comment" id="c_1713717505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717505">1</a> by Sean Coyne
		posted on 8/2/2009 at 7:53 PM
		</div>
		<div class="comment_text"><p>a VFS explorer would be a cool extension for CF Builder as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717507">2</a> by Robert Rawlins
		posted on 8/2/2009 at 8:20 PM
		</div>
		<div class="comment_text"><p>Yeah this has the potential to be a very nice feature, however I think it could have potential risks in a shared environment, I agree that it would be nice to be able to tie a virtual space to an application and likewise limit the amount of space available per app this would no doubt make it much more usable in shared environments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717509">3</a> by Gary Fenton
		posted on 8/2/2009 at 9:56 PM
		</div>
		<div class="comment_text"><p>It's interesting that something I took for granted on my Amiga would be considered cool some 22 years later! The ram drive was part of the OS and was especially useful for storing files you'd need to access quickly again and again, or even as a temporary place to hold images through several stages of processing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717511">4</a> by Robert Rawlins
		posted on 8/2/2009 at 9:59 PM
		</div>
		<div class="comment_text"><p>haha Gary, that's because only Amiga makes it possible, only Amiga makes it happen! <a href="http://disq.us/url?url=http%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DyckH20ngY4Y%3AwLNhrJijdCEwXpoeERcZINfpuVI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.youtube.com/watch?v=yckH20ngY4Y">http://www.youtube.com/watc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717513">5</a> by Gary Fenton
		posted on 8/2/2009 at 10:34 PM
		</div>
		<div class="comment_text"><p>Robert, the first man in the video was my old boss, Anthony Jacobson! Wow, some old and wonderful memories. Now if only ColdFusion could handle 4096 colours and multitasking! ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717508">6</a> by Todd Rafferty
		posted on 8/2/2009 at 11:43 PM
		</div>
		<div class="comment_text"><p>Been enjoying this feature in Railo for awhile now. Fun to use. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717517">7</a> by dave
		posted on 8/3/2009 at 5:28 AM
		</div>
		<div class="comment_text"><p>Since Railo is run on a per app basis it runs vfs per app which is a nice benefit. I am definitely starting to see the benefits of how Railo runs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717516">8</a> by Daniel Budde
		posted on 8/3/2009 at 6:58 PM
		</div>
		<div class="comment_text"><p>I would be curious if anyone could list a set of circumstances or criteria as to when it would be better to use VFS over the file system.  I do understand the general concept of when you will be accessing a file repeatedly would be a good time to use it, but obviously images don't really apply in ColdFusion anymore.  The only reason I ask is sometimes I find myself debating on items such as this feature as to when I want to actually perform the cross-over to using it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717519">9</a> by Todd Rafferty
		posted on 8/3/2009 at 7:05 PM
		</div>
		<div class="comment_text"><p>@Daniel Budde: <br>It would be faster to create thumbnails of images in VFS and move them into place than it would be to do the same on a file system. So, anything that has intense disk operations could be done faster via VFS. Writing to a log file, etc.</p><p>As a side effect: You could use CF to create / pull code from a db, write a CFC/CFM in VFS and invoke it in VFS. Something you could never do.</p><p>You could secure your uploads, making sure that the file that was uploaded was legit before moving it onto the File System. There are, of course, issues with that. If someone tries to upload a 120 Gig zipfile, obviously VFS is going to barf.</p><p>So, of course, like everything else you code, there's a time and a place and it's up to you to be responsible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717523">10</a> by Jody Fitzpatrick
		posted on 8/3/2009 at 11:23 PM
		</div>
		<div class="comment_text"><p>I believe I read somewhere that you could change<br>the location eg.) ram:/// to something else like <br>session:///. Now if that was true  couldn't you just<br>create a temporary location for each user, or is that not pisslbe ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717524">11</a> by Raymond Camden
		posted on 8/3/2009 at 11:24 PM
		</div>
		<div class="comment_text"><p>@jody: Nope, not possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717525">12</a> by Jody Fitzpatrick
		posted on 8/5/2009 at 9:03 AM
		</div>
		<div class="comment_text"><p>Ah, thanks for clearing that up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717527">13</a> by tim garver
		posted on 8/25/2014 at 6:29 PM
		</div>
		<div class="comment_text"><p>Ray<br>We had similar app running in cf9 that created cfm files saved them to vfs and included them on the fly. Right after the include I just deleted the file. All worked great until we upgraded recently to cf11.</p><p>Now we got a strange error saying the global limit for vfs has been reached. Strange part is it happens on pages that are not related to the vfs system.</p><p>I have a forum post here for reference. <a href="https://disq.us/url?url=https%3A%2F%2Fforums.adobe.com%2Fthread%2F1549472%3A_vL4kk8S_xsvdOyJIOk8wx4Eo48&amp;cuid=3321886" rel="nofollow noopener" title="https://forums.adobe.com/thread/1549472">https://forums.adobe.com/th...</a></p><p>I have a page that dumps.out the contents.of the vfs and when I get the error the total contents are no where near the global or application limit.</p><p>Have you or anyone seen any issues like this with cf11?</p><p>Thanks<br>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717526">14</a> by Raymond Camden
		posted on 8/25/2014 at 6:43 PM
		</div>
		<div class="comment_text"><p>I haven't played with the VFS in a long time. I read the thread, but it doesn't seem to help any. Sorry - best I can say is that I hope you get an answer, and I'd love to know more when/if you do.</p></div>
	</div>
</div>
		