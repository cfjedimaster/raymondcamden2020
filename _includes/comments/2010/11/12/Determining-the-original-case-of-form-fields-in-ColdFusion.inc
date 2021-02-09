
<div class="comment" id="c_1713727642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727642">1</a> by Sooraj
		posted on 11/13/2010 at 11:15 AM
		</div>
		<div class="comment_text"><p>Hi Ray nice post, and a nice thought...<br>I have  a question about processing logic, suppose the formfield contains a field called  "company" and if I enter company value in form as "AT&amp;T", will the above logic work?  If not how do we make the logic as it allows &amp;...<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727649">2</a> by Brad
		posted on 11/13/2010 at 11:16 AM
		</div>
		<div class="comment_text"><p>I just needed this *today*. I was writing an interface using <a href="http://disq.us/url?url=http%3A%2F%2FAuthorize.net%3AXja_iYrG-VJy01f8pp9KpNavBw8&amp;cuid=3321886" rel="nofollow noopener" title="Authorize.net">Authorize.net</a>'s automated billing system. This system was case sensitive, so it wasn't as simple as accepting a form, validate/scrubbing it, then passing it to the service. A full mapping needed to take place.</p><p>This function saved me much headache!</p><p>Note: I wouldn't allow this, but say you had two form names like Name and name. Referencing them without going further into java methods can only return one of the above...</p><p>so, struct.Name or <a href="http://disq.us/url?url=http%3A%2F%2Fstruct.name%3AC75InRJlqZhfBD07HBmMivv90r4&amp;cuid=3321886" rel="nofollow noopener" title="struct.name">struct.name</a> will only return one of the above. My short tests always yielded the lower case one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727648">3</a> by Sooraj
		posted on 11/13/2010 at 11:18 AM
		</div>
		<div class="comment_text"><p>Maybe we need the help of Form structure to identify the exact fields and values....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727651">4</a> by Rex
		posted on 11/13/2010 at 11:36 AM
		</div>
		<div class="comment_text"><p>@Sooraj the field values come out encoded so AT&amp;T becomes AT%26T</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727652">5</a> by Sooraj
		posted on 11/13/2010 at 1:11 PM
		</div>
		<div class="comment_text"><p>Thanks Rex for pointing it out...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727654">6</a> by Raymond Camden
		posted on 11/13/2010 at 5:12 PM
		</div>
		<div class="comment_text"><p>@Brad: See this blog entry: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F3%2F31%2FProcessing-forms-with-duplicate-field-names%3AUSGQr2iUAt5_9ggt1VoqjlzpA_c&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/3/31/Processing-forms-with-duplicate-field-names">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727655">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727655">7</a> by dawesi
		posted on 11/15/2010 at 7:15 AM
		</div>
		<div class="comment_text"><p>Any idea how to get case sensitive names in multipart/form-data? seems you can get to the names through form.getPartsArray() but they are still uppercased??!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727653">8</a> by Raymond Camden
		posted on 11/16/2010 at 11:46 PM
		</div>
		<div class="comment_text"><p>No idea on that one. If you look at the comments in the post I linked to in the comment above, it looks like a dead end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727659">9</a> by Critter
		posted on 11/24/2010 at 12:08 AM
		</div>
		<div class="comment_text"><p>Queries return a columnlist all in caps too.. if you serialize that to JSON, and then use the provided columnlist to get to the data.. it doesn't work.. at least in this library I am using for Objective-C.. do you know of any way to preserve the case in a query returned?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727658">10</a> by Critter
		posted on 11/24/2010 at 12:10 AM
		</div>
		<div class="comment_text"><p>Actually.. i just noticed.. it's not the query.. it's the conversion to JSON...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727657">11</a> by Raymond Camden
		posted on 11/24/2010 at 12:14 AM
		</div>
		<div class="comment_text"><p>If you need the case, then just copy it.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fresult.data%3Aj5R619kvWJKIgosVyqNADKfqU_k&amp;cuid=3321886" rel="nofollow noopener" title="result.data">result.data</a> = thequery;<br>result.collist = thequery.columnlist;</p><p>return result;<br>havebeer;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727644">12</a> by Critter
		posted on 11/24/2010 at 4:29 PM
		</div>
		<div class="comment_text"><p>aye.. sometimes the easiest solutions... yeah right there in front of you..</p><p>cheers mate..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727643">13</a> by Aaron Foss
		posted on 1/11/2011 at 12:27 AM
		</div>
		<div class="comment_text"><p>If the value is empty, it puts in the field name, not the value. The listlen is 1, not 2 when it's empty (at least on CF9). I added the following check:</p><p>[cfif listlen(pair, "=") eq 1]<br>     [cfset value = ""]<br>[cfelse]<br>     [cfset value = urlDecode(listLast(pair, "="))]<br>[/cfif]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727645">14</a> by Raymond Camden
		posted on 1/11/2011 at 12:37 AM
		</div>
		<div class="comment_text"><p>Nice find there, Aaron. Thank you.</p></div>
	</div>
</div>
		