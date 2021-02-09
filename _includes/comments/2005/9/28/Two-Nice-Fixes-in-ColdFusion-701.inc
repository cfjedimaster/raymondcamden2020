
<div class="comment" id="c_1713621098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621098">1</a> by Simon Horwith
		posted on 9/28/2005 at 11:54 PM
		</div>
		<div class="comment_text"><p>I don't know Ray, I'd say that having a &lt;cflocation&gt; anywhere in Application.cfc is an error. You're right that the server behavior was a bug, but I've qot to question putting a &lt;cflocation&gt; in any event other than onError(). To me that's a bad practice. The only place I could see possibly putting one is in the onError() method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621104">2</a> by Anonymous
		posted on 9/28/2005 at 11:58 PM
		</div>
		<div class="comment_text"><p>The use of a &lt;cflocation&gt; tag anywhere in the application could trigger the onError() event.  The same applies to using the &lt;cfabort&gt; tag within a processing block, it would trigger the onError() event as well.  I believe this was due to the onError() event not filtering out the internal error type thrown by those tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621105">3</a> by Raymond Camden
		posted on 9/28/2005 at 11:59 PM
		</div>
		<div class="comment_text"><p>Simon, you misread, see the comment above mine. Btw, anon, why hide?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621106">4</a> by Simon Horwith
		posted on 9/29/2005 at 12:16 AM
		</div>
		<div class="comment_text"><p>I was sure I've done &lt;cflocation&gt;s in apps that had onError methods... but maybe not. Sorry for that, I thought you were refering to using &lt;cflocation&gt; inside an event handler, which I dissaprove of.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621107">5</a> by Roland Collins
		posted on 9/29/2005 at 2:08 AM
		</div>
		<div class="comment_text"><p>I'm glad you got bugfixes - all I got was mure bugs!  cffile action="upload" is completely broken in 7.01.  If you do</p><p>cffile action="upload" destination="c:\temp\test.jpg"</p><p>CF creates a directory named test.jpg and then puts your file in it, so it winds up at c:\temp\test.jpg\test.jpg.</p><p>:(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621112">6</a> by Raymond Camden
		posted on 9/29/2005 at 2:10 AM
		</div>
		<div class="comment_text"><p>That's not a bug. The Destination attribute expects the folder, not the filename.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621115">7</a> by Roland Collins
		posted on 9/29/2005 at 2:16 AM
		</div>
		<div class="comment_text"><p>In all versions up to version 7,  passing in a file name worked!  So at the very least, it's a breaking change, and the change in behavior isn't mentioned in the release notes :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621114">8</a> by Brannon Hightower
		posted on 9/29/2005 at 4:37 PM
		</div>
		<div class="comment_text"><p>That is like putting Pound signs in your cfml code, you can do it but it doesn't make it correct just because it doesn't through an error.</p><p>just my 2 cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621116">9</a> by Roland Collins
		posted on 9/30/2005 at 6:47 AM
		</div>
		<div class="comment_text"><p>Actually, the documentation (pre 7.01) even included examples of using the tag this way, so I wouldn't exactly call this usage incorrect.  Anyway, the little birdies have told me that this is going to be returned to its old behavior in a hotfix which will come out soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621113">10</a> by Raymond Camden
		posted on 10/3/2005 at 10:29 PM
		</div>
		<div class="comment_text"><p>Roland, they posted a hot fix today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621117">11</a> by Roland Collins
		posted on 10/3/2005 at 10:32 PM
		</div>
		<div class="comment_text"><p>Yep - I helped "inspire" it ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621118">12</a> by Todd Sharp
		posted on 10/7/2005 at 3:47 AM
		</div>
		<div class="comment_text"><p>Ray:</p><p>Before the updater I had a gridcol with both dates and text (the query that populated the grid would return "exhausted" if the date was less than today, or "greater than 5 years" if applicable - or simply a date in the mm/dd/yyyy format).  In my cfgridcolumn I added type="date" and everything worked out perfect - the dates sorted correctly and the text items were grouped accordingly.  After the updater, any non-date text items are turned into blank cells in the grid.  Removing type=date returns the text and the dates to the column, but doesn't sort correctly.  What gives?</p><p>Also - where is the Ask a jedi box and all the other links, etc on your site?  They're gone!?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621119">13</a> by Raymond Camden
		posted on 10/7/2005 at 4:51 AM
		</div>
		<div class="comment_text"><p>No idea on your cfgrid issue, but as for the layout, its a stupid IE bug with this template. Whenever I have content that is a bit too wide, it breaks in IE. It should be fixed now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621121">14</a> by todd sharp
		posted on 10/7/2005 at 5:23 AM
		</div>
		<div class="comment_text"><p>Indeed it is fixed.</p><p>Would my issue be considered a bug since it is a change in functionality that produces an undesired result?  After all, it worked before the updater...</p><p>If so, how do I report that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621120">15</a> by Raymond Camden
		posted on 10/7/2005 at 2:43 PM
		</div>
		<div class="comment_text"><p>I believe the URL is <a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fgo%2Fwish%3Aj6eIw0rxH2bmxXnMyQZ-YFwXuss&amp;cuid=3321886" rel="nofollow noopener" title="www.macromedia.com/go/wish">www.macromedia.com/go/wish</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621122">16</a> by Anu
		posted on 10/18/2005 at 6:32 PM
		</div>
		<div class="comment_text"><p>The updater 7.1 shows a blank page when using CFLOCATION on any page. This is because I am using the OnRequest method on Application.cfc, it raises an exception. Earlier the exception would be caught by OnError method but now the behavior has changed. An ideal fix will be to change the CFLOCATION behavior on Application.cfc so that its use does not raise an exception if it is being called with in OnRequest Method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621123">17</a> by Raymond Camden
		posted on 10/18/2005 at 7:11 PM
		</div>
		<div class="comment_text"><p>Is your cflocation in the method itself or in the page? cflocation works in pages just fine for me in 7.0.1. I also added, in onrequest, logic that said, if you are requesting index.cfm, cflocate to index2.cfm, and that ran fine.</p><p>Do not forget that you MUST cfinclude the file or it will not load. If you ONLY have a cflocation in onRequest, you will not see anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621124">18</a> by Anu
		posted on 10/18/2005 at 8:23 PM
		</div>
		<div class="comment_text"><p>Here is some code to reproduce the issue, create a new folder in your site to see if you too get the blank screen error. I can send you the URL of our DEV site via email if you want to see it in action.</p><p>&lt;!---  ************************** Application.cfc **************************  ---&gt;<br>&lt;cfcomponent output="false"&gt;</p><p>	&lt;cfscript&gt;<br>		<a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a>="Debug_CFLOCATION";<br>		this.sessionManagement=true;<br>		this.applicationTimeout=createtimespan(2,0,0,0);<br>		this.sessionTimeout=createtimespan(0,0,30,0);<br>	&lt;/cfscript&gt;</p><p>  &lt;cffunction name="onApplicationStart" returntype="void" output="false"&gt;<br>  &lt;/cffunction&gt;</p><p>  &lt;cffunction name="onSessionStart" returntype="void" output="false"&gt;<br>  &lt;/cffunction&gt;</p><p>  &lt;cffunction name="onRequestStart" returntype="void" output="false"&gt;<br>  &lt;/cffunction&gt;</p><p>  &lt;cffunction name="onRequestEnd" returntype="void" output="false"&gt;		<br>  &lt;/cffunction&gt;</p><p>  &lt;cffunction name="onSessionEnd"&gt;<br>  &lt;/cffunction&gt;</p><p>  &lt;cffunction name="onApplicationEnd" output="false"&gt;<br>  &lt;/cffunction&gt;</p><p>  &lt;cffunction name="onError"&gt;</p><p>    &lt;cfargument name="Exception" required="true"/&gt;<br>    &lt;cfargument type="String" name = "EventName" required="true"/&gt;</p><p>		&lt;cfswitch expression="#arguments.exception.rootcause.type#"&gt;<br>			&lt;cfcase value="coldfusion.runtime.AbortException"&gt;<br>				&lt;cfreturn/&gt;<br>			&lt;/cfcase&gt;<br>			&lt;cfdefaultcase&gt;<br>				&lt;cfdump var="#exception#"/&gt;<br>			&lt;/cfdefaultcase&gt;<br>		&lt;/cfswitch&gt;</p><p>   &lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p><p>&lt;!---  ************************** Index.cfm **************************  ---&gt;<br>&lt;cfparam name="form.submit" default=""/&gt;<br>&lt;cfparam name="url.logoff" default="0"/&gt;</p><p>&lt;cfif len(form.submit)&gt;<br>	&lt;cfset session.user = form.user/&gt;<br>	&lt;cflocation url="index.cfm" addtoken="no"/&gt;<br>&lt;cfelseif url.logoff&gt;<br>	&lt;cfscript&gt;<br>		structDelete(session,"user");<br>		StructClear(session);<br>	&lt;/cfscript&gt;<br>	&lt;cflocation url="index.cfm" addtoken="no"/&gt;	<br>&lt;/cfif&gt;</p><p>&lt;cfif IsDefined("session.user") and len(session.user)&gt;<br>	User &lt;cfoutput&gt;&lt;b&gt;#session.user#&lt;/b&gt;&lt;/cfoutput&gt; logged in&lt;br /&gt;<br>	&lt;a href="index.cfm?logoff=1"&gt;Log Off&lt;/a&gt;<br>&lt;cfelse&gt;<br>	&lt;cfform action="index.cfm" method="post" name="frmLogin"&gt;<br>		User Name:&lt;input type="text" size="12" name="user"/&gt;&amp;nbsp;&lt;input type="submit" name="submit" value="Log In"/&gt;<br>	&lt;/cfform&gt;	<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621125">19</a> by Anu
		posted on 10/18/2005 at 8:31 PM
		</div>
		<div class="comment_text"><p>Ray, also you must have noticed that I took even the OnRequest method out in this sample, so its something to do with CFLOCATION behivor rather than Application.cfc behavior. This used to work fine before CF 7.1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621128">20</a> by Anu
		posted on 10/18/2005 at 11:47 PM
		</div>
		<div class="comment_text"><p>This indeed was a CFLOCATION issue, and happens when running JRun with updater 6, here is the link to the hot fix provided by Macromedia for this<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fcfusion%2Fknowledgebase%2Findex.cfm%3Fid%3D5c9389c8%3AxZMmFPrQuTBjq3dwJi2Kv_c8pOs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/cfusion/knowledgebase/index.cfm?id=5c9389c8">http://www.macromedia.com/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621126">21</a> by Raymond Camden
		posted on 10/19/2005 at 6:52 AM
		</div>
		<div class="comment_text"><p>Anu, so it sounds like you are all ok then?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621127">22</a> by Avi
		posted on 11/16/2005 at 6:41 AM
		</div>
		<div class="comment_text"><p>I am running 7.0.1 and CFLOCATION still causes onError to trigger. I put the code from the earlier 7.0 post into the code, and it at least doesn't trigger my error emails anymore.</p></div>
	</div>
</div>
		