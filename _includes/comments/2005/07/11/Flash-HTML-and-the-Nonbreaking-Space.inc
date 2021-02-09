
<div class="comment" id="c_1713619001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619001">1</a> by Lejnieks
		posted on 7/12/2005 at 12:36 AM
		</div>
		<div class="comment_text"><p>Very common issues, youll run into this alot more with similar things with flash. We now made a subroutine (class) that cleans all our "flash" xhtml text and then, for lack of a better term, uncleans it for editing or for display in html.</p><p>we used a basic mix of str_replace in php and other good stuff to do this, now every entry on runtime gets this treatment depending on what the display type is.</p><p>cheers, good note.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619000">2</a> by PaulC
		posted on 7/12/2005 at 1:20 AM
		</div>
		<div class="comment_text"><p>Consulting The Book of Moock Appendix E pg. 995, the br tag is supported in textfields.</p><p>Odd.</p><p>On a similar note, I had to use ColdFusion(6.1 and 7) with a loadVars object (don't ask) recently, and discovered that even with whitespace management enabled, and the use of Trim/RTrim, there was still a space at the end of my string.</p><p>Is this a bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619009">3</a> by PaulC
		posted on 7/12/2005 at 1:22 AM
		</div>
		<div class="comment_text"><p>Doh! I just realized you said non-breaking space. My bad.</p><p>p.998 lists it as being supported, but only through the .htmlText property, not .text, even if the textfield is html enabled.</p></div>
	</div>
</div>
		