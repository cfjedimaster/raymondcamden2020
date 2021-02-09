
<div class="comment" id="c_1713615678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615678">1</a> by Paul Kenney
		posted on 5/27/2004 at 6:15 PM
		</div>
		<div class="comment_text"><p>I ran into this a long time ago, and decided to write a custom tag that could deal with dumping the "non-struct" cfcatch value.</p><p>The thing is, though, that sometimes certain properties aren't available in the exception object--even though they should be--and another exception is thrown when trying to access them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615677">2</a> by seancorfield
		posted on 5/27/2004 at 6:50 PM
		</div>
		<div class="comment_text"><p>Note that accessing cfcatch.message, cfcatch.type etc implicitly call the getMessage(), getType() etc methods on the underlying object in this case.</p><p>You can also call cfcatch.toString() which will produce something readable I expect. You can also call cfcatch.getStackTrace() which gives you an array of (Java) stack trace elements.</p><p>cfdump can only "pretty print" object types it knows about (although it does seem a little strange that it doesn't recognition this particular CF exception) - it's worth remembering that while something is 'clearly' a CF type to you, underneath they are all Java types...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615679">3</a> by Nathan Dintenfass
		posted on 5/27/2004 at 7:05 PM
		</div>
		<div class="comment_text"><p>And, I think, Sean, that is why this is a "bug" -- if I have to know anything about what happens "under the sheets" to use a CFML construct, something is not right.</p><p>It's nice to be able to know something about what's going on under the sheets, but it surely shouldn't be necessary for me to understand it to use CFML (if for no other reason because of backwards compatibility -- the test case Raymond uses to make the java CFCATCH works just fine in CF5 as a struct).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615682">4</a> by seancorfield
		posted on 5/27/2004 at 7:30 PM
		</div>
		<div class="comment_text"><p>As I said, accessing cfcatch.type, cfcatch.message works and that is what is documented. I don't think the behavior of cfdump var="#cfcatch#" is documented. Therefore it is not technically a bug.</p><p>And I do think that CFers need to be aware of what is under the sheets these days. Even if only to recognize that every CF object is really a Java object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615681">5</a> by Paul Kenney
		posted on 5/27/2004 at 8:36 PM
		</div>
		<div class="comment_text"><p>Maybe what is really needed is a more robust &lt;cfdump&gt; that is cabable of handling known java objects such as Exception.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615684">6</a> by seancorfield
		posted on 5/27/2004 at 8:52 PM
		</div>
		<div class="comment_text"><p>I can certainly see benefit in extending cfdump so that if it finds any methods of the form (using reflection):</p><p>simpletype getXxx()</p><p>it calls them and displays the results as:</p><p>property xxx value</p><p>Of course, there is the danger that the getXxx() has a side effect (e.g., getNextSequenceID()) so you would probably need more fine-grained control over the behavior of the tag...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615685">7</a> by Raymond Camden
		posted on 5/27/2004 at 8:57 PM
		</div>
		<div class="comment_text"><p>Sean, why would it need to call the methods? Why wouldn't the reflection simply get the method names.</p><p>FYI, as a personal aside, when I worked at Macromedia I did some of the work inside cfdump, including reflection. It _does_ have basic reflection support for Java objects, but I don't think it goes very deep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615683">8</a> by Nelson Winters
		posted on 5/27/2004 at 9:01 PM
		</div>
		<div class="comment_text"><p>Sure would be nice if the location of where the error occurred would be provided for these types of errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615680">9</a> by seancorfield
		posted on 5/27/2004 at 10:16 PM
		</div>
		<div class="comment_text"><p>Ray, I was thinking about how it could show type / detail / message even for Java exceptions by calling getType() / getDetail() / getMessage().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615686">10</a> by Paul Kenney
		posted on 5/27/2004 at 11:13 PM
		</div>
		<div class="comment_text"><p>Well, aside from the name of the method, you also can get its return type.  I say that if the return type is a simple type (string, integer, float, boolean, etc.) or is a known complex type (array/vector, query/recordset, struct/HashMap/Collection) then it dump that value.</p><p>No, its not a simple order to fill but it would be very useful once done.</p><p>While we're at it, I also think that &lt;cfdump&gt; should be updated so that the CSS it uses works when you use XHTML by prefixing all hex color values with "#" and properly placing the generated CSS inside the &lt;head&gt;&lt;/head&gt; tags. Just for completeness...</p></div>
	</div>
</div>
		