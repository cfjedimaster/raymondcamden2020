
<div class="comment" id="c_1713669731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669731">1</a> by Sean Corfield
		posted on 8/6/2007 at 9:17 AM
		</div>
		<div class="comment_text"><p>I'm curious, why would you use find() and replaceNoCase() instead of left(arguments.missingMethodName,3) is "get" (or "set") and then right(arguments.missingMethodName, len(arguments.missingMethodName)-3)</p><p>You also need to be careful about the missingMethodArguments data structure. If you don't use named arguments in the call, it will just contain positional arguments - i.e., arguments named "1" and "2" etc so arguments.missingMethodArguments[key] will not work. For the setter, you'll need to reference arguments.missingMethodArguments[1] if arguments.missingMethodArguments[key] is not defined.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669717">2</a> by Sean Corfield
		posted on 8/6/2007 at 9:23 AM
		</div>
		<div class="comment_text"><p>CFML Reference pg 117:</p><p>CFCs support an onMissingMethod function. By defining an onMissingMethod function in the cfcomponent tag <br>body in the CFC, you can handle calls to methods that are not implemented in the CFC. If an application calls a <br>function that is not defined in the CFC, ColdFusion calls the onMissingMethod function and passes it the requested <br>method’s name and arguments. If you do not define an onMissingMethod function, a call to a method that is not <br>defined in the CFC causes ColdFusion to throw an error that must be handled in the calling code. <br>The onMissingMethod function is useful for several purposes: <br>• To handle errors directly in the component, instead of requiring that each instance of code that calls the <br>component handles them. <br>• To create a dynamic proxy, an object that can take arbitrary calls and dynamically determines the correct action. <br>The onMissingMethod function must have the following format: <br>&lt;cffunction name="onMissingMethod"&gt; <br>&lt;cfargument name="missingMethodName" type="string"&gt; <br>&lt;cfargument name="missingMethodNameArguments" type="struct"&gt; <br>code to handle call to nonexistent method <br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669735">3</a> by Sean Corfield
		posted on 8/6/2007 at 9:45 AM
		</div>
		<div class="comment_text"><p>onMissingMethod() is probably my favorite CF8 feature. Partly because I asked for it (in a hallway conversation with Ashwin Mathew early in 2006 - while I was still at Adobe). Partly because it gives us - CFers - access to a feature that Smalltalk and Ruby have had for a long time. Whilst the docs suggest that it might be used for error handling, it's really all about dynamic proxies - even the "error handling" is a dynamic proxy that determines the behavior of method calls at runtime.</p><p>Good to see the get/set example. That's one of the classic examples I like to give - I'll be writing a lot more about onMissingMethod() in due course :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669734">4</a> by Michael Long
		posted on 8/6/2007 at 11:32 AM
		</div>
		<div class="comment_text"><p>I have mixed emotions regarding using onMissingMethod vs. a code generator and actually creating getter/setter methods. The biggest drawback I see is that you lose the introspective self-documenting aspect. Dump a CFC and you can see all of the methods available. Do a getMetaData and you can walk the list and do your own documentation routines.</p><p>Without the code, you're more in the dark. Is it getCustomerNumber() or getCustomerID()?Is it getArticleName() or getArticleTitle()?</p><p>Or do I need to write a documentation function that checks the field list and generates virtual documentation for virtual functions?</p><p>Not to mention that with a code generator there's an existing function template to copy and/or modify as needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669728">5</a> by Sean Corfield
		posted on 8/6/2007 at 12:02 PM
		</div>
		<div class="comment_text"><p>@Michael, like all things in life, it's a tradeoff - in this case between productivity and... well, quite a number of things really.</p><p>I'm a bit surprised at your example method names - I think it speaks volumes about the sort of object models you work with.</p><p>In my world, I'd see getCustomer().getId() and getArticle().getTitle() and, frankly, those are more obvious names (you wouldn't really have customer.getCustomerNumber() and  article.getArticleTitle() surely?).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669724">6</a> by Michael Long
		posted on 8/6/2007 at 12:31 PM
		</div>
		<div class="comment_text"><p>I gave an off-the-top-of-my-head example of how not having visible or easily referenced names can lead to confusion and you're making assumptions about our object models and naming conventions? Okay, since we're talking about customer id's (or numbers) how about order.getCustomerID()? (vs. order.getCustomerNumber())</p><p>I mean, I assume it's okay for an order object's method to have a getter for foreign keys? Of course, I could have order.getCustomer().getID(), but loading a new object and the accompanying database hit seems like overkill for the times when all I need is the ID (or is it the number?) (too bad I can't do a cfdump on the object and find out).</p><p>At any rate, like I said one loses the introspective self-documenting aspect and, like I said, I have mixed emotions that the tradeoffs are worth it. Perhaps, when you get around to discussing "quite a number of things really" in a future post you could elaborate and, in the process, convince those of us who may be on the fence.</p><p>And stop dissin' my function names. (grin)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669729">7</a> by Mike Rankin
		posted on 8/6/2007 at 1:44 PM
		</div>
		<div class="comment_text"><p>I really like that approach strictly from a reduction of clutter standpoint.  I use code generators, too, but you really don't loose a whole lot by being able to presume that there is at least a simple getter/setter mechanism in place for any property you add.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669727">8</a> by Raymond Camden
		posted on 8/6/2007 at 3:12 PM
		</div>
		<div class="comment_text"><p>Wow, lots of comments.</p><p>@Sean1- No reason. I just thought of find first. As for your second para, when I write beans, I normally write my set like so</p><p>&lt;cffunction name="setfoo" ....&gt;<br>&lt;cfargument name="foo" ...</p><p>So my arg for setX is always X.</p><p>@Sean2 - Ug. So get this. When I search just for onMissingMethod, it isn't found. Let me guess - the PDF search ignores it because it is code? Or in a different format? I had to search for another block of text from your paste to find it.</p><p> Now tell me this Sean, from that doc, you read that the arguments must be named like that? It says "the following format", but I don't think that is specific enough. Look at App.cfc - while you have to follow the format, you _can_ use different argument names.</p><p>@Sean3 - let me know. Outside of the bean I'm not sure where else I'd use it - so I'd love to see examples.</p><p>@Michael - you could alleviate that a bit by using hint= in your cfcomponent tag. "I'm a Customer bean with these properties: name,id,gender,number"</p><p>@Sean3 -</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669726">9</a> by Justin
		posted on 8/6/2007 at 5:45 PM
		</div>
		<div class="comment_text"><p>Does anyone else feel that using the missing method handler for expected processing is kind of a wrong usage of it? I realize that taking the approach that Ray had pointed saves time in continuously writing monotonous getters and setters, but I some how feel as though the implicit exception handling is not the way to go. If you are willing to extend your component to include the 'core bean', why not write a generic getter and setter method (ie. get(attrib) &amp; set(attrib,value) ) instead?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669725">10</a> by Sean Corfield
		posted on 8/6/2007 at 11:07 PM
		</div>
		<div class="comment_text"><p>@Ray, for setFoo() - remember that if the method is not present there is no named argument and therefore the argument will be anonymous in onMissingMethod(). That was the point I was trying to make.</p><p>Searching the PDF? I opened it up in Preview on the Mac and typed in onmissinm and it found a reference on pg 116 and loads of references on pg 117 (in the section I quoted). I agree it's odd that the arguments must be exactly as named - I'm assuming that's because the missing method call is handled at the call site and it is trying to avoid the overhead of introspecting the actual arguments etc?</p><p>@Justin, onMissingMethod() was specifically added for "expected processing". In the same way that Smalltalk and Ruby have missing method handlers for dynamic behavior. This is what really sets CF apart from Java, for example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669730">11</a> by Raymond Camden
		posted on 8/6/2007 at 11:16 PM
		</div>
		<div class="comment_text"><p>@Sean: I don't get what you mean. I did:</p><p>&lt;cfset mybean.setName(name="foo")&gt;</p><p>And it worked fine. I had "name" as a struct key in the arguments struct.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669733">12</a> by Sean Corfield
		posted on 8/6/2007 at 11:28 PM
		</div>
		<div class="comment_text"><p>I meant: &lt;cfset myBean.setName("foo") /&gt; which is how most people write their code, yes? In that case, your onMissingMethod() handler won't work unless you add code to handle unnamed arguments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669732">13</a> by sal
		posted on 12/21/2007 at 7:16 AM
		</div>
		<div class="comment_text"><p>"And stop dissin' my function names."</p><p>HAHA, got a kick out of that one geek style...</p><p>interesting commentary...</p><p>cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669722">14</a> by Ahamad
		posted on 8/25/2008 at 6:24 PM
		</div>
		<div class="comment_text"><p>I have posted a simple example on onMissingmethod here.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcf-examples.net%2Findex.cfm%2F2008%2F8%2F25%2FonMissingMethod-Example%3A4EzTxRbmV1psb56HI1Hx7mOZhAA&amp;cuid=3321886" rel="nofollow noopener" title="http://cf-examples.net/index.cfm/2008/8/25/onMissingMethod-Example">http://cf-examples.net/inde...</a></p></div>
	</div>
</div>
		