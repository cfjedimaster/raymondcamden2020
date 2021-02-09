
<div class="comment" id="c_1713651311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651311">1</a> by Ryan Guill
		posted on 4/4/2006 at 11:06 PM
		</div>
		<div class="comment_text"><p>im sure I could download the app and check it out for myself, but just curious if you could give a quick explantion of how you find {version} and translate it to call that cfc and method?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651319">2</a> by Raymond Camden
		posted on 4/4/2006 at 11:09 PM
		</div>
		<div class="comment_text"><p>Canvas uses N CFCs to render a page. The first CFC is PageRender, which has a collection of methods that do stuff. Like change +foo+ to bold (or whatever the code was). The "N" cfcs are all cfcs in the variablecomponents folder. Canvas scans and lots those CFCs. WHen rendering, if it finds a match of {xxx} where XXX was the name of the CFC, then it replaces {xxx} with the execution of XXX.render().</p><p>Make sense? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651318">3</a> by Ryan Guill
		posted on 4/4/2006 at 11:14 PM
		</div>
		<div class="comment_text"><p>yeah, perfect sense.  Very scalable!</p></div>
	</div>
</div>
		