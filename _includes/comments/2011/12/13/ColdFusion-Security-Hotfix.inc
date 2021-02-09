
<div class="comment" id="c_1713737332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737332">1</a> by Nathan Dintenfass
		posted on 12/14/2011 at 11:12 AM
		</div>
		<div class="comment_text"><p>How is it that after all these years applying fixes to ColdFusion is still so byzantine?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737326">2</a> by Raymond Camden
		posted on 12/14/2011 at 5:09 PM
		</div>
		<div class="comment_text"><p>I know, I know. It is being fixed in Zeus. It took too long, but it's being fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737316">3</a> by Peter Tilbrook
		posted on 12/14/2011 at 5:18 PM
		</div>
		<div class="comment_text"><p>Destroyed our CF9 "server_settings.cfm" essentially killing that page. Had to un-inststal CF9.01 entirely. Not happy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737335">4</a> by Raymond Camden
		posted on 12/14/2011 at 5:47 PM
		</div>
		<div class="comment_text"><p>I believe there was an update post release - can you check? If not, please ping me directly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737330">5</a> by Peter Tilbrook
		posted on 12/16/2011 at 2:42 PM
		</div>
		<div class="comment_text"><p>An update "post release"? Serious? No sign of it and have already re-installed CF9 - minus the HF3 patch. Note at this stage not even 9.01. It just works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737334">6</a> by Raymond Camden
		posted on 12/16/2011 at 2:46 PM
		</div>
		<div class="comment_text"><p>You wouldn't see a 'sign of it' it would just be a replaced zip. If you still have the issue after trying the path, ping me directly and I'll try to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737336">7</a> by Brendan
		posted on 12/20/2011 at 10:45 PM
		</div>
		<div class="comment_text"><p>I'm being told by our CF Admins that this HotFix will remove the default "action" attribute of &lt;cfform&gt; tags using the cgi.script_name when it is omitted. Is that true?  It sounds like it would then break a lot of sites that just use &lt;cfform&gt; for self-submitting pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737327">8</a> by Raymond Camden
		posted on 12/21/2011 at 2:05 AM
		</div>
		<div class="comment_text"><p>I believe the issue stemmed from the fact that it would also pick up cgi.query_string too, which means someone could include something naughty in the url. For now, I'd recommend just hard coding in the action.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737324">9</a> by Brendan
		posted on 12/21/2011 at 3:50 AM
		</div>
		<div class="comment_text"><p>They just updated our Dev Box with the HotFix and it did indeed break all of the places we use &lt;cfform&gt;. To be honest, I'm a little shocked Adobe made this change. As of right now they have the action attribute as optional which was pretty convenient when dealing with forms inside cfdiv tags. You can get the same result with &lt;cfform action="#cgi.SCRIPT_NAME#?#cgi.QUERY_STRING#"&gt; but that's not as simple and clean as the old way.</p><p>Does Adobe have any documentation explaining this change in the cfform tag?  I imagine a non-trivial number of developers are having the same issue as we are.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737325">10</a> by Raymond Camden
		posted on 12/21/2011 at 4:02 AM
		</div>
		<div class="comment_text"><p>Why shocked? If it was documented- then you had to expect it, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737329">11</a> by Brendan
		posted on 12/21/2011 at 7:33 PM
		</div>
		<div class="comment_text"><p>Oh, but doesn't the official documentation say the opposite?  To go ahead and leave off action attribute and the form will submit to itself?  At least here it says its been changed to optional since version MX:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FCFMLRef%2FWSc3ff6d0ea77859461172e0811cbec22c24-7fb7.html%3AVtyYQ-35ybS6SJB6N_WRMsgltec&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/CFMLRef/WSc3ff6d0ea77859461172e0811cbec22c24-7fb7.html">http://help.adobe.com/en_US...</a></p><p>We were lucky that our application had yet to launch.  Others with live sites, who took the same shortcut with cfform as we did, will get a nasty surprise when they apply this HotFix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737328">12</a> by Raymond Camden
		posted on 12/21/2011 at 7:44 PM
		</div>
		<div class="comment_text"><p>Yeah, sometimes the docs get a bit behind updates/hot fixes. Not a great answer, but, it's the truth.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737341">13</a> by Dana K
		posted on 12/23/2011 at 4:26 AM
		</div>
		<div class="comment_text"><p>This hotfix has broken out 8.0.1 dev box twice now. Both times I get 500 errors for executequery or createobject. Brutal.</p></div>
	</div>
</div>
		