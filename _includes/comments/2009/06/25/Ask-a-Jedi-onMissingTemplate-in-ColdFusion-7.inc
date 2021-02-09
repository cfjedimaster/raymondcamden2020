
<div class="comment" id="c_1713716355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716355">1</a> by Craig Heneveld
		posted on 6/25/2009 at 6:26 PM
		</div>
		<div class="comment_text"><p>Thanks for the tip Ray.  I was curious if you know where the coldfusion default onMissingTemplate template is located? Is this in the cf file system, or is this compiled at runtime? I would like to base my custom template from this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716362">2</a> by Raymond Camden
		posted on 6/25/2009 at 6:37 PM
		</div>
		<div class="comment_text"><p>There is a default response, but no default file you can edit. So if you want to modify the default you would need to make a 100% new file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716360">3</a> by Steve Gongage
		posted on 6/26/2009 at 3:15 PM
		</div>
		<div class="comment_text"><p>"I'm convinced that simply ignoring 404 requests is one of the biggest mistakes you can make on a web site"</p><p>Hey Ray, just wondering if you would ellaborate a little more on what you said here.  The reason being, I'm playing around with using "onMissingTemplate" to help me spoof search engine safe urls under IIS and I want to see if I'm making a mistake before going to far.</p><p>In my example when someone enters in:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.awesome.com%2Fstorefront%2Flightsabers.cfm%3Adc8fXRaEBehR0WZBaUyCqJXMlXM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.awesome.com/storefront/lightsabers.cfm">http://www.awesome.com/stor...</a></p><p>The onMissingTemplate method of Application.cfc will fire (since there will not be either a storefront directory or a lightsabers.cfm template).  Lets say we parse the requesting URL in the onMissingTemplate method, figure out we're really going to:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.awesome.com%2Findex.cfm%3Fmodule%3Dstorefront%26productName%3Dlightsabers%3A_KhMlZQ4kehlkj8vhV4Td7jHaBc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.awesome.com/index.cfm?module=storefront&amp;productName=lightsabers">http://www.awesome.com/inde...</a></p><p>So, technically, if someone punches in anything with a .cfm extension they should technically never get a 404 error in my app.  At worst they will be redirected to the root of the site or perhaps the root of the storefront module.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716363">4</a> by Gary Gilbert
		posted on 6/26/2009 at 4:30 PM
		</div>
		<div class="comment_text"><p>@Steve,</p><p>If I were you I would still provide a means of catching a non-existing method, product whatever, instead of simply redirecting the user back to the startpage.</p><p>I blogged about using the OnMissingTemplate method a while back to do just what you are planning <a href="http://disq.us/url?url=http%3A%2F%2Fwww.garyrgilbert.com%2Fblog%2Findex.cfm%2F2008%2F1%2F2%2FColdfusion-Mod-Rewrite%3AltmM4rtPNOHQytBlK1tgGLIhgm8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.garyrgilbert.com/blog/index.cfm/2008/1/2/Coldfusion-Mod-Rewrite">http://www.garyrgilbert.com...</a></p><p>if you don't have access to your host to add the isapi filters for your URL then the onmissingtemplate is really your only choice to do SES the way you want to do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716365">5</a> by Raymond Camden
		posted on 6/26/2009 at 11:01 PM
		</div>
		<div class="comment_text"><p>@Steve: I'll ditto Gary. For cases where the URL does not match an expected pattern you want to log the request at minimum. This would let you see what's being requested that you aren't handling. Are folks coming to a typo version of your product name? Support the typo. Are folks looking for your competitors product? Create a page for that and talk about why your product is better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716356">6</a> by Steve Gongage
		posted on 6/29/2009 at 6:23 PM
		</div>
		<div class="comment_text"><p>@Gary &amp; @Raymond</p><p>Gotcha, that makes sense.  I had planned to take them back to a generic start page and if reasonable, try to suggest a page they might have intended to go to, but I can see the logic behind at least logging the request.</p><p>Thanks for the advice!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716357">7</a> by Matthew
		posted on 2/19/2010 at 3:37 AM
		</div>
		<div class="comment_text"><p>I like the way that mangoblog is doing their rewriting (<a href="http://disq.us/url?url=http%3A%2F%2Fmangoblog.org%3AK5nbdnP5jrBVP0x2HAvwq5DwJSY&amp;cuid=3321886" rel="nofollow noopener" title="mangoblog.org">mangoblog.org</a>)<br>Are they using the missing template method or something else? <br>I like how whatever I have listed in the db for my articles appears in the URL.<br>Could someone help me understand the code needed to recreate this? I need to use clean URLs on other projects, but there does not seem to be a good, concise template set for this task. Not sure why.</p><p>i'm on CF7</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716358">8</a> by Raymond Camden
		posted on 2/19/2010 at 3:44 AM
		</div>
		<div class="comment_text"><p>BlogCFC does it too. ;)</p><p>There are a variety of ways of doing it. Here is one discussion: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2005%2F8%2F2%2FAsk-a-Jedi-Working-with-SES-URLs-and-ColdFusion%3Aajh71ioaKTUei1xyyofb8Sp18K8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2005/8/2/Ask-a-Jedi-Working-with-SES-URLs-and-ColdFusion">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		