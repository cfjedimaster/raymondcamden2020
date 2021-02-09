
<div class="comment" id="c_1713735022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735022">1</a> by Mike
		posted on 9/7/2011 at 7:12 PM
		</div>
		<div class="comment_text"><p>I'm glad to see "Captive Runtime Support " for android, but what will this do for download size? Also not sure if you know but would air just not install if it was already installed on the system, or would it reinstall air? It would be nice to have like a smart apk or something that when downloading it would know if the user had air installed and then choose the right apk to download, don't think that is possible but it would be nice :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735024">2</a> by Raymond Camden
		posted on 9/7/2011 at 7:23 PM
		</div>
		<div class="comment_text"><p>"I'm glad to see "Captive Runtime Support " for android"<br>It's for all actually.</p><p>"but what will this do for download size"<br>Make it bigger. :) Yeah, that's kind of obvious, but it does simplify things quite a bit.</p><p>"Also not sure if you know but would air just not install if it was already installed on the system, or would it reinstall air?"<br>As far as I know, it makes it so your apps aren't using the framework at all - I mean externally. So if you had AIR N installed already and you shipped with AIR X as a captive runtime, it works in isolation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735029">3</a> by Brian Kotek
		posted on 9/7/2011 at 7:32 PM
		</div>
		<div class="comment_text"><p>The Captive Runtime means the AIR framework you target is bundled with the application itself, rather than using a shared runtime. It does mean the app will be bigger, but it's not a large increase (one or two Mb probably). If that's a big problem for some reason (though I'm not sure why it would be), I believe you can also still target the shared runtime for now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735030">4</a> by Raymond Camden
		posted on 9/7/2011 at 7:35 PM
		</div>
		<div class="comment_text"><p>Right - the ability to used the shared framework isn't going anywhere anytime soon. (Afaik. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735028">5</a> by Mike
		posted on 9/7/2011 at 11:35 PM
		</div>
		<div class="comment_text"><p>Ohh ok so its not the full air plugin, that's cool. I was thinking the app would jump from like 2 megs to like 18 with the full air plugin.</p><p>Thanks.</p></div>
	</div>
</div>
		