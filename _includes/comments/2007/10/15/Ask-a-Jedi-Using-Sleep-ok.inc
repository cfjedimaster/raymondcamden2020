
<div class="comment" id="c_1713673332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673332">1</a> by Ben Nadel
		posted on 10/15/2007 at 6:49 PM
		</div>
		<div class="comment_text"><p>I don't know how FLEX applications talk to images. If the FLEX app is reading the image file directly, then that's another story. However, if the image file is being served up via ColdFusion (ex. CFContent), then you could put file-name-based locks on the file read / delete code. This way, ColdFusion would essentially sleep while waiting for the "read" code to finish.</p><p>Of course, this puts a lot of additional work on the CF server for the CFContent tag. I wouldn't suggest moving to CFContent if you are NOT already using it, but if you are, CFLock would do what you need (just put in a relatively high timeout).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673333">2</a> by Raymond Camden
		posted on 10/15/2007 at 6:52 PM
		</div>
		<div class="comment_text"><p>But I would argue against even bothering. Why make CF wait? Just clean up the files later on. Now obviously if you have billions of files you may want to clean up sooner rather than later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673334">3</a> by Dave Ferguson
		posted on 10/15/2007 at 6:53 PM
		</div>
		<div class="comment_text"><p>Typically I avoid doing any sleep type actions when they could affect user experience.  I would also suggest doing this in a scheduled task.  However, if that does not work there is an alternative.  You could run the delete procedure as an Asynchronous process.  This would allow for the delete to be much more immediate than a scheduled task as well as not impacting the user.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673336">4</a> by Ben Nadel
		posted on 10/15/2007 at 6:56 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I agree. The bulk delete once or twice a day is gonna be the easiest thing to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673341">5</a> by Raymond Camden
		posted on 10/15/2007 at 7:00 PM
		</div>
		<div class="comment_text"><p>Dave - I'd worry about that too. Would you write the code to keep trying to delete? Ie a conditional loop? I guess that wouldn't be too bad - but I'd worry about it possibly looping for too long, taking up a precious thread.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673338">6</a> by todd sharp
		posted on 10/15/2007 at 7:25 PM
		</div>
		<div class="comment_text"><p>What about using the directory watcher gateway??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673339">7</a> by Joe Rinehart
		posted on 10/15/2007 at 7:29 PM
		</div>
		<div class="comment_text"><p>Why not have the Flex app call a heyImDoneWithFileId(fileId) method back on the server when it's done reading the uploaded image, and have that do the delete?</p><p>On top of that, a scheduled task to clean up the trash in case the call never happened would still be needed...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673340">8</a> by Nolan Erck
		posted on 10/15/2007 at 8:01 PM
		</div>
		<div class="comment_text"><p>On a semi-related note, I recently uploaded fakesleep() to <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%3A_xxzCNK-l1o46U5-IF400HiKZ0A&amp;cuid=3321886" rel="nofollow noopener" title="cflib.org">cflib.org</a> (currently in the queue).  Some hosting providers have CreateObject("java") turned off, which keeps the Java sleep() from working (I haven't tried CF 8's native sleep() yet, but if it does the same thing internally, that one may not work either).</p><p>My version noted above just uses getTickCount() in a loop to pause the current page.  It might be a better solution for some folks (assuming they have hosting providers that are as strict as my last one was).</p><p>hth<br>nolan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673344">9</a> by todd sharp
		posted on 10/15/2007 at 8:38 PM
		</div>
		<div class="comment_text"><p>Blocking access to CF Java functions wouldn't break CF 8's sleep() - if that were the case half the language would be broken by blocking that access.  That feature only blocks direct invocation of those objects by your code - not the CF internal stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673342">10</a> by Danny Nip
		posted on 10/15/2007 at 8:41 PM
		</div>
		<div class="comment_text"><p>Thanks for bringing up this discussion Ray.</p><p>A bit more detail if anyone was curious.  I was essentially loading up thumbnails that were stored on the hard drive into Flex using an &lt;mx:Image&gt; tag (non-Embedded).  So in this page, the user could view and update an image.  Hence, the read/update/delete in rapid succession.</p><p>So does calling Sleep() eat up a precious thread in ColdFusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673348">11</a> by Raymond Camden
		posted on 10/15/2007 at 8:49 PM
		</div>
		<div class="comment_text"><p>If it stops the page from ending, I'd consider it bad, especially with the option to just clean up later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673345">12</a> by Raymond Camden
		posted on 10/15/2007 at 9:30 PM
		</div>
		<div class="comment_text"><p>Todd - I think the Dir Watcher EG would not be a good idea. It could fire off while the file is still locked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673347">13</a> by Nolan Erck
		posted on 10/15/2007 at 10:48 PM
		</div>
		<div class="comment_text"><p>@Todd</p><p>Actually, that's not entirely true (at least not for CF7).  I had issues where cfdump wouldn't work on hosts that turn off CreateObject(java) as well -- which uses it internally.  Same problem, even for built-in CF tags.</p><p>It was, to say the least, profoundly annoying to deal with. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673350">14</a> by Raymond Camden
		posted on 10/15/2007 at 11:05 PM
		</div>
		<div class="comment_text"><p>CFDUMP is actually built in CFML. It is a custom tag. That may make it different than sleep().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673351">15</a> by todd sharp
		posted on 10/15/2007 at 11:44 PM
		</div>
		<div class="comment_text"><p>cfcache, cfcomponent, cfsavecontent, cftrace are also custom tags i believe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673353">16</a> by Raymond Camden
		posted on 10/15/2007 at 11:45 PM
		</div>
		<div class="comment_text"><p>Actually - I think cfcomponent is a CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673355">17</a> by todd sharp
		posted on 10/15/2007 at 11:46 PM
		</div>
		<div class="comment_text"><p>Nod - as well as interface.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673354">18</a> by Rob Rawlins
		posted on 10/17/2007 at 7:51 PM
		</div>
		<div class="comment_text"><p>Its times like this when we need a 'finally' block in our try/catch handlers :-D I've suffered at the hands of problems like this when working with Python and I always found that commensing the delete in the finally block always kept things rather safe as the application wouldnt proceed to that block untill the try had completed successfully, I've always found sleeps a HIGHLY inefficient way of handling this kind of stuff.</p><p>Have they added a feature like this into cf8? would be a nice touch.</p><p>I'm inclined to go with these guys for a bulk delete, although you might want to consider doing it with somthing other than CF, if you have large numbers of files then it'll run as a very slow task. Thats how I currently handle things on my application and I see a very large amount of files being built on my server.</p><p>Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673356">19</a> by Raymond Camden
		posted on 10/17/2007 at 7:58 PM
		</div>
		<div class="comment_text"><p>CF8 did not add FInally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673357">20</a> by Rob Rawlins
		posted on 10/17/2007 at 9:00 PM
		</div>
		<div class="comment_text"><p>Thanks for clearing that up Ray, perhaps its a wishlist addition for numero 9.</p><p>Rob</p></div>
	</div>
</div>
		