
<div class="comment" id="c_5162745428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5162745428">1</a> by James
		posted on 11/23/2020 at 2:28 PM
		</div>
		<div class="comment_text"><p>Hi Raymond</p><p>I've been struggling with this for a while.</p><p>I've added:</p><p>&lt;cfset this.serialization.preservecaseforstructkey="true"&gt;<br>&lt;cfset this.serialization.serializequeryas="struct"&gt;<br>&lt;cfset this.serialization.preservecaseforquerycolumn="true"&gt;</p><p>But my JSON still returns in uppercase.</p><p>Here is my query:</p><p>&lt;cfquery name="somequery" datasource="#application.db#"&gt;<br>select zone_country_ID, country_name<br>From tblCountries<br>order by zone_country_ID<br>&lt;/cfquery&gt;</p><p>Here is my data:</p><p>&lt;cfset reslistcountryinfo["data"]="somequery"&gt;</p><p>zone_country_ID, country_name are both being returned in UPPERCASE? In the DB they are stored as displayed here.</p><p>Do you have any advice for me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_5162808466">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5162808466">2</a> (In reply to <a href="#c_5162745428">#1</a>) by Raymond Camden
		posted on 11/23/2020 at 3:19 PM
		</div>
		<div class="comment_text"><p>Well first off, I assume your last line didn't mean to use quotes around somequery, otherwise you would return the exact string.</p><p>Outside of that, I've seen CF cache application settings. If you can restart CF, try that, _and_, edit a file. Any file. Like add a new line. Restart CF and see if that helps. In a pinch, rename the name of the application.</p></div>
	</div>
</div>
		