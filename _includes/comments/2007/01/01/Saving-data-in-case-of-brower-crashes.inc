
<div class="comment" id="c_1713660932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660932">1</a> by Rick O
		posted on 1/2/2007 at 9:34 AM
		</div>
		<div class="comment_text"><p>I've got something like this at the job, but instead of cookies, I copy the form data to a hidden copy of the form and do a XHR post to the final page with a "draft" parameter.  A manual post doesn't send the draft param, so that version becomes the final version.</p><p>We had problems with cookie length and people screwing with the cookie settings on their browser, so when I implemented the feature, cookies weren't even an option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660924">2</a> by Steve Walker
		posted on 1/2/2007 at 6:22 PM
		</div>
		<div class="comment_text"><p>As an FYI, I tested Word 2007's XML-RPC with BlogCFC and it works great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660933">3</a> by Dan G. Switzer, II
		posted on 1/2/2007 at 9:28 PM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>Just remember that there's a 4k cookie limit per domain (the total size of the document.cookie can not be more than 4k.) So, your techinique is going to cause problems for large blog entries.</p><p>I'd actually recommend just posting the data back to the server (either via AJAX or an IFRAME) and then have the server store the data. You could do this in the db or just use a persistant variable.</p><p>As soon as user actually saves the entry, delete the auto-save copy from the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660937">4</a> by Raymond Camden
		posted on 1/2/2007 at 9:54 PM
		</div>
		<div class="comment_text"><p>You are right on the limit - but I don't know. I think 4k would hold a LOT of text. As it stands - I was considering a Spry version as well. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660938">5</a> by James Edmunds
		posted on 1/2/2007 at 10:44 PM
		</div>
		<div class="comment_text"><p>For a brief moment, when I scanned the page and saw, $("title") I had a vision of Ray using Prototype. But instead it was simply Spry's use of the Prototype shorthand.</p><p>The universe is back in order! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660935">6</a> by Dan G. Switzer, II
		posted on 1/3/2007 at 12:38 AM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>Just remember that any embedded HTML in the blog entry will quickly add to the total size of the cookie. Also, remember that the 4K limit isn't per cookie, it's for all the cookies on the domain.</p><p>I'm not sure how much markup you have in this blog entry, but the text alone is about 3.7K. While I'm sure most posts are well under 4K, any extensive blog entry w/lots of source code or examples is probably going to break the 4K limit.</p><p>It's really not that much work to simply post the data back to the server using AJAX or an IFRAME. It's actually really easy w/an IFRAME. Just add an IFRAME and setTimeout() to your page to automatically submit the form to the IFRAME every XX seconds or so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660940">7</a> by Raymond Camden
		posted on 1/3/2007 at 12:44 AM
		</div>
		<div class="comment_text"><p>Good point. As I'm using Spry, I will just do that. As it stands, I needed to switch to Spry tabs anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660943">8</a> by Jacob Munson
		posted on 1/3/2007 at 7:16 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>If you're gonna make it with Spry, I'd like it if you put an option in the admin to set the time limit, and possible to turn it off.  The management at my job are a bunch of Nazis when it comes to Internet usage, and I'd prefer to just turn that feature off if I'm at work (every http hit adds 3 min to my 'bill').  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660941">9</a> by Jacob Munson
		posted on 1/3/2007 at 7:17 AM
		</div>
		<div class="comment_text"><p>It's probably obvious, but when I said 'time limit' in my last comment, I mean save frequency.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660946">10</a> by Raymond Camden
		posted on 1/3/2007 at 7:36 AM
		</div>
		<div class="comment_text"><p>Jacob - I most likely will not do that as I find that I have a lot of options already and I'm worried about overwhelming folks. But - you at least know about it and know where to comment it out. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660923">11</a> by Ken Dunnington
		posted on 1/4/2007 at 10:50 PM
		</div>
		<div class="comment_text"><p>Ray, will you post your Spry solution here when it's done? I'd like to do more with Spry, and one of the basic things I haven't seen many examples on (not that I've looked very hard) is XHR calls (non-dataset stuff.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660922">12</a> by Raymond Camden
		posted on 1/5/2007 at 3:55 AM
		</div>
		<div class="comment_text"><p>I will - but it may be a little while - getting swamped. I did find out how to POST with Spry (thanks to another user), so that was my main stumbling block.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660921">13</a> by Don Li
		posted on 3/22/2008 at 5:26 AM
		</div>
		<div class="comment_text"><p>It's over a year since this blog was posted.  One technique to achieve the same thing (auto save) is using AJAX as mentioned, Sam Farmer has implemented it, and I've learned this technique from him as well, it seems to be quite elegant.</p></div>
	</div>
</div>
		