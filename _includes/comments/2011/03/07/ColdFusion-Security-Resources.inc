
<div class="comment" id="c_1713730231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730231">1</a> by Tom Chiverton
		posted on 3/7/2011 at 8:05 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rachaelandtom.info%2Fcontent%2Fprotecting-coldfusion-applications-common-attacks%3A56TfxKTEEoE3gl86aLyxzt9vhFs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rachaelandtom.info/content/protecting-coldfusion-applications-common-attacks">http://www.rachaelandtom.in...</a> &lt; apparently my comment is spam so I'm typing some more random junk in to try and trip the filter back the right way I hope it's enough this time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730228">2</a> by Jason Dean
		posted on 3/7/2011 at 8:07 PM
		</div>
		<div class="comment_text"><p>One of the best places to start learning about security is the OWASP site.  The single bets way to figure out how to mitigate a risk is to understand WHY it is a risk and HOW it is exploited.</p><p>The OWASP Top 10 site is a great place to learn about these specific attacks, plus a bunch more.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.owasp.org%2Findex.php%2FCategory%3AOWASP_Top_Ten_Project%3AwdUMefxaL8MMeIRlr04_UVjbWw4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.owasp.org/index.php/Category:OWASP_Top_Ten_Project">http://www.owasp.org/index....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730233">3</a> by Jason Dean
		posted on 3/7/2011 at 8:18 PM
		</div>
		<div class="comment_text"><p>Another thing that I will point about about your security topics is that none of them are as simple as they may seem.</p><p>I will explain further.</p><p>1. A lot of people think that &lt;cfqueryparam&gt; is the be-all-end-all solution to SQL Injection.  It is not. Unless you never do anything dynamic outside of a WHERE clause you need to consider how you will protect your SQL statements if you want dynamic sort, joins, table names or columns.</p><p>2. XSS is a tricky one.  A REALLY tricky one. It requires a through understanding of the executable contexts of an HTML page and how one might break out of a non-executable context and into an executable one.  This is another one where people think they can solve their problems with a few simple functions. Unfortunately, that is not the case.</p><p>I have been working on a lengthy blog post about this, I will use this as motivation to finish it this week.</p><p>3. XSRF is just a confusing thing to think about. It can be exploited in a number of ways against different types of sites (i.e. Traditional, Ajaxy, Web Services). It takes some thinking about to understand what is happening.  Fortunately, the mitigation is relatively easy, though can also be very time consuming to implement on a legacy site.</p><p>Feel free to hit me on the contact form of my site with questions. I'll help where I can.</p><p>If you have tried that already, I had been havign email problems on my site for a while so it is possible I didn't get your email. You can also try me at j a s o n (at@) 12robots . com  (ignore all that whitespace)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730229">4</a> by Tom Chiverton
		posted on 3/7/2011 at 8:23 PM
		</div>
		<div class="comment_text"><p>Cheers Jason, I'd hoped I made that clear in my own post :-) <br>I'll link to here from there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730234">5</a> by Jason Dean
		posted on 3/7/2011 at 8:52 PM
		</div>
		<div class="comment_text"><p>Oh, I just remembered, my presentation at Adobe MAX last year specifically covered a lot of the OWASP Top 10 stuff and how they can be mitigated.</p><p>Blog Post here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.12robots.com%2Findex.cfm%2F2010%2F10%2F29%2FRecording-and-slides-from-MAX-2010-Securing-ColdFusion-Applications-Presentation%3AdpGWqCitaov0BEARbIUluM4Rqf0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.12robots.com/index.cfm/2010/10/29/Recording-and-slides-from-MAX-2010-Securing-ColdFusion-Applications-Presentation">http://www.12robots.com/ind...</a></p><p>Recording here: <a href="http://disq.us/url?url=http%3A%2F%2Ftv.adobe.com%2Fwatch%2Fmax-2010-develop%2Fsecuring-coldfusion-applications%2F%3AHnJeDmOlm0OcRbWWk5dW9Wg9nFM&amp;cuid=3321886" rel="nofollow noopener" title="http://tv.adobe.com/watch/max-2010-develop/securing-coldfusion-applications/">http://tv.adobe.com/watch/m...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730230">6</a> by Jason Dean
		posted on 3/7/2011 at 11:39 PM
		</div>
		<div class="comment_text"><p>Ok, I've been inspired to get to work in this. Two important posts can be found here:</p><p>What's Possible with XSS: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.12robots.com%2Findex.cfm%2F2010%2F9%2F14%2FWhats-Possible-with-XSS--Security-Series-81%3Aj5dfHu1JUc2iQz6KXtuRG7Og_zU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.12robots.com/index.cfm/2010/9/14/Whats-Possible-with-XSS--Security-Series-81">http://www.12robots.com/ind...</a></p><p>Mitigating XSS with ColdFusion - Part 1: Understanding HTML Contexts: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.12robots.com%2Findex.cfm%2F2011%2F2%2F7%2FXSS-mitigation-in-ColdFusion-Part-1-Understanding-HTML-Contexts--Security-Series-851%3AfBOMFxU5QY38-lN_5q_ebReJmC0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.12robots.com/index.cfm/2011/2/7/XSS-mitigation-in-ColdFusion-Part-1-Understanding-HTML-Contexts--Security-Series-851">http://www.12robots.com/ind...</a></p><p>This series will have at least 2 or 3 more posts to really get everything that is needed to properly mitigate XSS risk.</p></div>
	</div>
</div>
		