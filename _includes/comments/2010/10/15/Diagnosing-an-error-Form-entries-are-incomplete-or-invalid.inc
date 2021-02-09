
<div class="comment" id="c_1713727006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727006">1</a> by David R. McGraw
		posted on 10/15/2010 at 7:03 PM
		</div>
		<div class="comment_text"><p>Interesting... I never have, not never wil use CF's form auto anythings, but none the less, this is interesting, good find.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727007">2</a> by Raymond Camden
		posted on 10/15/2010 at 7:07 PM
		</div>
		<div class="comment_text"><p>And that's kind of the point - he wasn't using it either - but it definitely reared it's ugly head.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727011">3</a> by johans
		posted on 10/16/2010 at 12:28 AM
		</div>
		<div class="comment_text"><p>@Ray - interesting - so to confirm in CF9 the application serversideFormValidation setting affects all forms?</p><p>The CF9 docs say cfform specifically - "If no, disables validation on cfform fields when the form is submitted"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727009">4</a> by Raymond Camden
		posted on 10/16/2010 at 12:29 AM
		</div>
		<div class="comment_text"><p>I think it would be better written as -</p><p>If form data is sent to your server (who cares if it is from your server or some remote POST) then validation will be ignored.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727010">5</a> by John Schortz
		posted on 6/2/2012 at 7:20 PM
		</div>
		<div class="comment_text"><p>Came across this page from a Google search on "coldfusion server error form entries are incomplete or invalid".  When I saw your reference to "_required" I immediately knew that was my problem!</p><p>While I didn't read passed the second paragraph, I'm sure the rest of the article was great too ;-)  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727012">6</a> by Raymond Camden
		posted on 6/2/2012 at 7:23 PM
		</div>
		<div class="comment_text"><p>You wouldn't be the first tech person to skim. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3232544920">
	<div>
		<img src="https://disqus.com/api/users/avatars/pinto_xavier.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3232544920">7</a> (In reply to <a href="#c_1713727010">#5</a>) by pinto xavier
		posted on 3/31/2017 at 12:54 AM
		</div>
		<div class="comment_text"><p>same</p></div>
	</div>
</div>
		
<div class="comment" id="c_4536774923">
	<div>
		<img src="https://disqus.com/api/users/avatars/jeffreybender.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4536774923">8</a> by Jeffrey Bender
		posted on 7/12/2019 at 12:16 PM
		</div>
		<div class="comment_text"><p>Thank you Ray!! Had a field XXX_DATE that was tripping the error. I saw it and was like, what is this? I added this.serverSideFormValidation = false; to my cfc and I'm a happy coder!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4536779692">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4536779692">9</a> (In reply to <a href="#c_4536774923">#8</a>) by Raymond Camden
		posted on 7/12/2019 at 12:21 PM
		</div>
		<div class="comment_text"><p>Happy this old post helped! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4730788761">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_XkIQ17JClk.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4730788761">10</a> by Parag Shah
		posted on 12/20/2019 at 1:56 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, I have a similar issue with form field named with xxx_Required which triggers the alert on form submission. I am using HTML form instead of CFForm. I set this.serverSideFormValidation to 'false' in my save function in component, but the alert still occurs. I am using CF 2018.</p></div>
	</div>
</div>
		