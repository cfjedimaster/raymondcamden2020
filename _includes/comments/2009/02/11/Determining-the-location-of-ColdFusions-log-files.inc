
<div class="comment" id="c_1713712829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712829">1</a> by Brandon Hansen
		posted on 2/12/2009 at 10:04 AM
		</div>
		<div class="comment_text"><p>That is pretty awesome.  So I am guessing that I could just dump out the adminapi object to find out the other methods...I am really hoping that their is some sort of datasource method.  That would be awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712828">2</a> by Brandon Hansen
		posted on 2/12/2009 at 10:13 AM
		</div>
		<div class="comment_text"><p>Although I didn't see the dsn method, I did like looking through all of the methods.  That was fun.</p><p>I did find this article just now though, not sure how old it is-<br><a href="http://disq.us/url?url=http%3A%2F%2Fsvn.riaforge.org%2Fcfadminwsapi%2Ftest.cfm%3AubyOU49VkfcEEsfjD_KvSm3ZihI&amp;cuid=3321886" rel="nofollow noopener" title="http://svn.riaforge.org/cfadminwsapi/test.cfm">http://svn.riaforge.org/cfa...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712830">3</a> by Brandon Hansen
		posted on 2/12/2009 at 10:18 AM
		</div>
		<div class="comment_text"><p>So this is where the magic happens-<br>&lt;cfset admin_object = createObject("component","cfide.adminapi.datasource")&gt;<br>&lt;cfdump var="#admin_object#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712831">4</a> by Raymond Camden
		posted on 2/12/2009 at 5:04 PM
		</div>
		<div class="comment_text"><p>I wouldn't dump the CFCs. Just visit them in your browser.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.yourserver.com%2Fcfide%2Fadminapi%2FXXXXX.cfc%3Al7IUD8zjykksm6jVRlWjUh-9bPc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.yourserver.com/cfide/adminapi/XXXXX.cfc">http://www.yourserver.com/c...</a></p><p>Where XXXX is the name of the CFC. You will get a nicely documented HTML page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712833">5</a> by JC
		posted on 2/13/2009 at 12:38 AM
		</div>
		<div class="comment_text"><p>You don't need the adminapi for datasources.</p><p>&lt;cfset sf = CreateObject("java", "coldfusion.server.ServiceFactory")&gt;<br>&lt;cfdump var="#sf.DataSourceService.getDatasources()#" expand="true"&gt;</p><p>Or if you want something a bit more readable than cfdump, add this:</p><p>&lt;cfoutput&gt;Server,Instance,DSN,Database,Host,Username,Select,Insert,Update,Delete,Proc,Create,Drop,Grant,Revoke,Alter&lt;br&gt;<br>&lt;cfloop list="#StructKeyList(foo)#" index="i"&gt;<br>#host#,#cfserv#,#foo[i].name#,#foo[i].urlmap.database#,#foo[i].urlmap.host#,#foo[i].username#,<br>&lt;cfif #foo[i].select# IS "YES"&gt;Select &lt;/cfif&gt;,<br>&lt;cfif #foo[i].insert# IS "YES"&gt;Insert &lt;/cfif&gt;,<br>&lt;cfif #foo[i].update# IS "YES"&gt;update &lt;/cfif&gt;,<br>&lt;cfif #foo[i].delete# IS "YES"&gt;delete &lt;/cfif&gt;,<br>&lt;cfif #foo[i].storedproc# IS "YES"&gt;storedproc &lt;/cfif&gt;,<br>&lt;cfif #foo[i].create# IS "YES"&gt;create &lt;/cfif&gt;,<br>&lt;cfif #foo[i].drop# IS "YES"&gt;drop &lt;/cfif&gt;,<br>&lt;cfif #foo[i].grant# IS "YES"&gt;grant &lt;/cfif&gt;,<br>&lt;cfif #foo[i].revoke# IS "YES"&gt;revoke &lt;/cfif&gt;,<br>&lt;cfif #foo[i].alter# IS "YES"&gt;alter &lt;/cfif&gt;&lt;br&gt;<br>&lt;/cfloop&gt;<br>&lt;/cfoutput&gt;</p><p>And you can get even more db info if you want it. the cfdbinfo tag has lots... here's a script I wrote a while back that basically crawls and dumps out everything the specified data source has access to.<br><a href="http://disq.us/url?url=http%3A%2F%2Fyougiveloveabad.name%2Fwp-content%2Fuploads%2Fdbinfo.zip%3Ayn8eMuQfzgooAcpi3-A7fsE5UfU&amp;cuid=3321886" rel="nofollow noopener" title="http://yougiveloveabad.name/wp-content/uploads/dbinfo.zip">http://yougiveloveabad.name...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712834">6</a> by Raymond Camden
		posted on 2/13/2009 at 12:42 AM
		</div>
		<div class="comment_text"><p>The AdminAPI CFCs probably use the same serviceFactory. But - I would not recommend you use the serviceFactory like that in production. Yes it works now, but you are not guaranteed it will work in the future, whereas the AdminAPI is the _documented_ way to use these features.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712836">7</a> by JC
		posted on 2/13/2009 at 1:09 AM
		</div>
		<div class="comment_text"><p>well, I don't think I'd recommend using any of it in production. I assumed Brandon was asking out of either curiosity or a need to dump the info out for auditors or something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712838">8</a> by Raymond Camden
		posted on 2/13/2009 at 1:12 AM
		</div>
		<div class="comment_text"><p>I think it would be fair/ok to use the Admin API in production.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712837">9</a> by Gareth
		posted on 11/13/2009 at 11:04 PM
		</div>
		<div class="comment_text"><p>I'm trying to build a custom log file viewer and found this post. I had this exact question, so thanks for answering it Ray!</p><p>It's a pity you need to enter the admin password to get the log file location, but I suppose there are security reasons.</p><p>For my own security paranoia, I don't want to put my server's password into my code. Likewise, I don't want to give it to the people using my log file viewer for them to enter via a form.</p><p>In an ideal world, CFLOG would be able to specify the log file's location. As that's not possible, I think I'll need to build my own custom logger.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712841">10</a> by Jay
		posted on 6/8/2010 at 3:08 AM
		</div>
		<div class="comment_text"><p>here is a solution that doesn't require the admin's password.  it relies on the fact that the config settings are stored in a wddx packet format in a file called neo-logging.xml:</p><p>&lt;cffile action="READ" file="#Server.ColdFusion.RootDir#\lib\neo-logging.xml" variable="wddxData"&gt;</p><p>&lt;cfwddx action="WDDX2CFML" input="#wddxData#" output="loggingConfig"&gt;</p><p>&lt;cfset logDirectory = loggingConfig.logDirectory&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712842">11</a> by onelookup
		posted on 2/2/2012 at 7:16 PM
		</div>
		<div class="comment_text"><p>I wonder how did you guess that property name was "logdirectory" ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712840">12</a> by Raymond Camden
		posted on 2/2/2012 at 7:54 PM
		</div>
		<div class="comment_text"><p>Remember that CFCs are selfdocumenting. Actually open up that debugging.cfc in your browser and you will see the method and the values are listed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712843">13</a> by Jay
		posted on 2/3/2012 at 9:50 AM
		</div>
		<div class="comment_text"><p>@Onelookup - easy, by using cfdump, i.e.</p><p>&lt;cfdump var="#loggingConfig#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712845">14</a> by OneLookup
		posted on 2/21/2012 at 3:55 PM
		</div>
		<div class="comment_text"><p>@cfjedimaster : You're right. Using getMetaData() or getComponentMetadata() provides infos about it. CFMX 9 Admin API sources files are not user readable. Now I wonder why didn't I think about those relfection function before asking my question :)</p><p>@Jay : Thanks. It's strange but my neo-logging.xml file does not contains "logdirectory" property declaration. On the other side I don't want to rely on these files as they may be change and/or depend or CFMX version evolutions.</p></div>
	</div>
</div>
		