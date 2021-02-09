
<div class="comment" id="c_1713676279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676279">1</a> by cfSearching
		posted on 1/18/2008 at 9:23 AM
		</div>
		<div class="comment_text"><p>If anyone is interested, I have been experimenting with a line wrap function that uses java's LineBreakMeasurer.  I wrote up an entry on it here</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsearching.blogspot.com%2F2008%2F01%2Ftext-wrapping-with-images-and.html%3Ar1N9a8eOqNxcotymWdmNs6K64mk&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsearching.blogspot.com/2008/01/text-wrapping-with-images-and.html">http://cfsearching.blogspot...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676284">2</a> by Dan B
		posted on 1/26/2008 at 1:08 AM
		</div>
		<div class="comment_text"><p>Hey Ray.. Has anyone found a way to "smooth out" and anti-alias fonts when adding text to an image? Is there an attribute that I might be missing?  I created a dynamic <a href="http://disq.us/url?url=http%3A%2F%2Flast.fm%3AWcYtdBkeS3ye_tB96RKA_yDzCxY&amp;cuid=3321886" rel="nofollow noopener" title="last.fm">last.fm</a> badge using their audio scrobbler data feed and cfimage but the font leaves a lot to be desired.</p><p>See badge at: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.last.fm%2Fuser%2Fdjbyron%2F%3ABuJn0mTfGEqZ76iwHNKrMIDQpNc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.last.fm/user/djbyron/">http://www.last.fm/user/djb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676282">3</a> by cfSearching
		posted on 1/26/2008 at 2:19 AM
		</div>
		<div class="comment_text"><p>Dan B,</p><p>Are you using the ImageSetAntialiasing function?<br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Fhtmldocs%2Ffunctions_h-im_43.html%235208875%3AqgowMt8X21GVf15LToFMQzJOY40&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/htmldocs/functions_h-im_43.html#5208875">http://livedocs.adobe.com/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676288">4</a> by Dan B
		posted on 1/26/2008 at 2:37 AM
		</div>
		<div class="comment_text"><p>SWEET!  Exactly what I was looking for!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676289">5</a> by Misty
		posted on 2/12/2012 at 1:20 PM
		</div>
		<div class="comment_text"><p>Hi ray, ran the same example in CF 9.0.1, and it throws error on Font, Says "Arial-Black" invalid font, i used then another font "Agency FB" and it worked.</p><p>Just to bring nto your notice</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676293">6</a> by Raymond Camden
		posted on 2/12/2012 at 9:17 PM
		</div>
		<div class="comment_text"><p>Right, that is to be expected. Different machines will have different fonts available. We actually provide a function so you can check that programatically. (I think it is getAvailableFonts).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676296">7</a> by Raymond Camden
		posted on 2/12/2012 at 9:40 PM
		</div>
		<div class="comment_text"><p>Shoot - I stand corrected. I thought we did expose available fonts. Doing some research.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676298">8</a> by Raymond Camden
		posted on 2/12/2012 at 9:42 PM
		</div>
		<div class="comment_text"><p>You can use the code here to get the list of fonts dynamically:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsearching.blogspot.com%2F2008%2F07%2Fwhat-fonts-are-available-in-myjvm.html%3A1Nh6DNrAvxaJrt4eL-pWir0opBk&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsearching.blogspot.com/2008/07/what-fonts-are-available-in-myjvm.html">http://cfsearching.blogspot...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676301">9</a> by Misty
		posted on 2/13/2012 at 12:24 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!</p><p>if i want to place the image just in the bottom middle what constraints i need to change</p><p>here is a fubction to list fonts installed</p><p>&lt;cffunction name="getFontNames" access="public" returntype="array"&gt;<br>  &lt;cfset var allFonts = CreateObject("java", "java.awt.GraphicsEnvironment").getLocalGraphicsEnvironment().getAllFonts() /&gt;<br>  &lt;cfset var fontArray = ArrayNew(1) /&gt;<br>  &lt;cfset var i = "" /&gt;<br>  &lt;cfloop from="1" to="#ArrayLen(allFonts)#" index="i"&gt;<br>    &lt;cfset ArrayAppend(fontArray, allFonts[i].getName()) /&gt;<br>  &lt;/cfloop&gt;<br>  &lt;cfreturn fontArray /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676354">10</a> by Raymond Camden
		posted on 2/14/2012 at 3:32 AM
		</div>
		<div class="comment_text"><p>Please see the imageUtils project at RIAForge. It includes code that lets you "measure" a block of text graphically. This can be used for things like centering.</p></div>
	</div>
</div>
		