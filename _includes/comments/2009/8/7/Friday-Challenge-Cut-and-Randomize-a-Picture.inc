
<div class="comment" id="c_1713717571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717571">1</a> by todd sharp
		posted on 8/7/2009 at 5:12 PM
		</div>
		<div class="comment_text"><p>I'll give 10000 bonus points to whoever uses an Ajax library to make each square draggable so you can 'solve' the puzzle after it's jumbled....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717568">2</a> by Mike Hodgson
		posted on 8/7/2009 at 5:54 PM
		</div>
		<div class="comment_text"><p>Here's my first attempt!</p><p>http://209.200.68.149/imagetest.cfm</p><p>Yes, I'm using the free CF9 hosting graciously provided by CrystalTech :)</p><p>Will link to the code from the same page, once I get it cleaned up a bit :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717566">3</a> by Kumar
		posted on 8/7/2009 at 6:12 PM
		</div>
		<div class="comment_text"><p>Demo:<br>http://209.200.68.148/image.cfm</p><p>Code:<br>&lt;cfimage name="imgGlobe" source="globe.jpg"&gt;</p><p>&lt;cfimage source="#imgGlobe#" action="writeToBrowser" &gt;<br>&lt;!--- Destination Image ---&gt;<br>&lt;cfset imgC = ImageNew("",400,400,"argb")&gt;</p><p>&lt;cfset imgA = imgGlobe&gt;<br>&lt;!--- Loops will create our 100 squares ---&gt;<br>&lt;cfloop from="0" to="360" step="40" index="x"&gt;</p><p>	&lt;cfloop from="0" to="360" step="40" index="y"&gt;<br>		&lt;cfset imgA = imgGlobe&gt;<br>		&lt;!--- Get the Image Area square ---&gt;<br>		&lt;cfset imgB = ImageCopy(imgA,x,y,40,40,x,y)&gt;<br>		&lt;!--- Paste the image to our destination ---&gt;<br>		&lt;cfset ImagePaste(imgC,imgB,y,x)&gt;<br>	&lt;/cfloop&gt;</p><p>&lt;/cfloop&gt;</p><p>&lt;cfimage source="#imgC#" action="writeToBrowser"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717564">4</a> by Raymond Camden
		posted on 8/7/2009 at 6:24 PM
		</div>
		<div class="comment_text"><p>Wow, both of you, cool!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717565">5</a> by todd sharp
		posted on 8/7/2009 at 6:27 PM
		</div>
		<div class="comment_text"><p>I give Mike +200 points for creative use of 'Shuffle'.  But seriously, nice work guys!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717572">6</a> by Kumar
		posted on 8/7/2009 at 6:48 PM
		</div>
		<div class="comment_text"><p>Agreed, Mike's solution is better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717574">7</a> by Steve Caldwell
		posted on 8/7/2009 at 6:56 PM
		</div>
		<div class="comment_text"><p>Todd, can I get 1000 points for being a Google ninja? :p</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fresources%2Fdemo%2Fjquery_puzzle%2F%3AB68-zin9phBHTXJ_7HXM4wPp-8w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/resources/demo/jquery_puzzle/">http://www.bennadel.com/res...</a></p><p>I created one with my own image, just don't have public facing CF space.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717576">8</a> by todd sharp
		posted on 8/7/2009 at 7:09 PM
		</div>
		<div class="comment_text"><p>@Steve - yep, i'll grant you the 1000 points for that - nice find.  And 5000 to Nadel for putting that together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717579">9</a> by Rob O&amp;aposBrien
		posted on 8/7/2009 at 8:17 PM
		</div>
		<div class="comment_text"><p>Mike wins instantly for the use of a Hasselhoff cover! <a href="http://disq.us/url?url=http%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3Dx20v9F-sWHQ%3ALy-eepWNJd1XtLlnUKA7WY_S71s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.youtube.com/watch?v=x20v9F-sWHQ">http://www.youtube.com/watc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717581">10</a> by Matthew Abbott
		posted on 8/7/2009 at 8:41 PM
		</div>
		<div class="comment_text"><p>I took Mike's code and attempted to add some jquery  to sort the pics.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fmaimage%2F%3AG7S_Pxj1dL0Atbr7bCW4vEGJgqc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/maimage/">http://www.coldfusionjedi.c...</a><br>Thanks Ray for graciously hosting this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717578">11</a> by todd sharp
		posted on 8/7/2009 at 8:44 PM
		</div>
		<div class="comment_text"><p>@Matthew - that's awesome!!  Hard as heck too!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717584">12</a> by todd sharp
		posted on 8/7/2009 at 8:46 PM
		</div>
		<div class="comment_text"><p>@Matthew - it would be *really* cool if i could ctrl+click several tiles and move them all at once...  doable?</p><p>I'd also love to see a blog post written up on how you did it (I know I can view the source, but I'd still like to see a write up).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717582">13</a> by todd sharp
		posted on 8/7/2009 at 8:47 PM
		</div>
		<div class="comment_text"><p>Wait a second...</p><p>$("#sortable").sortable();</p><p>That's it?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717560">14</a> by Raymond Camden
		posted on 8/7/2009 at 8:50 PM
		</div>
		<div class="comment_text"><p>re: todd and sortable:</p><p>yes, the jquery ui library kicks ass.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717559">15</a> by Matthew Abbott
		posted on 8/7/2009 at 9:10 PM
		</div>
		<div class="comment_text"><p>@todd Im probably the ONLY guy that doesnt have their own blog!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717561">16</a> by Cody
		posted on 8/7/2009 at 9:35 PM
		</div>
		<div class="comment_text"><p>Is it required to use ColdFusion?</p><p>I tried it with HTML 5 and JavaScript/jQuery.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.codymarquart.com%2Fprojects%2Fimage100%2F%3AYUIThztammg-zKZXcyNBCG3VGpY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.codymarquart.com/projects/image100/">http://www.codymarquart.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717562">17</a> by Raymond Camden
		posted on 8/7/2009 at 9:37 PM
		</div>
		<div class="comment_text"><p>Normally it is required, but you get a pass since it's jQuery. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717570">18</a> by todd sharp
		posted on 8/7/2009 at 9:49 PM
		</div>
		<div class="comment_text"><p>Would you believe that your HTML5/jQuery version works properly on FireFox 1.5 (don't ask...)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717567">19</a> by Jason Walle
		posted on 8/7/2009 at 10:01 PM
		</div>
		<div class="comment_text"><p>I'm a first timer at the challenges...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcode.project924.com%2Fimg-functions%2Fcut-and-randomize.cfm%3A9HH7l7cgL6PCqw239oY8uGs2Ovk&amp;cuid=3321886" rel="nofollow noopener" title="http://code.project924.com/img-functions/cut-and-randomize.cfm">http://code.project924.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717563">20</a> by Leigh
		posted on 8/7/2009 at 10:27 PM
		</div>
		<div class="comment_text"><p>@Todd,</p><p>You have got to be joking .. a one liner? Damn. That _is_ awesome.   Hats off to @Mathew.</p><p>@Mike,</p><p>(Despite the Horrible Hasselhoff cover ;-) Great work!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717569">21</a> by Chris Ulrich
		posted on 8/8/2009 at 6:03 PM
		</div>
		<div class="comment_text"><p>Wow, you guys kicked butt on this one ... <br>Here's my attempt .. makes me feel old school !</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.drg1.com%2Fchallenge.cfm%3A-5W-Gl4HLne7XtfWDhAKN0Mog2k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.drg1.com/challenge.cfm">http://www.drg1.com/challen...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717573">22</a> by Raymond Camden
		posted on 8/8/2009 at 6:07 PM
		</div>
		<div class="comment_text"><p>I must say - I am incredibly impressed by the source pictures you guys used.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717583">23</a> by Bjarte
		posted on 8/13/2009 at 9:57 PM
		</div>
		<div class="comment_text"><p>Why not use html5 canvas? ( ok I know it said 100 squares but I did not bother editing the image in paint)<br><a href="http://disq.us/url?url=http%3A%2F%2Fbjarte.dev.inbusiness.no%2Fcanvas%2Findex.html%3Aehc1vFu8n8RejUgVT1VVBy5Rc6E&amp;cuid=3321886" rel="nofollow noopener" title="http://bjarte.dev.inbusiness.no/canvas/index.html">http://bjarte.dev.inbusines...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717585">24</a> by Raymond Camden
		posted on 8/13/2009 at 11:36 PM
		</div>
		<div class="comment_text"><p>Slick - of course, it's going to be a few years before we can use that. ;)</p></div>
	</div>
</div>
		