
<div class="comment" id="c_1713735096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735096">1</a> by RogerTheGeek
		posted on 9/13/2011 at 5:39 PM
		</div>
		<div class="comment_text"><p>Works on CF8. Thanks for the tip Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735097">2</a> by Charlie Arehart
		posted on 9/13/2011 at 7:17 PM
		</div>
		<div class="comment_text"><p>Cool tip to share, Ray. Thanks.</p><p>One thing folks should consider, though, is that there could be a difference in what gets shown in that list, compared to the cookies scope itself. The cookie scope will reflect cookies that CF code sets (such as would be done implicitly by the CFAPPLICATION tag enabling clientmanagement or session management, or via application.cfc's this.clientmanagement/this.sessionmanagement).</p><p>But the getpagecontext().getRequest() really gets the request as it was sent TO the page, not anything that was set ON the page. It's a subtle point, but I've seen people trying to troubleshoot problems and they didn't keep this in mind, and they were misled thinking the cookie scope showed only what was sent TO the page.</p><p>So code like yours is helpful to make sure one sees clearly what is sent. A dump of the cgi.http_cookie would also do it, though just like your discussion of the cookie scope, it too does not show the other metadata like expiration, path, etc.</p><p>Hope that's helpful.</p><p>One last point: that getpagecontext is indeed a treasure-trove of interesting possibilities that folks may want to explore. Some may recall I pointed out its use with server-side redirects (forwards), in an article in the CFDJ back in 2002. For those who may be interested, it's still available online, at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.carehart.org%2Farticles%2F%232002_7%3AhEV6XnvbT14GlEAvj958Z2ha2IU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.carehart.org/articles/#2002_7">http://www.carehart.org/art...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735098">3</a> by Raymond Camden
		posted on 9/13/2011 at 7:47 PM
		</div>
		<div class="comment_text"><p>Excellent point Charlie, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735100">4</a> by Dave Merrill
		posted on 9/15/2011 at 4:24 PM
		</div>
		<div class="comment_text"><p>Does the cookie value need to the URLDecoded? Logically,if the value contains the string ';path=' , outside case I know but you get the point, that would interfere with the intended path spec for the cookie, so the semicolon must be escaped.</p><p>Experimentally, if I use cfcookie to set a cookie with the value "asdf qwer &lt;poi&gt;;HTTPOnly", the code above shows the whitespace, brackets and semicolon as URLEncoded, but cfdumping the cookie scope shows the decoded version. I see the same behavior if I use cfheader to set a cookie manually, and URLEncode the value portion of it (only, not the whole spec string).</p><p> I've been looking for an official spec on what needs to be escaped and how, haven't come up with anything solid. Did find this statement from Nicholas C. Zakas:</p><p>"The commonly held belief is that cookie values must be URL-encoded, but this is a fallacy even though it is the de facto implementation. The original specification indicates that only three types of characters must be encoded: semicolon, comma, and white space. The specification indicates that URL encoding may be used but stops short of requiring it. The RFC makes no mention of encoding whatsoever. Still, almost all implementations perform some sort of URL encoding on cookie values. In the case of name=value formats, the name and value are typically encoded separately while the equals sign is left as is."</p><p>That's here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.nczonline.net%2Fblog%2F2009%2F05%2F05%2Fhttp-cookies-explained%2F%3AIP2cl6EEbqHgObI8Ja5ZF0ZV_5c&amp;cuid=3321886" rel="nofollow noopener" title="http://www.nczonline.net/blog/2009/05/05/http-cookies-explained/">http://www.nczonline.net/bl...</a></p><p>So my tentative conclusion is that cookie values do need to be URLEncoded, and the code above should decode them. That may be specific to ColdFusion, or not; according to the above, that's the de facto spec, which CF seems to have followed, in both directions.</p><p>Any other thoughts on this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735099">5</a> by Dave Merrill
		posted on 9/15/2011 at 7:59 PM
		</div>
		<div class="comment_text"><p>Also, don't know what to make of this, but I'm not seeing getDomain(), getPath(), or getMaxAge() return anything when there's actually a domain, path, and expiration set.</p><p>I have some cookies set that a) show a domain, path, and expiration in Firefox's page info dlg, b) show different values in the Firebug Net panel request headers section, and c) have different values in different locations on the same domain according to cf.</p><p>That makes me fairly confident that they really do have domain, path and exipration specs, but the code above shows blank for all three. Maybe those other infos are thought to be the client's business, not the server's so they don't get sent to the server? But then why do these methods exist in javax.servlet.http.Cookie? Same behavior on ACF and Railo.</p><p>Don't get it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735101">6</a> by Raymond Camden
		posted on 9/16/2011 at 7:46 PM
		</div>
		<div class="comment_text"><p>Just to clarify your first comment - cookie values should be encoded, but as you said, CF is handling this for us. Agreed?</p><p>As for getDomain/etc failing... no idea on that one. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735103">7</a> by Dave Merrill
		posted on 9/18/2011 at 5:08 AM
		</div>
		<div class="comment_text"><p>On the set side, if you use cfcookie it's handled for you, but not if you use cfheader. On the get side, if you read the values from the cf cookie scope it's handled, but not if you use the java methods shown here.</p><p>But unless I'm doing or thinking something silly, the java methods don't actually return any of the extra metadata that would make them more attractive than native cf anyway, so that may be moot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735102">8</a> by Raymond Camden
		posted on 9/18/2011 at 6:53 PM
		</div>
		<div class="comment_text"><p>Age would be useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735104">9</a> by Jason Dean
		posted on 10/22/2012 at 6:11 PM
		</div>
		<div class="comment_text"><p>Cookie metadata like Domain, Path and Max age are set in a response when the cookie is first created and then sent to the client, which stores them.  To my knowledge, all of that metadata is then forgotten by the server and will *never* show up in an HTTP request.</p><p>When the client sends cookies back to the server, that metadata is not sent along. Only the name and value are sent. That is my those getters return blank.</p><p>To my knowledge there is no way, nor any point, in trying to get that data from the cookies. Perhaps you could do it on the same request/response where the cookie is set, but not after that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735105">10</a> by Tim Cunningham
		posted on 10/22/2012 at 6:29 PM
		</div>
		<div class="comment_text"><p>Jason is correct. This is not unique to ColdFusion, but rather the way cookies work. I found this on a ASP.NET site:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmsdn.microsoft.com%2Fen-us%2Flibrary%2Fms178194%28v%3Dvs.100%29.aspx%3A1fjng7ZyDin4YjuRiwWeYbJTTQM&amp;cuid=3321886" rel="nofollow noopener" title="http://msdn.microsoft.com/en-us/library/ms178194(v=vs.100).aspx">http://msdn.microsoft.com/e...</a></p><p>"The browser is responsible for managing cookies, and the cookie’s expiration time and date help the browser manage its store of cookies. Therefore, although you can read the name and value of a cookie, you cannot read the cookie’s expiration date and time. When the browser sends cookie information to the server, the browser does not include the expiration information. (The cookie’s Expires property always returns a date-time value of zero.) If you are concerned about the expiration date of a cookie, you must reset it, which is covered in the "Modifying and Deleting Cookies" section."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735106">11</a> by Raymond Camden
		posted on 10/22/2012 at 6:45 PM
		</div>
		<div class="comment_text"><p>Thanks for the correction Jason. I'm going to edit the blog post to ensure folks see your comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3282979721">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3282979721">12</a> (In reply to <a href="#c_1713735106">#11</a>) by Charles Robertson
		posted on 5/1/2017 at 11:01 AM
		</div>
		<div class="comment_text"><p>Hi Ray. Thanks for another very informative post. Can you tell me where Coldfusion cookies are stored by default. Am I correct in thinking that SESSION variables are stored on the Application server and Coldfusion COOKIE variables are stored in the client's browser?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3283007187">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3283007187">13</a> (In reply to <a href="#c_3282979721">#12</a>) by Raymond Camden
		posted on 5/1/2017 at 11:37 AM
		</div>
		<div class="comment_text"><p>Cookies are stored in the browser, CF is just giving you a way to read them and set them. But they are stored in the browser. Session variables have nothing to do with cookies, outside of the fact that cookies are used to identify you. So 2 cookies note you as Charles and server says, "Charles' session values are so and so."</p></div>
	</div>
