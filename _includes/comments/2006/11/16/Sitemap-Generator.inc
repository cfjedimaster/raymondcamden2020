
<div class="comment" id="c_1713659291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659291">1</a> by aleksandar
		posted on 11/20/2006 at 5:50 PM
		</div>
		<div class="comment_text"><p>How actualy it works?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659289">2</a> by Raymond Camden
		posted on 11/20/2006 at 7:02 PM
		</div>
		<div class="comment_text"><p>You pass in either a list of URLs or a query. I added it to CFLib last night and there is a bit more documentation there.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fudf.cfm%3Fid%3D1596%3AYi-VZVdZ0jCPauFQQ92BuY6rpUk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/udf.cfm?id=1596">http://www.cflib.org/udf.cf...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659293">3</a> by BL
		posted on 11/28/2006 at 9:41 PM
		</div>
		<div class="comment_text"><p>do you think it would be hard to build and site crawler and link parser in cf to use with this udf?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659292">4</a> by Raymond Camden
		posted on 11/29/2006 at 1:31 AM
		</div>
		<div class="comment_text"><p>BL: Sure, I'll make it a Friday test. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659290">5</a> by BL
		posted on 11/29/2006 at 5:21 AM
		</div>
		<div class="comment_text"><p>nice.  you feelin a little regexy?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659297">6</a> by dickbob
		posted on 3/3/2007 at 6:07 PM
		</div>
		<div class="comment_text"><p>Can I offer a couple of amendments in the light of my experience of using this UDF to submit to Google.</p><p>Code changes occur after the comment "reformat datetime as w3c datetime / <a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2FNOTE-datetime%3Ah8Vj473M0R6P8IN30VFezAyiivo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/NOTE-datetime">http://www.w3.org/TR/NOTE-d...</a>".</p><p>1. Change the test of tz to be "gt" rather than "gte". To be honest this is really just a personal style thing, +00:00 looks better than -00:00 to me, and doesn't seem to effect Google.</p><p>2. Make the hour number format "00" for the newDate offset eg. numberFormat(tz,"00"). So the lines should read newDate = newDate &amp; "-" &amp; numberFormat(tz,"00") &amp; ":00" and newDate = newDate &amp; "+" &amp; numberFormat(tz,"00") &amp; ":00"</p><p>HTH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659296">7</a> by Raymond Camden
		posted on 3/4/2007 at 3:20 AM
		</div>
		<div class="comment_text"><p>I've made both changes. I've also changed the UDF to use stringbuffer, this makes it quicker. Unfortunately - CFLIB is causing me fits now - so it's not hooked up yet. I will refresh it later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659295">8</a> by dickbob
		posted on 3/6/2007 at 8:13 PM
		</div>
		<div class="comment_text"><p>I know you most likely thought of it but I should have mentioned that the same changes need to be applied when the data is supplied as a query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659298">9</a> by Ruth
		posted on 4/19/2007 at 11:45 PM
		</div>
		<div class="comment_text"><p>Hi there, I was just tasked to produce an XML sitemap.  I noticed that you mention that you would make a Friday test out of the idea of making a site crawler.  I searched for that term in your blog and didn't see any results.  Did this ever occur?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659299">10</a> by Raymond Camden
		posted on 4/20/2007 at 2:32 AM
		</div>
		<div class="comment_text"><p>Not yet - no.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659304">11</a> by Ruth
		posted on 4/21/2007 at 12:04 AM
		</div>
		<div class="comment_text"><p>I started a solution to create a map on the server side - but it isn't a crawler.  I'll post the code after I get it cleaned up enough and some of the kinks worked out.</p><p>I am having issues with cfdirectory w/recursion at webroot.  I get the pesky null pointer error, which I am attributing to archived directories, etc bloating the query.  I still need to prove that is the cause.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659314">12</a> by Raymond Camden
		posted on 4/21/2007 at 12:11 AM
		</div>
		<div class="comment_text"><p>Ruth, don't forget that if you confirm a bug, you can report it at:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%3AeVByS_kB5f-F_Xb5m4vrRNXZtoA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/wish">http://www.adobe.com/go/wish</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659313">13</a> by Jeremy Halliwell
		posted on 8/14/2007 at 4:06 PM
		</div>
		<div class="comment_text"><p>Ray, the udf on cflib although dated March 9 2007 doesn't have the  changes you mentioned you'd added to timezone and the use of stringbuffer. Also the getTimeZoneInfo().utcHourOffset assigned to tz returns (for me at least) an offset value, eg "-1" for UK, so the test which adds the "+" or "-" later is unnecessary and makes the date format invalid (eg 2007-08-04T19:24+-1:00).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659309">14</a> by Raymond Camden
		posted on 8/14/2007 at 5:00 PM
		</div>
		<div class="comment_text"><p>I'm updating it in 10 seconds. Will you please give it a try?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659311">15</a> by Jeremy Halliwell
		posted on 8/14/2007 at 5:22 PM
		</div>
		<div class="comment_text"><p>Yes that works great, thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659310">16</a> by Snake
		posted on 9/4/2007 at 9:40 PM
		</div>
		<div class="comment_text"><p>You say blogcfc has had sitemap support for some time, in what way?<br>Is it supposed to generate a sitemap.xml file ?<br>And if so, how? I can't find any option to do this.<br>Or do I need to update as I am on blogCFC 5.5</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659312">17</a> by Raymond Camden
		posted on 9/4/2007 at 9:53 PM
		</div>
		<div class="comment_text"><p>There should be a file named sitemap or googlesitemap.cfm in the root directory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659316">18</a> by marco
		posted on 10/13/2007 at 6:17 AM
		</div>
		<div class="comment_text"><p>Hi I can't figur out how to combine these values in to one and to an xml output:</p><p>&lt;cfset siteMapXML = generateSiteMap(data=urls,changefreq="daily",priority="1.0", lastmod=now())&gt;<br>&lt;cfdump var="#xmlParse(siteMapXML)#"&gt;<br>&lt;cfset siteMapXML = generateSiteMap(qurls)&gt;<br>&lt;cfdump var="#xmlParse(siteMapXML)#"&gt;</p><p>I want these combined as a need to put it all to one xml sitemap, the .cfm sitemap takes to long to load, big sitemap.</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659318">19</a> by Raymond Camden
		posted on 10/24/2007 at 2:03 AM
		</div>
		<div class="comment_text"><p>Well I think you can just combine both XML files. You would want to remove the &lt;xml&gt; header from the second one though. Not exactly sure - but it's definitely possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659319">20</a> by m van den oever
		posted on 10/24/2007 at 3:18 AM
		</div>
		<div class="comment_text"><p>of course, i was thinking the hard way as usual, thx</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659321">21</a> by Adam
		posted on 1/19/2008 at 12:49 AM
		</div>
		<div class="comment_text"><p>Could someone break this down for me?  I've read this post over and over and looked at the CFLib documentation.  I don't know if I"m missing something or (most likely) I just don't know what I'm doing.  Any shove in the right direction is greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659322">22</a> by TonyD
		posted on 7/9/2009 at 9:10 AM
		</div>
		<div class="comment_text"><p>Hi Ray, many retrospective thanks for other tips.</p><p>I'm with Adam on this. As indicated at <a href="http://disq.us/url?url=http%3A%2F%2FsiteMap.org%3AjpihtUYBL0ywnqPuAxU3VS9-Zcc&amp;cuid=3321886" rel="nofollow noopener" title="siteMap.org">siteMap.org</a>, that the search engine will look for an XML document called sitemap is clear.</p><p>That the generateSiteMap functions returns this XML code for the urls provided is also clear. That the xmlparse function turns this into an xml object (and the xml code is visible in codeview on the webpage) is clear.</p><p>So instead of using cfdump, you pick whichever of the three options you prefer and then just surround the xmlparse with cfoutput tags and this hands the xml to the search engine?</p><p>Its one of those things where you could end up ten years later in a bar discussing XML and girls only to find out that you've been setting up invalid site maps for ten years.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659323">23</a> by Raymond Camden
		posted on 7/9/2009 at 4:32 PM
		</div>
		<div class="comment_text"><p>Yeah, take the result and just output it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659327">24</a> by Karan Joshi
		posted on 2/19/2010 at 8:42 AM
		</div>
		<div class="comment_text"><p>Used bits n pieces of your code...works like a charm...thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659326">25</a> by Custard Pie
		posted on 8/23/2010 at 6:56 PM
		</div>
		<div class="comment_text"><p>How are using this? I'm able to call it and it seems to output the header and closing mark up, but I haven't made the connection as to how it gets all the site directories to produce a complete site map.  I can see I can pass the data argument to it, but what are you using to traverse the site directories so that this component can wrap it in xml?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659325">26</a> by Raymond Camden
		posted on 8/24/2010 at 4:02 PM
		</div>
		<div class="comment_text"><p>I'm not traversing the site. You need to figure that part out yourself. Every site is different. So for example, on this blog, I can make a map by getting all the entries. For a news site, you would get all the news article. Amazon would get all their products. Essentially - look at your site data and set up a query that represents the content.</p></div>
	</div>
</div>
		