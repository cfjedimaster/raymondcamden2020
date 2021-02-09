
<div class="comment" id="c_1713614507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614507">1</a> by bachel
		posted on 4/9/2003 at 9:56 PM
		</div>
		<div class="comment_text"><p>Trying to use this CFMX blog, and am getting this error on loading the index.cfm file. Why? Does the app use an Application.cfm file - and if so, can you include it in the .zip folder. Thanks!<br>_______________________<br>Error Occurred While Processing Request</p><p>The requested scope application has not been enabled.</p><p>Before application variables can be used, the application state management system must be enabled using the CFAPPLICATION tag.</p><p>The error occurred in D:\CFusionMX\wwwroot\blog\index.cfm: line 39</p><p>37 : <br>38 : &lt;cfif url.mode is not "search"&gt;<br>39 : 	&lt;cfset articles = application.blog.getEntries(params)&gt;<br>40 : &lt;cfelse&gt;<br>41 : 	&lt;cfset articles = <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.blog.search%3AWQ_DfbWl8UNXIBAXZo790KzMDVc&amp;cuid=3321886" rel="nofollow noopener" title="application.blog.search">application.blog.search</a>(trim(htmlEditFormat(<a href="http://disq.us/url?url=http%3A%2F%2Fform.search%3AupoUsNboEzCfyU_RMlQMDwvsCTc&amp;cuid=3321886" rel="nofollow noopener" title="form.search">form.search</a>)))&gt;</p><p>--------------------------------------------------------------------------------</p><p>Please try the following: <br>Check the CFML Reference Manual to verify that you are using the correct syntax. <br>Search the Knowledge Base to find a solution to your problem.</p><p>Browser   Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.0; Q312461) <br>Remote Address   10.15.12.223 <br>Referrer    <br>Date/Time   09-Apr-03 02:57 PM</p><p>Stack Trace (click to expand)  <br>_______________________________</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614506">2</a> by Raymond Camden
		posted on 4/14/2003 at 4:14 PM
		</div>
		<div class="comment_text"><p>I didn''t include the Application.cfm file with the zip. Just add one and use the cfapplication tag. Then place an instance of blog in <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.blog%3AyPfk_08JbGyDtIai-mjD02kxbvg&amp;cuid=3321886" rel="nofollow noopener" title="application.blog">application.blog</a>.</p></div>
	</div>
</div>
		