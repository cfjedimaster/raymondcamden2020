
<div class="comment" id="c_1713685072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685072">1</a> by Chad
		posted on 8/12/2008 at 6:04 PM
		</div>
		<div class="comment_text"><p>I ran into the same thing a few weeks back.  I kept blaming my programming for being slow, and tried to optimize it, but once i really started looking at the debugging stats i noticed the pages were slow because of the database querys.  I added a few indexes and the pages were at least 5 times faster.</p><p>I will have to check out FR to see if it can find any other problems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685060">2</a> by Scott P
		posted on 8/12/2008 at 6:10 PM
		</div>
		<div class="comment_text"><p>May not be intended but I don't upload zips anymore.  I just link to the create from svn link and let that create the zips.  Twas easier for me that way.  Would it be possible to create a single download from the svn repos using a link in admin then point the downloads to that?  There might be several other folks using the ceate from svn as their primary download source.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685070">3</a> by DanaK
		posted on 8/12/2008 at 6:55 PM
		</div>
		<div class="comment_text"><p>Don't forget (depending on the DB) to setup maintenance plans to rebuild those indexes now and again. Just setting them up once doesn't handle cleaning them up, and can lead to them getting fragmented! You'll end up in the same place you were before setting up the indexes eventually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685071">4</a> by Raymond Camden
		posted on 8/12/2008 at 7:04 PM
		</div>
		<div class="comment_text"><p>@ScottP: You would have to do it by hand. Ie, make the zip from SVN, save to desktop, then edit project, upload. I need to add some caching to the zip creation, but the issue is how to handle updates. I know SVN allows for post-commit hooks, but I don't know how to use those. I could use an SVN op to get the latest update, compare it to the timestamp on the zip, and return the zip if it isn't old.</p><p>@DanaK: Is that doable via the MySQL visual front end?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685074">5</a> by David Herman
		posted on 8/12/2008 at 7:23 PM
		</div>
		<div class="comment_text"><p>All the post commit hook does is run a script for you after the commit finishes, lets say you want to email someone every time the commit happens.  Granted it sounds like this is running on windows so you're more limited in what the script can do, unless it runs some custom compiled code that's called from your script.  In the *nix world any shell script will do.  We currently use it to update tickets with every commit done in relation to that ticket.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685076">6</a> by Raymond Camden
		posted on 8/12/2008 at 7:25 PM
		</div>
		<div class="comment_text"><p>Yeah, it's a Windows box. I'd bet I could use Perl perhaps, but I haven't written Perl in 10 years.</p><p>If anyone wants to volunteer... ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685079">7</a> by Mike Kelp
		posted on 8/12/2008 at 7:38 PM
		</div>
		<div class="comment_text"><p>Another suggestion is to install curl (installable on either windows or linux) and use a windows bat or linux script to make a request to your cf server with all the information you need.</p><p>It's relatively easy to do as curl makes the web request a simple one line call. Then you just pass in the arguments you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685078">8</a> by David Herman
		posted on 8/12/2008 at 7:43 PM
		</div>
		<div class="comment_text"><p>Curl would be perfect.  I've done exactly that from linux but had not thought about installing it via windows.</p></div>
	</div>
</div>
		