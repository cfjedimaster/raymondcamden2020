
<div class="comment" id="c_1713622154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622154">1</a> by Auke van Leeuwen
		posted on 12/6/2005 at 8:04 PM
		</div>
		<div class="comment_text"><p>Using CFMX 6.1 I have about the same errormessage <br>&lt;code&gt;<br>   Cannot invoke method setSessionStatus on an object of type coldfusion.runtime.Struct with named arguments.<br>&lt;/code&gt;<br>but in a different situation.</p><p>It's kinda weird actually, if I use named arguments when I call an UDF that I rescoped to the request scope _and_ don't provide all (optional) arguments I get the error above. (i.e. request.udf.setSessionStatus( arg1 = 'something', arg3 = 'something else' );) <br>As far as I can tell it does work when you:</p><p>1. Provide all the arguments (even the optional ones).<br>2. Don't rescope them and use setSessionStatus( ... ) instead of request.udf.setSessionStatus( ... ).</p><p>I thought I'd post it for people searching on the errormessage.</p><p>PS. I do not know whether or not this works on CFMX 7.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622155">2</a> by Michael
		posted on 12/4/2008 at 6:34 PM
		</div>
		<div class="comment_text"><p>@RC &gt;&gt;I've filed a bug and hopefully this will be corrected</p><p>Do yo know if it ever did? I'm using the exact scenario you describe above, UDFs in the request scope, on CF7, and this is bugging me greatly?</p><p>If it didn't get fixed, do you know of any not-too-painful workarounds?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622157">3</a> by Raymond Camden
		posted on 12/4/2008 at 8:16 PM
		</div>
		<div class="comment_text"><p>I just tested w/ 8. Looks to be no. :( Of course, you can always use cfinvoke if you have complex argument naming patterns.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622156">4</a> by Michael
		posted on 12/4/2008 at 8:47 PM
		</div>
		<div class="comment_text"><p>Thanks for checking Ray.</p><p>cfinvoke is unfortunately not an option, as this UDF is fired off inside a loop, and it's sometimes a whopping big loop :-)</p><p>NB. My original plan was to have a simple CFC, invoked in the application.cfm and persisted in the app scope, and call the function like "application.objCFCName.methodName()", but it turned out to be much slower than calling the function out of the request scope, which works like lightning! Any idea why?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622158">5</a> by Raymond Camden
		posted on 12/4/2008 at 9:59 PM
		</div>
		<div class="comment_text"><p>Why is cfinvoke not an option? The size of the loop isn't really a concern.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622160">6</a> by Michael
		posted on 12/5/2008 at 4:20 PM
		</div>
		<div class="comment_text"><p>Well...</p><p>Because I (stupidly) thought that cfinvoke would instatiate a new object every time. I just checked and of course I'm wrong there.</p><p>Still, to use cfinvoke, I still need to wrap my UDF in a CFC, in which case I may as well have reverted back to plan A and persisted the function in the app scope, where named arguments seem to be permissable. But I'm finding that doing this is slower than cfincluding the UDF.</p><p>I'd like to use the CFC, but performance is a real issue and the point of the exercise is to speed everything up as much as possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622161">7</a> by Raymond Camden
		posted on 12/5/2008 at 5:23 PM
		</div>
		<div class="comment_text"><p>Nope, cfinvoke can call a UDF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622163">8</a> by Michael
		posted on 12/5/2008 at 7:04 PM
		</div>
		<div class="comment_text"><p>Oh, excellent! How do you refer to the UDF using the attributes of cfinvoke?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622162">9</a> by Raymond Camden
		posted on 12/5/2008 at 7:30 PM
		</div>
		<div class="comment_text"><p>Just use method="X" where X is a udf on the page. Don't use component= at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622165">10</a> by Michael
		posted on 12/5/2008 at 8:23 PM
		</div>
		<div class="comment_text"><p>I have a feeling I may have missed something here.</p><p>My original call to the UDF, using ordered args looks like this:<br>#request.udfs.encodeString(myStringVar, false, false)#</p><p>To do the same using named args, I would perhaps do something like this:	<br>&lt;cfset objArgs = structNew() /&gt;<br>&lt;cfset objArgs.szHtmlIn = myStringVar /&gt;<br>&lt;cfset objArgs.bNowrap = false /&gt;<br>&lt;cfset objArgs.bCommasToBreaks = false /&gt;</p><p>&lt;cfinvoke method="[X]" argumentcollection="#objArgs#" returnVariable="myReturnVariable" /&gt;#myReturnVariable#</p><p>But what goes in [X]? Trying "request.udfs.encodeString", "udfs.encodeString" or "encodeString" all result in a "Entity has incorrect type for being called as a function" error.</p><p>Copying the UDF back from request scope to variables scope before cfinvoking DOES work: <br>&lt;cfset encodeString = request.udfs.encodeString /&gt;<br>&lt;cfinvoke method="encodeString" ...<br>But does the UDF really have to be back in the vars scope?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622164">11</a> by Raymond Camden
		posted on 12/6/2008 at 12:31 AM
		</div>
		<div class="comment_text"><p>Ah, I had not tried a UDF in a different scope. I guess you would need to do the copy. It is a copy by reference though so there is no real impact on memory/performance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622167">12</a> by Michael
		posted on 12/8/2008 at 3:02 PM
		</div>
		<div class="comment_text"><p>Ah, that all makes sense now!</p><p>Thanks for taking the time to go through that for me. Sometimes I feel with CF the more I learn the less I know...</p></div>
	</div>
</div>
		