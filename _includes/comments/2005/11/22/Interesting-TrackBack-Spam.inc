
<div class="comment" id="c_1713622804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622804">1</a> by JesterXL
		posted on 11/22/2005 at 9:10 PM
		</div>
		<div class="comment_text"><p>Yeah, they're called "splogs" and "link farms".  Basically, they create a multitude of sites that screen-scrape legitimate content from RSS feeds, blogs, and other sites onto their own.  They then inter-link amongst the hundreds of sites they have created.  Trackback's is another way for them to get a high-ranking site to link to them.  Thus, if you are highly ranked in Google, by linking to them, you greatly increase their site ranking; Trackback is the sneaky way of getting you to link to them.</p><p>Combined with cross-site linking, blog comment spam, etc., these all add to get them to the top of Google and other search engine results for legitimate search terms.  They can utilize their high page ranking to sell their services, or sell their high page rank to increase the page rank of their customers.</p><p>...basically, shady Search Engine Optimization &amp; Placement services.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622805">2</a> by Steven Erat
		posted on 11/22/2005 at 9:30 PM
		</div>
		<div class="comment_text"><p>Now that I'm using BlogCFC 4 with Trackbacks, I've also graduated to my first Trackback SPAM.</p><p>On an entry about my Flickr photos for my wedding reception, a Trackback was made to a site not linking to me at all, but rather is just some kind of Wedding bookstore and book reviewer, at (modified URL with [SPAM]) http://weddings[SPAM].blog57[SPAM].com/posts/14626.  After reviewing the content, I deleted the trackback.</p><p>On a related note, since having added a Contact Me page it seems I've opened up another Pandora's box. Some folks have been using it for 'legitimate' reasons, but others have submitted requests for me to blog content on their behalf, and others are sending Technical Support questions that aren't related to any blog entries.  So, I've added a 'Use this form if...' / 'Dont use this if ...' type caveat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622803">3</a> by Raymond Camden
		posted on 11/22/2005 at 9:35 PM
		</div>
		<div class="comment_text"><p>Hey Steve, want to trade? You should see my Ask a Jedi queue. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622806">4</a> by Steven Erat
		posted on 11/22/2005 at 9:37 PM
		</div>
		<div class="comment_text"><p>To continue, for years now I've been getting Link Spam where my site is periodically flooded with HTTP GET requests where the HTTP REFERER references a casino, a pharmaceutical item, or one of many adult related themes.  There's a Wikipedia entry about this type of spamming: <a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FSpam_blog%3AulKMNAW4W7XnxXY1iWpuVUGLOvo&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Spam_blog">http://en.wikipedia.org/wik...</a></p><p>Since I display my referers on my blog under a public viewable page, I filter all traffic through a custom tag that checks for a couple hundred patterns which I'm continually adding to.  If a banned referer comes through, I send a 403 Not Authorized header, provide a link to the main blog site.  Pete Freitag has more about this solution: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F263.cfm%3AN2dAGPu7KiG9ej-1mHn-yklyriU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/263.cfm">http://www.petefreitag.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622808">5</a> by Steven Erat
		posted on 11/23/2005 at 1:02 AM
		</div>
		<div class="comment_text"><p>Hey! Did you jinx me? ;)</p><p>I got about 100 requests today from the IP network 85.255.113.0/24 where they were requesting trackback.cfm directly with a blank HTTP Referer and the following query string type:</p><p>[UUID]&amp;excerpt=[long list of links to urlencoded sites]&amp;url=[link to domain <a href="http://disq.us/url?url=http%3A%2F%2Fpcadsl.com.tw%3AxagmP1Rmx4Yz3JyBpYw209ReKTE&amp;cuid=3321886" rel="nofollow noopener" title="pcadsl.com.tw">pcadsl.com.tw</a>]&amp;title=[censored]</p><p>The IP resolves to Belarus, and the domain is not on WHOIS.</p><p>Since the method was GET not POST, the trackback didn't get added, but if it were a POST then it might  have worked with just one more parameter.</p><p>I'm going to add a requirement to trackback.cfm that the method must be POST and the HTTP Referer must be either blank "" or come from my domain.  This will break the trackback spec since trackbacks can't be automated and would require a user add manually add a trackback, but might save me the headache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622809">6</a> by Christopher Wigginton
		posted on 11/23/2005 at 2:09 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You might want to consider a captcha, which will eliminate a large portion of most spam attacks, Unfortunately, captcha's are not "accessible" friendly. I'm not sure Bayesian filtering would catch trackback's when the links are several levels deep in the splog hiearchy and the top linkages seem relatively ok.  Another option might be to connect to an RBL (Real Time Spam Block List).</p><p>I've also thought about post limits per ip, so on a flood, you just trim after the set limit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622812">7</a> by tony of the weeg clan
		posted on 11/23/2005 at 2:19 AM
		</div>
		<div class="comment_text"><p>is this a feature easily disabled in blogcfc 4.0, i really do not want the headaches.</p><p>and secondly, what does a trackback really get me anyway?</p><p>tw</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622811">8</a> by JesterXL
		posted on 11/23/2005 at 2:20 AM
		</div>
		<div class="comment_text"><p>Captcha's stop bots dead in their tracks.  They are THE solution, although, I can't comment on the accessibility ramifications.</p><p>Trackbacks are nice in that they allow you to immediately know when someone links to you and/or discusses your article.  It helps add to the connectedness of blogs.  Comments help increase further discussion, and trackbacks are just another facet of that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622814">9</a> by Raymond Camden
		posted on 11/23/2005 at 2:25 AM
		</div>
		<div class="comment_text"><p>Tony, TBs can be turned off in the ini file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622813">10</a> by tony of the weeg clan
		posted on 11/23/2005 at 2:33 AM
		</div>
		<div class="comment_text"><p>killer.  might captcha be a 4.01 upgrade?  ray ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622815">11</a> by Raymond Camden
		posted on 11/23/2005 at 2:36 AM
		</div>
		<div class="comment_text"><p>I do not deny the power of captha - but I despise it. That being said - if there is a free way of doing it, I would consider it. If I were doing it for a 'pay site', I'd use Alagad (love all his stuff), but since BlogCFC is free, I can't use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622911">12</a> by Christopher Wigginton
		posted on 11/23/2005 at 2:47 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Check out</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.emerle.net%2Fprogramming%2Fdisplay.cfm%2Ft%2Fcfx_captcha%3ApjcorT-j1n7o5f1zW_bvc8p4idg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.emerle.net/programming/display.cfm/t/cfx_captcha">http://www.emerle.net/progr...</a></p><p>As far as I know it is free and he doesn't charge for the download.  What you could do is put in the framework to support cfx_captcha (check out those security enhancements I sent you awhile back) and then enable it through the ini.  Leave it up to the blog installer to put in the cfx_captcha tag and then enable it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622910">13</a> by Christopher Wigginton
		posted on 11/23/2005 at 3:03 AM
		</div>
		<div class="comment_text"><p>Check out the cfx_captcha implemented for comments on my blog, which is version 3.9 of your blogCFC (haven't had the time to go to 4 yet).  I just turned it on via the ini.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.intersuite.com%2Fclient%2F%3A3qvKpyop7ZzUwUDZaAKdeJxt9TM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.intersuite.com/client/">http://www.intersuite.com/c...</a></p></div>
	</div>
</div>
		