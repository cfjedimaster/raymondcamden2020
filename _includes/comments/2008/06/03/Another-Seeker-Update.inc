
<div class="comment" id="c_1713681366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681366">1</a> by kc
		posted on 6/3/2008 at 11:38 PM
		</div>
		<div class="comment_text"><p>Thanks for the update. I started using this in one of my projects recently and found the need to search multiple fields, but in a different way. For example:<br>search field1 for "jedi" and search field2 for "1" and search field3 for a date range.</p><p>Unfortunately I couldn't find a way to do it so I just used the parser to parse my hand-made query. Here is an example:</p><p>&lt;cfif attributes.startdate neq "" and attributes.EndDate neq ""&gt;<br>	&lt;cfset NewStartDate = DateFormat(Attributes.StartDate,'yyyy-mm-dd')&gt;<br>	&lt;cfset NewEndDate = DateFormat(Attributes.EndDate,'yyyy-mm-dd')&gt;<br>	&lt;cfset QueryEdit = " AND field2:[#NewStartDate# TO #NewEndDate#]"&gt;<br>&lt;/cfif&gt;<br>&lt;cfif attributes.field3 neq ""&gt;	<br>	&lt;cfset QueryEdit = QueryEdit &amp; " AND field3:#attributes.field3#"&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfset query = parser.parse(attributes.term &amp; QueryEdit)&gt;</p><p>By the way, there is a java tool called Luke which is helpful for managing your index.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681387">2</a> by Raymond Camden
		posted on 6/4/2008 at 12:18 AM
		</div>
		<div class="comment_text"><p>Yep, Luke helped me quite a bit.</p></div>
	</div>
</div>
		