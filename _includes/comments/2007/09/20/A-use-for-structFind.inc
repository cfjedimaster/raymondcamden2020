
<div class="comment" id="c_1713672039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672039">1</a> by Ben Nadel
		posted on 9/20/2007 at 7:32 PM
		</div>
		<div class="comment_text"><p>I have never used StructFind(). However, the other day on the CFInsider, I requested the ability to use *just* that syntax:</p><p>getStruct()[key]</p><p>Got my fingers crossed for the fugure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672038">2</a> by Dan Wilson
		posted on 9/20/2007 at 8:16 PM
		</div>
		<div class="comment_text"><p>Yes, I use it all the time. It makes for nicer, tighter syntax.</p><p>As a matter of fact, Mark showed this technique to me in //dalnet/#Transfer about 6 months ago when I was complaining about ColdFusion VS &lt;cfset thisValue = getStruct()[key]&gt;</p><p>DW</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672042">3</a> by Rick O
		posted on 9/20/2007 at 9:46 PM
		</div>
		<div class="comment_text"><p>Hmm.  StructFind(getStruct(),key) seems inherently bad to me.  I don't object to StructFind(), but to getStruct().  If you have to call a function to get at the structure, shouldn't you be checking to make sure that you do indeed get back that structure?</p><p>I know it's more elegant than using a temp variable and checking the result ... but it's also lazy.  If there's no chance that the function will fail and not return the struct and there's also no chance that the key doesn't exist in the structure, that's one thing, but it still encourages bad practices that the n00b who maintains the code after you might not catch.  And what if getStruct() is expensive?  It's all too tempting to do something like:</p><p>&lt;cfif StructKeyExists(getStruct(),key)&gt;<br>&lt;cfreturn StructFind(getStruct(),key)&gt;<br>&lt;/cfif&gt;</p><p>Instead of doing it the longer but safer way:</p><p>&lt;cfset var theStruct=getStruct()&gt;<br>&lt;cfif IsStruct(theStruct) AND StructKeyExists(theStruct,key)&gt;<br>&lt;cfreturn theStruct[key]&gt;<br>&lt;/cfif&gt;</p><p>Maybe I'm just being curmudgeonly, but it just rubs me the wrong way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672041">4</a> by Aaron
		posted on 9/20/2007 at 11:18 PM
		</div>
		<div class="comment_text"><p>"As ColdFusion doesn't support syntax like:<br>&lt;cfset thisValue = getStruct()[key]&gt; "</p><p>But it does support syntax like:<br>&lt;cfset thisValue = getStruct().key&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672043">5</a> by Sammy Larbi
		posted on 9/21/2007 at 12:13 AM
		</div>
		<div class="comment_text"><p>@Rick - it seems bloatingly paranoid to check the type you are expecting every time.  And if the wrong key was passed, would you prefer to quietly move along and give an unknown incorrect result, or blow up so everyone knows it's wrong?</p><p>@Aaron - But then you can't be getting they key dynamically, like: &lt;cfset theKey = "name"&gt; #person[name]#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672044">6</a> by Sammy Larbi
		posted on 9/21/2007 at 12:15 AM
		</div>
		<div class="comment_text"><p>Err... that should have been #person[theKey]#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672045">7</a> by Mark Mandel
		posted on 9/21/2007 at 3:00 AM
		</div>
		<div class="comment_text"><p>@Ray - Thanks for the comment ;o) Including my spelling mistakes and all ;o)</p><p>@Rick - well, if you're getter has a return type of 'struct', then yes, you know it is a struct.</p><p>If it wasn't a struct, it would produce a run time error, which you would want when doing unit testing.</p><p>That's also the whole point of having encapsulated getters and setters - you know what comes in and what goes out.</p><p>Doing that sort of double handling on variable unnecessary seems like a lot of work for not very much payoff, I'm afraid to say.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672046">8</a> by Raymond
		posted on 9/21/2007 at 9:44 PM
		</div>
		<div class="comment_text"><p>is the variable name 's' in your example for struct, or something else? =D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672049">9</a> by Dominic Watson
		posted on 9/24/2007 at 12:46 AM
		</div>
		<div class="comment_text"><p>If you are doing this a lot:</p><p>myValue = StructFind(myFunction(), myKey);</p><p>Surely it would be better to have a function that returns just the single key? Seems like a lot of wasted data transfer seeing as you can't do anything else with the rest of the struct after that code.</p><p>Dom</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672048">10</a> by Dominic Watson
		posted on 9/24/2007 at 12:53 AM
		</div>
		<div class="comment_text"><p>I really must think before I post, I'm always double posting!</p><p>If you wanted a getter for a struct that you only wanted to get single keys for, it might be better to do:</p><p>&lt;cffunction name="getStruct"&gt;<br>   &lt;cfargument name="key"/&gt;<br>   &lt;cfreturn variables.myStruct[arguments.key]/&gt;<br>&lt;cffunction&gt;</p><p>Then</p><p>&lt;cfset myValue = getStruct(myKey)&gt;</p><p>My tuppence</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672050">11</a> by Dan Wilson
		posted on 9/24/2007 at 1:59 AM
		</div>
		<div class="comment_text"><p>I was writing another comment and it got way too long.</p><p>For the record, I am pro-structFind.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.nodans.com%2Findex.cfm%2F2007%2F9%2F21%2FUsing-StructFind-for-fun-and-profit%3AVYQiD1kHwV253vVJm30Pj__yhLc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.nodans.com/index.cfm/2007/9/21/Using-StructFind-for-fun-and-profit">http://www.nodans.com/index...</a></p><p>Dan Wilson</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672051">12</a> by Jesse Merriman
		posted on 10/25/2011 at 6:14 PM
		</div>
		<div class="comment_text"><p>I just tried running this in ColdFusion 9:</p><p>&lt;cffunction name="getStruct" access="public" output="false" returnType="Struct"&gt;<br>    &lt;cfreturn {foo = 1, bar = 2} /&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfoutput&gt;#getStruct()["foo"]#&lt;/cfoutput&gt;</p><p>and it worked, so it must have been fixed during the 4 years since this post was written.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672052">13</a> by Raymond Camden
		posted on 10/25/2011 at 6:20 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing that Jesse.</p></div>
	</div>
</div>
		