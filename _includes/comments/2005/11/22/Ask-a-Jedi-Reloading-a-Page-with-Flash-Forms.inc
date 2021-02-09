
<div class="comment" id="c_1713622921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622921">1</a> by Phillip Senn
		posted on 11/28/2005 at 8:15 PM
		</div>
		<div class="comment_text"><p>What's the difference between a reload and a submit?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622926">2</a> by Raymond Camden
		posted on 11/28/2005 at 8:26 PM
		</div>
		<div class="comment_text"><p>A submit will send form data. That may or may not matter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622916">3</a> by Michael White
		posted on 2/9/2006 at 12:04 AM
		</div>
		<div class="comment_text"><p>I would like to know what the syntax would be to add a url variable bound to the selected item of a grid. I tried onclick="getURL('ContactMgr.cfm?ContactID={gridContact.selectedItem.ContactID},'_blank')"  but that just sends the literal string, not the value</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622912">4</a> by Michael White
		posted on 2/9/2006 at 1:14 AM
		</div>
		<div class="comment_text"><p>ok, I think I figured it out using your November post about opening a new window. I have the javascript routine:<br>&lt;!--- Javascript routine to open new window ---&gt;<br>&lt;script&gt;<br>	function show(u) {<br>		if(u != '') <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>(u, 'sub', 'directories=no, location=no, menubar=no, resizable=yes, scrollbars=no, status=no, titlebar=yes, toolbar=no, height=435, width=535')<br>	}<br>&lt;/script&gt;</p><p>Then I have a grid called "gridContact" and the ID for contacts is ContactID so the syntax for the onload event looks like this:</p><p>onclick="getURL('javascript:show(\'ContactProfile.cfm'+'?ContactID='+gridContact.selectedItem.ContactID+'\')')"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622919">5</a> by Larry
		posted on 2/10/2007 at 12:09 AM
		</div>
		<div class="comment_text"><p>I am trying to utilize javascript for a confirmation to verify that the user wants to delete a record.  The function I am using below is getting triggered. However, the submit is not submitting the form.  I am assuming this should trigger whatever is in the action portion of the cfform tag?  I just want to call another .cfm page once the user verifies they want to delete.  I am using cfform format="flash" if that matters.  Any suggestions would be greatly apprecitated.</p><p>&lt;SCRIPT LANGUAGE="JavaScript"&gt;				function confirmDelete() {<br>	var msg = "Are you sure you want to delete?";		if ( confirm(msg) ) {					document.frmModifyPWarrior.submit()<br>	}<br>	}						<br>&lt;/SCRIPT&gt;</p></div>
	</div>
</div>
		