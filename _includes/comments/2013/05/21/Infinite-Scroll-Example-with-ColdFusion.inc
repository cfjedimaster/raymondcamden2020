
<div class="comment" id="c_1713746801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746801">1</a> by Pete
		posted on 5/22/2013 at 11:26 AM
		</div>
		<div class="comment_text"><p>How would you implement remembering the scroll position?</p><p>When the page loaded would you generate all the content from top down to where you left, or just load the position +/- a certain amount and implement the same sort of JavaScript to load results as you scroll back up?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746799">2</a> by Raymond Camden
		posted on 5/22/2013 at 4:03 PM
		</div>
		<div class="comment_text"><p>That I don't have a good answer for. I mean obviously you can easily remember scroll position with sessionStorage. You could also update the URL with hashmarks (#page2). On return though - I'm not sure what is best. Just show pageN? Or get page 1- N, which may be slow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746798">3</a> by Pete
		posted on 5/22/2013 at 6:54 PM
		</div>
		<div class="comment_text"><p>A user would probably expect to see the page how they left it, so 1-N. But they may never scroll back up to the top again so it might be a waste of bandwidth/time.</p><p>There's also the problem of working out if they clicked back, or if they left the site, closed the browser, then came back later.</p><p>I guess this all just supports the infinite scrolling is bad argument - I do prefer paging.</p><p>You could use the same concept in a scrolling HTML5 game though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746800">4</a> by Raymond Camden
		posted on 5/22/2013 at 6:58 PM
		</div>
		<div class="comment_text"><p>I think if they closed the browser and came back the expectation would be that they only saw p1 (again, assuming p1 == latest news/blog entries).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746806">5</a> by Jaana Credit
		posted on 5/22/2013 at 7:35 PM
		</div>
		<div class="comment_text"><p>Good example!</p><p>Facebook doesn't remember where your last scroll was, it will always serve you the start of the wall. I don't think I've ever seen a site with infinite scroll functionality remembering the latest scroll position.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746805">6</a> by Jaana Gilbert
		posted on 5/22/2013 at 7:36 PM
		</div>
		<div class="comment_text"><p>Oops, where did that name come from in my post?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746802">7</a> by Raymond Camden
		posted on 5/22/2013 at 7:41 PM
		</div>
		<div class="comment_text"><p>Here is a damn good article on Infinite Scroll:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fuxdesign.smashingmagazine.com%2F2013%2F05%2F03%2Finfinite-scrolling-get-bottom%2F%3AbbHTRT305Pf53utLRiBXWf2rcGk&amp;cuid=3321886" rel="nofollow noopener" title="http://uxdesign.smashingmagazine.com/2013/05/03/infinite-scrolling-get-bottom/">http://uxdesign.smashingmag...</a></p><p>I think this quote sums up my issues: "reaching an end point provides a sense of control"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746803">8</a> by Richard Hughes
		posted on 5/22/2013 at 10:16 PM
		</div>
		<div class="comment_text"><p>Very cool! 9-5 I am doing CF8, so I spun up Railo to run the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746804">9</a> by larry c. lyons
		posted on 5/23/2013 at 7:13 PM
		</div>
		<div class="comment_text"><p>Ray thanks for the link to the Smashing Magazine article it discussed everything that made me hesitant about using an infinite scroll. If you deal with large amounts of data its very easy for the user to get lost etc.</p><p>On one project I just finished we developed an infinite scroller for displaying tabular data. That was some fairly ugly code as it allowed the user to sort columns as well as doing the scrolling and fetching new data.  It works but really was a lot of custom code.</p><p>then I find this:  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.datatables.net%2Frelease-datatables%2Fexamples%2Fbasic_init%2Fscroll_y_infinite.html%3A73AIesmDBug-MEnpG1Q2PHGH3BM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.datatables.net/release-datatables/examples/basic_init/scroll_y_infinite.html">http://www.datatables.net/r...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746807">10</a> by Dave Andrew
		posted on 7/3/2013 at 6:18 PM
		</div>
		<div class="comment_text"><p>Great info Raymond.  It gives me a great starting point as I start to play with data retrieval and crud operations in tables.</p><p>Thanks also to larry c. lyons above.  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.datatables.net%2F%3AvXXBQvwPcrl_5vV7YzgPXDcR8FU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.datatables.net/">http://www.datatables.net/</a> is pretty sweet!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746808">11</a> by Brad
		posted on 7/18/2013 at 7:37 PM
		</div>
		<div class="comment_text"><p>Just wanted drop a line and say thanks for this great write up. This really help me out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746812">12</a> by Raymond Camden
		posted on 7/18/2013 at 7:59 PM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746811">13</a> by saber
		posted on 5/6/2014 at 4:13 PM
		</div>
		<div class="comment_text"><p>very good.<br>Thank = ?????</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746815">14</a> by Angel Gonzalez
		posted on 5/29/2014 at 7:43 PM
		</div>
		<div class="comment_text"><p>Is there a way to hide / encrypt  the get function?</p><p>$.get("service.cfc?method=getData", {start:position}, function(res, code) {</p><p>so as to protect / hide the source files you are using and methods?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746814">15</a> by Raymond Camden
		posted on 5/29/2014 at 7:45 PM
		</div>
		<div class="comment_text"><p>No. Anyone can open up dev tools and see the request. There should be no need to do this though honestly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746813">16</a> by Angel Gonzalez
		posted on 5/29/2014 at 7:56 PM
		</div>
		<div class="comment_text"><p>Thanks Ray - I used your base code above to get started.  I still had to do some serious legwork - but I will most likely be adding a blog page to my site with some sample code in the future.</p><p>Always a fan of your work...</p><p>- Angel</p></div>
	</div>
</div>
		