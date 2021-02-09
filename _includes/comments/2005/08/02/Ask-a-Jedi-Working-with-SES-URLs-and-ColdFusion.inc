
<div class="comment" id="c_1713619548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619548">1</a> by Jack Dalaa
		posted on 8/3/2005 at 2:37 AM
		</div>
		<div class="comment_text"><p>It's possible, and a lot easier, to do this on the Web server level, for example on IIS, using the ISAPI Rewrite product (free version will do!), and a rule like:</p><p>RewriteRule (/servlet/.*?)(\?[^/]*)?/([^/]*)/([^/]*)(.+?)? $1(?2$2&amp;:\?)$3=$4?5$5: [N,I]<br>RewriteRule /servlet(.+?)/?(\?.*)? $1.cfm$2 [I]</p><p>(two lines)</p><p>Then you can do URL's like:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomain.com%2Fservlet%2Fview%2Fproduct%2Fsupercar%3A_4_ehQJ9YNvJDte9yDF8JIouKFc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mydomain.com/servlet/view/product/supercar">http://www.mydomain.com/ser...</a></p><p>Which would then be:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomain.com%2Fview.cfm%3Fproduct%3Dsupercar%3AdYQq8EOBZd3txU84PcIg9ZIM1uY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mydomain.com/view.cfm?product=supercar">http://www.mydomain.com/vie...</a></p><p>.. replace the 'servlet' trigger in the rule with whatever you want.</p><p>With a bit of template planning, you can do some seriously snazzy URL's with this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619550">2</a> by Raymond Camden
		posted on 8/3/2005 at 2:45 AM
		</div>
		<div class="comment_text"><p>Oh - I _was_ going to mention web-server-side SES parsing but I totally forgot. Thanks for bringing it up. Apache has this feature as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619552">3</a> by Jake
		posted on 8/3/2005 at 6:37 AM
		</div>
		<div class="comment_text"><p>Ray, once again, I'm glad I follow along. I'm working on this problem right now! Thanks so much for the overview.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619551">4</a> by HKS
		posted on 8/3/2005 at 8:42 AM
		</div>
		<div class="comment_text"><p>There is a gotcha with this if you setup CF in J2EE mode.</p><p>The fix is simple enough, you just need to hack web.xml a little. See <a href="http://disq.us/url?url=http%3A%2F%2Fwww.doughughes.net%2Findex.cfm%2Fpage-blogLink%2FentryId-37%3AgAqtKxPHzvk6ZZ0fpkam8JsJAYg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.doughughes.net/index.cfm/page-blogLink/entryId-37">http://www.doughughes.net/i...</a> for details.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619553">5</a> by justin
		posted on 8/3/2005 at 8:48 AM
		</div>
		<div class="comment_text"><p>I really want to do <a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%2FUSERNAME%3A4-I5BKQAi3wALOciW7T7LoLyJYc&amp;cuid=3321886" rel="nofollow noopener" title="www.domain.com/USERNAME">www.domain.com/USERNAME</a> and have it read it as <a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%2Findex.cfm%2FUSERNAME%3AlCQETw6dEDO3HrEsIQxMbOW6eWU&amp;cuid=3321886" rel="nofollow noopener" title="www.domain.com/index.cfm/USERNAME">www.domain.com/index.cfm/US...</a> and THEN do the trick in this article to take username as the variable, but I can't seem to get a way to do it...</p><p>Anyone have a suggestion on if this is possible to achieve using a method like this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619564">6</a> by Michael
		posted on 8/3/2005 at 10:49 AM
		</div>
		<div class="comment_text"><p>Really nice to see this article! I have been wanting to figure out how to do this on a shared server site for quite some time now, but never could get it working. This example is perfect, as I am only dealing with 1 url variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619560">7</a> by Raymond Camden
		posted on 8/3/2005 at 4:37 PM
		</div>
		<div class="comment_text"><p>justin. Just curious, but if you go to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%2FFOO%3AKPe1ZbAFOq3CMeIxHMpJVHLBfzg&amp;cuid=3321886" rel="nofollow noopener" title="www.domain.com/FOO">www.domain.com/FOO</a>, does index.cfm load anyway? If so, then you are good. I'm sure cgi.path_info will have /FOO. If not, you can look at rewriting techniques on the server level. I'll blog about that as well, but you really have 2 choices:</p><p>a) In Apache, use mod_rewrite. It's free. It's awesome.</p><p>b) In IIS, use ISAPIRewrite. It is free if you use the simple edition. The simple edition applies all rules to all domains on a box. If you only have one site, or only one site using rewriting, then you are fine. However, the "expensive" edition is only 75 dollars. Not bad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619555">8</a> by Chris Peters
		posted on 8/3/2005 at 5:40 PM
		</div>
		<div class="comment_text"><p>I question whether or not this method really creates a "Search Engine Safe" URL any better than just leaving it as <a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%2Findex.cfm%3Ffoo%3Dbar%3A2CSIE5taHVFS22xlNTOR5EqmrIE&amp;cuid=3321886" rel="nofollow noopener" title="www.domain.com/index.cfm?foo=bar">www.domain.com/index.cfm?fo...</a>.  I implemented such SES URL functionality a couple months ago, and the search engines still do not index the content. (I know this because every page on my site that does not use these SES URLs has a PageRank, even if the PR is only 2).</p><p>I'm guessing at this point that Google and company have caught on to this workaround and consider it to be the same as just using a query string.</p><p>Keep in mind that once your site becomes "important" enough, the search engines will start indexing _all_ of your content, query string or no.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619559">9</a> by Raymond Camden
		posted on 8/3/2005 at 5:48 PM
		</div>
		<div class="comment_text"><p>Good point Chris - definitely your mileage will vary. I'd add though that it may also be nice to provide a cleaner URL just for the heck of it, or to allow for stuff likw CFLib, where a user can load a UDF w/o knowing the ID of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619557">10</a> by Jacob Sevlie
		posted on 8/3/2005 at 7:02 PM
		</div>
		<div class="comment_text"><p>To Jack Dala... What does the second line of your ISAPI_Rewrite regex do?</p><p>RewriteRule /servlet(.+?)/?(\?.*)? $1.cfm$2 [I]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619556">11</a> by Jack Dalaa
		posted on 8/3/2005 at 7:09 PM
		</div>
		<div class="comment_text"><p>I wish I knew. :-)</p><p>.. I just took one of the existing rules from their documentation (or forum? Don't remember), tweaked it until it worked as I wanted, and left it at that. It's regex far beyond my brain-power. :-)</p><p>It's a piece of beauty though, works *great*.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619561">12</a> by erikv
		posted on 5/15/2006 at 10:25 PM
		</div>
		<div class="comment_text"><p>Doing SES through the web server (e.g. mod_rewrite) works best, but if you want to do it through code, Bert D. and I wrote something several years ago that works great - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.fusium.com%2Fgo%2Fses%3A83f227FvYMueXNiDj7JgRyEUfbE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.fusium.com/go/ses">http://www.fusium.com/go/ses</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619558">13</a> by Ajaxsaur
		posted on 2/20/2007 at 10:33 AM
		</div>
		<div class="comment_text"><p>[quote]<br>It's possible, and a lot easier, to do this on the Web server level, for example on IIS, using the ISAPI Rewrite product (free version will do!), and a rule like:</p><p>RewriteRule (/servlet/.*?)(\?[^/]*)?/([^/]*)/([^/]*)(.+?)? $1(?2$2&amp;:\?)$3=$4?5$5: [N,I]<br>RewriteRule /servlet(.+?)/?(\?.*)? $1.cfm$2 [I]</p><p>(two lines)</p><p>Then you can do URL's like:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomain.com%2Fservlet%2Fview%2Fproduct%2Fsuper%3AoW4YGYI-avb2iO5bZ9g-nY3GuE8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mydomain.com/servlet/view/product/super">http://www.mydomain.com/ser...</a>...</p><p>Which would then be:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomain.com%2Fview.cfm%3Fproduct%3Dsupercar%3AdYQq8EOBZd3txU84PcIg9ZIM1uY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mydomain.com/view.cfm?product=supercar">http://www.mydomain.com/vie...</a></p><p>.. replace the 'servlet' trigger in the rule with whatever you want.</p><p>With a bit of template planning, you can do some seriously snazzy URL's with this.<br>[/quote]</p><p>Logically it would be better for dynamics to do it with CFML rather then server side, because it allows you to organize template systems by database better, rather then relying solely on "cfml", when parsing it with coldfusion you can effectivly reduce the amount of data passed through the URI allowing you to segment out template and variables, its like we do in PHP most of the time when doing SEO URIS.  A little bit of regex and database testing or even file testing and you could welp get er done alot more dynamically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619562">14</a> by Raymond Camden
		posted on 2/20/2007 at 6:28 PM
		</div>
		<div class="comment_text"><p>I don't know I agree Ajaxsaur. I mean, my approach was to do it with CF, but I don't think it is bad to do it server side. I don't agree with you that it is better organized - unless I'm misreading you. You can reduce the amount of info _either_ way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619563">15</a> by Nate
		posted on 4/2/2007 at 8:22 PM
		</div>
		<div class="comment_text"><p>Where and how do you call this function?  Right now I just do this at the top of the page:</p><p>&lt;cfif CGI.PATH_INFO DOES NOT CONTAIN ".cfm"&gt;<br>&lt;cfset test = parseSES()&gt;<br>&lt;/cfif&gt;</p><p>I'm sure there's a better way than this...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619565">16</a> by Raymond Camden
		posted on 4/2/2007 at 8:27 PM
		</div>
		<div class="comment_text"><p>I would include it in onRequestStart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619566">17</a> by Nate
		posted on 4/3/2007 at 12:51 AM
		</div>
		<div class="comment_text"><p>How might you handle a case where the name has a forward slash in it like this:</p><p>http://host/filename.cfm/phrase / with a slash in it/777</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619567">18</a> by Raymond Camden
		posted on 4/3/2007 at 1:13 AM
		</div>
		<div class="comment_text"><p>You have to escape it. I typically use a function that escapes my data based on the SES form I'm using. Escape it or simply remove it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619568">19</a> by Nate
		posted on 4/3/2007 at 3:10 AM
		</div>
		<div class="comment_text"><p>Thanks for the good idea, removing it works just fine for me.<br>Here's my code if anyone else is interested:<br>&lt;cfset newlink = Replace(link,'/','','all') &gt;<br>&lt;a href="/results.cfm/#tagid#/#newlink#"&gt;#link#&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619569">20</a> by Seth
		posted on 4/24/2007 at 5:43 PM
		</div>
		<div class="comment_text"><p>Anyway to get this to work with Flash Forms?  They seem to break when running under SES urls!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619573">21</a> by Raymond Camden
		posted on 4/24/2007 at 7:44 PM
		</div>
		<div class="comment_text"><p>I'd be willing to bet you have an invalid CFIDE mapping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619577">22</a> by Seth
		posted on 4/24/2007 at 8:03 PM
		</div>
		<div class="comment_text"><p>Thanks for your response Ray!  I have a CFIDE mapping in CF Administrator, and I have a CFIDE virtual directory in IIS for this domain.  If I run it outside the fusebox (and SES) it works fine, but inside I just get the white box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619575">23</a> by Raymond Camden
		posted on 4/24/2007 at 8:11 PM
		</div>
		<div class="comment_text"><p>Odd. Now you got me. :) 99% of the time it is just a missing CFIDE virtual path.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619576">24</a> by Josh Eby
		posted on 6/6/2007 at 11:05 PM
		</div>
		<div class="comment_text"><p>I had tried a solution similar to this once before and had a problem using relative paths.  Have you run into this before?</p><p>Also, is there a link to this UDF on <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%3A_xxzCNK-l1o46U5-IF400HiKZ0A&amp;cuid=3321886" rel="nofollow noopener" title="cflib.org">cflib.org</a> at all?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619571">25</a> by Raymond Camden
		posted on 6/6/2007 at 11:18 PM
		</div>
		<div class="comment_text"><p>The UDF is Michael Dinowitz's, he would have to post it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619574">26</a> by Josh Eby
		posted on 6/6/2007 at 11:28 PM
		</div>
		<div class="comment_text"><p>Thanks for your quick reply...</p><p>An example of what I have used in the past is here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cftopper.com%2Findex.cfm%3Fpage%3Dblog%26blogId%3D1%26blogpostid%3D16%3AhG3N9cygFHSsjHsnJpyYcmQh9Lw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cftopper.com/index.cfm?page=blog&amp;blogId=1&amp;blogpostid=16">http://www.cftopper.com/ind...</a></p><p>The problem I have is when using relative URLs my url gets added to as you click links...</p><p>For Example...</p><p>you go to index.cfm/page/5<br>then you click a link for page 23...<br>now you are at index.cfm/page/index.cfm/page/23</p><p>The request still works, but it defeats the purpose.</p><p>The thing that I like about the CFML solution is that the key/value pairs are passed in the URL and you could have a varying number of query items on each page...  can you do this with the IIS Re-Write as well?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619572">27</a> by Raymond Camden
		posted on 6/6/2007 at 11:35 PM
		</div>
		<div class="comment_text"><p>What I've done in the past is just always use full URLs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619578">28</a> by Joost van der Drift
		posted on 7/17/2007 at 11:15 AM
		</div>
		<div class="comment_text"><p>Hi,<br>I'm wondering: how to handle a site with SES urls in combination with CF administrator. E.g. when I schedule a template in the CF Admin with timeout, the URLs look like<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%2Fpath%2Fto%2Findex.cfm%2Ffuseaction%2Fschedule%3FRequestTimeOut%3D300%3A5u-WB3hyDAOCiQJ4suYssp9zaRM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.domain.com/path/to/index.cfm/fuseaction/schedule?RequestTimeOut=300">http://www.domain.com/path/...</a></p><p>And this goes wrong, it should be<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%2Fpath%2Fto%2Findex.cfm%2Ffuseaction%2Fschedule%2FRequestTimeOut%2F300%3AM8dk7dKg2i_K0ski9CC0busNuaA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.domain.com/path/to/index.cfm/fuseaction/schedule/RequestTimeOut/300">http://www.domain.com/path/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619579">29</a> by Joost van der Drift
		posted on 7/17/2007 at 11:26 AM
		</div>
		<div class="comment_text"><p>Sorry 'bout that post with too long URLs</p><p>I'll try again: CF Administrator creates this<br>URL when scheduling a page with a timeout</p><p>.../index.cfm/fuseaction/dothis?RequestTimout=60</p><p>And this goes wrong when using SES Urls.</p><p>How to handle this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619591">30</a> by Raymond Camden
		posted on 7/17/2007 at 4:35 PM
		</div>
		<div class="comment_text"><p>Can you not use a non-SES version?</p><p>The other option is to use cfsetting requesttimeout in the code instead of setting a requesttimeout in the CF Admin for the task.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619598">31</a> by Troy
		posted on 9/21/2007 at 12:23 AM
		</div>
		<div class="comment_text"><p>Ray I was testing the SES fix you posted to try and see if its something I wanted to do in my App I'm building only thing I can't get to work is when you don't specify the index.cfm page example below with error.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftest.com%2Ftesting%2Fid%2F555%3AJhWtxZFWTZF90_OPzONwX_ET8AI&amp;cuid=3321886" rel="nofollow noopener" title="test.com/testing/id/555">test.com/testing/id/555</a></p><p>this really should be pulling</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftest.com%2Ftesting%2Findex.cfm%3Fid%3D555%3ANsBVMyxHyzwv_fwXxaRFxhdOX9Q&amp;cuid=3321886" rel="nofollow noopener" title="test.com/testing/index.cfm?id=555">test.com/testing/index.cfm?...</a></p><p>is there away to fix this. reason I'm not using the server level replace is I don't know if this application is going to be on a shared or dedicated server yet.</p><p>the error I'm getting is<br>404</p><p>/testing/test/1234</p><p>java.io.FileNotFoundException: /testing/test/1234<br>	at jrun.servlet.file.FileServlet.service(<a href="http://disq.us/url?url=http%3A%2F%2FFileServlet.java%3AIdmYfzsdm2025iTe_eITLUNylS8&amp;cuid=3321886" rel="nofollow noopener" title="FileServlet.java">FileServlet.java</a>:349)<br>	at jrun.servlet.ServletInvoker.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FServletInvoker.java%3AWxOzawUvKZJB9kS5XOoorL2yX3s&amp;cuid=3321886" rel="nofollow noopener" title="ServletInvoker.java">ServletInvoker.java</a>:106)<br>	at jrun.servlet.JRunInvokerChain.invokeNext(<a href="http://disq.us/url?url=http%3A%2F%2FJRunInvokerChain.java%3Aybw530_08PBL3Sono6xDFjG-Elk&amp;cuid=3321886" rel="nofollow noopener" title="JRunInvokerChain.java">JRunInvokerChain.java</a>:42)<br>	at jrun.servlet.JRunRequestDispatcher.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FJRunRequestDispatcher.java%3AWllPdjm93OkIhSIiiiBNbVX2-34&amp;cuid=3321886" rel="nofollow noopener" title="JRunRequestDispatcher.java">JRunRequestDispatcher.java</a>:284)<br>	at jrun.servlet.ServletEngineService.dispatch(<a href="http://disq.us/url?url=http%3A%2F%2FServletEngineService.java%3AHsEoWUtNpXCfeciYTvR4_RuyAy0&amp;cuid=3321886" rel="nofollow noopener" title="ServletEngineService.java">ServletEngineService.java</a>:543)<br>	at jrun.servlet.http.WebService.invokeRunnable(<a href="http://disq.us/url?url=http%3A%2F%2FWebService.java%3AM5ZFjC3Psu9r7Iw4j9kR5IzWe_U&amp;cuid=3321886" rel="nofollow noopener" title="WebService.java">WebService.java</a>:172)<br>	at jrunx.scheduler.ThreadPool$DownstreamMetrics.invokeRunnable(<a href="http://disq.us/url?url=http%3A%2F%2FThreadPool.java%3Ahc6WKqUxMUCr_gEH8EdNRpt9k1A&amp;cuid=3321886" rel="nofollow noopener" title="ThreadPool.java">ThreadPool.java</a>:320)<br>	at jrunx.scheduler.ThreadPool$ThreadThrottle.invokeRunnable(<a href="http://disq.us/url?url=http%3A%2F%2FThreadPool.java%3Ahc6WKqUxMUCr_gEH8EdNRpt9k1A&amp;cuid=3321886" rel="nofollow noopener" title="ThreadPool.java">ThreadPool.java</a>:428)<br>	at jrunx.scheduler.ThreadPool$UpstreamMetrics.invokeRunnable(<a href="http://disq.us/url?url=http%3A%2F%2FThreadPool.java%3Ahc6WKqUxMUCr_gEH8EdNRpt9k1A&amp;cuid=3321886" rel="nofollow noopener" title="ThreadPool.java">ThreadPool.java</a>:266)<br>	at <a href="http://disq.us/url?url=http%3A%2F%2Fjrunx.scheduler.WorkerThread.run%3AvDoH1GOo1BhwjzOH_vLZbAxp58Y&amp;cuid=3321886" rel="nofollow noopener" title="jrunx.scheduler.WorkerThread.run">jrunx.scheduler.WorkerThrea...</a>(<a href="http://disq.us/url?url=http%3A%2F%2FWorkerThread.java%3AekX9_yAmKfo5Vo6v0rI1FdKPk1Q&amp;cuid=3321886" rel="nofollow noopener" title="WorkerThread.java">WorkerThread.java</a>:66)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619593">32</a> by Raymond Camden
		posted on 9/21/2007 at 12:28 AM
		</div>
		<div class="comment_text"><p>No, you have to use a real file name. Now - if you don't like that - you can use a server server rewrite like what Apache has built in support for - or what you can add on to IIS.</p><p>This blog entry was meant to describe a solution that did not require any web servere mods.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619589">33</a> by Jason
		posted on 9/24/2007 at 7:33 PM
		</div>
		<div class="comment_text"><p>I have run into the same problem as Seth.  I'm using Fusebox with SES URLs however my Flash forms aren't displaying.</p><p>Works..<br><a href="http://disq.us/url?url=http%3A%2F%2Fmysite.com%2Findex.cfm%3Ffuseaction%3Dapp.showForm%3AWBZwP66Jha36iTgideZa1iYzDas&amp;cuid=3321886" rel="nofollow noopener" title="http://mysite.com/index.cfm?fuseaction=app.showForm">http://mysite.com/index.cfm...</a></p><p>Doesn't work..<br><a href="http://disq.us/url?url=http%3A%2F%2Fmysite.com%2Findex.cfm%2Ffuseaction%2Fapp.showForm%3AStVMK3AHvqFhOAFLqhRqXx2MHJI&amp;cuid=3321886" rel="nofollow noopener" title="http://mysite.com/index.cfm/fuseaction/app.showForm">http://mysite.com/index.cfm...</a></p><p>I'm running CF8 and Fusebox 5.1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619587">34</a> by J.
		posted on 2/8/2008 at 1:47 PM
		</div>
		<div class="comment_text"><p>Same problem here...</p><p>Did some experiments:</p><p>- cfform type="flash" doesn't work<br>- cfform type="html" does work<br>- cfchart works<br>- cftextarea also works</p><p>The CFIDE Virtual Directory does exist but no flash forms<br>Any suggestions?</p><p>Flash Form that would not load the movie got a wrong path I think:<br>src='/ict/jvl/mod_rewrite/1799017575.mxml.cfswf'</p><p>But if I'm viewing it directly it works:<br>src='/ict/jvl/mod_rewrite/content/services/ce/information/index.cfm?ID=2005'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619586">35</a> by glieu
		posted on 3/28/2008 at 7:14 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I am a newbee to Coldfusion. i am trying to understand your blogCFC 5 i downloaded. How did you hide the blog id create with CreateUID() function?</p><p>You have something like <a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%2Findex.cfm%2F2008%2F03%2F27%2Fsome-bolg-title%3Ay27uJ4FXvtbOLf4-ap7lpuQL0mE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.domain.com/index.cfm/2008/03/27/some-bolg-title">http://www.domain.com/index...</a> , how did you translate /2008/03/27/some-blog-title back to blog id and get the details for some-blog-title?</p><p>Please help.</p><p>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619596">36</a> by Raymond Camden
		posted on 3/28/2008 at 5:44 PM
		</div>
		<div class="comment_text"><p>Every blog entry has an 'alias' based on the title. So if the title was, "I adore Paris HIlton", the alias is something like i-adore-paris-hilton.</p><p>I then make links with the date plus the alias, which you have to assume is unique. WHen you view the entry, I just look up based on alias+date.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619588">37</a> by glieu
		posted on 4/2/2008 at 7:01 AM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>I try it, it works. Another question, instead of this<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%2Findex.cfm%2F2008%2F04%2F01%2Fblog-title%3AaeUrGqG8llyFAnNbtMa1ioPfVeg&amp;cuid=3321886" rel="nofollow noopener" title="www.domain.com/index.cfm/2008/04/01/blog-title">www.domain.com/index.cfm/20...</a> <br>if I want to achieve this,<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%2F2008%2F04%2F01%2Fblog-title%3A0o2SP1DxF-vtOqe_kcdhAmBR0Ws&amp;cuid=3321886" rel="nofollow noopener" title="www.domain.com/2008/04/01/blog-title">www.domain.com/2008/04/01/b...</a> or <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%2Fblog%2F2008%2F04%2F01%2Fblog-title%3AmvmAS_sWk1VmVxeeTfA1Uj0iu4U&amp;cuid=3321886" rel="nofollow noopener" title="www.domain.com/blog/2008/04/01/blog-title">www.domain.com/blog/2008/04...</a></p><p>How would I do it?</p><p>Please help.</p><p>Many thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619594">38</a> by Raymond Camden
		posted on 4/2/2008 at 2:56 PM
		</div>
		<div class="comment_text"><p>For that to work you need to do it at the web server. Apache has this support built in, and for IIS you need an add on. But the point is - it has to be done _below_ ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619590">39</a> by Jack D
		posted on 4/2/2008 at 3:28 PM
		</div>
		<div class="comment_text"><p>Use ISAPI Rewrite when on IIS. Fairly easy, excellent support on their forums, and works really really well for nearly all search-engine friendly URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619592">40</a> by Raymond Camden
		posted on 4/2/2008 at 3:29 PM
		</div>
		<div class="comment_text"><p>I'll also recommend IIRF for IIS. The price is good too (free!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619597">41</a> by Derek Versteegen
		posted on 4/8/2008 at 4:33 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I'm trying to introduce the use of SEF URLs on this site and have been very successful doing so.  Its help a ton as I've been able to build some very much needed redirect applications that get users into certain areas faster.  But my problem is similar to several other listed already that appear to not have been resolved - unless I missed something.</p><p>It is the flash form problem,</p><p>Works:<br>...roster-edit.cfm?action=update&amp;id=123456</p><p>Doesn't Work:<br>...roster-edit.cfm/action/update/id/123456</p><p>Just by swapping out the characters in the URL I can get the form to load.  But when I introduce the SEF link naming convention into the site (meaning once I code links the SEF way) all my flash forms that are dependent on a URL parameter break.</p><p>Did I miss the solution here somewhere?  Coudl someone share it again, please?</p><p>P.S. I do not have access to the CF Admin or IIS - I have to do this all in code (shared server).</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619595">42</a> by Derek Versteegen
		posted on 4/8/2008 at 5:16 PM
		</div>
		<div class="comment_text"><p>OK - so this is really weird but since this is a pretty old application, it is still using Application.cfm - and I wish I could easily convert it to a cfc.  Anyway, I had added this script:</p><p>&lt;cfscript&gt;<br>pathInfo = reReplaceNoCase(trim(cgi.path_info), '.+\.cfm/? *', '');<br>i = 1;<br>lastKey = "";<br>value = "";</p><p>if(not len(pathInfo)) break;</p><p>for(i=1; i lte listLen(pathInfo, "/"); i=i+1) {<br>value = listGetAt(pathInfo, i, "/");<br>if(i mod 2 is 0) url[lastKey] = value;<br>else lastKey = value;<br>}<br>break;<br>&lt;/cfscript&gt;</p><p>do introduce SEF URLs. As I mentioned that was successful but it broke my flash forms.</p><p>Before I make my next point, I should let you know that I version my cfapplication names so that I can reset applications and have CFadmin essentially create new application logs for me to compare should I need to.</p><p>So, I found it odd when I went back into the Application.cfm file and simply removed that same code (without renaming my cfapplication name).  I loaded the form page and it errored out.  When I reintroduced that code and saved my Application.cfm file, the refresh of the form loaded the flash form correctly.</p><p>I *think* I know why this happened and I am wary that it might not last so I am watching it closely.  I have my test and development environments to try this out on too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619600">43</a> by Raymond Camden
		posted on 4/8/2008 at 5:20 PM
		</div>
		<div class="comment_text"><p>When you view source, look at the src for the Flash. What is the URL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619599">44</a> by Derek Versteegen
		posted on 4/9/2008 at 6:15 PM
		</div>
		<div class="comment_text"><p>Ok, so I've been able to narrow down and recreate my issue consistently.  Here is how it goes down . . . <br>a.) I have a link to a page that edits a user record via flash form<br>b.) the link is coded with traditional question mark, equal and ampersand signs for the query string.<br>c.) having introduced the SEF script, when the page loads I can see the request actually changing from the old format to the new format.<br>d.) the reason why I see it change is because I have a SSL redirect script in place to ensure the page is loaded and processed using SSL.  Since the original request is being made from a non-secure page, my redirect script now rewrites URLs using the SEF format.<br>e.) If I take the URL it redirects to (the SEF one) after the page is done loading (with no visible flash form) then replace the characters manually with traditional format (for example: ...-action.cfm/userid/123 to ...-action.cfm?userid=123) the flash form loads fine.<br>f.) I've modified the page that offers the link to the form by prefixing the anchor with my secure url application variable instead of solely relying on the page requested to determine it was not being loaded in an SSL - I still have that code there of course.</p><p>So, the issue is bandaided in the respect that I've tracked down the links that point tot he page and have made sure the links to the page are build with SSL.  And if someone were to decided to change the SSL to a regular http request at least there is comfort knowing the page will not load.  But it still leaves me to with having to look at my SSL redirect page to see if I need to do something there (which I can't imagine I need to since it does its job nicely).</p><p>Therefore, this leads me (finally) to answering your question . . . there is no difference between the rendered source code of the form when it doesn't load and when it does - other than the swf cacheid.</p><p>So by changing manually reverting the URL from SEF to traditional, then back to SEF everything works.  But as its taken me 30 min. to write this post and double check everything, I am faced with starting my troubleshooting issue all over since FF and IE seem to be doing things differently.</p><p>I think its a client side issue because I have plenty of other flash forms that have not been affected by this.  However, all the other flash forms that do work do not have URL query strings being re-imagined into a SEF url format.</p><p>(sorry for the lengthy posts - this is just really boggling me - all the a flash forms work until they happen to be on a page that uses SEF url formatting.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619604">45</a> by Luc
		posted on 6/7/2008 at 2:11 AM
		</div>
		<div class="comment_text"><p>Wow thanks for posting this. I've been looking at all kinds of solutions (on and off for weeks... and a few hours today) and this one works really well for a project I'm working on! Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619606">46</a> by Microcycles
		posted on 8/19/2008 at 8:11 AM
		</div>
		<div class="comment_text"><p>glieu - I think you will achieve what you're after by setting up a custom 404 page, then in that page use CGI.QUERY_STRING to grab what was entered into the url - work out what the user typed and what they need to see, and use a cfinclude to include that page - it will appear to the user as if they typed the original url. Use cfdivs to navigate and keep that url in their address bar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619609">47</a> by JB
		posted on 1/12/2009 at 3:04 AM
		</div>
		<div class="comment_text"><p>We use this function in tandem with onMissingTemplate to get URL's where the pagename is one of the variables e.g.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fa.com%2Fvar%2Fvalue%2Fvalue.cfm%3AQFSmx1fnJKhF_xVRqXL7CmkrgA0&amp;cuid=3321886" rel="nofollow noopener" title="a.com/var/value/value.cfm">a.com/var/value/value.cfm</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619610">48</a> by Matthew
		posted on 2/19/2010 at 4:36 AM
		</div>
		<div class="comment_text"><p>this is a great help.<br>so how would you get it to pull the values for the cleanURL from a a database? (so that you could set any value at anytime for a particular page)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619608">49</a> by Raymond Camden
		posted on 2/20/2010 at 1:28 AM
		</div>
		<div class="comment_text"><p>I'm not sure I understand you right, but if you are asking, how do you format the URL, then it is entirely up to you really. If you decide you want to use</p><p>page.cfm/X</p><p>then you store X in the database or generate it when you make your links.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619607">50</a> by Matthew
		posted on 2/21/2010 at 1:28 PM
		</div>
		<div class="comment_text"><p>i guess i'm not understanding how to relate the regular link with a value i've placed into a database as i've only seen formulaic examples (unless i've missed the simpler "whatever you have in a table" version)</p><p>yes, the link would be a simple page.cfm/article format.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619605">51</a> by Raymond Camden
		posted on 2/21/2010 at 9:39 PM
		</div>
		<div class="comment_text"><p>The thing is - there is no one answer to this. You decide how you want your urls to look, and you need to figure out what a good unique value is. So for CFLib, I knew I had unique UDF names. Therefore making the link was simple, I just link to /udf/#NAMEHERE#. Where #NAMEHERE# is the udf name from the database.</p><p>Did that answer your question?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619613">52</a> by matthew
		posted on 4/25/2010 at 7:45 AM
		</div>
		<div class="comment_text"><p>it did, it just took me a long time to understand.</p><p>thanks Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619612">53</a> by Brad
		posted on 1/26/2011 at 12:51 AM
		</div>
		<div class="comment_text"><p>@Ray - Thank you for this example. Really saved me a lot of time!</p><p>Not sure if this helps anyone, but I am passing this on every request for the front-end of my e-commerce application. Then, using different .cfm files, using different rules for each variables passed.</p><p>ie: productBrowser.cfm/brand/brandName/category/snowboards/<br>productViewer.cfm/product-name/brand/brandName/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619615">54</a> by Ditty
		posted on 11/5/2012 at 2:06 PM
		</div>
		<div class="comment_text"><p>Great stuff but I am a CF SES noob.</p><p>I am looking for a solution for categories and the product detail page.</p><p>Category URL: <a href="http://disq.us/url?url=http%3A%2F%2Fsite.com%2FResults.cfm%3Fcategory%3D21%3AYFOhqrhusugD108aRcdirxhDPag&amp;cuid=3321886" rel="nofollow noopener" title="site.com/Results.cfm?category=21">site.com/Results.cfm?catego...</a><br>I would like to end up as <a href="http://disq.us/url?url=http%3A%2F%2Fsite.com%2Fcategory-name%3AxQBavOiDVX_sP4ZjtHc0km4ReQI&amp;cuid=3321886" rel="nofollow noopener" title="site.com/category-name">site.com/category-name</a><br>(Need something for Pagination also)</p><p>Product details page: <a href="http://disq.us/url?url=http%3A%2F%2Fsite.com%2FDetails.cfm%3FProdID%3D730%26category%3D21%3AP3ID6rvpCZZj79nOUIZhoszSS5w&amp;cuid=3321886" rel="nofollow noopener" title="site.com/Details.cfm?ProdID=730&amp;category=21">site.com/Details.cfm?ProdID...</a><br>I would like it to end up as <a href="http://disq.us/url?url=http%3A%2F%2Fsite.com%2Fproduct-name%3AdrBXo8Y3bxetjlKbxwIC7MF5QAw&amp;cuid=3321886" rel="nofollow noopener" title="site.com/product-name">site.com/product-name</a></p><p>Any ideas?</p><p>Thanks!<br>Jeff</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619621">55</a> by Raymond Camden
		posted on 11/5/2012 at 5:57 PM
		</div>
		<div class="comment_text"><p>If you don't want ".cfm" to show at all, you need to use a server-side rewriting tool like Apache rewrites. IIS has a rewriting tool too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619614">56</a> by Dittymeister
		posted on 11/6/2012 at 2:00 AM
		</div>
		<div class="comment_text"><p>The site is hosted on IIS but also has the option to use .htaccess or use an IIS rewriting tool. I believe it gets written to a web.conf. I use both but have only used each for the basics up to this point.</p><p>I would be interested in a quote for that and possibly even integrating a redirection and canonical option in the back end.</p><p>Thanks,<br>Jeff</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619616">57</a> by Raymond Camden
		posted on 11/6/2012 at 2:02 AM
		</div>
		<div class="comment_text"><p>If you have used server-side rewriting before, then you know it is easier than what I describe here. This post is for folks who don't have access to those options. Since you can do _any_ rewrite to simple URL params (ie, /cat/5 == index.cfm?cat=5), then your CF code can assume ugly, plain URL variables while the user is presented with nice, simpler URLs.</p><p>Right? If that doesn't make sense, let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619619">58</a> by Dittymeister
		posted on 11/6/2012 at 2:48 AM
		</div>
		<div class="comment_text"><p>Right, I follow you for the most part and just looking for the clean URL that folks and SE's see without breaking anything in code.</p><p>How can we move forward?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619620">59</a> by Raymond Camden
		posted on 11/6/2012 at 3:51 AM
		</div>
		<div class="comment_text"><p>Sorry - are you asking if you can just pay me to do this for you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619617">60</a> by Dittymeister
		posted on 11/9/2012 at 1:34 AM
		</div>
		<div class="comment_text"><p>Yes, I will need a quote. I will email you.</p><p>Thanks,<br>Jeff</p></div>
	</div>
</div>
		