</div>
		
<div class="comment" id="c_3286614008">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3286614008">14</a> (In reply to <a href="#c_3283007187">#13</a>) by Charles Robertson
		posted on 5/3/2017 at 1:34 PM
		</div>
		<div class="comment_text"><p>Thanks Ray for explaining this. I really needed this clarifying after nearly a decade of CFML development. So, if I am using a server cluster, and one of my servers fails, I can use an id cookie to retrieve my session from a custom shared session database. I can store my users' session variables in a DB and then retrieve them, if one of my servers fails. This will allow me to keep my users' session alive across the cluster?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3286616608">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3286616608">15</a> (In reply to <a href="#c_3286614008">#14</a>) by Raymond Camden
		posted on 5/3/2017 at 1:36 PM
		</div>
		<div class="comment_text"><p>I want to say, but I'm not 100% sure, that recent versions of CF supported session replication, but I honestly don't know. I'd Google for that "session replication coldfusion" and see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3545024599">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3545024599">16</a> (In reply to <a href="#c_1713735104">#9</a>) by Charles Robertson
		posted on 10/1/2017 at 1:23 PM
		</div>
		<div class="comment_text"><p>Jason. Is this why the maxAge() for all my cookies returns -1, when I know that this clearly is not the correct value?</p></div>
	</div>
</div>
		