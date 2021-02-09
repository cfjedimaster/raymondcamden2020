
<div class="comment" id="c_1713719476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719476">1</a> by andy matthews
		posted on 11/5/2009 at 8:24 PM
		</div>
		<div class="comment_text"><p>It seems that using a hidden form field would be the only way you could submit the status in the post. I suppose you could experiment with using a textarea field with an alternate style to be the display object. Probably wouldn't work though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719467">2</a> by Brian Swartzfager
		posted on 11/5/2009 at 8:44 PM
		</div>
		<div class="comment_text"><p>With a single flag value like that, you could instead tack the value/state of the flag onto the post as a URL variable in the "action" attribute of the form.  So when the submit event runs, the action attribute value is change from "submit.cfm" to "submit.cfm?instruct=true" or "submit.cfm?instruct=false", and then base your conditional on the URL variable value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719478">3</a> by pritesh
		posted on 11/5/2009 at 9:10 PM
		</div>
		<div class="comment_text"><p>I have gone through same problem but different is need to maintain multiple divs hidden/visible. Applied same login but rather than different hidden variable use single one and at time of form submission build JSON string with id and current visibility status (like {'div1':'true','div2':'false'....} and on load of page go through all structure element and show/hide as per value</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719480">4</a> by Craig Kaminsky
		posted on 11/5/2009 at 10:23 PM
		</div>
		<div class="comment_text"><p>I think I'd go with the hidden field as well but there is a pretty nice Cookie plugin for jQuery (<a href="http://disq.us/url?url=http%3A%2F%2Fplugins.jquery.com%2Fproject%2Fcookie%29%3APIbeY-N9NfJm1X6YAXNuDAjA6Is&amp;cuid=3321886" rel="nofollow noopener" title="http://plugins.jquery.com/project/cookie)">http://plugins.jquery.com/p...</a> in case anyone wants to explore the cookie route ... the plugin makes reading and writing basic cookies quite simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719481">5</a> by Allen
		posted on 11/6/2009 at 8:18 AM
		</div>
		<div class="comment_text"><p>I'm curious as to why this is needed in the first place.  It smells like a display preference issue.  Ideally state for that should be persisted using the session and/or database and/or framework.  Or am I missing something?</p><p>Other than that, this works well enough.  It just doesn't feel like the long term, elegant solution.  Then again, how often is the elegant solution the best one?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719474">6</a> by Saravanamuthu
		posted on 11/6/2009 at 12:13 PM
		</div>
		<div class="comment_text"><p>I done this before for form elements. I disabled the element while hiding. So I won't get that form element after post. While loading I checked isDefined(form.element).<br>@Craig, It sounds good. I will update my code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719477">7</a> by salvatore fusto
		posted on 11/6/2009 at 12:49 PM
		</div>
		<div class="comment_text"><p>My 2 cents: first of all,remember that users can have coockies disabled; often i change the action url string of a form at submit, depending of any parameter, what button is pressed ecc, i like Brian's solution as we have not another field form field not direclty related to the form.</p></div>
	</div>
</div>
		