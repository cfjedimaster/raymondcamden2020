
<div class="comment" id="c_1713671816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671816">1</a> by Mike Henke
		posted on 10/2/2007 at 10:55 PM
		</div>
		<div class="comment_text"><p>I may have missed the reason for doing this :-)  You mention indexing and storing the meta info in a database.  Why would you want to do this?  Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671825">2</a> by Raymond Camden
		posted on 10/3/2007 at 12:55 AM
		</div>
		<div class="comment_text"><p>I only mentioned the meta info in regards to the time stamps. If URL x was updated yesterday, then there is no need to resuck it down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671823">3</a> by Mike Henke
		posted on 10/3/2007 at 2:05 AM
		</div>
		<div class="comment_text"><p>Thanks this looks really cool, so I was wondering any specific benefits or uses for 'Using Sitemaps with Verity'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671829">4</a> by Raymond Camden
		posted on 10/4/2007 at 2:16 AM
		</div>
		<div class="comment_text"><p>Well the point was that it could be used as an alternative to the spider, which only works on localhost.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671814">5</a> by Michael Evangelista
		posted on 11/28/2007 at 9:37 PM
		</div>
		<div class="comment_text"><p>CF7 version?</p><p>Hi Ray - <br>I am trying to implement this on a site that sits on a CF7 server. I managed to remove the cfthread references and replaced fileRead with a cffile action='read'... and it seems to work, sorta but not quite.</p><p>My sitemap.xml has about 80 nodes.<br>When running the modified indexing page, I get a success message saying 20 rows have been added - but nothing at all in search results, even searching for words that should be in every document. (side note: is there any way to view or dump the contents of a verity collection?)</p><p>In your notes you say 'this should be easy to downgrade to cf7' , but I am wondering what I have missed. I know this is vague but...  any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671832">6</a> by Raymond Camden
		posted on 11/28/2007 at 9:58 PM
		</div>
		<div class="comment_text"><p>Hmm. So first lets look at why you get 20 rows, not 80. If you cfdump info before you index, do you see 80 rows? How about your URL column. Are they all unique?</p><p>The only simple way to dump an entire collection is to search for *.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671831">7</a> by Michael Evangelista
		posted on 11/28/2007 at 10:35 PM
		</div>
		<div class="comment_text"><p>Hi Ray - <br>thanks for the quick reply.</p><p>yes, the dump shows 80 rows (dumping out the same 'myxml' variable that is being parsed).</p><p>I hacked this in two ways for cf7 <br>Took out the fileRead like this, adding cffile instead</p><p>&lt;cffile action="read" file="#siteMapPath#" variable="myxml"&gt;<br>&lt;!--- &lt;cfset myxml = fileRead(expandPath("./sitemap.xml"))&gt; ---&gt;</p><p>And commented out the cfthread references in 3 places.</p><p>I just sent you a direct email with links to the pages and a bit of explanation, and I am playing with the cfdump now.<br>I'd love to get this working for CF7, and hope it might be useful to others too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671830">8</a> by Michael Evangelista
		posted on 11/28/2007 at 11:40 PM
		</div>
		<div class="comment_text"><p>tracing this down further, <br><a href="http://disq.us/url?url=http%3A%2F%2Fgarkaneenergy.com%2Fverity%2Fveritysitemap.cfm%3AD-6t8WTKjsOLbE_k3MT6P3lTAQU&amp;cuid=3321886" rel="nofollow noopener" title="http://garkaneenergy.com/verity/veritysitemap.cfm">http://garkaneenergy.com/ve...</a><br>For the moment, I have this page dumping out each of the <a href="http://disq.us/url?url=http%3A%2F%2Frequest.data%3A06HVRQ3E3PAxRs-Agfv7VxEiFas&amp;cuid=3321886" rel="nofollow noopener" title="request.data">request.data</a>... structs for each page, along with the page name.</p><p>Super cool to see all that meaty text content in there!</p><p>below that i am dumping the full xml variable.</p><p>it goes through the first 20 in the file, and then chokes.<br>The fact that I am getting the first sequential 20 makes me curious. I deleted number 20 and 21 in case it was bad data... then i deleted the first 20 and still only got 20.</p><p>DOH!!!! <br>&lt;smacking head&gt;<br>Your example code has 20 rows limited in the cfloop.<br>&lt; ashamed... &gt;</p><p>&lt;cfloop index="x" from="1" to="#min(20,arrayLen(myxml.urlset.url))#"&gt;</p><p>Changing that to the more obvious value<br>&lt;cfloop index="x" from="1" to="#arrayLen(myxml.urlset.url)#"&gt;<br>did the trick. Duh, double duh.</p><p>So... ok ... we are past the 'why only 20' hurdle.<br>The page shows I am getting 58 rows from the xml file which sounds perfect, and I can see , in my lovely cfdumps, all the meaty text content and perfectly organized meta values... awesome!</p><p>Listing my verity collection info<br>I see I have a DocCount of 58.</p><p>But... still no searchy.<br><a href="http://disq.us/url?url=http%3A%2F%2Fgarkaneenergy.com%2Fsearch.cfm%3A_F-mK5w90nVJDExodfavQV_vH7A&amp;cuid=3321886" rel="nofollow noopener" title="http://garkaneenergy.com/search.cfm">http://garkaneenergy.com/se...</a></p><p>Running a search here for "garkane" should bring up 58 pages at the current time.</p><p>Now I am back to wishing I could 'dump' the contents of a verity collection. I want to see what those 58 DocCount records actually contain!</p><p>I can only think that I screwed it up somewhere by simply hacking out the cfthread tags. More investigation!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671833">9</a> by Michael Evangelista
		posted on 11/28/2007 at 11:48 PM
		</div>
		<div class="comment_text"><p>AHA!!! SUCCESS!!</p><p>I had my cfsearch set up to find content only '&lt;in&gt; body'... but there's no more body tag to search through.</p><p>Ray this is AWESOME, and it has been the catalyst for quite the spontaneous learning experience.<br>Thanks for being a sounding board... I think it works!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671834">10</a> by Raymond Camden
		posted on 11/29/2007 at 12:37 AM
		</div>
		<div class="comment_text"><p>Glad you got it - I was in meetings so couldn't respond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671922">11</a> by Michael Evangelista
		posted on 11/29/2007 at 2:47 AM
		</div>
		<div class="comment_text"><p>This is so cool.<br>Now that I have struggled with it, I *get* it and , Ray, this rocks!</p><p>Taking the content filtering one step further, I added some regular expression code to strip out everything from the retrieved 'body' code that is not inside of my "mainCol" div, so the first thing shown in the site summary from the cfindex is the heading of the main part of the page, then the page text - no messy menu, or preceding-column junk to contend with.</p><p>This full circle code-trip means that I can now</p><p>- generate an xml site map for any visible site</p><p>- edit the sitemap.xml as an easy no-frills way to limit or extend which pages verity spiders</p><p>- use this code to create a cfcollection in *minutes*, <br>filtering the retained content according to any inserted tag or comment in my pages' code (i.e. only main column, etc)</p><p>- run a cfsearch against the collection, resulting in a super-fast lightweight homegrown in-site magic ColdFusion search!</p><p>thanks again... I am really psyched about having this entire code set in my collection.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671928">12</a> by Raymond Camden
		posted on 11/29/2007 at 2:50 AM
		</div>
		<div class="comment_text"><p>To be honest, I wasn't sure anyone would use it. Glad you liked it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671921">13</a> by Michael Evangelista
		posted on 11/29/2007 at 3:07 AM
		</div>
		<div class="comment_text"><p>Not only do I like it ... I can see using this a LOT. Even with access to Verity Spider in some cases, this seems like a very customizable way to get some very clean results.</p><p>I think I will put together a demo and blog post on the full circle trip using the sitemap creator and this code, plus how I restricted the search to specific parts of the page markup... If I do that, can I include a modified copy of your code as a downloadable file (with credit given, of course)?</p><p>I didnt have a clue about any of this until yesterday... now I feel like I've been handed a shiny new toolbox that lots of folks are constantly looking for... this could be really useful to a lot of people once they see it in action!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671920">14</a> by Raymond Camden
		posted on 11/29/2007 at 3:09 AM
		</div>
		<div class="comment_text"><p>You can include my code for</p><p>ONE MILLION DOLLARS! (finger by mouth and evil laugh)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671925">15</a> by Michael Evangelista
		posted on 11/29/2007 at 4:50 AM
		</div>
		<div class="comment_text"><p>For you... in advance! <br><a href="http://disq.us/url?url=http%3A%2F%2Fmredesign.com%2Fcfdev%2Fone-million-dollars.cfm%3AdCmGQqI-Q7xYXiwvaZmjKxfQcyQ&amp;cuid=3321886" rel="nofollow noopener" title="http://mredesign.com/cfdev/one-million-dollars.cfm">http://mredesign.com/cfdev/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671923">16</a> by Raymond Camden
		posted on 11/29/2007 at 7:23 PM
		</div>
		<div class="comment_text"><p>Oh that's just mean. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671927">17</a> by Michael Evangelista
		posted on 12/2/2007 at 5:56 AM
		</div>
		<div class="comment_text"><p>Ok, here's to make up for that last link<br><a href="http://disq.us/url?url=http%3A%2F%2Fmredesign.com%2Fdemos%2Fverity-sitemap%2Findex.cfm%3A6Cu5is9a-GUw64cwW5qgCgfe9YU&amp;cuid=3321886" rel="nofollow noopener" title="http://mredesign.com/demos/verity-sitemap/index.cfm">http://mredesign.com/demos/...</a></p><p>This is pretty neat - I'm using the sitemap generator to make the xml, then feeding it to your verity writer, all with a neat little skin.</p><p>Coolest part - download the zip, and drop the files into any site, then browse to the index page - walk through the steps and presto chango, instant site search!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671926">18</a> by Brent
		posted on 12/4/2007 at 5:10 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>first off I visit your blog almost daily and usually find exactly what I am looking for. Thanks for this great resource.</p><p>My question is about his script is:</p><p>While crawling my local website with this script it works perfectly except. I often get time out errors. I have adjusted the time out to 1200 but it still occurs even on smaller crawls.</p><p>Is there anyway to debug this to find out what cfhttp calls are getting hung up and perhaps just skip them ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671934">19</a> by Raymond Camden
		posted on 12/4/2007 at 4:59 PM
		</div>
		<div class="comment_text"><p>Well, there are a few things to consider. First off - why not bump up the timeout even higher? Secondly - you can log each http request and how long it took.</p><p>&lt;cfset t = getTickCount()&gt;<br>&lt;cfhttp .....&gt;<br>&lt;cfset duration = getTickCount() - t&gt;<br>&lt;cflog file="test" text="To get url #x#, it took #duration# ms"&gt;</p><p>This may flag the culprit.</p><p>Worse comes to worse - feed the code portions of the XML at a time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671932">20</a> by Brad
		posted on 1/24/2008 at 10:34 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You mentioned "I could have considered taking the data I sucked down, saving it to an HTML file, and then running a file based index. While this would be slower, it could have resulted in better indexing."</p><p>What would be the easy way to modify this code to work that way instead? I currently have save all my dynamic page saved off as html files using cfhttp and have verity indexing them for my search. I would like to switch to this instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671924">21</a> by Raymond Camden
		posted on 1/24/2008 at 10:37 PM
		</div>
		<div class="comment_text"><p>Well, where I did the cfhttp and get the content, I'd just save it into a new folder. I'd then tell Verity to index that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671929">22</a> by Connie DeCinko
		posted on 3/14/2009 at 2:26 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>How would you recommend telling the function to exclude certain links?  Would you just have to maintain a no follow list?  Or is it kinda pointless since Google is going to follow the link no matter what?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671931">23</a> by Raymond Camden
		posted on 3/14/2009 at 2:29 AM
		</div>
		<div class="comment_text"><p>I guess it depends on what you want to filter. Not sure what you want to do.</p></div>
	</div>
</div>
		