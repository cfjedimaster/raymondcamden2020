
<div class="comment" id="c_1713673418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673418">1</a> by Matt Osbun
		posted on 10/19/2007 at 4:26 PM
		</div>
		<div class="comment_text"><p>Quick comment on this.</p><p>If you are using a select box to update a spry:region, this might not work in IE, depending on how you implement the select box.</p><p>If you put your spry:repeat on the option tags within the select, and a spry:setrow on the option tag, the region will not update in IE.  Apparently (this is conjecture- if someone knows for sure, please chime in) FireFox allows the select box's onChange event to pass down to the option tag, while IE will not.  A co-worker ran into this yesterday.</p><p>We think that if he uses spry:repeatchildren and spry:setrow on the select box, then the region will get updated as expected.</p><p>Anyway, check your browser compatibility on this one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673416">2</a> by sal
		posted on 10/20/2007 at 8:48 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Gotta a spry question I failed to remember to ask, at the last breezo you did, I'm assuming since these Spry "attributes" are embeded within XHTML tags, that an application leveraging Spry doesn't validate with the W3C as valid XHTML...?</p><p>cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673417">3</a> by Raymond Camden
		posted on 10/20/2007 at 8:55 PM
		</div>
		<div class="comment_text"><p>Check it out:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Farticles%2Fbest_practices%2Fvalidating_spry.html%3An7z3VyLwgchlvc9M1F11SkEz-i4&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/articles/best_practices/validating_spry.html">http://labs.adobe.com/techn...</a></p></div>
	</div>
</div>
		