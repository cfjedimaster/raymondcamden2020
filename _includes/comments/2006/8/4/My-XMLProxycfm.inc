
<div class="comment" id="c_1713655887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655887">1</a> by BL
		posted on 8/5/2006 at 11:39 PM
		</div>
		<div class="comment_text"><p>How about an example of a main SpryXMLproxy.cfm that can take a cfc (or cfc alias) and a method as possible parameters?</p><p>This would be helpful if you have a bunch of components in your app and you want to create one main SpryProxy that can call any cfc's method and return XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655886">2</a> by Raymond Camden
		posted on 8/5/2006 at 11:53 PM
		</div>
		<div class="comment_text"><p>I did something like that for my earlier Spry tests, so I'd be glad to share. Do me a favor and remind me on Monday. Today is my off day. I plan on watching V for Vendetta and playing Prey.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655889">3</a> by TJ
		posted on 8/6/2006 at 6:28 PM
		</div>
		<div class="comment_text"><p>Ray why do you recommend limiting it to a single or set or URLs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655890">4</a> by Raymond Camden
		posted on 8/7/2006 at 1:08 AM
		</div>
		<div class="comment_text"><p>Right now the code accepts a request from ANYWHERE for any URL. This could be used as a DOS type attack.</p><p>In fact, I just realized one big whole - you could actually make the script call itself. Now luckily in MX7 this won't cause the box to die, it would just make the script time out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655891">5</a> by djuggler
		posted on 8/7/2006 at 1:42 PM
		</div>
		<div class="comment_text"><p>As opposed to a smaller whole :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655892">6</a> by BL
		posted on 8/8/2006 at 12:11 AM
		</div>
		<div class="comment_text"><p>Okay Ray, I'm ready for the example about my first post.  Are you?</p><p>By the way, what is V for Vendetta about?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655895">7</a> by Raymond Camden
		posted on 8/8/2006 at 12:40 AM
		</div>
		<div class="comment_text"><p>I'll try to get to it later today.</p><p>V for Vendetta is a film about a futuristic Englad controlled by a dictaroship and one man fighting against it. That's not a great summary, but it's a good movie.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655896">8</a> by Brad
		posted on 8/18/2006 at 11:27 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I am running into problem where the xml file I am serving from Coldfusion is valid and works, but then when try to view in the datagrid it doesn't show up. Are there characters in spry that can't be loaded. Do they need to javascript safe?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655894">9</a> by Raymond Camden
		posted on 8/18/2006 at 11:38 PM
		</div>
		<div class="comment_text"><p>No, but they need to be XML safe. Ensure you are using xmlFormat for example, although xmlFormat has a bug where it ignores extended MS chars like the em dash and stuff.</p><p>Run your XML through a validator.</p><p>Also check that you are using the right xpath. Spry ships with a tool to let you test xml.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655893">10</a> by Duane Hardy
		posted on 2/18/2007 at 12:59 AM
		</div>
		<div class="comment_text"><p>I am just starting with spry and I am confused how to make the xmlproxy work with components.  I am working on url datafeeds from affiliate companies and certain variables need to be kept protected, or are variable.</p><p>I am struggling with getting the output from a variable with a return string and passing it to xmlproxy.  I am struggling with putting the code together and getting the valid xml back to the spry dataset call.  Here is a very simple example of a component:</p><p>&lt;code&gt;<br>&lt;cfset this.dfftoken = "99999999999999999"&gt;<br>&lt;cfset this.affid = "9999"&gt;<br>&lt;!--- function to perform a keyword search ---&gt;<br>&lt;cffunction name="DFFKeywordSearch" access="remote" returntype="string" output="no"&gt;<br>&lt;cfset var DFFURL = "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.datafeedfile.com%2Fxml%2Fxml_title_search.php%3Fdfftoken%3D%3A2Jp-oZaPVs7bcooUAnNxEQo2U_s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.datafeedfile.com/xml/xml_title_search.php?dfftoken=">http://www.datafeedfile.com...</a>"&amp;#this.dfftoken#&amp;"affid="&amp;#this.affid#&amp;"&amp;keyword="&amp;#arguments.keyword#&amp;""&gt;<br>&lt;cfhttp url="#DFFURL#" method = "get" timeout="60"&gt;<br>&lt;cfreturn #cfhttp.fileContent#&gt;<br>&lt;/cffunction&gt;<br>&lt;/code&gt;</p><p>How do I put it all together?  I can't get it to work somehow?</p><p>Thanks for the help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655898">11</a> by Raymond Camden
		posted on 2/18/2007 at 8:47 AM
		</div>
		<div class="comment_text"><p>I may not get your question. To work with a component you can simply use createObject(). Or if you have an instance of the CFC in the application scope, or some other scope, you can use that. Can you maybe redefine your question?</p></div>
	</div>
</div>
		