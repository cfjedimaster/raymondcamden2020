
<div class="comment" id="c_1713719374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719374">1</a> by Nick
		posted on 11/3/2009 at 5:52 AM
		</div>
		<div class="comment_text"><p>In IE 7 Ray shows up at the top of the screen, and the Telephone is  a LONG way below the fold. the page Does not jump with the init() fix</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719375">2</a> by Sean Coyne
		posted on 11/3/2009 at 6:17 PM
		</div>
		<div class="comment_text"><p>I have run into this in the past and fixed it by adding a script block with the scroll call at the bottom of the page.  It has fixed it for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719376">3</a> by Les Schmidt
		posted on 12/13/2009 at 11:51 AM
		</div>
		<div class="comment_text"><p>Within a cfwindow, I can't get this suggestion to work.</p><p>I use the coldfusion.navigate() and <a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion.window.show%3AVAwyQTCfOn21ND7QJ2r4mBi2xc8&amp;cuid=3321886" rel="nofollow noopener" title="coldfusion.window.show">coldfusion.window.show</a>() to pop open a modal window when the user doubleclicks on a gridrow.  The form comes up fine, but the focus is set to the fourth cfinput field in the window ... it's the only one that has a mask.  I've tried the code suggested above in my code for the window (a separate .cfm template from the .cfm template that contains the grid).  I've tried the &lt;script&gt; block at the top and at the bottom.  I've tried the "onload" piece in the &lt;body&gt; tag and in the &lt;cfform&gt; tag.  Nothing seems to work.   The essence of my code is (with the javascript at the top):<br>&lt;script type="text/javascript"&gt;<br>	 function init() {<br>	 	window.scrollto(0,0);<br>	 }<br>&lt;/script&gt;</p><p>&lt;body onload="init()"&gt;<br>&lt;cfoutput&gt;<br>&lt;cfform name="projectForm" onload="start()" &gt;<br>	&lt;cfinput type="hidden" name="projectId"  value="#url.projectId#" /&gt;</p><p>  &lt;div class="formElement"&gt;<br>	&lt;label for="projectName"&gt;Project Name:&lt;/label&gt;<br>	&lt;cfinput id="projectName" name="projectName" value="#project.projectName#" size="20" /&gt;<br>	&lt;div id="projectNameError" class="error"&gt;&lt;/div&gt;<br>	&lt;/div&gt;</p><p>... [two more cfinputs with no mask] ...</p><p>  &lt;div class="formElement" align="left"&gt;<br>	&lt;label for="projectStartDate"&gt;Start Date: &lt;/label&gt;<br>	&lt;cfinput id="projectStartDate" name="projectStartDate" value="#dateformat(project.projectStartDate,'mm/dd/yyyy')#" size="12" mask="99/99/9999"  /&gt;<br>	&lt;div id="projectStartDateError" class="error"&gt;&lt;/div&gt;<br>	&lt;/div&gt;</p><p>... [several more cfinputs with no mask and a submit button] ...</p><p>&lt;/cfform&gt;<br>&lt;/cfoutput&gt;<br>&lt;/body&gt;</p><p>Any suggestion on how to set focus on the first field (ProjectName) vs. the fourth field (projectStartDate) would be most welcome!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719373">4</a> by Les Schmidt
		posted on 12/13/2009 at 12:06 PM
		</div>
		<div class="comment_text"><p>Well,I feel pretty stupid.  The code above works fine when your FIRST input field is not a hidden one!   Duh!  hard to have focus on a hidden input field!</p><p>Moved that input field to the bottom of the form and it works just fine.<br>Hope someone else will benefit from my "discovery".</p></div>
	</div>
</div>
		