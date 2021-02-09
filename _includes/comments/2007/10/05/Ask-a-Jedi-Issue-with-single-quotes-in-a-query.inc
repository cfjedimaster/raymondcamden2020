
<div class="comment" id="c_1713672821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672821">1</a> by todd sharp
		posted on 10/5/2007 at 8:40 PM
		</div>
		<div class="comment_text"><p>Man I don't know if I like any service doing formatting for me.  I'd rather get a list of data then have them try to monkey with formatting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672829">2</a> by tony petruzzi
		posted on 10/5/2007 at 9:14 PM
		</div>
		<div class="comment_text"><p>when will people learn to just use cfqueryparam and be done with this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672822">3</a> by Tyler Clendenin
		posted on 10/5/2007 at 9:14 PM
		</div>
		<div class="comment_text"><p>For Alex or anyone else:<br>Having the service give you SQL isn't that bad but I would prolly take the string they give me, parse it into a structure/array and then use queryparams.  Queryparams are more then just a security measure (although this is the most vital reason to use them).  I'm not going to go into that, there are a great many articles out there on the subject.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672824">4</a> by Raymond Camden
		posted on 10/5/2007 at 9:45 PM
		</div>
		<div class="comment_text"><p>Tony - cfqueryparam doesn't imply here. In this case his str is SQL itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672823">5</a> by James Moberg
		posted on 10/5/2007 at 10:03 PM
		</div>
		<div class="comment_text"><p>Tony,</p><p>According to CFMX documentation, you cannot use the cfquery cachedAfter or cachedWithin attributes with cfqueryparam.</p><p>So if you want to use cfqueryparam, you can't cache the query results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672827">6</a> by Jason Troy
		posted on 10/5/2007 at 10:10 PM
		</div>
		<div class="comment_text"><p>Its worth noting that the limitation James mentions is for ColdFusion versions prior to CF 8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672826">7</a> by Raymond Camden
		posted on 10/5/2007 at 10:13 PM
		</div>
		<div class="comment_text"><p>And to add a note to Jason's comment, you certainly can cache the query. You just can't use CF's built in caching. I normally write my own anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672830">8</a> by James Moberg
		posted on 10/5/2007 at 10:38 PM
		</div>
		<div class="comment_text"><p>cachedWithin and cfqueryparam work together in CF8?  That's great to know, but I probably won't notice unless someone actually pointed it out.  I haven't worked on CF8 yet as most client applications that I've worked with are still either on CF5, 6 or 7.</p><p>Is there a good online resource for identifying the subtle differences and bugfixes between each CF version?</p><p>Also, on the topic of CFQUERY, if you are using a UDF to perform any modifications to the data, I've found that CF7 throws an error when combined with preservesinglequotes().  We've had to perform variable modifications separate from the query.  This may be fixed in CF8 too... but I don't know because I'm not using it yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672825">9</a> by Raymond Camden
		posted on 10/5/2007 at 10:40 PM
		</div>
		<div class="comment_text"><p>James- I blogged on this actually. :) In the PDF Reference there is a section that details changes since MX (v 6).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672831">10</a> by Ken Sykora
		posted on 10/5/2007 at 11:15 PM
		</div>
		<div class="comment_text"><p>I think a good rule of thumb here is that if you need to use the preservesinglequotes() function you should probably be writing your query differently - or just be completely aware of the fact that if you're using this function you are opening the door to sql injection and will need to validate the data you're checking yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672828">11</a> by Shlomy Gantz
		posted on 10/5/2007 at 11:56 PM
		</div>
		<div class="comment_text"><p>I would just want to add that using preserveSingleQuotes() without CFQUERYPARAM is a really big security risk. Simple SQL injections that usually fail because the single quote is escaped will have a better chance of working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672834">12</a> by Raymond Camden
		posted on 10/6/2007 at 12:47 AM
		</div>
		<div class="comment_text"><p>I agree with you Shlomy - but let me be picky. Afaik, you can't use cfqueryparam with PSQ. Your comment makes it sounds like it is a choice - which it isn't - it is an either/or.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672833">13</a> by Lyle
		posted on 10/6/2007 at 3:55 AM
		</div>
		<div class="comment_text"><p>If this is an OR set for a single variable, I'd recommend that you change what is returned by your function to be a list of:</p><p>10001,10002,10003,...</p><p>and then put this in your query:</p><p>xxx IN (&lt;cfqueryparam list="YES" type="CF_SQL_VARCHAR" value="#YourList#" NULL="#NOT Len(YourList)#"&gt;)</p><p>It would do the same thing and be more secure.</p></div>
	</div>
</div>
		