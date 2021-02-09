
<div class="comment" id="c_1713676894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676894">1</a> by Ben Nadel
		posted on 2/8/2008 at 5:36 PM
		</div>
		<div class="comment_text"><p>I had a revelation one time that I think will help people who don't 100% understand the OnRequest() event method; when you include the requested template as part of the OnRequest() method, you are creating a "mixin" for that method call. In lay terms, you are taking the target template and making it PART OF the Application.cfc. What people have to realize is that the requested template that executes is actually executing as if it WERE the Application.cfc. Therefore, the Application.cfc THIS and VARIABLES scope aren't actually getting "copied" to the template's VARIABLES scope because they are not two different things - the Application.cfc's VARIABLES scope and the requested template's VARIABLES scope are the same objects.</p><p>When I had this mental breakthrough, it make working with the OnRequest() method so much easier to understand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676898">2</a> by Gareth
		posted on 2/8/2008 at 6:08 PM
		</div>
		<div class="comment_text"><p>So it's just like putting it as a cfinclude inside the application.cfc file (haven't really had an option to use the application.cfc file yet)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676895">3</a> by Ben Nadel
		posted on 2/8/2008 at 6:42 PM
		</div>
		<div class="comment_text"><p>It's exactly like that:</p><p>&lt;cffunction name="OnRequest"&gt;<br>&lt;cfargument name="Page" /&gt;<br>&lt;cfinclude template="#ARGUMENTS.Page#" /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676966">4</a> by John Farrar
		posted on 2/8/2008 at 7:58 PM
		</div>
		<div class="comment_text"><p>Ray, one interesting thing I found during CF7 (or 6, not sure) was the very low performance hit for instantiating bunches of UDFs into request scope as you mentioned. I am not sure that over all this is any more efficient than creating CFCs in CF8, has anyone tested that out for performance?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676961">5</a> by Raymond Camden
		posted on 2/8/2008 at 9:14 PM
		</div>
		<div class="comment_text"><p>I tend to NOT get concerned about ms to ms performance checks. I'd say use whichever method you want. I can say that from time to time, I've needed basic UDFs in CFCs. In that case, my UDF library becomes a CFC I can pass to other CFCs if they need it, and in my 'normal' CFML files, I just tweak the call from <a href="http://disq.us/url?url=http%3A%2F%2Frequest.udf.goo%3AW5zvjWdhsNqVXPO_4Lj6reEUUcY&amp;cuid=3321886" rel="nofollow noopener" title="request.udf.goo">request.udf.goo</a>() to <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.udf.goo%3AIQRiGClOewyf4RvW8SoN4jwkfEc&amp;cuid=3321886" rel="nofollow noopener" title="application.udf.goo">application.udf.goo</a>() or somesuch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676970">6</a> by Adam Fairbanks
		posted on 2/10/2008 at 12:43 AM
		</div>
		<div class="comment_text"><p>A main purpose of the application scope is to have only one instance of code initialized in memory (across multiple requests) to preserve memory resources on the server, vs having multiple instances of the same code unnecessarily multiplied in memory by the number of requests.</p><p>Wouldn't putting the udf object into the application scope (using onApplicationStart()) and referencing it directly there (using <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.udf.foo%3AKBjzLMLQDoHrJ81JHYcJbQyPz6U&amp;cuid=3321886" rel="nofollow noopener" title="application.udf.foo">application.udf.foo</a>()) be more efficient (memory wise) than having it in the variables and/or request scopes of multiple requests?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676963">7</a> by John Farrar
		posted on 2/10/2008 at 1:16 AM
		</div>
		<div class="comment_text"><p>That is one of the development gives and takes. That is indeed the most efficient. (using Application) Yet, there should also be a mechanism in place to make updates easy to keep things fresh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676972">8</a> by Adam Fairbanks (Tidy Tech)
		posted on 2/10/2008 at 2:06 AM
		</div>
		<div class="comment_text"><p>&lt;&lt;That is one of the development gives and takes....Yet, there should also be a mechanism in place to make updates easy to keep things fresh.&gt;&gt;</p><p>The give and take shouldn't be too onerous.</p><p>In onRequestStart():</p><p>&lt;cfif StructKeyExists(url,"reinitudf")&gt;<br>	&lt;cflock scope="application" type="exclusive" timeout="10"&gt;<br>		&lt;cfset application.udf=createObject('component','udf').init() /&gt;&lt;!--- or however you load the udf ---&gt;<br>	&lt;/cflock&gt;<br>&lt;/cfif&gt;</p><p>This updates application.udf without updating all the other application variables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676964">9</a> by Tami Burke
		posted on 2/13/2008 at 6:45 PM
		</div>
		<div class="comment_text"><p>After buying FusionDebug, I noticed that my UDFs file (til now called as a cfinclude on any relevant .cfm page), created a gazillion function variables that I do not want to see, esp. since these are general use UDFs and the functions.cfm file is reused between projects.</p><p>I went throuth and updated each function to include<br>&lt;code&gt;req = structGet("request.udfs");<br>&lt;/code&gt; at the beginning of the &lt;cfscript&gt; for the page, and added a <br>&lt;code&gt;<a href="http://disq.us/url?url=http%3A%2F%2Freq.foo%3AkUclbAzHXhJ3DY3181MAwwDqhMA&amp;cuid=3321886" rel="nofollow noopener" title="req.foo">req.foo</a>=foo;&lt;/code&gt; after each function.</p><p>Now.... Just where do I add this to the application.cfc? OnRequestStart? As an Include? Hmmmm, This is where I am stuck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676975">10</a> by Adam Fairbanks (Tidy Tech)
		posted on 2/13/2008 at 8:37 PM
		</div>
		<div class="comment_text"><p>@Tami</p><p>To limit the function variables to the function, make sure you use var when setting any variables inside the function (e.g., &lt;cfset var variable=""&gt;).</p><p>(Someone please correct me if I'm wrong..) this is what I would recommend as the most efficient setup for global functions stored in a udf.cfm file:</p><p>1) Convert the cfm file to a cfc component file<br>   a) change the file extension from .cfm to .cfc<br>   b) add a simple &lt;cfcomponent&gt; tag to the file (see example cfc component file below)</p><p>2) Add these lines to the onApplicationStart() function in your application.cfc:</p><p>   &lt;!--- Load udf as an application variable to be shared across requests ---&gt;<br>   &lt;cfset application.udf=createObject('component','udf').init() /&gt;</p><p>[Note: This assumes the udf.cfc is stored in the same directory as the application.cfc file.]</p><p>3) Add these lines to the onRequestStart() function in your application.cfc (to allow you to reload the udf functions if you change them by adding ?reinitudf to the query string of any page without having to restart the application):</p><p>&lt;!--- Reload udf if ?reinitudf is in the query string ---&gt;<br>&lt;cfif StructKeyExists(url,"reinitudf")&gt;<br>	&lt;cflock scope="application" type="exclusive" timeout="10"&gt;<br>		&lt;cfset application.udf=createObject('component','udf').init() /&gt;<br>	&lt;/cflock&gt;<br>&lt;/cfif&gt;</p><p>4) Then to call a udf function, simply do this in any page:</p><p>&lt;cfset result=application.udf.addTwoNumbers(1,2) /&gt;</p><p>or</p><p>&lt;cfoutput&gt;#application.udf.addTwoNumbers(1,2)#&lt;/cfoutput&gt;</p><p>Here is an example CFC udf file:</p><p>&lt;cfcomponent name="udf" hint="Global Functions"&gt;</p><p>	&lt;!--- This function is used to reload the udf component if any functions are modified ---&gt;<br>	&lt;cffunction name="init" access="public" output="false" returntype="struct"&gt;<br>		&lt;cfreturn this /&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="addTwoNumbers" access="public" returntype="numeric" hint="Adds two numbers and returns the sum."&gt;<br>		&lt;cfargument name="numberOne" type="numeric" required="yes" /&gt;<br>		&lt;cfargument name="numberTwo" type="numeric" required="yes" /&gt;<br>		&lt;!--- Note the var in front of the variable name ---&gt;<br>		&lt;cfset var sum=numberOne+numberTwo /&gt;</p><p>		&lt;cfreturn sum /&gt;</p><p>	&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676969">11</a> by Tami Burke
		posted on 2/13/2008 at 10:11 PM
		</div>
		<div class="comment_text"><p>Thanks Adam, This is about what I need, esp. the application.cfc settings.<br>However, the UDF isn't set up as <br>&lt;component&gt;<br>&lt;cffunction name='udf1'...&gt;<br>:<br>&lt;/cffunction&gt;<br>&lt;cffunction name='udf2'...&gt;<br>:<br>&lt;cffunction&gt;</p><p>It is currently set up as single file w/ about 50 functions</p><p>&lt;cfscript&gt;<br>req = structGet("request.udfs");<br>function udf1(var1){<br>return foo; {<br>req.udf1=udf1;</p><p>function udf2{var1,var2){<br>return foo;<br>req.udf2=udf2;<br>&lt;/cfscript&gt;</p><p>Questions:<br>1) why would I want these to be storede as application level udfs instead of request? Seems like a lot of overhead tied up for functions that may or may not be called.<br>2) Can I stick all the functions within one &lt;cffunction&gt; call, or do I need to rewrite each function call to be an individual &lt;cffunction&gt;&lt;cfscript&gt;function xx{ }&lt;/cfscript&gt;&lt;/cffunction&gt;?  (BIG PITA factor to redo all these dinky functions like that)</p><p>So can my functions.cfm converted into functions.cfc look <br>like:<br>&lt;component&gt;<br>&lt;cfscript&gt;<br>req = structGet("request.udfs");<br>function udf1{}<br>req.udf1=udf1;<br>function udf2{}<br>req.udf2=udf2;  ...<br>&lt;/cfscript&gt;<br>&lt;/component&gt;</p><p>or</p><p>do I have to set it up as<br>&lt;cfcomponent&gt;<br>&lt;cffuntion name='udf1'....&gt;<br>&lt;cfreturn foo&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name='udf2'...&gt;<br>&lt;cfreturn foo&gt;<br>&lt;/cffunction&gt;  ...(ad naseum)<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676962">12</a> by Tami Burke
		posted on 2/13/2008 at 10:18 PM
		</div>
		<div class="comment_text"><p>&lt;snip&gt;<br>To limit the function variables to the function, make sure you use var when setting any variables inside the function (e.g., &lt;cfset var variable=""&gt;).<br>&lt;/snip&gt;</p><p>Oh, and I forgot, the fusion debug variables are the functions, not the vars in the functions. You can see it here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fhhwd.com%2Fscreenshots%2Ffusionfnvars.gif%3AX6qyRr5P5CKnc3r5VxvXpUhYHtQ&amp;cuid=3321886" rel="nofollow noopener" title="http://hhwd.com/screenshots/fusionfnvars.gif">http://hhwd.com/screenshots...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676976">13</a> by Adam Fairbanks (Tidy Technolog
		posted on 2/13/2008 at 11:10 PM
		</div>
		<div class="comment_text"><p>@Tami - the functions in the udf.cfc can be written either with &lt;cffunction&gt; tags or as scripted functions using &lt;cfscript&gt;. You can even have a mix of both if you want.</p><p>So the earlier example ucf.cfc could look like this:</p><p>&lt;cfcomponent name="udf" hint="Global Functions"&gt;</p><p>	&lt;cfscript&gt;<br>	// This function is used to reload the udf component if any functions are modified<br>	function init() {<br>		return this;<br>	}<br>	function addTwoNumbers(numberOne,numberTwo) {<br>		var sum=numberOne+numberTwo;<br>		return sum;<br>	}<br>	&lt;/cfscript&gt;</p><p>&lt;/cfcomponent&gt;</p><p>Note 1: if you're storing the udf.cfc in the application scope, these lines are not needed and should be removed to free up memory:</p><p>req = structGet("request.udfs");<br>req.udf1=udf1;</p><p>Note 2: A benefit of using &lt;cfscript&gt; is that the code is more succinct (less code) and may run a little faster.</p><p>The benefit of using &lt;cffunction&gt; tags is that you have more options and built-in functionality for data type validation, security (including exposing the function as a web service), and documentation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676965">14</a> by Tami Burke
		posted on 2/13/2008 at 11:20 PM
		</div>
		<div class="comment_text"><p>@Adam....<br>&lt;smack&gt; Perfect... Let me get to work and see how it comes out. thanks for the clarifications! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676977">15</a> by Adam Fairbanks (Tidy Tech)
		posted on 2/14/2008 at 12:21 AM
		</div>
		<div class="comment_text"><p>@Tami - Regarding memory..</p><p>I store most, if not all, global functions in my application.udf, even if each function is used only on a single page. My file is about the size of an average page request, so it stores an extra page request in memory, which is usually not a strain on resources.</p><p>The alternative is to load a function each time a page request is loaded. (See method below.) The potential downside is that the memory used with this method increases as your number of concurrent page requests grows.</p><p>To keep things simple, I just put all the functions in the application.udf and access them as application.udf.function(), for these reasons:</p><p>1) the syntax is universal: application.udf.function()<br>   (I don't have to think about it)<br>2) putting all udf functions in the application scope is limited to a page view of memory max<br>   (I don't have to worry about it)<br>3) as mentioned, loading udf functions into the request scope with each page request has the possibility of using more memory, and with any significant amount of traffic will use more memory, than the application scope<br>4) using the application scope eliminates the need to<br>   a) determine on which pages to load a udf function into the request scope<br>   b) place the initialization code in each desired page<br>   c) maintain the initialization code in each page<br>   d) yes, the full udf can be loaded into the request scope using onRequestStart(), but then you guarantee you will use more memory than using the application scope</p><p>For functions that are seldomly used, I may put them in their own cfc, and call them on the page:</p><p>file: /rarefunction.cfc</p><p>&lt;cfset request.rareFunction=createObject('component',rareFunction) /&gt;<br>&lt;cfoutput&gt;#request.rareFunction.theFunction(1,2,3)#&lt;/cfoutput&gt;</p><p>Or if the function will be used only once during the request:</p><p>&lt;cfoutput&gt;#createObject('component',rareFunction).theFunction(1,2,3)#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676967">16</a> by Tami Burke
		posted on 2/14/2008 at 1:38 AM
		</div>
		<div class="comment_text"><p>And... this all tidies up some issues I have been having for a while, but too lazy to really deal with elegantly:</p><p>While using &lt;cfinclude&gt; for my functions is quick and dirty (and a holdover from CF5)if I included it in a DW template (thus every page created has the &lt;cfinclude template='function.cfm'&gt; call in it), this method didn't have universal scoping.</p><p>When I wanted to call a udf in one of my other CFCs I invariably had to add a &lt;cfinclude&gt; for the functions there, which made the cfc not a truly encapsulated piece of code. Your method and Ray's above both clean up the redundancy issues and the scoping issues :).</p><p>Hero cookies to Adam for today (and by proxy, Ray). It all works terrifically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676973">17</a> by Adam Fairbanks
		posted on 2/14/2008 at 1:54 AM
		</div>
		<div class="comment_text"><p>@Tami - Glad to hear.</p><p>@Raymond and Asa - Thanks for the thread.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676968">18</a> by Chris Luksha
		posted on 12/28/2008 at 3:54 AM
		</div>
		<div class="comment_text"><p>I put the application.udf into effect and all runs great - until I ran a sub folder (/admin) using an Application.cfc that extends the root level Application.cfc (via a proxy cfc)</p><p>When running the /admin folder all seemed well until I reset the application.  At which point I got the error .... Element UDF is undefined in a Java object of type class [Ljava.lang.String;.</p><p>It seems that the Application.udf was not instantiated when the application reset.  My /admin/Application.cfc file does not contain an onApplicaitonStart Function so I just assumed it would use the root level function - which includes the application.udf declaration.</p><p>So I have a question for anyone...  If my root level Application.cfc contains &lt;code&gt;	&lt;cffunction name="onApplicationStart" returnType="boolean" output="false"&gt;<br>		&lt;cfset application.gadget = createObject("component","org.ews.root").init('xxxxx')&gt;<br>		&lt;cfset application.udf = createObject('component','org.ews.udf').init() /&gt;<br>		&lt;cfreturn true&gt;<br>	&lt;/cffunction&gt;&lt;/code&gt;<br>Should I declare the gadget and udf variables in the /admin/Applicaiton.cfc as well in order to make this work - or is there something else I might be missing?  <br>And if I should place the declaration in both files - How do I do that?  Should it maybe be a cfmodule call or the like since you can't call .org.ews.udf</p><p>Thanks all.<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676974">19</a> by Raymond Camden
		posted on 12/28/2008 at 4:44 AM
		</div>
		<div class="comment_text"><p>Did you give the Admin Application.cfc a new name?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676971">20</a> by Chris Luksha
		posted on 12/28/2008 at 5:01 AM
		</div>
		<div class="comment_text"><p>No Ray I did not.  It would seem that it is running the declaration from the root level app.cfc.  I forgot to upload a new version of the root application to the server.</p><p>So at this point that works but I think I really have the business logic all messed up as to how to set the session.admin.(loggedin, userid, name, etc).</p><p>So I will fight with that for a few hours before I get frustrated and ask for help from the world.  Thanks for checking in.</p></div>
	</div>
</div>
		