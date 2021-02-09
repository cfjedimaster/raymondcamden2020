
<div class="comment" id="c_1713720398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720398">1</a> by Dale Severin
		posted on 12/9/2009 at 12:50 AM
		</div>
		<div class="comment_text"><p>Thanks for the great post.  This will come in handy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720411">2</a> by Marko Simic
		posted on 12/9/2009 at 3:44 AM
		</div>
		<div class="comment_text"><p>mywin.getEl().id I was desperately looking for this. thanks.<br>Btw, to check if window is created you may look for &lt;winname&gt;_body element.<br>if (document.getElementById('mapWindow_body')){<br>   //win exists, tho may be hidden<br>}<br>else{<br>  //create it<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720410">3</a> by rana
		posted on 12/9/2009 at 10:56 AM
		</div>
		<div class="comment_text"><p>great tutorial, thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720412">4</a> by Don Blaire
		posted on 12/9/2009 at 7:42 PM
		</div>
		<div class="comment_text"><p>Thanks for the posting.  This was just what I was looking for, but I had no idea where to start.  I did have a problem where I received the following error in firebug:</p><p>$("#print").print is not a function</p><p>I substituted jqprint.0.3.js in the place of <a href="http://disq.us/url?url=http%3A%2F%2Fprint.js.in%3AQgqhCqHIHVBMdcb0K5LBrHQZJ_c&amp;cuid=3321886" rel="nofollow noopener" title="print.js.in">print.js.in</a> the following and it worked fine:</p><p>&lt;SCRIPT type=text/javascript src="jquery.jqprint.0.3.js"&gt;&lt;/SCRIPT&gt;</p><p>&lt;script&gt;<br>$(document).ready(function() {</p><p>	$("#getAddressBtn").click(function() {<br>		try {<br>			ColdFusion.Window.destroy('mapWindow')<br>		} catch(e) {}<br>		var address = $("#address").val()<br>		ColdFusion.Window.create('mapWindow', 'Map', 'mapsExample2.cfm?address='+escape(address), {height:500,width:500,modal:false,closable:true, draggable:true,resizable:true,center:true,initshow:true })<br>	})</p><p>	$("#printBtn").live("click",function() {<br>		$("#print").jqprint();<br>	})</p><p>	})<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720409">5</a> by Raymond Camden
		posted on 12/9/2009 at 9:39 PM
		</div>
		<div class="comment_text"><p>Odd, I had no problems with Ben's plugin. I'll ping em.</p></div>
	</div>
</div>
		