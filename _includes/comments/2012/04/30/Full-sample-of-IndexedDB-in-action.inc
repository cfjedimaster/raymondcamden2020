
<div class="comment" id="c_1713740777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740777">1</a> by Terry Collinson
		posted on 5/2/2012 at 9:53 AM
		</div>
		<div class="comment_text"><p>I am using PhoneGap and WebSQL at the moment. Just got your synchronisation working by the way. Will I have to dump WebSQL and use IndexedDB? Search is essential in my applications.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740778">2</a> by Raymond Camden
		posted on 5/2/2012 at 3:29 PM
		</div>
		<div class="comment_text"><p>WebSQL works in mobile just fine (not just Mobile/PhoneGap, but the browsers themselves). So I'd continue to use it for now. Just be aware of it being deprecated in general.</p><p>As it stands - even if it goes away 100%, you can use SQLite via a PhoneGap plugin to continue using it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740779">3</a> by atomxml.org
		posted on 7/15/2013 at 7:49 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>Google Chrome:</p><p>var transaction = db.transaction(["note"], IDBTransaction.READ);  <br>Change:<br>var transaction = db.transaction(["note"], 'readwrite');</p><p>var request = db.transaction(["note"], IDBTransaction.READ_WRITE) <br>Change:<br>var request = db.transaction(["note"], 'readwrite')</p><p>var request = db.transaction(["note"], IDBTransaction.READ_WRITE)<br>Change:<br>var request = db.transaction(["note"], 'readwrite')</p><p>Thank you. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740780">4</a> by Raymond Camden
		posted on 7/17/2013 at 6:05 AM
		</div>
		<div class="comment_text"><p>No, thank you. :) I haven't gotten around to updating my Chrome IndexedDB articles. They were written at a time when Chrome wasn't fully to spec.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740783">5</a> by Jayesh
		posted on 2/20/2014 at 10:27 PM
		</div>
		<div class="comment_text"><p>Excellent sample application. However, how to get count of the data store?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740782">6</a> by Raymond Camden
		posted on 2/21/2014 at 3:00 AM
		</div>
		<div class="comment_text"><p>You can get a count pretty easy - see my "Counting Data" section in this article:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcode.tutsplus.com%2Ftutorials%2Fworking-with-indexeddb-part-3--net-36220%3Am0nBIQ9CtENc1hX1JkUfLVYQOVM&amp;cuid=3321886" rel="nofollow noopener" title="http://code.tutsplus.com/tutorials/working-with-indexeddb-part-3--net-36220">http://code.tutsplus.com/tu...</a></p></div>
	</div>
</div>
		