
<div class="comment" id="c_1713719457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719457">1</a> by Leigh
		posted on 11/6/2009 at 11:05 PM
		</div>
		<div class="comment_text"><p>I like the UUID approach as well. It is a lot less convoluted than the alternative (which I have used).  If you are also storing the file names in a database, you could always add an extra column to preserve the "pretty" name for display or download. Then you get the best of both worlds.</p><p>-Leigh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719456">2</a> by Bobby Charles
		posted on 11/7/2009 at 8:11 PM
		</div>
		<div class="comment_text"><p>Hey Ray! I know you are a COldfusion/Jquery Pro but just wondering if yo have any expertise in the Facebook API. My question is how you get the url parameters using coldfusion, such as <a href="http://disq.us/url?url=http%3A%2F%2Fapps.facebook.com%2Frayobi-kanobi.cfm%3Fjedilevel%3AtA141grfTTdAmfzjtfhFS6afh-k&amp;cuid=3321886" rel="nofollow noopener" title="apps.facebook.com/rayobi-kanobi.cfm?jedilevel">apps.facebook.com/rayobi-ka...</a> =1 . How do i capture the value of the  "jedilevel " parameter, &lt;cfoutput&gt;#URL.jedilevel# produces an error. Thanks Master Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719460">3</a> by Raymond Camden
		posted on 11/7/2009 at 8:19 PM
		</div>
		<div class="comment_text"><p>I have worked w/ the FB API, but I'm a bit rusty. However, any URL variable should exist - period. Maybe it really isn't what you think it is though. Have you tried doing &lt;cflog file="ray" text="#cgi.query_string#"&gt;? Obviously you don't need to use ray as a filename, but you get my point. You can also log #structkeylist(url)# instead. You may also want to log cgi.path_info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719462">4</a> by jedifan
		posted on 11/9/2009 at 3:20 AM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>What are you using for the lock name?</p><p>I would have assumed that to minimise the locking you would set the lock name to be name="#folder##filename#".  That way it prevent collision with the same file, but allows multiple renames on different files at the same time.</p><p>Is that your value for lockname?</p><p>Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719461">5</a> by Raymond Camden
		posted on 11/9/2009 at 3:36 AM
		</div>
		<div class="comment_text"><p>The lock name is something like fileService, so it's totally blocking for all file operations. I agree that making it based on foldername would be nicer. I don't think folder/file though would make sense, because 2 requests could possibly end up conflicting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719470">6</a> by Leigh
		posted on 11/9/2009 at 4:20 AM
		</div>
		<div class="comment_text"><p>I remember an interesting thread on the HOF a while back. Someone mentioned using full file paths (hashed) for the lock name. But with a double lock: one on the origin file and one on the destination. So it was more granular, but still covered both files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719472">7</a> by Raymond Camden
		posted on 11/9/2009 at 4:23 AM
		</div>
		<div class="comment_text"><p>What concerns me is thread A trying to "put" to foo.cfm and thread B trying to put to 1_foo.cfm. They would have different lock names, but potentially end up trying to use the same file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719471">8</a> by Leigh
		posted on 11/9/2009 at 4:39 AM
		</div>
		<div class="comment_text"><p>Scratch that last comment. My mind is somewhere else. I was thinking of something totally different..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719473">9</a> by jedifan
		posted on 11/9/2009 at 6:26 PM
		</div>
		<div class="comment_text"><p>Good point about name conflicts with files already using the special naming convention.</p><p>To get the granularity back into the locking, I would parse the filename to remove the special naming convention and again lock based on folder and stripped filename.</p><p>local.lockname = local.folder &amp; ReReplace(local.filename, "^[0-9]*_", "");</p><p>Which would make the lock for "foo.cfm" and "1_foo.cfm" the same.  Thereby reducing the scope of the lock to the safest minimum.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719475">10</a> by Adam Leszinski
		posted on 11/10/2009 at 12:33 PM
		</div>
		<div class="comment_text"><p>Here's a little different spin on generating a unique file name given an order number, file extension, and a directory where orderNum.jpg, orderNum_#.jpg, or any img or file for that matter which may or may not exist.</p><p>&lt;!--- Known variables ---&gt;<br>&lt;cfset ordNum = "00101"&gt; &lt;!--- example order num ---&gt;<br>&lt;cfset ext = "jpg"&gt; &lt;!--- file extension ---&gt;<br>&lt;cfset fileDir = "YOUR ABSOLUTE FILE PATH HERE"&gt;</p><p>&lt;!--- use java's "java.io.File" to get a list of file names from the directory, no need to retrieve a query object from cfdirectory for just reading file names ---&gt;<br>&lt;cfset dir = createObject("Java", "java.io.File").init(fileDir)&gt;<br>&lt;!--- get a comma delim list of file names ---&gt;<br>&lt;cfset fileList = arrayToList(dir.list())&gt;<br>&lt;cfset count = listLen(fileList) - listLen(rereplacenocase("|"&amp;replace(fileList,",","|,|","all")&amp;"|","\|"&amp;ordNum&amp;"\."&amp;ext&amp;"\||\|"&amp;ordNum&amp;"\_[0-9]+\."&amp;ext&amp;"\|","","all"))&gt;<br>&lt;!--- default file name ---&gt;<br>&lt;cfset newFileName = ordNum&amp;"."&amp;ext&gt;<br>&lt;cfif count&gt;<br> &lt;!--- if file name exists already, assign an incremented name, ie: fileName_#.ext ---&gt;<br> &lt;cfset newFileName = ordNum&amp;"_"&amp;count&amp;"."&amp;ext&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfdump var="#newFileName#"&gt;</p><p>This approach avoids looping, looping over conditions, and fileExists() in exhange for a regex and a little math on the directory list. On the flip side there's really no one liner solution for cffile: action="rename" on naming conflicts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719482">11</a> by chris hough
		posted on 6/24/2012 at 2:40 AM
		</div>
		<div class="comment_text"><p>Thank you @Adam for posting your version, I was able to take your version and fork it again to what we are using now:</p><p>	&lt;cffunction name="UnqiueFileName" access="private" returntype="string" output="false"&gt;<br>		&lt;cfargument name="fFileName" type="string" required="true"&gt;<br>		&lt;cfargument name="fFileDestination" type="string" required="true"&gt;<br>		&lt;cfset var FullDirPath=arguments.fFileDestination &amp; Instance.AppShared.AppServerInfo.AppFilePathSeparator&gt;<br>		&lt;cfset var base = "#dateformat(now(),'yyyymmdd')##timeformat(now(),'hhmmss')#"&gt; <br>		&lt;!--- if the filename is not found use the name---&gt;<br>		&lt;cfset newFileName = arguments.fFileName&gt;<br>		&lt;!--- use java's "java.io.File" to get a list of file names from the directory, no need to retrieve a query object from cfdirectory for just reading file names ---&gt;<br>		&lt;cfset dir = createObject("Java", "java.io.File").init(FullDirPath)&gt;<br>		&lt;!--- get a comma delim list of file names ---&gt;<br>		&lt;cfset fileList = arrayToList(dir.list())&gt;<br>		&lt;cfif ListLen(fileList) GT 0&gt;<br>			&lt;cfif ListContainsNoCase(fileList,arguments.fFileName,",") GT 0&gt;<br>				&lt;cfset newFileName = base &amp; "_" &amp; arguments.fFileName&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfreturn newFileName/&gt;<br>	&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_4553736708">
	<div>
		<img src="https://disqus.com/api/users/avatars/dalemarinello.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4553736708">12</a> by Dale Marinello
		posted on 7/25/2019 at 11:08 PM
		</div>
		<div class="comment_text"><p>With cffile action="upload" nameconflict="overwrite", #cffile.serverfile# stores the value of the file after the nameconflict has been processed.<br>With cffile action="rename" nameconflict="overwrite", there is no cffile variable.<br>How do you find the value of the file name after the nameconflict has been processed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4554310374">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4554310374">13</a> (In reply to <a href="#c_4553736708">#12</a>) by Raymond Camden
		posted on 7/26/2019 at 1:07 PM
		</div>
		<div class="comment_text"><p>I'm confused - if you are renaming, aren't you specifying both the original and new name?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4563360529">
	<div>
		<img src="https://disqus.com/api/users/avatars/dalemarinello.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4563360529">14</a> (In reply to <a href="#c_4554310374">#13</a>) by Dale Marinello
		posted on 8/2/2019 at 4:47 PM
		</div>
		<div class="comment_text"><p>Yes, but if there's a conflict with the name you specify,  it creates another name that you have no way of retrieving.</p><p>Upload and rename work differently.  Upload conflict stores a name conflict in a variable, rename doesn't.</p><p>I just appended a long timestamp to end of the file.</p><p>Thank you,</p><p>Dale</p></div>
	</div>
</div>
		
<div class="comment" id="c_4563405432">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4563405432">15</a> (In reply to <a href="#c_4563360529">#14</a>) by Raymond Camden
		posted on 8/2/2019 at 5:23 PM
		</div>
		<div class="comment_text"><p>Personally I'd not use nameconflict="overwrite". It sounds like the conflict is not expected. I'd want an error thrown.</p></div>
	</div>
</div>
		