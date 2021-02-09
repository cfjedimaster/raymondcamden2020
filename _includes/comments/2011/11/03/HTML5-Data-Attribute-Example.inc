
<div class="comment" id="c_1713736226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736226">1</a> by Phillip Senn
		posted on 11/3/2011 at 7:00 PM
		</div>
		<div class="comment_text"><p>Nice.  The way ColdFusion talks to JavaScript is through the DOM.  ColdFusion populates data- attributes and input values before the page is loaded.  JavaScript can examine them after the page is loaded.  JavaScript can then call a .cfc via AJAX to talk back to ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736231">2</a> by Matt Williams
		posted on 11/3/2011 at 9:12 PM
		</div>
		<div class="comment_text"><p>I have often doing things like &lt;td id="id_1234"&gt; and then used javascript's split(tmpid,'_') function to parse that.</p><p>This example makes that much cleaner:<br>$(this).data("price"); &lt;-- Like It!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736230">3</a> by John Varady
		posted on 11/7/2011 at 5:51 PM
		</div>
		<div class="comment_text"><p>Ray - I have been doing this technique for a while now, but I have not been prefixing the attributes with "data-". For example:</p><p>   &lt;tr  id="id#region_id#" pkid="#region_id#" rowid="#CurrentRow-1#"&gt;</p><p>Then when a user clicks a button in the row, I use this script:</p><p>   var $tr = $(btn).closest("tr");<br>   var pkid = $tr.attr("pkid");<br>   var rowid = $tr.attr("rowid");<br>   var ROW = qryRows.DATA[rowid];</p><p>Where "qryRows" is a JSON serialized query. Is there any downside to this method over the "data-" prefix? I haven't seen any yet, but your comment " you have HTML that is still valid" caused me to blink.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736229">4</a> by Raymond Camden
		posted on 11/7/2011 at 6:54 PM
		</div>
		<div class="comment_text"><p>It may work, but is not considered valid HTML since those attributes are not in the HTML spec.</p><p>Now - I've been known to say practicality should trump spec - but in this case we have an easy way to be in spec - hence my recommendation to use data-* instead.</p></div>
	</div>
</div>
		