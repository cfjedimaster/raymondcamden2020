
<div class="comment" id="c_1713711599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711599">1</a> by johan
		posted on 1/22/2009 at 9:02 PM
		</div>
		<div class="comment_text"><p>creating API CFC's would be a good tutorial :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711590">2</a> by Raymond Camden
		posted on 1/22/2009 at 9:05 PM
		</div>
		<div class="comment_text"><p>I did do a blog entry on ColdSpring and generating remote CFCs:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F8%2F22%2FAsk-a-Jedi-Making-use-of-ColdSpringModelGlue-and-Remote-Proxies%3AfMwzK2hueVtYCCvRsR60Xg9EyRY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/8/22/Ask-a-Jedi-Making-use-of-ColdSpringModelGlue-and-Remote-Proxies">http://www.coldfusionjedi.c...</a></p><p>I could do a simpler, non-framework one as well if folks think it makes sense. It's hard to NOT use CS/Model-Glue when I'm so used to it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711611">3</a> by Ben Nadel
		posted on 1/22/2009 at 9:17 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Good post. I always have to remember that what doesn't bend, breaks :)</p><p>@johan,</p><p>For me, when I create an API-only CFC for remote invocation, I usually just set my "instance" variables inside of the pseudo constructor (in CFcomponent, before first CFFunction). These variables usually work the same way your Init() method, only they refer to hard-coded APPLICATION scoped variables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711608">4</a> by Teddy R. Payne
		posted on 1/22/2009 at 11:49 PM
		</div>
		<div class="comment_text"><p>This may a matter of style, but I typically do not have externally scoped variables in my CFC(s).</p><p>I too use the pseudo constructor approach.  If the values of the psuedo constructor need to be reffered to from outside of the CFC, I would pass those values into the the init() function that would then in turn populate those values into the variables scope.</p><p>I just don't like having to depend on a particular given scope to use my CFC(s) as I could receive that information from complex type friendly scopes.</p><p>Ray's second approach, at a basic level, is related to that idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711606">5</a> by Jay
		posted on 1/23/2009 at 12:06 AM
		</div>
		<div class="comment_text"><p>Ben, Ray,</p><p>Great work here guys, Ben's post on threading is epic. Threading still makes my head spin, adds a third dimension to programming.</p><p>Ray, I personally would love a simpler, non framework post on API-only CFCs. I recently created one and felt a little unsure. I ended up with something like this:</p><p>&lt;cfcomponent&gt;</p><p>	&lt;cfset this.baseURL = "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.yahoo.ca%2Ffoo%3AGByr3eapytlEAmA-JXlAcdwmZDc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.yahoo.ca/foo">http://www.yahoo.ca/foo</a>" /&gt;<br>	&lt;cfset this.DSN = "mydsn" /&gt;<br>	&lt;cfset this.logfilename = "logApiWebService" /&gt;</p><p>	&lt;!--- local complonent, being paranoid but i want to hide db code from the front facing cfc, not sure if this is re-created on every webservice call---&gt;<br>	&lt;cfset this.lclApi = CreateObject("component","foo.apiPrivateMethods").init(this.DSN) <br>/&gt;</p><p>	&lt;cffunction name="getUserDetails" access="remote" returntype="xml" output="false"&gt;<br>		....<br>	&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p><p>PS My 80s movie trivia is rusty but did Ray just break out a ghostbusters quote?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711597">6</a> by Raymond Camden
		posted on 1/23/2009 at 12:10 AM
		</div>
		<div class="comment_text"><p>@Jay: To answer your question in your code, yes, this.lclApi will be recreate on every hit, which will be a performance hit.</p><p>Yes, I did whip out a Ghostbuster quote. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711601">7</a> by Teddy R. Payne
		posted on 1/23/2009 at 12:11 AM
		</div>
		<div class="comment_text"><p>I believe it was a Ghost Busters quote and I believe the character "Ray" said it.  I could be wrong. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711602">8</a> by Raymond Camden
		posted on 1/23/2009 at 12:18 AM
		</div>
		<div class="comment_text"><p>Nope, not Ray, it will Bill Murray's character. Ray was Dan Akroyd(sp).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711600">9</a> by Raymond Camden
		posted on 1/23/2009 at 12:22 AM
		</div>
		<div class="comment_text"><p>Had to look it up - Bill Murray's character was Peter Venkman.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711610">10</a> by Jay
		posted on 1/23/2009 at 12:23 AM
		</div>
		<div class="comment_text"><p>Sorry * my previous comment was massive.</p><p>Awesome, i love ghost busters, i gotta go rent that movie again.</p><p>@Ray, so is the answer to the lclApi problem ColdSpring?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711609">11</a> by Brian Rinaldi
		posted on 1/23/2009 at 12:26 AM
		</div>
		<div class="comment_text"><p>I do the same for all my remote service components. The services are all wired with ColdSpring and then application scoped and the remote facade cfc knows to call them in application scope. I don't even know if this totally breaks encapsulation since it seems to me part of the job of the remote service to know where the service it is remoting is cached and in the end, if I change how I cache the service, I am still not changing it all over my application but just in the service that requires it. (yeah...that explanation was awkward but I think you get the picture).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711605">12</a> by Raymond Camden
		posted on 1/23/2009 at 12:29 AM
		</div>
		<div class="comment_text"><p>@Jay: Good question. As you see I strongly encouraged folks to look at ColdSpring. I don't want to say CS is "the" answer because it is just one way of solving the issue. If you have not used yet than I'm not sure I'd add it _just_ to add a remote API to an existing project.</p><p>Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711603">13</a> by Roland Collins
		posted on 1/23/2009 at 12:29 AM
		</div>
		<div class="comment_text"><p>Ray, I think you're confusing the concepts of encapsulation and decoupling.  The example you're talking about above is actually an example of decoupling.  Decoupling is about making sure that objects don't have dependencies on other objects, as in your example above.  Encapsulation is more about making sure that an object provides a coherent and complete interface so that objects that call it do not have to have any idea how it works internally.</p><p>In fact, in the example above, the first function is fully encapsulated - the caller has no idea how the function works internally.  It is, however tightly-coupled with the application scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711612">14</a> by Raymond Camden
		posted on 1/23/2009 at 12:36 AM
		</div>
		<div class="comment_text"><p>Roland - dang - yea - very good point. Is it worthwhile to edit the blog entry? I don't want to lead folks down the wrong path, and using the wrong terminology is bad.</p><p>Let me add a little addendum to the end of the blog article, and you can tell me if it clears up the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711614">15</a> by Raymond Camden
		posted on 1/23/2009 at 12:43 AM
		</div>
		<div class="comment_text"><p>Roland (and everyone else really), I did a quick update at the end. It is clear? Is it enough?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711613">16</a> by Roland Collins
		posted on 1/23/2009 at 12:57 AM
		</div>
		<div class="comment_text"><p>Looks good :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711615">17</a> by Teddy R. Payne
		posted on 1/23/2009 at 12:57 AM
		</div>
		<div class="comment_text"><p>Ray,<br>That should work.</p><p>That would then in turn be a good idea for a follow up topic:  "Encapsulation, for real this time".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711595">18</a> by Michael Long
		posted on 1/23/2009 at 2:58 AM
		</div>
		<div class="comment_text"><p>Another way of looking at objects is the "component" model, where each component is a black box (encapsulated), but where the black box may manage objects and entities and resources outside of itself.</p><p>One example of this would be the fairly common practice of creating "beans" as interfaces to data. At least one framework that I know of creates beans to manage scopes like the session scope and the request scope.</p><p>The bean provides a common "get/set" interface to these external resources and as far as anyone using the bean knows, the data accessed by the bean could be stored anywhere. Internally, however, a session bean manages data in a session scope that exists outside of itself.</p><p>A planned side effect, if you will. And one where the object and the data are separate but tightly coupled. Swap in a "client" bean, and the rest of the system won't care. Swap that bean with one that communicates with a app server, and it still shouldn't care.</p><p>One needs to know WHY the rule exists, what it's intended to accomplish, and when to apply it... and when to ignore it.</p><p>Or in the spirit of the article, "... they're more like guidelines than rules, actually."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711594">19</a> by Martijn van der Woud
		posted on 1/23/2009 at 1:58 PM
		</div>
		<div class="comment_text"><p>If you want to learn more about concepts such as encapsulation and decoupling, and why they are important, Head First Design Patterns is a good read: <a href="http://disq.us/url?url=http%3A%2F%2Foreilly.com%2Fcatalog%2F9780596007126%2F%3AufJ_xfhAjtf3BWRnlCL-5IqY_58&amp;cuid=3321886" rel="nofollow noopener" title="http://oreilly.com/catalog/9780596007126/">http://oreilly.com/catalog/...</a></p><p>The book is meant for Java developers and the code examples are in Java, but Java is not that hard if you have worked with CFCs and cfscript extensively.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711596">20</a> by Hussein Grant
		posted on 1/26/2009 at 9:45 PM
		</div>
		<div class="comment_text"><p>I think this IS a good example Ray as simple as it may be presented.<br>Funny thing is, I always felt uncomfortable referencing cf scopes directly inside my methods and therefore made a conscious effort not too where ever possible. I think the cross over from procedural to OOP style development brings along some bad habits and it does take time to part with the old baggage. It's good to know that my thinking wasn't far off at all.</p></div>
	</div>
</div>
		