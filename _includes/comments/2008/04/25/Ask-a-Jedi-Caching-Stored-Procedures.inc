
<div class="comment" id="c_1713680321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680321">1</a> by joel
		posted on 4/25/2008 at 6:58 PM
		</div>
		<div class="comment_text"><p>In CF8, you can cache cfstoredproc results. From the Adobe docs:</p><p>CachedWithin and CachedAfter have been added to the cfstoredproc tag and can be used to cache the stored procedure results. Refer to the documentation on cfstoredproc for additional information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680334">2</a> by Raymond Camden
		posted on 4/25/2008 at 7:04 PM
		</div>
		<div class="comment_text"><p>Is this 801? In looking at my reference I do not see it (my ref is still 8 though).</p><p>If your right - and I'm sure you are - sorry folks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680323">3</a> by Raymond Camden
		posted on 4/25/2008 at 7:06 PM
		</div>
		<div class="comment_text"><p>I just checked the 801 release notes and I don't see this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680337">4</a> by joel
		posted on 4/25/2008 at 7:17 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fproducts%2Fcoldfusion%2Ffeatures%2F%23item21%3AMlzVbxMN2ihKVJvTbfM96bWfMd4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/products/coldfusion/features/#item21">http://www.adobe.com/produc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680328">5</a> by joel
		posted on 4/25/2008 at 7:24 PM
		</div>
		<div class="comment_text"><p>Documentation on this does indeed seem to be hard to come by. Trying searching for 'storedproc' in this document:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fproducts%2Fcoldfusion%2Fpdfs%2Fcf8_performancebrief.pdf%3AkjrKmYPTiwdPt04e7LtzqKYuGDw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/products/coldfusion/pdfs/cf8_performancebrief.pdf">http://www.adobe.com/produc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680322">6</a> by Raymond Camden
		posted on 4/25/2008 at 7:31 PM
		</div>
		<div class="comment_text"><p>Wow, it totally missed the 'real' docs. You are right. I'm going to edit the entry (in a few minutes, I want to email the CF doc guy) in case folks miss the comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680332">7</a> by Jason Dean
		posted on 4/25/2008 at 10:45 PM
		</div>
		<div class="comment_text"><p>Yes, I was very excited to see that cfstoredproc now supports stored procedures. We had some queries that perform thousands of stored procedures on some requests and it can take as much as 90 seconds for the page to display. But once the SP is stored the page refresh happens in less than 1 second.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680338">8</a> by joel
		posted on 4/25/2008 at 10:46 PM
		</div>
		<div class="comment_text"><p>There is an issue with caching, though, if the stored procedure returns multiple result sets. Suppose</p><p>&lt;cfstoredproc procedure="sp_test.get_some_data" datasource="mydsn" blockfactor="2" cachedwithin="#CreateTimeSpan(0,1,0,0)#"&gt;<br>  &lt;cfprocresult name="rs" /&gt;<br>  &lt;cfprocresult name="rs2" resultset="2" /&gt;<br>&lt;/cfstoredproc&gt;<br>&lt;cfdump var="#rs#"&gt;<br>&lt;cfdump var="#rs2#"&gt;</p><p>An exception will be thrown that variable rs2 is undefined, although it might work perfectly well without the cachedwithin attribute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680326">9</a> by Jason Dean
		posted on 4/25/2008 at 10:46 PM
		</div>
		<div class="comment_text"><p>Doh! I meant that I was excited that cfstoredproc now supports caching.  I think it has probably always supported stored procedures ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680341">10</a> by Joshua Curtiss
		posted on 4/25/2008 at 10:54 PM
		</div>
		<div class="comment_text"><p>Good to know. I had been doing the cfquery route.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680340">11</a> by Matt Turner
		posted on 4/27/2008 at 8:40 PM
		</div>
		<div class="comment_text"><p>What's really interesting is if you dig into the java where the queries are actually cached it uses the the syntax ray provided as the signature for the cache itself.  It really looks as though adobe just sort of missed enabling the feature in previous versions.  For those of us without CF8 there should be a way to use the cachedwithin/cachedafter functionality native to cfquery with a cfstoredprocedure by accessing the java class: lruClass and injecting your cache with the parameters you want to use manually.  I say in theory because I havn't tested it on anything but CF8, perhaps things have changed.   If anyones interested let me know and I will put togher an example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680339">12</a> by Raymond Camden
		posted on 4/27/2008 at 8:51 PM
		</div>
		<div class="comment_text"><p>@Matt- interesting. Although I still say - if you want to cache queries, you should probably just handle the caching yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680348">13</a> by Matt
		posted on 4/27/2008 at 11:24 PM
		</div>
		<div class="comment_text"><p>I totally agree way more flexibility in handling the cache yourself.  I am working on a project with a large scale implementation of Data Management using LiveCycle DS and have been forced to go to extreme lengths to handle caching on my own due to some very key features that Adobe left out of the assembler for coldfusion.  Bummer that the java implementation of LCDS work so much better then any coldfusion one can.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680346">14</a> by Ben Davies
		posted on 5/2/2008 at 11:07 AM
		</div>
		<div class="comment_text"><p>I'm not sure I agree this - at least as general guideline. There are limitations with the query caching performed by ColdFusion on your behalf but at least it has a certain amount of consistency and reliability.</p><p>If you are to roll your own caching you are taking on a lot of responsibility on yourself to ensure you</p><p>a) have transparency into what is being cached (server-wide)</p><p>b) don't over-cache: Set a limit on the total number of cached queries. Ideally I think that limit would be based on the size of the queries, and not on the number of queries as used by CF caching.</p><p>c) intelligently age-out queries from the cache as you reach that limit or the maximum timespan. Not only do you want to select the best candidate to age out, you also want  to pro-actively age items out between requests</p><p>d) have a *big* concern for the server memory. Test with your biggest possible datasets and multiple concurrent requests.</p><p>Caching is one of those areas that can look a lot different in production than it does in development, depending on the quality of your testing. It is especially easy to get a false sense of security from load-testing unless you insert a degree of randomness into your tests.</p><p>I wonder if anyone knows of any third-party components that take care of this?</p><p>The whole topic is probably worthy of a dedicated long-ish blog post.</p><p>I hope the above makes sense.</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680343">15</a> by Raymond Camden
		posted on 5/2/2008 at 3:39 PM
		</div>
		<div class="comment_text"><p>@Ben. Some very good points there. I -do- write my own caching all the time but I do not take that much care in making sure it plays well with others. Even on a box where your coe is the only code, it does make sense to at least plan out what your caching strategy will be across the server.</p><p>One nice thing is that the Server MOnitor in CF8 (and tools like SeeFusion and FusionReactor) can help you monitor the impact of your caching.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680344">16</a> by Ben Davies
		posted on 5/8/2008 at 12:29 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks for the reply. I guess my comments were from bitter experience dealing with huge datasets and heavily taxed servers :) ... and dealing with a mix of legacy service components with no caching, cf caching, roll-your-own query caching and full dataset/QoQ caching. Understanding what is going on in those situations is pretty hard.</p><p>If you haven't noticed my comments are always about 6 days behind the reply or blog post - I don't know how everyone else keeps up but I struggle.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680345">17</a> by JC
		posted on 4/7/2010 at 12:20 AM
		</div>
		<div class="comment_text"><p>ooh, nice. Can you believe they *still* haven't updated the CF8 docs?</p><p>I have a stored proc that runs inside application.cfm that simply checks to see if the site is in online or offline mode (so we can take it down for maintenance) and redirects users to an offline message if we've taken it down for some reason. Setting it to cachedwithin 30 seconds should give effectively the same functionality but be a huge reduction in the number of DB calls and a slight improvement in performance.</p><p>Thanks for posting this. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680347">18</a> by Raymond Camden
		posted on 4/7/2010 at 12:24 AM
		</div>
		<div class="comment_text"><p>@JC: The docs now allow for comments. Is it still wrong in CF9? If so, add a comment.</p></div>
	</div>
</div>
		