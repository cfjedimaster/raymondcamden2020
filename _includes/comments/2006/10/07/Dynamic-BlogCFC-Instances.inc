
<div class="comment" id="c_1713658040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658040">1</a> by Edd King
		posted on 11/27/2006 at 10:03 PM
		</div>
		<div class="comment_text"><p>How would you keep the blog name persistent if you don't have multiple sub domains?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658053">2</a> by Raymond Camden
		posted on 11/27/2006 at 10:05 PM
		</div>
		<div class="comment_text"><p>The use of cgi.server_name was arbitrary. You can base it on anything really.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658054">3</a> by Nick Tong
		posted on 11/27/2006 at 10:24 PM
		</div>
		<div class="comment_text"><p>How about adding a virtual directory if you have permissions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658056">4</a> by Raymond Camden
		posted on 11/28/2006 at 4:01 AM
		</div>
		<div class="comment_text"><p>Nick, it shouldn't matter. The idea is - one code base - and SOME kind of logic to determine current blog. You could even say, if it is morning, load the morning blog. It is up to you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658068">5</a> by Edd King
		posted on 11/28/2006 at 4:10 AM
		</div>
		<div class="comment_text"><p>But how do you keep the blogname constsiant?</p><p>Blog A has <br><a href="http://disq.us/url?url=http%3A%2F%2Fblog.com%3ADq529sYph-POmuCK77bUMr4KJto&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.com">http://blog.com</a><br>&lt;cfset blogname="blogA"&gt;</p><p>blogb has <br><a href="http://disq.us/url?url=http%3A%2F%2Fblog.com%3ADq529sYph-POmuCK77bUMr4KJto&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.com">http://blog.com</a><br>&lt;cfset blogname="blogB"&gt;</p><p>how do it know when you're in blog B as you can't use the application or session scope?</p><p>Am i missing the point?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658055">6</a> by Raymond Camden
		posted on 11/28/2006 at 4:12 AM
		</div>
		<div class="comment_text"><p>I think you may be. :) THe point is that YOU determine the blog name and settings. Your code does it all and the passes it to the blog and also makes the cfapplication tag dynamic as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658063">7</a> by Michael Marrotte
		posted on 3/9/2007 at 8:06 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>It looks like the latest version (5.6.001) of BlogCFC includes the dynamic application and blog name logic, but not the instance vars.  Would you mind commenting on this and how and if the latest version (5.6.001) of BlogCFC would change your approach, here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658037">8</a> by Raymond Camden
		posted on 3/9/2007 at 8:17 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure what you mean. I don't use the feature itself in the code you unzip. It is supported - but not used. I certainly did not remove the feature though. It is still there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658036">9</a> by Michael Marrotte
		posted on 3/9/2007 at 9:20 PM
		</div>
		<div class="comment_text"><p>I was referring to the following in the Application.cfm:</p><p>&lt;!--- <br>The prefix is now dynamic in case 2 people want to run blog.cfc on the same machine. Normally they<br>	  would run both blogs with the same org, and use different names, but on an ISP that may not be possible.<br>	  So I base part of the application name on the file path.</p><p>	Name can only be 64 max. So we will take right most part.<br>---&gt;</p><p>But, now that I look at again it looks like it works with multiple installs of the application.</p><p>Where would you suggest injecting the code for the Dynamic Instances, say in the root Application.cfm?</p><p>Additionally, I was thinking of making an instance table keyed on some server value and running a query to grab all the instance vars after sniffing out the server value, and then creating a new instance structure and setting all the vars like you seggest, but from the query values.</p><p>Any comments are appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658035">10</a> by Raymond Camden
		posted on 3/10/2007 at 1:14 AM
		</div>
		<div class="comment_text"><p>Yes, I do it in Application.cfm. Your idea seems ok. THis is why I built in the support - so you could make it based on anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658038">11</a> by Michael Marrotte
		posted on 3/12/2007 at 12:10 AM
		</div>
		<div class="comment_text"><p>Raymond:</p><p>Does this "Dynamic Instances" approach break your administrator settings tool?</p><p>I'm thinking I'll need to re-write or override setProperty in Blog.cfc, unless I keep all the instance definitions in blog.ini.cfm.</p><p>I'm thinking I'll override setProperty to update my instance table in the DB instead of blog.ini.cfm.</p><p>How's you administrator settings tool working in your "real site"</p><p>Any comments are greatly appreciated.</p><p>Thanks,</p><p>--Mike M.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658039">12</a> by Raymond Camden
		posted on 3/12/2007 at 8:09 AM
		</div>
		<div class="comment_text"><p>I recently added a setting that would hide the settings page from the admin. You would want to use this for multiserver blogs so that folks can't edit the settings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658042">13</a> by Matthew
		posted on 4/18/2007 at 1:22 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I have implemeted this functionality into my site and it seems to be now working to a point. I have downloaded and installed the latest blog version, added in the instance definitions to the Application.cfm file and some some tweaking on the settings to get it to load.<br>So i have one folder with the client dir in it, within this folder i have placed the org dir. I have one db schema (Oracle).</p><p>I tested this by firstly hardcoding the blogName var, this worked fine, an instance of the blog was created, i then logged into the admin this also worked fine and was able to add an entry and a category, all hunky dory.</p><p>The next step is to make the blog selection dynamic, so i thought the easy way is to create a blogselection.cfm page which passes a variable in blogName into the app via a url variable.</p><p>This seemed to work until i got to the admin, i passed the blogName var again to load the admin page, and tried to click onto add a new entry and it came back with blogName undefined.</p><p>OK i know exactly what it is doing here, its looking for the blogName variable again as the Application.cfm file has been hit again on trying to access the add entry page.</p><p>How can i get around this, everytime a page is called in the admin its looking for the blogName var, first thoughts were perhaps trying to store it in a session variable. Is this the best way to do this or can you suggestsomething else?</p><p>Any help appreciated.</p><p>Matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658041">14</a> by Matthew
		posted on 4/18/2007 at 2:17 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Its amazing what you can do with a little persistance.</p><p>I have managed to solve my above issue for my requirement.</p><p>I decided to use a session variable to hold the blogName and basically created a page with a link to blog1 and blog2.<br>Depending on what link was clicked, the session variable stores the blogname and so creates the instance for that blog.</p><p>OK it may not be the best solution but it seems to be working for what i need.</p><p>thankyou for the ideas and the application.</p><p>Matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658045">15</a> by Raymond Camden
		posted on 4/18/2007 at 2:22 PM
		</div>
		<div class="comment_text"><p>Glad you got it working. I was sleeping so thats my excuse for not helping earlier. :0</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658044">16</a> by James
		posted on 8/29/2007 at 12:45 AM
		</div>
		<div class="comment_text"><p>I'm trying to set up the dynamic instances in version 5.8.001. I created a new file called index_new.cfm:<br>(Please Note the DB information has been XXX'd out)<br>&lt;!---Sets the Blog to the Server Name---&gt;<br>&lt;cfset blogname = "Development Blog 2"&gt;<br>&lt;cfapplication name="_blog_#blogname#" sessionManagement="true" loginStorage="session"&gt;</p><p>&lt;!---INI Structure---&gt;&lt;cfset instance = structNew()&gt;<br>&lt;cfset instance.dsn = "xxxxxxxxx"&gt;<br>&lt;cfset instance.username = "xxxxxxxx"&gt;<br>&lt;cfset instance.password = "xxxxxxxx"&gt;<br>&lt;cfset instance.owneremail="j.harvey@swidigital.com"&gt;<br>&lt;cfset instance.blogurl = "http://localhost/blogcfc/index_new.cfm"&gt;<br>&lt;cfset instance.blogtitle = "#blogname# Blog"&gt;<br>&lt;cfset instance.blogdescription = "#blogname# Blog"&gt;<br>&lt;cfset instance.blogDBType="MSSQL"&gt;<br>&lt;cfset instance.locale="en_US"&gt;<br>&lt;cfset instance.users = ""&gt;<br>&lt;cfset instance.commentsFrom = ""&gt;<br>&lt;cfset instance.mailServer = "xxxxxxxxxxx"&gt;<br>&lt;cfset instance.mailUsername = "j.harvey"&gt;<br>&lt;cfset instance.mailPassword = "jch1701"&gt;<br>&lt;cfset instance.pingurls = ""&gt;<br>&lt;cfset instance.offset = "0"&gt;<br>&lt;cfset instance.allowtrackbacks = true&gt; &lt;!---True or False---&gt;<br>&lt;cfset instance.trackbackspamlist="lots of bad words here"&gt;<br>&lt;cfset instance.blogkeywords = ""&gt;<br>&lt;cfset instance.ipblocklist = ""&gt;<br>&lt;cfset instance.allowgravatars = true&gt;&lt;!---True or False---&gt;<br>&lt;cfset instance.maxentries = "10"&gt;<br>&lt;cfset instance.usecaptcha = false&gt;&lt;!---True or False---&gt;</p><p>&lt;!---Pass the Populated Structure to the CFC---&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.blog%3AyPfk_08JbGyDtIai-mjD02kxbvg&amp;cuid=3321886" rel="nofollow noopener" title="application.blog">application.blog</a> = createObject("component","<a href="http://disq.us/url?url=http%3A%2F%2Forg.camden.blog.blog%3AyzvXxHJZ-_gXQzJ9UzwfK-QPovg&amp;cuid=3321886" rel="nofollow noopener" title="org.camden.blog.blog">org.camden.blog.blog</a>").init(blogname,instance)&gt;</p><p>When I go to run the page, it comes up blank. Do I need to load these variables in the index.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658043">17</a> by Raymond Camden
		posted on 8/29/2007 at 1:30 AM
		</div>
		<div class="comment_text"><p>Well, you should be using index.cfm, not index_new.cfm. Switch to that and let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658046">18</a> by James
		posted on 8/30/2007 at 10:56 PM
		</div>
		<div class="comment_text"><p>I tried doing it on the Index.cfm Page, and i just get the default blog, not the second one I'm trying to invoke.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658047">19</a> by Raymond Camden
		posted on 8/30/2007 at 11:24 PM
		</div>
		<div class="comment_text"><p>Right - but the idea is to use ONE file base, not one file per blog. You need to keep things in index.cfm as it is an important file to the code base.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658048">20</a> by James
		posted on 9/7/2007 at 1:19 AM
		</div>
		<div class="comment_text"><p>Ok, I've tried placing the Multiple Instances code in my application.cfm file and running the website. Now I get the following error:</p><p> Context validation error for tag cfif.<br>The start tag must have a matching end tag. An explicit end tag can be provided by adding &lt;/cfif&gt;. If the body of the tag is empty you can use the shortcut &lt;cfif .../&gt;.</p><p>The error occurred in C:\Inetpub\wwwroot\blog_dev\blogcfc\Application.cfm: line 64</p><p>62 : <br>63 : &lt;!--- By default we cache a lot of information. Allow reinit=1 in the URL to restart cache. ---&gt;<br>64 : &lt;cfif not isDefined("application.init") or isDefined("url.reinit")&gt;<br>65 : <br>66 : 	&lt;!--- load and init blog ---&gt;</p><p>The code i did in my application.cfm looks like this:<br>&lt;cfsetting enablecfoutputonly="true" showdebugoutput="false"&gt;<br>&lt;!---<br>	Name         : Application.cfm<br>	Author       : Raymond Camden <br>	Created      : Some time ago<br>	Last Updated : April 13, 2007<br>	History      : Reset history for version 5.7<br>				 : Added comments, and Scott P's pod manager cfc (rkc 4/13/07)<br>	Purpose		 : Blog application page<br>---&gt;</p><p>&lt;cfset setEncoding("form","utf-8")&gt;<br>&lt;cfset setEncoding("url","utf-8")&gt;</p><p>&lt;!--- Edit this line if you are not using a default blog ---&gt;<br>&lt;!---&lt;cfset blogname = "Default"&gt;---&gt;</p><p>&lt;!--- <br>The prefix is now dynamic in case 2 people want to run blog.cfc on the same machine. Normally they<br>	  would run both blogs with the same org, and use different names, but on an ISP that may not be possible.<br>	  So I base part of the application name on the file path.</p><p>	Name can only be 64 max. So we will take right most part.<br>---&gt;<br>&lt;!---&lt;cfset prefix = hash(getCurrentTemplatePath())&gt;<br>&lt;cfset prefix = reReplace(prefix, "[^a-zA-Z]","","all")&gt;<br>&lt;cfset prefix = right(prefix, 64 - len("_blog_#blogname#"))&gt;<br>&lt;cfapplication name="#prefix#_blog_#blogname#" sessionManagement="true" loginStorage="session"&gt;---&gt;</p><p>&lt;!---Multiple Instances Code Invokation---&gt; <br>&lt;cfset blogname = listFirst(cgi.server_name,".")&gt;<br>&lt;cfapplication name="_blog_#blogname#" sessionManagement="true" loginStorage="session"&gt;<br>&lt;cfset instance = structNew()&gt;<br>&lt;cfset instance.dsn = BlogDB&gt;<br>&lt;cfset instance.owneremail="j.harvey@swidigital.com"&gt;<br>&lt;cfset instance.blogurl = "http://#cgi.server_name#/blog_dev/blogcfc/index.cfm"&gt;<br>&lt;cfset instance.blogtitle = "#blogname# Blog"&gt;<br>&lt;cfset instance.blogdescription = "#blognme# Blog"&gt;<br>&lt;cfset instance.blogDBType="MSSQL"&gt;<br>&lt;cfset instance.locale="en_US"&gt;<br>&lt;cfset instance.users = "admin"&gt;<br>&lt;cfset instance.commentsFrom = ""&gt;<br>&lt;cfset instance.mailServer = "xxxxxxxxxxxx"&gt;<br>&lt;cfset instance.mailUsername = "xxxxxx"&gt;<br>&lt;cfset instance.mailPassword = "xxxxxx"&gt;<br>&lt;cfset instance.pingurls = ""&gt;<br>&lt;cfset instance.offset = "0"&gt;<br>&lt;cfset instance.allowtrackbacks = false&gt;<br>&lt;cfset instance.trackbackspamlist="lots of bad words here"&gt;<br>&lt;cfset instance.blogkeywords = ""&gt;<br>&lt;cfset instance.ipblocklist = ""&gt;<br>&lt;cfset instance.allowgravatars = true&gt;<br>&lt;cfset instance.maxentries = "10"&gt;<br>&lt;cfset instance.usecaptcha = false&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.blog%3AyPfk_08JbGyDtIai-mjD02kxbvg&amp;cuid=3321886" rel="nofollow noopener" title="application.blog">application.blog</a> = createObject("component","<a href="http://disq.us/url?url=http%3A%2F%2Forg.camden.blog.blog%3AyzvXxHJZ-_gXQzJ9UzwfK-QPovg&amp;cuid=3321886" rel="nofollow noopener" title="org.camden.blog.blog">org.camden.blog.blog</a>").init(blogname,instance)&gt;<br>&lt;!---End of the Multiple Instance---&gt;</p><p>&lt;!--- Our exception template. ---&gt;<br>&lt;cferror type="exception" template="error.cfm"&gt;</p><p>&lt;cfinclude template="includes/udf.cfm"&gt;</p><p>&lt;!--- By default we cache a lot of information. Allow reinit=1 in the URL to restart cache. ---&gt;<br>&lt;cfif not isDefined("application.init") or isDefined("url.reinit")&gt;</p><p>	&lt;!--- load and init blog ---&gt;<br>	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.blog%3AyPfk_08JbGyDtIai-mjD02kxbvg&amp;cuid=3321886" rel="nofollow noopener" title="application.blog">application.blog</a> = createObject("component","<a href="http://disq.us/url?url=http%3A%2F%2Forg.camden.blog.blog%3AyzvXxHJZ-_gXQzJ9UzwfK-QPovg&amp;cuid=3321886" rel="nofollow noopener" title="org.camden.blog.blog">org.camden.blog.blog</a>").init(blogname)&gt;</p><p>	&lt;!--- Root folder for uploaded images, used under images folder ---&gt;<br>	&lt;cfset application.imageroot = application.blog.getProperty("imageroot")&gt;</p><p>	&lt;!--- locale related ---&gt;<br>	&lt;cfset application.resourceBundle = createObject("component","org.hastings.locale.resourcebundle")&gt;</p><p>	&lt;!--- Path may be different if admin. ---&gt;<br>	&lt;cfif findNoCase("admin/", cgi.script_name) or findNoCase("xmlrpc/", cgi.script_name)&gt;<br>		&lt;cfset theFile = expandPath("../includes/main")&gt;<br>		&lt;cfset lylaFile = "../includes/captcha.xml"&gt;<br>		&lt;cfset slideshowdir = expandPath("../images/slideshows/" &amp; application.imageroot)&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset theFile = expandPath("./includes/main")&gt;<br>		&lt;cfset lylaFile = "./includes/captcha.xml"&gt;<br>		&lt;cfset slideshowdir = expandPath("./images/slideshows/" &amp; application.imageroot)&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfset application.resourceBundle.loadResourceBundle(theFile, application.blog.getProperty("locale"))&gt;<br>	&lt;cfset application.resourceBundleData = application.resourceBundle.getResourceBundleData()&gt;<br>	&lt;cfset application.localeutils = createObject("component","org.hastings.locale.utils")&gt;<br>	&lt;cfset application.localeutils.loadLocale(application.blog.getProperty("locale"))&gt;</p><p>	&lt;!--- load slideshow ---&gt;<br>	&lt;cfset application.slideshow = createObject("component", "org.camden.blog.slideshow").init(slideshowdir)&gt;</p><p>	&lt;!--- Use Captcha? ---&gt;<br>	&lt;cfset application.usecaptcha = application.blog.getProperty("usecaptcha")&gt;</p><p>	&lt;cfif application.usecaptcha&gt;<br>		&lt;cfset application.captcha = createObject("component","org.captcha.captchaService").init(configFile="#lylaFile#") /&gt;<br>		&lt;cfset application.captcha.setup() /&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;!--- clear scopecache ---&gt;<br>	&lt;cfmodule template="tags/scopecache.cfm" scope="application" clearall="true"&gt;</p><p>	&lt;cfset majorVersion = listFirst(server.coldfusion.productversion)&gt;<br>	&lt;cfset minorVersion = listGetAt(server.coldfusion.productversion,2)&gt;<br>	&lt;cfset cfversion = majorVersion &amp; "." &amp; minorVersion&gt;</p><p>	&lt;cfset application.isColdFusionMX7 = server.coldfusion.productname is "ColdFusion Server" and cfversion gte 7&gt;</p><p>	&lt;!--- Used in various places ---&gt;<br>	&lt;cfset application.rootURL = application.blog.getProperty("blogURL")&gt;<br>	&lt;!--- per documentation - rooturl should be <a href="http://disq.us/url?url=http%3A%2F%2Fwww.foo.com%2Fsomething%2Fsomething%2Findex.cfm%3AQo3vdMQW7TYvoHyy4idM18Fc064&amp;cuid=3321886" rel="nofollow noopener" title="http://www.foo.com/something/something/index.cfm">http://www.foo.com/somethin...</a> ---&gt;<br>	&lt;cfset application.rootURL = reReplace(application.rootURL, "(.*)/index.cfm", "\1")&gt;</p><p>	&lt;!--- used for cache purposes is 60 minutes ---&gt;<br>	&lt;cfset application.timeout = 60*60&gt;</p><p>	&lt;!--- how many entries? ---&gt;<br>	&lt;cfset application.maxEntries = application.blog.getProperty("maxentries")&gt;</p><p>	&lt;!--- TBs allowed? ---&gt;<br>	&lt;cfset application.trackbacksAllowed = application.blog.getProperty("allowtrackbacks")&gt;</p><p>	&lt;!--- Gravatars allowed? ---&gt;<br>	&lt;cfset application.gravatarsAllowed = application.blog.getProperty("allowgravatars")&gt;</p><p>	&lt;!--- Load the Utils CFC ---&gt;<br>	&lt;cfset application.utils = createObject("component", "org.camden.blog.utils")&gt;</p><p>	&lt;!--- Load the Page CFC ---&gt;<br>	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.page%3Ai1n04t1xqN4kiqtXUytf_WV-17U&amp;cuid=3321886" rel="nofollow noopener" title="application.page">application.page</a> = createObject("component", "<a href="http://disq.us/url?url=http%3A%2F%2Forg.camden.blog.page%3AE_bEP2rLsrm34v7T8NTB-JeSGe4&amp;cuid=3321886" rel="nofollow noopener" title="org.camden.blog.page">org.camden.blog.page</a>").init(dsn=application.blog.getProperty("dsn"), username=application.blog.getProperty("username"), password=application.blog.getProperty("password"),blog=blogname)&gt;</p><p>	&lt;!--- Load the TB CFC ---&gt;<br>	&lt;cfset application.textblock = createObject("component", "org.camden.blog.textblock").init(dsn=application.blog.getProperty("dsn"), username=application.blog.getProperty("username"), password=application.blog.getProperty("password"),blog=blogname)&gt;</p><p>	&lt;!--- Do we have comment moderation? ---&gt;<br>	&lt;cfset application.commentmoderation = application.blog.getProperty("moderate")&gt;</p><p>	&lt;!--- Do we allow file browsing in the admin? ---&gt;<br>	&lt;cfset application.filebrowse = application.blog.getProperty("filebrowse")&gt;</p><p>	&lt;!--- Do we allow settings in the admin? ---&gt;<br>	&lt;cfset application.settings = application.blog.getProperty("settings")&gt;</p><p>	&lt;!--- load pod ---&gt;<br>	&lt;cfset application.pod = createObject("component", "org.camden.blog.pods")&gt;</p><p>What am I doing wrong? I haven't been able to get the multiple instances to run for anyhting.</p><p>CF:7.02<br>Windows IIS5.4 (win XP Pro)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658049">21</a> by Raymond Camden
		posted on 9/7/2007 at 1:21 AM
		</div>
		<div class="comment_text"><p>Well the error is pretty clear. You opened a CFIF someplace that you didn't close. Just start tracking through your code to see which one you forgot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658050">22</a> by James
		posted on 9/7/2007 at 4:48 PM
		</div>
		<div class="comment_text"><p>That's the thing ray, There's no &lt;cfif&gt; tag that I've modified, it only occurs when I add the (instance) codes above to the Application.cfm file...</p><p>If I remove them, It works ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658051">23</a> by Raymond Camden
		posted on 9/7/2007 at 4:51 PM
		</div>
		<div class="comment_text"><p>If you pasted the entire code above -then that isn't the complete file. There is a problem with some blogcfc files and Dreamweaver. Are you using Dreamweaver to edit the files? If so - it is cropping the files because it doesn't like a character in the file. Redownload - and edit with Notepad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658052">24</a> by James
		posted on 9/7/2007 at 5:55 PM
		</div>
		<div class="comment_text"><p>I only pasted the code upto where I had added the multiple-instance code.</p><p>I have the complete Application.cfm, and each and everythime, without fail, when I add the instance code to the application.cfm (client/application.cfm) I get the CFif error, and to get the blog back ot funcitonal status I have to extract the original application.cfm and reupload it unmodified.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658062">25</a> by Raymond Camden
		posted on 9/7/2007 at 6:00 PM
		</div>
		<div class="comment_text"><p>That is truly odd. So you scanned the file, and you see no missing &lt;/cfif&gt;s? Maybe you can send me your file via email.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658059">26</a> by James
		posted on 9/7/2007 at 6:21 PM
		</div>
		<div class="comment_text"><p>On On it's way</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658060">27</a> by Stephen
		posted on 4/15/2009 at 10:17 AM
		</div>
		<div class="comment_text"><p>Hey Ray, quick question.</p><p>I recently deployed BlogCFC using multiple instances with subdomains and it works great!</p><p>My question is, how can I go about assigning a custom enclosure directory for each instance?</p><p>I've got custom image root directories working, but it seems all the enclosures go to the same place.  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658061">28</a> by Raymond Camden
		posted on 4/15/2009 at 12:55 PM
		</div>
		<div class="comment_text"><p>Given that your subdomains are your 'primary keys', I'd just set the enclosure dir to "enclosures/" + subdomain. Be sure to make the dir if it doesn't exist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658057">29</a> by Stephen
		posted on 4/15/2009 at 10:27 PM
		</div>
		<div class="comment_text"><p>Ray, where do I set the enclosures dir?  I don't see a setting for it, did I miss something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658058">30</a> by Raymond Camden
		posted on 4/15/2009 at 10:28 PM
		</div>
		<div class="comment_text"><p>You don't set it - the code does. Look in Application.cfm. You would modify it there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658065">31</a> by Stephen
		posted on 4/15/2009 at 11:15 PM
		</div>
		<div class="comment_text"><p>Sorry if I'm dense, Ray, but I had looked through Application.cfm and did not see anything to customize the "enclosures" directory, would you give me a line # hint? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658064">32</a> by Raymond Camden
		posted on 4/17/2009 at 5:44 AM
		</div>
		<div class="comment_text"><p>I was wrong. It is actually defined in</p><p>/admin/entry.cfm</p><p>when you try to save a file:</p><p>&lt;cfif isDefined("form.enclosure") and len(trim(form.enclosure))&gt;<br>	&lt;cfset destination = expandPath("../enclosures")&gt;<br>	&lt;!--- first off, potentially make the folder ---&gt;<br>	&lt;cfif not directoryExists(destination)&gt;<br>		&lt;cfdirectory action="create" directory="#destination#"&gt;<br>	&lt;/cfif&gt;</p><p>I should move that in v6. Anyway, you would need to fix that, and fix the links in index.cfm:</p><p>Line 145: 		&lt;cfif len(enclosure)&gt;&lt;cfoutput&gt;&lt;img src="#application.rooturl#/images/disk.png" align="middle" title="#rb("download")#" height="16" width="16"&gt; &lt;a href="#application.rooturl#/enclosures/#urlEncodedFormat(getFileFromPath(enclosure))#"&gt;#rb("download")#&lt;/a&gt; | &lt;/cfoutput&gt;&lt;/cfif&gt;</p><p>And possibly in RSS as well. Yep, blog.cfc:</p><p>&lt;enclosure url="#xmlFormat("#rootURL#/enclosures/#getFileFromPath(enclosure)#")#" length="#filesize#" type="#mimetype#"/&gt;</p><p>Sorry!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658066">33</a> by Stephen
		posted on 4/19/2009 at 3:50 AM
		</div>
		<div class="comment_text"><p>Ray, thank you very much for pointing those out, it was very helpful! Now I've got it pretty much working as desired, glad to hear you're going to change that for v6!</p><p>On another note, a question about the &lt;more/&gt; and &lt;textblock&gt; tags... When using a RTE, such as fckeditor, these tags stop working, the code is being rendered out literally as text, what's the best way to handle these in RTE? thx</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658069">34</a> by Raymond Camden
		posted on 4/19/2009 at 5:55 PM
		</div>
		<div class="comment_text"><p>Sorry, but this is exactly why I hate RTEs. ;) If you search the BlogCFC forums, you will find other people working with RTEs. I know some folks have got it working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658070">35</a> by Stephen
		posted on 4/20/2009 at 9:48 PM
		</div>
		<div class="comment_text"><p>I hear ya, Ray... I'm like you, back in my day we coded our own html in snowstorms uphill both ways...</p></div>
	</div>
</div>
		