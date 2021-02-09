
<div class="comment" id="c_1713668140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668140">1</a> by Dav R
		posted on 7/10/2007 at 11:43 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>What happens if we input a corrupted PDF file as an input to this isPDFFile() function?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668146">2</a> by Raymond Camden
		posted on 7/10/2007 at 5:10 PM
		</div>
		<div class="comment_text"><p>Define "corrupted". I can say isPDFFile goes beyond just an extension check. I renamed book.pdf to book.doc and it still reported true for isPDFFile.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668147">3</a> by Dav R
		posted on 7/11/2007 at 10:47 AM
		</div>
		<div class="comment_text"><p>Thanks Ray...</p><p>In my case the pdf that I downloaded was terminated due to some technical faults.. Lets assume it's size now is 650 KB (which is supposed to be 1.3 MB)..</p><p>Thanks Again for replying Ray!...</p><p>Dav R</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668148">4</a> by Raymond Camden
		posted on 7/11/2007 at 3:48 PM
		</div>
		<div class="comment_text"><p>In that case I have no idea. :) If I had to guess, I'd say... maybe. Consider:</p><p>Imagine file type X is defined as having a certain marker in the file at positions A, B, and C. If those positions were in the beginning of the file, then a half-downloaded file would still be valid.</p><p>If file type Y required a marked at position A and B and B was at the end, then it would fail.</p><p>Make sense? I'd just try it and see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668143">5</a> by Dav R
		posted on 7/13/2007 at 10:17 AM
		</div>
		<div class="comment_text"><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668142">6</a> by Charlie Arehart
		posted on 7/23/2007 at 11:47 PM
		</div>
		<div class="comment_text"><p>Great stuff as always, Ray. I'd like to add a couple of points of clarification for others reading this in the future, as I explored these options.</p><p>First, the way you get a PDF into an object to test with isPDFObject is not with CFFILE (as some may suppose), but rather with CFPDF action="read". The function gives a result of false if what you point to is a variable created with CFFILE action="read" or even "readbinary").</p><p>Along the same lines, I was intrigued by Ray's observation about not needing to use expandpath any more. I wondered if it extended beyond this CFPDF Source attribute, and I tried it in the very CFFILE read I tested. It did not work. As before, without expandpath it looks for the named file in the gettempdirectory().</p><p>I don't make either of these comments to denigrate at all what Ray's written. It's awesome, as always, and I point people to these CF8 entries all the time. Just sharing some observations to help others avoid a couple mistakes I did as I tried things out. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668145">7</a> by Raymond Camden
		posted on 7/23/2007 at 11:51 PM
		</div>
		<div class="comment_text"><p>expand path: Yeah, I've made this observation a bit later in the series I think - that it is REAL nice that pdf/image stuff supports this - and more probably, but NOT cffile. Hopefully they will change that later on.</p></div>
	</div>
</div>
		