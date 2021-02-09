
<div class="comment" id="c_1713715959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715959">1</a> by marc esher
		posted on 6/5/2009 at 2:36 AM
		</div>
		<div class="comment_text"><p>it'd be telling to run this through tcpmon and watch the messages going across the wire. I'd imagine that would at least tell you what's different, though probably not *why* it's different when doing it one way vs. the other.</p><p>i must admit... this is intriguing!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715957">2</a> by Russ
		posted on 6/5/2009 at 4:29 AM
		</div>
		<div class="comment_text"><p>The documentation for addSOAPRequestHeader says that the value "can be a CFML XML value". Guess they should have written "MUST be a CFML XML value".<br>Regarding the soap header generated using a struct, it looks like it is trying to handle two namespaces: the one you defined in addSOAPRequestHeader and a default XML namespace "<a href="http://disq.us/url?url=http%3A%2F%2Fxml.apache.org%2Fxml-soap%3Aly2wIhx_w14zlGyTPKUkiYenKxc&amp;cuid=3321886" rel="nofollow noopener" title="http://xml.apache.org/xml-soap">http://xml.apache.org/xml-soap</a>".<br>You'd think that if you supplied a namespace in addSOAPRequestHeader, it wouldn't try to use a default XML namespace.<br>Could it be a CF bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715960">3</a> by Raymond Camden
		posted on 6/5/2009 at 4:02 PM
		</div>
		<div class="comment_text"><p>@russ: Hmm, I don't know. But, shoot, wouldn't hurt to get the bug filed and let Adobe chew on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715955">4</a> by John Bliss
		posted on 6/5/2009 at 4:19 PM
		</div>
		<div class="comment_text"><p>@russ @ray Bug filed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715953">5</a> by Ben Nadel
		posted on 6/5/2009 at 4:49 PM
		</div>
		<div class="comment_text"><p>I know this is a bit tangent, but when dealing with SOAP requests, I definitely find it much easier to manually build the XML request via CFSaveContent or CFXML. This is especially true when you start to deal with complex arguments that don't easily map (for one reason or another) to ColdFusion structures. Even though manual XML adds overhead, I found the overhead to be far easier than debugging the CF-to-SOAP implicit conversions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715963">6</a> by KC
		posted on 6/6/2009 at 8:29 AM
		</div>
		<div class="comment_text"><p>Ben: I totally agree with you, building the XML manually is so much easier - but I have experienced that doing a http post with xml is actually faster than invoking the soap webservice directly. I even remember reading someone did a performance comparison and pure xml was like 4 times faster</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715961">7</a> by Raymond Camden
		posted on 6/6/2009 at 5:50 PM
		</div>
		<div class="comment_text"><p>Technically when you invoke a web service, you ARE doing a http post with XML. Are you saying that not using cfinvoke/webservice= gives you a speed increase? Are you saying you generate the WSDL for the request by hand and just cfhttp it?</p></div>
	</div>
</div>
		