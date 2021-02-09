
<div class="comment" id="c_1713618309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618309">1</a> by Julian
		posted on 5/11/2005 at 2:17 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing, Ray. Realise it's work in progress, but there seems to be a typo at line 572: cfhttp.fileContents with an "s".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618311">2</a> by Richard East
		posted on 5/11/2005 at 3:13 PM
		</div>
		<div class="comment_text"><p>Also line 571 -<br>&lt;cfhttp url="#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a>#"&gt;</p><p>The tag needs closing:<br>&lt;cfhttp url="#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a>#" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618310">3</a> by Raymond Camden
		posted on 5/11/2005 at 6:03 PM
		</div>
		<div class="comment_text"><p>Corrected, although the closing / on cfhttp isn't necessary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618312">4</a> by Richard East
		posted on 5/11/2005 at 8:41 PM
		</div>
		<div class="comment_text"><p>Thanks as this is not the 1.0 release!</p><p>I develop in cfeclipse and without closing the chttp tag it doesn't realise the tag had finished, so it was unable to read all the methods/functions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618307">5</a> by Daniel Schmid
		posted on 5/13/2005 at 2:25 PM
		</div>
		<div class="comment_text"><p>I checked the generated feed with <a href="http://disq.us/url?url=http%3A%2F%2Ffeedvalidator.org%3AzBLIUEP5brgpQcRXt5LYSKj3Nxw&amp;cuid=3321886" rel="nofollow noopener" title="http://feedvalidator.org">http://feedvalidator.org</a><br>and their seems to be an issue with the dateformat</p><p>****validator response****<br>line 59, column 37: dc:date must be an W3CDTF date (20 occurrences) [help]<br>&lt;dc:date&gt;2005-05-12T00:00:00+-02:00&lt;/dc:date&gt;<br>**************************</p><p>the genrated file is at<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.avguide.ch%2Frss%2FavguideRSS.xml%3A-bS3f2AJ05xKhnusEEKPLtrmQoU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.avguide.ch/rss/avguideRSS.xml">http://www.avguide.ch/rss/a...</a></p><p>also my rss reader mentions invalid dateformat, but I can't figute at what is wrong. Code in RSS.cfc at line 177 seems ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618316">6</a> by Julian
		posted on 5/17/2005 at 4:32 PM
		</div>
		<div class="comment_text"><p>This has already been really useful, Ray. Suggestion for further improvement: a charset optional argument for the cfhttp call would help it deal with non UTF feeds. Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618317">7</a> by Henry Rendleman III
		posted on 4/20/2006 at 6:00 PM
		</div>
		<div class="comment_text"><p>Hey this looks really good.  It actually looks like a couple of functions we are using.  I am also using the xmlparse function in Cold Fusion to hack up the rss stuff.  Here is a problem that I ran into however.  It seems that some people out there have sites that make an xml document and leave some extended ascii characters on the front of the xml contnet.  I had to write a function to check it out and make sure that we are only using the standard ascii character set in the beginning and hack off the front characters if they are not standard ascii.  I hope this helps you in creating your cfc.  Thanks so much for what you guys contribute to this community.  If you are interested in this just shoot me an e-mail and i will be happy to help.  Thanks a bunch!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618308">8</a> by Tim Adair
		posted on 11/1/2007 at 9:32 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>This has been very helpful.  How would I limit the amount of characters in the description that are in the output?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618313">9</a> by Raymond Camden
		posted on 11/1/2007 at 4:15 PM
		</div>
		<div class="comment_text"><p>You just use the Left() function normally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618315">10</a> by Colin
		posted on 4/28/2008 at 11:54 PM
		</div>
		<div class="comment_text"><p>is there any option for parsing the [more] as is used in the main blog page? or just trim it from the descriptions...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618322">11</a> by Raymond Camden
		posted on 4/29/2008 at 12:03 AM
		</div>
		<div class="comment_text"><p>Colin - I'm not quite sure I get you. This entry is about rss.cfc, a RSS generator. [more] is a convention that BlogCFC uses, a different product.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618321">12</a> by Colin
		posted on 4/29/2008 at 12:10 AM
		</div>
		<div class="comment_text"><p>Ok - I'll dig around for removing the [more] in the creation of the rss from the blogcfc.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618323">13</a> by Raymond Camden
		posted on 4/29/2008 at 12:13 AM
		</div>
		<div class="comment_text"><p>Did you modify your code? Mine does not do that. I bet you modified it to support a rich text editor which choked on &lt;more&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618324">14</a> by Colin
		posted on 4/29/2008 at 12:19 AM
		</div>
		<div class="comment_text"><p>must be time for an update to my blogcfc :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618327">15</a> by Billy
		posted on 6/26/2009 at 7:49 PM
		</div>
		<div class="comment_text"><p>The link in your post does not seem to work. <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fdownloads%2Frss.zip%3AIzp7JSLtloqbaDmWjt0xaRdgM7A&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/downloads/rss.zip">http://ray.camdenfamily.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618326">16</a> by Raymond Camden
		posted on 6/26/2009 at 11:53 PM
		</div>
		<div class="comment_text"><p>Just change it to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%3ASnQdkTPhxh9LZ0EYImp7Dl7Dx-o&amp;cuid=3321886" rel="nofollow noopener" title="www.coldfusionjedi.com">www.coldfusionjedi.com</a></p></div>
	</div>
</div>
		