
<div class="comment" id="c_1713651089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651089">1</a> by Enayet
		posted on 3/26/2006 at 1:03 AM
		</div>
		<div class="comment_text"><p>If I am not logged in, I get an error message when I click on the Galleries link in your sample application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651097">2</a> by Michael White
		posted on 3/26/2006 at 2:07 AM
		</div>
		<div class="comment_text"><p>good timing Ray, I was looking to spend time with this this weekend... how about a diagram/flow chart on how the program logic works within Model-Glue. When you are coding all this stuff it's not necessarily coded in the same order the program flows... maybe a quick little thing that traces Tron's path through the machine?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651095">3</a> by Michael White
		posted on 3/26/2006 at 2:30 AM
		</div>
		<div class="comment_text"><p>Ok, finished giving it the once-over. First of all, it's not too long. Second, in your query in getGalleries, one of the fields you select is useridfk but it doesn't look like you use it (yet?). Is that going to be a problem for Access users?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651094">4</a> by Raymond Camden
		posted on 3/26/2006 at 3:42 AM
		</div>
		<div class="comment_text"><p>Michael, I don't use useridfk in the code above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651096">5</a> by Raymond Camden
		posted on 3/26/2006 at 3:45 AM
		</div>
		<div class="comment_text"><p>Enayet, confirmed. Odd. I'm not sure why. I will post again later tonight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651100">6</a> by Michael White
		posted on 3/26/2006 at 7:36 PM
		</div>
		<div class="comment_text"><p>you mention using snippets to help with some of the drudgery: maybe a separate little quickie on snippets in cfeclipse? I think they're a different beast than snippets in Dreamweaver or GoLive. Nathan has a recorded presentation (Zero to Hero) with a little bit about them but I don't have a transcript. He has a few he uses available on his site. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.dopefly.com%2Ftechblog%2F%3AMQIrP8BVXK3lubVsHfBnygdOXqA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dopefly.com/techblog/">http://www.dopefly.com/tech...</a> (2-22-06)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651105">7</a> by Bob
		posted on 3/27/2006 at 2:43 PM
		</div>
		<div class="comment_text"><p>Snippets in CFEclipse</p><p>Set directory in Eclipse: Window &gt; Preferences &gt; CFEclipse &gt; alter File Paths To Snippets Directory</p><p>To create a snippet in Eclipse, open Snip Tree View (Window &gt; Show View &gt; Snip Tree View). Click the + icon to add a new snippet. 'Insert' inserts the current snippet into your CF document.</p><p>Each snippet comprises one XML file, for example here's a basic CFQUERY for a SELECT:</p><p>&lt;code&gt;<br>&lt;?xml version="1.0" encoding="utf-8"?&gt;<br>&lt;snippet&gt;<br>&lt;name&gt;select&lt;/name&gt;<br>&lt;help&gt;select&lt;/help&gt;<br>&lt;starttext&gt;&lt;![CDATA[&lt;cfquery name="qrySelect" datasource="#variables.instance.DSN#"&gt;<br>	SELECT	<br>	FROM	<br>	WHERE	<br>&lt;/cfquery&gt;]]&gt;&lt;/starttext&gt;<br>&lt;endtext&gt;&lt;![CDATA[]]&gt;&lt;/endtext&gt;<br>&lt;/snippet&gt;<br>&lt;/code&gt;</p><p>If you're working in a team environment, you could point everyone's snippet file path to the same network directory in order to share snippets.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651102">8</a> by Bob
		posted on 3/27/2006 at 2:45 PM
		</div>
		<div class="comment_text"><p>Please delete the &lt;code&gt; and &lt;/code&gt; tags from the XML above!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651098">9</a> by Raymond Camden
		posted on 3/27/2006 at 6:07 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing Bob. One snippet I use is for CFC get/setters. Hopefully this will paste well:</p><p>&lt;cffunction name="set$${capitalname}" returnType="void" access="public" output="false"&gt;<br>	&lt;cfargument name="$${name}" type="string" required="true"&gt;<br>	&lt;cfset variables.instance.$${name} = arguments.$${name}&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="get$${capitalname}" returnType="string" access="public" output="false"&gt;<br>	&lt;cfreturn variables.instance.$${name}&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651103">10</a> by Pat B
		posted on 3/27/2006 at 10:35 PM
		</div>
		<div class="comment_text"><p>Ray, the line: &lt;cfif not isAuthenticated()&gt; fails on CFMX 6.1 with a isAuthenticaed is not supported in CFMX.</p><p>If I add a &lt;cfset tempauthenticated = isAuthenticated()&gt; then change the if to use the new variable, it works fine.</p><p>Is that a known issue with CFMX 6.1? Can you not use private funtions in a CFIF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651101">11</a> by Raymond Camden
		posted on 3/27/2006 at 11:01 PM
		</div>
		<div class="comment_text"><p>Oh heh. Shoot. You can just use a new name for it, AmIAuthenticated, and try that instead. CFMX6 had a silly bug. It wouldn't let you make a UDF/method with the nane, isAUthenticated, because EARLIER versions of CF used that func for advanced security. Instead of just removing the functions, they added a "hook" so you couldn't even use the name. That was removed in CFMX7 thank goodness.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651106">12</a> by Lola Lee Beno
		posted on 3/30/2006 at 1:55 AM
		</div>
		<div class="comment_text"><p>I have a question about the query for create function in galleryDAO.cfc.  I'm using MySQL for my database, so I've had to make modifications accordingly to create the tables.  I looked at it and I'm seeing:</p><p>		SELECT @@IDENTITY AS newID;<br>		SET NOCOUNT OFF</p><p>What would be the equivalent for MySQL?</p><p>Also, useridfk is used in the query for the getit function; should be changed to username, I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651104">13</a> by Raymond Camden
		posted on 3/30/2006 at 4:06 AM
		</div>
		<div class="comment_text"><p>I think I normally cheat and either lock and grab latest or use UUID.</p><p>Also, the useridfk bug should be fixed in lesson 8.</p></div>
	</div>
</div>
		