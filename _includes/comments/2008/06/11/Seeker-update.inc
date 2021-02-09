
<div class="comment" id="c_1713681685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681685">1</a> by Sami Hoda
		posted on 6/11/2008 at 7:51 PM
		</div>
		<div class="comment_text"><p>Wow... this is turning out to be quite nice!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681688">2</a> by Casey
		posted on 6/11/2008 at 10:32 PM
		</div>
		<div class="comment_text"><p>I also found a couple other things..</p><p>We are creating indexReader, but not using it.<br>You can cache the searcher, analyzer, and parser to avoid recreating them every search, but you have to recreate the hitcollector every search.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681690">3</a> by Raymond Camden
		posted on 6/11/2008 at 11:31 PM
		</div>
		<div class="comment_text"><p>Good call on indexReader.</p><p>As for the others, I don't want to assume app scope since a person may not be using it within an application. Very unlikely, I know, but still. In my tests the object creation was -very- quick, like 0-5ms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681689">4</a> by Lucas Sherwood
		posted on 7/16/2008 at 5:22 AM
		</div>
		<div class="comment_text"><p>another thought on the indexquery side, any reason why it nukes the index each time?<br>should there be a flag not to reinit the index so that you can just add records</p><p>oh and then maybe use the UpdateDocument instead of addDocument so your primary key stays unique...<br>just a thought...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681691">5</a> by Raymond Camden
		posted on 7/16/2008 at 5:34 AM
		</div>
		<div class="comment_text"><p>The ability to add a key, edit a key, and delete a key, is something I need to add. Frankly I just forgot, but thats really the last 'pieces' of functionality that I've left out. I'll try to get it this week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681684">6</a> by Sebastiaan
		posted on 6/1/2009 at 11:16 PM
		</div>
		<div class="comment_text"><p>Hi Ray, does this wrapper work in a shared hosting environment? I don't have access to the CF 8 Administrator and cannot request anything that cannot be served to all clients on the shared server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681686">7</a> by Raymond Camden
		posted on 6/2/2009 at 3:17 PM
		</div>
		<div class="comment_text"><p>It depends on what's locked down. The latest version uses JavaLoader to load the Java files, so nothing needs to be copied to the classpath. The CF Admin stuff obviously won't work for you, but you don't need to have it.</p></div>
	</div>
</div>
		