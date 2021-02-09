
<div class="comment" id="c_1713724615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724615">1</a> by Gary Stanton
		posted on 6/1/2010 at 5:13 PM
		</div>
		<div class="comment_text"><p>Heh! That's awesome... I always fancied doing something like this on one of my sites, but it was never important enough to seriously look into... Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724617">2</a> by Zarko
		posted on 6/1/2010 at 5:24 PM
		</div>
		<div class="comment_text"><p>Good one...  I always liked these "incremental" posts :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724620">3</a> by Raymond Camden
		posted on 6/1/2010 at 5:26 PM
		</div>
		<div class="comment_text"><p>Thanks @Zarko - they are hard to do unless you plan for it. ;) I knew I'd run into a few issues along the way so I made sure to work on progressively updated UDFs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724619">4</a> by Zarko
		posted on 6/1/2010 at 5:29 PM
		</div>
		<div class="comment_text"><p>Suggestion: In case you have "large" body, 1000+ chars of text. Keeping it in variable maybe could be problematic, maybe next step would be to do this in jQuery? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724621">5</a> by Raymond Camden
		posted on 6/1/2010 at 5:42 PM
		</div>
		<div class="comment_text"><p>Why would 1K+ chars be an issue? If we assume an "article" length on the web as our average size, I think this solution would work fine, and would be even faster with simple caching. I love jQuery - and I am considering a jQuery version of this, but I don't see a great _need_ to use it over server side, know what I mean? I was actually considering jQuery for something else: Highlighting the auto links with a 'marker' so folks know it goes off site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724622">6</a> by andy matthews
		posted on 6/1/2010 at 5:48 PM
		</div>
		<div class="comment_text"><p>@Zarko...</p><p>Drawback to doing it via AJAX is that search engines wouldn't see the links as it's done client side. If that's not a concern then AJAX would certainly be a good option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724623">7</a> by andy matthews
		posted on 6/1/2010 at 5:54 PM
		</div>
		<div class="comment_text"><p>Ray...</p><p>You wouldn't even need jQuery for a marker. Just use an attribute selector:</p><p>a[href*='wikipedia'] {<br>	background: url('<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adinstruments.com%2Fassets%2Flayout-images%2Fwikipedia-icon.gif%27%29%3A9JFqgcO2wzxdc0oDYOxlRIbtDqU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adinstruments.com/assets/layout-images/wikipedia-icon.gif')">http://www.adinstruments.co...</a> no-repeat;<br>	padding-left: 18px;<br>	line-height: 22px;<br>}</p><p>with this type of HTML:<br>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwikipedia.org%2Fw%2Findex.php%3Ftitle%3DSpecial%3ASearch%26search%3D%3AiMylmONybfGW9eKHKQmairiaD2o&amp;cuid=3321886" rel="nofollow noopener" title="http://wikipedia.org/w/index.php?title=Special:Search&amp;search=">http://wikipedia.org/w/inde...</a>"&gt;something like this&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724624">8</a> by Raymond Camden
		posted on 6/1/2010 at 5:56 PM
		</div>
		<div class="comment_text"><p>That works in CSS2 or 3?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724625">9</a> by Zarko
		posted on 6/1/2010 at 6:03 PM
		</div>
		<div class="comment_text"><p>@Andy - Usually you don't want Google to crawl out from your text, especially not to wikipedia :) I'd even add to Ray's code nofollow option to try to avoid this.<br>But makes sense if you don't care about SEO</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724627">10</a> by andy matthews
		posted on 6/1/2010 at 6:09 PM
		</div>
		<div class="comment_text"><p>Ray...</p><p>Attribute selectors have been around since CSS2, but apparently the version I provided is CSS3:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fcss3-selectors%2F%23attribute-representation%3AX8vBafF7ydtx46SRakCs-yT8-hs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/css3-selectors/#attribute-representation">http://www.w3.org/TR/css3-s...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724628">11</a> by Raymond Camden
		posted on 6/1/2010 at 6:22 PM
		</div>
		<div class="comment_text"><p>@Andy - Interesting. Probably safe enough to use and not worry about the folks not supporting CSS3.</p><p>@Zarko - (btw - love your name - is that ok to say? reminds me of Ming from Flash Gordon) good point on the nofollow!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724631">12</a> by Zarko
		posted on 6/1/2010 at 6:45 PM
		</div>
		<div class="comment_text"><p>@Ray - Thanks! I read your comment out laud, asked "What's Flash Gordon" and millisecond later heard yell and noticed pencil flying towards my face from the direction my team manager Marko Simic (runner up from CF9 contest). Sorry! Sorry! Feel bad that I grew up little bit later so (again) Wikipedia helped me <a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FHans_Zarkov%3A2kXul6r64kRBstu2cVdbR8gfb9U&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Hans_Zarkov">http://en.wikipedia.org/wik...</a>. Žarko means glowing/bright in our language.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724629">13</a> by todd sharp
		posted on 6/2/2010 at 12:36 AM
		</div>
		<div class="comment_text"><p>Nice one Ray.  One possible enhancement would be to limit the auto-linking to be only the first occurrence of a given keyword.  Perhaps you could add an optional third arg to the UDF to toggle that on/off?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724630">14</a> by Raymond Camden
		posted on 6/2/2010 at 12:38 AM
		</div>
		<div class="comment_text"><p>Yeah -I can see using an argument to handle either/or.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724632">15</a> by Jose Galdamez
		posted on 6/2/2010 at 2:03 AM
		</div>
		<div class="comment_text"><p>I was a bit hesitant to go through this blog post from top to bottom cause of the length, but like Zarko said, the progressive nature of it made it a lot easier to go through. I think the RegEx approach is pretty clever. Great work, Ray.</p><p>Re: the CSS2 vs. CSS3 selectors, one work around would be to use jQuery since it supports CSS3 selectors. The more consistent approach, IMO, would be just give the link some funky class. You know, like</p><p>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.wikipedia.org%2Ffoo%3AThkQg40KYAX3tJkyzqZm4YUrXwY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.wikipedia.org/foo">http://www.wikipedia.org/foo</a>" class="funky"&gt;Linked Text&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724641">16</a> by Scott A. Wimmer
		posted on 6/12/2010 at 4:32 AM
		</div>
		<div class="comment_text"><p>The shower is where my best concepts originate.</p></div>
	</div>
</div>
		