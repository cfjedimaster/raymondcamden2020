
<div class="comment" id="c_1713679699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679699">1</a> by Will B.
		posted on 4/16/2008 at 11:13 PM
		</div>
		<div class="comment_text"><p>I had an issue a while back...wish I had blogged about it.  The cookies from CF were coming out all uppercase, but when I would access (or create new) cookies from Javascript, they would be lower (or mixed) case.  My solution, at the time, was to UPPERCASE all cookie names from ColdFusion and in Javascript.  Otherwise, thisCookie was not the same at THISCOOKIE.</p><p>- Will B.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679697">2</a> by Lola LB
		posted on 4/17/2008 at 3:32 PM
		</div>
		<div class="comment_text"><p>What's the reason for making cookies lowercase?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679698">3</a> by Raymond Camden
		posted on 4/17/2008 at 3:34 PM
		</div>
		<div class="comment_text"><p>I don't know - maybe he makes them first in JS, and wants to keep them lowercase.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679703">4</a> by Daniel Sellers
		posted on 4/17/2008 at 5:58 PM
		</div>
		<div class="comment_text"><p>My understanding is that CF doesn't respect case in variable names or scopes so even though you have mycookie and MYCOOKIE in the scope when you do the cfset it probably would view them as having the same variable name. Probably would result in them both being set to m.</p><p>e.g. cookie.MYCOOKIE == cookie.mycookie == cookie.MyCookiE</p><p>CF probably assumes that all the above are the same variable and if it encounters all of them in the cookie scope it sets them all equal to m.</p><p>Just a guess...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679701">5</a> by Will B.
		posted on 4/17/2008 at 6:06 PM
		</div>
		<div class="comment_text"><p>@Daniel<br>Yes, that's true.  But if you need to access those cookies with Javascript, the case does matter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679702">6</a> by Mickey
		posted on 9/20/2010 at 4:05 AM
		</div>
		<div class="comment_text"><p>Once again... you saved me half a bottle of Tylenol trying to figure out why I could not delete from JavaScript the cookie I created with CF. I'm fine with using uppercase... now that I know that works!<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679700">7</a> by ecomm_dev
		posted on 11/10/2011 at 6:07 PM
		</div>
		<div class="comment_text"><p>Was trying to delete a cookie created in cf8 from javascript changed the cfcookie tag attribute name to uppercase as suggested by some, with no success. Coldfusion includes the path by default as path=/ if it is not specified making the cookie a domain cookie. So if you trying to delete or change the cookie from javascript without including the path it does'nt work as it assumes the cookie is a page cookie not a domain cookie. When I included the path in the javascript that matched the coldfusion path, it worked like a charm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1745295657">
	<div>
		<img src="https://disqus.com/api/users/avatars/ss_nbk.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1745295657">8</a> by ss_nbk
		posted on 12/16/2014 at 5:23 PM
		</div>
		<div class="comment_text"><p>Ray thanks for this.  Even 5 years later this is still helping people!  Had two cookies, one being saved as lowercase and one as upper and could only get one to clear.  Now we can clear them all.  For others, you can add domain and path to the cfheader as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1745298103">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1745298103">9</a> (In reply to <a href="#c_1745295657">#8</a>) by Raymond Camden
		posted on 12/16/2014 at 5:25 PM
		</div>
		<div class="comment_text"><p>Always happy to hear that these old posts are helpful. :)</p></div>
	</div>
</div>
		