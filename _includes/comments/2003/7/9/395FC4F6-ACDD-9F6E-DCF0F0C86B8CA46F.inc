
<div class="comment" id="c_1713614714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614714">1</a> by PaulH
		posted on 7/9/2003 at 2:12 PM
		</div>
		<div class="comment_text"><p>there's already a cfXML based blog. it requires cffile, which is even more of a workaround than re-writing yours not to use createObject.</p><p>is your blog i18n ready?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614717">2</a> by anonymous
		posted on 7/9/2003 at 2:16 PM
		</div>
		<div class="comment_text"><p>Yes, an XML based blog would be nice instead of requiring a DB. Of course I haven't yet looked at your code to know the implications of that, but I think that's a good feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614716">3</a> by Scott Keene
		posted on 7/9/2003 at 6:13 PM
		</div>
		<div class="comment_text"><p>I think XML storage is a more "blog-like" way of doing it really. You relieve yourself of dependency on another resource (db server) and have more of a "living document" for your blog entry's "permalink". How about an either/or option? No need to toss out the old code! Really, the BEST way that I could even think of would be to render them to (X)HTML directly - a true "permalink" that requires no server to process other than the web server. You could even potentially have the admin upload the files to a non-CF site, pure HTML. Radio and others do things this way I believe, and it would be cool to see a CF implementation like this (though it would involve a lot of work).</p><p>That said, my own CF blogging software works with a database as well, so I am facing the same decisions. I have been thinking of abandoning mine and switching to yours already as a matter of fact, so make it store XML - I'll switch for certain! Heh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614719">4</a> by Raymond Camden
		posted on 7/9/2003 at 6:18 PM
		</div>
		<div class="comment_text"><p>Scott, if I do allow for XML, it will not be a conversion, it will be either-or.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614720">5</a> by Scott Keene
		posted on 7/9/2003 at 6:25 PM
		</div>
		<div class="comment_text"><p>Yeah, I don't know why I said that, Ray - I should've assumed you weren't thinking of dumping the DB capabilities rather than the reverse! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614721">6</a> by Ben Forta
		posted on 7/9/2003 at 7:05 PM
		</div>
		<div class="comment_text"><p>XML as an option would make sense (make it an INI flag per blog), but not in lieu of a db. Some things (search, for starters) are just going to perform better in a database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614724">7</a> by Randy Drisgill
		posted on 7/9/2003 at 11:21 PM
		</div>
		<div class="comment_text"><p>Definately don't take away db support. It would be nice to have pure xml, and it does make since from a pure weBLOG standpoint... But DB is more powerful.</p><p>A little off topic, but I know in the last versions I still had to change a couple areas (email and page titles mostly) to be dynamic rather than hard coded to Camden info. Any plan to change this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614723">8</a> by Raymond Camden
		posted on 7/9/2003 at 11:26 PM
		</div>
		<div class="comment_text"><p>Let me repeat. I have NO plans of taking away DB support. The mod (IF I do it), will allow for DB or XML.</p><p>As for hard coded parts - I still look at this project as a blog CFC and my client. So, I assume people will tweak the client (layout, etc) and not just unzip and run. So I don't see a big need to make the client completely dynamic. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614725">9</a> by Raymond Camden
		posted on 7/9/2003 at 11:28 PM
		</div>
		<div class="comment_text"><p>Of course, if many people _want_ this, I can look into it. Certainly you will almost always have to edit the stuff in the right hand column, unless you play the exact same games and read the same books as I do. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614727">10</a> by Randy Drisgill
		posted on 7/9/2003 at 11:51 PM
		</div>
		<div class="comment_text"><p>Don't get me wrong, I love the fact that you released this code to make a simple blog... you are not required to make the code user friendly.</p><p>BUT, you recently made a bunch of things call from variables anyway... so when I grabbed the code I made variables out of these other things right away. For simplicity sake, here are the places that need changing (I think these are it)... there are only 5 lines total (which can pull from 3 variables in the blog.cfc ownerEmail, blogTitle, blogDescription):</p><p>addcomment.cfm (title)<br>editor.cfm (title)<br>layout.cfm (title, banner)<br>rss.cfm (email)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614726">11</a> by Steve Ray
		posted on 7/10/2003 at 12:16 AM
		</div>
		<div class="comment_text"><p>Yes, please. I was thinking about finagling your app to do this myself, but I'd much rather you do it and save me the time. ;) I wrote one of these things myself and stored everything that way, but your's seems more full-featured, and I don't have the time to keep working on mine, so I think I'm switching.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614728">12</a> by Jacob Reider
		posted on 7/10/2003 at 4:50 AM
		</div>
		<div class="comment_text"><p>a) Thanks for 2.1 ... looking good!<br>b) I agree with the XML option, but I think I'll stick with SQLserver.<br>c) Customization.  I made many of the changes that Randy made .. so I guess that answers the question ... making these components more dynamic would be a good thing.<br>d) Feature request.  Here goes .. I have two ideas for features .. but I don't want to dump all requests into Ray's lap .. so ... Nate suggested Sourceforge/CVS ... any interest in this? ... We could all work on separate features ... such as ... 1) RSS 2.0 .. I'd prefer RSS 2.0 or even 0.91 to RSS 1.0 .. not too hard .. I've already started some work on it ... 2) ( a bit of a taller order)  .. ability to use layout/formatting templates from blogger or movabletype.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614763">13</a> by Raymond Camden
		posted on 7/10/2003 at 5:20 AM
		</div>
		<div class="comment_text"><p>Jacob: c) Will do. d) SOurceforge... still not sure. I don't mind sharing my work, but I kinda want to control it still. ;)  1) If you can point me to a good URL on RSS 2.0, and tell me why it's better, I'll defintely consider it. 2) Can you point me to resources on them - and also - would it be a copyright violation?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614730">14</a> by Jacob Reider
		posted on 7/10/2003 at 5:46 AM
		</div>
		<div class="comment_text"><p>yikes .. the RSS politics are tricky and complex ... a (very) short version:</p><p>0.91 was developed by Netscape and Dave Winer.  Pure XML, and very easy to implement and subscribe to.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbackend.userland.com%2Frss091%3AVAi-y7PfM8XmU3oc4tpMWxhzwn4&amp;cuid=3321886" rel="nofollow noopener" title="http://backend.userland.com/rss091">http://backend.userland.com...</a></p><p>1.0  was a separate endeavor that didn't involve the 0.91 folks at all.  Lots of bad blood over this.  RDF rather than pure XML.</p><p>2.0 is a superset of 0.91 and developed by Dave Winer</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbackend.userland.com%2Frss%3AKTLYTIZF_yuO4zVptfmyRBXM2A0&amp;cuid=3321886" rel="nofollow noopener" title="http://backend.userland.com/rss">http://backend.userland.com...</a></p><p>A quick look at some of the issue:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbackend.userland.com%2FdavesRss2PoliticalFaq%3ACUdvrRTwOKrf_SNcfNOVEz1U5K4&amp;cuid=3321886" rel="nofollow noopener" title="http://backend.userland.com/davesRss2PoliticalFaq">http://backend.userland.com...</a></p><p> ...</p><p>and of course there is the gestational echo/pie project:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.intertwingly.net%2Fwiki%2Fpie%2FRoadMap%3Axn7QU9vjfQLwikCzn6XvKVkruhc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.intertwingly.net/wiki/pie/RoadMap">http://www.intertwingly.net...</a></p><p>Intent is to develop what is not being called RSS 3.0 .. (proposed names include Echo and Pie .. as in "easy as pie") ...</p><p>But .. bottom line in my head is that RSS 2.0 makes valid RSS 0.91 feeds, so it's the safest method of providing an RSS feed today.  All aggregators will read 0.91 or 2.0 feeds, but they won't all read 1.0.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614731">15</a> by Raymond Camden
		posted on 7/10/2003 at 6:07 AM
		</div>
		<div class="comment_text"><p>Ok, I think I will do that. I'll keep the RSS 1.0 method and add another method so people can choose which one they want to use. Thanks for the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614732">16</a> by Jacob Reider
		posted on 7/10/2003 at 6:16 AM
		</div>
		<div class="comment_text"><p>yikes .. the RSS politics are tricky and complex ... a (very) short version:</p><p>0.91 was developed by Netscape and Dave Winer.  Pure XML, and very easy to implement and subscribe to.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbackend.userland.com%2Frss091%3AVAi-y7PfM8XmU3oc4tpMWxhzwn4&amp;cuid=3321886" rel="nofollow noopener" title="http://backend.userland.com/rss091">http://backend.userland.com...</a></p><p>1.0  was a separate endeavor that didn't involve the 0.91 folks at all.  Lots of bad blood over this.  RDF rather than pure XML.</p><p>2.0 is a superset of 0.91 and developed by Dave Winer</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbackend.userland.com%2Frss%3AKTLYTIZF_yuO4zVptfmyRBXM2A0&amp;cuid=3321886" rel="nofollow noopener" title="http://backend.userland.com/rss">http://backend.userland.com...</a></p><p>A quick look at some of the issue:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbackend.userland.com%2FdavesRss2PoliticalFaq%3ACUdvrRTwOKrf_SNcfNOVEz1U5K4&amp;cuid=3321886" rel="nofollow noopener" title="http://backend.userland.com/davesRss2PoliticalFaq">http://backend.userland.com...</a></p><p> ...</p><p>and of course there is the gestational echo/pie project:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.intertwingly.net%2Fwiki%2Fpie%2FRoadMap%3Axn7QU9vjfQLwikCzn6XvKVkruhc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.intertwingly.net/wiki/pie/RoadMap">http://www.intertwingly.net...</a></p><p>Intent is to develop what is not being called RSS 3.0 .. (proposed names include Echo and Pie .. as in "easy as pie") ...</p><p>But .. bottom line in my head is that RSS 2.0 makes valid RSS 0.91 feeds, so it's the safest method of providing an RSS feed today.  All aggregators will read 0.91 or 2.0 feeds, but they won't all read 1.0.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614733">17</a> by Nathan Dintenfass
		posted on 7/10/2003 at 9:06 PM
		</div>
		<div class="comment_text"><p>You don't lose control on SourceForge, necessarily.  You still control who has access to commit things to CVS, and since you are already giving away the code there shouldn't be any issue.  But, it would let you provide it via CVS, so you could have stable builds and development still going on more easily.  It would also move discussion of features of the software off your blog (which may or may not be a good thing).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614734">18</a> by Dave Powell
		posted on 9/23/2005 at 5:34 PM
		</div>
		<div class="comment_text"><p>hey ray...</p><p>...didn't see it posted already, but here's that cfxml blog, written by some folks in italy...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.veggiani.it%2Favblog%2Findex.cfm%3Aqu0XqFaAWLfYJvat1HzJb0pESRg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.veggiani.it/avblog/index.cfm">http://www.veggiani.it/avbl...</a></p><p>...not bad...was kinda dead for awhile, but it looks like Andrea Veggiani has picked it back up...</p><p>...and, last i checked, they were also on sourceforge...but that was a while back...</p></div>
	</div>
</div>
		