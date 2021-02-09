
<div class="comment" id="c_1713721771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721771">1</a> by Todd Sharp
		posted on 2/5/2010 at 9:00 AM
		</div>
		<div class="comment_text"><p>I just found this last week myself. FWIW I found that it would serve the map even without passing the API key in the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721772">2</a> by Leigh
		posted on 2/5/2010 at 9:00 AM
		</div>
		<div class="comment_text"><p>I agree on the 2 HTTP requests which we have to make, seems really redundant and slow things down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721769">3</a> by Scott P
		posted on 2/5/2010 at 9:10 AM
		</div>
		<div class="comment_text"><p>beats the hell out of my apple-shift-4 method</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721768">4</a> by PaulH
		posted on 2/5/2010 at 9:42 AM
		</div>
		<div class="comment_text"><p>yeah not being able to use the map image directly in creating a PDF is a pain. any idea who to blame?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721770">5</a> by Anooj
		posted on 2/5/2010 at 10:33 AM
		</div>
		<div class="comment_text"><p>I too read the same yesterday on Static Maps API from google. Decent idea, just to have the location shown in the map as image rather than loading the complete package of js . this is cool. Will try your UDF as well, thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721773">6</a> by Raymond Camden
		posted on 2/5/2010 at 5:56 PM
		</div>
		<div class="comment_text"><p>Paul - if I had to guess why it failed in cfdocument I'd say it was the user agent used to generate the HTML page by the Java package. I can't remember the package offhand (Jason Delmore talked about it recently, it is way old), but if it uses a specific User Agent, Google may blog it. Of course, using imageNew(url) works, so Google isn't blocking the ColdFusion user agent.</p><p>Actually - I wonder what the UA is for image requests. I know for CFHTTP it defaults to "ColdFusion something", but it may not for imageNew(). I'll test that today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721774">7</a> by PaulH
		posted on 2/5/2010 at 7:54 PM
		</div>
		<div class="comment_text"><p>ray, a plain cfhttp call works fine just silently fails if within a cfdocument block. i tried (if i remember correctly) various agents, cfsavecontent, etc. only writing out the image worked, which is a pretty messy way to handle this (for a reporting functionality).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721777">8</a> by Raymond Camden
		posted on 2/5/2010 at 7:58 PM
		</div>
		<div class="comment_text"><p>Weird. I mean, you can use external URLs in cfdocument, so it should work.</p><p>As an FYI, I tested logging the user agent for imageNew(url), and it is Java/1.6.0_17. Obviously that would be different for your own JDK.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721776">9</a> by Ben Nadel
		posted on 2/6/2010 at 2:20 AM
		</div>
		<div class="comment_text"><p>Very cool! I didn't know about this at all. Great find.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721779">10</a> by Geoff Bowers
		posted on 2/8/2010 at 3:33 AM
		</div>
		<div class="comment_text"><p>Static Maps are also targeted at the mobile device market where JS in the browser is not always available.  Google did a great presentation at webdu 2009: Fast Maps with the Google Static Maps API</p><p>Podcast: <a href="http://disq.us/url?url=http%3A%2F%2Fwebdu.com.au%2Fsession%2Ffeeditunes%3ASmjtesiw8PO192_mpw_rLyfGnJc&amp;cuid=3321886" rel="nofollow noopener" title="http://webdu.com.au/session/feeditunes">http://webdu.com.au/session...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721775">11</a> by Bill Downs
		posted on 2/9/2010 at 3:35 AM
		</div>
		<div class="comment_text"><p>I've been using Google static maps for awhile now to make a printable PDF that serves as a mini brochure. I pull the map image in from google and generate a pdf. Seems to work fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3335184371">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_3yJVd8WK99.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3335184371">12</a> by David Whitehead
		posted on 6/1/2017 at 2:21 PM
		</div>
		<div class="comment_text"><p>Unfortunately this code no longer seems to work. Returns an error:</p><p>An exception occurred while trying to read the image.<br>javax.imageio.IIOException: Can't get input stream from URL!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3335194748">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3335194748">13</a> (In reply to <a href="#c_3335184371">#12</a>) by Raymond Camden
		posted on 6/1/2017 at 2:26 PM
		</div>
		<div class="comment_text"><p>Well, the post is 7 years old. ;) The Static Map API definitely still works, so the ColdFusion code must be the issue. Probably a change to cfdocument. I don't work with CF much anymore so I can't really help.</p></div>
	</div>
</div>
		