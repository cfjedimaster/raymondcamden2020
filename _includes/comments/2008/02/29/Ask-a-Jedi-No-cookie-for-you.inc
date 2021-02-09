
<div class="comment" id="c_1713677710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677710">1</a> by Chris H
		posted on 3/1/2008 at 1:01 AM
		</div>
		<div class="comment_text"><p>i don't support cookie-less visitors on large sites. like you said, adding an urlSessionFormat() to every link/form/javascript redirect/etc. is hassle enough, but i remember it adding the variables to the URL scope even if i had cookies enabled on the first request after login or some such.</p><p>i do always check that the user is notified that he needs to enable cookies for this site every time his action fails because of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677714">2</a> by Raymond Camden
		posted on 3/1/2008 at 1:02 AM
		</div>
		<div class="comment_text"><p>Where do you add it to JavaScript? I can't imagine that being necessary - outside of the HTTP calls done via Ajax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677713">3</a> by Chris H
		posted on 3/1/2008 at 1:12 AM
		</div>
		<div class="comment_text"><p>depends, when doing a redirect via document.location or changing the "href" attribute via document.getElementById( 'aLink' ).href = 'index.cfm?event=eventtoload&amp;Language=English'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677716">4</a> by Raymond Camden
		posted on 3/1/2008 at 1:21 AM
		</div>
		<div class="comment_text"><p>Ah true dat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677715">5</a> by Rick O
		posted on 3/1/2008 at 1:46 AM
		</div>
		<div class="comment_text"><p>I agree with Chris H.  My company runs its own mid-range retail store online, and I get the support calls for the online orders.  I can tell immediately if they are having problems because of lack of cookies, and I tell them quite simply that their browser is misconfigured.</p><p>Because, quite frankly, it is.  Session cookies are just as vital to modern web browsing as the Anchor tag.</p><p>Modern web browsers allow you to turn off cross-domain cookies if you are really that paranoid.  Any more than that is just silly.</p><p>I offer to walk them through turning them back on when possible -- some people have sysadmins that have disabled them on a network level, or via a cookie-cutting proxy server.  In those extreme cases, I have a form email that they can forward to their sysadmins which explains how out of date the concept of cookie blocking is.</p><p>Same for people that turn off JavaScript.</p><p>"You must be this tall to ride this ride."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677721">6</a> by James Edmunds
		posted on 3/1/2008 at 2:38 AM
		</div>
		<div class="comment_text"><p>Like Rick O, I for most sites assume that visitors will be using javascript and cookies, but I tend to test for both and provide messages like, "You have javascript turned off and some features of this web site may be lost," etc. Nevertheless, I like to test things with javascript and/or cookies turned off just to make sure the ride is at least reasonably smooth, or reasonably good at explaining what they won't be able to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677717">7</a> by Pat Dobson
		posted on 3/3/2008 at 2:11 PM
		</div>
		<div class="comment_text"><p>I guess it's a compromise situation, you must assume that the majority have both cookies and javascript.<br>When I was investigating this, I noticed that Amazon (probably the biggest on-line retailer) don't support a 'no cookie' situation, they simply warn users to enable cookies. If it's good enough for them . . .<br>Without the useful command URLSessionFormat, how do other languages get around this issue ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677719">8</a> by Thomas
		posted on 4/4/2008 at 2:01 PM
		</div>
		<div class="comment_text"><p>Something you will notice after adding "URLSessionFormat" to your links and disabling cookies, when you run the W3C XHTML validation service:</p><p>"This page is not Valid XHTML 1.0 Strict!"</p><p>Why? The Function is placing "&amp;" instead of "&amp;amp;". If you would really like to use it, you will need another Replace() around it - even uglier then before ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677724">9</a> by Raymond Camden
		posted on 4/4/2008 at 4:28 PM
		</div>
		<div class="comment_text"><p>Or you could do it in a udf and just use the one udf for your links.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677728">10</a> by Mike G
		posted on 11/15/2009 at 5:00 AM
		</div>
		<div class="comment_text"><p>I just recently ran into this issue on an ecomm site I wrote.  With the spectre of a huge re-write to support the paranoid mini-masses and experimenting with onrequestend(), getPageContext(),getOut().getString() and a regex to do url rewriting to add the sessiontoken.  That ought to work for all the cfm pges with links, but I no idea how to handle all the ajax js files that are linked.  Any Ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677726">11</a> by Raymond Camden
		posted on 11/15/2009 at 7:58 PM
		</div>
		<div class="comment_text"><p>If you make your JS files CFM files then you can use the same technique.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677733">12</a> by Raymond Camden
		posted on 11/15/2009 at 7:58 PM
		</div>
		<div class="comment_text"><p>Of course - I have to ask - why not juse add urlSesionFormat to the links? That handles adding the links for you if cookies aren't enabled.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677729">13</a> by Mike g
		posted on 11/15/2009 at 10:44 PM
		</div>
		<div class="comment_text"><p>As far as changing Justin to cfm, I then lose the client side caching of the Js. Long term I will use urlsessionformat but will be rewriting most method calls. Need a quick turnaround solution for a production site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677741">14</a> by Raymond Camden
		posted on 11/16/2009 at 12:27 AM
		</div>
		<div class="comment_text"><p>Unless you have an absurd amount of links in your JS - would it take that long to use the urlSessionFormat? And the client can still cache CFM files. Look into cfheader to request the client to cache the result.</p></div>
	</div>
</div>
		