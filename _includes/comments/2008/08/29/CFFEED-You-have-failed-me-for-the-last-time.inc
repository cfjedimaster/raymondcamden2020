
<div class="comment" id="c_1713685388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685388">1</a> by Ryan Stille
		posted on 8/29/2008 at 10:25 PM
		</div>
		<div class="comment_text"><p>I, too, have been unhappy with the escaping/fixing that XMLFormat does.  I ended up writing my owner wrapper (named MyXMLFormat()) that calls XMLFormat() and does some additional search/replace.</p><p>Common characters I encountered that caused problems were ascii codes 11, 8220, 8221, 8216, 8217, 8211, 8212, 8226, 8230, and 8482.  Probably all from MS Word.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685396">2</a> by Rob Brooks-Bilson
		posted on 8/29/2008 at 10:47 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Do you guys have paid support with Adobe? It seems to me that if you do, this is something that they could/should be able to fix for you and issue a hotfix for.  I know you have a work-around, but it's stuff like this that Adobe should be issuing more hotfixes for between point releases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685399">3</a> by Sean Corfield
		posted on 8/29/2008 at 10:57 PM
		</div>
		<div class="comment_text"><p>I see this and can't help but wonder what Groovy's MarkupBuilder would do with these duff Microsoft characters...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685397">4</a> by Raymond Camden
		posted on 8/29/2008 at 11:00 PM
		</div>
		<div class="comment_text"><p>@Rob - Well, I reported it as a bug. I just can't imagine there is much that Adobe would do for this. I seem to be the only one complaining. ;)</p><p>@Sean - That sounds like a challenge to me. :) Going to try that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685400">5</a> by Raymond Camden
		posted on 8/29/2008 at 11:40 PM
		</div>
		<div class="comment_text"><p>Sean and I played with this a bit. First off - MarkupBuilder's are amazing. I just skimmed it for now (I was still a bit farther back in the Groovy book) but I'm in awe at how elegant it works.</p><p>But anyway, I took one of their demos, and modified it to include bad character 19 in the output. It runs just fine. On display, it shows up invisible on my screen, but the point is, it runs just fine. Here is the code (again, copyright goes to the Groovy in Action folks, I modified other bits of the code as well while playing):</p><p>char bad = 19</p><p>def builder = new groovy.xml.MarkupBuilder()</p><p>builder.numbers {</p><p>	for(i in 10..15) {<br>		number (value: i, square: i*i, double:i*2, label:'Hard coded '+bad + ' more text') {<br>			for (j in 2..&lt;i) {<br>				if(i % j == 0) {<br>					factor (value:j)<br>				}<br>			}<br>		}<br>	}<br>}</p><p>I hope to heck that renders ok here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685402">6</a> by Phillip Senn
		posted on 8/30/2008 at 12:30 AM
		</div>
		<div class="comment_text"><p>The Book: It is important to note that suddenly, and against all probability, a Sperm Whale had been called into existence, several miles above the surface of an alien planet and since this is not a naturally tenable position for a whale, this innocent creature had very little time to come to terms with its identity. This is what it thought, as it fell: <br>The Whale: Ahhh! Woooh! What's happening? Who am I? Why am I here? What's my purpose in life? What do I mean by who am I? Okay okay, calm down calm down get a grip now. Ooh, this is an interesting sensation. What is it? Its a sort of tingling in my... well I suppose I better start finding names for things. Lets call it a... tail! Yeah! Tail! And hey, what's this roaring sound, whooshing past what I'm suddenly gonna call my head? Wind! Is that a good name? It'll do. Yeah, this is really exciting. I'm dizzy with anticipation! Or is it the wind? There's an awful lot of that now isn't it? And what's this thing coming toward me very fast? So big and flat and round, it needs a big wide sounding name like 'Ow', 'Ownge', 'Round', 'Ground'! That's it! Ground! Ha! I wonder if it'll be friends with me? Hello Ground! <br>[dies] <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.imdb.com%2Ftitle%2Ftt0371724%2Fquotes%3AZzE1RzoJyd-faKlai52WaWocE7A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.imdb.com/title/tt0371724/quotes">http://www.imdb.com/title/t...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685404">7</a> by Nicholas
		posted on 8/30/2008 at 7:54 PM
		</div>
		<div class="comment_text"><p>I've run into similar problems quite a bit. This regular expression replace works well with XML processing where there is potential for bad chars:</p><p>// remove anything outside of explicit hex range (x20-x7F=standard chars,xA=carriage return,xD=line feed)</p><p>rssXml = reReplace(rssXml,"[^(!\x20-\x7F|\xA|\xD)]","","all");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685403">8</a> by Elliott Sprehn
		posted on 9/1/2008 at 10:05 AM
		</div>
		<div class="comment_text"><p>@Ray</p><p>The XML specification [1] states that char(19), and all the ascii control characters are not allowed in well formed XML.</p><p>If Groovy's MarkupBuilder is actually outputting char(19) then Groovy is broken. It's possible it's stripping the characters for you though, you'd have to check. If it's not, then the XML document you just generated is invalid, and almost every other XML parsing library will choke on it.</p><p>Yeah it's a real pain that this stuff happens, but that's what you get from a strict validating language like XML. CF is just using Xerces [2] for XML processing, so the error you're seeing has really nothing to do with CF at all, but rather the fact that Xerces followed the XML specification.</p><p>[1] &lt;<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxml11%2F%23NT-RestrictedChar%3E%3A7b8zsuGiGTIDcpei3XFVo3Q3InQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xml11/#NT-RestrictedChar>">http://www.w3.org/TR/xml11/...</a><br>[2] &lt;<a href="http://disq.us/url?url=http%3A%2F%2Fxerces.apache.org%2Fxerces-j%2F%3E%3A7TWPvB459VCwd4QXG1hj5o3DekA&amp;cuid=3321886" rel="nofollow noopener" title="http://xerces.apache.org/xerces-j/>">http://xerces.apache.org/xe...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685409">9</a> by Raymond Camden
		posted on 9/1/2008 at 4:43 PM
		</div>
		<div class="comment_text"><p>@ES: Groovy: I could test this by having Groovy save the output to a file - or to a variable, if possible - and then looping over the chars to check. I don't know Groovy well enough yet to do that, but I'll look into it.</p><p>So here is a crazy question. If chr(19) is never allowed in well formed XML, why doesn't xmlFormat remove it? Or handle it? I'd call that a bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685406">10</a> by Elliott Sprehn
		posted on 9/1/2008 at 7:55 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>Well, I'm not sure I'd call it a bug since XMLFormat() is fairly specific about what it escapes in the docs. Certainly it'd be useful if XMLFormat() removed all the restricted chars, but as it stands it's really more like HTMFormat(), than some kind of XMLSanitize().</p><p>Seems like CF just uses org.apache.commons.lang.StringEscapeUtils.escapeXml(), which isn't designed to remove all the restricted chars.</p><p>Why not file a wish ticket about it? :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Ffunctions_t-z_20.html%3AWKIHUORuPYxEfbsiKNPQBw9kcyU&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/functions_t-z_20.html">http://livedocs.adobe.com/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685405">11</a> by Raymond Camden
		posted on 9/1/2008 at 8:04 PM
		</div>
		<div class="comment_text"><p>Trust - I've filed a bug report for this quite some time ago. I think I need to file a new bug report though since cffeed has no automatic way of running xmlformat on data psssed to it. I blogged about this before, but if your db data isn't all escaped, you have to use querySetCell/xmlFormat on every cell. cffeed should do it for you automatically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685408">12</a> by Adam Tuttle
		posted on 9/2/2008 at 5:01 PM
		</div>
		<div class="comment_text"><p>Nice use of the fail whale. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685390">13</a> by Phillip Senn
		posted on 9/2/2008 at 5:41 PM
		</div>
		<div class="comment_text"><p>Oh, THAT'S what that whale image is!<br>Thank you.</p><p>I found a 10 minute interview with Twitter founder Biz Stone at<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.npr.org%2Ftemplates%2Fstory%2Fstory.php%3FstoryId%3D92177969%3ACQRWclrhTj-RXys3rPVMTNBxUpI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.npr.org/templates/story/story.php?storyId=92177969">http://www.npr.org/template...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685387">14</a> by Adam Tuttle
		posted on 9/2/2008 at 5:44 PM
		</div>
		<div class="comment_text"><p>Phillip, I enjoyed your quote though. I'm going to have to go back and read the books again. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685389">15</a> by Jose Galdamez
		posted on 8/25/2009 at 3:02 AM
		</div>
		<div class="comment_text"><p>I ran into this same problem when using cffile to write out the RSS XML manually. The XML had validation issues once the file was created.</p><p>That's when I found this UDF on CFLib.</p><p>DeMoronize<br><a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%2Findex.cfm%3Fevent%3Dpage.udfbyid%26udfid%3D725%3AZ98taHFIeTNkCnEp171l6361_pc&amp;cuid=3321886" rel="nofollow noopener" title="http://cflib.org/index.cfm?event=page.udfbyid&amp;udfid=725">http://cflib.org/index.cfm?...</a></p><p>I don't know if it'd work in this situation, but the I'd say the function name is definitely appropriate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685391">16</a> by Charles
		posted on 9/3/2009 at 6:30 PM
		</div>
		<div class="comment_text"><p>That's what you get for using an inferior web platform.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685393">17</a> by Raymond Camden
		posted on 9/3/2009 at 6:31 PM
		</div>
		<div class="comment_text"><p>Oh how amazingly useful there Charles. Thanks. Please - tell us the name of your miraculous platform that apparently has no bugs?</p></div>
	</div>
</div>
		