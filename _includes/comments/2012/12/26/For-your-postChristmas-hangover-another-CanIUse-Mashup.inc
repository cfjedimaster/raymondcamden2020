
<div class="comment" id="c_1713744181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744181">1</a> by Jeff Coughlin
		posted on 12/26/2012 at 9:19 PM
		</div>
		<div class="comment_text"><p>Really cool feature Ray.  Better than having to sit there with a notepad and have to write all the features down one by one and cross reference manually.</p><p>---<br>OT: Unfortunately I'm not a big fan of <a href="http://disq.us/url?url=http%3A%2F%2Fcaniuse.com%3ALgaGQXGS3y6Ft8p-Gu6GiHj1dvk&amp;cuid=3321886" rel="nofollow noopener" title="caniuse.com">caniuse.com</a> since I often find their data lacking on browsers older than a couple years old (I sometimes have clients that have older browsers with no option to upgrade any time soon).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744193">2</a> by Raymond Camden
		posted on 12/26/2012 at 9:26 PM
		</div>
		<div class="comment_text"><p>Have you tried the settings? I didn't even realize they _had_ settings until recently. It lets you tweak how far back to look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744200">3</a> by Jeff Coughlin
		posted on 12/26/2012 at 9:39 PM
		</div>
		<div class="comment_text"><p>I did not.  Really cool.</p><p>I still see the data is wrong though on pages like @font-face where it says FF started supporting it in 3.5.  But At least they list their sources.  Wikipedia also has it incorrectly marked as 3.5 - where they likely got their information.</p><p>I've used font-face for many years now.  Funnily enough IE practically invented it when they supported it in IE4 - years before other browsers considered it (granted, it was actually a CSS2 spec first, but it was a rare moment in IE history when they supported a CSS2 spec before anyone else). And FF of all browsers was actually the "last" browser to support @font-face starting in 3.6. Yeah, I know... useless knowledge :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744198">4</a> by Raymond Camden
		posted on 12/26/2012 at 9:41 PM
		</div>
		<div class="comment_text"><p>BTW, try "test4.html" (same dir) - supports bookmarking. (Waiting for someone to confirm it really works before I edit the post to mention it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744194">5</a> by Jeff Coughlin
		posted on 12/26/2012 at 9:49 PM
		</div>
		<div class="comment_text"><p>Works for me (good idea).</p><p>btw, those settings on their site are really cool.  I keep playing with them now.  Thanks for that tip :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744201">6</a> by Randy Edmunds
		posted on 12/27/2012 at 5:56 AM
		</div>
		<div class="comment_text"><p>Very cool!</p><p>How about a feature that scans my HTML/JS/CSS to determine which of those features I'm using? :) Who can remember all those details?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744183">7</a> by Raymond Camden
		posted on 12/27/2012 at 10:33 PM
		</div>
		<div class="comment_text"><p>Heh, I kinda thought about that. In theory I think you could do _some_ of this, like for example, it would be trivial to look for the canvas tag. In theory you could look for certain CSS keywords too. But it just feels like something that would be incomplete and 'fuzzy' to the point of not using. (imo ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744184">8</a> by Randy Edmunds
		posted on 12/30/2012 at 7:23 AM
		</div>
		<div class="comment_text"><p>Yes, it's definitely too much for 1 person to take on, but maybe it could be crowd-sourced!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744182">9</a> by Raymond Camden
		posted on 12/31/2012 at 11:37 PM
		</div>
		<div class="comment_text"><p>Hmm. In theory, you write a list of strings and the minimum level browser required browser. So something like this (and these aren't real #s)</p><p>canvas={ie:8, firefox:5}</p><p>and a list of CSS things</p><p>transform={ie:10, etc}</p><p>Based on this, you scan for each keyword, and as you find matches, begin generating a minimum browser version required. So using the above examples, if I had both a canvas tag and a trasform item, the minimum version of IE would be 10.</p><p>In theory - you write the code and then the 'slow' part is the data file, which others could help with.</p><p>Hmm.... I'm tempted to start a Brackets extension for this. It could even provide a report of why IE10 was required. ("Oh, I use a CSS transform - if I remove that I get more coverage...")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744186">10</a> by Pete
		posted on 1/3/2013 at 8:57 PM
		</div>
		<div class="comment_text"><p>Either I've missed the point of this, or it's not working quite right.</p><p>If I pick "Canvas", the minimum is IE9.<br>If I add JSON parsing, it drops to IE8.</p><p>But if I use IE8, canvas wont work!</p><p>That's not right is it? I'm using Chrome 23</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744187">11</a> by Raymond Camden
		posted on 1/3/2013 at 9:12 PM
		</div>
		<div class="comment_text"><p>Damn - you found a bug alright. I'll try to fix it asap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744190">12</a> by Raymond Camden
		posted on 1/3/2013 at 9:24 PM
		</div>
		<div class="comment_text"><p>Ok, I think I got it now. I've updated the demo link to use the nicer test4.html version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744195">13</a> by Pete
		posted on 1/3/2013 at 10:46 PM
		</div>
		<div class="comment_text"><p>Getting the same again, with CSS Gradients needing 10, then add Canvas and it drops to 9, Using an iPad 2.</p><p>Sorry, it's a great tool though! Do you think you'll keep adding to it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744196">14</a> by Raymond Camden
		posted on 1/3/2013 at 10:57 PM
		</div>
		<div class="comment_text"><p>To be clear, are you hitting test4.html?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744197">15</a> by Pete
		posted on 1/3/2013 at 11:02 PM
		</div>
		<div class="comment_text"><p>Yes, sorry, I'm not trying to be awkward. It's a cool tool, happy to help if the code's on Github?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fskeater.co.uk%2Fsamples%2Fmashup.png%3ALfiaN4VmxlfchCR662r7siEF55M&amp;cuid=3321886" rel="nofollow noopener" title="http://skeater.co.uk/samples/mashup.png">http://skeater.co.uk/sample...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744199">16</a> by Raymond Camden
		posted on 1/3/2013 at 11:51 PM
		</div>
		<div class="comment_text"><p>Ugh, this is so frustrating. This *should* be simple math. I'll check it again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744205">17</a> by Raymond Camden
		posted on 1/3/2013 at 11:59 PM
		</div>
		<div class="comment_text"><p>oh man - got it (not uploaded) - something small and stupid - will post after my meeting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744204">18</a> by Raymond Camden
		posted on 1/4/2013 at 1:21 AM
		</div>
		<div class="comment_text"><p>So it should be fixed now. Issue was a stupid string to # comparison issue. I wrapped the data with Number() and it worked. This has bitten me a few times lately - I need to blog it.</p></div>
	</div>
</div>
		