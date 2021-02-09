
<div class="comment" id="c_1713620948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620948">1</a> by Will Belden
		posted on 9/23/2005 at 8:59 PM
		</div>
		<div class="comment_text"><p>Another suggestion.  Assuming that the session end event is firing, use a table to "queue" up the deletes.  Then, every hour or so, a scheduled event can run through the ImagesToDeleteQueue table, for example, and try to delete them.  Eventually, you'll get them all, even if it's not on the first past.  Be sure to check for the file's continued existence after the deletion attempt.  If the file isn't there anymore, then you can remove that record from the table.  Not a fancy solution, but one that might do in a pinch, and be fairly easy to code up.</p><p>- Will Belden<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.belden.net%3AxKJjv80reX47Wzyu774WfM2zPzI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.belden.net">http://www.belden.net</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620949">2</a> by Ray Horn
		posted on 9/24/2005 at 2:34 AM
		</div>
		<div class="comment_text"><p>Easy to guarantee that a Session expires at the moment a browser is closed.</p><p>Code JavaScript that handles the event OnUnload - the JavaScript fires a call either using AJAX or via an &lt;iframe&gt; to execute some CF code to expire the session either via brute force or by simply deleting the images.  Some small amount of care would need to be taken to ensure there are no other windows open that view the same content that may be deleted when the session expires but this would be trivial.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620950">3</a> by tony petruzzi
		posted on 9/25/2005 at 10:46 PM
		</div>
		<div class="comment_text"><p>I've done this before and here was how I did it. What I did was use a schedule task that fired every 30 minutes. Inside the template I used the cfdirectory tag to grab a listing of all the files in the directory. Then using cfquery I did a select on the datelastmodifed and grab all the names of the file that were 2 hours old. Then use a cfoutput and cffile to delete the file.</p><p>It worked and was quick to implement, but I'm sure that someone else could have a better solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620952">4</a> by Sean Corfield
		posted on 9/27/2005 at 6:59 PM
		</div>
		<div class="comment_text"><p>Ray, your solution is (by your own admission) fragile and won't work when JavaScript is disabled. Never rely on client-side JavaScript for anything important!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620951">5</a> by Raymond Camden
		posted on 9/27/2005 at 7:12 PM
		</div>
		<div class="comment_text"><p>Amen. JavaScript is absolutely, 100%, only to be used for convenience(sp).</p></div>
	</div>
</div>
		