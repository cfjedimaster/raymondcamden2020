
<div class="comment" id="c_1713678250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678250">1</a> by Jason Dean
		posted on 3/18/2008 at 8:41 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks, that answered my question perfectly. And now that it is explained, it makes perfect sense. i can;t believe i didn;t see it before.</p><p>Jason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678241">2</a> by Raymond Camden
		posted on 3/18/2008 at 8:45 PM
		</div>
		<div class="comment_text"><p>Don't feel bad. CFC variables scopes is something that can be tricky to developers just getting into it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678237">3</a> by Jim Ruzicka
		posted on 3/18/2008 at 9:54 PM
		</div>
		<div class="comment_text"><p>Another good one:</p><p>&lt;cfset var myVar = "" /&gt;</p><p>and</p><p>&lt;cfset var.myVar = "" /&gt;</p><p>Are these two statements the same within a cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678246">4</a> by Raymond Camden
		posted on 3/18/2008 at 10:03 PM
		</div>
		<div class="comment_text"><p>Nope, unfortunately, unlike the other scopes, the Var scope isn't a "named" scope, so you can't do var.x, and you can't structKeyList it, etc. Some people use something like this:</p><p>cfset var local = structNew()</p><p>and then use local.x, local.y, etc. This means less var scoping and makes it a bit more obvious that a variable is a local var, but personally I don't care for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678238">5</a> by Edward Johnson
		posted on 3/18/2008 at 11:29 PM
		</div>
		<div class="comment_text"><p>What scope are variables that are created by tags like cfloop index="somevariable"?</p><p>Can Should you</p><p>&lt;cfset var intx = 0&gt;<br>&lt;cfloop from="1" to="#q.recordcount#" var=intx&gt;</p><p>so that it's in the local scope, or doesn't it matter?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678227">6</a> by Raymond Camden
		posted on 3/18/2008 at 11:31 PM
		</div>
		<div class="comment_text"><p>Yes, you need to var scope loop iterators. _Anything_ that makes a variable needs to be var scoped. For example, cfquery name="foo", that will end up creating a query named foo, so you need to var scope it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678248">7</a> by Dan Sorensen
		posted on 3/18/2008 at 11:58 PM
		</div>
		<div class="comment_text"><p>I know Adobe needs to keep this style around for backwards compatibility, but I wish they could introduce new scope names that were easier to read and remember for this purpose.</p><p>...Then again, maybe they don't do that for some reason that I'm not aware of. So until then, just one of those things I must keep memorized.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678242">8</a> by Akira
		posted on 3/19/2008 at 12:03 AM
		</div>
		<div class="comment_text"><p>Do you need to var scope queries that do not return values (insert, update, delete)?</p><p>Var scoping them just seems kind of... silly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678245">9</a> by Raymond Camden
		posted on 3/19/2008 at 12:09 AM
		</div>
		<div class="comment_text"><p>Akira, if you don't use a name for your cfquery (did you know names were optional?) then don't var scope it.</p><p>var scoping may be silly, but it's used in other languages as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678243">10</a> by Josh Nathanson
		posted on 3/19/2008 at 1:39 AM
		</div>
		<div class="comment_text"><p>Definitely var scope your index variables in loops.  I was getting an intermittent error for a while that I finally tracked down to just exactly that issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678236">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678236">11</a> by Aaron Longnion
		posted on 3/19/2008 at 2:01 AM
		</div>
		<div class="comment_text"><p>some other easy ones to forget are cfsavecontent and cffile variables.  It's good to be able to manually look at your cfc functions and fix ones you forgot, but I like to also run <a href="http://disq.us/url?url=http%3A%2F%2Fvarscoper.riaforge.org%2F%3AOW0Sjl9T3HvFL9yInc28cc0YnUM&amp;cuid=3321886" rel="nofollow noopener" title="http://varscoper.riaforge.org/">http://varscoper.riaforge.org/</a> fairly often to make sure I didn't miss anything.</p><p>Also, when you have a cffunction with a lot going on in it, it's sometime preferable to do cfset Var local = StructNew() right below your arguments, and then prepend all your function-"local" variables with "local." to ensure you don't miss anything.  Usually, your functions should be small enough that it doesn't get that complicated, but the real word isn't always so simple... ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678233">12</a> by Akira
		posted on 3/19/2008 at 2:10 AM
		</div>
		<div class="comment_text"><p>Ray, no I did not know. I learned it that way and I should read the documentation more carefully. :)</p><p>What I meant by silly is that everything should be local unless specifically made global... it just bugs me a little.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678226">13</a> by Akira
		posted on 3/19/2008 at 3:47 PM
		</div>
		<div class="comment_text"><p>Ok, so I checked the documentation again, and it says that name is required for cfquery. However, when I tried a query without a name, it did not break.</p><p>Thanks for the tip Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678229">14</a> by aadams
		posted on 4/29/2008 at 9:43 PM
		</div>
		<div class="comment_text"><p>Is there a way to var scope a dynamic variable name?  I thought this should work, but doesn't (cfmx7):</p><p>&lt;cfset var "#arguments.passedInVariableName#" = "" /&gt;</p><p>or</p><p>&lt;cfset var setVariable(arguments.passedInVariableName,"") /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678232">15</a> by Raymond Camden
		posted on 4/29/2008 at 11:22 PM
		</div>
		<div class="comment_text"><p>No, but just use a struct.</p><p>cfset var local = structnew()</p><p>cfset local[anythinggoes] = "foo"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678230">16</a> by aadams
		posted on 4/30/2008 at 12:49 AM
		</div>
		<div class="comment_text"><p>Thanks Ray.  I really don't use dynamic names much, but just ran into a situation where I was using someone else's cfc that did this and was getting all kinds of fun variable "sharing" going on.</p><p>I've since just statically renamed these variables, but your suggestion would have been just as well, if not more elegant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678231">17</a> by aadams
		posted on 4/30/2008 at 2:00 AM
		</div>
		<div class="comment_text"><p>After posting the above I realized that the local struct idea would not have worked in my case (unless I'm mistaken).  The dynamic variable names in this case are used for cfquery calls within the function (i.e. &lt;cfquery name="#anythinggoes#"...&gt;).</p><p>If you use local[anythinggoes], (i.e. &lt;cfquery name="local[#anythinggoes#]"...&gt; ) CF throws an error because the name local[theactualvalue] "is not a valid ColdFusion variable name".</p><p>I may be wrong, but if you do &lt;cfquery name="#local[anythinggoes]#"...&gt; the query results would not be locally scoped since #local[anythinggoes]# would just be a placeholder for the real variable name.</p><p>Like I mentioned before I'm now just using a static name for the query and that is fine (and probably the only way to do it).  In this case, the dynamic naming of queries is not for referencing the query object itself (inside or outside) of the function, but is simply so that debugging output displays the descriptive name for the query.  For instance:</p><p>&lt;cfscript&gt;<br>   myQuery = <a href="http://disq.us/url?url=http%3A%2F%2FqueryCFC.read%3AGBeJBEtpi2Z2HXs6ABa41FNIAXs&amp;cuid=3321886" rel="nofollow noopener" title="queryCFC.read">queryCFC.read</a>(sql="select * from orders", name="getAllOrders");<br>&lt;/cfscript&gt;</p><p>The debugging output would show the query name as "getAllOrders".  petty I know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678235">18</a> by Raymond Camden
		posted on 4/30/2008 at 2:01 AM
		</div>
		<div class="comment_text"><p>Why not just do</p><p>cfquery name="mydata"<br>local[dynamicnamehere] = mydata</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678234">19</a> by aadams
		posted on 4/30/2008 at 2:07 AM
		</div>
		<div class="comment_text"><p>That defeats the purpose.  The goal was to name the query for debugging output purposes.  I'm better off just keeping the static name rather than passing back the query to the local struct.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678244">20</a> by Raymond Camden
		posted on 4/30/2008 at 2:12 AM
		</div>
		<div class="comment_text"><p>Ah, I missed that. Why not use the result= attribute to get the debug info? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678251">21</a> by aadams
		posted on 4/30/2008 at 3:09 AM
		</div>
		<div class="comment_text"><p>Good idea, but I'm looking at the CF debugging output, which still shows the actual query object variable name and not the result attribute value.  Also, since I var scope the query, I cannot see the result struct outside of the function, and would then have to put a cfdump (our output) inside the function and turn output="true" on the function.  I don't like the taste of that.</p><p>Maybe there's something I'm missing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678253">22</a> by Raymond Camden
		posted on 4/30/2008 at 3:18 PM
		</div>
		<div class="comment_text"><p>Nope, you aren't. If you want the debugging then you are kinda screwed there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678252">23</a> by aadams
		posted on 4/30/2008 at 7:25 PM
		</div>
		<div class="comment_text"><p>That's usually my case :)  This ones not a biggie, but I'm glad to have my sanity confirmed by a Jedi.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331929032">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331929032">24</a> (In reply to <a href="#c_1713678246">#4</a>) by Charles Robertson
		posted on 10/28/2015 at 9:22 PM
		</div>
		<div class="comment_text"><p>Why don't you care for it Raymond? Just interested. I use var local = StructNew() or var local = {}. It is a great time saver and provides a descriptive way of telling other developers that the variable is local to its method...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331933234">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331933234">25</a> (In reply to <a href="#c_2331929032">#24</a>) by Raymond Camden
		posted on 10/28/2015 at 9:24 PM
		</div>
		<div class="comment_text"><p>Um... I don't know. 8 years ago was a lifetime ago. ;) As it stands, "local" is a real scope now that equals the var scope. CF should have done it this way to start off. Now I'd have no problem using local.x, y, etc since it is just the var scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331935547">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331935547">26</a> (In reply to <a href="#c_1713678231">#17</a>) by Charles Robertson
		posted on 10/28/2015 at 9:26 PM
		</div>
		<div class="comment_text"><p>&lt;cfquery name="local.query" datasource="#variables.dsn#"&gt;</p><p>Works perfectly. I use it all the time...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331938040">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331938040">27</a> (In reply to <a href="#c_2331935547">#26</a>) by Raymond Camden
		posted on 10/28/2015 at 9:27 PM
		</div>
		<div class="comment_text"><p>Err... yes. Because local equals var in newer versions of ColdFusion. Please make note of the age of this post. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331973423">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331973423">28</a> (In reply to <a href="#c_2331933234">#25</a>) by Charles Robertson
		posted on 10/28/2015 at 9:49 PM
		</div>
		<div class="comment_text"><p>Sorry. I just noticed this post is 8 years old. I guess if you use, var local = StructNew(); It protects against backward compatibility and just produces a harmless empty structure in CF9+</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331983637">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331983637">29</a> (In reply to <a href="#c_2331938040">#27</a>) by Charles Robertson
		posted on 10/28/2015 at 9:55 PM
		</div>
		<div class="comment_text"><p>Point taken. I only just realised how old this post was...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2331988460">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2331988460">30</a> (In reply to <a href="#c_2331973423">#28</a>) by Raymond Camden
		posted on 10/28/2015 at 9:58 PM
		</div>
		<div class="comment_text"><p>I'm being picky, but my understanding is that var local = structnew() in 9+ won't do anything, it is basically ignored, since local is a scope and is itself the var scope. So technically it isn't making a new struct.</p><p>As I said - picky - and I could be wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2332017546">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2332017546">31</a> (In reply to <a href="#c_2331988460">#30</a>) by Charles Robertson
		posted on 10/28/2015 at 10:16 PM
		</div>
		<div class="comment_text"><p>You are probably right. I guess I am thinking if a client wants to use codebase from a CF9+ project on an older application server, then creating these benign structures might come in useful. But this is pretty obscure. </p></div>
	</div>
</div>
		