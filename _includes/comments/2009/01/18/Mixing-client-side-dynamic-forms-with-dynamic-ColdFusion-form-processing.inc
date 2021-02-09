
<div class="comment" id="c_1713711570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711570">1</a> by Jeremy Prevost
		posted on 1/18/2009 at 11:41 PM
		</div>
		<div class="comment_text"><p>"But what if you aren't a programmer and have more than five friends?"</p><p>Careful Ray, I'm still drinking my coffee and almost had to clean up a mess :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711571">2</a> by Will Belden
		posted on 1/18/2009 at 11:45 PM
		</div>
		<div class="comment_text"><p>Also remember that, like checkboxes, multiple fields of the same name will do a comma delimited list on the server side.</p><p>&lt;input name="email" value="1@1.com" /&gt;<br>&lt;input name="email" value="2@2.com" /&gt;</p><p>Result:<br><a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a> = "1@1.com,2@2.com" /&gt;</p><p>- WB</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711572">3</a> by Raymond Camden
		posted on 1/18/2009 at 11:51 PM
		</div>
		<div class="comment_text"><p>@WillB: True, but I didn't want to have to worry about parsing lists and handling empty results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711574">4</a> by Raymond Camden
		posted on 1/18/2009 at 11:53 PM
		</div>
		<div class="comment_text"><p>Actually that would be impossible to use. If you have 3 fields named the same and put stuff in 1 and 3, you get</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a>=a,c</p><p>No empty item. So you would not be able to correctly 'sync' up randomly empty items from both a name list and an email list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711576">5</a> by duncan
		posted on 1/18/2009 at 11:55 PM
		</div>
		<div class="comment_text"><p>"But what if you aren't a programmer and have more than five friends?"</p><p>Brilliant!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711578">6</a> by Will Belden
		posted on 1/19/2009 at 12:11 AM
		</div>
		<div class="comment_text"><p>@Ray Good point.  I was thinking about our own send-to-friend forms.  We only ask for the email, not the name, so yeah -- that would be an issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711577">7</a> by Henry Ho
		posted on 1/19/2009 at 1:05 AM
		</div>
		<div class="comment_text"><p>Tip: set the name to xx.y1, and xx.y2 to get the struct FORM.xx :)</p><p>So in your example, you can set the name to be:<br><a href="http://disq.us/url?url=http%3A%2F%2Fentries.1.name%3ACABANdHResmuP1l7u91Ty2uP3js&amp;cuid=3321886" rel="nofollow noopener" title="entries.1.name">entries.1.name</a>, and<br><a href="http://disq.us/url?url=http%3A%2F%2Fentries.1.email%3AvqTkHk-5Ra2fk1FHovgijVR3gnc&amp;cuid=3321886" rel="nofollow noopener" title="entries.1.email">entries.1.email</a></p><p>Then do a cfloop on FORM.entries (of type struct). :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711580">8</a> by Chad
		posted on 1/19/2009 at 2:25 AM
		</div>
		<div class="comment_text"><p>@Henry</p><p>I do something similar using CSS and JS to make new form entries.  Then i use the dreaded evaluate function to get the values on the action page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711581">9</a> by todd sharp
		posted on 1/19/2009 at 9:57 AM
		</div>
		<div class="comment_text"><p>I use CSS classes that don't necessarily map to a CSS style all the time with jQuery as markers.  I don't see anything wrong with it really, since your ID must be unique and it is an easy way to group related items.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711579">10</a> by todd sharp
		posted on 1/19/2009 at 10:02 AM
		</div>
		<div class="comment_text"><p>I suppose you could do something like:</p><p>$("input[name^='name']")</p><p>To find all text inputs that begin with 'name'.  See docs for more info:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FSelectors%2FattributeStartsWith%23attributevalue%3AOnbdhXCU2gOoX9TjUrlaxEt2OYA&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Selectors/attributeStartsWith#attributevalue">http://docs.jquery.com/Sele...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711573">11</a> by Henry Ho
		posted on 1/19/2009 at 4:24 PM
		</div>
		<div class="comment_text"><p>@Henry (Yes, I replied to myself)</p><p>I just found out there's a catch, bind expression will fail if name attribute contains '.'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711575">12</a> by Henry Ho
		posted on 1/19/2009 at 6:33 PM
		</div>
		<div class="comment_text"><p>@Henry (yes, I reply to myself again!)</p><p>I thought CF would do that automatically... It doesn't.</p><p>Here's the script that turns it into struct.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F803-Passing-ColdFusion-Structs-Through-Form-Submissions.htm%3ACcfxB07Kq7OsWyrEC0IJj6_uR_U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/803-Passing-ColdFusion-Structs-Through-Form-Submissions.htm">http://www.bennadel.com/blo...</a></p><p>sorry for the incorrect tip~ :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711582">13</a> by todd sharp
		posted on 1/19/2009 at 6:55 PM
		</div>
		<div class="comment_text"><p>Also note that Brian Kotek has a project that handles implicit structure (as well as array) creation via this technique:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fformutils.riaforge.org%2F%3AgPkG8HfM98tk3XsVSQnYnbeT_u8&amp;cuid=3321886" rel="nofollow noopener" title="http://formutils.riaforge.org/">http://formutils.riaforge.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711583">14</a> by Matt Williams
		posted on 1/19/2009 at 9:38 PM
		</div>
		<div class="comment_text"><p>@Chad,</p><p>If you treat your form like a struct (as Henry mentioned) you don't need to use evaluate. I use a hidden field to know how many new fields have been created; javascript updates it. Say your form has this:<br>&lt;input type="hidden" name="newFieldCount" value="2"&gt;<br>&lt;input type="text" name="myNewField_1" value="foo"&gt; &lt;!-- created by javascript, so "1" appended dynamically --&gt;</p><p>Then, server side you have this:<br>&lt;cfloop from="1" to="#form.newFieldCount#" index="i"&gt;<br>  &lt;cfset myNewField = form["myNewField_#newFieldCount#"]&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711584">15</a> by David McGuigan
		posted on 1/19/2009 at 10:36 PM
		</div>
		<div class="comment_text"><p>So funny. Remove friend button! In case 10 minutes elapse and James flirts with Kim again while Melissa is in the restroom.</p><p>I'm guessing there's an equivalent in JQuery, but in Ext I would've foregone the arbitrary CSS classing of the input elements and once I had the new table row used its sub-selection method (<a href="http://disq.us/url?url=http%3A%2F%2FExt.Element.select%3AIGFuuFPxQXIoyfPB6_YF1dWIm2k&amp;cuid=3321886" rel="nofollow noopener" title="Ext.Element.select">Ext.Element.select</a>) to return its input elements. Then you just change them and set. Less markup goes to the browser, and I'm assuming that querying an element for its children of a certain type is at least trivially faster than querying all of its children for matching items of a desired class.</p><p>Great post.</p></div>
	</div>
</div>
		