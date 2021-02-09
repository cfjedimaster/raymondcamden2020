
<div class="comment" id="c_1713740753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740753">1</a> by ChrisBlackwell
		posted on 4/25/2012 at 6:38 PM
		</div>
		<div class="comment_text"><p>you do have to be careful what you put in the pseudo-constructor because as you discovered the application isn't available at that point.</p><p>I ran into this issue when trying to pull my orm config from a file and then cache it, the only place thats available for you to cache things in the pseudo constructor is the server scope.</p><p>would be nice if this area got a little bit of love from the devs</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740741">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740741">2</a> by Nando Breiter
		posted on 4/25/2012 at 8:33 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Here's what I use within FW/1 to reload the application:</p><p>public function setupRequest() {<br>		if(structKeyExists(url, "init")) {<br>			ormReload();<br>			setupApplication();<br>			location(url="index.cfm",addToken=false);<br>		}<br>}</p><p>Works well for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740751">3</a> by Brian Thornton
		posted on 4/26/2012 at 5:46 AM
		</div>
		<div class="comment_text"><p>Let me know if I can lend a hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740757">4</a> by Raymond Camden
		posted on 4/26/2012 at 5:54 AM
		</div>
		<div class="comment_text"><p>With?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740762">5</a> by Brian Thornton
		posted on 4/26/2012 at 6:04 AM
		</div>
		<div class="comment_text"><p>conversion of cflib</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740763">6</a> by Raymond Camden
		posted on 4/26/2012 at 6:06 AM
		</div>
		<div class="comment_text"><p>Well, gee, thats obvious. Sorry. Um - I appreciate the offer - but it's getting me some practice with FW/1 again. I'm not in a big rush also since this server won't be CF10 for a little while.</p><p>That being said - if you want to help admin the content, you can.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740754">7</a> by Mark Mandel
		posted on 4/26/2012 at 6:56 AM
		</div>
		<div class="comment_text"><p>FYI - if you ApplicationStop(), you don't need to ORMReload() :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740744">8</a> by Raymond Camden
		posted on 4/26/2012 at 2:37 PM
		</div>
		<div class="comment_text"><p>Interesting - I always used them both. Well, that will make things even simpler.</p></div>
	</div>
</div>
		