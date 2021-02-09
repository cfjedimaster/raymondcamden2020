
<div class="comment" id="c_1713718451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718451">1</a> by Gary Gilbert
		posted on 9/20/2009 at 9:57 AM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>the struct dump returns the right results but your label never changes, is that a feature, or not the point of the excersise?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718447">2</a> by Raymond Camden
		posted on 9/20/2009 at 5:37 PM
		</div>
		<div class="comment_text"><p>Not a point. ;) If you look at the complete code, you can see it is always hard coded on initial load.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718455">3</a> by Dan G. Switzer, II
		posted on 9/21/2009 at 2:55 PM
		</div>
		<div class="comment_text"><p>While I know this is just an example exercise, there are many different ways to accomplish the same thing. A while back I wrote a jQuery plug-in called Linkselect (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.givainc.com%2Flabs%2Flinkselect_jquery_plugin.htm%29%3AzEM8PPOfmNoTcaOrVq6IKM3fZV0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.givainc.com/labs/linkselect_jquery_plugin.htm)">http://www.givainc.com/labs...</a> that converts a select element into a text link.</p><p>This has the benefit of being completely unobtrusive, but adds flexibility that a normally select box doesn't offer (such as the ability for the text to wrap lines.)</p><p>Also, on a note specific to your example, you might want to change the line:</p><p>$(this).parent().html(s)</p><p>To:</p><p>$(this).parent().html(s).find("select").focus();</p><p>So that the select element gets focus--which would improve keyboard usage quite a bit (since the select element would retain the focus that the anchor used to have.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718449">4</a> by Raymond Camden
		posted on 9/21/2009 at 3:40 PM
		</div>
		<div class="comment_text"><p>Ah, focus - I always forget that. Good one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718450">5</a> by Mike
		posted on 9/21/2009 at 7:27 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I realize there are 100 ways to do anything, and as a jQuery newb I am still trying to figure out if the way I accomplished something was a hack job or an elegant solution (it's not always easy to tell the two apart).</p><p>I had a similar situation for an "in-line edit", but went about it a little differently.  In my form, instead of piecing together strings in JS to create the SELECT, I created the entire SELECT box (options and all) within the form in HTML, but gave it a class of 'hidden' (defined in CSS), thereby hiding it.  When 'edit' was clicked, I simply removed the hidden class from the SELECT, and added the 'hidden' class to the 'edit' link.</p><p>Any comments, good and bad, about that solution?</p><p>Also, I'd love to see more real-world jQuery examples when dealing with dynamic/database driven data.  Static examples are great, but nothing I build is static.  I often question myself on how to deal with situations where both the jQuery code and the resultant HTML depend on dynamic data sets.  I often result in looping over the data set twice, once for JS and the other for HTML, but I'm sure there are more elegant ways to pull ID's and values from the HTML in jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718448">6</a> by Raymond Camden
		posted on 9/21/2009 at 10:30 PM
		</div>
		<div class="comment_text"><p>@Mike: Your way isn't bad at all. And don't forget, jQuery has a "clone" command. You could create ONE select, and then clone it each time you need a new one.</p><p>Point taken on the dynamic part here - but I assume most readers would know how to dynamically output simple form values. I also like to focus on the item at hand and not distract people from the main point of the blog entry. Know what I mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718452">7</a> by keiron roberts
		posted on 3/16/2010 at 9:33 PM
		</div>
		<div class="comment_text"><p>Is there a way to reverse the function, so that when 'saved' the visible selects can be removed and the value attributed to the hidden fields.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718454">8</a> by Raymond Camden
		posted on 3/17/2010 at 2:08 AM
		</div>
		<div class="comment_text"><p>Interesting! You would need to write code to listen for the onchange of the selects and change em back. I'll work up a follow up to this in a new blog entry. It may be a day or two though - kinda packed - short answer is though - it IS possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718453">9</a> by keiron roberts
		posted on 3/17/2010 at 12:19 PM
		</div>
		<div class="comment_text"><p>Thanks for your response, I look forward to seeing the answer.</p><p>Your current script only accommodates select menus, but I made some changes yesterday to allow text and textarea too by looking at the class of the hidden field (that's all I need right now, but it could take any input). Plus it also gets the contents of the select menus from a php script to make each one unique and more dynamic:</p><p>$(".changeable a.edit").click(function() {</p><p>		var hiddenItem = $("input:hidden", $(this).parent())<br>		var currentVal = hiddenItem.val()<br>		var currentName = hiddenItem.attr("name");<br>		var currentType = hiddenItem.attr("class");</p><p>			if(currentType == "textarea"){<br>				var s = "&lt;textarea name=\""+currentName+"\" &gt;"+currentVal+"&lt;/textarea&gt;";<br>			}<br>			else if(currentType == "select"){</p><p>			var s = "&lt;select name=\""+currentName+"\" id=\""+currentName+"\"&gt;";<br>			s += "&lt;/select&gt;";</p><p>			$.post("select.php", {selectmenu: currentName, currentitem: currentVal},<br>			  function(data){<br>				  $(data).appendTo('#'+currentName);<br>			  });</p><p>			}<br>			else {<br>				var s = "&lt;input type=\"text\" name=\""+currentName+"\" value=\""+currentVal+"\" /&gt;";<br>			}</p><p>		$(this).parent().html(s);</p><p>		return false	<br>	});</p><p>&lt;input type="hidden" name="tacktype" value="Saddle" class="select" /&gt;<br>&lt;input type="hidden" class="textarea" name="features" value="text here" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718456">10</a> by Raymond Camden
		posted on 3/19/2010 at 10:14 PM
		</div>
		<div class="comment_text"><p>Posted:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F3%2F19%2FUsing-jQuery-to-convert-text-into-form-fields-2%3Aw2IFQJdIrCDUDXUo_RSOHJumoZQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/3/19/Using-jQuery-to-convert-text-into-form-fields-2">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718457">11</a> by sadmin
		posted on 3/31/2010 at 3:37 PM
		</div>
		<div class="comment_text"><p>Good day! I tried to work, but when an item linkselect submits the form does not contain the value of a select. In what may be the problem?<br>Who are facing? Can I use linkselect to submit a form?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718458">12</a> by sadmin
		posted on 3/31/2010 at 3:40 PM
		</div>
		<div class="comment_text"><p>linkselect of <a href="http://disq.us/url?url=http%3A%2F%2Fwww.givainc.com%2Flabs%2Flinkselect_example.htm%3ArXVQdOg-IRWpCHhktp3JqlhPA8o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.givainc.com/labs/linkselect_example.htm">http://www.givainc.com/labs...</a> (my blog <a href="http://disq.us/url?url=http%3A%2F%2Fjdrupal.ru%2Fnode%2F15%29%3AIRqHO-GRUHhHjiwOxD9cLc978co&amp;cuid=3321886" rel="nofollow noopener" title="http://jdrupal.ru/node/15)">http://jdrupal.ru/node/15)</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718460">13</a> by Raymond Camden
		posted on 3/31/2010 at 5:35 PM
		</div>
		<div class="comment_text"><p>So what _does_ the form contain when you submit?</p></div>
	</div>
</div>
		