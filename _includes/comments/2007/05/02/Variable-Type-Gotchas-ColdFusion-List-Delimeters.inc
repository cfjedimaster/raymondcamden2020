
<div class="comment" id="c_1713664618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664618">1</a> by Felix Tjandrawibawa
		posted on 5/2/2007 at 5:08 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I've come across a situation where I need to do some string splitting myself. And I found that there's a split function built in Coldfusion (I'm using CF7). <br>So for splitting the monkeys string, I would just use:<br>&amp;lt; cfset aMonkeys = myString.split("__+__") &amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664619">2</a> by Phillip Senn
		posted on 5/2/2007 at 5:14 PM
		</div>
		<div class="comment_text"><p>&lt;cfset Counter = 0&gt;<br>&lt;cfoutput&gt;<br>&lt;cfloop list="A,,C,D" index="I"&gt;<br>	&lt;cfset Counter = Counter + 1&gt;<br>	#Counter#: #I#&lt;br /&gt;<br>&lt;/cfloop&gt;<br>&lt;/cfoutput&gt;</p><p>One might think Counter would be 4, but it only counts up to 3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664620">3</a> by Raymond Camden
		posted on 5/2/2007 at 5:20 PM
		</div>
		<div class="comment_text"><p>Geeze Phil, that was going to be my next post. ;) (I'll still post though.)</p><p>Felix - it isn't built into CF, but a part of Java. I showed the UDF so folks could see a CF solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664621">4</a> by Seb Duggan
		posted on 5/2/2007 at 5:22 PM
		</div>
		<div class="comment_text"><p>Felix - bear in mind that this uses Java's underlying split() method, and that the parameter it takes is a regular expression.</p><p>So, if you wanted to split a string using "*+*" as the delimiter, you'd need to escape the regex special characters, e.g. str.split("/*/+/*").</p><p>Useful tip, though. I tend to forget about all the Java string methods you can call on...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664622">5</a> by Seb Duggan
		posted on 5/2/2007 at 5:23 PM
		</div>
		<div class="comment_text"><p>Of course, that should be:</p><p>str.split("\*\+\*")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664624">6</a> by Felix Tjandrawibawa
		posted on 5/2/2007 at 5:44 PM
		</div>
		<div class="comment_text"><p>Oops, didn't realised that split() is actually Java's split().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664623">7</a> by Tom Mollerus
		posted on 5/2/2007 at 6:35 PM
		</div>
		<div class="comment_text"><p>Could someone please expand on the split() method of strings? Do you have to create the string in Java code to have the split method available? What other Java methods are available to strings in CF?</p><p>If the split() method is part of any string created in CF, and if the split method is available on any CF installation regardless of the Java installation, then'd I'd suggest that it be considered a "part" of Coldfusion as much as any other function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664626">8</a> by Seb Duggan
		posted on 5/2/2007 at 7:03 PM
		</div>
		<div class="comment_text"><p>Tom,</p><p>You don't need to create the code in Java. The following code:</p><p>&lt;cfset strFruit = "apples--*--oranges--*--pears--*--bananas" /&gt;<br>&lt;cfset arrFruit = strFruit.split("--\*--") /&gt;</p><p>Would create an array of 4 fruits. Notice the escaped asterisk in the split parameter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664625">9</a> by Tom Mollerus
		posted on 5/2/2007 at 7:14 PM
		</div>
		<div class="comment_text"><p>@Seb: I went to the bother (jk) of actually trying this out myself. You're right, it does work! So whether or not we label these methods as part of Java or part of ColdFusion doesn't matter so much. When can we use these methods and when can't we? Does it depend on the application server that CF is using (JRun, WebSphere, BEA, etc.) or does it depend on the JRE installed? Or are they always available?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664627">10</a> by Seb Duggan
		posted on 5/2/2007 at 7:20 PM
		</div>
		<div class="comment_text"><p>I don't think there's a restriction on when you can use them. And I think all versions of CFMX run on Java, whatever platform they're on, so they should all have access to the Java methods...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664628">11</a> by Tom Mollerus
		posted on 5/2/2007 at 7:21 PM
		</div>
		<div class="comment_text"><p>Ben Nadel has a posting (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F492-Caution-Java-String-Split-Does-Not-Create-A-ColdFusion-Array.htm%29%3Ahc6ezUhGOuQh2nEYGSridGkSnbA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/492-Caution-Java-String-Split-Does-Not-Create-A-ColdFusion-Array.htm)">http://www.bennadel.com/blo...</a> with a link to more information about using Java string methods in CF, as well as an argument that they're not quite as useful as CF methods (arrays created with the split() method are read-only).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664629">12</a> by charlie griefer
		posted on 5/2/2007 at 7:21 PM
		</div>
		<div class="comment_text"><p>there's a gotcha on using split() that was recently brought to my attention.  doesn't work on empty values at the end of a list.</p><p>see comment at <a href="http://disq.us/url?url=http%3A%2F%2Fcfblog.com%2Fcgriefer%2Findex.cfm%2Fid%2Fmake_like_a_banana_and_split%3A9awOPzrpF5t0bwWYE0Tuwa77qXo&amp;cuid=3321886" rel="nofollow noopener" title="http://cfblog.com/cgriefer/index.cfm/id/make_like_a_banana_and_split">http://cfblog.com/cgriefer/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664631">13</a> by David Harris
		posted on 5/3/2007 at 1:56 AM
		</div>
		<div class="comment_text"><p>Another idea I've seen when working with list...<br>...use a char that cannot be typed in when building your lists...<br>eg #chr(7)# (the "beep")</p><p>So you would have this:</p><p>cfset monkeys = "King Kong#chr(7)#George, Bush#chr(7)#Clinton, Hillary#chr(7)#Super_Monkey"</p><p>cfloop index="item" list="#monkeys#" delimiters="#chr(7)#"</p><p>I would suspect it is very VERY unlikely someone will put a chr(7) in there data! :-)</p></div>
	</div>
</div>
		