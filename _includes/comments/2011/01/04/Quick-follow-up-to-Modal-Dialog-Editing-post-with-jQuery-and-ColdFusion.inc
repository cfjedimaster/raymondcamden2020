
<div class="comment" id="c_1713728659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728659">1</a> by Phillip Senn
		posted on 1/5/2011 at 11:39 PM
		</div>
		<div class="comment_text"><p>The jQuery .data method is new to me.  Thanks for pointing that one out. <br>I think data-artid, and data-price are red herrings.<br>Are they?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728660">2</a> by Phillip Senn
		posted on 1/5/2011 at 11:44 PM
		</div>
		<div class="comment_text"><p>Oh, I see.  It has to do with HTML5.<br><a href="http://disq.us/url?url=http%3A%2F%2Fejohn.org%2Fblog%2Fhtml-5-data-attributes%2F%3ApPRsx0b_C8AZDNoXXp8eOKrlm7w&amp;cuid=3321886" rel="nofollow noopener" title="http://ejohn.org/blog/html-5-data-attributes/">http://ejohn.org/blog/html-...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728661">3</a> by Raymond Camden
		posted on 1/5/2011 at 11:44 PM
		</div>
		<div class="comment_text"><p>HTML5 allows you to specify data-ANYTHING="foo" in tags. It's ignored by the rendering engine but shows up in your DOM. jQuery then provides an easy way to set/get them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728662">4</a> by Adam Presley
		posted on 1/6/2011 at 11:39 PM
		</div>
		<div class="comment_text"><p>Nice post as always Ray. The only issue I see is the dollarFormat function you borrowed from <a href="http://disq.us/url?url=http%3A%2F%2Fmredkj.com%3A-hez9DPZXeYTD6dEflO3WPOZHJI&amp;cuid=3321886" rel="nofollow noopener" title="mredkj.com">mredkj.com</a>. That function makes use of un-var'd variables, and thus will place them in the global window object. This code demonstrates the problem.</p><p>&lt;script type="text/javascript"&gt;</p><p>	var x = 15;</p><p>	function dollarFormat(nStr){<br>      nStr += '';<br>      x = nStr.split('.');<br>      x1 = x[0];<br>      x2 = x.length &gt; 1 ? '.' + x[1] : '';<br>      var rgx = /(\d+)(\d{3})/;<br>      while (rgx.test(x1)) {<br>          x1 = x1.replace(rgx, '$1' + ',' + '$2');<br>      }<br>      return "$" + x1 + x2;    <br>  }</p><p>	function improvedDollarFormat(nStr){<br>      nStr += '';<br>      var x = nStr.split('.');<br>      var x1 = x[0];<br>      var x2 = x.length &gt; 1 ? '.' + x[1] : '';<br>      var rgx = /(\d+)(\d{3})/;<br>      while (rgx.test(x1)) {<br>          x1 = x1.replace(rgx, '$1' + ',' + '$2');<br>      }<br>      return "$" + x1 + x2;    <br>  }</p><p>	alert("x = " + x);<br>	alert(dollarFormat("444.55"));<br>	alert("x = " + x);</p><p>	/* Reset test */<br>	x = 15;</p><p>	alert("x = " + x);<br>	alert(improvedDollarFormat("444.56"));<br>	alert("x = " + x);</p><p>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728663">5</a> by Raymond Camden
		posted on 1/6/2011 at 11:41 PM
		</div>
		<div class="comment_text"><p>Ah good catch there. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728670">6</a> by Raul
		posted on 3/24/2011 at 5:43 AM
		</div>
		<div class="comment_text"><p>Sorry for the noob question but...<br>How do you go about 'adding/deleting' and refreshing the table?</p><p>On your form, how do you handle dealing with dropdowns, checkboxes and radio buttons?<br>I think that's what's missing to this lovely example.</p><p>Any help/tip would be greatly appreciated.</p><p>Thanks,<br>RD</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728669">7</a> by Raymond Camden
		posted on 3/28/2011 at 3:25 PM
		</div>
		<div class="comment_text"><p>Deleting could be a simple link in each row that passes the ID of the row to delete.</p><p>For add, you would pop up the dialog but not preload any of the form values. You would want to set the ID to something like 0 or keep it blank, and ensure "saveavrt" can handle that.</p><p>As for the dropdowns and checkboxes, well, the API for them is just a bit more complex. Enough for me not to want to write the code in a comment box. ;) For a checkbox, it's a matter of getting them all and finding the one with the right value to check. jQuery makes that easy. For a select box it's simiilar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728672">8</a> by erik
		posted on 7/12/2011 at 7:22 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>How can I expand the code so once the save button is clicked update the initial page as well. DO I just need to reload a page</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728671">9</a> by Raymond Camden
		posted on 7/12/2011 at 8:53 PM
		</div>
		<div class="comment_text"><p>If you just want to reload an entire page you can use window.location.href=.... Or use window.location.reload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728675">10</a> by Misty
		posted on 7/20/2011 at 5:28 PM
		</div>
		<div class="comment_text"><p>and if we just ned to reload the DIV after the initial Add or Edit, Then what we need to do!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728673">11</a> by Raymond Camden
		posted on 7/24/2011 at 3:53 AM
		</div>
		<div class="comment_text"><p>Not quite sure I get you Misty, but reloading content in a div is easy with JS, even easier with jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728674">12</a> by Misty
		posted on 7/24/2011 at 1:52 PM
		</div>
		<div class="comment_text"><p>Its just like this,</p><p>1. Opened the dialog, <br>2. I added a new Entry<br>3. I clicked Add<br>4. Add will add the entry &amp; close the dialog Box, <br>5. I have wrapped the table with a DIV id="refreshDiv"&gt;<br>6. Question, How on Closure of the Dialog when i Press Add will trigger the &lt;DIV&gt; which refreshes it and show the added record.</p><p>I have implemented Add/Delete Functionality &amp; i will share it with you asap!, Once i Complete this</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728677">13</a> by Raymond Camden
		posted on 7/27/2011 at 6:17 AM
		</div>
		<div class="comment_text"><p>Whatever you use to close the dialog (a link for example) should use an event handler to do the rest of your process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728676">14</a> by Misty
		posted on 7/27/2011 at 9:05 AM
		</div>
		<div class="comment_text"><p>what exactly are u trying to say, dialog box just closes the dialog and doesnot refresh the div, i can add the tr td manually but that is not what i m trying</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728678">15</a> by Raymond Camden
		posted on 7/27/2011 at 3:08 PM
		</div>
		<div class="comment_text"><p>What do you mean when you say dialog box exactly? If it is a jQuery UI dialog, you have the option to do something on close.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728679">16</a> by Phillip Senn
		posted on 4/7/2012 at 6:38 PM
		</div>
		<div class="comment_text"><p>I think I just learned yesterday that $(this).data('ANYTHING') is different from the data-ANYTHING attribute.  For example, if you have data-ANYTHING and you say removeData('ANYTHING'), it's not going to work - you have to use removeattr('ANYTHING').</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728696">17</a> by Phillip Senn
		posted on 4/7/2012 at 6:38 PM
		</div>
		<div class="comment_text"><p>removeAttr('data-ANYTHING')</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728693">18</a> by Raymond Camden
		posted on 4/7/2012 at 10:12 PM
		</div>
		<div class="comment_text"><p>Interesting. If I had to guess, I'd say $(this).data is a polyfill for things that don't support data-*. I'm not sure though. I'd check the docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728694">19</a> by Raymond Camden
		posted on 4/7/2012 at 10:28 PM
		</div>
		<div class="comment_text"><p>I don't know - it seems like it should be the same in any modern jQuery lib: <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Fdata%2F%23data-html5%3ANIHQp4v_6eqFl57KDDt1-j9P-Ww&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/data/#data-html5">http://api.jquery.com/data/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728695">20</a> by Phillip Senn
		posted on 4/8/2012 at 12:56 AM
		</div>
		<div class="comment_text"><p>OK, I've put together a proof-of-concept.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.phillipsenn.com%2FMatrix%2FjQuery%2FData%2Fdata.cfm%3ARx7BEJUGGWgd0Tzl3tGMnYoszsI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.phillipsenn.com/Matrix/jQuery/Data/data.cfm">http://www.phillipsenn.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728697">21</a> by Raymond Camden
		posted on 4/9/2012 at 5:49 PM
		</div>
		<div class="comment_text"><p>Doing a bit of research and found this: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.visualjquery.net%2Fcategory%2FData%2FremoveData%3AIdQvUZfCpItFQnZPR-3aINrMemc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.visualjquery.net/category/Data/removeData">http://www.visualjquery.net...</a></p><p>Note specifically this portion: (btw, <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%3A1HB3P72Bue90xYUcCmZvblAMo6w&amp;cuid=3321886" rel="nofollow noopener" title="api.jquery.com">api.jquery.com</a> is down for me so I can't find the official doc) "NOTE: Starting with jQuery 1.4.3, calling .removeData() will cause the value of the property being removed to revert to the value of the data attribute of the same name in the DOM, rather than being set to undefined."</p><p>This seems to mesh with your demo where removeAttr just reverted it back to the DOM value.</p></div>
	</div>
</div>
		