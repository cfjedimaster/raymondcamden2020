
<div class="comment" id="c_1713731594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731594">1</a> by Edward - Florida SEO
		posted on 4/12/2011 at 2:42 AM
		</div>
		<div class="comment_text"><p>I'm pretty sure catching all of the default exceptions would be more than enough info ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731593">2</a> by Kevin Marino
		posted on 4/12/2011 at 2:52 AM
		</div>
		<div class="comment_text"><p>Is there a framework involved? That really may solve some of those issues. I know with ColdBox for example has a nice trace of  the error. Sub-classing may not really gain you much in that instance since its all event driven and you know what event failed.</p><p>Or you could look at something like Coldbox see how they trace and mimic that functionality, though seems overkill.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731590">3</a> by Kurt Bonnet
		posted on 4/12/2011 at 10:13 AM
		</div>
		<div class="comment_text"><p>I've used custom exceptions in my Java apps before, but not that often in CF. Whenever I considered using a custom exception, it was usually because I wanted to bundle a few pieces of data/classes together into one cohesive structure/class so that my logic that would handle the exception didn't have to go grab information from multiple places; instead it was GIVEN the info/classes it needed to act on / interact with.</p><p>In many cases, I opted out of using a custom exception and created a more detailed "results" class/component that I returned from my function instead. Usually, when I handle exceptions I handle them fairly close to where they're thrown, but if you're having to handle non-trivial exceptions fairly distant from where they're being thrown (or even the same exception in multiple places throughout your app), then a custom exception may be the way to go. If you're not having to handle the 2 situations mentioned above, custom exceptions may be overkill.</p><p>Below is a little proof of concept I've been throwing around in my head for a while regarding how to handle custom exceptions in CF. It lets you throw custom/structured data with your exception that can be turned into a CFC when you catch the exception. I just have a CF7 instance spun up right now, you could definitely use other serialization techniques (like actually serializing a CFC instance and storing that in the extendedInfo attribute instead which would allow you to have nested components in your custom exception). But I think the example gets the point across on how you can throw and handle custom exceptions.</p><p>I'll have to play with this on CF8 tomorrow to see how much nicer it can be made.</p><p>&lt;code&gt;<br>&lt;!--- /index.cfm ---&gt;<br>&lt;cftry&gt;</p><p>	&lt;cfset data = structNew() &gt;<br>	&lt;cfset data.sku = "1234-ABC" &gt;<br>	&lt;cfset data.qtyRequested = 100 &gt;<br>	&lt;cfset data.qtyInStock = 50 &gt;</p><p>	&lt;cfset throwCustomErr("test.InventoryException", data) &gt;</p><p>	&lt;!--- &lt;cfset renderOrderGood(orderCfc) ---&gt;</p><p>	&lt;cfcatch type="test.InventoryException" &gt;<br>		&lt;cfset errCfc = getCustomErr(cfcatch) &gt;<br>		&lt;cfdump var="#errCfc#" &gt;<br>		&lt;!--- &lt;cfset renderInventoryException(errCfc) &gt; ---&gt;<br>	&lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p><p>&lt;cffunction name="throwCustomErr" returntype="void" output="false" &gt;<br>	&lt;cfargument name="type" type="string" required="true" &gt;<br>	&lt;cfargument name="data" type="struct" required="true" &gt;<br>	&lt;cfargument name="message" type="string" default="" &gt;</p><p>	&lt;cfset var d = "" &gt;<br>	&lt;cfset var msg = "" &gt;</p><p>	&lt;cfif len(arguments.message) &gt;<br>		&lt;cfset msg = arguments.message &gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset msg = "Custom Exception: " &amp; arguments.type &gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfwddx action="cfml2wddx" input="#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a>#" output="d" &gt;</p><p>	&lt;cfthrow message="#msg#" type="#arguments.type#" extendedInfo="#d#" &gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="getCustomErr" returntype="any" output="false" &gt;<br>	&lt;cfargument name="catchData" type="any" required="true" &gt;</p><p>	&lt;cfset var d = "" &gt;<br>	&lt;cfwddx action="wddx2cfml" input="#arguments.catchData.extendedInfo#" output="d" &gt;</p><p>	&lt;cfreturn createObject("component", cfcatch.type).init(argumentCollection = d) &gt;<br>&lt;/cffunction&gt;</p><p>&lt;!--- /test/InventoryException.cfc ---&gt;<br>&lt;cfcomponent&gt;</p><p>	&lt;cffunction name="init" returntype="any" &gt;<br>		&lt;cfargument name="sku" type="string" required="true" &gt;<br>		&lt;cfargument name="qtyRequested" type="numeric" required="true" &gt;<br>		&lt;cfargument name="qtyInStock" type="numeric" required="true" &gt;</p><p>		&lt;cfset structAppend(this, arguments) &gt;</p><p>		&lt;cfreturn this &gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;!--- getter/setters &amp; other methods ---&gt;<br>&lt;/cfcomponent&gt;</p><p>&lt;/code&gt;</p></div>
	</div>
</div>
		