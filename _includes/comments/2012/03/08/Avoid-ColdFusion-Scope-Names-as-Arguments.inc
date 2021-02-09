
<div class="comment" id="c_1713739461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739461">1</a> by Andrew Scott
		posted on 3/8/2012 at 7:47 PM
		</div>
		<div class="comment_text"><p>I know people are going to say reserved words here, but truly this is an error with ColdFusion itself.</p><p>In this case URL should be in the arguments scope, so how does the URL scope get trashed here?</p><p>Now if I was to type</p><p>&lt;cfset url = 'Something' /&gt;</p><p>Then I could understand a problem, but it's not and ColdFusion should be adhering to scopes internally.</p><p>I have blogged about another scenario, that is a bug, and is a similar problem. But this got broken somewhere between ColdFusion 8 and ColdFusion 9, and was also reported to Adobe as a bug as well.</p><p>Reason it is a bug, because it works in ColdFusion 8. And I am sure that this example would also work in ColdFusion 8 as well.</p><p>For reference to a similar bug head on over too.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.andyscott.id.au%2F2011%2F1%2F6%2FMigrating-over-to-ColdFusion-9-and-some-things-that-have-tripped-me-and-maybe-you-too%3A1KvsHA98Bgj6IuoCEjQhDHeBHm8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.andyscott.id.au/2011/1/6/Migrating-over-to-ColdFusion-9-and-some-things-that-have-tripped-me-and-maybe-you-too">http://www.andyscott.id.au/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739468">2</a> by Chris Blackwell
		posted on 3/8/2012 at 7:58 PM
		</div>
		<div class="comment_text"><p>Well the first issue is the onRequestStart doesn't get passed a url (string or scope) it gets passed the path to the requested template, so url is a misleading name for the argument.</p><p>It looks like CF is treating "url" as an unscoped variable and is looking in the arguments scope in preference to the url scope.</p><p>fwiw. Railo doesn't suffer from this and the following does exactly what you would expect</p><p>function onRequestStart(url) {<br>    writeDump(url); // url scope<br>    writeDump(arguments.url); // arguments.url<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739487">3</a> by Michael Wilson
		posted on 3/8/2012 at 8:00 PM
		</div>
		<div class="comment_text"><p>@andrew,<br>I would disagree that this is a bug. The url scope would be left unchanged by this code. By naming an argument url you are effectively eliminating any way you have of referencing the url scope, because CF will look in the arguments scope for the variable, and it will find it there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739493">4</a> by Andrew Scott
		posted on 3/8/2012 at 8:04 PM
		</div>
		<div class="comment_text"><p>@Michael... How?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739492">5</a> by Andrew Scott
		posted on 3/8/2012 at 8:05 PM
		</div>
		<div class="comment_text"><p>@Chris, and I am almost 90% positive that ColdFusion 8 doesn't either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739503">6</a> by Phillip Senn
		posted on 3/8/2012 at 8:40 PM
		</div>
		<div class="comment_text"><p>It's a feature, not a bug!<br>I actually use this technique myself, except with the form scope. After playing around with argumentcollection="#form#", I thought "screw this - if I pass the form itself, it's passed by reference anyway, so why not just pass the form as a structure?"</p><p>So then I had to ask myself "What name should I give the cfargument?  How about 'form'?  Would that work?"  And it does!</p><p>So now in my components, I reference form.LastName, and that means arguments.form.LastName, which came from form.LastName.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739497">7</a> by Michael Wilson
		posted on 3/8/2012 at 8:41 PM
		</div>
		<div class="comment_text"><p>@Andrew, because when CF is evaluating an unscoped variable it firsts starts in the Local scope (function-local, UDFs and CFCs) then moves to the arguments scope and so on. URL is treated as variable so when CF is looking for it, it finds arguments.url and says this must be what you were looking for. So because CF views the scopes as just another variable this is the behavior I would expect. I don't see this as being any different from if I define url.username = "my name" and form.username = "someone else"<br>then i writeDump(username) I would expect the value that is output to be "my name", because I know the url scope is evaluated before the form scope. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739499">8</a> by Andrew Scott
		posted on 3/8/2012 at 8:48 PM
		</div>
		<div class="comment_text"><p>@Michael.... I am very well aware of the search order for searching variables in scopes.</p><p>&lt;cfargument&gt;</p><p>Is saying or it should be saying that I wish to define a variable with the name of name="" into the argument scope. Nothing more nothing less.</p><p>By the sounds of it, this is not the case.</p><p>For example look at my blog post.</p><p>&lt;cfset var local = {} /&gt; <br>&lt;cfset local.session = 'test' /&gt;</p><p>This is specifically saying that I want the variable name session to be defined inside the local scope, however this is another example that where a scope is trashed.</p><p>Now how does the search order work when setting variables? I don't believe even you can argue that the search order plays apart when setting a variable, surely!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739498">9</a> by Michael Wilson
		posted on 3/8/2012 at 9:06 PM
		</div>
		<div class="comment_text"><p>@Andrew, Okay I read through your blog post. Consider this code.<br>In application.cfc<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fsession.config.name%3A0k4BHfyijnxxgNlCV7rVv6Q678I&amp;cuid=3321886" rel="nofollow noopener" title="session.config.name">session.config.name</a> = "something"&gt;<br>&lt;cfset application.pointerToSession = session&gt;</p><p>In some CFC function<br>&lt;cfset local.session = "here"&gt;<br>&lt;cfset local.temp = <a href="http://disq.us/url?url=http%3A%2F%2Fsession.config.name%3A0k4BHfyijnxxgNlCV7rVv6Q678I&amp;cuid=3321886" rel="nofollow noopener" title="session.config.name">session.config.name</a>&gt; &lt;!--- this will error CF sees this as <a href="http://disq.us/url?url=http%3A%2F%2Flocal.session.config.name%3ACwcUJVq0BKgFLRH6eJlZDGjvLLY&amp;cuid=3321886" rel="nofollow noopener" title="local.session.config.name">local.session.config.name</a> ---&gt;<br>&lt;cfset local.temp = <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.pointerToSession.config.name%3A0jTq3_yViQIe5N58EFtDCk4Gs7w&amp;cuid=3321886" rel="nofollow noopener" title="application.pointerToSession.config.name">application.pointerToSessio...</a>&gt; &lt;!--- this will set local.temp to "something" ---&gt;</p><p>&lt;cfdump var=#application.pointerToSession#&gt; &lt;!--- this woul d dump the session scope ---&gt;</p><p>local.session does not do anything to the session scope, but in a function CF will local.session and session as the same variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739504">10</a> by Andrew Scott
		posted on 3/8/2012 at 9:06 PM
		</div>
		<div class="comment_text"><p>@phillip that will still work, it just trashes url, or will error if you don't pass url as an argument.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739500">11</a> by Andrew Scott
		posted on 3/8/2012 at 9:11 PM
		</div>
		<div class="comment_text"><p>@Michael that is correct, so it's still a bug, because the session scope has been trashed.</p><p>If you also read on further, you will notice that the same thing happens when setting a variable into a scope that also use a method/function name.</p><p>By the way I should point out that the code in that blog post, also works in ColdFusion 8, however it became buggy in ColdFusion 9.</p><p>@Everyone else I tested this current post in ColdFusion 8, and it still trashes the url scope. Now like I said people might say do not use reserved words, but in these examples you are clearly defining a name to a scope, and it is trashing that scope. That is a bug because it is unexpected behaviour.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739501">12</a> by Michael Wilson
		posted on 3/8/2012 at 9:36 PM
		</div>
		<div class="comment_text"><p>@Andrew, try this code.</p><p>Application.cfc<br>&lt;cfcomponent&gt;<br>	&lt;cffunction name="onApplicationStart" returntype="boolean" access="public"&gt;<br>		&lt;cfset application.url = url&gt;<br>		&lt;cfreturn true&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="onRequestStart" returntype="boolean" access="public"&gt;<br>	&lt;cfargument name="url" required="true" type="string"&gt;<br>		&lt;cfset onApplicationStart()&gt; &lt;!--- save current url scope into application.url so we can still access the url scope ---&gt;<br>		&lt;cfset request.urlHasInit = false&gt;<br>		&lt;cfset request.onRequestStartURL = url&gt;</p><p>		&lt;cfif StructKeyExists(application.url, "init")&gt;<br>			&lt;cfset request.urlHasInit = true&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfreturn true&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>index.cfm<br>&lt;cfdump var="#url#" label="index.cfm - url"&gt;<br>&lt;cfdump var="#request#" label="request"&gt;<br>&lt;cfdump var="#application.url#" label="application.url"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739502">13</a> by Andrew Scott
		posted on 3/8/2012 at 9:39 PM
		</div>
		<div class="comment_text"><p>@michael and that proves what exactly?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739508">14</a> by Michael Wilson
		posted on 3/8/2012 at 9:51 PM
		</div>
		<div class="comment_text"><p>@Andrew, It proves the the url scope is not trashed by onRequestStart. Inside onRequestStart I call onApplicationStart which access the url scope. As I am sure you know, CF copies structs by reference when doing an assignment, so application.url and the URL scope both point to the same block of memory when onApplicationStart returns. If onRequestStart was trashing the URL scope then when the assignment was made in onApplicationStart the value of application.url would be the path to the requested page and not a reference to the URL scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739506">15</a> by Andrew Scott
		posted on 3/8/2012 at 9:57 PM
		</div>
		<div class="comment_text"><p>Interesting, because on ColdFusion 9 and 10 it is trashed for me.</p><p>Try modifying you application.cfc to this.</p><p>&lt;cfcomponent&gt;<br>   &lt;cffunction name="onApplicationStart" returntype="boolean" access="public"&gt;<br>      &lt;cfset application.url = 'test me out'&gt;<br>      &lt;cfreturn true&gt;<br>   &lt;/cffunction&gt;</p><p>   &lt;cffunction name="onRequestStart" returntype="boolean" access="public"&gt;<br>   &lt;cfargument name="url" required="true" type="string"&gt;<br>      &lt;cfset onApplicationStart()&gt; &lt;!--- save current url scope into application.url so we can still access the url scope ---&gt;<br>      &lt;cfset request.urlHasInit = false&gt;<br>      &lt;cfset request.onRequestStartURL = url&gt;</p><p>      &lt;cfif StructKeyExists(application.url, "init")&gt;<br>         &lt;cfset request.urlHasInit = true&gt;<br>      &lt;/cfif&gt;<br>      &lt;cfreturn true&gt;<br>   &lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>You will see that the same problem occurs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739507">16</a> by Michael Wilson
		posted on 3/8/2012 at 10:06 PM
		</div>
		<div class="comment_text"><p>And based on that code I would expect to get the same error, because in onApplicationStart you are no longer saving a pointer to the URL scope, you are setting application.url to a string. If I change onApplicationStart to:</p><p>&lt;cffunction name="onApplicationStart" returntype="boolean" access="public"&gt;<br>	&lt;cfset application.url = arrayNew(1)&gt;<br>	&lt;cfreturn true&gt;<br>&lt;/cffunction&gt;</p><p>This will fail as well, except now CF throws this error:<br>You have attempted to dereference a scalar variable of type class coldfusion.runtime.Array as a structure with members.</p><p>Really there is nothing special about any of the scopes, as far as CF is concerned they are just another variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739509">17</a> by Andrew Scott
		posted on 3/8/2012 at 10:14 PM
		</div>
		<div class="comment_text"><p>So michael what you are saying is that it is ok to use url as an argument name, as long as it is stored in the Application scope.</p><p>Because that is what is happening.</p><p>Sorry but your example is mute, because you have just identified another example of the problem at hand.</p><p>And btw I raised this as a bug with Adobe a long time ago, my view is very simple on the matter.</p><p>If you look at my blog and take my example, when ColdFusion uses the name session as in local scope. Then ColdFusion should be able to know that</p><p>writeDump(session); is a scope and do no lookup in the variable lookup, and should dump the session scope.</p><p>writeDump(local.session) should do as it is told and dump the variable session that is stored in the local scope.</p><p>Sorry but I consider it a bug, especially my example on my blog because it was a pain in the ass to change so much code to have an application migrated from ColdFusion 8 production code, to ColdFusion 9.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739510">18</a> by Tyler Clendenin
		posted on 3/9/2012 at 9:35 AM
		</div>
		<div class="comment_text"><p>@Andrew</p><p>The local.session issue you describe is only Coldfusion 9 breaking backwards compatibility with Coldfusion 8 by introducing the local scope as a built-in scope.</p><p>Before CF9 the local scope convention you used existed in what was known as the unnamed scope.  But Adobe (in CF9) officially canonized the local scope to the scope stack.</p><p>This is why your CFCs broke.  The session scope still existed, but in the context of your CFC the local.session variable was popped off the stack first.</p><p>In the future, I would advise not using built-in keywords/scopes for your variable names to minimize the impact of future updates.  This of course is never bullet proof, since conventions becoming standards can always have side effects.  In this case, Adobe made the judgment call that adding the local scope would help, but these edge cases are always a possibility.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739513">19</a> by Tyler Clendenin
		posted on 3/9/2012 at 9:36 AM
		</div>
		<div class="comment_text"><p>@Andrew</p><p>I should also state that, yes, it is ok to use a variable named "url" as an argument, but in the context of the function it is expected behavior to not have access to the url scope in that case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739512">20</a> by Andrew Scott
		posted on 3/9/2012 at 1:41 PM
		</div>
		<div class="comment_text"><p>Actually it is not expected behaviour, for example how many of you use the line debugger?</p><p>This is also a problem there, because when you are looking at all the snapshots of scopes and the scope goes missing, a developer can be left bewildered as to why.</p><p>Don't get me wrong here, I understand the problem, or lack of in most of your eyes. But Adobe has agreed that this is actually wrong behaviour, and it under review.</p><p>That doesn't mean it will be fixed, but it means enough merit is given that it is a problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739516">21</a> by Justin Carter
		posted on 3/9/2012 at 5:39 PM
		</div>
		<div class="comment_text"><p>I agree with Andrew, this is 100% a bug in the way CF is declaring "arguments.url". If it was not allowed it should throw an error, but considering it works in Railo I think it should be fixed!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739514">22</a> by Sean N Henderson
		posted on 3/17/2012 at 12:02 AM
		</div>
		<div class="comment_text"><p>I'm going with the reserved words argument.</p><p>I'll go a step further and say that for sanity purposes, argument names should be named by their order, not their semantics.</p><p>cfargument name="arg1"<br>cfargument name="arg2"<br>...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739515">23</a> by Raymond Camden
		posted on 3/17/2012 at 12:45 AM
		</div>
		<div class="comment_text"><p>To:Sean<br>OMG no - never. :) Arguments should be named something sensible - so you know what they represent!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739518">24</a> by Yajaira
		posted on 6/19/2014 at 9:31 PM
		</div>
		<div class="comment_text"><p>I'm using coldfusion 11 and I still get the same error <br>You have Attempted to dereference scalar variable of type class java.lang.String as a structure with members.</p><p>How can I fix it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739517">25</a> by Raymond Camden
		posted on 6/20/2014 at 6:19 AM
		</div>
		<div class="comment_text"><p>Um... don't do it. Maybe I'm misreading you, but isn't it obvious to just not use the built in scope as an argument name?</p></div>
	</div>
</div>
		