
<div class="comment" id="c_1713736050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736050">1</a> by Jim Papaleo
		posted on 10/24/2011 at 10:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Is the Admin api available to those of us that are running CF Standard?  We don't have the monitor function enabled.</p><p>Jim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736067">2</a> by Raymond Camden
		posted on 10/24/2011 at 10:52 PM
		</div>
		<div class="comment_text"><p>The Admin API is available: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fproducts%2Fcoldfusion-family%2Fbuying-guide.html%3AGtZnPgaAfGx7CRUeTkKjLvQXXaY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/products/coldfusion-family/buying-guide.html">http://www.adobe.com/produc...</a></p><p>Not sure if this particular CFC is restricted though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736066">3</a> by Raymond Camden
		posted on 10/24/2011 at 10:53 PM
		</div>
		<div class="comment_text"><p>Ah shoot - going down more the grid I see server monitoring API is _not_ available.</p><p>Well, in the forum posting Ryan made, I definitely +1 his idea to add this to the CF Admin itself. I think it should be in all versions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736062">4</a> by Adam Cameron
		posted on 10/25/2011 at 2:19 AM
		</div>
		<div class="comment_text"><p>G'day Ray:<br>This gives the number of milliseconds since the JVM was started, which I should think would be close enough to the CF uptime too:</p><p>createObject("java", "java.lang.management.ManagementFactory").getRuntimeMXBean().getUptime()</p><p>(I just googled "JVM uptime" and that was the first match).</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736061">5</a> by Raymond Camden
		posted on 10/25/2011 at 6:03 AM
		</div>
		<div class="comment_text"><p>Seems like a reasonable assumption - thanks Adam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736070">6</a> by Peter Tilbrook
		posted on 10/25/2011 at 11:29 AM
		</div>
		<div class="comment_text"><p>Wow! I did not realise you could customise the CFAdmin so easily - and this "addition" was easily added and quite handy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736065">7</a> by Raymond Camden
		posted on 10/25/2011 at 5:19 PM
		</div>
		<div class="comment_text"><p>Glad you liked it. Check out the guide I wrote for it:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fpage.cfm%2FGuide-to-ColdFusion-Administrator-Extensions%3AlUr1COruMlWiA_HUTOIUBSgBHTo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/page.cfm/Guide-to-ColdFusion-Administrator-Extensions">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736068">8</a> by RobW
		posted on 10/25/2011 at 9:38 PM
		</div>
		<div class="comment_text"><p>Couple of typos in line 20. Missing left paren before DateCompare, and you have DateComparee with an extra e at the end.</p><p>Very nice addition to my Administrator though. Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736077">9</a> by Raymond Camden
		posted on 10/25/2011 at 10:16 PM
		</div>
		<div class="comment_text"><p>That's ColdFish, the code highlighting, screwing up. Try "View Plain." I need to update my copy of ColdFish some day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736078">10</a> by Charlie Arehart
		posted on 10/26/2011 at 11:57 AM
		</div>
		<div class="comment_text"><p>To those on CF Standard who can't call this Admin API servermonitoring.cfc, note that there are other ways to get the server up time. Adam mentioned above an available jvm method.</p><p>There is also a surprising way to get it, using (believe it or not), the built-in variable server.coldfusion.expiration. I explain more (and how to make the result appear better-formatted) in a blog entry:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.carehart.org%2Fblog%2Fclient%2Findex.cfm%2F2006%2F8%2F13%2Fcfserver_uptime%3ACpo5V-5747IETCuLGMhSZYnVSXA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.carehart.org/blog/client/index.cfm/2006/8/13/cfserver_uptime">http://www.carehart.org/blo...</a></p><p>Ray, if you concur that it works, it may be helpful to point it out to people in the post, as an option for those on Std, since some may not bother to read the comments. Your call, of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736069">11</a> by Raymond Camden
		posted on 10/26/2011 at 4:57 PM
		</div>
		<div class="comment_text"><p>Interesting post there - but I always feel weary about things that work like that - ie, not documented. Especially when it's advertised as being something else entirely. Then again, if your 'server uptime' code stopped working one day, it wouldn't be the end of the world.</p><p>Um - not a big believer in adding 'read the comments!' to blog entries. I expect my readers to be intelligent enough to know that. ;) (Although I do do it sometimes.)</p></div>
	</div>
</div>
		