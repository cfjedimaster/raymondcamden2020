
<div class="comment" id="c_1713651017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651017">1</a> by Teddy Payne
		posted on 3/22/2006 at 8:08 PM
		</div>
		<div class="comment_text"><p>The append=true feature seems to me the same thing as if the dspTemplate called two different views from the view state.  I could see a use for it if I wanted only one view called "body" and then create the body based upon several views.  So similar to your header and footer idea, you could have an include with name of body for dspHeader.cfm and then append to body for dspFooter.cfm.</p><p>Is this idea more stylistic or does it make sense to put in the dspTemplate.cfm distinct areas for header and footer views so it is seperated more cleany or noticeably?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651026">2</a> by Raymond Camden
		posted on 3/22/2006 at 8:26 PM
		</div>
		<div class="comment_text"><p>I wouldn't say append=true is the same since it joins the two strings together. What we've done in this entry is used, in a particvular place, the previous view.</p><p>Oh I kinda get ya. Yeah, so if you had 3 views and used append, it would kind of work like cfinclude, code, cfinclude.</p><p>When you say "this idea",do you mean mine?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651032">3</a> by Tim Forcelle
		posted on 3/22/2006 at 8:32 PM
		</div>
		<div class="comment_text"><p>Having a problem:<br> Could not find the included template /ModelGlue/ModelGlue.cfm.<br> Note: If you wish to use an absolute template path (e.g. TEMPLATE="/mypath/index.cfm") with CFINCLUDE then you must create a mapping for the path using the ColdFusion      Administrator. Using relative paths (e.g. TEMPLATE="index.cfm" or TEMPLATE="../index.cfm") does not require the creation of any special mappings. It is therefore recommended that  you use relative paths with CFINCLUDE whenever possible.</p><p>Is there a step I am missing?  Is there something I need to setup in the CF admin section? If so, what is that setting?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651025">4</a> by Raymond Camden
		posted on 3/22/2006 at 8:41 PM
		</div>
		<div class="comment_text"><p>Tim, does your CF server have a / mapping? If so, remove it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651024">5</a> by Tim Forcelle
		posted on 3/22/2006 at 8:44 PM
		</div>
		<div class="comment_text"><p>The mappings I have are:<br>Logical Path   	 Directory Path<br> /  	           C:\Inetpub\Sandbox <br> /CFIDE  	   C:\Inetpub\wwwroot\CFIDE <br> /gateway  	   C:\CFusionMX7\gateway\cfc <br> /PhotoGallery     C:\Inetpub\PhotoGallery</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651028">6</a> by Raymond Camden
		posted on 3/22/2006 at 9:04 PM
		</div>
		<div class="comment_text"><p>Remove the / mapping. You also don't need a PhotoGallery mapping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651037">7</a> by Tim Forcelle
		posted on 3/22/2006 at 9:22 PM
		</div>
		<div class="comment_text"><p>I removed the two mappings: / and /PhotoGallery.  Now when I am browsing I get the following:<br> Could not find the ColdFusion Component controller.Controller.</p><p>I have the application residing at: C:\Inetpub\PhotoGallery and the ModelGlue Framework files are located in the PhotoGallery directory.<br>Any ideas why I am getting this error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651031">8</a> by Raymond Camden
		posted on 3/22/2006 at 10:36 PM
		</div>
		<div class="comment_text"><p>Is c:\inetpub\photogallery the same as / when you view it in your browser? Ie, you should see no subfolder, just</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdev.photogallery.com%3A096Qb1Ec_TL4qCLNso2de7CMigI&amp;cuid=3321886" rel="nofollow noopener" title="dev.photogallery.com">dev.photogallery.com</a></p><p>or some other host.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651033">9</a> by Dave Carabetta
		posted on 3/22/2006 at 10:38 PM
		</div>
		<div class="comment_text"><p>"I call this the Paris Hilton entry. It's shallow and stupid, but somehow consider important by the majority of people."</p><p>An absolute gem!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651035">10</a> by Tim Forcelle
		posted on 4/1/2006 at 3:02 AM
		</div>
		<div class="comment_text"><p>Still no luck.  I removed IIS and started over.  Here is my current configuration:</p><p>Server: <br>	Apache 2.0.55<br>	In the httpd.conf file I have the following entry:</p><p>		Listen *:81<br>		&lt;virtualHost *:81&gt;<br>		DocumentRoot "C:/Inetpub/wwwroot"<br>		&lt;/virtualHost&gt;</p><p>File System:<br>	C:\Inetpub\wwwroot\ModelGlue<br>	C:\Inetpub\wwwroot\PhotoGallery</p><p>URL:<br>	http://localhost:81/PhotoGallery/</p><p>CF Server:</p><p>	I have no mappings other than the standard defaults set during initial installation:<br>	Logical Path:		Directory Path:<br>	/CFIDE  		C:\Program Files\Apache Group\Apache2\htdocs\CFIDE<br>	/gateway  		C:\CFusionMX7\gateway\cfc</p><p>Everything seems to be working fine until in Part 4.  I modify the Controller.cfc and add the code that modifies the init().<br>	&lt;cfset variables.userGateway = createObject("component", "model.userGateway").init(getModelGlue().getConfigSetting("dsn"))&gt;<br>	&lt;cfset variables.userDAO = createObject("component", "model.userDAO").init(getModelGlue().getConfigSetting("dsn"))&gt;</p><p>I am getting the following error:	Could not find the ColdFusion Component model.userGateway.</p><p>Any help would be great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651036">11</a> by Raymond Camden
		posted on 4/3/2006 at 9:27 PM
		</div>
		<div class="comment_text"><p>You didn't put PG in the root. The PG files should be in web root, NOT in a sub folder. So you would hit your version of it at</p><p>somehost/</p><p>not</p><p>somehost/photogallery</p><p>Obviously you CAN do that with a MG application. But for this one I'm trying to keep things simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651034">12</a> by sal
		posted on 5/5/2006 at 10:31 AM
		</div>
		<div class="comment_text"><p>Tim<br>Not sure if this is too late, probably is, but just in case it's not! Instead of changing your server settings and directory structure, just put the absolute path in your Instanciation of your cfc.</p><p>Instead of:<br> &lt;cfset variables.userGateway = createObject("component", "PhotoGallery.model.userGateway").init(getModelGlue().getConfigSetting("dsn"))&gt;</p><p>Use:<br> &lt;cfset variables.userGateway = createObject("component", "model.userGateway").init(getModelGlue().getConfigSetting("dsn"))&gt;</p><p>Like I said probably too late for this entry, but what the hey! I'll give it a shot!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651042">13</a> by sal
		posted on 5/5/2006 at 10:34 AM
		</div>
		<div class="comment_text"><p>SORRY<br>last examples are supposed to be swapped!</p><p>so it's supposed to be...</p><p>Instead of:<br>&lt;cfset variables.userGateway = createObject("component", "model.userGateway").init(getModelGlue().getConfigSetting("dsn"))&gt;</p><p>Use:<br>&lt;cfset variables.userGateway = createObject("component", "PhotoGallery.model.userGateway").init(getModelGlue().getConfigSetting("dsn"))&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651041">14</a> by George Murphy
		posted on 8/6/2007 at 3:05 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I have been building the photogallery with you and I am using ColdFusion 8.  Is there anyway to spped the application up, and how do you remove the built in model glue debugging?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651040">15</a> by Raymond Camden
		posted on 8/6/2007 at 3:39 PM
		</div>
		<div class="comment_text"><p>To disable debugging, you just need to set this in your ModelGlue.xml if you are using v1:</p><p>&lt;setting name="debug" value="false" /&gt;</p><p>If you are using MG v2 and ColdSpring.xml,</p><p>&lt;property name="debug"&gt;&lt;value&gt;false&lt;/value&gt;&lt;/property&gt;</p></div>
	</div>
</div>
		