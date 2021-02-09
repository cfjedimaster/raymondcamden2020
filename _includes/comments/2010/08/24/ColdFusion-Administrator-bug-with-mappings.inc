
<div class="comment" id="c_1713726105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726105">1</a> by Andy Allan
		posted on 8/25/2010 at 12:12 AM
		</div>
		<div class="comment_text"><p>re: App specific mappings, watch out is there is an outstanding bug in regards using them with ExpandPath(), i.e. they don't work.</p><p>I logged it ages ago but it's not been fixed yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726104">2</a> by Raymond Camden
		posted on 8/25/2010 at 12:20 AM
		</div>
		<div class="comment_text"><p>I've not had issues with expandPath and mappings. What issue do you mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726110">3</a> by Andy Allan
		posted on 8/25/2010 at 12:34 AM
		</div>
		<div class="comment_text"><p>I'll dig out a repo but Adobe did confirm it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726109">4</a> by phill.nacelli
		posted on 8/25/2010 at 12:48 AM
		</div>
		<div class="comment_text"><p>There's another bug that's been verified and still being worked on which is the new AMF that comes with CF 9 does not look at per application mappings defined in the Application.cfc file.  So if you are using Flex, you have to (for now) add the mapping to the CF Admin.  This becomes a problem when you have the same mapping name (ie "com" or "cfc"), in that case you would have to create a separate instance for each application with the appropriate mapping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726111">5</a> by Raymond Camden
		posted on 8/25/2010 at 12:57 AM
		</div>
		<div class="comment_text"><p>Well that sucks. Is it in terms of the path, ie, your FLex code using com.foo.zoo ad expecting it to match /com/foo/zoo, or is it INSIDE the CFC, so if my Flex code called</p><p>remote.service</p><p>and /remote/service.cfc used createObject("component", "<a href="http://disq.us/url?url=http%3A%2F%2Fcom.goo%3AKY0pJVCaI1iewi0EuM0XTXHdE-E&amp;cuid=3321886" rel="nofollow noopener" title="com.goo">com.goo</a>") where com is a mapping - would that work? See the difference?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726107">6</a> by phill.nacelli
		posted on 8/25/2010 at 1:07 AM
		</div>
		<div class="comment_text"><p>@Ray</p><p>It's apparently in the mapping between a Flex value object (<a href="http://disq.us/url?url=http%3A%2F%2FUserVO.as%3AesnqpqR3hTLhHKE3A7dV1II08-s&amp;cuid=3321886" rel="nofollow noopener" title="UserVO.as">UserVO.as</a>) to the remote ColdFusion value object (User.cfc), apparently it fails when it tries to lookup the mapping in the alias definition: [RemoteClass(alias="com.contactManager.security.user.User")]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726106">7</a> by Raymond Camden
		posted on 8/25/2010 at 1:08 AM
		</div>
		<div class="comment_text"><p>So if you try to return a mapped object, then it fails?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726108">8</a> by phill.nacelli
		posted on 8/25/2010 at 1:19 AM
		</div>
		<div class="comment_text"><p>Correct</p><p>Here's the full details on the reported bug: <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D80603%3AQ8G9OTM8iPXycJyXgltjqfLhRjw&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=80603">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		