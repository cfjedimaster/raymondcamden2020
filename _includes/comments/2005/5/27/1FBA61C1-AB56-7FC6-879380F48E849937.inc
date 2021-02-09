
<div class="comment" id="c_1713618655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618655">1</a> by Rey Bango
		posted on 5/28/2005 at 12:58 AM
		</div>
		<div class="comment_text"><p>My pleasure Ray. Thank for your awesome support and great software.</p><p>Rey////</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618652">2</a> by jeff gladnick
		posted on 8/31/2005 at 5:03 PM
		</div>
		<div class="comment_text"><p>I am getting this same error, but under cfmx 7 with SQL server</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618653">3</a> by jeff
		posted on 8/31/2005 at 5:05 PM
		</div>
		<div class="comment_text"><p>And the error</p><p> Error Executing Database Query.<br>[Macromedia][SequeLink JDBC Driver][ODBC Socket][Microsoft][ODBC SQL Server Driver]Optional feature not implemented</p><p>The error occurred in C:\CFusionMX7\wwwroot\blogcfc\org\camden\blog\blog.cfc: line 933<br>Called from C:\CFusionMX7\wwwroot\blogcfc\client\includes\pods\recent.cfm: line 18<br>Called from C:\CFusionMX7\wwwroot\blogcfc\client\tags\layout.cfm: line 123<br>Called from C:\CFusionMX7\wwwroot\blogcfc\client\index.cfm: line 189<br>Called from C:\CFusionMX7\wwwroot\blogcfc\client\index.cfm: line 86<br>Called from C:\CFusionMX7\wwwroot\blogcfc\client\index.cfm: line 1<br>Called from C:\CFusionMX7\wwwroot\blogcfc\org\camden\blog\blog.cfc: line 933<br>Called from C:\CFusionMX7\wwwroot\blogcfc\client\includes\pods\recent.cfm: line 18<br>Called from C:\CFusionMX7\wwwroot\blogcfc\client\tags\layout.cfm: line 123<br>Called from C:\CFusionMX7\wwwroot\blogcfc\client\index.cfm: line 189<br>Called from C:\CFusionMX7\wwwroot\blogcfc\client\index.cfm: line 86<br>Called from C:\CFusionMX7\wwwroot\blogcfc\client\index.cfm: line 1</p><p>931 : 			<br>932 : 			order by 	tblblogentries.#arguments.params.orderBy# #arguments.params.orderByDir#<br>933 : 			&lt;cfif structKeyExists(arguments.params,"maxEntries") and instance.blogDBType is "MYSQL"&gt;limit #arguments.params.maxEntries#&lt;/cfif&gt;<br>934 : 		&lt;/cfquery&gt;<br>935 :</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618656">4</a> by Raymond Camden
		posted on 8/31/2005 at 5:08 PM
		</div>
		<div class="comment_text"><p>It looks like you are using the ODBC DSN and not the native SQL Server drive. Why?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618659">5</a> by Akbar
		posted on 4/6/2008 at 8:28 PM
		</div>
		<div class="comment_text"><p>I am getting the same error and am using ODBC connection for MSSQL Server 2000</p><p>‘[Macromedia][SequeLink JDBC Driver][ODBC Socket][Microsoft][ODBC SQL Server Driver]Optional feature not implemented'</p><p>I am using the blogCFC latest version (Last Updated: January 14, 2008 (BlogCFC 5.9.002) as per in the readme.txt file in the install folder). I am using ODBC because for a long time I’m having the issue of creating Datasource as MS SQL Server as drive.</p><p>‘Connection verification failed for data source: CFBlog<br>java.sql.SQLException: [Macromedia][SQLServer JDBC Driver] Error establishing socket to host and port: AKBAR-DE746B0A1:1433. Reason: Connection refused: connect The root cause was that: java.sql.SQLException: [Macromedia][SQLServer JDBC Driver]Error establishing socket to host and port: AKBAR-DE746B0A1:1433. Reason: Connection refused: connect’</p><p>I tried lot of Blog entries and answers to fix this problem but I’m not able to fix ?<br>Please give me some suggestion to fix ‘Optional feature not implemented’ issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618658">6</a> by Raymond Camden
		posted on 4/6/2008 at 8:30 PM
		</div>
		<div class="comment_text"><p>Well from the error, it says connection refused. Go to your CF Admin and if you verify the dsn, you will most likely get the same issue. It is a problem connecting to your db from CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618657">7</a> by Akbar
		posted on 4/6/2008 at 8:52 PM
		</div>
		<div class="comment_text"><p>But i'm able to connect my db from CF using ODBC it's working.<br>I'm able to create categories in my BlogCFC using Admin login it's working great but at the content side i'm getting this issue even i'm getting the calender and Latest from MXNA Feed above this error.</p><p> Error Executing Database Query.<br>[Macromedia][SequeLink JDBC Driver][ODBC Socket][Microsoft][ODBC SQL Server Driver]Optional feature not implemented</p><p>The error occurred in E:\Projects\AkbarsCFBlog\org\camden\blog\blog.cfc: line 1341<br>Called from E:\Projects\AkbarsCFBlog\includes\pods\recent.cfm: line 22<br>Called from E:\Projects\AkbarsCFBlog\tags\getpods.cfm: line 32<br>Called from E:\Projects\AkbarsCFBlog\tags\layout.cfm: line 100<br>Called from E:\Projects\AkbarsCFBlog\index.cfm: line 47<br>Called from E:\Projects\AkbarsCFBlog\index.cfm: line 31<br>Called from E:\Projects\AkbarsCFBlog\index.cfm: line 1<br>Called from E:\Projects\AkbarsCFBlog\org\camden\blog\blog.cfc: line 1341<br>Called from E:\Projects\AkbarsCFBlog\includes\pods\recent.cfm: line 22<br>Called from E:\Projects\AkbarsCFBlog\tags\getpods.cfm: line 32<br>Called from E:\Projects\AkbarsCFBlog\tags\layout.cfm: line 100<br>Called from E:\Projects\AkbarsCFBlog\index.cfm: line 47<br>Called from E:\Projects\AkbarsCFBlog\index.cfm: line 31<br>Called from E:\Projects\AkbarsCFBlog\index.cfm: line 1</p><p>1339 : 		&lt;cfif instance.blogDBType is "ORACLE" and structKeyExists(arguments.params,"maxEntries")&gt;<br>1340 : 			)<br>1341 : 			WHERE rownum &lt;= &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#arguments.params.maxEntries#"&gt;&lt;!--- #arguments.params.maxEntries# ---&gt;<br>1342 : 		&lt;/cfif&gt;<br>1343 : 		&lt;/cfquery&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618660">8</a> by Raymond Camden
		posted on 4/7/2008 at 2:23 AM
		</div>
		<div class="comment_text"><p>I see you are using the ODBC Socket. Don't. Use the SQL Server driver.</p></div>
	</div>
</div>
		