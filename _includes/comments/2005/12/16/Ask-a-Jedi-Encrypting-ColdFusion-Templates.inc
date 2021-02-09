
<div class="comment" id="c_1713623413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623413">1</a> by Joshua cyr
		posted on 12/17/2005 at 2:22 AM
		</div>
		<div class="comment_text"><p>I have to encrypt for some applications.  Mostly to keep those who shouldn't touch anything from touching things.  It will not keep anyone out who really wants to see the code, which is well understood.  If I wasn't doing product work, and instead just strait development for clients than I wouldn't bother with the encryption.  It is really only valuable for those making resellable applications with CF where they need to have at least &lt;b&gt;some&lt;/b&gt; protection over the license or code.</p><p>What I hate and really surprises me is that dreamweaver will break the encryption even if they don't change the files and simply open the files.  I think DW doesn't realize they are encrypted and thus shouldn't be ftp'd up as a text file.</p><p>I would love to know more about the sourceless deployment though.  Is that enterprise only?  This is something I meant to look into a while ago, and have just been to busy to touch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623410">2</a> by Dave Shuck
		posted on 12/17/2005 at 3:10 AM
		</div>
		<div class="comment_text"><p>I think it pays to write completely unmaintainable code.  Sure they can see it, but can they ever figure it out???  Here are some rules to follow:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fthc.org%2Froot%2Fphun%2Funmaintain.html%3Aj5QvoVO27KZeOptkWunA9-6GrXo&amp;cuid=3321886" rel="nofollow noopener" title="http://thc.org/root/phun/unmaintain.html">http://thc.org/root/phun/un...</a></p><p>(and yes I am kidding, but I have been looking for an excuse to post that old classic!)</p><p>In all seriousness, I think in most cases Ray's philospohy is usually enough.  For when it isn't, there is sourceless deployment, but that requires Enterprise version on both ends which is not always an option either.</p><p>From what I understand BlueDragon offers some type of template encryption, but I have no specific knowledge of how that works, and again you would have to make sure the recipients were running BD too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623411">3</a> by Emmet
		posted on 12/17/2005 at 4:41 AM
		</div>
		<div class="comment_text"><p>I encrypt the hell out of everything.  Then i encrypt it again just to make sure.  I'm not even sure I want to share this comment right now. Just in case someone thinks they can copy the rest of this post as their own... ¤”&gt;òå.Û{D¡xéÿbÍåÿšb…%Jñ}Â&lt;S.s‚.,¬™«¯Zî.¬Ð.©ð®òØ`ú.Ÿ¤®ã.°-½‘.å.lÓÝ²-ð" .®ï.6×z|#Ùý™98ºÕ[’	jœœ—÷ÝÄÆ@qÚ›.'ëf¸Ì.7¼aò?sÁ/.·ô øæîmg!€MË• {÷...ƒ<br>)F+..É#fƒ^âè€²‹'^^'wÔqÓ(ËÐÎ]·.#´YS¾˜%.K¿&amp;V.T~NŠxjkù.ˆV£.?-hE2<br>ä.?+L«ŒZ)..ÃðQŒGÁL®ë.Å›.Š.3òÊü„Î¼ÅûÅ¸</p><p>I've said all I'm comfortable saying at this time.</p><p>©Emmet McGovern 2005</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623417">4</a> by Dave Carabetta
		posted on 12/18/2005 at 1:43 AM
		</div>
		<div class="comment_text"><p>I think one big reason why encyrption didn't take off was because it was easily broken in pre-MX 7 versions. MX 7 introduced the ability to truly encrypt your templates (and even deploy them as EAR/WAR files), but I think a fatal business decision was made during the Blackstone development cycle to not back-port the code to handle MX 6. Many people have upgraded to MX 7, but many haven't. And to only be able to encrypt your IP for one CF version when you ideally would want to support MX 6.1 as well is a waste. I'm not suggesting it would have been trivial to back-port the code. But this shortcoming, to me, hamstrung encryption and EAR/WAR deployment. Maybe in a couple of years when most people are running MX 7 across the board this feature set will gain new traction. Until then, it's just a "nice to have."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623416">5</a> by Roger Benningfield
		posted on 12/18/2005 at 4:28 PM
		</div>
		<div class="comment_text"><p>"It would stop honest people..."</p><p>...and stupid, lazy people. Never overestimate the stupid, lazy people.</p></div>
	</div>
</div>
		