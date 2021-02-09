
<div class="comment" id="c_1713620606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620606">1</a> by Pat Branley
		posted on 9/6/2005 at 5:26 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>You suggestion about GetMonthAsString() only works on CF7.</p><p>Prior to this Changing the locale didnt have an effect on this function. In previous relases the better way to do it is<br>#LSDateFormat( createDate(year(now()),month(i),1) , "mmmm" )#</p><p>this format works in cf 5,6,6.1 and 7. in any locale thats supported.</p><p>Pat</p></div>
	</div>
</div>
		