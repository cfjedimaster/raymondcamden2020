
<div class="comment" id="c_1713671151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671151">1</a> by Dustin
		posted on 8/30/2007 at 5:31 PM
		</div>
		<div class="comment_text"><p>"In the past, the only way to allow for any CFC would be to use 'any'."</p><p>This isn't entirely accurate. I've been doing this since MX 6.1, this is how I require a component of any type:</p><p>&lt;cfargument name="bean" type="WEB-INF.cftags.component" required="yes" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671152">2</a> by Raymond Camden
		posted on 8/30/2007 at 5:32 PM
		</div>
		<div class="comment_text"><p>Ah - good one there Dustin!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671157">3</a> by David
		posted on 8/30/2007 at 7:19 PM
		</div>
		<div class="comment_text"><p>Ray - could you give an example of why (and maybe how) I would do this?</p><p>Cheers,</p><p>Davo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671158">4</a> by Raymond Camden
		posted on 8/30/2007 at 7:25 PM
		</div>
		<div class="comment_text"><p>There is a function up on CFLib that generates documentation for CFCs. That could be switched to use component.</p><p>I can't think of much more - my creativity today is low. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671156">5</a> by Dustin
		posted on 8/30/2007 at 9:00 PM
		</div>
		<div class="comment_text"><p>Personally, I use beans to pass data around. A bean is basically a component that stores data and has getters/setters for each data element in the bean. What I've done is created a validation object that I pass the bean to for validation. The reason I do this is because I can set up my validation rules inside a centralized validation XML file.  This way, whenever my validation rules change, I don't have to search through all my code to find out where all it's being validated. I can simply change the validation rules for the mapping of the bean.</p><p>HTH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671154">6</a> by Michael Long
		posted on 8/30/2007 at 10:32 PM
		</div>
		<div class="comment_text"><p>Not sure why this was there in the first place. "Any" was much too loose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671159">7</a> by Mike Rankin
		posted on 8/30/2007 at 11:39 PM
		</div>
		<div class="comment_text"><p>I'm pretty sure I've been using typed components as arguments and return values since cfmx6.1.  I'll have to go back and check.  The short hand for arrays and structures is definitely new, though.</p><p>I did a blog entry a few weeks back about the type checking feature/issue with sample code if you want to see it in action.  <a href="http://disq.us/url?url=http%3A%2F%2Fmrmx.blogspot.com%2F2007%2F07%2Ftyped-arrays-in-cfcs.html%3AwN34TR8MaNlmju5fbOsL3abeqcY&amp;cuid=3321886" rel="nofollow noopener" title="http://mrmx.blogspot.com/2007/07/typed-arrays-in-cfcs.html">http://mrmx.blogspot.com/20...</a></p><p>Depending on the application's setup, sometimes you have to use the full dot path to the component to properly type it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671155">8</a> by prashant
		posted on 11/16/2008 at 9:06 AM
		</div>
		<div class="comment_text"><p>I am using a "Query Factory" component for all queries for my big Application. I want to know is it good or bad to use this in place of CFquery as performance wise.</p><p>I am using same kind of process for Object Factory. so its good or bad performance wise? <br>Pls advice.</p><p>Here is the code for QueryFactory, this is rough code may need some corrections, goal is to find execting all queries with queryFactory is good or not? thanks always for suggestions.<br>--------------------------------------------------</p><p>&lt;cfcomponent output="false" hint="query factory" <br>extends="exception.load"&gt;</p><p>        &lt;cfscript&gt; <br>                init(); <br>        &lt;/cfscript&gt;</p><p>        &lt;cffunction name="init" access="public" output="false" <br>returntype="any" hint="Initialize the query factory object"&gt; <br>                &lt;cfargument name="DSN" required="false" type="any" <br>default="DSNOfApp" hint="DSN for query" /&gt; <br>                &lt;cfset var dsn = Arguments.DSN&gt;</p><p>                &lt;cfscript&gt; <br>                        if (trim(dsn) eq "") <br>                        { <br>                                dsn="defaultdsnforyourapplication";// default dsn for ur <br>application <br>                        } <br>                        setDSN(DSN); <br>                        setQueryString(""); <br>                &lt;/cfscript&gt; <br>        &lt;/cffunction&gt;</p><p>        &lt;cffunction name="getType" access="public" returntype="any" <br>output="false" hint="Returns the objects type"&gt; <br>                &lt;cfreturn "utility.queryFactory" /&gt; <br>        &lt;/cffunction&gt;</p><p>        &lt;cffunction name="setDSN" access="private" output="false" <br>returntype="void" hint="Sets DSN for query"&gt; <br>                &lt;cfargument name="newDSN" type="string" required="true" /&gt; <br>                &lt;cfSet Variables.DSN = Arguments.newDSN /&gt; <br>        &lt;/cffunction&gt;</p><p>        &lt;cffunction name="getDSN" access="private" output="false" <br>returntype="any" hint="Gets DSN for query"&gt; <br>                &lt;cfscript&gt; <br>                        if (isDefined('Variables.DSN')){ <br>                                return Variables.DSN; <br>                        }else{ <br>                                return ''; <br>                        } <br>                &lt;/cfscript&gt; <br>        &lt;/cffunction&gt;</p><p>        &lt;cffunction name="setQueryString" access="public" output="false" <br>returntype="void" hint="Sets sql statements for query"&gt; <br>                &lt;cfargument name="newQueryString" type="string" required="true" /&gt; <br>                &lt;cfSet Variables.QueryString = Arguments.newQueryString /&gt; <br>        &lt;/cffunction&gt;</p><p>        &lt;cffunction name="getQueryString" access="public" output="false" <br>returntype="any" hint="Gets sql statements for query"&gt; <br>                &lt;cfscript&gt; <br>                        if (isDefined('Variables.QueryString')){ <br>                                return Variables.QueryString; <br>                        }else{ <br>                                return ''; <br>                        } <br>                &lt;/cfscript&gt; <br>        &lt;/cffunction&gt;</p><p>        &lt;cffunction name="getResultSet" access="public" output="false" <br>returntype="any" hint="Gets the resultset"&gt; <br>                &lt;cfscript&gt; <br>                        if (isDefined('variables.resultSet')){ <br>                                return variables.resultSet; <br>                        }else{ <br>                                return ''; <br>                        } <br>                &lt;/cfscript&gt; <br>        &lt;/cffunction&gt;</p><p>        &lt;cffunction name="setResultSet" access="private" output="false" <br>returntype="any" hint="Sets the resultset"&gt; <br>                &lt;cfargument name="newResultSet" type="any" required="true" /&gt; <br>                &lt;cfset variables.resultSet = Arguments.newResultSet&gt; <br>        &lt;/cffunction&gt;</p><p>        &lt;cffunction name="execute" access="public" output="false" <br>hint="executes the query"&gt; <br>                        &lt;cfset variables.qry=""&gt;</p><p>                        &lt;cfquery name="qry" datasource="#getDSN()#"&gt; <br>                                #getQueryString()# <br>                        &lt;/cfquery&gt;</p><p>                        &lt;cfscript&gt; <br>                                setResultSet(variables.qry); <br>                        &lt;/cfscript&gt;</p><p>        &lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879532211">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879532211">9</a> by Charles Robertson
		posted on 9/6/2016 at 8:25 PM
		</div>
		<div class="comment_text"><p>Do we need to specify the dot notation path to the component: type="<a href="http://disq.us/url?url=http%3A%2F%2Fcom.services.apple%3AAvxpSBaCNik654Sx4_605GMp5J8&amp;cuid=3321886" rel="nofollow noopener" title="com.services.apple">com.services.apple</a>" or will type="apple" suffice?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879546485">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879546485">10</a> by Charles Robertson
		posted on 9/6/2016 at 8:33 PM
		</div>
		<div class="comment_text"><p>It's actually really important, if you are using an explicit setter that is injected with a component via a service factory, to specify the component name. The reason for this, is that setters are publicly accessible. This could lead to the wrong component being set from outside the CFC. Encapsulation should be maintained, wherever  possible. </p></div>
	</div>
</div>
		
<div class="comment" id="c_2879560695">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879560695">11</a> (In reply to <a href="#c_2879532211">#9</a>) by Raymond Camden
		posted on 9/6/2016 at 8:42 PM
		</div>
		<div class="comment_text"><p>Going on my memory from 9 years ago, I think either works, but the "full" version is more specific and may be appropriate in a situation where you have framework code and your code intermingled.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879617602">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879617602">12</a> (In reply to <a href="#c_2879560695">#11</a>) by Charles Robertson
		posted on 9/6/2016 at 9:20 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. I was thinking that just the name of the component might be more portable. The dot notation might require more updating, if components get moved into different folders etc. What do you think?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879619587">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879619587">13</a> (In reply to <a href="#c_2879617602">#12</a>) by Raymond Camden
		posted on 9/6/2016 at 9:21 PM
		</div>
		<div class="comment_text"><p>I'd say it depends. If I'm building something and it has a certain structure, than I think it is safe to assume that structure will exist, and if it doesn't, that's bad. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879627045">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879627045">14</a> (In reply to <a href="#c_2879619587">#13</a>) by Charles Robertson
		posted on 9/6/2016 at 9:26 PM
		</div>
		<div class="comment_text"><p>I see what you mean, so your idea is that dot notation enforces more specificity, and therefore provides more security? Hmmm...decisions, decisions, decisions...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879646118">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879646118">15</a> (In reply to <a href="#c_2879627045">#14</a>) by Raymond Camden
		posted on 9/6/2016 at 9:40 PM
		</div>
		<div class="comment_text"><p>Yes... but is it necessary? I don't think you can say so 100%.</p><p>(And I wouldn't say 'more security', just more reliability.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879646295">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879646295">16</a> (In reply to <a href="#c_2879619587">#13</a>) by Charles Robertson
		posted on 9/6/2016 at 9:40 PM
		</div>
		<div class="comment_text"><p>Also, is the dot notation relative to the web root? Like:</p><p>/com/services/apple.cfc</p><p>/com/services/pear.cfc</p><p>pear.cfc</p><p>&lt;cffunction name="setApple"&gt;<br>&lt;argument name="fruit" type="<a href="http://disq.us/url?url=http%3A%2F%2Fcom.services.apple%3AAvxpSBaCNik654Sx4_605GMp5J8&amp;cuid=3321886" rel="nofollow noopener" title="com.services.apple">com.services.apple</a>"/&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fvariables.apple%3A6hxC9D3Pd6SsH8K3gSJc4-5X3Xc&amp;cuid=3321886" rel="nofollow noopener" title="variables.apple">variables.apple</a>="arguments.fruit"&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879648658">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879648658">17</a> (In reply to <a href="#c_2879646295">#16</a>) by Raymond Camden
		posted on 9/6/2016 at 9:42 PM
		</div>
		<div class="comment_text"><p>It follows the same rules as when CF makes a new component via createObject("component", "X")</p><p>My understanding is that it looks for mappings that match the name, so</p><p>blog.user</p><p>would make CF look for a cf mapping called blog.</p><p>*Then* it should look for a relative directory from the code calling it... or the code creating it.</p><p>Not 100% sure. Sorry. My CF is rusty.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879651966">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879651966">18</a> (In reply to <a href="#c_2879646118">#15</a>) by Charles Robertson
		posted on 9/6/2016 at 9:44 PM
		</div>
		<div class="comment_text"><p>I don't understand why it is more reliable. Surely, just using the name, would work 100% of the time, because the argument matches the name metadata of the component object passed in, with the name provided in its type attribute?</p><p>What I mean about security, is that the component passed in, would have to reside in a specific directory, so less chance of spoofing. </p></div>
	</div>
</div>
		
<div class="comment" id="c_2879654165">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879654165">19</a> (In reply to <a href="#c_2879651966">#18</a>) by Raymond Camden
		posted on 9/6/2016 at 9:46 PM
		</div>
		<div class="comment_text"><p>As I said, my specific example was for framework code, or code you include in other projects. So imagine I've got an open source blog you drop into your project and it looks for a component "user". Is it user for the blog, or your site as a whole? That's what I mean about how specificity could benefit you.</p><p>Yes - it is a bit of an edge case, but it's the first thing I thought of.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879660714">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879660714">20</a> (In reply to <a href="#c_2879654165">#19</a>) by Charles Robertson
		posted on 9/6/2016 at 9:51 PM
		</div>
		<div class="comment_text"><p>I guess it depends how the type attribute resolves itself? I presumed it would use the component object metadata passed in. So 'name' would match 100% of the time, but 'dot notation' would only match if the metadata component path matches as well?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879665606">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879665606">21</a> (In reply to <a href="#c_2879660714">#20</a>) by Raymond Camden
		posted on 9/6/2016 at 9:54 PM
		</div>
		<div class="comment_text"><p>Yeah this is where I have to bow out. :)</p><p>For years I can remember wanting the ability to supply a relative path, ie</p><p>../utils/etc</p><p>to ensure a 100% precise connection.</p><p>Shrug. Good luck. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2879670924">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2879670924">22</a> (In reply to <a href="#c_2879665606">#21</a>) by Charles Robertson
		posted on 9/6/2016 at 9:58 PM
		</div>
		<div class="comment_text"><p>Fair enough, Ray. I will play around with this tomorrow. The truth is out there...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2983007122">
	<div>
		<img src="https://disqus.com/api/users/avatars/robertofonsecabc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2983007122">23</a> by Roberto Fonseca
		posted on 11/3/2016 at 4:06 PM
		</div>
		<div class="comment_text"><p>Hi!<br>I'm back to coldfusion from Java. But how could I Map an Typed Array, such as a List of specific Object, like User.cfc List&lt;user.cfc&gt;() ? What's the workarround for?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2983288423">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2983288423">24</a> (In reply to <a href="#c_2983007122">#23</a>) by Raymond Camden
		posted on 11/3/2016 at 6:44 PM
		</div>
		<div class="comment_text"><p>As far as I know, you can't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2983314008">
	<div>
		<img src="https://disqus.com/api/users/avatars/robertofonsecabc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2983314008">25</a> (In reply to <a href="#c_2983288423">#24</a>) by Roberto Fonseca
		posted on 11/3/2016 at 6:58 PM
		</div>
		<div class="comment_text"><p>After a while, refining Google Searches I found this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FDeveloping%2FWS5FFD2854-7F18-43ea-B383-161E007CE0D1.html%3A5Eon_EjllYA__CP3dEaGcexn2A4&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/Developing/WS5FFD2854-7F18-43ea-B383-161E007CE0D1.html">http://help.adobe.com/en_US...</a></p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2983322333">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2983322333">26</a> (In reply to <a href="#c_2983314008">#25</a>) by Raymond Camden
		posted on 11/3/2016 at 7:03 PM
		</div>
		<div class="comment_text"><p>How does that relate to using an array of a particular type? As far as I can see, that's for CF's ORM integration.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2983332595">
	<div>
		<img src="https://disqus.com/api/users/avatars/robertofonsecabc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2983332595">27</a> (In reply to <a href="#c_2983322333">#26</a>) by Roberto Fonseca
		posted on 11/3/2016 at 7:07 PM
		</div>
		<div class="comment_text"><p>Actually you can use the same way</p><p>component name="Checklist" implements="Adapter" {</p><p>    property name="id"             type="String"; // ID da Avaliação<br>    property name="itens"         type="Array" fieldtype="one-to-many" cfc="ChecklistItem";</p><p>So your component will use a Typed Array.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2983344937">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2983344937">28</a> (In reply to <a href="#c_2983332595">#27</a>) by Raymond Camden
		posted on 11/3/2016 at 7:14 PM
		</div>
		<div class="comment_text"><p>Ah, ok.</p></div>
	</div>
</div>
		