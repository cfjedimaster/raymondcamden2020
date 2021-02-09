
<div class="comment" id="c_1713685430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685430">1</a> by Doug Hughes
		posted on 9/5/2008 at 12:08 AM
		</div>
		<div class="comment_text"><p>To complicate this more, try using a 32 character string made up of numbers.  (I only say 32 because that's where it's stung me recently.  Other strings are probably impacted too)</p><p>IE: 12345678901234567890123456789012</p><p>This gets converted to scientific notation!  I've never been able to get the format=plain recommendation to solve this issue but I've seen others who have.  I decided to just prepend a space to the string and hope no one notices.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685433">2</a> by Raymond Camden
		posted on 9/5/2008 at 12:20 AM
		</div>
		<div class="comment_text"><p>This was the bug/fix I wasn't ever able to get working for you. Has anyone else been able to repro the issue you had? (I mean my fix to the issue not working for you - not the original issue.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685456">3</a> by Giedrius
		posted on 9/5/2008 at 3:35 AM
		</div>
		<div class="comment_text"><p>Thanks for looking into this. I guess I need to convert my current bind statment for cfgrid bind="cfc:dir.services.subenditem.getPartPubData({cfgridpage},{cfgridpagesize},{cfgridsortcolumn},{cfgridsortdirection})" to use URL bind instead. So i used  bind="url:/dir/services/subenditem.cfc?method=getPartPubData&amp;returnformat=plain&amp;page={cfgridpage}&amp;pagesize={cfgridpagesize}&amp;sortcolumn={cfgridsortcolumn}&amp;sortdirection={cfgridsortdirection})" which seemed to work OK, but error occurs: Only simple and XML variables may be returned when the returnFormat is plain.</p><p>From Help file:</p><p># plain: ensure that the return value is a type that ColdFusion can convert directly to a string, and return the string value without serialization. Valid types include all simple types, such as numbers, and XML objects. If the return value is a complex type, such as an array, or a binary value, ColdFusion generates an error. If you specify a returntype attribute, its value must be any, boolean, date, guid, numeric, string, uuid, variablename, or XML; otherwise, ColdFusion generates an error.</p><p>So I am still stuck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685455">4</a> by Giedrius
		posted on 9/5/2008 at 4:34 AM
		</div>
		<div class="comment_text"><p>I guess the simplest solution is the best solution for me. I amde my select statement to be SELECT ' '+[PARTPUB_NUM] AS PARTPUB_NUM, ... which prepend a space. As a result leading zeroes are preserved, too.</p><p>On grid update I jusst trim the value, which trims the leading space. So in the circle it goes and it seems to work. I just wish we did not have to do things like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685461">5</a> by Raymond Camden
		posted on 9/5/2008 at 4:47 AM
		</div>
		<div class="comment_text"><p>Ah, in my example it was just a cfdiv, not a complex UI item. Sorry I missed that! But I'm glad you got it working at least.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685462">6</a> by Alec
		posted on 1/24/2009 at 1:33 AM
		</div>
		<div class="comment_text"><p>I've been spending a lot of time trying to fix this issues and I also have googled the problem hoping to find solution to this situation with no success. <br>When I found this site and read Giedrius I tired to do the same by adding a spece on the select statement but unfortunately the leadng zeroes are still cut by cfgrid.<br>I'm so frustrated with Coldfusion, why would someone be so dumb creting cfgrid and to cut out leading zeroes especially when the datatype is set as varchar at the db level?????<br>I tired everything, none is working including bind:url<br>Coldfusion is just plain stupid!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685463">7</a> by Raymond Camden
		posted on 1/24/2009 at 1:39 AM
		</div>
		<div class="comment_text"><p>Well Alec, I definitely appreciate your frustration, but I'll disagree that CF is stupid. All platforms have issues, and this is just one of CF's.</p><p>Alec, if you modfify Giedrius solution to add a + in front, does it work? (Don't worry if you see a + in the grid, we can fix that next.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685464">8</a> by Raymond Camden
		posted on 1/24/2009 at 1:40 AM
		</div>
		<div class="comment_text"><p>Actually, a + may be bad. Try +, but if it doesn't work, try something like @ or #.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685466">9</a> by Seth
		posted on 6/17/2009 at 10:06 PM
		</div>
		<div class="comment_text"><p>Hey Ray, here's a weird one for you, if you bind a cfinput and a cfdiv side by side to a function that returns a string with a leading zero (in my case the zip code 02664) the cfinput will have a completely different result (and four digits to boot)!  The cfdiv works as expected though.  The right value is coming back from the cfc, but CF decides to change the result completely if it is going into a cfinput.</p><p>Strange!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685465">10</a> by Raymond Camden
		posted on 6/18/2009 at 3:17 PM
		</div>
		<div class="comment_text"><p>@Seth: I'd log a bug report on that. (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%29%3AY-s64tU6LPZpDhOfTUumF_zQQ4k&amp;cuid=3321886" rel="nofollow noopener" title="www.adobe.com/go/wish)">www.adobe.com/go/wish)</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685467">11</a> by Seth
		posted on 6/18/2009 at 6:00 PM
		</div>
		<div class="comment_text"><p>Consider it done :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685469">12</a> by Tim Garver
		posted on 10/9/2009 at 7:26 AM
		</div>
		<div class="comment_text"><p>Not sure how you guys are doing it. But I basically found just saving the entries with leading zeros with a leading space.</p><p>Seams the Json return format is chopping off the leading zero unless there is a space in front of it.</p><p>Hope this helps someone</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685471">13</a> by Ronne Pitts
		posted on 5/13/2011 at 8:59 PM
		</div>
		<div class="comment_text"><p>Just discovered that by adding the securejson="true" attribute to the CFFUNCTION tag, the leading zeros are preserved on the return, at least in CF9.0,1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685468">14</a> by Jeremy
		posted on 5/20/2011 at 6:41 PM
		</div>
		<div class="comment_text"><p>As a side note I've been resolving this issue by padding something like "GETRIDOFME" on the json return and just using the replace function on the javascript side on the return.</p><p>document.getElementById('fieldname').value = results[0][3].replace('GETRIDOFME','');</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685470">15</a> by Raymond Camden
		posted on 5/20/2011 at 6:54 PM
		</div>
		<div class="comment_text"><p>Just to be anal, I'd go with a smaller string - just to make the network traffic a bit nicer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685472">16</a> by Alec
		posted on 9/9/2011 at 11:29 PM
		</div>
		<div class="comment_text"><p>What if the cfc is in a different folder called cfcomponents? I tried:<br>&lt;cfselect name="ADVCITIZENSHIP" bind="url:cfcomponents/AjaxStuffs.cfc?method=getADVCit&amp;returnformat=plain" bindonload="true"/&gt;</p><p>I got a vertical error window that says: Error parsing JSON response. Please help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685474">17</a> by Raymond Camden
		posted on 9/9/2011 at 11:30 PM
		</div>
		<div class="comment_text"><p>Why did you specify returnFormat=plain in the URL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685473">18</a> by Alec
		posted on 9/13/2011 at 4:32 PM
		</div>
		<div class="comment_text"><p>I used the following and I lost the leading zeros:<br>&lt;cfselect name="ADVCITIZENSHIP" bind="cfc:cfcomponents.AjaxStuffs.getADVCit()" bindonload="true"/&gt;<br>So I thought I would try using url instead &amp; hoping I could have a different result</p></div>
	</div>
</div>
		
<div class="comment" id="c_1969533620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1969533620">19</a> (In reply to <a href="#c_1713685471">#13</a>) by Dwayne
		posted on 4/15/2015 at 9:14 PM
		</div>
		<div class="comment_text"><p>Awesome</p></div>
	</div>
</div>
		