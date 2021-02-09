
<div class="comment" id="c_1713616542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616542">1</a> by Rob Brooks-Bilson
		posted on 11/17/2004 at 12:47 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Check out Apache POI, it's much better at handling the formatting, and the resulting files are *much* smaller since they are binary, and not juset HTML/XML files with an .xls extension.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616538">2</a> by dave ross
		posted on 11/17/2004 at 12:59 AM
		</div>
		<div class="comment_text"><p>Yup, that's one of the reasons why I originally looked at POI... because people wanted specially formatted numbers.</p><p>Ray, if you need guidance on the subject, I wrote 2 entries about it:</p><p>intro: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.d-ross.org%2Findex.cfm%3Fobjectid%3D9C65ED5A-508B-E116-6F4F7F38C6AE167C%3A_pslb1nShkKDVI-VCbsnv6ncj_U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.d-ross.org/index.cfm?objectid=9C65ED5A-508B-E116-6F4F7F38C6AE167C">http://www.d-ross.org/index...</a></p><p>more: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.d-ross.org%2Findex.cfm%3Fobjectid%3D9C65ECEC-508B-E116-6F8A9F878188D7CA%3AR6NqBNsRI0HWKHu9X7PWrVI_bp8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.d-ross.org/index.cfm?objectid=9C65ECEC-508B-E116-6F8A9F878188D7CA">http://www.d-ross.org/index...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616539">3</a> by rtrout
		posted on 11/17/2004 at 3:58 AM
		</div>
		<div class="comment_text"><p>Hi Ray - This is pretty normal behaviour for Excel. By quoting the number you are telling Excel it is a Text value, rather than 'General' (which tries to identify the data type and would wrongly identify it as a number in this case). Using the single quote does include it in the data as you say, and in some situations Excel does hide it although it is always kept with the value. IMHO what you have done is better than the single quote.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616541">4</a> by Raymond Camden
		posted on 11/17/2004 at 5:18 PM
		</div>
		<div class="comment_text"><p>rtrout: I -was- using quotes, ie "xxxxx", "xxxx", etc. But it still suppressed the leading zeros.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616540">5</a> by Douglas Knudsen
		posted on 11/17/2004 at 6:48 PM
		</div>
		<div class="comment_text"><p>Seems you can use some Excel funtions, eh?  I use =TEXT('#myfooval#') to handle leading zeroes or padding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616543">6</a> by nravo
		posted on 11/25/2004 at 7:55 PM
		</div>
		<div class="comment_text"><p>hey Ray, are you saying just output the Zip without an extension?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616547">7</a> by Raymond Camden
		posted on 11/29/2004 at 5:59 PM
		</div>
		<div class="comment_text"><p>nravo - the zip was a simple 5 digit zip. I was trying to ensure that 01234 would come out as 01234, not 1234. Again though I did find a way to force it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616548">8</a> by Jose
		posted on 7/18/2008 at 4:41 AM
		</div>
		<div class="comment_text"><p>I had a hell of a time with a similar issue and I should repeat the popular frase "I hate microsoft"...<br>A warning to those downloading to excel when you have a ton of records and combine number columns with text columns with numbers padded as noted here (i.e. 001234) it turns out that at a certain point excel choked and begun importing numbers as text in those number only columns. (for some reason my magic row number was 2325)</p><p>For those not so savy of my users who would inocently sum up those columns, the totals would not be the same unless you would convert the text to numbers!... and of course there was no consistecy to this behaviour... so my solution was to output the number columns as follows:</p><p>&lt;td style="<a href="http://disq.us/url?url=http%3A%2F%2Fvnd.ms%3ARIbA8soTuCEGDF4hWftV-Un4ZfU&amp;cuid=3321886" rel="nofollow noopener" title="vnd.ms">vnd.ms</a>-excel.numberformat:##,######,######,####0.00"&gt;#MyValue#&lt;/td&gt;<br>(note the escaping # for the cfoutput tag)</p><p>and then for those padded number columns I ended up doing something similar to what Ray mentioned</p><p>MyValue = "=""#str#""";</p><p>anyway... you would hope one could use this trickery for more noble things in life...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616544">9</a> by Deepak
		posted on 10/1/2009 at 11:21 PM
		</div>
		<div class="comment_text"><p>Thanks Jose for providing the style I was looking for to provide trailing zeroes after decimal :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616552">10</a> by Neo Ramos
		posted on 9/23/2010 at 9:35 PM
		</div>
		<div class="comment_text"><p>I had the same issue with Excel treating a zip code as a number and thus removing the leading zeroes.  I tried everything, until I asked a coworker who informed me about adding a CSS format to the zip code column.  <br>Microsoft has some CSS directives that work with office produts such as excel.  <br>For instance, in my case, I added style="mso-number-format:\@" to the &lt;td&gt; and that hinted Excel to treat the column as text, thereby preserving the leading zeroes.  <br>The details are <a href="http://disq.us/url?url=http%3A%2F%2Fagoric.com%2Fsources%2Fsoftware%2FhtmltoExcel%3AGJivZ9XVs5hn8xfWYDNqUBjm5oI&amp;cuid=3321886" rel="nofollow noopener" title="http://agoric.com/sources/software/htmltoExcel">http://agoric.com/sources/s...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616546">11</a> by Raymond Camden
		posted on 9/23/2010 at 9:49 PM
		</div>
		<div class="comment_text"><p>Well dang - that is a great tip. Thank you Neo!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616551">12</a> by Avern
		posted on 1/13/2011 at 8:03 PM
		</div>
		<div class="comment_text"><p>Thank you so much for the tip(s)!  They were extremely helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616550">13</a> by Don
		posted on 6/14/2011 at 6:33 PM
		</div>
		<div class="comment_text"><p>Neo, thanks for that information, just what I was looking for and works perfectly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616545">14</a> by Kamran Shafi
		posted on 1/16/2013 at 9:22 PM
		</div>
		<div class="comment_text"><p>Just wanted to add to Neo's comments that if there is a specific format you need you can do  <br>mso-number-format:'00000'<br>I was trying to fix leading zeros in a Zip Code and did notice that using Neo's approach added a green triangle to the top left of the cell (MS info icon) whereas using '00000' did not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616554">15</a> by Gary Myers
		posted on 2/15/2013 at 6:15 PM
		</div>
		<div class="comment_text"><p>Not to over simplify but I just put a space &amp;nbsp; next to the variable ie. #var# &amp;nbsp; and Excel sees as literal and puts the zero(s).</p></div>
	</div>
</div>
		