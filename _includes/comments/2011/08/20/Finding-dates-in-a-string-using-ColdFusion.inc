
<div class="comment" id="c_1713734709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734709">1</a> by Michael Zock
		posted on 8/21/2011 at 12:31 AM
		</div>
		<div class="comment_text"><p>It depends on how versatile you want the whole thing to be. <br>The 1-12 and 1-31 limitation can already be done inside the regular expression as well, but once the source adds dates with (international) formats like YYYY-MM-DD or DD.MM.YYYY or just two-digit years there's a lot more work left to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734705">2</a> by Adam Cameron
		posted on 8/21/2011 at 1:31 PM
		</div>
		<div class="comment_text"><p>Hi Michael: I can't see a way of dealing with the fact 29/2/2012 is a date but 29/2/2013 is not.  So I think one is still going to need to check each match anyhow, so there's perhaps a balance to be reached between complexity of regex and expectations of false positives (which are then dealt with via the date check in the loop)?</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734708">3</a> by Tom Chiverton
		posted on 8/22/2011 at 1:23 PM
		</div>
		<div class="comment_text"><p>Plus, certainly in the past, I've had issues with ambiguous dates  (such as 2/3/99) being parsed US style rather than UK style, despite the server locale.<br>It's a nasty area...</p><p>BTW did you mean to except single digit years ? \d{1,2}/\d{1,2}/\d{4}|\d{2}/ might be a better expression to capture just 'natural' style possible dates.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734706">4</a> by Raymond Camden
		posted on 8/22/2011 at 2:23 PM
		</div>
		<div class="comment_text"><p>Tom - I think US/UK could be ignored if you assumed all the dates mentioned in text applied to your current locale. (Or the current locale as set by setLocale.)</p><p>Good point on the {} range.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734710">5</a> by Ed "SteelValor" Sals
		posted on 8/22/2011 at 4:54 PM
		</div>
		<div class="comment_text"><p>Thanks Ray! I had been banging my head on this problem for two full days until I got the sense to contact a Jedi. =]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734713">6</a> by Josh Curtiss
		posted on 9/13/2011 at 10:11 PM
		</div>
		<div class="comment_text"><p>For fun and out of desperation to procrastinate, I came up with this RegEx:</p><p>(\d+/\d+/\d+)|((Jan(uary)?|Feb(ruary)?|Mar(ch)?|Apr(il)?|May|Jun(e)?|Jul(y)?|Aug(ust)?|Sep(t|tember)?|Oct(ober)?|Nov(ember)?|Dec(ember)?)\s*\d+(st|nd|rd|th)?,\s*\d{4})|(\d+-\w{3}-\d+)</p><p>In addition to mm/dd/yy or mm/dd/yyyy etc, it also supports stuff like "Aug 1, 2010" and "September 3rd, 2010" as well as DD-MMM-YY.</p><p>ColdFusion will recognize all of those with the exception of the "3rd", "2nd", etc, so doing a quick REReplaceNoCase takes care of that exception:</p><p>REReplaceNoCase(w,"(st|nd|rd|th)?,",",")</p><p>Ok I guess I should get back to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734715">7</a> by Raymond Camden
		posted on 9/13/2011 at 10:27 PM
		</div>
		<div class="comment_text"><p>That's pretty epic. :)</p></div>
	</div>
</div>
		