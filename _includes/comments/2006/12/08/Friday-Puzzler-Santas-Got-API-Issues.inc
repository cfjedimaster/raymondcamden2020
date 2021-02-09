
<div class="comment" id="c_1713660133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660133">1</a> by todd sharp
		posted on 12/8/2006 at 7:46 PM
		</div>
		<div class="comment_text"><p>Please tell me there is an easier way to abstract out the method and argument names from the webservice?</p><p>&lt;cfset aServ = structNew()&gt;<br>&lt;cfset aServ.url = "<a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fdemos%2Fsanta%2Falpha.cfc%3Fwsdl%3AAROnAzNcxWJr1i8NP9T6ywYneIc&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/demos/santa/alpha.cfc?wsdl">http://ray.camdenfamily.com...</a>"&gt;<br>&lt;cfset aServ.method = "checkAvailability"&gt;<br>&lt;cfset aServ.argName = "productid"&gt;</p><p>&lt;cfset bServ = structNew()&gt;<br>&lt;cfset bServ.url = "<a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fdemos%2Fsanta%2Fbeta.cfc%3Fwsdl%3AB6nIqRbMXQbzYwiTG4j0P1_Ohak&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/demos/santa/beta.cfc?wsdl">http://ray.camdenfamily.com...</a>"&gt;<br>&lt;cfset bServ.method = "chkAvailability"&gt;<br>&lt;cfset bServ.argName = "product"&gt;</p><p>&lt;cfset cServ = structNew()&gt;<br>&lt;cfset cServ.url = "<a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fdemos%2Fsanta%2Fcharlie.cfm%3AUnCBBwt-5Kn7r5Lolvuw7vmaRkg&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/demos/santa/charlie.cfm">http://ray.camdenfamily.com...</a>"&gt;<br>&lt;cfset cServ.method = ""&gt;<br>&lt;cfset cServ.argName = "productId"&gt;</p><p>&lt;cfset variables.mailTo = "todd@cfsilence.com"&gt;<br>&lt;cfset variables.mailFrom = "todd@cfsilence.com"&gt;<br>&lt;cfset variables.productId = 123&gt;</p><p>&lt;cffunction name="errorHandler" access="private" output="false" hint="i handle remote errors" returntype="void"&gt;<br>	&lt;cfargument name="catch" required="true"&gt;<br>	&lt;cfargument name="args" type="struct" required="true"&gt;<br>	&lt;cfmail to="#variables.mailTo#" from="#variables.mailFrom#" subject="error"&gt;&lt;cfdump var="#arguments#"&gt;&lt;/cfmail&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="getService" access="public" output="false" hint="i get the service for santa" returntype="any"&gt;<br>	&lt;cfargument name="serviceStruct" hint="take a wild guess" type="struct" required="true"&gt;<br>	&lt;cfargument name="productId" type="string" required="true"&gt;<br>	&lt;cfset var results = structNew()&gt;<br> 	&lt;cfset var unavail = serviceStruct.url &amp; ": Service Unavailable"&gt;<br>	&lt;cftry&gt;<br>		&lt;cfif serviceStruct.url contains "wsdl"&gt;<br>			&lt;cfinvoke webservice="#serviceStruct.url#" method="#serviceStruct.method#" returnvariable="service"&gt;<br>				&lt;cfinvokeargument name="#serviceStruct.argName#" value="#arguments.productId#"/&gt;<br>			&lt;/cfinvoke&gt;<br>			&lt;cfset results = service&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfhttp url="#serviceStruct.url#" throwonerror="true" timeout="30"&gt;<br>				&lt;cfhttpparam type="url" name="#serviceStruct.argName#" value="#arguments.productId#"&gt;<br>			&lt;/cfhttp&gt;<br>			&lt;cfset results.available = XMLParse(cfhttp.FileContent).availability.quantity.XMLText&gt;<br>			&lt;cfset results.price = XMLParse(cfhttp.FileContent).availability.price.XMLText&gt;<br>		&lt;/cfif&gt;</p><p> 		&lt;cfcatch type="any"&gt;<br>			&lt;cfset errorHandler(cfcatch,arguments)&gt;<br>			&lt;!--- if this was for Flex i'd &lt;cfrethrow&gt; and use the flex error handler - but i still want to know about the error ---&gt;<br>			&lt;cfreturn unavail /&gt;<br>		&lt;/cfcatch&gt;<br>	&lt;/cftry&gt;<br>	&lt;cfreturn results /&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfdump var="#getService(aServ,variables.productId)#"&gt;<br>&lt;cfdump var="#getService(bServ,variables.productId)#"&gt;<br>&lt;cfdump var="#getService(cServ,variables.productId)#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660144">2</a> by todd sharp
		posted on 12/8/2006 at 7:52 PM
		</div>
		<div class="comment_text"><p>I should say 'easy' - not 'easier' - since I hardcoded it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660148">3</a> by Raymond Camden
		posted on 12/8/2006 at 8:16 PM
		</div>
		<div class="comment_text"><p>Interesting. One thing I'd probably change is not looking for WSDL in the url, but storing at creation type a 'type' attribute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660149">4</a> by todd sharp
		posted on 12/8/2006 at 8:19 PM
		</div>
		<div class="comment_text"><p>I originally had an isWSDL key in the struct, but thought this would be more dynamic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660143">5</a> by Brian Rinaldi
		posted on 12/9/2006 at 2:42 AM
		</div>
		<div class="comment_text"><p>Todd, I think you got the right idea here, but I would actually structure this a little differently. Ignoring the wsdl change for now, I would make the service and method each a separate argument and then have an arguments structure to pass. Like so:</p><p>&lt;cffunction name="getService" access="public" output="false" hint="i get the service for santa" returntype="any"&gt;<br>	&lt;cfargument name="url" type="string" required="true"&gt;<br>	&lt;cfargument name="method" type="string" required="false" default=""&gt;<br>	&lt;cfargument name="args" type="structure" required="false"&gt;<br>	&lt;cfset var thisArg = "" /&gt;<br>	&lt;cfset var results = structNew()&gt;<br>	&lt;cfset var unavail = arguments.url &amp; ": Service Unavailable"&gt;<br>	&lt;cftry&gt;<br>	   &lt;cfif arguments.url contains "wsdl"&gt;<br>	      &lt;cfinvoke webservice="#arguments.url#" method="#arguments.method#" returnvariable="service"&gt;<br>			&lt;cfloop collection="#arguments.args#" item="thisArg"&gt;<br>	         		&lt;cfinvokeargument name="#thisArg#" value="#arguments.args[thisArg]#"/&gt;<br>	         	&lt;/cfloop&gt;<br>	      &lt;/cfinvoke&gt;<br>	      &lt;cfset results = service&gt;<br>	   &lt;cfelse&gt;<br>	   	&lt;cfhttp url="#arguments.url#" throwonerror="true" timeout="30"&gt;<br>		    &lt;cfloop collection="#arguments.args#" item="thisArg"&gt;<br>				&lt;cfhttpparam type="url" name="#thisArg#" value="#arguments.args[thisArg]#"&gt;<br>			&lt;/cfloop&gt;<br>		&lt;/cfhttp&gt;<br>	    	&lt;cfset results.available = XMLParse(cfhttp.FileContent).availability.quantity.XMLText&gt;<br>	    	&lt;cfset results.price = XMLParse(cfhttp.FileContent).availability.price.XMLText&gt;<br>	  	&lt;/cfif&gt;</p><p>	   &lt;cfcatch type="any"&gt;<br>	      &lt;cfset errorHandler(cfcatch,arguments)&gt;<br>	      &lt;cfreturn unavail /&gt;<br>	   &lt;/cfcatch&gt;<br>	&lt;/cftry&gt;<br>	&lt;cfreturn results /&gt;<br>&lt;/cffunction&gt;</p><p>The reasons for this are: 1) It reduces errors because the API is a little clearer on what arguments are necessary; 2) If the product API for any one of them were to be expanded or changed, it wouldn't require us to modify the code as it is designed to handle any number of potential arguments.</p><p>Just to note, I didn't actually run this...so there could very well be a typo/mistake in the code :)</p></div>
	</div>
</div>
		