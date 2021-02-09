
<div class="comment" id="c_1713740503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740503">1</a> by MikeZ
		posted on 4/6/2012 at 5:33 PM
		</div>
		<div class="comment_text"><p>Quite interesting. I often need to parse data from various HTML files and this would actually make it a lot more comfortable.</p><p>But does it require valid XML or is it able to handle formatting errors up to a certain degree?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740502">2</a> by Raymond Camden
		posted on 4/6/2012 at 5:34 PM
		</div>
		<div class="comment_text"><p>According to their site, they specifically support messy HTML. Try a site that you know is messy with my tester app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740507">3</a> by MikeZ
		posted on 4/6/2012 at 5:53 PM
		</div>
		<div class="comment_text"><p>Thanks, I'll give it a try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740505">4</a> by John Lang
		posted on 4/6/2012 at 5:55 PM
		</div>
		<div class="comment_text"><p>This is awesome, thanks for posting it Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740504">5</a> by James Moberg
		posted on 4/6/2012 at 7:45 PM
		</div>
		<div class="comment_text"><p>Using CFDUMP when reviewing what jsoup returns is extremely beneficial.</p><p>I used jsoup's whitelist to automatically remove invalid/bloated Microsoft markup from HTML in an RSS feed.<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Frvkt2GCC%3AtVans2Vrl7MmffyOlcYGZvNrbrI&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/rvkt2GCC">http://pastebin.com/rvkt2GCC</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740506">6</a> by Raymond Camden
		posted on 4/6/2012 at 7:52 PM
		</div>
		<div class="comment_text"><p>Yeah - using cfdump on Java objects is a quick/dirty way to see the API. Of course, jsoup does have their JavaDocs online too. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740509">7</a> by MikeZ
		posted on 4/6/2012 at 8:03 PM
		</div>
		<div class="comment_text"><p>Thanks James, I almost forgot about the most obvious use for this thing. Recently encountered a case where I needed to remove markup junk from copy&amp;pasted Outlook mail content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740508">8</a> by Rob Brooks-Bilson
		posted on 4/10/2012 at 3:24 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I noticed you used the new ColdFusion 10 cacheIDExists() function in your code.  I wanted to point out that I'm not a fan of the function for the most part as it actually adds an additional cache lookup in the event of a cache hit the way the documentation shows how to use it:</p><p>1st call - does it exist?<br>2nd call - it exists, so call the cache and get it (the 2nd lookup) or it doesn't exist, so get it then put it in the cache</p><p>Now consider this code:</p><p>&lt;cfset cnnhtml = cacheGet("cnnhtml")&gt;<br>&lt;cfif isNull(cnnhtml)&gt;<br>	&lt;cfhttp url="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Az62k3PiARI51d8u5PVuObV9SJJI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cnn.com">http://www.cnn.com</a>"&gt;<br>	&lt;cfset cnnhtml = cfhttp.filecontent&gt;<br>	&lt;cfset cachePut("cnnhtml",cnnhtml)&gt;<br>&lt;/cfif&gt;</p><p>Notice that in the case of a get, if the item is in the cache, that's it - just one call.  If the item doesn't exist then you grab it and put it in the cache.  This might seem like a small deal, but in a large scale system, it could be significant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740511">9</a> by Raymond Camden
		posted on 4/10/2012 at 7:27 PM
		</div>
		<div class="comment_text"><p>Are you saying ehcache doesn't provide a nicer way of checking for something than asking for it and noticing it is null? Or that CF doesn't have a way of using a nicer API? Is the check that expensive?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740510">10</a> by Rob Brooks-Bilson
		posted on 4/10/2012 at 7:45 PM
		</div>
		<div class="comment_text"><p>I'm saying that using cacheIDExists() is less efficient. It's not expensive for small apps. It is expensive at scale.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740512">11</a> by Raymond Camden
		posted on 4/10/2012 at 7:47 PM
		</div>
		<div class="comment_text"><p>Is this a CF wrapper issue or just a fact of life with ehcache?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740514">12</a> by Pete
		posted on 5/2/2012 at 1:53 PM
		</div>
		<div class="comment_text"><p>That's a really useful tool. I can immediately think of dozens of places where it would make my life so much easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740513">13</a> by MikeZ
		posted on 5/2/2012 at 3:50 PM
		</div>
		<div class="comment_text"><p>Gave it a try on several systems.<br>It's certainly interesting, but also so much slower than extracting the data using customized RegEx-based pattern that it's of rather limited use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740515">14</a> by James Moberg
		posted on 5/2/2012 at 4:55 PM
		</div>
		<div class="comment_text"><p>If you know exactly what you are searching for and using RegEx to extract known information, then RegEx is your solution.</p><p>I jSoup to clean up unknown HTML &amp; remove unwanted elements in a couple lines that you would be difficult to identify in advance in order to generate multiple regex statements.  I'm also using it to add additional attributes &amp; properties to certain existing HTML elements when optimizing for email messages (limited CSS support).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740516">15</a> by James Moberg
		posted on 5/2/2012 at 10:27 PM
		</div>
		<div class="comment_text"><p>Ben Naddel wrote a sweet ColdFusion 10 script that uses jsoup to convert CSS style blocks to inline styles for Google-Mail-compliant email messages.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F2372-Best-Of-ColdFusion-10-Contest-Entry-HTML-Email-Utility.htm%3AS3-_l0Nu2-19L_1TO493NkrLb6o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/2372-Best-Of-ColdFusion-10-Contest-Entry-HTML-Email-Utility.htm">http://www.bennadel.com/blo...</a></p><p>This utility script is extremely useful and I'm not sure how it would be accomplished using RegEx-based patterns (if at all).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740522">16</a> by Tim Garver
		posted on 6/19/2012 at 9:56 PM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>Great find..<br>How do you set this up with CF902?<br>I tried with JavaLoader but keep getting some instantiation errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740520">17</a> by Raymond Camden
		posted on 6/19/2012 at 10:27 PM
		</div>
		<div class="comment_text"><p>JavaLoader should work. What error do you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740521">18</a> by Tim Garver
		posted on 6/20/2012 at 7:17 PM
		</div>
		<div class="comment_text"><p>I am an idiot :)<br>jsoup does not need to init() just do the create()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740525">19</a> by Alan
		posted on 6/22/2012 at 10:13 PM
		</div>
		<div class="comment_text"><p>what about sites load with AJAX. is there anyway to tell when is page done and start caching? tried buy dot com couldn't pass loading stage</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740523">20</a> by Raymond Camden
		posted on 6/22/2012 at 10:16 PM
		</div>
		<div class="comment_text"><p>Alan: I'm a bit confused. Your question doesn't seem to have anything to do with this blog entry. This library works with HTML on the server. If you are using JS to load data remotely, you don't need this. Just use jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740524">21</a> by Alan
		posted on 6/22/2012 at 10:33 PM
		</div>
		<div class="comment_text"><p>you are right you can do with JQuery :) the same question for you; why you can't do this HTML parsing with JQuery?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740526">22</a> by Raymond Camden
		posted on 6/22/2012 at 10:37 PM
		</div>
		<div class="comment_text"><p>Um... no one said you couldn't. The idea was that if you _needed_ to do it server-side, this was a solution. Imagine a server-side process that examines HTML files that are dynamically generated by some process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740527">23</a> by Alan
		posted on 6/22/2012 at 10:51 PM
		</div>
		<div class="comment_text"><p>i was trying to extract product information from certain websites. Which some requires login some not (i have to deal on server, JQuery is not option).</p><p>You are right on that; this is not jsoup problem but very related and I will appreciate if you can advise me.  I faced this dynamic page loading issue. if i can't grab correct content with cfhttp, that means i can't start playing with jsoup.</p><p>thanks in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740529">24</a> by Raymond Camden
		posted on 6/23/2012 at 12:43 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure what you are saying then. You said you want it server side but can't grab it with cfhttp? Why not?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740528">25</a> by Alan
		posted on 6/23/2012 at 8:28 PM
		</div>
		<div class="comment_text"><p>i am trying to overcome with loading stage. the site brings ajax search result and cfhttp grabs only loading</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740531">26</a> by Raymond Camden
		posted on 6/23/2012 at 8:31 PM
		</div>
		<div class="comment_text"><p>So given some URL, lets say <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%2Findex.html%3AQH-lTx01F01iqurGHLXNIu39Rxg&amp;cuid=3321886" rel="nofollow noopener" title="foo.com/index.html">foo.com/index.html</a>, which is a page that uses Ajax to load stuff in, let's say random database content.</p><p>You are trying to use cfhttp+jsoup on it.</p><p>If so- no - you can't do this. cfhttp will load the HTML/JS, it will not "run" it. If you want to run jsoup on the content loaded via Ajax, determine what THAT url is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740530">27</a> by Alan
		posted on 6/24/2012 at 12:59 AM
		</div>
		<div class="comment_text"><p>sorry for poor explanation. can you get tell me way how i can get content of this page with cfhttp</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740532">28</a> by Raymond Camden
		posted on 6/24/2012 at 8:59 AM
		</div>
		<div class="comment_text"><p>Are you asking how to use cfhttp? Did you check the CFML Reference?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740533">29</a> by Alan
		posted on 6/25/2012 at 10:27 PM
		</div>
		<div class="comment_text"><p>yeah right that is my question:) i think it removed the link which could bring some light to my question. never mind ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740534">30</a> by Mike
		posted on 2/25/2013 at 3:45 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>How do I make the .jar available for this?<br>"I began by downloading the jar file and dropping into a folder called jars. Then, using ColdFusion 10, it was trivial to make it available to my code"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740536">31</a> by Raymond Camden
		posted on 2/25/2013 at 3:52 AM
		</div>
		<div class="comment_text"><p>The docs for this begins here: <a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F10.0%2FDeveloping%2FWSe61e35da8d318518-106e125d1353e804331-7fff.html%3A7ztG3QDAzlOYxKBHKxHRd3VYSqs&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/10.0/Developing/WSe61e35da8d318518-106e125d1353e804331-7fff.html">http://help.adobe.com/en_US...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740535">32</a> by James Moberg
		posted on 7/23/2013 at 6:13 PM
		</div>
		<div class="comment_text"><p>FYI: This demo doesn't work anymore as the website can't be found.  The demo at:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F5%2F11%2FExample-of-invokeAndPublish-with-WebSockets-and-ColdFusion-10%3AwAkuPxneCALG0oG_QJ0Wbu223ik&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/5/11/Example-of-invokeAndPublish-with-WebSockets-and-ColdFusion-10">http://www.raymondcamden.co...</a><br>is broken too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740537">33</a> by Colin Mac
		posted on 6/18/2014 at 12:06 AM
		</div>
		<div class="comment_text"><p>So this is pretty great ... when it works. For producing a page that downloads a report via a CSV file, I'm collecting the href attribute of anchor tag nodes and putting the resulting URL in parentheses after the linked text, then stripping out all of the html. Only it's not working in my component. MyElement.attr("href") works fine in a vanilla cfm, but for some reason in a cfc within my framework it spits out the empty string. MyElement.text() works for getting the link text, but attr("href") produces nothing. writeDump( myElement ) also shows a fully formed Element object.</p><p>I can't find anything but the most basic examples of using jsoup with ColdFusion, but I suspect something in here is breaking when it gets more complex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740540">34</a> by Raymond Camden
		posted on 6/18/2014 at 12:08 AM
		</div>
		<div class="comment_text"><p>So to be clear, you can take a block of code and run it in a CFM and it works ok. You take the *exact* same code in a CFC and it breaks? Or did you change something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740541">35</a> by Colin Mac
		posted on 6/18/2014 at 7:43 PM
		</div>
		<div class="comment_text"><p>Just to be sure, I created a cfc to put the jsoup code into, and called it from the cfm. It worked. The code below is from the cfc that doesn't work. Toward the end I experiment with cleaning the doc of all html, but I suspect I probably could have just used doc.text(), assuming my shenanigans with the href were kosher. Kosher shenanigans. Actually, just ran it and found that the doc variable retains enclosing html and body tags, even after a cleaning. Or maybe as part of the toString() method. So it would have to be text().</p><p>//attempting to take the href and put in parens beside the link text, then remove the a tag.<br>local.doc = local.jsoup.parse( arguments.html, local.baseUrl );<br>local.elements = <a href="http://disq.us/url?url=http%3A%2F%2Flocal.doc.select%3AI_kJ59O3wibtdmi-HeD94PTgwLE&amp;cuid=3321886" rel="nofollow noopener" title="local.doc.select">local.doc.select</a>("a");<br>for (local.el in local.elements) {<br>	writeDump( "href:" &amp; local.el.attr("href") &amp; " text:" &amp; local.el.text() );<br>	local.el.appendText( local.el.text() &amp; ' (' &amp; local.el.attr("href") &amp; ') ');<br>}<br>local.cleaner = createObject( "java", "org.jsoup.safety.Cleaner" );<br><a href="http://disq.us/url?url=http%3A%2F%2Flocal.cl%3AHFXVGgiq9FHNdtj0GMFf8fNY3rk&amp;cuid=3321886" rel="nofollow noopener" title="local.cl">local.cl</a> = local.cleaner.init( local.whitelist.none() );<br>local.doc = local.cl.clean( local.doc );<br>return local.doc.toString();</p><p>Result: For input <br>arguments.html = &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fyahoo.com%3AV104q-nvzKYhzT6aX2gay9VFUg0&amp;cuid=3321886" rel="nofollow noopener" title="http://yahoo.com">http://yahoo.com</a>"&gt;yahoo&lt;/a&gt; <br>writeDump just prints "href: text: yahoo".</p></div>
	</div>
</div>
		