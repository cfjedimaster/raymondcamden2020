
<div class="comment" id="c_1714083072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083072">1</a> by Kevin Hakanson
		posted on 6/5/2014 at 7:13 PM
		</div>
		<div class="comment_text"><p>I still have my hand up. : )</p><p>When I first experimented with CORS back in the Internet Explorer 8 days, I learned that with the IE8 XDomainRequest object, no authentication or cookies will be sent with the request.  Internet Explorer 10+ supports CORS using XMLHTTPRequest.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblogs.msdn.com%2Fb%2Fieinternals%2Farchive%2F2010%2F05%2F13%2Fxdomainrequest-restrictions-limitations-and-workarounds.aspx%3AovMg3L9BgtoL8GcCuTMXKP4aLr8&amp;cuid=3321886" rel="nofollow noopener" title="http://blogs.msdn.com/b/ieinternals/archive/2010/05/13/xdomainrequest-restrictions-limitations-and-workarounds.aspx">http://blogs.msdn.com/b/iei...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083073">2</a> by Raymond Camden
		posted on 6/5/2014 at 7:14 PM
		</div>
		<div class="comment_text"><p>Good to know IE10 supports it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083075">3</a> by QuickFix
		posted on 6/6/2014 at 8:15 PM
		</div>
		<div class="comment_text"><p>When my app was using Rhomobile 2 on windows mobile, I was using CORS (rhomobile runs a local ruby server, so you need to use CORS to access any other server). <br>I was not aware of that flag and the app seemed to work correctly, is it possible this handled automatically by jquery or something?</p><p>I think I may have had the issue when I tried to use Rhomobile 2 on android, maybe the Motorola browser I was using for Windows Mobile was hiding the issue...<br>Aniway, that was one of the many reasons why I switched to Cordova and I'm quite happy with that choice now.</p><p>Thanks for the info, that might be very usefull next time I'll have to deal with CORS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083071">4</a> by Raymond Camden
		posted on 6/6/2014 at 8:27 PM
		</div>
		<div class="comment_text"><p>It is entirely possible things are different on Windows Phone. I know I've seen odd issues there. As an example, at one point (not sure if it is true now), a WP PhoneGap app could not make an XHR request to an asset locally. Why? You know the whole JS on domain X can't hit Y unless you use CORS thing? Well the "location" for a PhoneGap app was being reported as "" (ie, nothing) and the XHR request was to a local file asset, and since "" != local file path, it was blocked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1725274207">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_aP7fzdsV46.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1725274207">5</a> by PerKristian
		posted on 12/4/2014 at 12:40 PM
		</div>
		<div class="comment_text"><p>Once you've gotten CORS working, there's another issue: The session ID is sent as a cookie, and since the request is <br>cross-domain, it's considered a third party cookie by the browser.  <br>Several browsers will block third-party cookies, and the session is lost.</p><p>Solution: Generate the session ID on the client (in the browser), use Javascript <br>sessionStorage to store the session ID then send the session ID with <br>each request to the server.</p><p>Details here: <a href="https://disq.us/url?url=https%3A%2F%2F404it.no%2Fen%2Fblog%2Fjavascript_cross-domain_request_with_session%3AAohXVf9xCMJrMSbZnbnJTd5P9Zc&amp;cuid=3321886" rel="nofollow noopener" title="https://404it.no/en/blog/javascript_cross-domain_request_with_session">https://404it.no/en/blog/ja...</a></p></div>
	</div>
</div>
		