
<div class="comment" id="c_1713616258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616258">1</a> by ksuh
		posted on 10/5/2004 at 9:33 PM
		</div>
		<div class="comment_text"><p>Try this:</p><p>#599*0.175 eq 104.825#</p><p>Doesn't work.  Welcome to the wide world of floating point numbers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616253">2</a> by Gus
		posted on 10/6/2004 at 12:45 PM
		</div>
		<div class="comment_text"><p>It looks like a bug in the rounding used in DecimalFormat().</p><p>Adding .001 to the variable VAT rounds correctly.</p><p>&lt;cfset VAT = (599 * 0.175) + .001&gt;<br>&lt;cfset VAT2 = "104.825"&gt;<br>&lt;cfoutput&gt;<br>  DecimalFormat(104.825)=#DecimalFormat(104.825)#&lt;br&gt;<br>  DecimalFormat(vat)=#DecimalFormat(vat)#&lt;br&gt;<br>  DecimalFormat(vat2)=#DecimalFormat(vat2)#&lt;br&gt;<br>  Vat=#vat#&lt;br&gt;<br>  Vat2 = #vat2#<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616262">3</a> by Bryan F. Hogan
		posted on 10/6/2004 at 3:58 PM
		</div>
		<div class="comment_text"><p>&lt;cfset VAT = val(599 * 0.175)&gt;</p><p>works just fine. still a bug with decimal format.</p></div>
	</div>
</div>
		