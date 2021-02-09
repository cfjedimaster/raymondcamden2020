
<div class="comment" id="c_1713729819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729819">1</a> by Brian
		posted on 2/17/2011 at 8:28 PM
		</div>
		<div class="comment_text"><p>Knowing your input stream is important -- even more so if the INI file allows escaping of semi-colons as documented in that page -- some may escape with a backslash, some may enclose in quotes -- so the "chop off the last nibbly bit" may not always be the most effective solution -- although it will force the INI provider to rethink their data if they're using semis as a significant value...</p><p>Having a squiggly spec seems to be all too common in the computing world.  CSV.  HTML.  Number of beers consumed to get you feeling tiddly but not drunk...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729821">2</a> by Carol
		posted on 2/18/2011 at 1:14 AM
		</div>
		<div class="comment_text"><p>Great information, Jedi!  How come this doesn't work though:</p><p>	file = "G:\My Documents\Pics\.picasa.ini";<br>	xx = getProfileSections(file);</p><p>CF doesn't like a variable passed into getProfileSections()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729820">3</a> by Raymond Camden
		posted on 2/18/2011 at 1:16 AM
		</div>
		<div class="comment_text"><p>Sorry - how is it failing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729824">4</a> by hmmmm
		posted on 4/4/2012 at 4:35 AM
		</div>
		<div class="comment_text"><p>just by and by, I know this is an old post, but just seen it....either make sure your ini files are not downloadable (outside webroot) or make them .cfm and surround by cf comments that way if found (or even funnier, indexed by google) the contents are not visible like so<br>&amp;lt---<br>;secret mans business<br>[live]<br>somethingthatshouldnotbeknown=thisvalue<br>---&amp;gt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729823">5</a> by scott johnson
		posted on 3/3/2014 at 10:52 PM
		</div>
		<div class="comment_text"><p>you say you've moved away from .ini files, but what to? xml configu files or something else entirely?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729822">6</a> by Raymond Camden
		posted on 3/5/2014 at 7:45 PM
		</div>
		<div class="comment_text"><p>I'd either use XML or JSON. Probably JSON more nowadays.</p></div>
	</div>
</div>
		