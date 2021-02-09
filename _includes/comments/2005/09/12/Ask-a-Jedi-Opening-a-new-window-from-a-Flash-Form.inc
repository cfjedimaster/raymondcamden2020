
<div class="comment" id="c_1713620769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620769">1</a> by David  Retsid
		posted on 10/12/2005 at 11:48 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Your sample code worked fine (thanks!), except where theURL.txt (in my case a search term to append to a URL) contains an apostrophe. Like in the Book Title "Frankie's Run". I've tried modifying the code above to include a call to escape(theURL.txt) but it doesn't seem to work either. Any suggestions?</p><p>BTW Your window open code has a bug. it should list "scrollbars=yes" not "scrollbar=yes"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620777">2</a> by Raymond Camden
		posted on 10/13/2005 at 1:10 AM
		</div>
		<div class="comment_text"><p>I'm assuming you need to escape it some how. Maybe look in the AS docs for replacing single quotes. Sorry - not sure how else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620778">3</a> by Michael White
		posted on 2/9/2006 at 8:52 PM
		</div>
		<div class="comment_text"><p>I made a comment to the asfusion blog and Ed Welch gave this response (which is easier if you don't need to control the window):<br>onclick="if (gridContacts.selectedItem.ContactID &gt; 0 ) {getUrl('ContactInfo.cfm?ContactID=' + gridContacts.selectedItem.ContactID,'_blank');}"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620776">4</a> by Michael White
		posted on 3/15/2006 at 10:55 PM
		</div>
		<div class="comment_text"><p>ok, here's a dumb question: once you have your javascript window open just how you like it... what's the easy way to close it down by clicking a "cancel" button?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620781">5</a> by Raymond Camden
		posted on 3/15/2006 at 11:01 PM
		</div>
		<div class="comment_text"><p>Why wouldn't you just hit the X button in the upper right hand corner?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620779">6</a> by Adam Cockman
		posted on 5/22/2006 at 6:42 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I am trying to open a new window without toolbars address bar and as a certain size from a flash form, Is it possible to do this on &lt;a href&gt; tag instead of being on a button???</p><p>Ads</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620780">7</a> by Bill Cupps
		posted on 8/18/2006 at 12:58 AM
		</div>
		<div class="comment_text"><p>I have a long cfform, the scroll bars show and work just fine.  But what I am looking for is the ability to keep whatever control the user has focus on within the viewable area as the user tabs through the form.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620782">8</a> by Dan O&amp;aposKeefe
		posted on 11/1/2006 at 9:44 PM
		</div>
		<div class="comment_text"><p>Similar to Adam, I am finding it impossible to get a popup window from a straight href like you would use on an html form. When I try to use an inage and the onclick event, I cannot remove the border around the image (Flash form makes it look like an image embedded in a button.</p></div>
	</div>
</div>
		