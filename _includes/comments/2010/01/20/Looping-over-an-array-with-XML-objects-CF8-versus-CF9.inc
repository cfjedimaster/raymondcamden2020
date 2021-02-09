
<div class="comment" id="c_1713721366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721366">1</a> by Sean Coyne
		posted on 1/21/2010 at 12:56 AM
		</div>
		<div class="comment_text"><p>Does isArray(people) return true?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721367">2</a> by Raymond Camden
		posted on 1/21/2010 at 1:01 AM
		</div>
		<div class="comment_text"><p>To be honest, I did not test, but in both cases, the server treated it as an array - the difference was in how it got the element. If that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721368">3</a> by Marko Simic
		posted on 1/21/2010 at 2:55 AM
		</div>
		<div class="comment_text"><p>I've done some cf xml work recently, so while I'm in that mood I did some related tests.</p><p>&lt;cfxml variable="xml"&gt;<br>&lt;root&gt;<br>&lt;people&gt;Ray&lt;/people&gt;<br>&lt;people&gt;Bay&lt;/people&gt;<br>&lt;people&gt;Lay&lt;/people&gt;<br>&lt;/root&gt;<br>&lt;/cfxml&gt;</p><p>&lt;cfoutput&gt;<br>#isArray(xml.xmlRoot.people)#&lt;br&gt;<br>#HTMLEditFormat(xml.xmlRoot.people[1])#&lt;br&gt;<br>#isArray(xml.xmlRoot.xmlChildren)#&lt;br&gt;<br>#HTMLEditFormat(xml.xmlRoot.xmlChildren[1])#&lt;br&gt;<br>&lt;cfloop collection="#xml.xmlRoot#" item="person"&gt;<br>	- #HTMLEditFormat(xml.xmlRoot[person].xmlText)#&lt;br&gt;<br>&lt;/cfloop&gt;<br>&lt;/cfoutput&gt;</p><p>OUTPUT:</p><p>NO<br>&lt;?xml version="1.0" encoding="UTF-8"?&gt; &lt;people&gt;Ray&lt;/people&gt;<br>YES<br>&lt;?xml version="1.0" encoding="UTF-8"?&gt; &lt;people&gt;Ray&lt;/people&gt;<br>- Ray<br>- Ray<br>- Ray</p><p>Most interesting is that isArray(xml.xmlRoot.people) is False, while isArray(xml.xmlRoot.xmlChildren) is True.<br>Anyway I avoid accessing nodes by their names.</p><p>I don't have CF8 installed but cosmic forces telling me the result would be the same :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721369">4</a> by Ben Nadel
		posted on 1/24/2010 at 6:49 AM
		</div>
		<div class="comment_text"><p>Another way to get around this limitation in CF8 is to pass an XmlSearch() result to the array attribute in CFLoop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721371">5</a> by Rodion Bykov
		posted on 3/18/2010 at 6:39 PM
		</div>
		<div class="comment_text"><p>Saved my day, not first, not last. Thanks again !</p></div>
	</div>
</div>
		