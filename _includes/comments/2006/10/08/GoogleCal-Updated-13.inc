
<div class="comment" id="c_1713658088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658088">1</a> by Jared Smith
		posted on 10/9/2006 at 7:02 PM
		</div>
		<div class="comment_text"><p>Can you confirm that this does NOT work with Coldfusion 6.1? I get an "Attribute validation error for tag http. The tag does not have an attribute called result." The result attribute is new to CF 7. Is there any way to make this compatible with CF 6.1? Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658103">2</a> by Raymond Camden
		posted on 10/9/2006 at 7:04 PM
		</div>
		<div class="comment_text"><p>That is confirmed. To make it work for cfmx 6, remove any result= and use cfhttp. instead of result. in the code. It won't be as threadsafe anymore but it should work fine then.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658106">3</a> by Russ
		posted on 1/11/2007 at 2:57 AM
		</div>
		<div class="comment_text"><p>I am a little confused about caching with google cal.<br>I ran the testa.cfm file with the public holidays calendar url, and it worked fine, but when I changed the URL to my calendar, it still shows the output for the Holiday calendar.  I cleared the browser cache, and CF template cache, but it still shows the holiday info.  So I took out the url all together, and it still shows the holiday info...<br>thoughts?</p><p>Russ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658102">4</a> by Raymond Camden
		posted on 1/11/2007 at 7:57 AM
		</div>
		<div class="comment_text"><p>Did you pass use ?reinit=1 in the URL? The caching I used there isn't specific to googlcal per se, I just wanted it to be a bit fster for playing with it.</p></div>
	</div>
</div>
		