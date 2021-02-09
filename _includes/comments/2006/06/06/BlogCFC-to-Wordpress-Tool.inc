
<div class="comment" id="c_1713653879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653879">1</a> by kelly
		posted on 6/6/2006 at 9:04 PM
		</div>
		<div class="comment_text"><p>the real question. will wordpress have a tool to convert people back to blogcfc once it kicks wordpressses ass? I highly doubt it. bastards! lol :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653881">2</a> by Sean Tierney
		posted on 6/6/2006 at 9:08 PM
		</div>
		<div class="comment_text"><p>Ray, <br>everyone at that pool party was using BlogCFC if it makes you feel better. i was the only one on Wordpress ;-)</p><p>Sean</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653882">3</a> by Raymond Camden
		posted on 6/6/2006 at 9:13 PM
		</div>
		<div class="comment_text"><p>Hahahah, good one there. :)</p><p>"BlogCFC, blog of the beautiful people."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653884">4</a> by Rob Brooks-Bilson
		posted on 6/6/2006 at 9:37 PM
		</div>
		<div class="comment_text"><p>Ray, looking at Sean's reason for moving to WP (micro content and structured blogging), one has to ask, what would it take to add support for this to blogCFC?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653885">5</a> by Raymond Camden
		posted on 6/6/2006 at 9:49 PM
		</div>
		<div class="comment_text"><p>To be honest, it is a bit confusing. It seems as if it is a common format for types of blog posts (reviews, etc). But I'm not sure where it would get published. Would it be used instead of RSS? But what if your blog entires has stuff that matches microcontent and stuff that does not?</p><p>Sean - can you shed some light on this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653886">6</a> by jimjay
		posted on 6/6/2006 at 10:31 PM
		</div>
		<div class="comment_text"><p>OMG, that picture was HAWT!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653888">7</a> by Sean Tierney
		posted on 6/6/2006 at 11:07 PM
		</div>
		<div class="comment_text"><p>Ray, <br>I'll ask my partner Kimbro to respond since he's more qualified to explain how this works (he's the one who literally wrote the tools to enable this stuff). Basically microcontent consists of these xml definitions called MCD's which know how to display both the form for authoring the content as well as the view for rendering it. Kimbro wrote the perl and php implementations of the mcd engine for MT and Wordpress and he's working on consolidating and moving everything to a js-based library that can be invoked from anywhere. When that happens I would imagine it will be trivial to add this functionality to BlogCFC.</p><p>I'll see if he can chime in and give a more thorough answer for you.<br>Sean</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653887">8</a> by Raymond Camden
		posted on 6/6/2006 at 11:15 PM
		</div>
		<div class="comment_text"><p>Thanks Sean, I appreciate it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653889">9</a> by Kimbro Staken
		posted on 6/6/2006 at 11:27 PM
		</div>
		<div class="comment_text"><p>To follow up on Sean's comment, all structured blogging is is a way to added additional structure to particular type of posts. A common example is a review, which when using a structured blogging tool enables you to add additional markup to the post so that the data is both human readable and machine readable.</p><p>The structured data is embedded in the post itself and published as part of the web page and the RSS feed. In the case of a review, the data is marked up using the hReview microfomat and also includes another block of XML data that describes the post contents. Most other post types just include the XML data block if there's no microformat for that type of data.</p><p>The intention of all of this is to enable the creation of new types of applications that can reuse this data from around the web. A good example of this is something like a classified ad, in the architecture that we're working on, you just publish the ad to your site and it will automatically appear in various classifieds aggregators around the net. The structured elements enable the aggregators to know much more about the data, for example what city you're in, the name of the item, the price and so on.</p><p>Anyway, that's the general idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653894">10</a> by Raymond Camden
		posted on 6/6/2006 at 11:31 PM
		</div>
		<div class="comment_text"><p>So is it done in such a way that it doesn't break the rest of the page? I'm trying to wrap my head around how a review in this format, on my blog, would not break other entries or the layout in general. Do you have an example of a live web page that does this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653891">11</a> by Kimbro Staken
		posted on 6/7/2006 at 12:04 AM
		</div>
		<div class="comment_text"><p>There's an example here. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.kstaken.com%2Farchives%2F28_album-of-the-week-depeche-mode-playing-the-angel.html%3APcFnbCYD997wl2sUTl9kFnEbWd0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.kstaken.com/archives/28_album-of-the-week-depeche-mode-playing-the-angel.html">http://www.kstaken.com/arch...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653890">12</a> by Mike Rankin
		posted on 6/7/2006 at 12:39 AM
		</div>
		<div class="comment_text"><p>Cute girls in bikinis?  They don't really exist, do they?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653895">13</a> by Edward T
		posted on 6/7/2006 at 6:08 PM
		</div>
		<div class="comment_text"><p>It might be easier to understand microcontent by looking at the various microformats that have been designed. Check out the Wikipedia entry on microformats for a good series of links to emerging formats (<a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FMicroformats%29%3AYZb4oZMWp6dzXRx-naR_qOVeTTw&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Microformats)">http://en.wikipedia.org/wik...</a> and , of course, <a href="http://disq.us/url?url=http%3A%2F%2Fmicroformats.org%3AFKvIIL2T7bUdI1GtEU4SNcoZDsI&amp;cuid=3321886" rel="nofollow noopener" title="http://microformats.org">http://microformats.org</a> for the latest on what is going on.</p><p>Some microformats are really very non-invasive; for XFN (XHTML friends network), you only really need to support a rel attribute in your links.  Others, like hReview (<a href="http://disq.us/url?url=http%3A%2F%2Fmicroformats.org%2Fwiki%2Fhreview%29%3At_cagLX-8nRDytCaBdr9rdnPurs&amp;cuid=3321886" rel="nofollow noopener" title="http://microformats.org/wiki/hreview)">http://microformats.org/wik...</a> are a little more complicated, but you just need to mark up your data with the proper class names.</p><p>For BlogCFC, you would probably need to extend the posting form to allow users to separate their data appropriately so that you could mark it up correctly on submit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653892">14</a> by Gary Funk
		posted on 6/8/2006 at 6:23 AM
		</div>
		<div class="comment_text"><p>But.. but... but it's PHP.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653899">15</a> by Doug Bedient
		posted on 10/8/2006 at 7:29 AM
		</div>
		<div class="comment_text"><p>does anyone have the blogcfc2wordpress code? I need to migrate it over and his Wordpress site is down. Maybe I should point that out to my client.</p><p>Thanks if you can help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653897">16</a> by Sam
		posted on 8/20/2008 at 4:14 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>is there a wordpress to blogCFC tool. Upgrading my wordpress has just killed by blog and I would sooner be running blogCFC anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653896">17</a> by Raymond Camden
		posted on 8/20/2008 at 5:19 PM
		</div>
		<div class="comment_text"><p>Sam, in theory, you just have to read from the WP database and insert into BlogCFC. I'm not aware of such a tool offhand, but you could write one in about an hour.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653898">18</a> by Sam
		posted on 8/20/2008 at 7:09 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks for your response. I copied from DB to DB in the end because I wanted the replacement up fast - which it is now. When I get some time I may look into writing a script to do it because I'm sure there are others who wish to migrate.</p><p>I'm very pleased with BlogCFC. You have done a great job!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653900">19</a> by Ari Zanuto
		posted on 9/28/2009 at 8:03 AM
		</div>
		<div class="comment_text"><p>Hello Raymond! Can I migrate wordpress to blogCFC?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653901">20</a> by Raymond Camden
		posted on 9/28/2009 at 3:19 PM
		</div>
		<div class="comment_text"><p>Sure. Not automatically unfortunately. I'm not aware of such a tool, but a migration could be done.</p></div>
	</div>
</div>
		