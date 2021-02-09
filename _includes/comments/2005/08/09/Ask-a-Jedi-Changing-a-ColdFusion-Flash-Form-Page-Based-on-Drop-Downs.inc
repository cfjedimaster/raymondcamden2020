
<div class="comment" id="c_1713619877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619877">1</a> by Todd
		posted on 8/9/2005 at 11:49 PM
		</div>
		<div class="comment_text"><p>Ray - I've done something similar, but using buttons instead.  It creates a really cool effect if you hide the tabs in a tab navigator (by adding a style attribute to the "page" of "tab-height: 0;tab-width: 0;").  With the hidden tabs and the button navigation it almost looks like you're jumping page to page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619875">2</a> by Daniel Budde II
		posted on 8/10/2005 at 12:35 AM
		</div>
		<div class="comment_text"><p>Hey Todd, would you be willing to post your code somewhere for us to take a gander at?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619876">3</a> by Todd
		posted on 8/10/2005 at 12:36 AM
		</div>
		<div class="comment_text"><p>I'll throw something together this evening - if Ray is OK with that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619881">4</a> by Raymond Camden
		posted on 8/10/2005 at 12:40 AM
		</div>
		<div class="comment_text"><p>Todd - email me directly, ray@camdenfamily.com. I'll add the code in the 'pretty' format to the main entry if it can fit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619880">5</a> by Todd
		posted on 8/10/2005 at 1:54 AM
		</div>
		<div class="comment_text"><p>Daniel:</p><p>Here is an example:</p><p>&lt;cfform format="flash" name="test"&gt;<br>	&lt;cfformgroup type="tabnavigator" id="tabnav" height="300" width="300" style="tab-height: 0;tab-width: 0;"&gt;<br>		&lt;cfformgroup type="page"&gt;<br>			&lt;cfformitem type="html"&gt;This is tab 1.&lt;/cfformitem&gt;<br>			&lt;cfinput type="button" name="goto_tab_2" value="Go To Tab 2" onclick="tabnav.selectedIndex = 1;"&gt;<br>		&lt;/cfformgroup&gt;<br>		&lt;cfformgroup type="page"&gt;<br>			&lt;cfformitem type="html"&gt;This is tab 2.&lt;/cfformitem&gt;<br>			&lt;cfinput type="button" name="goto_tab_1" value="Go To Tab 1" onclick="tabnav.selectedIndex = 0;"&gt;<br>		&lt;/cfformgroup&gt;<br>	&lt;/cfformgroup&gt;<br>&lt;/cfform&gt;</p><p>Obviously additional actionscript functionality can be added (such as hiding the button until a certain form field is populated, etc).  Don't forget, actionscript starts counting at 0...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619879">6</a> by Philippe Maegerman
		posted on 8/10/2005 at 6:42 PM
		</div>
		<div class="comment_text"><p>I've done it with a Tree as well ;)<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfpim.blogspot.com%2F2005%2F04%2Fbuilding-navigation-using-cftree.html%3AysASrhX_7b0Rzg5oIY61YupT1s4&amp;cuid=3321886" rel="nofollow noopener" title="http://cfpim.blogspot.com/2005/04/building-navigation-using-cftree.html">http://cfpim.blogspot.com/2...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619886">7</a> by Todd
		posted on 8/10/2005 at 8:04 PM
		</div>
		<div class="comment_text"><p>Hey PIM - when are we going to see some new posts on your site?  It's been a while.  And please, english next time!  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619883">8</a> by Philippe Maegerman
		posted on 8/10/2005 at 9:04 PM
		</div>
		<div class="comment_text"><p>LOL it was supposed to land on my other blog, anyway wasn't it a good exercise for you language lovers? ;))<br>I have stopped a bit playing with CF7 flash forms because of Flex, I am quite active on the flexcoder mailing list now, I 'd to blog about it, but I have asked for the non-commercial license a few months ago and never got a reply.  <br>The thing is that I'm not asked much for those pretty forms in my work, so my interest is going down, and beside that not much people have shown interest, except Nahuel from ASFusion ;) <br>I got plenty of emails asking me to debug code, but not really about forms :((</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619882">9</a> by David Brown
		posted on 8/14/2005 at 10:02 AM
		</div>
		<div class="comment_text"><p>what irc server/channel do most users use?</p><p>efnet coldfusion<br>?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619878">10</a> by Michael White
		posted on 2/2/2006 at 2:54 AM
		</div>
		<div class="comment_text"><p>where can I find an example of hiding a tab on a tab navigator until you select a record from a grid in the same form?</p></div>
	</div>
</div>
		