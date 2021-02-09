
<div class="comment" id="c_1713616241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616241">1</a> by Scott Barnes
		posted on 10/4/2004 at 6:55 AM
		</div>
		<div class="comment_text"><p>heh yeah, its ',' seperated. Is that what you mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616243">2</a> by Raymond Camden
		posted on 10/4/2004 at 1:33 PM
		</div>
		<div class="comment_text"><p>Well I knew it was comma seperated, but I thought that every role listed was required. I didn't know that any role would be ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616240">3</a> by dave ross
		posted on 10/4/2004 at 2:39 PM
		</div>
		<div class="comment_text"><p>I think of it as cffunction rolesThatCanInvoke="superAdmin,admin"</p><p>I don't know why, I always just assumed it was an "or" list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616246">4</a> by John Farrar
		posted on 10/8/2004 at 5:43 PM
		</div>
		<div class="comment_text"><p>What if you want and roles? Isn't that an issue also?</p><p>My work around has both and &amp; or options. This gives you much more granular control. Is there any way you can do both and &amp; or with the roles function built into CFMX? (I was thinking there wasn't... if someone knows otherwise... let me know.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616248">5</a> by Raymond Camden
		posted on 10/12/2004 at 4:20 PM
		</div>
		<div class="comment_text"><p>John:</p><p>Yes, if you want to do both AND or OR checks, you certainly can, but you just need to remember how the DEFAULT functions work in CFMX. So, isUserInRole() is an AND check. The user must be in ALL. The ROLES attribute for CFFUNCTION is an OR check.</p><p>So, if you want to do an ADD check in a UDF/CFC Method, you can't use the roles attribute. You just use isUserInRole().</p><p>At the same time, if you want to do an OR check, you can't use isUSerInRole, you can instead use isUserInAnyRole(), which is a simple UDF I wrote that is up on <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%3A_xxzCNK-l1o46U5-IF400HiKZ0A&amp;cuid=3321886" rel="nofollow noopener" title="cflib.org">cflib.org</a>. All it does is loop over a list of passed in roles, and if you are in any of them, it returns true.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616244">6</a> by John Farrar
		posted on 10/14/2004 at 12:36 AM
		</div>
		<div class="comment_text"><p>OK... I know you can do it... I was meaning to ask if it was built in. (Which you have indicated that it is not.)</p><p>Also... my desire was to put and ... or ... and combination of and/or into one standard command you can use at any point. This is something I did in a UDF I wrote... just thougth it would be silly to write the additional code if it was native at this point.)</p><p>John</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616247">7</a> by Alex Sherwood
		posted on 2/2/2005 at 10:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Where's the IsUserInAnyRole() UDF at CFLib? I cannot find it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616245">8</a> by Raymond Camden
		posted on 2/3/2005 at 2:29 AM
		</div>
		<div class="comment_text"><p>I haven't uploaded it yet, sorry. The logic is VERY simple. I will write it here, but it will get mangled in the posting. Demangle:</p><p>Note I will probably typo as well.</p><p>function isUserInAnyRole(r) { var i = 1; for(i=1; i lte listLen(r); i=i+1) if(isUserInRole(listGetAt(r,i)) return true; }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616242">9</a> by Raymond Camden
		posted on 2/3/2005 at 2:29 AM
		</div>
		<div class="comment_text"><p>I forgot a return false; before the last }</p></div>
	</div>
</div>
		