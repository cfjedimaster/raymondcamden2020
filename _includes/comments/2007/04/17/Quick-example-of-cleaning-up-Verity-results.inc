
<div class="comment" id="c_1713664147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664147">1</a> by Tom Mollerus
		posted on 4/17/2007 at 8:53 PM
		</div>
		<div class="comment_text"><p>C'mon, Ray, make your examples a little more realistic. We all know that no one with *any* self-respect would refer to themselves a "rabid" developer. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664134">2</a> by Jim Priest
		posted on 4/17/2007 at 9:14 PM
		</div>
		<div class="comment_text"><p>Just curious - was he using the spider?  I used to have a lot of issues of odd code being displayed in my results until I started using vspider.  That worked MUCH better to index the HTML content of my site - and it was easy to combine the results of database searches fairly easily.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664148">3</a> by Christian Ready
		posted on 4/17/2007 at 9:22 PM
		</div>
		<div class="comment_text"><p>Thanks again for your help on this, Ray.  It's always apprecaited.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664150">4</a> by Christian Ready
		posted on 4/17/2007 at 9:24 PM
		</div>
		<div class="comment_text"><p>@Jim: No, I wasn't using the spider.  All content for the site comes out of a database so I just built collections based on db queries.</p><p>That said, I've never used the spider. Does that come with the OEM version of Verity in CF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664153">5</a> by Jim Priest
		posted on 4/17/2007 at 9:38 PM
		</div>
		<div class="comment_text"><p>Yes - vspider is included (though poorly documented)... and may not be installed by default.</p><p>For some people it works easily - others have issues. Peter Bell has a good blog post if you are interested:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.pbell.com%2Findex.cfm%2F2006%2F10%2F21%2FWhat-is-UP-with-vspider%3ApMM-wOJN7USLGIFYZCSd6auRG-8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pbell.com/index.cfm/2006/10/21/What-is-UP-with-vspider">http://www.pbell.com/index....</a></p><p>And I have a few things on my wiki (which I need to update)<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.thecrumb.com%2Fwiki%2Fcode%2Fcoldfusion%3A2yhnae-MNm3_OoCsu-P1CZ5_vTU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.thecrumb.com/wiki/code/coldfusion">http://www.thecrumb.com/wik...</a></p><p>It works exactly like the Google or Yahoo spiders - it hits your homepage (or wherever you direct it) and 'spiders' each page by hitting the links in each page - so it only sees what your visitor's see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664151">6</a> by Hapex
		posted on 4/18/2007 at 6:17 PM
		</div>
		<div class="comment_text"><p>I've had this issue in the past, one way around it (for me) was to strip HTML before it was indexed.  That way you don't need to do it on display, you use the regex while running the cfindex step building the collection.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664152">7</a> by Dylan
		posted on 5/8/2007 at 11:59 PM
		</div>
		<div class="comment_text"><p>the regex, would this do it?</p><p>text = ReReplace(text, "&lt;[^&gt;]*&gt;", "", "all");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664140">8</a> by Jim
		posted on 6/7/2007 at 9:38 PM
		</div>
		<div class="comment_text"><p>Ok, we can strip HTML, but how could you make sure that text included within a &lt;cfquery&gt; doesn't show up within the results of &lt;cfsearch&gt;?</p><p>For example in my tests, when I search on "job" I could receive the following back as a result:</p><p>"Select position, job, from table where id = 5"</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664135">9</a> by Raymond Camden
		posted on 6/7/2007 at 10:02 PM
		</div>
		<div class="comment_text"><p>Are you using Verity to index the CFM files? If so then it is expected. You shouldn't be doing that. You should either use the spider - or index just the data, not the CFM files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664136">10</a> by Jim Priest
		posted on 6/7/2007 at 10:23 PM
		</div>
		<div class="comment_text"><p>Yes - use vspider.</p><p>Speaking of which - I didn't hear about any changes in CF8 to search? Nothing new or nothing announced yet?  It would be really nice if they made vspider easier to work with...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664143">11</a> by Raymond Camden
		posted on 6/7/2007 at 10:28 PM
		</div>
		<div class="comment_text"><p>I believe there was a general Verity engine update, but no new functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664138">12</a> by Jim
		posted on 6/8/2007 at 12:19 AM
		</div>
		<div class="comment_text"><p>Ok, thanks...thought that's what you would say. Was hoping not to have to 'vspider' (what with all the horror stories). :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664142">13</a> by Raymond Camden
		posted on 6/8/2007 at 12:38 AM
		</div>
		<div class="comment_text"><p>Well wait Jim. What are you trying to search here? The entire web page of your site? Or just the data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664139">14</a> by Jim
		posted on 6/8/2007 at 1:23 AM
		</div>
		<div class="comment_text"><p>I am searching on both. We need to return both content that is found within the individual .cfm and .html pages and also content from our .pdf and .doc files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664141">15</a> by Raymond Camden
		posted on 6/8/2007 at 1:35 AM
		</div>
		<div class="comment_text"><p>Well, if the content on the CFM pages is from the DB, you should just index the DB. You can then index the pdf/doc files. You can also index your HTML files as just that - files.</p><p>So it _sounds_ like you don't need the spider at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664144">16</a> by Jim
		posted on 6/8/2007 at 7:59 PM
		</div>
		<div class="comment_text"><p>To clarify...the content on our .cfm pages contains both dynamic AND static content that we would like to account for. So not all the content is from a DB.</p><p>Also, we have multiple sites within IIS on a single server. <br>Since VSPIDER can only search on localhost, I am having difficulty figuring out how this will work with our current setup. When I create the collection, it embeds the "http://localhost/..." URL within the collection, so how does one get it to relect the true site URL of say, "<a href="http://disq.us/url?url=http%3A%2F%2Fmysite.com%3A2-kMGVD3SSL7zZuoKHcPI4DGYRE&amp;cuid=3321886" rel="nofollow noopener" title="http://mysite.com">http://mysite.com</a>"? Sorry for the ignorance here, I must be doing something wrong...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664137">17</a> by Raymond Camden
		posted on 6/8/2007 at 9:02 PM
		</div>
		<div class="comment_text"><p>When displaying the results, you could just use replace().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664145">18</a> by Jim Priest
		posted on 6/8/2007 at 9:17 PM
		</div>
		<div class="comment_text"><p>Unfortunately with vspider your really have to RTFM.</p><p>In the past I setup virtual domains off localhost:</p><p>http://localhost/siteone<br>http://localhost/sitetwo</p><p>Depending on how you have things pathed - sometimes images and CSS wouldn't work - but the spider doesn't care.  Just as long as the links work you are set.</p><p>I think you can also spider file system paths and use -prefixmap to replace it with a URL.</p><p>Check out Peter Bell's site (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.pbell.com%3AAlgnodOgL1lBo93pvFEncpVaJh0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pbell.com">http://www.pbell.com</a>) he has a few good vspider posts.</p><p>vspider is great IF you can get it working and that unfortunately seems very hit or miss.</p><p>Maybe now that ColdFusion has an image tag (after an eternity!) they can fix up search in ColdFusion 9! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664146">19</a> by Jim Stout
		posted on 6/22/2007 at 12:15 AM
		</div>
		<div class="comment_text"><p>Well, got it working. :-)</p><p>Jim, like you said, when it works, it works great!</p><p>I ended up mixing and matching vspider collections, with regular collections to meet my needs.</p><p>Ray, I took your advice and used the replace()...works great.</p><p>Thank you all for your help; see you at CFUNITED?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664201">20</a> by Raymond Camden
		posted on 6/22/2007 at 12:39 AM
		</div>
		<div class="comment_text"><p>I'll be there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664200">21</a> by Connie DeCinko
		posted on 7/24/2009 at 2:06 AM
		</div>
		<div class="comment_text"><p>How would one go about removing HTML tags from a query before it gets passed to CFIndex?  I don't want the tags <br>to be indexed in the collection, nor do I want them to display in the results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664202">22</a> by Raymond Camden
		posted on 7/24/2009 at 2:29 AM
		</div>
		<div class="comment_text"><p>Loop over the query, use querySetCell to modify the contents, and strip the HTML with:</p><p>s = rereplace(s, "&lt;.*?&gt;", "", "all")</p></div>
	</div>
</div>
		