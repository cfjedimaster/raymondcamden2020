
<div class="comment" id="c_1713671629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671629">1</a> by Terrence Ryan
		posted on 9/12/2007 at 12:02 AM
		</div>
		<div class="comment_text"><p>I really like that Ray. It's a good new thing to add to my monitoring scripts.</p><p>However, if I'm not using the AdminApi, I prefer to get the info from the logging config file.</p><p>&lt;code&gt;<br>&lt;cffile action="read" file="#server.ColdFusion.rootdir#/lib/neo-logging.xml" variable="rawfilecontents" /&gt;</p><p>&lt;cfwddx action="wddx2cfml" input="#rawfilecontents#" output="loginfo" /&gt;</p><p>&lt;cfset filename = loginfo.logDirectory &amp; "/server.log" /&gt;</p><p>&lt;/code&gt;</p><p>It'd s little more verbose, but it gets a more accurate answer, assuming you're not locked down by Sandbox Security.</p></div>
	</div>
</div>
		