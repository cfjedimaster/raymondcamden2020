
<div class="comment" id="c_1713615410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615410">1</a> by PJF
		posted on 3/9/2004 at 7:10 AM
		</div>
		<div class="comment_text"><p>I've had problems with duplicate as well.  I really wanted to use it to copy my application and session scopes to the request scope.  Problem is when any new vars added to request.Ses.  When using duplicate() to create a deep copy of request.Ses it will not copy any new vars...only ones that exsisted in the session scope first. Below is my work around however...bad.</p><p>&lt;cflock scope="application" type="exclusive" timeout="10"&gt;<br>&lt;cfscript&gt;<br>	StructClear(application);<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fapplication.foo%3AMaP78cqL0IJIg8xJrShBhtLG58A&amp;cuid=3321886" rel="nofollow noopener" title="application.foo">application.foo</a> = StructNew();<br>	structinsert(<a href="http://disq.us/url?url=http%3A%2F%2Fapplication.foo%3AMaP78cqL0IJIg8xJrShBhtLG58A&amp;cuid=3321886" rel="nofollow noopener" title="application.foo">application.foo</a>, "Test1", 1111);<br>	structinsert(<a href="http://disq.us/url?url=http%3A%2F%2Fapplication.foo%3AMaP78cqL0IJIg8xJrShBhtLG58A&amp;cuid=3321886" rel="nofollow noopener" title="application.foo">application.foo</a>, "Test2", 2222);<br>	structinsert(<a href="http://disq.us/url?url=http%3A%2F%2Fapplication.foo%3AMaP78cqL0IJIg8xJrShBhtLG58A&amp;cuid=3321886" rel="nofollow noopener" title="application.foo">application.foo</a>, "Test3", 3333);<br>&lt;/cfscript&gt;<br>&lt;cfdump label="Application Scope - BEFORE" var="#application#"&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Frequest.app%3A2fyOYL4xgzC_ZOq64wyB5m7-JVI&amp;cuid=3321886" rel="nofollow noopener" title="request.app">request.app</a> = Duplicate(application)&gt;</p><p>&lt;cfscript&gt;<br>	<a href="http://disq.us/url?url=http%3A%2F%2Frequest.app.bar%3AtcaMgFul3BXi0M4_DscKTZkEfhw&amp;cuid=3321886" rel="nofollow noopener" title="request.app.bar">request.app.bar</a> = StructNew();<br>	structinsert(<a href="http://disq.us/url?url=http%3A%2F%2Frequest.app.bar%3AtcaMgFul3BXi0M4_DscKTZkEfhw&amp;cuid=3321886" rel="nofollow noopener" title="request.app.bar">request.app.bar</a>, "Test1", 1111);<br>	structinsert(<a href="http://disq.us/url?url=http%3A%2F%2Frequest.app.bar%3AtcaMgFul3BXi0M4_DscKTZkEfhw&amp;cuid=3321886" rel="nofollow noopener" title="request.app.bar">request.app.bar</a>, "Test2", 2222);<br>	structinsert(<a href="http://disq.us/url?url=http%3A%2F%2Frequest.app.bar%3AtcaMgFul3BXi0M4_DscKTZkEfhw&amp;cuid=3321886" rel="nofollow noopener" title="request.app.bar">request.app.bar</a>, "Test3", 3333);<br>	StructUpdate(<a href="http://disq.us/url?url=http%3A%2F%2Frequest.app.foo%3ALmH1VjgK5MMq4jOZk7SEvjYP-R4&amp;cuid=3321886" rel="nofollow noopener" title="request.app.foo">request.app.foo</a>, "Test1", 9999);<br>&lt;/cfscript&gt;<br>&lt;cfdump label="Request.App Scope" var="#request.App#"&gt;<br>	&lt;cfset StructAppend(application, Duplicate(request.App), "yes")&gt;<br>&lt;cfdump label="Application Scope - After" var="#application#"&gt;</p><p>&lt;cfscript&gt;<br>	StructUpdate(<a href="http://disq.us/url?url=http%3A%2F%2Frequest.App.bar%3AvjVo2lSvfTmHYHCtaWLSM8jVMt0&amp;cuid=3321886" rel="nofollow noopener" title="request.App.bar">request.App.bar</a>, "Test1", "ha");<br>&lt;/cfscript&gt;<br>&lt;cfdump label="Application - After Change - Is by value or reference" var="#application#"&gt;<br>&lt;cfdump label="Request.App Scope - After Change - Is by value or reference" var="#request.App#"&gt;<br>&lt;/cflock&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615414">2</a> by Raymond Camden
		posted on 3/9/2004 at 4:20 PM
		</div>
		<div class="comment_text"><p>I'm afraid I don't see what you mean. Your last update to <a href="http://disq.us/url?url=http%3A%2F%2Frequest.app.bar%3AtcaMgFul3BXi0M4_DscKTZkEfhw&amp;cuid=3321886" rel="nofollow noopener" title="request.app.bar">request.app.bar</a> does NOT modify Application so the duplicate looks to be working ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615415">3</a> by PJF
		posted on 3/9/2004 at 9:01 PM
		</div>
		<div class="comment_text"><p>I apologize for my horribly written comment.</p><p>Without writting the locks around this, this is what I used to do.</p><p>In Application.cfm -<br>&lt;cfset request.Ses = Duplicate(session)&gt;<br>&lt;cfset request.App = Duplicate(application)&gt;</p><p>In the OnRequestEnd.cfm -<br>&lt;cfset session = StructCopy(request.Ses)&gt;<br>&lt;cfset session = StructCopy(request.App)&gt;</p><p>I actually learned this trick from you, Mr. Camden in Hewitt's Core ColdFusion 5 book.  Thanks for the tip.</p><p>I was just wondering why you can't use Duplicate() instead of StructCopy() in the OnRequestEnd.  I've tried duplicate() in the OnRequestEnd.  Say you copy your session into the request.Ses scope and on your template you create a few new variables in the request.Ses that don't exist yet in the session scope.  Using Duplicate will not "copy" them into the session scope unless that structure key exists in it.  Using Duplicate() is pretty useless because any new variables you want to add have to be added in the session scope...which sort of defeats the purpose of not having to lock around everything.</p><p>The following code is an example:<br>&lt;!--- Set a var ---&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fsession.foo%3A0GFwmortM5kwImb-zfNafWJu1YY&amp;cuid=3321886" rel="nofollow noopener" title="session.foo">session.foo</a> = "foo"&gt;<br>&lt;!--- Dump the session scope ---&gt;<br>&lt;cfdump label="Session Scope - Before Duplicate" var="#session#"&gt;<br>&lt;!--- Now dup it to the <a href="http://disq.us/url?url=http%3A%2F%2Frequest.ses%3ALyAGE8uEX2INkAGtUyn2SR02fJs&amp;cuid=3321886" rel="nofollow noopener" title="request.ses">request.ses</a> ---&gt;<br>&lt;cfset request.Ses = Duplicate(session)&gt;</p><p>&lt;!--- Add a new var that doesn't exist in the session scope yet ----&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Frequest.Ses.bar%3AkpERepb0OnrQdTzJEawZk7w8gCc&amp;cuid=3321886" rel="nofollow noopener" title="request.Ses.bar">request.Ses.bar</a> = "bar"&gt;<br>&lt;!--- Dump the request.Ses scope ---&gt;<br>&lt;cfdump label="Request.Ses Scope - Dump" var="#request.Ses#"&gt;<br>&lt;!--- Dup the request.Ses ---&gt;<br>&lt;cfset session = Duplicate(request.Ses)&gt;</p><p>&lt;!--- Dump the session scope ---&gt;<br>&lt;cfdump label="Session Scope - After Duplication" var="#session#"&gt;</p><p>As you can see <a href="http://disq.us/url?url=http%3A%2F%2Frequest.Ses.bar%3AkpERepb0OnrQdTzJEawZk7w8gCc&amp;cuid=3321886" rel="nofollow noopener" title="request.Ses.bar">request.Ses.bar</a> has not been copied back to the session scope.  I am curious why this happends.</p><p>StructCopy() doesn't produce a "deep copy" of nested structures which can end up being pretty annoying because it would force me to use arrays a lot.</p><p>In my previous post, I showed my "solution" for this...however I don't know if it impacts performance a lot.</p><p>I usually use:<br>&lt;cfset StructAppend(session, Duplicate(request.Ses), "yes")&gt;</p><p>Thanks for hearing me out,<br>PJF</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615413">4</a> by Raymond Camden
		posted on 3/10/2004 at 5:34 PM
		</div>
		<div class="comment_text"><p>I believe the issue you are seeing is that Session is more than a struct, its a scope. I noticed if you change your last duplicate to</p><p>cfset structAppend(session, request.Ses, true)</p><p>then it works correctly.</p></div>
	</div>
</div>
		