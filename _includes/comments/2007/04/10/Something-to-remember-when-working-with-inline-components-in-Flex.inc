
<div class="comment" id="c_1713663941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663941">1</a> by Ken Dunnington
		posted on 4/10/2007 at 5:37 PM
		</div>
		<div class="comment_text"><p>You're right, Flex populates the 'data' property when creating the inline renderer with the current row data. It does something similar for list controls with the 'listData' property. I believe all control components have these two properties (though they're empty by default.) I was playing around with inline renderers recently and came up against the same problem accessing variables outside the mx:Component tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663945">2</a> by Raymond Camden
		posted on 4/10/2007 at 5:50 PM
		</div>
		<div class="comment_text"><p>Ok, so I'm not alone in being caught by this. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663949">3</a> by Arul
		posted on 4/10/2007 at 8:01 PM
		</div>
		<div class="comment_text"><p>Thanks for the info. It will save lot of time and effort :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663946">4</a> by Rick Root
		posted on 4/11/2007 at 6:41 AM
		</div>
		<div class="comment_text"><p>I think when I came across this I figured out pretty quickly that it was a scoping issue.</p><p>I ended up solving it by using mx.core.application.Application.varname (or something like that)</p><p>Later, I discovered that "parentDocument" is much easier to type, as is parentApplication.</p><p>I've never seen "outerDocument" before... like all good programming languages, there are a billion ways to do things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663948">5</a> by Elliott Sprehn
		posted on 4/11/2007 at 1:04 PM
		</div>
		<div class="comment_text"><p>"What I don't quite get is why I can access data ok. I'm assuming Flex passes it in automatically since it recognizes I'm in a datagrid."</p><p>If you're really interested then set the compiler setting to save the generated AS3 code and you can see what your MXML is actually doing.</p><p>Its a good way to understand the magic that is MXML and what mxmlc is really generating for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663950">6</a> by Raymond Camden
		posted on 4/11/2007 at 4:07 PM
		</div>
		<div class="comment_text"><p>How is that done?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663951">7</a> by hua
		posted on 4/11/2007 at 7:56 PM
		</div>
		<div class="comment_text"><p>to save the generated as3 code:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cornilliac.com%2Fmachblog%2Findex.cfm%3Fevent%3DshowEntry%26entryId%3D2CF31430-3048-7802-93A5E8A2A250DB78%3AKiOBd9McyC90269kpkUR06ElT8g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cornilliac.com/machblog/index.cfm?event=showEntry&amp;entryId=2CF31430-3048-7802-93A5E8A2A250DB78">http://www.cornilliac.com/m...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663947">8</a> by Raymond Camden
		posted on 4/11/2007 at 8:02 PM
		</div>
		<div class="comment_text"><p>Nice. Thanks!</p></div>
	</div>
</div>
		