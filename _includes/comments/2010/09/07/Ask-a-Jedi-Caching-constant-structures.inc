
<div class="comment" id="c_1713726184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726184">1</a> by todd sharp
		posted on 9/7/2010 at 7:17 PM
		</div>
		<div class="comment_text"><p>I'd do the same that you did, only I'd declare the struct as a property and use accessors and call setCoolRankings() in the constructor.</p><p>But, like you said I'd actually have a SimpleConfig bean in ColdSpring that stores the static values and I'd inject that into my services since I use ColdSpring for everything...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726183">2</a> by William FISK
		posted on 9/7/2010 at 7:18 PM
		</div>
		<div class="comment_text"><p>I would create this in <a href="http://disq.us/url?url=http%3A%2F%2FApplication.cfc.as%3Aw4ysJpibTo7B9xLDEJDnmtC8exA&amp;cuid=3321886" rel="nofollow noopener" title="Application.cfc.as">Application.cfc.as</a> part of the function "onApplicationStart", and would create as:</p><p>application.coolRankings = {<br>  low       = "Raymond Camden",<br>  medium = "Ben Forta",<br>  high      =  "The Fonz" };</p><p>Then just refer to application.coolRankings whenever you need to look it up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726175">3</a> by todd sharp
		posted on 9/7/2010 at 7:30 PM
		</div>
		<div class="comment_text"><p>@William... the issue with that approach - as with my ColdSpring approach, really, is that you'd then have to pass that around to all components that need access to the structure.  You'd want to avoid accessing the application scope from your components if at all possible.</p><p>I'm sure you're aware of that - I just wanted to mention that is one drawback to keeping the constants outside of a component...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726178">4</a> by William FISK
		posted on 9/7/2010 at 7:40 PM
		</div>
		<div class="comment_text"><p>@Todd, I must admit I do this quite a bit and I am not really aware of any disadvantage.  What are the potential problems with just directly accessing, that is reading from, the application scope in a component?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726173">5</a> by Raymond Camden
		posted on 9/7/2010 at 7:43 PM
		</div>
		<div class="comment_text"><p>The idea is that - in general - a CFC should not "reach out" of itself. What if you change the name of the application variable? All of a sudden your CFC breaks. But if you had passed in the value to the CFC, then it would not matter. Basically - less cohesion is normally a better thing.</p><p>To be clear - I definitely DO hit the app scope from CFCs. This is especially true of CFCs I use to "respond" to Ajax stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726174">6</a> by William FISK
		posted on 9/7/2010 at 7:51 PM
		</div>
		<div class="comment_text"><p>Ok, I see what you're saying.  In fact I would probably wrap the access to application.coolRankings in a function called say "findCoolRanking".   And then "include" that function in my component.</p><p>But still in any application I do have a number of fairly straightforward set of simple lookups, such as "coolRankings" that I do not want to store in database tables (no point) and so simple store them all as different structs in the application scope, with perhaps a function to access it.</p><p>I was just worried that I might be risking some sort of "race" condition or other weird error by accessing application directly from a component.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726177">7</a> by Raymond Camden
		posted on 9/7/2010 at 7:54 PM
		</div>
		<div class="comment_text"><p>In theory if you refresh the app scope manually (like with a URL hook), you could get a race condition. Ie, line one makes the struct. Another request tries to use it before line 2 sets the values. However, that should be something you don't have to normally worry about.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726179">8</a> by Ryan McIlmoyl
		posted on 9/7/2010 at 8:00 PM
		</div>
		<div class="comment_text"><p>@Todd</p><p>I would declare a property myself, but without the public 'setter' function.  This makes it a little clearer that the value is constant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726180">9</a> by Roe
		posted on 9/7/2010 at 8:40 PM
		</div>
		<div class="comment_text"><p>All cfset's must be inside a function in my components, anything else is evil and all perpetrators will be flogged.</p><p>;-)</p><p>That being said I would also declare the data in coldspring via properties and corresponding mutators. Also doing it this way "caches" the data in the App Scope so it's a 2x win.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726181">10</a> by Raymond Camden
		posted on 9/7/2010 at 8:43 PM
		</div>
		<div class="comment_text"><p>@Roe: Heh, well, now that we have 'real' constructors in CF9 - I give you that point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726185">11</a> by Matt Gersting
		posted on 9/7/2010 at 9:30 PM
		</div>
		<div class="comment_text"><p>Just slightly off-topic, this reminds me of one of the coolest features the Railo folks showed at CFUNITED this year - method caching.  Just in the same way you can cache a cfquery, you can add cachedWithin, etc. to a cfc function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726190">12</a> by Gareth Arch
		posted on 9/7/2010 at 11:12 PM
		</div>
		<div class="comment_text"><p>Ha, great timing on this one.  Just had a need for using some constants in a CFC for an API.  Just reworked it slightly based on some of the suggestions here :)<br>Thanks all!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726189">13</a> by Dominic Watson
		posted on 9/8/2010 at 12:01 PM
		</div>
		<div class="comment_text"><p>If the constants are related to a component, we are declaring them in that component as *public* properties, i.e.:</p><p>&lt;cfset this.SOME_CONSTANT = 5734 /&gt;<br>&lt;cfset this.SOME_OTHER_CONSTANT = 454 /&gt;</p><p>This is an attempt to mimic javas "public static final" style constants (except that they won't be static, or final!). With the example above, we may then have some code such as:</p><p>myObj = CreateObject('component', 'myObj').init();<br>someValue = myObj.someMethod( myObj.SOME_CONSTANT );</p><p>Dominic</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726188">14</a> by Roe
		posted on 9/8/2010 at 11:59 PM
		</div>
		<div class="comment_text"><p>@Dominic</p><p>In that case I'd do this:</p><p>public struct function getSomeConstant() {<br>       return 5734;<br>	}<br>public struct function getSomeOtherConstant() {<br>       return 5734;<br>	}</p><p>At least here you can be assured that the value wont change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726186">15</a> by Dominic Watson
		posted on 9/9/2010 at 3:03 PM
		</div>
		<div class="comment_text"><p>Yeh, that works nicely. We chose not to do that to closer mimic a Java *style* of code - i.e. someClassHas.SOME_CONSTANT. Splittling hairs really.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726191">16</a> by Gareth Arch
		posted on 9/9/2010 at 7:54 PM
		</div>
		<div class="comment_text"><p>@Dominic,<br>I think it's more that you have now made the values public and can be altered, rather than keeping them private and "semi-constant-like", even though you can access them similarly to Java.  Perhaps a mix of the 2?</p><p>variables.CONSTANTS.SOME_CONSTANT = "myPrivateSomeConstant";</p><p>public string function SOME_CONSTANT() { return variables.CONSTANTS.SOME_CONSTANT }</p><p>Then in the calling page it would be slightly modified<br>someClassHas.SOME_CONSTANT()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726194">17</a> by Dominic Watson
		posted on 9/9/2010 at 8:12 PM
		</div>
		<div class="comment_text"><p>I'm well aware that the value is publicly writable - just comfortable with that less-than-perfectness. To my style delactation, this convention screams constant at me:</p><p>someObj.SOME_VALUE</p><p>This less so:</p><p>someObj.getSomeValue()</p><p>I'm happy to allow the flaw.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726197">18</a> by Elliott Sprehn
		posted on 9/10/2010 at 8:58 PM
		</div>
		<div class="comment_text"><p>If you want to go one step further and avoid recreation of the structure for every object instantiation store it in the metadata for the component. This gets you maximum reuse, even better than storing it in the application scope and doesn't violate the encapsulation rule Ray was talking about.</p><p>component {<br>  //...</p><p>  metadata = getMetaData(this);<br>  if( not structKeyExists(metadata,"COOL_RANKINGS") ) {<br>    metadata.COOL_RANKINGS = ...;<br>  }</p><p>  //...<br>}</p><p>Note that you don't even need locking since you're not going to be modifying the value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726195">19</a> by Raymond Camden
		posted on 9/10/2010 at 9:01 PM
		</div>
		<div class="comment_text"><p>Wow - that's a freaking cool idea Elliott. How exactly is it stored though? In the compiled version of the CFC or somewhere else?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726196">20</a> by Eric Belair
		posted on 7/1/2011 at 9:58 PM
		</div>
		<div class="comment_text"><p>What I've done is store a Structure of Constants in a UDF Library (I user the Ben Nadel methodology to store/reuse UDFs - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F257-My-ColdFusion-User-Defined-Function-Library-Structure.htm%29%3A0S9JE0rrJHfh66vXA6ITTdouqw8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/257-My-ColdFusion-User-Defined-Function-Library-Structure.htm)">http://www.bennadel.com/blo...</a> which also contains Utility Functions related to my application. I often need to access all of the Constants as a List or Array or Query, so I simply have get() functions to get the individual values, or the Struct/Array/List/Query version that I need:</p><p>component {<br>        // Constants<br>        VARIABLES._COOL_RANKINGS = {<br>            ultraLow = "Eric Belair",<br>            low = "Raymond Camden",<br>            high = "Ben Forta",<br>            supreme = "The Fonz"<br>            };</p><p>        function getCoolnessList() {<br>            return Request.UDFLib.Struct.StructValuesToList(VARIABLES.COOL_RANKINGS);<br>        }</p><p>        function getCoolRankingsQuery() {<br>            return Request.UDFLib.Array.simpleArrayToQuery(StructValuesToArray(VARIABLES.COOL_RANKINGS));<br>        }</p><p>        function getUltraLowCoolness() {<br>            return VARIABLES.COOL_RANKINGS.ultraLow;<br>        }</p><p>        function getLowCoolness() {<br>            return VARIABLES.COOL_RANKINGS.low;<br>        }</p><p>        function getHighCoolness() {<br>            return VARIABLES.COOL_RANKINGS.high;<br>        }</p><p>        function getSupremeCoolness() {<br>            return VARIABLES.COOL_RANKINGS.supreme;<br>        }<br>}</p></div>
	</div>
</div>
		