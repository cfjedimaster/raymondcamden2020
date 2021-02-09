
<div class="comment" id="c_2958530246">
	<div>
		<img src="https://disqus.com/api/users/avatars/danswitzerii.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2958530246">1</a> by Dan Switzer, II
		posted on 10/19/2016 at 4:07 PM
		</div>
		<div class="comment_text"><p>Not sure the DOM creation is expensive enough to worry about caching, but here's how you can avoid the global variable leak:</p><p>var  isValidEmail = (function (){<br>	var elm;<br>	return function (s) {<br>	  if(!elm) {<br>	    elm = document.createElement('input');<br>	    elm.setAttribute('type', 'email');<br>	  }<br>	  elm.value = s;<br>	  return elm.validity.valid;<br>	}<br>})();</p></div>
	</div>
</div>
		
<div class="comment" id="c_2958762849">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2958762849">2</a> (In reply to <a href="#c_2958530246">#1</a>) by Raymond Camden
		posted on 10/19/2016 at 6:15 PM
		</div>
		<div class="comment_text"><p>That's what I meant when I talked about turning it into a module. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2958848953">
	<div>
		<img src="https://disqus.com/api/users/avatars/jamesmoberg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2958848953">3</a> by James Moberg
		posted on 10/19/2016 at 7:04 PM
		</div>
		<div class="comment_text"><p>I ran a comparison using an internal test script that I've been using over the years to compare against 290 known good/bad email addresses (per RFC rules).  I itnegrated this HTML5 validation check as one of the tests it performed better than ColdFusion's built-in function, but not better than a CF regex or Java library that I use. (NOTE: The HTML5 technique is highly dependent on client-side browser support or it won't work.)</p><p>My response contained too much information to post in a Disqus comment, so I posted it on my blog:<br><a href="https://disq.us/url?url=https%3A%2F%2Fgamesover2600.tumblr.com%2Fpost%2F152034073124%2Fclientserver-side-email-validation-compared%3ALqWZF-GNB3zrl1qF_4t0iGfrqho&amp;cuid=3321886" rel="nofollow noopener" title="https://gamesover2600.tumblr.com/post/152034073124/clientserver-side-email-validation-compared">https://gamesover2600.tumbl...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2958924361">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2958924361">4</a> (In reply to <a href="#c_2958848953">#3</a>) by Raymond Camden
		posted on 10/19/2016 at 7:47 PM
		</div>
		<div class="comment_text"><p>Pretty cool testing there. Thanks for sharing that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986316870">
	<div>
		<img src="https://disqus.com/api/users/avatars/jdnichollsc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986316870">5</a> by Juan David Nicholls
		posted on 11/5/2016 at 4:32 PM
		</div>
		<div class="comment_text"><p>Better using Regular Expression :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986336289">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986336289">6</a> (In reply to <a href="#c_2986316870">#5</a>) by Raymond Camden
		posted on 11/5/2016 at 4:47 PM
		</div>
		<div class="comment_text"><p>Perhaps. Then again - I'd trust the browser vendor's regex internally built into the engine generally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2994766254">
	<div>
		<img src="https://disqus.com/api/users/avatars/boldewyn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2994766254">7</a> by Boldewyn
		posted on 11/10/2016 at 9:50 AM
		</div>
		<div class="comment_text"><p>In 2012 I suggested this solution (with optional regex fallback) on StackOverflow: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fa%2F13975255%2F113195%3AgHgSdw6sJxk097k8WId6P0B0nGo&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/a/13975255/113195">http://stackoverflow.com/a/...</a></p><p>But the advantage over a plain regex solution might be minimal. Everybody including browser vendors put their pants on one leg at a time, and the HTML5 spec even suggests a ready-to-use expression: <a href="https://disq.us/url?url=https%3A%2F%2Fhtml.spec.whatwg.org%2Fmultipage%2Fforms.html%23valid-e-mail-address%3Avp2HAa67YZrRBBPdEXbvZP-wtSg&amp;cuid=3321886" rel="nofollow noopener" title="https://html.spec.whatwg.org/multipage/forms.html#valid-e-mail-address">https://html.spec.whatwg.or...</a></p><p>That's why I use exactly that pattern in my form validation API polyfill, too (and not my suggestion from SO): <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fhyperform%2Fhyperform%2Fblob%2Fmaster%2Fsrc%2Fvalidators%2Ftype.js%23L18%3AxUXTTPaJEg8VDrwSeqP70lOtB8A&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/hyperform/hyperform/blob/master/src/validators/type.js#L18">https://github.com/hyperfor...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2994898935">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2994898935">8</a> (In reply to <a href="#c_2994766254">#7</a>) by Raymond Camden
		posted on 11/10/2016 at 12:26 PM
		</div>
		<div class="comment_text"><p>I'm confused - if you think the strategy is minimally better, why do you prefer a regex?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2994977468">
	<div>
		<img src="https://disqus.com/api/users/avatars/boldewyn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2994977468">9</a> (In reply to <a href="#c_2994898935">#8</a>) by Boldewyn
		posted on 11/10/2016 at 1:29 PM
		</div>
		<div class="comment_text"><p>What I wanted to say was, that the advantage of tapping into the browser's email validation might not be worth the hassle, if you can use the same regex directly yourself, that the browser uses (most probably) anyhow. (Especially because you might need a fallback anyway, depending on your browser support needs.)</p><p>I still think, it is a very nice idea to hijack a browser feature like this, though. A prime example is, e.g., URL manipulation using a virtual &lt;a&gt; and its methods:</p><p></p><pre>    var a = document.createElement('a');<br>    a.href = 'http://google.de/foo';<br>    a.host = 'bing.com';<br>    a.href === 'http://bing.com/foo';<br></pre></div>
	</div>
</div>
		
<div class="comment" id="c_2995073535">
	<div>
		<img src="https://disqus.com/api/users/avatars/jamesmoberg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2995073535">10</a> (In reply to <a href="#c_2994766254">#7</a>) by James Moberg
		posted on 11/10/2016 at 2:35 PM
		</div>
		<div class="comment_text"><p>The above client-side form validation API polyfill isn't consistent with the server-side OWASP validation regex and a full domain name can include up to 255 octets.</p><p>I've encountered deliverability issues where, even if the email is valid per the RFC, some technologies (CFMail, SMTP servers, transactional email API services, etc) won't agree that it's valid. Gmail appears to be able to send and receive using email addresses that have high-ASCII/UTF characters in the username, but no other SMTP servers I've reviewed will accept them as "valid".</p></div>
	</div>
</div>
		
<div class="comment" id="c_2995090237">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2995090237">11</a> (In reply to <a href="#c_2995073535">#10</a>) by Raymond Camden
		posted on 11/10/2016 at 2:45 PM
		</div>
		<div class="comment_text"><p>I think it's important to remember that *all* client-side validations should be backed up by server-side validations as well. The fact is - if we can catch *most* issues on the client, even if it isn't 100%, we are still providing a benefit to the end user by giving them quicker turnaround.</p></div>
	</div>
</div>
		