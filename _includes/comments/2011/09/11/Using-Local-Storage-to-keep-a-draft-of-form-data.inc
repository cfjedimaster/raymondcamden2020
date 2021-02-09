
<div class="comment" id="c_1713735068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735068">1</a> by Patrick Heppler
		posted on 9/12/2011 at 2:48 PM
		</div>
		<div class="comment_text"><p>Nice tutorial!</p><p>"Canvas is the hot cheerleader in high school. It's getting a lot of attention now but in five years it's going to be pregnant with it's 3rd child and working at Walmart.)"</p><p>YMMD! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735069">2</a> by Josh Curtiss
		posted on 9/12/2011 at 7:59 PM
		</div>
		<div class="comment_text"><p>Rock on. I like a lot. This is really easy to implement. The only additional thing I would probably implement in production is to actually check with the user if they want to use the saved info. Which is also extremely easy to add in there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735071">3</a> by Raymond Camden
		posted on 9/12/2011 at 8:01 PM
		</div>
		<div class="comment_text"><p>Good point. My first inclination would be to use a jQuery UI dialog, but really, the simple, and super old, confirm() prompt would probably work best.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735079">
	<div>
		<img src="https://disqus.com/api/users/avatars/kelson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735079">4</a> by Kelson
		posted on 9/12/2011 at 10:53 PM
		</div>
		<div class="comment_text"><p>Cool idea! Something I'd like to add, though: in an actual blog or CMS, there's good chance that users will be editing more than one page at the same time, so the naming scheme should probably take that into account. Otherwise they can get into edit wars with themselves.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735074">5</a> by Raymond Camden
		posted on 9/12/2011 at 10:59 PM
		</div>
		<div class="comment_text"><p>Good point. I'd probably make a simple utility called getPrefix() for the page that handled that and returned a root key. You would then just do:</p><p>localStorage[getPrefix() + "title"] = ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735076">6</a> by Brian
		posted on 9/14/2011 at 12:45 AM
		</div>
		<div class="comment_text"><p>Tried this in Firefox in private browsing mode.  Interesting that the DOM will indicate that the private storage function exists, so your saveall function runs,  _but_  the data doesn't survive a browser refresh or restart.  Probably not a big deal, but just something to tuck back in a brain space somewhere so if someone were to report it didn't work...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735072">7</a> by Raymond Camden
		posted on 9/14/2011 at 1:24 AM
		</div>
		<div class="comment_text"><p>I'd consider that a bug. At minimum it should have thrown an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735077">8</a> by Raymond Camden
		posted on 9/14/2011 at 1:24 AM
		</div>
		<div class="comment_text"><p>Oh - and that goes right to one of my biggest pet peeves about browsers not being more verbose. For the general public  it is fine, but for us web developers, Firefox really should have said _something_ when it ignored the call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735075">9</a> by Brian
		posted on 9/14/2011 at 7:11 PM
		</div>
		<div class="comment_text"><p>"...browsers not being more verbose..." - Could not agree more.</p><p>In a perfect world, it should have responded back (in private browsing mode) with a better status -- like "don't depend on me cause I'm going to puke all this data as soon as you're not looking" ... or maybe "2".  [shrug]</p><p>Granted, the storage exists for the session, and that's moderately useful.</p><p>Still I wonder if there's a potential check that could be made to see if data WOULD survive -- I can sort of feel around what it would be like -- maybe like "&amp;&amp; if (canPersistData)", which would be useful for cookie handling as well -- would be good to know that "O, BTW, those cookies you just set and are sort of depending on?  Yea, not so much".</p><p>Maybe the 5 spec has something...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735078">10</a> by Raymond Camden
		posted on 9/14/2011 at 7:14 PM
		</div>
		<div class="comment_text"><p>Dumb question - and I can test this too, but if you set localStorage["test"] = 2, and then check the value, is it null or 2? If null, then you can make that a simple test function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735080">11</a> by Brian
		posted on 9/14/2011 at 7:37 PM
		</div>
		<div class="comment_text"><p>The answer is, of course, it depends.</p><p>(LDS = local dfata sorage, PBM=Private Browsing Mode)</p><p>I just sped-read the specs, and rationale behind PBM and LDS</p><p>One doc from WHATWG talked to implementation of this and the different philosophies  to take.  Some said, when entering PBM to take a copy of existing data with it, but not save changes at session end.  Some said set quota for LDS to 0, which would effectively not allow any storage, and some said establish new pool for LDS, but dump at end.</p><p>Each browser vendor that implemented preferred a differing approach (figures).  Therefore, some might return 2, and some might return null.</p><p>That kinda sucks.  But I think returning null would be a bad thing because:</p><p>1)  "they" from a security aspect saw a vulnerability in identifying that the browser was in PBM -- idea being that client ins in PBM for a reason, and the website should never know because it might try to work around that to attack from a different vector.  I understand and appreciate that point of view.</p><p>2)  LDS is alterable by the user -- apparently the Chrome version of Angry Birds was hacked that way -- the award of stars was changed by modifying the LDS to provide moar stars.  Makes sense -- even cookies are alterable.</p><p>I suppose as long as you're not storing anything mission critical (or if you are, but can test for validity before you use), LDS isn't a bad thing -- and your use case is a good example -- giving the user an extra life, so to speak, but not depending on the it...</p><p>(last note.  I loved mainframe days.  We had more control... :)  )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735073">12</a> by Raymond Camden
		posted on 9/14/2011 at 8:24 PM
		</div>
		<div class="comment_text"><p>Hmm, I see your point about hiding the fact that you are in PBM.</p><p>Thanks for digging into this!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735081">13</a> by Glory
		posted on 2/20/2013 at 8:16 PM
		</div>
		<div class="comment_text"><p>thank you!!!!</p></div>
	</div>
</div>
		