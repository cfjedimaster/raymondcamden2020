
<div class="comment" id="c_1713718406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718406">1</a> by Paul Dynan
		posted on 9/17/2009 at 6:52 PM
		</div>
		<div class="comment_text"><p>Brilliant, and worked pefectly.  Thank you.</p><p>I did notice a caveat: The structs inside of Error remain as java objects (discovered while tryign to delete Error.RootCause.StackTrace).</p><p>I'm assuming I could just not add RootCause on the original copy, and loop it in using your method as an update after to further trim.  Or, when I hit that key during the original copy, do an inner loop to build the contents of the key there.</p><p>I all probably seems excessive, but on just a query error, there four stacks and makes the error considerably longer than it needs to be.  I feel it's akin to clearing a stack of papers off your desk, rather than just working around it all day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718405">2</a> by Raymond Camden
		posted on 9/17/2009 at 7:25 PM
		</div>
		<div class="comment_text"><p>Ah - so that means the sub parts of the exception obs are also complex. Nice. But yea, you could not copy the root cause, or make the copy code a bit more complex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718407">3</a> by Paul Dynan
		posted on 9/17/2009 at 7:40 PM
		</div>
		<div class="comment_text"><p>This seems to do the trick, drilling down enough to clean up most error dumps.  I won't doubt there may be a simplier way yet to do the same thing (hoping the format comes out ok):<br>&lt;CFSET newError = structNew()&gt;<br>	&lt;CFLOOP ITEM="key" COLLECTION="#Error#"&gt;<br>		&lt;CFIF key IS NOT "StackTrace"&gt;<br>			&lt;cfset newError[key] = duplicate(Error[key])&gt;<br>		&lt;/CFIF&gt;<br>		&lt;CFIF key IS "RootCause"&gt;<br>			&lt;CFSET RootCause = structNew()&gt;<br>			&lt;CFLOOP ITEM="key1" COLLECTION="#Error.RootCause#"&gt;<br>				&lt;CFIF ListFind("Cause,RootCause", key1) GT 0&gt;<br>					&lt;CFSET temp = structNew()&gt;<br>					&lt;CFLOOP ITEM="key2" COLLECTION="#Error.RootCause["#key1#"]#"&gt;<br>						&lt;CFIF key2 IS NOT "StackTrace"&gt;<br>							&lt;CFSET temp[key2] = duplicate(Error.RootCause["#key1#"][key2])&gt;<br>						&lt;/CFIF&gt;<br>					&lt;/CFLOOP&gt;<br>					&lt;CFSET RootCause[key1] = temp&gt;<br>				&lt;CFELSEIF key1 IS NOT "StackTrace"&gt;<br>					&lt;CFSET RootCause[key1] = duplicate(Error.RootCause[key1])&gt;<br>				&lt;/CFIF&gt;<br>			&lt;/CFLOOP&gt;<br>			&lt;CFSET newError[key] = RootCause&gt;<br>		&lt;/CFIF&gt;<br>	&lt;/CFLOOP&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718410">4</a> by todd sharp
		posted on 9/17/2009 at 7:41 PM
		</div>
		<div class="comment_text"><p>Wonder if you can use serializeJSON() on the object?  Not that that would be terribly useful, I'm just curious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718429">5</a> by Raymond Camden
		posted on 9/17/2009 at 7:44 PM
		</div>
		<div class="comment_text"><p>Todd! YOU FREAKING RULE! :)  SerializeJSON does indeed work. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718428">6</a> by Raymond Camden
		posted on 9/17/2009 at 7:45 PM
		</div>
		<div class="comment_text"><p>And even better, get this:</p><p>&lt;cfset var s = serializeJSON(arguments.exception)&gt;<br>&lt;cfset var newEx = deserializeJSON(s)&gt;</p><p>This gives you a vanilla struct. So you can manipulate as you will.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718431">7</a> by Paul Dynan
		posted on 9/17/2009 at 8:17 PM
		</div>
		<div class="comment_text"><p>I still need my original code for our CF7 server, but this suggestion is working great on our CF8 server.  Here's the improved version now:</p><p>&lt;CFSET tempError = serializeJSON(Error)&gt;<br>&lt;CFSET newError = deserializeJSON(tempError)&gt;</p><p>&lt;CFLOOP LIST="newError,newError.RootCause,newError.RootCause.Cause,newError.RootCause.RootCause" INDEX="i"&gt;<br>	&lt;CFIF StructKeyExists( Evaluate(i), "StackTrace" )&gt;<br>		&lt;CFSET temp = StructDelete( Evaluate(i), "StackTrace")&gt;<br>	&lt;/CFIF&gt;<br>&lt;/CFLOOP&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718434">8</a> by Alexandre Potvin Latreille
		posted on 3/8/2012 at 2:46 AM
		</div>
		<div class="comment_text"><p>You can never have enough information when logging errors, so that's what I do:</p><p>&lt;cftry&gt;<br>    &lt;cfthrow object="#arguments.exception#"&gt;<br>    &lt;cfcatch type="any"&gt;<br>        &lt;cfset var jsonData = serializeJSON({<br>            'url' = url,<br>            'form' = form,<br>            'session' = session,<br>            'cgi' = cgi,<br>            'exception' = arguments.exception,<br>            'application' = application,<br>            'server' = server<br>        })&gt;<br>    &lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p><p>I can then save the whole thing in the database. This will serialize the stack trace as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718436">9</a> by Alexandre Potvin Latreille
		posted on 3/8/2012 at 2:48 AM
		</div>
		<div class="comment_text"><p>There's a mistake in my previous post.</p><p>'exception' = arguments.exception -&gt; 'exception' = cfcatch</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718437">10</a> by Raymond Camden
		posted on 3/8/2012 at 4:32 AM
		</div>
		<div class="comment_text"><p>Cool technique. Thanks for sharing that Alex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718440">11</a> by Alexandre Potvin Latreille
		posted on 3/8/2012 at 7:31 PM
		</div>
		<div class="comment_text"><p>There's at least one thing you need to watch with this solution: serializeJSON will crash with an uncatchable error if you pass it a struct that has a key which value is a reference to a function. This seems to be problematic for structs only, not CFCs. CFC instances are just serialized as empty structs by the serializeJSON function.</p><p>An obvious solution to this problem might be to make a copy of the structs, loop over their keys to remove any non-serializable members and then call serializeJSON over them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718444">12</a> by Alexandre Potvin Latreille
		posted on 3/8/2012 at 9:34 PM
		</div>
		<div class="comment_text"><p>I created a function that will create a serializable copy of an array or a struct.</p><p>&lt;cffunction name="getSerializableObjectCopy" access="private" returntype="any"&gt;<br>    	&lt;cfargument name="o" type="any" required="yes"&gt;</p><p>        &lt;cfscript&gt;<br>        	var objectCopy = isStruct(arguments.o)? {} : [];<br>			var sLen = isStruct(arguments.o)? structCount(arguments.o) : arrayLen(arguments.o);</p><p>			if (isStruct(arguments.o)) {<br>				var keyList = structKeyList(arguments.o);<br>			}</p><p>			for (var i = 1; i lte sLen; i++) {<br>				local.keyOrIndex = isStruct(arguments.o)? listGetAt(keyList, i) : i;<br>				local.value = arguments.o[local.keyOrIndex];</p><p>				if (isStruct(local.value)) {<br>					local.meta = getMetaData(local.value);<br>					if (structKeyExists(local.meta, 'type') and local.meta.type is 'component') {<br>						objectCopy[local.keyOrIndex] = '&lt;#local.meta.fullName#&gt;';<br>						continue;<br>					}	<br>				}</p><p>				objectCopy[local.keyOrIndex] = (isStruct(local.value) or isArray(local.value))?<br>					getSerializableObjectCopy(local.value, objectCopy) : (<br>					 	isStruct(local.value) <br>						or isSimpleValue(local.value) <br>						or isArray(local.value)<br>					)? local.value : '&lt;unserializable value&gt;';<br>			}</p><p>			return objectCopy;<br>        &lt;/cfscript&gt;<br>    &lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718443">13</a> by Alexandre Potvin Latreille
		posted on 3/8/2012 at 10:23 PM
		</div>
		<div class="comment_text"><p>I am sorry, the previous function is bugged. Can you delete my previous post. Thanks!</p><p>&lt;cffunction name="getSerializableObjectCopy" access="private" output="yes" returntype="any"&gt;<br>    	&lt;cfargument name="o" type="any" required="yes"&gt;</p><p>        &lt;cfscript&gt;	<br>			if (isStruct(arguments.o)) {<br>				local.objectCopy = {};<br>				local.keys = structKeyArray(arguments.o);<br>				local.sLen = arrayLen(local.keys);<br>			} else {<br>				local.objectCopy = [];<br>				local.sLen = arrayLen(arguments.o);<br>			}</p><p>			for (var i = 1; i lte local.sLen; i++) {<br>				local.keyOrIndex = isStruct(arguments.o)? local.keys[i] : i;<br>				local.value = arguments.o[local.keyOrIndex];</p><p>				if (isStruct(local.value)) {<br>					local.meta = getMetaData(local.value);<br>					if (structKeyExists(local.meta, 'type') and local.meta.type is 'component') {<br>						local.objectCopy[local.keyOrIndex] = '&lt;#local.meta.fullName#&gt;';<br>						continue;<br>					}<br>				}</p><p>				local.objectCopy[local.keyOrIndex] = (isStruct(local.value) or isArray(local.value))?<br>					getSerializableObjectCopy(local.value, local.objectCopy) : (<br>					 	isStruct(local.value) <br>						or isSimpleValue(local.value) <br>						or isArray(local.value)<br>					)? local.value : '&lt;unserializable value&gt;';<br>			}</p><p>			return local.objectCopy;<br>        &lt;/cfscript&gt;<br>    &lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718446">14</a> by Andrew
		posted on 7/7/2014 at 8:30 PM
		</div>
		<div class="comment_text"><p>I realize this post is pretty old, but I wanted to say thank you for both it and everyone's input.</p><p>I was trying to find a good way to serialize an exception object for storage in our error logging system and this helped me get it done.</p><p>At first I was trying to just use the SerializeJSON() function on the exception object, but I wanted to cut out a few parts of it before storage.  So I tried serializing and then de-serializing it to a struct, but I kept seeing parts of the object get lost in translation and I couldn't control what it was doing.</p><p>Then I tried using the code Alexandre Potvin Latreille provided but found it did not work (in CF 10 at least).</p><p>So I took his code and re-wrote it a bit to account for types other than arrays, structs, and simple values.</p><p>It's located at <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F2XynXVKG%3A6XXw2ZMyMc41RCCcCTMMwm7whns&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/2XynXVKG">http://pastebin.com/2XynXVKG</a> if anyone is interested.  So far it's worked very well for me.</p><p>Thanks again!</p></div>
	</div>
</div>
		