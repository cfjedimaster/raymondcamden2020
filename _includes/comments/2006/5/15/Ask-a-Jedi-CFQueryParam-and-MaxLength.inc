
<div class="comment" id="c_1713652947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652947">1</a> by cfm_pedawan
		posted on 5/16/2006 at 11:49 AM
		</div>
		<div class="comment_text"><p>I am happy someone answered this because I have been trying to make sense of it as well. "what's the point of setting maxlength?"... And if cfqueryparam throws an error can I gracefully intercept this error message.</p><p>Example.</p><p>I have a URL with query string  / load.cfm?get=9&amp;page=20971</p><p>The URL variables get &amp; page are being pushed to a SELECT statement:<br>SELECT TemplateID FROM Catalog Where <br>dir = &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#URL.get#" maxlength="2"&gt;<br>AND<br>pageID = &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#<a href="http://disq.us/url?url=http%3A%2F%2FURL.page%3A8mBILhp8Cra0ugWHv772oFg2Hk8&amp;cuid=3321886" rel="nofollow noopener" title="URL.page">URL.page</a>#" maxlength="5"&gt;</p><p>But say someone tweaks the URL - to <br>load.cfm?get=900&amp;page=209710000</p><p>QUESTION:<br>Is there away to catch the error and then redirect the USER to say load.cfm or the index.cfm of the application?</p><p>Because throwing an error message plainly indicates that something was broken.</p><p>Anything thoughts... I apologize if my question is silly or unclear. This question has been on the back of my mind for a bit now since I have been working with cfqueryparam. Thanks in advance for any feedback.</p><p>Thanks,<br>cfm_pedawan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652949">2</a> by David Stockton
		posted on 5/16/2006 at 1:02 PM
		</div>
		<div class="comment_text"><p>You could use...</p><p>&lt;cftry&gt;</p><p> &lt;cfquery...<br> ...&lt;/cfquery&gt;</p><p> &lt;cfcatch&gt;<br>  &lt;cflocation url="index.cfm" /&gt;<br> &lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p><p>But this will catch any error with your query.<br>You can use the type="..." attribute on your cfcatch but the type would be Application and then you'd have to parse the message and look for "The cause of this output exception was that: coldfusion.tagext.sql.QueryParamTag$InvalidDataException" and that seems like far too much effort to me ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652948">3</a> by Alan
		posted on 5/16/2006 at 4:07 PM
		</div>
		<div class="comment_text"><p>So I just tried this:</p><p>&lt;cfqueryparam cfsqltype="CF_SQL_BIT" maxlength="1" value="0" /&gt;</p><p>which works.  So does this though...</p><p>&lt;cfqueryparam cfsqltype="CF_SQL_BIT" maxlength="5" value="false" /&gt;</p><p>Let's say I write CFCs with returnType="boolean" and send back a zero for false, but someone else in my company writes one that sends back the string "false" - the first example throws an error because "false" is 5 and maxlength is 1.  Is the only solution to this problem to make everyone follow the same guidelines for returing true/false values?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652950">4</a> by Raymond Camden
		posted on 5/16/2006 at 4:24 PM
		</div>
		<div class="comment_text"><p>Alan, just don't use maxlength. Period. (I mean for cf_sql_bit.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652954">5</a> by Tony Petruzzi
		posted on 5/16/2006 at 4:30 PM
		</div>
		<div class="comment_text"><p>@alan</p><p>You could simply do this:</p><p>&lt;cfqueryparam value="#IIF(myparam, 1, 0)#" cfsqltype="CF_SQL_BIT" maxlength="1"&gt;</p><p>Since CF is typeless, there are many ways to get a true or false value. The IIF statement will take any true conditions and make them 1's while any false conditions will become 0.</p><p>Just make sure that you use cfargument in your function and make the type boolean. So the above example would become this:</p><p>&lt;cfargument name="myparam" type="boolean" required="true" displayname="myparam"&gt;</p><p>&lt;cfqueryparam value="#IIF(arguments.myparam, 1, 0)#" cfsqltype="CF_SQL_BIT" maxlength="1"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652952">6</a> by Alan
		posted on 5/16/2006 at 4:49 PM
		</div>
		<div class="comment_text"><p>I tried Tony's code in my little test page, and sure enough, it works no matter what version of false I send it.  Then I went back to the original question, how maxlength is "required" for String datatypes, but will still impact other datatypes.  That's when the blinding flash of the obvious about Ray's response hit.  If your cfargument specifies boolean, and you use that argument in a cfqueryparam, just don't use maxlength.  Even if you were using some kind of code generator or template, you could probably tell it to only use the maxlenth attribute on string types. Cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652953">7</a> by Brian
		posted on 5/16/2006 at 6:18 PM
		</div>
		<div class="comment_text"><p>So, as a followup to the original question, does it make sense to put a maxlength on timestamp values?</p><p>I could see doing it on integers/numeric, because of field length limitations on various DBs, (or not?)...and it looks like booleans aren't (which of cousre leads to a WHOLE 'nuther discussion on how to check incoming data values from untrusted sources)</p><p>Is it enough to just specify the cf_sql attribute for numerical values and let "the system" deal with the validation?</p><p>Sorry for the random train of thoughts -- If I start rambling into esoterica, just let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652959">8</a> by Raymond Camden
		posted on 5/16/2006 at 10:22 PM
		</div>
		<div class="comment_text"><p>I would only use maxlength on strings, period. For numbers (decimal and numeric) don't forget you have the scale attribute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652956">9</a> by Chris Bowyer
		posted on 2/22/2011 at 7:36 AM
		</div>
		<div class="comment_text"><p>I noticed the docs say that value is a required attribute, yet ignored if using null="yes", but it works without the value attribute anyway. Is this ColdFusion just being lenient, or a botch in the docs? Should I include an empty value?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652957">10</a> by Raymond Camden
		posted on 2/22/2011 at 7:37 AM
		</div>
		<div class="comment_text"><p>I would say a doc bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652961">11</a> by Chris Bowyer
		posted on 2/22/2011 at 7:42 AM
		</div>
		<div class="comment_text"><p>Thanks for the quick reply</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652960">12</a> by Frank Steinberg
		posted on 7/4/2011 at 6:01 AM
		</div>
		<div class="comment_text"><p>Should maxlength be used if the Data Type is varchar(MAX)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652946">13</a> by Raymond Camden
		posted on 7/4/2011 at 4:31 PM
		</div>
		<div class="comment_text"><p>I don't believe so.</p></div>
	</div>
</div>
		