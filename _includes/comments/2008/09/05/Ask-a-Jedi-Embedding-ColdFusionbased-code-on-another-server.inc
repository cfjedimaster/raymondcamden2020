
<div class="comment" id="c_1713685574">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685574">1</a> by Aaron Longnion
		posted on 9/6/2008 at 12:35 AM
		</div>
		<div class="comment_text"><p>Nice solution, Ray.</p><p>I would typically just give them some sample form code for a service/API, instead of generating one *for them* via JS, iFrame, or other.  Some partners complained they don't want to require users to have JS enabled; others refuse to use iFrames (won't touch that holy war with a ten-foot poll ;)</p><p>Also, webmasters usually want to fully customize the HTML form, and may not want to be tied to your particular solution.  Other than CSS, they may want to have their own client-side validation, may want to use AJAX, Flash, server-side POSTs or whatever to pass the data to your system.  Delivering the HTML form *for them* limits the possibilities severely.</p><p>I'd just publish a dead-simple HTML example form POST, detailed docs on the expected fields (data types, max and min requirements, etc.). And in the case you described, just auto-generate a "key" or ID that they can POST in the form. Then, make sure your API has extensive and accurate error-handling that returns XML or XHTML that the partner can easily deal with.  Accuracy is important here because other developers, as you well-know Ray, will scrutinize the heck out of every little mistake you might have made.</p><p>btw Ray - your blog software doesn't seem to correctly allow plus signs (+) in emails: <a href="http://disq.us/url?url=http%3A%2F%2Fcfzen.instantspot.com%2Fblog%2F2008%2F04%2F30%2FDoes-your-email-validation-allow-plus-signs%3AJJpiXEXi7rk5ySX-PaneRW8GAP8&amp;cuid=3321886" rel="nofollow noopener" title="http://cfzen.instantspot.com/blog/2008/04/30/Does-your-email-validation-allow-plus-signs">http://cfzen.instantspot.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685577">2</a> by Raymond Camden
		posted on 9/6/2008 at 12:46 AM
		</div>
		<div class="comment_text"><p>Well, for style I think you have a few options. You could easily use some documented styles that are blank so the site could define them and make them pretty. You can also do what AdSense does and allow folks to customize the output. I'd disagree with you that all users want to fully customize their forms - I think some will, for sure, but many also just want a 'drop it in and work' type solution. I mean look at WuFoo. :)</p><p>Email checking should now allow +. My blogware had that fixed for a while, but this blog is a bit out of sync with the latest BlogCFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685578">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685578">3</a> by Aaron Longnion
		posted on 9/6/2008 at 12:58 AM
		</div>
		<div class="comment_text"><p>Good points about the style options.</p><p>I agree that all partners probably don't want to deal with customizing these types of solutions.  The problem is, though, if you want the widest possible audience to use your API, but you limit them to only a standard HTML form (no fancy ajax, flash, flex, silverlight, or other possibilities), then somewhere down the road you'll come across a more sophisticated partner who wants something more flexible.  And then you may ask yourself, "why didn't I just make a more flexible/generic solution in the first place?", ... and then you'll have to write something new to accommodate these requests for customization.  Is it obvious I've been down that road a number of times before, hated it, and don't want to repeat it again?  ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685579">4</a> by Raymond Camden
		posted on 9/6/2008 at 1:01 AM
		</div>
		<div class="comment_text"><p>Oh... ok. So I think we may be talking different things here. You are talking about a full API, whereas Wayne specifically was asking for an 'embedable' type solution that leads folks to his server to complete a process. I think they are really different things. They _could_ share similar end results, but it's different audiences really.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685580">5</a> by Albert Nurick
		posted on 9/6/2008 at 3:20 AM
		</div>
		<div class="comment_text"><p>We're about to release a product that uses a similar technique -- the client gets a Javascript snippet to paste into his web site, and we generate the dynamic code on the fly to drive the functionality.</p><p>We actually first implemented something very similar to this about seven years ago; we had a client with two large web sites, and we had the contract to convert one to ColdFusion to implement a bunch of enhancements.  They didn't have the budget to migrate the other, but they wanted some dynamic functionality, so we implemented it via Javascript very similar to what you describe.  It was very State of the Art in 2001.  LOL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685581">6</a> by Tom Mollerus
		posted on 9/10/2008 at 12:41 AM
		</div>
		<div class="comment_text"><p>I've done something similar to this embeddable service, but with a JavaScript solution., in a couple of instances. The less interesting instance is just pulling a "dynamic quote of the day" for the footer of a site; the more interesting instance is to pull a session-aware header from our CF-based corporate site to our Java-powered blog site.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mollerus.net%2Ftom%2Fblog%2F2008%2F01%2Fhow_to_get_dynamic_content_on_static_html_pages.html%3ApA2M5RubkFUucZSELSVHX39SoDA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mollerus.net/tom/blog/2008/01/how_to_get_dynamic_content_on_static_html_pages.html">http://www.mollerus.net/tom...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685582">7</a> by Sebastiaan
		posted on 9/12/2008 at 5:12 PM
		</div>
		<div class="comment_text"><p>Hi guys,</p><p>just a note on IFRAME: it's been deprecated in XHTML.</p><p>Try using the OBJECT-tag instead.</p><p>Good luck!</p></div>
	</div>
</div>
		