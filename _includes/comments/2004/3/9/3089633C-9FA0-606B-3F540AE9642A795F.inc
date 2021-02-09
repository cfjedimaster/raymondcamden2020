
<div class="comment" id="c_1713615456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615456">1</a> by Ivo D. Silva
		posted on 3/9/2004 at 9:22 PM
		</div>
		<div class="comment_text"><p>"p.s.s. And of course, I'd much prefer it if MACR would simply add throw/rethrow to cfscript. :)"</p><p>I would prefer a full cfscript implementation of cfml tags.</p><p>Sure tag based syntax is good, and i love it, but for the presentation layer ... i really would prefer a script based syntax for the business layer ( much like the Flex programming model ).</p><p>Next xmas i'll send this gift request to santa ..</p><p>Please please macromedia, give cf a nice programming model like his brother flex !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615455">2</a> by Eli Gordon
		posted on 11/2/2004 at 10:52 AM
		</div>
		<div class="comment_text"><p>One thing that should be clarified is that this rethrow() function needs to be called within a CFTRY block--simply being within a cfscript try{} block isn't enough. <br>For example, the following code will not work (rethrow() throws a "Context validation error"):<br>&amp;lt;pre&amp;gt;<br>&amp;lt;cfscript&amp;gt;<br>try {<br>    try {<br>        throw('foo', 'bar');<br>    } catch (foo e) {<br>        rethrow(); // error here<br>    }<br>    WriteOutput("rethrow() didn't work");<br>} catch (foo e) {<br>    WriteOutput("rethrow() worked");<br>}<br>&amp;lt;cfscript&amp;gt;<br>&amp;lt;/pre&amp;gt;<br>While the following code does work:<br>&amp;lt;pre&amp;gt;<br>&amp;lt;cftry&amp;gt;<br>    &amp;lt;cfscript&amp;gt;<br>    try {<br>        throw('foo', 'bar');<br>    } catch (foo e) {<br>        rethrow();<br>    }<br>    WriteOutput("rethrow() didn't work");<br>    &amp;lt;/cfscript&amp;gt;<br>&amp;lt;cfcatch type="foo"&amp;gt;<br>    &amp;lt;cfoutput "rethrow() worked"&amp;gt;<br>&amp;lt;/cftry&amp;gt;<br>&amp;lt;/pre&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615457">3</a> by Eli Gordon
		posted on 11/2/2004 at 10:57 AM
		</div>
		<div class="comment_text"><p>That sure did look ugly... Let's try that comment again:<br>----------</p><p>One thing that should be clarified is that this rethrow() function needs to be called within a CFTRY block--simply being within a cfscript try{} block isn't enough.</p><p>For example, the following code will not work (rethrow() throws a "Context validation error"):</p><p>&amp;lt;cfscript&amp;gt;</p><p>try {</p><p>try {</p><p>throw('foo', 'bar');</p><p>} catch (foo e) {</p><p>rethrow(); // error here</p><p>}</p><p>WriteOutput("rethrow() didn't work");</p><p>} catch (foo e) {</p><p>WriteOutput("rethrow() worked");</p><p>}</p><p>&amp;lt;cfscript&amp;gt;</p><p>While the following code does work:</p><p>&amp;lt;cftry&amp;gt;</p><p>&amp;lt;cfscript&amp;gt;</p><p>try {</p><p>throw('foo', 'bar');</p><p>} catch (foo e) {</p><p>rethrow(); }</p><p>WriteOutput("rethrow() didn't work");</p><p>&amp;lt;/cfscript&amp;gt;</p><p>&amp;lt;cfcatch type="foo"&amp;gt;</p><p>&amp;lt;cfoutput "rethrow() worked"&amp;gt;</p><p>&amp;lt;/cftry&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615461">4</a> by Michael Benoit
		posted on 3/16/2006 at 2:55 AM
		</div>
		<div class="comment_text"><p>Sorry for necroposting...</p><p>I was disappointed that throw() and rethrow() weren't included in the CF MX updater 7.01.</p><p>Here are my versions of throw() and rethrow():</p><p>&lt;cfcomponent displayname="allErrorHandling"&gt;<br>	&lt;cffunction name="throw" access="public" returntype="void" hint="Call throw() with named arguments, rather than positional. While all arguments are optional, the message and detail argments are strongly recommended. The object paramter of CFTHROW is not supported."&gt;<br>		&lt;cfargument name="message" type="string" required="false" default=""&gt;<br>		&lt;cfargument name="detail" type="string" required="false" default=""&gt;<br>		&lt;cfargument name="errorcode" type="string" required="false" default=""&gt;<br>		&lt;cfargument name="extendedinfo" type="string" required="false" default=""&gt;<br>		&lt;cfargument name="type" type="string" required="false"&gt;<br>		&lt;cfif StructKeyExists(arguments, "object")&gt;<br>			&lt;cfthrow detail="#arguments.detail#" errorcode="#arguments.errorcode#" extendedinfo="#arguments.extendedinfo#" message="#arguments.message#" type="#arguments.type#"&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfthrow detail="#arguments.detail#" errorcode="#arguments.errorcode#" extendedinfo="#arguments.extendedinfo#" message="#arguments.message#"&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cffunction&gt;<br>	&lt;cffunction name="rethrow" access="public" returntype="void" hint="Use this only inside catch blocks in CFSCRIPT. Unlike CFRETHROW, you must feed in the exception being rethrown. Only the message, detail, errorcode, extendedinfo, and type keys of the exception structure will be rethrown, but it's better than nothing."&gt;<br>		&lt;cfargument name="exception" type="struct" required="yes" hint="Any exception structure from a catch block in CFSCRIPT."&gt;<br>		&lt;cfscript&gt;<br>		if (not StructKeyExists(exception, "message")) {<br>			exception["message"] = "";<br>		}<br>		if (not StructKeyExists(exception, "detail")) {<br>			exception["detail"] = "";<br>		}<br>		if (not StructKeyExists(exception, "errorcode")) {<br>			exception["errorcode"] = "";<br>		}<br>		if (not StructKeyExists(exception, "extendedinfo")) {<br>			exception["extendedinfo"] = "";<br>		}</p><p>		if (StructKeyExists(exception, "type")) {<br>			throw(exception.message, exception.detail, exception.errorcode, exception.extendedinfo, exception.type);<br>		} else {<br>			throw(exception.message, exception.detail, exception.errorcode, exception.extendedinfo);<br>		}<br>		&lt;/cfscript&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615459">5</a> by Charlie Arehart
		posted on 8/16/2006 at 7:49 AM
		</div>
		<div class="comment_text"><p>Ray, I notice you haven't added this to cflib. Is there something missing that's caused that? I'm doing an article in the CFDJ on error handling and am pointing to your throw UDF. If you might be adding this one, I'd point to it also.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615460">6</a> by Raymond Camden
		posted on 8/16/2006 at 2:44 PM
		</div>
		<div class="comment_text"><p>Released, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fudf.cfm%2Frethrow%3AYhmJrh48DrSBSHa21sKh6PuwZ74&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/udf.cfm/rethrow">http://www.cflib.org/udf.cf...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615462">7</a> by Charlie Arehart
		posted on 8/17/2006 at 7:04 AM
		</div>
		<div class="comment_text"><p>Great, thanks, and duly noted in the article. Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615465">8</a> by Adam Lehman
		posted on 5/16/2009 at 7:15 AM
		</div>
		<div class="comment_text"><p>Done... ColdFusion 9 has throw/rethrow in CFSCRIPT. Booyah!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615458">9</a> by Adam Lehman
		posted on 5/16/2009 at 7:18 AM
		</div>
		<div class="comment_text"><p>Ps. You're welcome. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615463">10</a> by Zach Stevenson
		posted on 3/21/2011 at 8:11 PM
		</div>
		<div class="comment_text"><p>Call me crazy, but wouldn't the following work as a rethrow?</p><p>try<br>{<br>...<br>}<br>catch(Any e)<br>{<br>throw(ArgumentCollection = e);<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615464">11</a> by Raymond Camden
		posted on 3/21/2011 at 8:14 PM
		</div>
		<div class="comment_text"><p>Did you try it? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615466">12</a> by Zach Stevenson
		posted on 3/21/2011 at 8:20 PM
		</div>
		<div class="comment_text"><p>Just Tried it, didn't work.</p><p>However, putting:</p><p>Throw(object = e);</p><p>does rethrow your error.</p></div>
	</div>
</div>
		