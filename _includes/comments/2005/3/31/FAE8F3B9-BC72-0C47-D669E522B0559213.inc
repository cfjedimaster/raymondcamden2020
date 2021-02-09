
<div class="comment" id="c_1713617841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617841">1</a> by Adrian J. Moreno
		posted on 4/1/2005 at 6:18 AM
		</div>
		<div class="comment_text"><p>So, you're saying that I can have a getter in one CFC return an array of objects returned from another CFC?</p><p>i.e.: I have an object book and an object author. book.getAuthor() returns author, but if there's more than one, it could return an author array?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617845">2</a> by Ryan Guill
		posted on 4/1/2005 at 6:48 AM
		</div>
		<div class="comment_text"><p>Hey Ray, interesting post. What would this be good for?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617847">3</a> by Sean Corfield
		posted on 4/1/2005 at 7:07 AM
		</div>
		<div class="comment_text"><p>This was added specifically to support web services with typed array.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617849">4</a> by Mike Rankin
		posted on 4/1/2005 at 10:54 AM
		</div>
		<div class="comment_text"><p>Very interesting.  Could this be used to support composition/aggregate multiplicity?  My "vehicle" object could have a "wheels[]" property that contains a number of wheel objects.</p><p>I've been handling this with a property typed as an array that I then stuff with objects. It seems like the way you mention would be a lot clearer if it is as reliable.</p><p>Sean, you seem to know about this.  Can you think of any pitfalls that might come up using this approach?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617851">5</a> by Sean Corfield
		posted on 4/1/2005 at 12:25 PM
		</div>
		<div class="comment_text"><p>The *only* thing this syntax is meant to support is typed arrays in web service APIs. It doesn't mean anything outside of that context as far as I know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617846">6</a> by Raymond Camden
		posted on 4/1/2005 at 8:12 PM
		</div>
		<div class="comment_text"><p>Sean: I understand it was added for web services, but since it works perfectly well in components not being used as WS, are you still saying we shouldn't use? I wonder if we can get an 'official' ruling from MACR. Since it was in the release notes and not the official docs (afaik), it is kind of up in the air.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617850">7</a> by Mark Mandel
		posted on 4/1/2005 at 8:29 PM
		</div>
		<div class="comment_text"><p>So Ray -</p><p>What happens if you try to pass out an array of Oranges, does it throw a typeing error? or does it just ignore it, and the Apples[] is more for semantic markup?</p><p>Nice find however!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617848">8</a> by Ray Camden
		posted on 4/1/2005 at 8:39 PM
		</div>
		<div class="comment_text"><p>Mark - it is smart enough to recognize that it isn't the right type.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617854">9</a> by Nathan Dintenfass
		posted on 4/2/2005 at 2:25 PM
		</div>
		<div class="comment_text"><p>An array of Apples.</p><p>What's on your mind Ray?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617853">10</a> by Steve
		posted on 4/4/2005 at 6:11 PM
		</div>
		<div class="comment_text"><p>Since the type of the contents in an array cannot be specified when you create the array, does CF have to validate every item in the array at runtime?  If so, wouldn't this be rather slow with a large array?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617855">11</a> by Ray Camden
		posted on 4/4/2005 at 6:15 PM
		</div>
		<div class="comment_text"><p>Steve: Even if so - if we didn't have this feature, I'd still have to check at runtime anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617856">12</a> by Mike Rankin
		posted on 5/16/2006 at 10:46 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Did you ever find out if this was frowned upon by Adobe?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617859">13</a> by Raymond Camden
		posted on 5/16/2006 at 10:48 PM
		</div>
		<div class="comment_text"><p>Nope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617860">14</a> by jason min
		posted on 10/7/2006 at 3:14 AM
		</div>
		<div class="comment_text"><p>I tried your code for the array of component, but it is not working.  I get an error when trying to invoke the web service getApples from a cfm.  Could you help me a little bit?  Thank you very  much.</p><p>AXIS error</p><p>Sorry, something seems to have gone wrong... here are the details:</p><p>Fault - [coldfusion.xml.rpc.SkeletonClassLoader$UnresolvedCFCDataTypeException : Could not resolve CFC datatype: apple[]][; nested exception is: <br>	coldfusion.xml.rpc.CFCInvocationException: [coldfusion.xml.rpc.SkeletonClassLoader$UnresolvedCFCDataTypeException : Could not resolve CFC datatype: apple[]][</p><p>AxisFault<br> faultCode: {<a href="http://disq.us/url?url=http%3A%2F%2Fschemas.xmlsoap.org%2Fsoap%2Fenvelope%2F%3ADyx31TSBml91MzNsxdtNtMdhugU&amp;cuid=3321886" rel="nofollow noopener" title="http://schemas.xmlsoap.org/soap/envelope/">http://schemas.xmlsoap.org/...</a>}Server.generalException<br> faultSubcode: <br> faultString: [coldfusion.xml.rpc.SkeletonClassLoader$UnresolvedCFCDataTypeException : Could not resolve CFC datatype: apple[]][; nested exception is: <br>	coldfusion.xml.rpc.CFCInvocationException: [coldfusion.xml.rpc.SkeletonClassLoader$UnresolvedCFCDataTypeException : Could not resolve CFC datatype: apple[]][<br> faultActor: <br> faultNode: <br> faultDetail:</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617858">15</a> by Raymond Camden
		posted on 10/8/2006 at 7:52 AM
		</div>
		<div class="comment_text"><p>Sorry Jason - not sure why you would get that.</p></div>
	</div>
</div>
		