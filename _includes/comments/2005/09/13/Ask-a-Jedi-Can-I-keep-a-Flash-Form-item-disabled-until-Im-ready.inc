
<div class="comment" id="c_1713620793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620793">1</a> by Kiley Simpson
		posted on 6/6/2006 at 5:48 AM
		</div>
		<div class="comment_text"><p>This little bit of code just saved my life:</p><p>&lt;cfsavecontent variable="onchange"&gt;<br>if(GRIDCOMPANIES.selectedIndex != undefined) {<br>   sbtEdit.enabled = true;<br>	 sbtDeleteCompany.enabled = true;<br>} else {<br>   sbtEdit.enabled = false;<br>	 sbtDeleteCompany.enabled = false;<br>}<br>&lt;/cfsavecontent&gt;</p><p>Not using the technique above, is there a way to pop an alert on a submit button of a cfgrid if the user has not selected a row? I have been beating my head up on this.</p><p>If there isn't, your above solution will do the trick!</p><p>Thank you very much Ray!</p></div>
	</div>
</div>
		