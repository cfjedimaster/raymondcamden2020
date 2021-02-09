
<div class="comment" id="c_1713742100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742100">1</a> by Steve
		posted on 7/3/2012 at 12:29 AM
		</div>
		<div class="comment_text"><p>I was wondering, since your no longer using eclipse, what are you using for your mobile development.</p><p>Also, how does dw cs6 &amp; phonegap build change the game for using the phonegap api and building apps?  Basically, what you do differently from the getting started guide to work with dreamweaver compared to eclipse?  Jar files still needed?  What folder paths/structure would you need to use, etc....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742104">2</a> by Raymond Camden
		posted on 7/3/2012 at 1:05 AM
		</div>
		<div class="comment_text"><p>I just use a simple editor. Right now that is either Sublime or Brackets. I then use the command line or the Build service to generate binaries.</p><p>"Also, how does dw cs6 &amp; phonegap build change the game for using the phonegap api and building apps?"</p><p>It makes it easy. I have a LOT of respect for DW. It's just not my preferred editor.</p><p>"Basically, what you do differently from the getting started guide to work with dreamweaver compared to eclipse?"</p><p>So are you asking how to setup Eclipse for PG development? I'd check the phonegap docs as they discuss the setup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742106">3</a> by steve
		posted on 7/3/2012 at 4:29 PM
		</div>
		<div class="comment_text"><p>Thanks for the info.  You actually introduced me to phone gap back on version 1.2 with your megagap posting.</p><p>I'm ok with getting a site setup in phonegap with eclipse.</p><p>When using dreamweaver as your editor, and using their phonegap build service, there doesnt seem to be any documentation on the steps needed for using cordova.</p><p>Does my folder structure need to contain lib,  folders, or contain the jar files...</p><p>or</p><p>do I just need to reference cordova.js in the code and send it all up to the phonegap build site and they do the rest?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742086">4</a> by Raymond Camden
		posted on 7/3/2012 at 5:07 PM
		</div>
		<div class="comment_text"><p>Ah, I think I get you. So the only thing you need to do special is &lt;script src="cordova.js"&gt;&lt;/script&gt; Build will notice this and do the right replacements. Everything else - structure wise - can be up to you.</p></div>
	</div>
</div>
		