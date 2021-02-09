
<div class="comment" id="c_1713670958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670958">1</a> by Will B.
		posted on 8/24/2007 at 10:30 PM
		</div>
		<div class="comment_text"><p>Wow, Ray.  I thought *I* was OCD when it came to code organization.  Yeah...alphabetical?  I wouldn't be able to find ANYTHING in my cfc's if I did that.  Here's how one of mine looks, collapsed, mind you (and I trimmed it to shorten the line lengths...)</p><p>&lt;cfcomponent name="cmsAdmin" hint="Admin CMS relate<br>	&lt;!--- ------------------------------------------<br>	&lt;!--- GENERAL Related functions ---&gt;<br>	&lt;!--- ------------------------------------------<br>	&lt;cffunction name="init" returntype="cmsAdmin" ou<br>	&lt;cffunction name="broadcastCMSChange" access="pu<br>	&lt;!--- ------------------------------------------<br>	&lt;!--- CONTENT Related functions ---&gt;<br>	&lt;!--- ------------------------------------------<br>	&lt;cffunction name="cmsContentSearchFormParam" ret<br>	&lt;cffunction name="generateCMSContentSearchWhereC<br>	&lt;cffunction name="getCMSContentPagination" acces<br>	&lt;!--- ------------------------------------------<br>	&lt;!--- PAGE (Layout) Related functions ---&gt;<br>	&lt;!--- ------------------------------------------<br>	&lt;cffunction name="cmsPageSearchFormParam" return<br>	&lt;cffunction name="generateCMSPageSearchWhereClau<br>	&lt;cffunction name="getCMSPagePagination" access="</p><p>	[more functions removed to slim it down]</p><p>	&lt;!--- ------------------------------------------<br>	&lt;!--- ------------------------------------------<br>	&lt;cfinclude template="/com/model/mixinsSimple.cfm<br>	&lt;cfinclude template="/com/model/mixinsCMS.cfm" /<br>	&lt;!--- ------------------------------------------<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670961">2</a> by Jared Rypka-Hauer
		posted on 8/24/2007 at 10:37 PM
		</div>
		<div class="comment_text"><p>You're just plain nuts, dude... :D</p><p>If I'm going to participate in something this pointless it better be because there's an iPhone on the line or something. hehe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670967">3</a> by sal
		posted on 8/24/2007 at 11:26 PM
		</div>
		<div class="comment_text"><p>I concur with Jared... hehe</p><p>insane man, but I would like to see the finalized code...<br>;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670954">4</a> by Tony of the Weeg Clan
		posted on 8/24/2007 at 11:57 PM
		</div>
		<div class="comment_text"><p>so you want code, to open code up, snip and tuck that code, reordering the methods by alphabet, then save it, and have a cfc that basically cleans up your mis-ordered methods?</p><p>woah.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670966">5</a> by Raymond Camden
		posted on 8/25/2007 at 12:01 AM
		</div>
		<div class="comment_text"><p>Should be easy actually with reMatch. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670956">6</a> by Ben Nadel
		posted on 8/25/2007 at 12:04 AM
		</div>
		<div class="comment_text"><p>I am sure I can make it super complicated somehow... it's that part of the fun :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670951">7</a> by Raymond Camden
		posted on 8/25/2007 at 12:09 AM
		</div>
		<div class="comment_text"><p>Oh - if you want complex - I can make it complex.</p><p>The function should take, as an optional second parameter, ANOTHER udf that will work as the sort function. The sort function takes 2 items and returns -1 if the item A should be sorted before, 1 if after, and 0 if the same.</p><p>In other words - allow for custom sorts.</p><p>If you want to cheat - there is a version of this up on CFLib already.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670960">8</a> by Ben Nadel
		posted on 8/25/2007 at 12:26 AM
		</div>
		<div class="comment_text"><p>What is passed to the sorting function? The name of the CFFunction?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670972">9</a> by Raymond Camden
		posted on 8/25/2007 at 12:29 AM
		</div>
		<div class="comment_text"><p>That would be telling. ;)</p><p>Look to the lib....</p><p>Do it "quick"ly...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670975">10</a> by Ben Nadel
		posted on 8/25/2007 at 12:38 AM
		</div>
		<div class="comment_text"><p>Well, luckily, that date I had with this super model just fell through, so I should have some time to take a look at this over the weekend :) ... at least that sounds like a better excuse.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670970">11</a> by Henry
		posted on 8/25/2007 at 1:16 AM
		</div>
		<div class="comment_text"><p>Guys... just use CFEclipse and forget about it. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670971">12</a> by Raymond Camden
		posted on 8/25/2007 at 1:28 AM
		</div>
		<div class="comment_text"><p>Heh, I _do_ use CFEclipse. Thing is - I'm anal about keeping my code view big - and I'm too lazy to turn the view back on. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670965">13</a> by Camilo
		posted on 8/25/2007 at 6:18 AM
		</div>
		<div class="comment_text"><p>Oh, this is going to be fun ;~)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670968">14</a> by Sammy Larbi
		posted on 8/25/2007 at 6:59 PM
		</div>
		<div class="comment_text"><p>Like Will B, I prefer to keep semi-related functions close together (or ones that call each other, as all the functions in a class should be related).</p><p>I'll just open up the side bar in cfeclipse and sort them alphabetically there if I need to find by name (or hit ctrl-f and search for it that way).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670962">15</a> by Camilo
		posted on 8/25/2007 at 7:03 PM
		</div>
		<div class="comment_text"><p>This place ROCKS!!!</p><p>like running a 4 d Array of these topics Yea, I would love to see the finish; good luck on this Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670963">16</a> by Tyson
		posted on 8/25/2007 at 9:57 PM
		</div>
		<div class="comment_text"><p>Here's my crack at it.  No custom sorting, but sorts alphabetically and puts any init functions first.</p><p>&lt;cffunction name="sortMethods" output="false" returntype="void"&gt;<br> &lt;cfargument name="filePath" type="string" required="true"&gt;<br> &lt;cfset var funcRegex = "&lt;cffunction [^&gt;]*&gt;.*?&lt;\/cffunction&gt;"&gt;<br> &lt;cfset var fileContent = ""&gt;<br> &lt;cfset var allFuncs = ""&gt;<br> &lt;cfset var nameMatch = ""&gt;<br> &lt;cfset var qFunctions = queryNew("name,theFunction,sortOrder")&gt;<br> &lt;cfset var i = 0&gt;</p><p> &lt;!--- Verify the file exists ---&gt;<br> &lt;cfif fileExists(arguments.filePath)&gt;<br>  &lt;!--- Read file ---&gt;<br>  &lt;cffile action="read" file="#arguments.filePath#" variable="fileContent"&gt;</p><p>  &lt;!--- Find all functions ---&gt;<br>  &lt;cfset allFuncs = reMatch(funcRegex, fileContent)&gt;</p><p>  &lt;cfloop from="1" to="#arrayLen(allFuncs)#" index="i"&gt;<br>   &lt;cfset queryAddRow(qFunctions)&gt;</p><p>   &lt;!--- Store function name and contents in query ---&gt;<br>   &lt;cfset nameMatch = reMatch("name=[""'][^""']*[""']", allFuncs[i])&gt;<br>   &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2FqFunctions.name%3Az7HvWQe-Q0Csgou7OcmBGx_262E&amp;cuid=3321886" rel="nofollow noopener" title="qFunctions.name">qFunctions.name</a>[qFunctions.recordCount] = replace(nameMatch[1], "'", '#chr(34)#', "ALL")&gt;<br>   &lt;cfset qFunctions.theFunction[qFunctions.recordCount] = allFuncs[i]&gt;</p><p>   &lt;!--- If the function name is "init", sort it first ---&gt;<br>   &lt;cfif <a href="http://disq.us/url?url=http%3A%2F%2FqFunctions.name%3Az7HvWQe-Q0Csgou7OcmBGx_262E&amp;cuid=3321886" rel="nofollow noopener" title="qFunctions.name">qFunctions.name</a>[qFunctions.recordCount] IS NOT 'name="init"'&gt;<br>    &lt;cfset qFunctions.sortOrder[qFunctions.recordCount] = 2&gt;<br>   &lt;cfelse&gt;<br>    &lt;cfset qFunctions.sortOrder[qFunctions.recordCount] = 1&gt;<br>   &lt;/cfif&gt;<br>  &lt;/cfloop&gt;</p><p>  &lt;!--- Sort the functions by name (with init on top) ---&gt;<br>  &lt;cfquery name="qFunctions" dbtype="query"&gt;<br>   SELECT name, theFunction<br>   FROM qFunctions<br>   ORDER BY sortOrder, name<br>  &lt;/cfquery&gt;</p><p>  &lt;!--- Prepare file to be written ---&gt;<br>  &lt;cfset fileContent = reReplace(fileContent, "\n*" &amp; funcRegex &amp; "\n*", "", "ALL")&gt;<br>  &lt;cfset fileContent = reReplace(fileContent, "&lt;\/cfcomponent&gt;( |\n)*", "", "ALL")&gt;</p><p>&lt;cfsavecontent variable="fileContent"&gt;&lt;cfoutput&gt;#left(fileContent, len(fileContent)-14)#&lt;/cfoutput&gt;<br>&lt;cfoutput query="qFunctions"&gt;<br>#theFunction#   <br>&lt;/cfoutput&gt;<br>&lt;cfoutput&gt;#chr(60)#/cfcomponent#chr(62)#&lt;/cfoutput&gt;<br>&lt;/cfsavecontent&gt;</p><p>  &lt;!--- Write the file back to the source ---&gt;<br>  &lt;cffile action="write"<br>    file="#arguments.filePath#"<br>    output="#fileContent#"&gt;<br> &lt;/cfif&gt;</p><p>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670969">17</a> by Raymond Camden
		posted on 8/25/2007 at 10:03 PM
		</div>
		<div class="comment_text"><p>Tyson, thanks for sharing the code. Let me make one style comment. I don't like code where 99% of the functionality is all within one CFIF. Your code does nothing if the cfif condition is false, so I would have put this up top instead:</p><p>&lt;cfif not fileExists(arguments.filepath)&gt;&lt;cfreturn&gt;&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670964">18</a> by Tyson
		posted on 8/26/2007 at 1:47 AM
		</div>
		<div class="comment_text"><p>I didn't really like the idea of having the code in one CFIF, but that was the first idea that came to me, so I just went with it.  I'll be interested to see how others implement the custom sort function.  Also, this was the first time I'd used reMatch and I see myself using a lot from now on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670974">19</a> by Elliott Sprehn
		posted on 8/28/2007 at 10:39 PM
		</div>
		<div class="comment_text"><p>Unfortunately this is much more complicated than you think it is.</p><p>Tyson's solution works, right until it runs into a cffunction with the char &gt; anywhere in an attribute. It'll also choke if the function contains the text &lt;/cffunction&gt; anywhere, for instance &lt;cfset myvar = "&lt;cffunction&gt;"&gt;.</p><p>If you really want to blow your mind think about:</p><p>&lt; <br>cffunction <br>name <br>= <br>"foo" <br>hint = <br>"&lt;cffunction name='bar'&gt;&lt;/cffunction&gt;" <br>&gt;<br>&lt; <br>/<br> cffunction <br>&gt;</p><p>That's syntactically valid CFML.</p><p>What you want can really only be reliably done with a full CFML parser. Implementing it in CFEclipse would probably be the easiest solution because the thing already has a parser, but I'm curious if CFEclipse even parses like the Macromedia/Adobe ColdFusion parser does.</p><p>Regular expressions are nifty, but alone they're not really useful for parsing. There's no finite length regular expression that expresses what a cffunction declaration could look like.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670959">20</a> by Raymond Camden
		posted on 8/28/2007 at 10:45 PM
		</div>
		<div class="comment_text"><p>Good point Elliot. Although I'd still say that I'd find this code useful. I think I'd know ahead of time if there was a &lt;/cffunction&gt; anywhere in the code (I mean as a string). I'd assume that would be rare (except in the case of the code for this blog entry ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670973">21</a> by Ben Nadel
		posted on 8/28/2007 at 10:46 PM
		</div>
		<div class="comment_text"><p>Yeah, true. I didn't have time to look at this this weekend (unexpected events). However, I cannot imagine that:</p><p>&lt;<br>cffunction</p><p>is considered valid? I am pretty sure that need to have the &lt; and the cf right next to each other.</p><p>Also, yeah, its true - people really put some crack-head information into the attributes. Just the other day I saw someone do like a whole documentation schema inside of the Hint attribute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670978">22</a> by Elliott Sprehn
		posted on 8/29/2007 at 7:09 AM
		</div>
		<div class="comment_text"><p>@Ben</p><p>Nope, you don't need the &lt; and the cf next to each other. Try the code snippet I pasted. ;)</p><p>CF has a very very lenient syntax. You can add new lines and whitespace between all kinds of things and it won't even blink.</p><p>I started working on breaking CF's parsing rules down into tokens for documentation purposes, I should really post that somewhere. I have a feeling that many of the CF engines don't really follow the same rules as the ColdFusion Server, but rather the conventional CFML syntax. I definitely know that Smith's parser is wrong/too strict in a few places.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670977">23</a> by Ben Nadel
		posted on 8/29/2007 at 3:34 PM
		</div>
		<div class="comment_text"><p>Oh my god! You are totally right. I just ran the craziest code and it ran just fine. That is just insane. Not sure how I feel about that :) I think it's a little frustrating that they allow syntax like:</p><p>&lt;     <br>cfset   <br>x  =  4 <br>/&gt;</p><p>... and at the same time, they do NOT allow you do this:</p><p>&lt;cfset GetFunctionPointer()() /&gt;</p><p>... or :</p><p>&lt;cfset GetArray()[ 4 ] /&gt;</p><p>Those seem like infinitely more important chainnings and yet the will not parse propertly :( Silly ColdFusion parser.</p></div>
	</div>
</div>
		