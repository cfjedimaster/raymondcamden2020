
<div class="comment" id="c_1713711832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711832">1</a> by Sean Coyne
		posted on 2/1/2009 at 12:06 AM
		</div>
		<div class="comment_text"><p>Awesome Ray, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711834">2</a> by Raymond Camden
		posted on 2/1/2009 at 12:08 AM
		</div>
		<div class="comment_text"><p>If you use this in production and can share the URL, please do. Share. The URL. Thanks. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711835">3</a> by Ron West
		posted on 2/1/2009 at 1:26 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I have a customer who is trying to this exact thing - he calls it his Glossary.  We were considering just doing all of this on the ColdFusion side but maybe this technique will be more fun and visually appealing.  I will point them to this script and see what they think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711833">4</a> by Raymond Camden
		posted on 2/1/2009 at 1:28 AM
		</div>
		<div class="comment_text"><p>Cool, let me know. If he likes it, he can use the code for ONE MILLION DOLLARS! (Or 0. Up to him!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711839">5</a> by Gary Fenton
		posted on 2/1/2009 at 1:34 AM
		</div>
		<div class="comment_text"><p>I've written a couple of these live 'terminology' routines for different clients (all back-end, not javascript though) and they had lots of hot words that were actually phrases or at least two words long. What I'm saying is that if you're only scanning an array of single words then you'll be skipping lots of hot phrases.</p><p>Sean said it's for an accreditation website, so I took a look at one and found these multi-words that may benefit from a terminology tooltip:</p><p>accreditation standards, WTO TBT, company reputation, inspection bodies, independent evaluation.</p><p>Each word by themselves mean one thing, but when together with another word they take on a different meaning.</p><p>I think it will work better if you compare the 'database' of words and phrases against the text on the page rather than the other way around.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711837">6</a> by Edward Beckett
		posted on 2/1/2009 at 1:39 AM
		</div>
		<div class="comment_text"><p>Ray ... Why doesn't he just store the tooltip definitions in an XML file ... like the &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Fhtmldocs%2Fhelp.html%3Fcontent%3Dajaxdata_01.html%3AFxcE1r-x8I8IqdOtZTyYgwa1aV0&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/htmldocs/help.html?content=ajaxdata_01.html">http://livedocs.adobe.com/c...</a>"&gt;CFSelect ~ bindCFNS.CFC&lt;/a&gt; example in the CF8 docs?  Would that work or am I off base here ... ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711836">7</a> by Raymond Camden
		posted on 2/1/2009 at 1:47 AM
		</div>
		<div class="comment_text"><p>@EB - I don't think you need to store a full url in such an xml file - just some unique identifier since your client could construct a url. But to your suggestion in general, I talk about that towards the end of the blog entry. My worry was that your list of terms would be too large to load via ajax.</p><p>@GF - Good point there. However, I still think it would be bad to send the entire db of words to the client. Another option would be to maybe send the entire text to the server? Instead of unique words. Then you would be able to do what you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711840">8</a> by Edward Beckett
		posted on 2/1/2009 at 2:00 AM
		</div>
		<div class="comment_text"><p>There would have to be a way to make the terms two dimensional IE ... category ... listing ... like the state &gt; city relationship ... I have the bindCfns.CFC working as in the docs example ... The cities usually load in a matter of two - to three seconds ... FWIW there's around 40,000 listings in the XML file ..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711838">9</a> by anthony
		posted on 2/1/2009 at 2:03 AM
		</div>
		<div class="comment_text"><p>Ray, wouldn't it be easier to add the links into the copy before sending the page to the browser?  I dont understand the benefit of having jQuery do the work of finding words and then using another http request (which could be a very large request) to get the links.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711841">10</a> by Raymond Camden
		posted on 2/1/2009 at 2:06 AM
		</div>
		<div class="comment_text"><p>@EB - 2-3 seconds isn't long ... until it is added to every single page. ;)</p><p>@anthony - Sean specifically said this wasn't an option. Now, if the content you wanted to hot link was 100% db driven, then it probably would be simpler. But if it wasn't, then there wouldn't be an easy way to automatically add links when new terms are added. I don't agree that the first post will be huge since it is just unique words. The flip side to that though is that we all know what happens when you assume. If this were in production I'd add some logging to the cfc method. I could look later on to see, on average, how many unique words were being sent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711842">11</a> by Edward Beckett
		posted on 2/1/2009 at 2:12 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fscopecache.riaforge.org%2F%3AopQLQGLmbIKXEaaya9AD7BImf6c&amp;cuid=3321886" rel="nofollow noopener" title="http://scopecache.riaforge.org/">http://scopecache.riaforge....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711843">12</a> by denny
		posted on 2/1/2009 at 2:13 AM
		</div>
		<div class="comment_text"><p>@Ray:  Entire text to server == bingo!</p><p>I think that's the best way to do it.</p><p>You could do something like: send the text to the server, have the server wrap "hot" content with a span or href, and then use jQuery or whatnot to scan the returned text (adding a CSS class to the "hot" content makes this easy) and "widgit-ize" what needs to be.</p><p>FWIW: dojo has things that make all this pretty easy.</p><p>FWIW2: Seems sorta like this stuff could go in an a11y /i18ln deal...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711844">13</a> by Dan Sorensen
		posted on 2/1/2009 at 2:20 AM
		</div>
		<div class="comment_text"><p>Interesting implementation. :-)</p><p>I've been looking into something similar. However, in my variation I wanted to check all CAP WORDS against a list of known acronyms and if there is a match, replace it with an acronym tag with the definition in the title.</p><p>It seems like you can do most of this work on the server side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711846">14</a> by Kumar
		posted on 2/1/2009 at 2:20 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>For the pop-up, I recommend jqModal.<br><a href="http://disq.us/url?url=http%3A%2F%2Fdev.iceburg.net%2Fjquery%2FjqModal%2F%3AMBj6CveU5-At6awbEplEcORNP8Y&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.iceburg.net/jquery/jqModal/">http://dev.iceburg.net/jque...</a></p><p>Example:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion-ria.com%2Ftest%2Ftest.cfm%3AHVZ1L0oOTn3cn0JWlpEu-z5Rado&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfusion-ria.com/test/test.cfm">http://coldfusion-ria.com/t...</a> (FF works best).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711847">15</a> by Raymond Camden
		posted on 2/1/2009 at 2:23 AM
		</div>
		<div class="comment_text"><p>@EB - ScopeCache is for caching slow processes. It has nothing to do with network traffic. That is my concern.</p><p>@denny - That could work as well. I know jQuery makes it easy to say, 'take items with class x and do y to them', so if the server added the links and used a class, that could also be an option. As I said - many ways to solve this. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711851">16</a> by todd sharp
		posted on 2/1/2009 at 2:57 AM
		</div>
		<div class="comment_text"><p>Is there a jQuery tooltip plugin, or was the requirement specific to a window/dialog?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711853">17</a> by Raymond Camden
		posted on 2/1/2009 at 2:59 AM
		</div>
		<div class="comment_text"><p>Well I think Sean already had that part done, so the only 'requirement' here is what I wanted to work. ;)</p><p>Rey Bango pointed me to the jQuery UI groups so I'm going to give them a try sometime later today.</p><p>Maybe I can write something up and the jQuery folks could use it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711848">18</a> by Jamie Krug
		posted on 2/1/2009 at 8:27 PM
		</div>
		<div class="comment_text"><p>FWIW, I'd agree with Kumar -- jqModal worked well for me in my first adventure into AJAX+modal stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711850">19</a> by Raymond Camden
		posted on 2/1/2009 at 8:34 PM
		</div>
		<div class="comment_text"><p>Well, I'm digging into the UI Dialog stuff some more, this time outside of the stuff above. Maybe if I focus just on the dialog I'll be able to make it work. Going to blog my results later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711849">20</a> by Kumar
		posted on 2/2/2009 at 4:16 AM
		</div>
		<div class="comment_text"><p>Another take on this, using a database in this case:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusion-ria.com%2FBlog%2Findex.cfm%2F2009%2F2%2F1%2FColdFusion-and-jQuery-definition-autolinking-A-DB-driven-implementation%3AZiLSyMNvUd3IxRUBiVQx1TBeFnc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusion-ria.com/Blog/index.cfm/2009/2/1/ColdFusion-and-jQuery-definition-autolinking-A-DB-driven-implementation">http://www.coldfusion-ria.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711854">21</a> by Raymond Camden
		posted on 2/2/2009 at 5:16 PM
		</div>
		<div class="comment_text"><p>Cool, Kumar. I posted a comment to your entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711855">22</a> by Andy
		posted on 2/3/2009 at 2:27 AM
		</div>
		<div class="comment_text"><p>Hi Ray.  I've implemented this without JQuery. You do the tagging on the server when the page text is being added in the admin page for the site. The tagged text block is saved in the database  record.</p><p>There is another table with just terms and their definitions. This is loaded into the server memory and the text block being submitted as part of the page text is compared word for word with the terms. When a word match is found, the word is rewritten with a style and some JS. Then the when all is done, the record is saved in the DB ready to be sent out to the browser. The JS function for the popup is in the header for the site. All I am doing is loading another CF Page passing the unique ID of the definition and querying for the definition. Not very hi-tech I know, but it works great. (see terms underlined in orange.)</p><p>Gary F. Has a good point and this is where the feature needs work. Context is important for a term and that is for version 2.0.</p></div>
	</div>
</div>
		