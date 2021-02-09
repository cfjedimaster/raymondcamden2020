
<div class="comment" id="c_1713655537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655537">1</a> by James Edmunds
		posted on 7/28/2006 at 8:51 PM
		</div>
		<div class="comment_text"><p>I think that Don Booth's comments on accessibility are very interesting, especially in his observation that screen readers are likely themselves to be changing to keep up with the development of RIAs.</p><p>One of the great attractions for RIAs are their ability to make it easy for users to tackle sizable bodies of information and zero quickly in on the parts they are looking for. It would be great for disabled users to get these benefits, too.</p><p>That's actually where a tightly developed framework like Spry might be particularly valuable - having some sort of tagging that lets a screen reader know (and/or have a screen reader that recognizes Spry regions/tokens) that there are branches / links / behaviors that lead to specific detail nuggets, essentially making, say, a Spry master region into a menu for the screen-reader user to select the specific detail region to load.</p><p>Anyone have enough sense of the way screen readers parse to suggest some ways to accomplish this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655533">2</a> by Sean Corfield
		posted on 7/29/2006 at 8:45 AM
		</div>
		<div class="comment_text"><p>And folks need to bear in mind that Flex is pretty accessible - most controls have accessibility hooks that work with the leading screen reader. So we have the situation that Flash is more accessible than the much-vaunted "Web 2.0" AJAX technology :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655540">3</a> by James Holmes
		posted on 7/29/2006 at 2:24 PM
		</div>
		<div class="comment_text"><p>I can't speak for Spry, but the CFAJAX driven apps I've built work well with all screanreaders I've tested. It's probably because I always insert new content using .innerHTML, which maybe friendlier to screenreaders than manipulating the DOM directly.</p><p>I can provide a sample page if people want to test a reader against this technique.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655538">4</a> by James Edmunds
		posted on 7/29/2006 at 7:00 PM
		</div>
		<div class="comment_text"><p>James H., I'd like to hear more about this and see the sample, thanks! I have been using Prototype quite a bit (in fact, on three different projects that I started with Spry but switched to Prototype either for the richness of the formObserver or the ease of formatting, and also one or two other issues), and the fact that with Prototype you can easily pass back articulately-parameterized, fully formatted innerHTML has wound up being a bonus in both cases.</p><p>If this also helps with accessibility, that's great news.</p><p>Looks like it's also time for me to download a screen reader or two to do some checking of my own pages!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655536">5</a> by James Holmes
		posted on 7/29/2006 at 7:25 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bifrost.com.au%2Ftestreader%2F%3ARf9YBMI9dt32LbsIJMqw2RmwwoQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bifrost.com.au/testreader/">http://www.bifrost.com.au/t...</a></p><p>Click on the link - the new links can be tabbed to and will be read by the screen reader. Screen readers that add extra navigation also follow the links.</p><p>I originally tested this in Window-Eyes and Jaws on PC and Voiceover on Mac, with FF, IE and NS. All worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655535">6</a> by Amber
		posted on 7/30/2006 at 5:01 AM
		</div>
		<div class="comment_text"><p>the fact that with Prototype you can easily pass back articulately-parameterized, fully formatted innerHTML has wound up being a bonus in both cases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655539">7</a> by BL
		posted on 7/30/2006 at 5:09 AM
		</div>
		<div class="comment_text"><p>How about another Spry question related to displaying datasets in tables.</p><p>Can you do conditional row formatting on a &lt;tr&gt; tag?</p><p>For example: You have 10 rows of data in a &lt;table&gt; all formatted nice.  Based on data the row, you want to make 1 row look a little different (a different color and colspan).  In cfml, it would be the equivalent of a &lt;cfoutput query="myQuery"&gt;&lt;cfif myQuery.user_type eq "admin"&gt;&lt;tr bgcolor="#efefef"&gt;&lt;td colspan="3"&gt;Admin&lt;/td&gt;&lt;/tr&gt;&lt;cfelse&gt;&lt;tr&gt;&lt;td&gt;#username#&lt;/td&gt;&lt;td&gt;#email#&lt;/td&gt;&lt;/td&gt;#phone#&lt;/td&gt;&lt;/tr&gt;&lt;/cfif&gt;&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655541">8</a> by Raymond Camden
		posted on 7/30/2006 at 5:15 AM
		</div>
		<div class="comment_text"><p>BL: Yes, I didn't have time to show it at my preso, but you can do conditionals exactly as you described. I'll try to do a demo like what you described next week. Actually, what I may do is a modification of this demo and make CF entries bolded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655545">9</a> by BL
		posted on 7/30/2006 at 6:09 AM
		</div>
		<div class="comment_text"><p>sweet.  your breeze preso was great, by the way.  it got me motivated.</p></div>
	</div>
</div>
		