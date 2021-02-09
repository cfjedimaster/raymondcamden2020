
<div class="comment" id="c_1713719206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719206">1</a> by Michael
		posted on 10/24/2009 at 10:59 AM
		</div>
		<div class="comment_text"><p>Do you think you might be able to add the JQuery alternative too please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719205">2</a> by Phillip Senn
		posted on 10/25/2009 at 5:35 AM
		</div>
		<div class="comment_text"><p>Here's a fun little AJAX gif creator.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.ajaxload.info%2F%3AqD1uwYMPMrpR6zLuMicuG7jZacM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ajaxload.info/">http://www.ajaxload.info/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719207">3</a> by Raymond Camden
		posted on 10/25/2009 at 9:34 PM
		</div>
		<div class="comment_text"><p>I normally don't like it when people post large text blocks in a comment, but since its my blog, I'm allowed to be a hypocrite. ;)</p><p>&lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjquery.min.js%3AmyXuj5h8gP7HzSEw76YxIcay7LQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;<br>&lt;script&gt;<br>$(document).ready(function() {</p><p>	$("#mybutton").click(function() {</p><p>		$("#loading").html("Loading....")<br>		var artid = $("#artid").val()<br>		if(isNaN(artid)) return</p><p>		$.getJSON("test.cfc?method=getdata&amp;artid=" + artid + "&amp;returnformat=json", {}, function(d,status) {<br>			$("#loading").html("")<br>			var data = {}<br>			for(var i=0; i &lt; d.COLUMNS.length; i++) {<br>				data[d.COLUMNS[i]] = d.DATA[0][i]<br>			}<br>			$("#artname").val(data["ARTNAME"])<br>			$("#description").val(data["DESCRIPTION"])<br>			$("#price").val(data["PRICE"])<br>		})</p><p>	})<br>})<br>&lt;/script&gt;</p><p>&lt;div id="loading"&gt;&lt;/div&gt;</p><p>&lt;form&gt;<br>id: &lt;input type="text" name="artid" id="artid"&gt; &lt;input type="button" id="mybutton" value="Lookup"&gt;&lt;br/&gt;<br>name: &lt;input type="text" name="artname" id="artname" readonly="true"&gt;&lt;br/&gt;<br>description: &lt;textarea name="description" id="description" readonly="true"&gt;&lt;/textarea&gt;&lt;br/&gt;<br>price: &lt;input type="text" name="price" id="price" readonly="true"&gt;&lt;br/&gt;<br>&lt;/form&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719208">4</a> by patrick branley
		posted on 10/29/2009 at 3:42 AM
		</div>
		<div class="comment_text"><p>Hi Ray<br>Just wondering on your thoughts of using cfajaxproxy vs jquery method.</p><p>From my testing Ajaxproxy, sprydataset &amp; CFFORM generate alot of script ininline in the page. I dont mind CF creating script for me, but why cant it write an external JS file rather than inline script ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719212">5</a> by Raymond Camden
		posted on 10/29/2009 at 3:55 PM
		</div>
		<div class="comment_text"><p>To your first point: It depends. :)</p><p>cfajaxproxy, and other CF-built in features, are typically very easy to use. So if you aren't very comfortable with JS then I'd probably always recommend using them. For me, I'm (slowly) getting more comfortable with JS, so I prefer jQuery.</p><p>To your second point: Remember that the JS is a combination of static libraries and dynamic code. It wouldn't make sense for the dynamic code to be saved to the file system just for one request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719214">6</a> by patrick branley
		posted on 10/30/2009 at 2:08 AM
		</div>
		<div class="comment_text"><p>fair call.</p><p>we currently use prototype/scriptaculous for most of our JS work. Im able to make OO based classes and completely unobtusive javascript which i can then gzip (via CF/java) and set all the correct HTTP headers (using combine.cfc) to fully optimise for the best YSlow ratings.</p><p>These are my main problem with the inline script CF generates. <br>1 - it breaks unobtrusive principles<br>2 - its not optimal in terms of performance. ie if i have the same 'AutoCompleter' on 2 pages the user must download all the required JS twice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719235">7</a> by Michel
		posted on 11/6/2009 at 6:03 PM
		</div>
		<div class="comment_text"><p>May I ask you how do you realize this for CF7 ?<br>Cound this be a Ask-a-Jedi-ColdFusion-Ajax-example-of-retrieving-fields-of-data-4 ? -)<br>Thank you,<br>Michel</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719236">8</a> by Raymond Camden
		posted on 11/6/2009 at 6:06 PM
		</div>
		<div class="comment_text"><p>The one I posted in the comments, the one in jQuery, would work perfectly, except that the call to the CFC would not work. In CF7, a CFC can return WDDX or XML, not JSON. So instead, you would point to a CFM. That CFM would run the CFC and would convert the data to JSON. If you google for json coldfusion, you will find the JSON component. I forget who made it - but I use the same component in LighthousePro.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719237">9</a> by CF Mitrah
		posted on 11/6/2009 at 9:49 PM
		</div>
		<div class="comment_text"><p>@Ray, it is <a href="http://disq.us/url?url=http%3A%2F%2Fwww.epiphantastic.com%2Fcfjson%2F%3A3eMw3gAttZSTsJLQlqqRjOKs7Wc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.epiphantastic.com/cfjson/">http://www.epiphantastic.co...</a> by Jehiah &amp; Thomas</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719239">10</a> by Raymond Camden
		posted on 11/6/2009 at 9:52 PM
		</div>
		<div class="comment_text"><p>Yep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719241">11</a> by Chuck Savage
		posted on 11/21/2009 at 12:43 AM
		</div>
		<div class="comment_text"><p>Is it possible to pop up a window that requests the information (which I know is possible) but then updates the information on the page that pop'd the window?</p><p>I'm guessing as I try to figure this all out, it's somehow in the window's onHide() that another call is made to the server for the final information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719240">12</a> by Chuck Savage
		posted on 11/21/2009 at 12:44 AM
		</div>
		<div class="comment_text"><p>lol, ok, I know it is, but how - because this pop-up comment page, is a pop-up, and as soon as I click post the main page was updated, how?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719242">13</a> by Chuck Savage
		posted on 11/21/2009 at 2:43 AM
		</div>
		<div class="comment_text"><p>Found your post here, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F11%2F29%2FColdFusion-8-and-AjaxBased-Login%3A071v9mbNgaUccFhW1ENlRn27TJM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/11/29/ColdFusion-8-and-AjaxBased-Login">http://www.coldfusionjedi.c...</a>  I'm sure it'll be enough</p></div>
	</div>
</div>
		