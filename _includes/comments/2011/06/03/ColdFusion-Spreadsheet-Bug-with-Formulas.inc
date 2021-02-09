
<div class="comment" id="c_1713732969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732969">1</a> by Dan G. Switzer, II
		posted on 6/3/2011 at 10:24 PM
		</div>
		<div class="comment_text"><p>My guess would be either (1) he's using a function in the formula that's not excepted or (2) the formula is throwing an exception in the one of the Java libraries and just returning the formula when the exception occurs. The formula's complex enough that it would be easy to have an error in their somewhere--even if the formula is technically correct, some of the data in the cells may be causing an issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732972">2</a> by Raymond Camden
		posted on 6/3/2011 at 10:38 PM
		</div>
		<div class="comment_text"><p>But when viewed in Excel, his formula works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732971">3</a> by Brian
		posted on 6/4/2011 at 12:51 AM
		</div>
		<div class="comment_text"><p>FYI:  tried that formula in an xls with Nadel's POI on CF8, was able to pull both the data value and the formula without a problem.  As I obviously had no valid data in the referneced cells, I got a '0' for the value (which is what the spreadsheet displayed) and the formula for the GetCellFormula call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732970">4</a> by Raymond Camden
		posted on 6/4/2011 at 12:57 AM
		</div>
		<div class="comment_text"><p>Thanks for testing that Brian. I pinged the original reader to see if he can try too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732974">5</a> by John Gerald
		posted on 6/4/2011 at 7:33 PM
		</div>
		<div class="comment_text"><p>Just tried Ben Nadel's POI using Coldfuion 9 and it works like a charm! Thanks Raymond for posting this and thanks to both Dan and Brian for your input.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732975">6</a> by Mark
		posted on 6/7/2011 at 5:35 AM
		</div>
		<div class="comment_text"><p>I don't have a solution but an explanation of why it wont show the value for the formula using spreadsheetGetCellValue.  After some testing I can confirm that spreadsheetGetCellValue does not support addins/user made functions.</p><p>EOMONTH in older version of Excel was part of analysis tool pack and not built into the base excel formulas.  While in the newest excel version you can use it without the analyst toolpack my guess is spreadsheetGetCellValue still don't recognized it as a excel function.</p><p>If you remove all references to EOMONTH from formula it will work as expected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732976">7</a> by Raymond Camden
		posted on 6/7/2011 at 5:37 AM
		</div>
		<div class="comment_text"><p>Wow Mark. Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732977">8</a> by Howard Fore
		posted on 7/14/2011 at 10:04 PM
		</div>
		<div class="comment_text"><p>Not so fast. I'm getting the formula instead of a value where there's no custom anything in the formula: PERCENTILE(C$14:C$134,0.9)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732979">9</a> by Raymond Camden
		posted on 7/24/2011 at 10:54 PM
		</div>
		<div class="comment_text"><p>Well crap then. :\</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732981">10</a> by Dave Phillips
		posted on 11/21/2012 at 9:06 PM
		</div>
		<div class="comment_text"><p>Does anyone know if this bug is fixed in ColdFusion 10 ?</p></div>
	</div>
</div>
		