
<div class="comment" id="c_1713708887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708887">1</a> by Scott P
		posted on 9/30/2008 at 8:04 PM
		</div>
		<div class="comment_text"><p>nice - "Sounded weird to me, but maybe that's what the Wall Street folks have been doing lately"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708886">2</a> by Edgar Soto
		posted on 9/30/2008 at 11:42 PM
		</div>
		<div class="comment_text"><p>Agreed. A little weird.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708889">3</a> by Tim
		posted on 10/1/2008 at 12:09 AM
		</div>
		<div class="comment_text"><p>Your friends needs to make sure he gets paid before this fishy business rule brings down their business. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708888">4</a> by Troy L Allen Sr
		posted on 10/1/2008 at 5:31 PM
		</div>
		<div class="comment_text"><p>I was just discussing CF's lack of a good "Round To X Decimal Places" function. We had run into the classic "internal FPU rounding error", but we were dealing with Money so we needed it properly rounded to 2 decimal places. We ended up doing "myMoney = ROUND(myMoney*100)/100", but of course that seems kind of kludgy. There are several ways of getting to Integers (Round(), Int(), Fix(), Ceiling(), etc), but none that deal with precision of a decimal place. And unfortunately both NumberFormat() and DollarFormat() simply truncate off any characters past the mask with no rounding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708892">5</a> by Alan McCollough
		posted on 10/1/2008 at 8:35 PM
		</div>
		<div class="comment_text"><p>Well, he could Nutritional Information rounding; .999999 calories = 0 CALORIES!  1.99999 servings in a container = 1 Serving!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708893">6</a> by Alan McCollough
		posted on 10/1/2008 at 8:42 PM
		</div>
		<div class="comment_text"><p>Actually, I just remembered an interesting rounding issue I ran into last week. I have a calendaring app here, and modified it so that users can upload events using an Excel file as a template. I'm using Ben Nadel's POI cfc to work with the Excel files (works awesome). Thing is, a date/time field in Excel, after being mangled through POI into a query, returns a floating-point numeric representation of the date, using "time begins in 1900-01-01" format.</p><p>Now the weird thing is, rounding definately messes up the time! If somebody has a date/time in Excel of "2009/04/01 4:00 pm", it'll translate in CF as "2009/04/01 3:59:59 pm". I slapped together a UDF and submitted it to <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%3A_xxzCNK-l1o46U5-IF400HiKZ0A&amp;cuid=3321886" rel="nofollow noopener" title="cflib.org">cflib.org</a> to correct for this quirk of rounding when handling date/times.</p><p>So yeah, rounding (and floating-point arithmetic in general) is not without it's quirks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708891">7</a> by Jim Ruzicka
		posted on 10/3/2008 at 12:16 AM
		</div>
		<div class="comment_text"><p>That is a bit strange, i have dealt with rounding where if there is any remaining decimals always round up, in which case I also had to look at the number as a string and did something very similar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708890">8</a> by Hussein
		posted on 10/3/2008 at 11:20 PM
		</div>
		<div class="comment_text"><p>I've never heard of anyone rounding numbers like that before. Weird indeed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708894">9</a> by Armando
		posted on 1/16/2010 at 12:55 AM
		</div>
		<div class="comment_text"><p>Thanks a lot, about the comment above its nor weird at all, specially talking about wight units and shippings, for example UPS consider 1.1 still like 1 Kilo and 1.2 like 2 Kilos.</p><p>A.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708896">10</a> by Randy L. Smith
		posted on 1/30/2014 at 10:55 AM
		</div>
		<div class="comment_text"><p>Thanks, Ray!</p><p>That gave me the mindset I needed to figure out how to round up to the next 10.  I am writing a little conversion from Access 2010 to SQL Server 2012 and needed to make sure the new varchar columns would be big enough for the copied-in data.</p><p>Once I get "y" (length of longest string in the field), I can get the next higher column size in increments of 10 via    #ceiling(y/10)*10#</p></div>
	</div>
</div>
		