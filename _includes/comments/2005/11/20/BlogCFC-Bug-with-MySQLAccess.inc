
<div class="comment" id="c_1713622700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622700">1</a> by Derek P
		posted on 11/21/2005 at 1:26 AM
		</div>
		<div class="comment_text"><p>regarding the trackback issue...did you ever get my feature idea of using cfx_image to create an image file with a value the user has to type in to a box identically to validate a human?</p><p>if you don't know what i mean, IM/Email me and i can explain it in more detail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622699">2</a> by Raymond Camden
		posted on 11/21/2005 at 2:27 AM
		</div>
		<div class="comment_text"><p>Well, TBs are supposed to support POST responses, so I don't think captcha (captha, whatever it is) would apply to it.</p><p>I can say most of my TB spam is -new- spam. Maybe one day my list will be complete. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622702">3</a> by Brian Rinaldi
		posted on 11/22/2005 at 7:28 AM
		</div>
		<div class="comment_text"><p>Ray, was the error you are talking about "Cannot format given Object as a Date". If so, I seem to have found a fix even if I don't see the cause. I was getting this error when I clicked on a category. To fix it, I changed the code on lines 155 and 162 on index.cfm to read application.localeUtils.dateLocaleFormat(createODBCdateTime(posted)) - I just wrapped the date in the odbc date time function. This fixed the issue, though I am not sure why. It wasn't happening locally, but I am running MySQL 5 locally...could be the difference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622701">4</a> by Raymond Camden
		posted on 11/22/2005 at 7:32 AM
		</div>
		<div class="comment_text"><p>Brian, that is close to what I did. In utils.cfc, I just did a createDateTime call on the value before passing it to the java ob. Either way - I haven't released it yet because it just doesn't make sense why this would happen _now_. I haven' t changed how dates are stored, nor have I changed the locale code in ages.</p></div>
	</div>
</div>
		