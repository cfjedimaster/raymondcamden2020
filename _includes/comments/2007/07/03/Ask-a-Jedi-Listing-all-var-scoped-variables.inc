
<div class="comment" id="c_1713667944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667944">1</a> by Sam Farmer
		posted on 7/3/2007 at 8:04 PM
		</div>
		<div class="comment_text"><p>I like using a "scope" for vars and use private (local is a keyword in query-of-queries) so start most functions with:</p><p>&lt;cfset var private = {}&gt; (replace {} with StructNew() for pre-8)</p><p>and then use the private structure for all my var variables.  To me this is a) consistent with how CF works and b) leads to less chance of having variables in cfcs that are not in the var scope and c) means I can create a new var variable half way through a function.</p><p>You can dump the var scope with this:</p><p>&lt;cfdump var="#getPageContext().getVariableScope()#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667950">2</a> by Raymond Camden
		posted on 7/3/2007 at 8:07 PM
		</div>
		<div class="comment_text"><p>I wouldn't consider the dump you used as valid though since it isn't actually documented. I'm sure it works - but I'd be wary of pushing production code with anything that wasn't _supposed_ to work (ie, documented). That being said, I love your private = {}. I obviously new about short hand notation for structs in CF8, but it never occurred to me use them for _blank_ arrays or structs. Nice!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667951">3</a> by Michael Long
		posted on 7/3/2007 at 9:13 PM
		</div>
		<div class="comment_text"><p>@Sam, I really wouldn't have CF create a struct for each and every function and for each and every invocation of that function. You realize a struct is a heap-based java object that has to be created and released each time, correct?</p><p>Further, I don't see how you have "less chance" of a variable not being in VAR scope. Forget to VAR a cfquery name and your query will still hit the cfc's scope, added struct or not.</p><p>From a cumulative performance standpoint, this is a bad thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667952">4</a> by Sam Farmer
		posted on 7/3/2007 at 9:15 PM
		</div>
		<div class="comment_text"><p>Yeah, I agree with your thoughts about undocumented features and it being valid.  Though, really cfdump should not be used in production IMO.</p><p>The private var scope idea I read about in the comments of this entry (see Matthew Lesko's and Todd Sharp's comments):<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.firemoss.com%2Fblog%2Findex.cfm%3Fmode%3Dentry%26entry%3D948E10DA-3048-55C9-43DF5A62A3E71EDA%3As5mr0iBezF8rygRLAupotwpgHbs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.firemoss.com/blog/index.cfm?mode=entry&amp;entry=948E10DA-3048-55C9-43DF5A62A3E71EDA">http://www.firemoss.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667954">5</a> by Raymond Camden
		posted on 7/3/2007 at 10:11 PM
		</div>
		<div class="comment_text"><p>I use cfdump in production - but only for error emails. It is handy to have a dump of all the data for the current request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667953">6</a> by Sam Farmer
		posted on 7/3/2007 at 10:13 PM
		</div>
		<div class="comment_text"><p>@Michael -- My tests show there is no real time difference when using a stucture (I'll post the test on my blog tomorrow).  Still, I do only use a private structure when I need it.</p><p>As for less chance if you have a big function, say, 50 lines plus, and you're half way through it and working on a loop, it is much easier to add cfloop index="private.i" than it is to do index="i" and go to the top of the function and do cfset var i = 0.  Thats all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667942">7</a> by Michael Long
		posted on 7/4/2007 at 12:05 AM
		</div>
		<div class="comment_text"><p>@sam,  Still don't buy the "less chance" argument. Yes, you just saved yourself ten seconds... but at the expense of a minor performance hit server-side each and every time the function is called from now on. Those hits are small, but implement them as a pattern throughout the system and sooner or later they start to add up. And usually just when things start to scale.</p><p>And I take it back about saving ten seconds, as you now need to type "private." in front of every variable reference. Not to mention the fact that if you now FORGET to type "private." in front of some variable name you've now blown the VAR scope again, but for a different reason.</p><p>Just a bad coding practice in my book.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667956">8</a> by Sam Farmer
		posted on 7/4/2007 at 9:54 PM
		</div>
		<div class="comment_text"><p>@Ray: Ah, yeah, good point.  I do that as well.  Very handy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667939">9</a> by Toby Reiter
		posted on 7/6/2007 at 1:33 AM
		</div>
		<div class="comment_text"><p>@Michael</p><p>I don't use the private or local convention myself, but I've tempted to consider adopting it, precisely because it allows for all of your variables "looking" scoped. If you have any variable that has less than 2 words, you know it wasn't scoped correctly.</p><p>And I think you've posted on another blog about some other programming concern where someone was using structs, and you warned about performance.</p><p>First: most people are not scaling to the point where performance (outside of really poorly designed algorithms) really matters. If the struct helps to design cleaner code, eliminating it for performance is premature optimization.</p><p>Second: adding a struct really doesn't add that much in way of processing.  I ran a very basic test (I know -- looping is a bad testing mechanism). But creating a million structs seems to take around 11 seconds or less on average.  So, that's around 0.01 milliseconds per struct. Only Google, Amazon, or Ebay really needs to worry about shaving off that kind of time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667940">10</a> by Allen
		posted on 4/24/2008 at 2:22 AM
		</div>
		<div class="comment_text"><p>Michael --&gt; It may seem like a bad practice but it's to deal with the bass ackwards way CF approaches scoping for variables (local, global; not CF's "scoping" which isn't scope but something else).  CF screwed it up and now we're just trying to deal with the mess.  I also disagree with the idea that it's a performance hit that actually matters.  It's like the old overly academic argument that you should only use CFOUTPUT around exactly what needs to be generated. I mean, come on, CF variable scopes are just structures in themself.  It's doing it all the time.  This time it just limits that struct to the method call.  What's the diff between 5 freestanding variables and a struct with 5 keys?  If there actually is a difference in perforumance I can't imagine it as anything other than nearly negligible.  And, to step back from it, OO is well know as creating more overhead... so if you're that worried about performance just stick to the old school procedural CF stuff then.  I've written apps with a few thousand concurrent users that, for example, have trim() EVERYWHERE and it didn't cause any issues.  I don't see how a few extra structs should be any different than an extra 5, 10, 30 trims.</p><p>---&gt; "VAR a cfquery name" : Does anyone have an example of how to do this?  I haven't seen it before.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667943">11</a> by Raymond Camden
		posted on 4/24/2008 at 5:10 AM
		</div>
		<div class="comment_text"><p>@Allen - its simple. If the query is named foo, you just do var foo = "".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667946">12</a> by Allen
		posted on 4/24/2008 at 5:33 AM
		</div>
		<div class="comment_text"><p>Thanks!  I was off in la-la land trying to find an attribute in the cfquery tag and trying &lt;cfquery name="var qName"...  Just set it right before the query and you're set.  Sweet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668037">13</a> by jdyer
		posted on 6/28/2011 at 4:01 AM
		</div>
		<div class="comment_text"><p>There is an undocumented feature to gain access and even mutate local scopes without the "var local" method.  It uses getPageContext.getActiveFunctionLocalScope(), getPageContext.popActiveFunctionLocalScope(), and getPageContext.pushNewFunctionLocalScope().  These are undocumented, but with function names like these, do you really need documentation?*  I've even written a function that allows var to be used anywhere in a function (well, not exactly, but you can type for (var("i",1); i LTE someval; ++i) and it creates a local instance.  I posted it to Ben Nadel's blog here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F94-LOCAL-Variables-Scope-Conflicts-With-ColdFusion-Query-of-Queries.htm%3F%26_%3D0.7668919843542221%23comments_35778%3AfReZt8GhNTi-NxBjkUdAsXVc6WY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/94-LOCAL-Variables-Scope-Conflicts-With-ColdFusion-Query-of-Queries.htm?&amp;_=0.7668919843542221#comments_35778">http://www.bennadel.com/blo...</a></p><p>*There is one caveat described in the blog.  If you are poping FLSs, then you have to be careful of errors or use a try catch block around possible errors so you can restore the popped FLSs before allowing the error to be rethrown.  The stack trace pops FLSs to get its information, and if one is missing, you don't get a stack trace, but just an error pointing at the top level function call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668047">14</a> by Raymond Camden
		posted on 6/28/2011 at 5:12 AM
		</div>
		<div class="comment_text"><p>This blog entry was written before CF9 which now has an explicit Local scope. Now you can just introspect that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668048">15</a> by jdyer
		posted on 6/29/2011 at 10:15 PM
		</div>
		<div class="comment_text"><p>Yes, I am aware of CF9's local scope, but at the moment, I'm still unable to upgrade for several reasons.  Anyway, there is another use I have used these functions for that I'm not sure CF9 allows.  Maybe you could test it for me and see?</p><p>I have written a cfargument function which is similar, but slightly different from the regular cfargument tag.  This one has the same options, but it can be used anywhere in a function to allow for overloading a function call.  Say you have a getInput function that takes one known parameter (input type) and switches based on this type to determine what variables should have been passed in under which names or at which positions within Arguments.  Under the hood it does type checking and handles everything similar to the cfargument tag, but can overload the definition at run-time.</p><p>Anyway, the way it works is it pops the FLS to get at the caller's FLS without the need to pass in a reference to it.  Is there a way to do this with CF9, such as getCallerLocalScope()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668045">16</a> by Raymond Camden
		posted on 6/30/2011 at 6:18 AM
		</div>
		<div class="comment_text"><p>Um - think you went a bit above me here. ;) I normally just treat the arguments scope as a struct, so if I have to do anything dynamic with it I just use struct functions.</p></div>
	</div>
</div>
		