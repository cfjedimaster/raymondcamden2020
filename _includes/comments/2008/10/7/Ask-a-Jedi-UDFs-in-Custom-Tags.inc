
<div class="comment" id="c_1713708975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708975">1</a> by Ben Nadel
		posted on 10/8/2008 at 1:17 AM
		</div>
		<div class="comment_text"><p>I think definitely when you are building a full-on application, it makes sense to build UDFs into a bigger-picture structure. But, if you are building a set of custom tags to be modular, I have found building the UDFs right into the tags to be very convenient. But that's the only case I have really come up with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708976">2</a> by Dan Wilson
		posted on 10/8/2008 at 1:49 AM
		</div>
		<div class="comment_text"><p>The timing on this is quite interesting. I had this discussion with myself last week and ended up putting the UDFs in the custom tag.</p><p>I could have just left the processing inline, but it made the code a little less understandable. We all want to write nice code.</p><p>Should I need to refactor this out at some point, it won't be hard to do.</p><p>DW</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708978">3</a> by ike
		posted on 10/8/2008 at 2:44 AM
		</div>
		<div class="comment_text"><p>I haven't done it recently, but I have done it. I did it more often when CF5 was still relatively common in the wild and so at the time I was also running into the forward-slash issue that caused it to error because the tag was executing twice and you can't declare the function twice. Although I remember at the time that you could still get away with it as long as you wrapped the function in some logic like</p><p>cfif thistag.executionmode is "start"</p><p>Then it would work fine...</p><p>One place I can think of off the top of my head where I know I still have some of these is in the onTap framework's lazy-loading libraries. They weren't always CFCs and part of the way they work is by using a custom tag that wraps a cfinclude where the function definition lives.</p><p>I didn't want to repeat the code that would inject the function into the library. Each individual function file in the libraries needs to inject the function into the library, and I didn't want to introduce any more coupling there than I had to.</p><p>So by having the function in the custom tag, the individual function files can just call the function and pass in arguments to inject it. So if I need to change where the libraries live or the way they get injected, I only have to modify the custom tag instead of all the individual function files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708981">4</a> by Nathan Mische
		posted on 10/8/2008 at 5:56 AM
		</div>
		<div class="comment_text"><p>Thanks Ray. The UDF in question is very specific to the functionality of the custom tag in question so I think it makes sense to have it in the custom tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708979">5</a> by Nathan Mische
		posted on 10/8/2008 at 6:06 AM
		</div>
		<div class="comment_text"><p>Just as a follow up, you can call a function defined in a parent tag from a child tag using GetBaseTagData().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708980">6</a> by Stuart Moffatt
		posted on 10/8/2008 at 11:34 AM
		</div>
		<div class="comment_text"><p>Funnily enough I have done this relatively recently, but as Nathan says it was for a specific situation where it was unlikely that we would need the exact same functionality/output somewhere else in our application.</p><p>We have custom tag that displays the full list of categories in a "tree" format. Using a dedicated UDF within the custom tag was the easiest way to handle the recursion that was needed to output the nested &lt;ul&gt;s in the appropriate format, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708983">7</a> by ike
		posted on 10/8/2008 at 11:58 AM
		</div>
		<div class="comment_text"><p>@Stuart - imo that's actually a really good use case example. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708982">8</a> by Dan Sorensen
		posted on 10/13/2008 at 8:15 PM
		</div>
		<div class="comment_text"><p>Thanks for the confirmation.</p><p>I've used ParagraphFormat2 inside of a custom tag to clean up the output and it works great. I can't imagine duplicating the necessary functionality in the tag just to avoid using a UDF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708986">9</a> by Raul Riera
		posted on 10/30/2008 at 5:47 PM
		</div>
		<div class="comment_text"><p>Sorry to reply on this "old" post but, can a Custom Tag call a UDF outside of the tag? or they "live in their own world"? I get an undefined error when trying to do so.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708988">10</a> by Raymond Camden
		posted on 10/30/2008 at 5:50 PM
		</div>
		<div class="comment_text"><p>A UDF is like a variable. Since custom tags have their own variable scope, they can't call a UDF unless they properly scope it. You could do caller.someUDF() for example.</p><p>Typically I store my UDFs in the request scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708987">11</a> by Raul Riera
		posted on 10/30/2008 at 6:33 PM
		</div>
		<div class="comment_text"><p>Thanks that worked great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708989">12</a> by Ron Hopper
		posted on 12/23/2008 at 10:39 PM
		</div>
		<div class="comment_text"><p>I have a related question: Is there any way to catch a runtime exception that is generated inside of a custom tag?</p><p>This obviously wont work, but gives the idea of what I want to do: <br>&lt;cfif thisTag.executionMode eq "start"&gt;<br>  &lt;cftry&gt;<br>&lt;cfelseif thisTag.executionMode eq "end"&gt;<br>  &lt;cfcatch&gt;...&lt;/cfcatch&gt;<br>  &lt;/cftry&gt;<br>&lt;/cfif&gt;</p><p>What are your thoughts on how to accomplish this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708990">13</a> by Ben Nadel
		posted on 12/23/2008 at 10:43 PM
		</div>
		<div class="comment_text"><p>@Ron,</p><p>You can wrap your whole CFIF statement in try/catch:</p><p>&lt;cftry&gt;</p><p>&lt;cfif (THISTAG.ExecutionMode EQ "Start")&gt;<br>... start....<br>&lt;cfelse&gt;<br>... end....<br>&lt;/cfif&gt;</p><p>&lt;cfcatch&gt;<br>.... error handling....<br>&lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708999">14</a> by Ron Hopper
		posted on 12/23/2008 at 10:50 PM
		</div>
		<div class="comment_text"><p>@Ben,</p><p>Thanks for the tip.  I tried that already, but found that it does not catch the exceptions that I am interested in.  I'm looking to catch things that are thrown from nested tags.</p><p>So:<br>&lt;cf_myTag&gt;<br>    &lt;cfthrow message="can you catch me?" /&gt;<br>&lt;/cf_myTag&gt;</p><p>...but this exception just passes right through.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709001">15</a> by Ben Nadel
		posted on 12/23/2008 at 10:57 PM
		</div>
		<div class="comment_text"><p>@Ron,</p><p>Ahhh, I see. The problem there is that exception is NOT actually inside of the custom tag. That error happens inside of the calling page (CALLER). I don't believe the custom tag has any control over this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709000">16</a> by Raymond Camden
		posted on 12/23/2008 at 10:57 PM
		</div>
		<div class="comment_text"><p>Seeing the same here. I think the try won't work because the context is different once you leave the tag for the 'middle' mode. Remember that thisTag.executionMode is start, end, and inactive. inactive is used when child tags are in play. But what you want is support for stuff happening between the tags in general.</p><p>I'm not making sense at all here. In general, I do not think what you want to do is possible. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709003">17</a> by Ron Hopper
		posted on 12/23/2008 at 11:02 PM
		</div>
		<div class="comment_text"><p>@Ben &amp; @Ray,</p><p>Thanks for your quick reply.  I was getting the impression it was not going to be possible.  I think I have a cumbersome workaround for this particular case, but had to ask before I undertake it.</p><p>Thanks Again,<br>- Ron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709002">18</a> by ike
		posted on 12/24/2008 at 1:34 AM
		</div>
		<div class="comment_text"><p>What you can do however is use try-catch within your sub-tags to suppress any errors that occur there, then use getBaseTagData() to collect whatever error messages you want in the base tag and then manually throw the error (or do whatever else you need to do) in the end-tag of your base tag. That should give you the ability to do what you were trying to do with the try-catch. Same idea, just different syntax.</p></div>
	</div>
</div>
		