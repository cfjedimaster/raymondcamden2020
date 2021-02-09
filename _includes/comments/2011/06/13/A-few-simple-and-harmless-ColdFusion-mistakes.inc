
<div class="comment" id="c_1713733150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733150">1</a> by Phillip Senn
		posted on 6/13/2011 at 10:00 PM
		</div>
		<div class="comment_text"><p>I think the phrase that's gaining popularity is "antipatterns".  Could be wrong though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733145">2</a> by Ryan Vikander
		posted on 6/13/2011 at 10:02 PM
		</div>
		<div class="comment_text"><p>You could always do for #1:</p><p> &lt;cfset greeting = "Hello, " &amp; name&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733151">3</a> by Craig S
		posted on 6/13/2011 at 10:05 PM
		</div>
		<div class="comment_text"><p>Just to prove you right, I'm going to strongly disagree with you on #3... the name might not have any real purpose in the code when you're doing a delete, update, or insert query, but the name does appear with the query in the debug output.  I've found this can be helpful when debugging on a page that has a lot of queries running.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733152">4</a> by Raymond Camden
		posted on 6/13/2011 at 10:08 PM
		</div>
		<div class="comment_text"><p>@PS: I always thought of 'anti patterns' as being a bit bigger.</p><p>@RV: Yep, exactly, but, I would say the form I have above is a bit easier to read. Especially if you had more punctuation around it.</p><p>@CS: Good point there. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733149">5</a> by Rob Barthle
		posted on 6/13/2011 at 10:14 PM
		</div>
		<div class="comment_text"><p>Only pushback I'd give regarding query names in CFC's is if you scope variables in the local scope, there's no extra work involved to begin with in terms of var-scoping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733146">6</a> by Raymond Camden
		posted on 6/13/2011 at 10:15 PM
		</div>
		<div class="comment_text"><p>I'm one of those folks who -hate- using local.x for var scope declaration. I've used it - but rarely. To be clear, I'm very happy Adobe added a "formal" scope for it. I just don't like typing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733148">7</a> by Peter Boughton
		posted on 6/13/2011 at 10:38 PM
		</div>
		<div class="comment_text"><p>I'd be tempted to say #3 doesn't belong in this list, as it's a different "class" of mistake to the others.</p><p>I guess if it was code like &lt;cfquery name="temp"&gt; then that'd be as depressing as the rest, but if it's descriptive it can be useful (even excluding the debugging benefit) - you could see it like the hint attribute of cfargument; a quick description of what the query does.</p><p>If you don't like typing "local.x" you can just setup a snippet/template so you can type cfqn{ctrl-j} and get &lt;cfquery name="local.{cursor}"&gt;&lt;/cfquery&gt; output ready for you to fill in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733153">8</a> by Robert Zehnder
		posted on 6/13/2011 at 10:39 PM
		</div>
		<div class="comment_text"><p>I admit I still cringe when I see unneeded pound signs in code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733154">9</a> by Rob Barthle
		posted on 6/13/2011 at 10:41 PM
		</div>
		<div class="comment_text"><p>@Ray that is interesting because I have the same visceral reaction to having to type &amp;lt;cfset var variablename = "" /&amp;gt; in a function. When Ben Nadel introduced me to var scoping a local scope in CF8 and putting all variables in there, only having to do it one time was like a dream. Now not having to do it at all is even more so.</p><p>To each their own, it seems. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733155">10</a> by Peter Boughton
		posted on 6/13/2011 at 10:43 PM
		</div>
		<div class="comment_text"><p>Oooh, and there's a #5 for you - this is something I hate seeing!</p><p>&lt;cfargument name="firstname" type="string" required="true" default="" hint="first name" /&gt;</p><p>If I ever catch anyone red-handed putting a hint in that is (essentially) identical to the name, I think I may do something very painful to them! ;)</p><p>Same goes for stuff like this:<br>&lt;cffunction name="setFirstname" hint="sets the first name"&gt;</p><p>argh!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733159">11</a> by Raymond Camden
		posted on 6/13/2011 at 11:00 PM
		</div>
		<div class="comment_text"><p>@PB: There's a great section on comments in "Clean Code" that discusses that topic. I agree completely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733156">12</a> by David Hammond
		posted on 6/13/2011 at 11:01 PM
		</div>
		<div class="comment_text"><p>@Peter, I'm not sure if you intended it or not, but I think your example contains #6 too.  AFAIK, there's never a reason to supply a default value if the argument is required.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733158">13</a> by Daniel Heighton
		posted on 6/13/2011 at 11:12 PM
		</div>
		<div class="comment_text"><p>Just wanted to add another place you need the pounds can be in your rags. like cfloop list="" or cfdump var="" if you don't use them it treats it as a string text and loops through, or display the string respectively.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733160">14</a> by Rich Hefter
		posted on 6/13/2011 at 11:32 PM
		</div>
		<div class="comment_text"><p>I also think a query name in #3 could be used for a querynbame.recordcount if you need to see how many records were updated or deleted?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733161">15</a> by Raymond Camden
		posted on 6/13/2011 at 11:36 PM
		</div>
		<div class="comment_text"><p>@Rick: THat is returned, but in the result value, not the query name value. So you would do:  &lt;cfquery result="apples"&gt; and it's  in the apples struct. (Going by memory here - be gentle.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733166">16</a> by Alejandro Suarez
		posted on 6/14/2011 at 12:19 AM
		</div>
		<div class="comment_text"><p>4) it will work in some cases no? <br>eg: evaluate("#i#_type") i can use [i]_type? is that correct? thanks ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733167">17</a> by Raymond Camden
		posted on 6/14/2011 at 12:22 AM
		</div>
		<div class="comment_text"><p>If you were looking in the form scope, it would be:</p><p>value=form["#id#_type"]</p><p>Or</p><p>value=form[id &amp; "_type"]</p><p>If you meant as a general variable, use variables[] instead of form[].</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733165">18</a> by AXL
		posted on 6/14/2011 at 12:40 AM
		</div>
		<div class="comment_text"><p>Could I also add this to the pound signs usage?</p><p>c) For creating a dynamic variable name</p><p>&lt;cfset id = 1&gt;<br>&lt;cfset "user#id#" = "Ray"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733164">19</a> by Raymond Camden
		posted on 6/14/2011 at 12:43 AM
		</div>
		<div class="comment_text"><p>I'd probably write that as</p><p>&lt;cfset variables["user#id#"] = "Ray"&gt;</p><p>As for pound sign usage - see my comment to Ryan V. I think that's more readable in context. But you could also do</p><p>&lt;cfset variables["user" &amp; id] = "ray"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733168">20</a> by Alejandro Suarez
		posted on 6/14/2011 at 12:56 AM
		</div>
		<div class="comment_text"><p>hey thanks that will be really helpful for me,</p><p>BTW: i think this other tip could be useful in your post</p><p>&lt;cfif x is "a" or x is "b" or x is "c"&gt;<br>use:<br>&lt;cfif listFindNoCase("a,b,c", x) is not 0&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733169">21</a> by Raymond Camden
		posted on 6/14/2011 at 12:59 AM
		</div>
		<div class="comment_text"><p>I'll disagree with that one too. If you had more than 3 items, sure. But as 3 items I find it easier and more direct. Yes it's more typing, but it's also "logically" clearer.</p><p>And we are WAY now into the "personal opinion" ranch now. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733171">22</a> by AXL
		posted on 6/14/2011 at 1:14 AM
		</div>
		<div class="comment_text"><p>I was just trying to say that "#" can be used in a dynamic variable name.  That's all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733170">23</a> by Raymond Camden
		posted on 6/14/2011 at 1:17 AM
		</div>
		<div class="comment_text"><p>Sure -but I'd still use variables[] - just as personal preference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733172">24</a> by AXL
		posted on 6/14/2011 at 1:21 AM
		</div>
		<div class="comment_text"><p>Me too.  It was just an example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733173">25</a> by Jaana Gilbert
		posted on 6/14/2011 at 1:22 AM
		</div>
		<div class="comment_text"><p>I'm going to chime in on the #3 on insert.</p><p>If you plan on using <br>SET NOCOUNT ON / <br>Select @@identity as NewID<br>SET NOCOUNT OFF</p><p>You will need the name attribute in your cfquery.</p><p>&lt;cfquery datasource="xxx"&gt;<br>	SET NOCOUNT ON</p><p>	INSERT INTO mytable<br>	(<br>	email<br>	)<br>	VALUES<br>	(<br>	&lt;cfqueryparam xxx&gt;<br>	)</p><p>	Select @@identity as NewID<br>	SET NOCOUNT OFF<br>&lt;/cfquery&gt;<br>&lt;cfoutput&gt;#NewID#&lt;/cfoutput&gt;<br>That will throw an error: <br>"Variable NEWID is undefined. "</p><p>As soon as you put the name attribute in place, this works :)</p><p>Jaana</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733174">26</a> by Raymond Camden
		posted on 6/14/2011 at 1:25 AM
		</div>
		<div class="comment_text"><p>@Jaana: That syntax isn't required since CF8. Use result="foo" and it's returned in the structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733177">27</a> by Jaana Gilbert
		posted on 6/14/2011 at 1:27 AM
		</div>
		<div class="comment_text"><p>Cool, thanks for correcting me :) I'll be reducing my code now :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733176">28</a> by Sharon
		posted on 6/14/2011 at 1:44 AM
		</div>
		<div class="comment_text"><p>&lt;cfif listFindNoCase("a,b,c", x) is not 0&gt;</p><p>Not getting into other debate, but you can do a short-circuit boolean with</p><p>&lt;cfif listFindNoCase("a,b,c", x)&gt;</p><p>No need to include the "IS NOT 0" or "NEQ 0".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733179">29</a> by Chris Tierney
		posted on 6/14/2011 at 1:58 AM
		</div>
		<div class="comment_text"><p>Thanks for the query name tip, I never knew that. Though I'd probably still always use it to give me a hint of what the code is doing in both the code and debugging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733178">30</a> by Chris Giminez
		posted on 6/14/2011 at 2:09 AM
		</div>
		<div class="comment_text"><p>I have been wondering about the need to use cfqueryparam in a cfc where the data has already been "typed" by the cfargument tag. Isn't the cfqueryparam overkill at that point?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733180">31</a> by Raymond Camden
		posted on 6/14/2011 at 2:12 AM
		</div>
		<div class="comment_text"><p>Having overkill for security is a bit like having too much money. It's a problem you want to have. That being said, the cfargument "protection" will validate data types, but nor prevent sql injection. Nor will it help the db perform better. You want the queryparam. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733181">32</a> by Peter Boughton
		posted on 6/14/2011 at 2:26 AM
		</div>
		<div class="comment_text"><p>David wrote:<br>&gt; I'm not sure if you intended it or not, but I think your <br>&gt; example contains #6 too. AFAIK, there's never a reason <br>&gt; to supply a default value if the argument is required.</p><p>Well, yes and no.</p><p>I did mean to refer to that and forgot (thanks for picking up on it), but your reading of it is slightly off.</p><p>If an argument is required, there *cannot* (logically) be a default, because a default can only come into play when a value is not supplied, and you're not allowed to not supply a required argument. (It's not quite a case of not being a *reason* to do it; the actual concept doesn't make sense.)</p><p>However, in CFML what happens is that the "default" attribute is looked at *before* the "required" attribute.<br>This means, if default exists, the required attribute is ignored altogether (which equates to being false).</p><p>Even in the above code where the attribute claims it is required, it is NOT actually required.</p><p>i.e. all three of these lines have the same functionality (remember, attribute order doesn't matter):</p><p>    &lt;cfargument name="firstname" default="" required="true" /&gt;<br>    &lt;cfargument name="firstname" default="" required="false" /&gt;<br>    &lt;cfargument name="firstname" default="" /&gt;</p><p>Hopefully that explanation makes sense?</p><p>The other point I was planning to make is about when people put bad defaults in - generally, either empty string or zero - instead of correctly setting required, and (if required false), using StructKeyExists to determine if a value has been provided or not.</p><p>Defaults should be used when they are helpful (basically, when an argument is most of the time a particular value, that should probably be the default, to simplify the calling code), but "data arguments" (things like firstname) should usually not have defaults (they are either required or optional).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733182">33</a> by tof
		posted on 6/14/2011 at 5:06 AM
		</div>
		<div class="comment_text"><p>@Jaana: In any case, you should't use @@identity but SCOPE_IDENTITY() instead :-).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733183">34</a> by PaulH
		posted on 6/14/2011 at 6:59 AM
		</div>
		<div class="comment_text"><p>didn't cf builder used to whine about cfquery tags without a name?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733186">35</a> by Raymond Camden
		posted on 6/14/2011 at 8:29 AM
		</div>
		<div class="comment_text"><p>Don't know about CFB1, but CFB2 doesn't mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733185">36</a> by Mihai Baboi
		posted on 6/14/2011 at 1:01 PM
		</div>
		<div class="comment_text"><p>Guilty on the first one. I'm always afraid that without the pound signs it won't evaluate as a variable.</p><p>And a bit off topic... I see you're very active on Twitter, yet you don't have a Twitter share button. It would be really nice if I could share easier. Thanks :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733184">37</a> by Raymond Camden
		posted on 6/14/2011 at 3:13 PM
		</div>
		<div class="comment_text"><p>I go back and forth about what "bling" to put on blog posts. BlogCFC has a "Share" toolbar that allows for hitting all the big services. My blog is blogcfc of course, but a different front end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733187">38</a> by Jim Partin
		posted on 6/14/2011 at 5:28 PM
		</div>
		<div class="comment_text"><p>Regarding the lack of name in a cfquery, does that affect how the execution plan is cached? I'm presuming that things like inserts and deletes with queryparams, forming a 'fingerprint' associated with the query name. Does not using a name break this 'fingerprint' and cause the loss of execution plan caching/reuse?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733188">39</a> by Raymond Camden
		posted on 6/14/2011 at 5:30 PM
		</div>
		<div class="comment_text"><p>The name of the query is entirely a ColdFusion thing. The DB server doesn't know what you named it. So it has no impact on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733195">40</a> by Martin
		posted on 6/14/2011 at 6:30 PM
		</div>
		<div class="comment_text"><p>I really want to add how much I hate capitalised <br>&lt;CFTAGS/&gt;</p><p>Sorry everyone. I feel better now.<br>ps Pardon my non US spelling :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733193">41</a> by Jim Partin
		posted on 6/14/2011 at 7:27 PM
		</div>
		<div class="comment_text"><p>The DB doesn't know, but what about coldfusion in using, what is essentially, a prepared statement. If the name is not present, does it create a new prepared statement, or is the fingerprint of the sql query itself enough to inform it to use an existing one?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733194">42</a> by Raymond Camden
		posted on 6/14/2011 at 7:32 PM
		</div>
		<div class="comment_text"><p>I don't think I quite understand you. As far as I know, the name of the query has _nothing_ to do with the prepared statement. All CF does is send the SQL and bound params. The name isn't meaningful in this context in anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733197">43</a> by larry c lyons
		posted on 6/14/2011 at 9:25 PM
		</div>
		<div class="comment_text"><p># 1 drives me crazy all the time. All too often these days I see this sort of error. I suspect its a hold over from very early CF practices.</p><p>As for throw away variables. I may be wrong about this but didn't the earlier versions of CFWACK use this approach for a lot of its examples? Given the popularity of the book Ican see why this keeps appearing in code.</p><p>I didn't know about #3, I thought you always needed to use the name attribute. Like the datasource, is this CF9 only or does it work with earlier versions?</p><p>As for #4, yes. An idea for you Ray, given that you're the acknowledged leader of the "Evaluate?!?! We don't need no stinkin' Evaluate!!" movement, perhaps you could devote some blog space discussing when Evaluate is appropriate.</p><p>regards,<br>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733198">44</a> by Jim Partin
		posted on 6/14/2011 at 9:31 PM
		</div>
		<div class="comment_text"><p>You're thinking of Coldfusion strictly as it's own language. Coldfusion is built on java and thus jdbc. Our coldfusion code gets compiled down into java byte code using those libraries, as evident by the fact that a coldfusion query resultset is extended from jdbc's RowSet classes. We also know that if one doesn't use cfqueryparams for variables or use cfifs to dynamically generate the query syntax, our queries are treated as ad-hoc queries.</p><p>So, when we DO use queryparams, that will get grinded down into the use of jdbc PreparedStatements classes, which allows the DB server to have a cached execution plan that is expected to run repeatedly with changing variables of the same data types, this also allows query caching to a degree on the DB server's side (as opposed to coldfusion caching with cachedwithin).</p><p>When coldfusion encounters your query with query params, it's going to created the PreparedStatement object and likely store it in some sort of java collection that acts as a cache. I would presume that in addition to the query name, page name, the query syntax itself, and possibly cffunction name are incorporated in some fashion to make a hash to use as a key to the PreparedStatement in the java collection for object reuse to reduce object instantiation overhead.</p><p>My Concern is that by not using a name, does that force the query's execution as adhoc in the udnerlying java? Does it still generate a fingerprint or hash to use a PreparedStatement? If it does, does it generate some sort of UUID each time that query is run, or does it intuitively know you want to use the same PreparedStement and use that uuid in place of the missing name, in which case everything could be fine.</p><p>Always keep in mind the underlying architecture.</p><p>Something to think about.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733196">45</a> by Raymond Camden
		posted on 6/14/2011 at 10:19 PM
		</div>
		<div class="comment_text"><p>@Larry: I used to complain about evaluate a lot. But it's been "sped up" quite a bit in recent versions. Mainly now I only recommend against it when it isn't necessary. I use it nowadays in script-only CFCs when I need to execute a dynamic method. You can do it w/o evaluate in tags using cfinvoke, but not in script.</p><p>@Jim: I disagree completely about CF sending the query name, etc, to the DB. There is absolutely no reason the DB needs to know the query name or where it comes from. All the DB cares about is the SQL and the parameters. Period. Who cares if foo.cfc calls it and then goo.cfc calls it? If the same SQL is used then the same query plan should be reused. Shoot, even foo.aspx calls the DB I'd expect the same query plan to be used as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733201">46</a> by Jim Partin
		posted on 6/14/2011 at 11:57 PM
		</div>
		<div class="comment_text"><p>I absolutely agree, the query name never gets sent to the DB. What I am addressing is the coldfusion side, how prepared statement handles are cached in the underlying jdbc architecture.</p><p>Unfortunately, not all databases agree with you in that if the query sql string is the same, the execution plan should be reused. DBs recognize 2 types of queries, adhoc and prepared. Prepareds are given a much higher priority by DBs for query execution plan caching as it's considered an optimized query for repetitive use. Non prepared queires, or adhoc, are give low exec plan caching (if any) in that they are presumed to be one-off queries from a tool or command line interface. There are significant performance differences between the two types of queries.</p><p>Back on the coldfusion side, you have the object instantiation of either a Statement object (adhoc), or a PreparedStatement object (non-adhoc). You don't keep around a Statement object in java memory, it's fire and forget since it's usually going to be treated as adhoc by the DB, especially if you have variables/flow logic in it, then it is indeed going to be a different query, and thus a new instantiation each time the query string changes.</p><p>When you use cfqueryparam, you are telling cf that you would really like to have a PreparedStatement. It looks to see if you have any flow logic or non-paramed variables. If the query is clean, you get a PreparedStatement object.</p><p>PreparedStatements are facts. The query never changes, it has placeholders for variables, but the query string itself does not change. This is beneficial in that the instantiated PreparedStatement (PS) object can be cached by coldfusion and repeatedly called instead of being reinstantiated over and over like a regular adhoc Statement object. Coldfusion, not the DB, would be the interested in knowing the name of the cfquery tag, as it should use that as part of the Key it would use to look up that PS object in it's Mixed Collection of PS objects acting as a cache. Since it needs to check if the query string has changed in order to ensure it's selecting the correct PS object, a oneway hash of both the name and the query string together, and potentially other things such as page, function name, etc, would generate a unique fingerprint key for the Mixed Collection PS cache. It finds a match, it uses that PS object instead of instantiating a new one, the DB is happy because it still has the handle reference from the last time the PS was used on that connection and thus remembers the exec plan and can run it quicker / potentially pull unchanged data from memory cache, and you have a very optimized system, both on the DB side and the CF side.</p><p>Everything is fine if during first pageload (compile time), it assigns a UUID behind the scenes as a name for that parameterized query, as then the rest of the system works as normal. But like not using full variable scopes to address your variables, does saving the 1-3 seconds to type name="qBlah", is it worth the performance loss of not being specific in your cfquery tag. It takes a few cycles longer to generate a UUID than to concatenate a string together for a hash. Perhaps on a small systems with little to medium usage, but on high activity systems, you'll want to squeeze out every piece of performance you can. A little bit of developer pain upfront saves cycles down the road and sets good practices for use elsewhere.</p><p>Given that you are a respected CF dev that many go to for advice and tips, you may want to re-emphasize the performance caveats of devs using the "harmless" mistakes in addition to your fixes. A ineperienced/time crunched dev seeing "harmless" will continue on his way without changing his bad habbit if pitfalls aren't explained. Perhaps "Mostly Harmless" is better in the title ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733200">47</a> by Raymond Camden
		posted on 6/15/2011 at 12:01 AM
		</div>
		<div class="comment_text"><p>While I am not an expert in JDBC - I feel very strongly that you are incorrect here. But - I have no proof. Therefore - I'm going to the source. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733202">48</a> by Pete Freitag
		posted on 6/15/2011 at 1:30 AM
		</div>
		<div class="comment_text"><p>@Jim PreparedStatement caching can be handled by the JDBC driver itself, and isn't necessarily the onus of the Application (ColdFusion in this case). ColdFusion uses DataDirect JDBC drivers which support prepared statement caching via the Max Prepared Statement setting. You seam to be speculating that the query name is part cache key, I would imagine the SQL with parameter placeholders would be the cache key as that would be much more efficient. Have you proven this to be not the case?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733206">49</a> by Peter Boughton
		posted on 6/15/2011 at 1:59 AM
		</div>
		<div class="comment_text"><p>&gt; You can do it w/o evaluate in tags using cfinvoke, but not in script.</p><p>You can do that with without evaluate everywhere ...in Railo. ;)</p><p>It's been bugging me for ages that ACF doesn't support this syntax:</p><p>    &lt;cfset Variable = Object[FuncName](Args) /&gt;</p><p>I finally went and it added a feature request the other day, but I guess it needs more than just me to do so before Adobe might take notice...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733204">50</a> by GrumpyCFer
		posted on 6/15/2011 at 3:09 PM
		</div>
		<div class="comment_text"><p>@Craig#3 Fully agree.</p><p>@Ray#6 @Rob#9  The use of "local." is CFCs is banned at my company. While the intention is good, the execution is dangerous and can introduce some nasty bugs.  e.g. the scope of a variable can change (e.g. mid function) depending on where you declare the "local." version of that variable.  So you either need to make sure you declare all "local." first, always use "local." everywhere, or never use a "local." variable that is the same name as other scoped variables.  While it's possible to accomplish those things, it's a lot safer to require the declaration of a var scoped struct at the top of the function and use that, a la CF8.</p><p>@Alejandro#20 I prefer that as well. (but with NEQ)</p><p>@Sharon#28 We only allow short-circuiting on functions that actually return a boolean, so ListFindNoCase wouldn't be allowed.  This is because we've had too many occurrences of developers thinking typeless like CF and then create bugs because their evaluation needed to be typed.  The more we make them think typed the fewer of those bugs we experience.</p><p>@Ray#31 Double thumbs up and a cheesy smile.</p><p>@Larry#43 re: throw away...  Yes, it was required a long time ago.  Not now, tho.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733205">51</a> by Raymond Camden
		posted on 6/15/2011 at 6:39 PM
		</div>
		<div class="comment_text"><p>From Rupesh Kumar of Adobe:</p><p>"Name of the query is used only as the name of the query variable. It is not used for caching of the statement or query result. Prepared statement is used irrespective of query name specified and its caching is taken care of by the driver."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733207">52</a> by Sarah Kelly
		posted on 6/15/2011 at 11:24 PM
		</div>
		<div class="comment_text"><p>What are your thoughts on (in pseudo-code):<br>if (isDefined(someVar) AND someVar EQ 20)<br>vs<br>if (isDefined(someVar))<br>   if (someVar EQ 20)</p><p>I have encountered some situations where I *think* the second is necessary (complex else situations), but as a general practice, it drives me crazy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733209">53</a> by Raymond Camden
		posted on 6/15/2011 at 11:30 PM
		</div>
		<div class="comment_text"><p>@Sarah: Meh, it depends. I think for 2 clauses then the first one is a lot more readable and sensible. At the end of the day - the real answer is - which is most easy to understand by you and your coworkers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733210">54</a> by Paul
		posted on 6/16/2011 at 9:29 PM
		</div>
		<div class="comment_text"><p>Another one that bothers me: Not self-closing tags that should be self-closed.</p><p>&lt;cfset hello = "goodbye"&gt;</p><p>v.</p><p>&lt;cfset hello = "goodbye" /&gt;</p><p>It works fine without it, but just seems wrong to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733212">55</a> by Raymond Camden
		posted on 6/16/2011 at 9:30 PM
		</div>
		<div class="comment_text"><p>Oh I _definitely_ disagree with you there Paul. :) CFML isn't XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733215">56</a> by Mihai Baboi
		posted on 6/16/2011 at 9:34 PM
		</div>
		<div class="comment_text"><p>I know it's strictly a personal preference but I like to close single tags too. Not only does it look better, but I find the code easier to read (especially for noobs like me the don't know for sure witch tags are single and witch are not).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733217">57</a> by Paul
		posted on 6/16/2011 at 9:36 PM
		</div>
		<div class="comment_text"><p>It's certainly not xml, but it is tagged-based.</p><p>I suppose it's all opinion...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733216">58</a> by Peter Boughton
		posted on 6/16/2011 at 9:45 PM
		</div>
		<div class="comment_text"><p>Except for being tag-based, CFML isn't anywhere near XML - and closing cfset (and other tags) doesn't make it XML.<br>(It does, however, give a nice visual aid when scanning large blocks of code, and is almost zero extra time typing.)</p><p>But this is *definitely* getting away from simple/harmless mistakes and into personal preferences, which tends to generate a lot of posts whilst not being constructive - because very few people even consider changing their style (assuming they even have one in the first place).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733218">59</a> by larry c lyons
		posted on 6/16/2011 at 9:58 PM
		</div>
		<div class="comment_text"><p>You'd think that these annoyances would create some performance related issues. But it looks like they may not.  When I set up a string concatenation in side a loop of over 50000 iterations. <br>For &lt;cfset foo =  foo + "Hello World" /&gt; 15, 325 ms.<br>For &lt;cfset foo =  #foo# + "Hello World" /&gt; 15,478 ms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733219">60</a> by Raymond Camden
		posted on 6/16/2011 at 9:59 PM
		</div>
		<div class="comment_text"><p>Well, that's why I titled this "harmless" mistakes. I don't think any of the issues I raised would have any performance issues.</p><p>As an aside - if you really do need to a lot of string concats, you should switch to Java instead. (I don't mean the entire page, but StringBuffers via createObject. And not StringBuffer, but whatever the 'newer' version of that is in the latest Java. Folks know what I mean.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733220">61</a> by larry c lyons
		posted on 6/16/2011 at 10:04 PM
		</div>
		<div class="comment_text"><p>Actually Ray, Java string concatenation is almost as slow. The fastest was using an ArrayAppend (127ms) then CFSaveContent (45ms) followed by java.lang.StringBuffer, 142 ms. Java string object concatenation (string.concat("Hello World") was as slow as CF concatenation at 16,580 ms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733221">62</a> by Raymond Camden
		posted on 6/16/2011 at 10:08 PM
		</div>
		<div class="comment_text"><p>I didn't say Java concat was fast - I specifically meant StrinfBugger (again though - there's something newer, isn't there?). I forgot about the array/cfsavecontent versions though. I remember someone (was it you maybe) talking about that a year or so ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733224">63</a> by Peter Boughton
		posted on 6/16/2011 at 10:08 PM
		</div>
		<div class="comment_text"><p>StringBuilder is newer than StringBuffer, but it's not a direct replacement.<br>StringBuilder is slightly faster, but at the expense of not being thread-safe, whilst the older StringBuffer is thread safe.</p><p>(The difference between StringBuilder and StringBuffer is minuscule compared to the difference with immutable strings.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733226">64</a> by Raymond Camden
		posted on 6/16/2011 at 10:08 PM
		</div>
		<div class="comment_text"><p>StringBuilder is the "newer" class I was thinking of but couldn't remember.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733225">65</a> by Raymond Camden
		posted on 6/16/2011 at 10:09 PM
		</div>
		<div class="comment_text"><p>Thanks Peter - your comment came in while I was typing mine and didn't see it. Sounds like StringBuffer then is still the one folks should use. (Or try an array as Larry suggests.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733227">66</a> by larry c lyons
		posted on 6/16/2011 at 10:11 PM
		</div>
		<div class="comment_text"><p>I was one of them commenting on this.</p><p>In this case I wanted to include the concat for comparison. I'm still surprised how fast the array methods are. Not something I would have expected given the array to list conversion I used as the last step within the timer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733228">67</a> by Raymond Camden
		posted on 6/16/2011 at 10:14 PM
		</div>
		<div class="comment_text"><p>Normally this is where I point out that these types of comparisons are fun - but not terribly useful in practical situations. But I ran into this in a big way in an Ajax app where I was generated a large response. Switching to Java helped tremendously.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733231">68</a> by larry c lyons
		posted on 6/16/2011 at 10:22 PM
		</div>
		<div class="comment_text"><p>I included string builder in the mix, the time was within a few milliseconds of string buffer. Over 50,000 iterations, the differences are not significant</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733230">69</a> by Josh Curtiss
		posted on 6/17/2011 at 12:42 AM
		</div>
		<div class="comment_text"><p>Mistake #1 is a huge pet peeve of mine and immediately knocks my opinion of a developer down to "noob" status if I see them doing it. Which is fine if they are in fact new to CF...</p><p>Mistake #3: Been doing CF for 12 years and I never knew that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733233">70</a> by Josh Curtiss
		posted on 6/17/2011 at 12:45 AM
		</div>
		<div class="comment_text"><p>On the self-closing tags... I agree with Paul on this one.. When I look at my old code that didn't close CFSET and other tags like that, I cringe.. I totally know it's not necessary and CFML is not XML, but now that I do it, it feels wrong when it's not there. :-D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733232">71</a> by Paul Connell
		posted on 6/20/2011 at 12:44 PM
		</div>
		<div class="comment_text"><p>As to #2, arrayAppend DOES have a return value, 'true' if the append works - so having temp there to catch that you could evaluate it to check the append was successful - but is there ever a situation where it is 'false' but doesn't throw a catchable error? (Just reading the CF8 docs here).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733235">72</a> by Raymond Camden
		posted on 6/20/2011 at 3:12 PM
		</div>
		<div class="comment_text"><p>Not that I know of Paul.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733236">73</a> by GDavis
		posted on 3/16/2012 at 9:46 PM
		</div>
		<div class="comment_text"><p>I know this is an old post, but I just need to get my opinion out there...</p><p>How is adding the pound symbol any more of a mistake then self closing a tag? They both personal preference and unnecessary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733237">74</a> by Raymond Camden
		posted on 3/16/2012 at 10:09 PM
		</div>
		<div class="comment_text"><p>I'd argue overuse of pound signs is more cosmetically disturbing then closing tags you don't have to. But this entire post is really just about _harmless_ things. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733234">75</a> by Scott
		posted on 5/20/2013 at 11:01 PM
		</div>
		<div class="comment_text"><p>[Edited by Ray]</p><p>keep on getting the error: edit does not exist?</p><p>how do i fix ? :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733238">76</a> by Raymond Camden
		posted on 5/20/2013 at 11:17 PM
		</div>
		<div class="comment_text"><p>Scott, I've edited your comment. First, please do not post large blocks of code. As the form above says, use Pastebin or Gists instead. Second, if your comment does not relate to an issue described here, please consider using my contact form, or the cf-talk listserv, or my forums (link above) to ask your general CF question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3055316747">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3055316747">77</a> by dawesi
		posted on 12/16/2016 at 4:19 PM
		</div>
		<div class="comment_text"><p>Landed back here years later looking for something else... google now sucks and it's results suck more than bing in 2016... #irony google is back to it's humble beginnings with inaccurate searches... #anyway</p><p>I know this post is four years old, but these aren't mistakes, they are guidelines. Mistakes end up with an error, or a serious issue. None of these do, so they are no mistakes, just personal preferences.</p><p>"2) Using “throw away” variables"</p><p>counters are a great use of throw away variables ;-) #oneofmany request cleans them up fine.</p><p>"3) Using a name for a cfquery when you don’t have a result set"</p><p>Agree (sort of)... no CRUD query should have no result sets... no error reporting back what happened, not even for audit logs? #badpractice - did your delete effect 1 row or 100,000... #ouch - can't think of a reason why I wouldn't have a name or feedback about what happened... of course I always diff my db changes to the db or disk so they can be rewound and replayed without the offending transactions... I find this easier than to rewind and replay database transaction logs.</p><p>"4) Use of Evaluate when Struct functions are fine"</p><p>Basic use sure, but what about `&lt;cfset bob="evaluate('#var#')"&gt; where var = "one.two.three".... #lol evaluate is a great tool, but not for basic structs...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3055336860">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3055336860">78</a> (In reply to <a href="#c_3055316747">#77</a>) by Raymond Camden
		posted on 12/16/2016 at 4:32 PM
		</div>
		<div class="comment_text"><p>Replies inline:</p><p>"mistakes vs guidelines" Ok, fine, seems a bit picky, but I won't disagree.</p><p>"throw away variables" - I think I was pretty clear about the particular use case here that it applied to. I didn't say to not use counters.</p><p>"name for result sets" - tracking the result is a good example of when you would want it - sure.</p><p>"evaluate" - given that "one.two.three" is a valid CF variable (is it?) than the scope would work fine:</p><p>myval = variables[key]</p></div>
	</div>
</div>
		