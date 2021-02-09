
<div class="comment" id="c_1713623443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623443">1</a> by Roger Benningfield
		posted on 12/18/2005 at 4:17 PM
		</div>
		<div class="comment_text"><p>Ray: This is what I use to handle _italics_:</p><p>^\_([^\_]+)\_<br>...and...<br>([[:space:]&gt;])\_([^\_]+)\_</p><p>Basically, the first will only match stuff that's at the beginning of a line, and the second will only match stuff with a space in front of it. Put them together, and you've got 90% of situations covered.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623442">2</a> by Doug Hughes
		posted on 12/18/2005 at 7:14 PM
		</div>
		<div class="comment_text"><p>Ray - I think the way I'd handle this (and it might not be what you want to do) is to implement FCKeditor instead of the formatting syntax.  You could then limit the number of formatting functions avaliable and add one custom button to create new wiki terms.</p><p>Oh, and not to be a jerk, but I really dislike the "wiki terms" functionality as it currently exists.  If I have something that's more than one word I don't want to have to squish it together into a camel-case word just to make it a link.</p><p>My solution though was to simply change how that render behavior functions so that I just wrapped things in a % sign.</p><p>I also added the ability to wrap a chunk of text in a [code] block and have it format as code.  It's not elegant, but it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623440">3</a> by Raymond Camden
		posted on 12/18/2005 at 8:44 PM
		</div>
		<div class="comment_text"><p>Doug, you don't need to use WikiTerms to make links. WikiTerms is just one way. You can also do internal links using: [[Foo|Label]].</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623446">4</a> by Raymond Camden
		posted on 12/18/2005 at 9:23 PM
		</div>
		<div class="comment_text"><p>Roger, I'm having some luck with this idea: To use an _, you escape it by doubling it. My regex first replaces __ with chr(1), then does the normal _..._ replacement, than replaces chr(1) with _. Seems ok I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623441">5</a> by Massimo Foti
		posted on 12/18/2005 at 11:57 PM
		</div>
		<div class="comment_text"><p>Java 1.4 RegExp libraries support lookbehind, you can bypass CF's RegExp and leverage Java instead.</p><p>You could use this UDF:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfmentor.com%2Fcode%2Findex.cfm%3Faction%3Dscript%26id%3D151%3AjhIIWIQ-R4HlaB6mb2EbNOlAbZo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfmentor.com/code/index.cfm?action=script&amp;id=151">http://www.cfmentor.com/cod...</a></p><p>Or give this CFC a try:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.massimocorner.com%2Fcoldfusion%2Fcfc%2Ftmt_java_regexp.zip%3ARunIjyjaqGlyAj_CyTFDdREXxGM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.massimocorner.com/coldfusion/cfc/tmt_java_regexp.zip">http://www.massimocorner.co...</a></p><p>Massimo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623445">6</a> by todd
		posted on 12/19/2005 at 12:15 AM
		</div>
		<div class="comment_text"><p>Raymond - Could you loop through and replace the bad characters with their ASCII equivalents (replace _ with chr(95)) or would the chr(95) be evaluated anyways and throw it off?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623447">7</a> by Raymond Camden
		posted on 12/19/2005 at 7:03 AM
		</div>
		<div class="comment_text"><p>Massimo, I'll give it a try - but first I want to see if my users mind the 'escape' route. Ie, they can use _ or + but must escape them first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623444">8</a> by Roland Collins
		posted on 12/20/2005 at 2:20 AM
		</div>
		<div class="comment_text"><p>Why not switch to some other common markup like BBCode, wherein you would be able to use this style of formatting:</p><p>[B]This is bold[/B]<br>[I]This is italic[/I]</p><p>Brackets instead of angle-brackets like in html.  This is how most of the other forums type software works (IPB, PHPBB, etc.).  *Something* is going to have to be escaped to make this work - I would personally rather escape my formatting codes rather than the main text of my post.  It's far more intuitive that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623456">9</a> by Raymond Camden
		posted on 12/20/2005 at 2:33 AM
		</div>
		<div class="comment_text"><p>I see your point - but I don't think this will be too difficult. Let me see how the public reacts though. _ isn't used much in normal text.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623451">10</a> by Doug Hughes
		posted on 12/20/2005 at 2:35 AM
		</div>
		<div class="comment_text"><p>I really like Roland's suggestion.  Consider this a positive reaction.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623458">11</a> by Raymond Camden
		posted on 12/20/2005 at 2:42 AM
		</div>
		<div class="comment_text"><p>Massimo, I didn't realize your solution was so nicely packaged. I'm having a bit of trouble with it - do you mind if I ping you directly via email?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623454">12</a> by Raymond Camden
		posted on 12/20/2005 at 3:08 AM
		</div>
		<div class="comment_text"><p>Ok, guys, I gave up. [b] and [i] it is. Doug, you want to test this real quick?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623452">13</a> by Doug Hughes
		posted on 12/20/2005 at 3:11 AM
		</div>
		<div class="comment_text"><p>Sure, kick it off to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623459">14</a> by Massimo Foti
		posted on 12/20/2005 at 9:57 AM
		</div>
		<div class="comment_text"><p>Sure Ray, feel free to contact me directely whenever you want.</p><p>Massimo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623453">15</a> by Raymond Camden
		posted on 12/20/2005 at 5:26 PM
		</div>
		<div class="comment_text"><p>Thanks Massimo. I ended up using the [b] format anyway. Your regex libraries did work - I just had issues with the regex I was using.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623457">16</a> by Massimo Foti
		posted on 12/20/2005 at 7:23 PM
		</div>
		<div class="comment_text"><p>The [b] format sounds like a wise choice. <br>Portability of RegExp's patterns across different engines can be somewhat tricky.<br>Java's RegExp libraries are very powerful and offer a few interesting features not available in ColdFusion, but porting non trivial patterns may require some efforts.</p></div>
	</div>
</div>
		