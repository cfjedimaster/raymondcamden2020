
<div class="comment" id="c_1713622398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622398">1</a> by Dan G. Switzer, II
		posted on 11/4/2005 at 3:02 AM
		</div>
		<div class="comment_text"><p>Why not just treat the range string as a hyphenated list. Then you can use the first and second numbers as the from and to values in a loop:</p><p>[cfset sRange = "1999-2005"]<br>[cfloop index="i" from="#listFirst(sRange, "-")#" from="#listLast(sRange, "-")#" step="1"]<br>  Year [cfoutput]#i#[/cfoutput]&lt;br /&gt;<br>[/cfloop]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622400">2</a> by Raymond Camden
		posted on 11/4/2005 at 3:13 AM
		</div>
		<div class="comment_text"><p>Ah, CF - The Language of 10,000 Ways to Skin the Cat. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622401">3</a> by Christopher Wigginton
		posted on 11/4/2005 at 8:19 PM
		</div>
		<div class="comment_text"><p>AS mentioned previously on Pete Freitag's blog, the "from" and "to" attributes will take dates as well and through some creative function use you can loop over both date and time.  I put some examples of this on my blog <a href="http://disq.us/url?url=http%3A%2F%2Fwiggy.coldfusionjournal.com%3As07PXgGBu8bqbF_Q-5NGV0gAMJE&amp;cuid=3321886" rel="nofollow noopener" title="http://wiggy.coldfusionjournal.com">http://wiggy.coldfusionjour...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622402">4</a> by johnb
		posted on 11/7/2005 at 5:10 PM
		</div>
		<div class="comment_text"><p>you can also loop using full dates, eg 01/01/2005 to 31/12/2005 in the same way without needing to convert them :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622403">5</a> by Christopher Wigginton
		posted on 11/7/2005 at 9:00 PM
		</div>
		<div class="comment_text"><p>Looping on full dates in the from and to attributes will loop in day increments unless you create a timespan for the step value equal to a year, which doesn't take into consideration if the range spans a leap year.</p></div>
	</div>
</div>
		