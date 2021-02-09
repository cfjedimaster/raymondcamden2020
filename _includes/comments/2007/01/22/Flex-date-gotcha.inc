
<div class="comment" id="c_1713661358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661358">1</a> by Jen
		posted on 1/23/2007 at 12:25 AM
		</div>
		<div class="comment_text"><p>Hmm... good tip! I am in the habit of formatting the date within the sql query in the cfc (i.e. select date_format(myDate,'%c/%e/%Y') as myFormattedDate from myTable) ... any pro's or con's either way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661363">2</a> by Raymond Camden
		posted on 1/23/2007 at 12:36 AM
		</div>
		<div class="comment_text"><p>I normally say leave the data alone and let the client make it pretty. But I've done what you have done for AJAX apps as I've not found a nice way to format in JavaScript. (Well, format is ok, but parsing strings to dates is a pain for me.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661374">3</a> by Kim Dobson
		posted on 1/23/2007 at 1:26 AM
		</div>
		<div class="comment_text"><p>I have an Urgent need for a Perm. Sr. Applications Developer/Flex Architect in the Dallas Texas area, would you happen to know of anyone with that experience that would be interested?  If so please let me know.</p><p>Kim Dobson<br>Placement Manager<br>214-277-2097</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661378">4</a> by Raymond Camden
		posted on 1/23/2007 at 1:32 AM
		</div>
		<div class="comment_text"><p>Wish I could help you - although I'm definitely not a Senior Flex person yet. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661376">5</a> by Josh
		posted on 1/23/2007 at 4:32 AM
		</div>
		<div class="comment_text"><p>The Flex DateFormatter is written in ActionScript, and the Flash Date class is built-in (written in c or c++, I suppose). Hopefully, someone on the Flex team will ask to see the Flash parsing code for a future release. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661381">6</a> by K
		posted on 2/22/2007 at 3:43 AM
		</div>
		<div class="comment_text"><p>I'm creating a class with a Date field, and this helped. Doesn't make sense. This works to create a Date from XML:</p><p>      if (x.expiration != null) {<br>        var s: String = x.expiration;<br>        _expiration = new Date(s);<br>      }</p><p>This doesn't:</p><p>      if (x.expiration != null) {<br>        _expiration = new Date(x.expiration);<br>      }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661365">7</a> by Berryblitz
		posted on 9/24/2007 at 8:40 AM
		</div>
		<div class="comment_text"><p>Thanks for the tip!  I've just run through this gotcha.  I hope Adobe would fix soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661371">8</a> by Rosen
		posted on 1/24/2008 at 1:21 AM
		</div>
		<div class="comment_text"><p>How exactly do you format a date in a DataGrid?<br>I did not see those columns to have a property for a format function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661375">9</a> by Raymond Camden
		posted on 1/24/2008 at 2:29 AM
		</div>
		<div class="comment_text"><p>Well you apply a labelFormat for the column, and which calls a function that can make use of a DateFormatter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661377">10</a> by Steve
		posted on 3/27/2008 at 4:24 PM
		</div>
		<div class="comment_text"><p>Raymond means you should use labelFunction (not labelFormat) to call a custom function that can format your date.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661384">11</a> by Steven Erat
		posted on 7/3/2008 at 9:39 PM
		</div>
		<div class="comment_text"><p>This has been fixed, coming soon to a Flex SDK release near you.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fbugs.adobe.com%2Fjira%2Fbrowse%2FSDK-13650%3AWh-PD4yQmtimFpi8CZ5KUK1Q_jM&amp;cuid=3321886" rel="nofollow noopener" title="https://bugs.adobe.com/jira/browse/SDK-13650">https://bugs.adobe.com/jira...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661385">12</a> by Kai Griffin
		posted on 4/10/2009 at 10:24 PM
		</div>
		<div class="comment_text"><p>Actually, the bug has NOT been fixed yet (as seen in the link above).  Hopefully soon....?</p></div>
	</div>
</div>
		