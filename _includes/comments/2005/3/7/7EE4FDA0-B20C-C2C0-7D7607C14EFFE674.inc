
<div class="comment" id="c_1713617492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617492">1</a> by David
		posted on 3/8/2005 at 4:44 AM
		</div>
		<div class="comment_text"><p>Very odd that this didn't get caught in the beta...In fact, very odd that most of the CFFORM bugs you found weren't fixed pre-release...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617494">2</a> by Raymond Camden
		posted on 3/8/2005 at 5:00 AM
		</div>
		<div class="comment_text"><p>Well, from personal experience I can attest to the fact that MACR's QA for CF is very extensive. Obviously they can't catch everything though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617496">3</a> by Andy Allan
		posted on 3/8/2005 at 3:41 PM
		</div>
		<div class="comment_text"><p>Excellent stuff once again Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617497">4</a> by Andrew
		posted on 4/5/2005 at 1:31 PM
		</div>
		<div class="comment_text"><p>With checkboxes in CFFORM, the FORM fields contain true/false, not the 'value' if checked as with HTML forms.</p><p>Is there a way to get the value returned to the server?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617499">5</a> by John Farrar
		posted on 10/2/2005 at 11:35 PM
		</div>
		<div class="comment_text"><p>OK... how about putting checkboxes in CFFormGroup sections? It seems they don't run for me there. I have changed the type to "radio" and the form loads, but if it is changed back to "checkbox" then it doesn't work. ARGHH... you would think I would have found opportunity to find that before they beta ended. Perhaps the guys on the beta could have verified it and then the update would have had a fix for that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617500">6</a> by John Farrar
		posted on 10/2/2005 at 11:44 PM
		</div>
		<div class="comment_text"><p>To be more specific... it's nested... inside a <br>CFForm "flash"... <br>  CFFormGroup "Tab..." ... <br>    CFFromGroup "page"<br>      CFLoop query=""</p><p>And for some reason the flash doesn't come up... never loads but if the type is changed to radio then it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617498">7</a> by Raymond Camden
		posted on 10/3/2005 at 5:22 PM
		</div>
		<div class="comment_text"><p>When you say they don't show up, you mean they just don't render? Can you post your full code, or a simpler version of it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617504">8</a> by John Farrar
		posted on 10/4/2005 at 12:48 AM
		</div>
		<div class="comment_text"><p>Got the issue figured out... WHEW!!! You cannot have two fields with the same name if they are checkbox type. In HTML you do this and it gives you back a list of all the checked items. Heh... should be labeled "DON'T TRY THIS IN FLASH FORMS". That took care of the issue just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617501">9</a> by Andy Carter
		posted on 7/28/2007 at 7:48 AM
		</div>
		<div class="comment_text"><p>Thanks Ray- worked perfectly!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617502">10</a> by Monique Boea
		posted on 10/26/2010 at 8:27 PM
		</div>
		<div class="comment_text"><p>What if I have multiple checkboxes. Can this work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617505">11</a> by Monique Boea
		posted on 10/26/2010 at 8:34 PM
		</div>
		<div class="comment_text"><p>I figured it out :</p><p>&amp;&amp; !hips.selected &amp;&amp; !rcr.selected &amp;&amp; !lab.selected &amp;&amp; !<a href="http://disq.us/url?url=http%3A%2F%2Fbio.select%3AKcGZyELw0oaMyupLaU4ippQtoKw&amp;cuid=3321886" rel="nofollow noopener" title="bio.select">bio.select</a></p></div>
	</div>
</div>
		