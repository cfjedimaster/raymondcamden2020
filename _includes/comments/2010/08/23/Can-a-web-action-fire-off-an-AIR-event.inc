
<div class="comment" id="c_1713726097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726097">1</a> by Anthony
		posted on 8/24/2010 at 2:26 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Cool stuff... It's been a while since I tried experimenting with it, but you may also want to check out the option of adding a custom URI handler so you could do something like:<br>foo://myCoolApp/id/12312/</p><p>...and launch your app just like an iTunes link</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726101">2</a> by FlexMonkeyPatches
		posted on 8/24/2010 at 3:28 AM
		</div>
		<div class="comment_text"><p>You can launch an AIR app from a Flex Web app.  See docs:<br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fflex%2F3%2Fhtml%2Fhelp.html%3Fcontent%3Ddistributing_apps_3.html%3Am78xEztgSP2tgg75CaB8oGf9lO8&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/flex/3/html/help.html?content=distributing_apps_3.html">http://livedocs.adobe.com/f...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726098">3</a> by Raymond Camden
		posted on 8/24/2010 at 5:01 AM
		</div>
		<div class="comment_text"><p>Very nice. And I'll point out - my first reply was going to say that it's only applicable if your site is a Flex app, but you can certainly _embed_ a Flex app as something tiny within the rest of your site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726099">4</a> by Raymond Camden
		posted on 8/24/2010 at 5:02 AM
		</div>
		<div class="comment_text"><p>@Anthony: I looked into that. It appears as if it is only possible (on Windows) if you modify the registry. (I'm assuming something similar exists for Mac/Unix.) AIR supports executing command line apps so that is within the realm of possible as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726103">5</a> by Andrew Duvall
		posted on 8/25/2010 at 5:40 AM
		</div>
		<div class="comment_text"><p>Ray, Thank you for this excellent post, I have found it very informative.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726102">6</a> by Weiland
		posted on 8/25/2010 at 4:49 PM
		</div>
		<div class="comment_text"><p>If I understand the underlying question you just want to communicate from your browser embedded SWF to an AIR app. Why not just use a localconnection to talk between the two. I've used this method for years to communicate between a SWF in a web page and another SWF either running as an EXE or embedded in another application. In fact I'm using it on a project right now &amp; have an old AS2 SWF communicating back and forth with a Flex SWF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726100">7</a> by Raymond Camden
		posted on 8/25/2010 at 6:57 PM
		</div>
		<div class="comment_text"><p>That would require the app to be running though, right? In my example, it would start up after running the file. But yeah - sounds like another good alternative.</p></div>
	</div>
</div>
		