
<div class="comment" id="c_1713723801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723801">1</a> by Mike
		posted on 4/27/2010 at 9:44 PM
		</div>
		<div class="comment_text"><p>Is this is the autoComplete plugin for jQuery?  I use the 'extraParams' argument in mine:</p><p>			$("#mfg").autocomplete(<br>				"autodata.cfm",<br>				{<br>					extraParams: {part:"no"},<br>					minChars:3,<br>					delay:200,<br>					autoFill:false,<br>					matchSubset:false,<br>					matchContains:1,<br>					selectOnly:1<br>				}<br>			);</p><p>			$("#part_number").autocomplete(<br>				"autodata.cfm",<br>				{<br>					extraParams: {mfg: function() { return $("#mfg").val();},<br>					part:"yes"</p><p>					},<br>					minChars:3,<br>					delay:200,<br>					autoFill:false,<br>					matchSubset:false,<br>					matchContains:1,<br>					selectOnly:1<br>				}<br>			);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723803">2</a> by Mike
		posted on 4/27/2010 at 9:47 PM
		</div>
		<div class="comment_text"><p>Nevermind - I'm using a different plugin:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FPlugins%2FAutocomplete%3AIZHWb0z0W8AmW9E1sIYXy85gqYA&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Plugins/Autocomplete">http://docs.jquery.com/Plug...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723805">3</a> by Sean Corfield
		posted on 5/8/2010 at 9:08 AM
		</div>
		<div class="comment_text"><p>@Mike, yes, I was using Dan Switzer's autocomplete plugin and found that the new jQuery UI plugin doesn't have anywhere near the number of options and cannot be customized as easily. I think the jQuery UI is a big step back...</p><p>The one thing the jQuery UI plugin has that Dan's doesn't is the ability to popup suggestions without data input. I managed to add that to Dan's plugin today so I'll be talking to him about it next week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723807">4</a> by Henry
		posted on 11/23/2011 at 1:43 PM
		</div>
		<div class="comment_text"><p>Hi, I'm trying to do something similar. So far without success. Any help would be appreciated.</p><p>I have a basic autocomplete returning and setting an id. In turn I want this id to drive another query/method of which I want to output the results on screen.</p><p>So it goes like this... Input and select a username from autocomplete drop list. The returned userid drives another query. The results of this query are then looped through and output the display of radio button options available for the selected user. Is this possible?</p><p>This is the autocomplete code I'm using</p><p>$(function() {<br>	$("#userName").autocomplete({<br>		source: "/jqueryui/com/autocomplete.cfc?method=getUser&amp;returnformat=json",<br>		//setup hidden fields<br>		select:function(event,ui) {<br>			$("#userid").val(<a href="http://disq.us/url?url=http%3A%2F%2Fui.item.id%3AZ0kPG2AU_JM4UQEK8igx4fKsqsU&amp;cuid=3321886" rel="nofollow noopener" title="ui.item.id">ui.item.id</a>)<br>		}<br>	});<br>});</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723806">5</a> by Raymond Camden
		posted on 11/23/2011 at 5:15 PM
		</div>
		<div class="comment_text"><p>Yep, anything is possible. :)</p><p>I'd make use of the select feature, as you did there. Right now you just set the user id. You would _also_ fire off the XHR request to get the related data.</p></div>
	</div>
</div>
		