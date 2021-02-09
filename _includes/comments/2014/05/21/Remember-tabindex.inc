
<div class="comment" id="c_1714082979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082979">1</a> by Ty Whalin
		posted on 5/22/2014 at 1:17 PM
		</div>
		<div class="comment_text"><p>Hey, that is a nice little tip. Did not know that about tab indexing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082980">2</a> by Raymond Camden
		posted on 5/22/2014 at 4:27 PM
		</div>
		<div class="comment_text"><p>This is something I try to remind folks about often - HTML has *quite* a bit too it and it's probably something we all need a refresher on. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082983">3</a> by Larry C. Lyons
		posted on 5/22/2014 at 10:35 PM
		</div>
		<div class="comment_text"><p>Just a heads up Ray, tabindex is also used by screen readers and other accessibility aids. As the WebAim site notes:</p><p>Because tabindex="-1" removes the element from the default navigation flow, care should be taken to ensure that it is not assigned to any element that should be keyboard navigable, such as a link or button that sighted users can click on with the mouse.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwebaim.org%2Ftechniques%2Fkeyboard%2Ftabindex%3AwwV3bO2qxpUCezvpfmZOqaULbbw&amp;cuid=3321886" rel="nofollow noopener" title="http://webaim.org/techniques/keyboard/tabindex">http://webaim.org/technique...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082987">4</a> by Raymond Camden
		posted on 5/22/2014 at 10:39 PM
		</div>
		<div class="comment_text"><p>Good point there. I suppose in that case, using positive numbers with that link being last may be a better alternative.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082985">5</a> by Larry C. Lyons
		posted on 5/22/2014 at 11:14 PM
		</div>
		<div class="comment_text"><p>t really depends. If the item is in the flow and is a widget, then tabindex="0" or "-1" is entirely appropriate. For instance the <a href="http://disq.us/url?url=http%3A%2F%2FAssets.gov%3AFPh-TsPslB-W9lqhvSHunV0tPDk&amp;cuid=3321886" rel="nofollow noopener" title="Assets.gov">Assets.gov</a> site  <a href="http://disq.us/url?url=http%3A%2F%2Fassets.cms.gov%3AM1xumgl9yKatEtW42zl934AYwI4&amp;cuid=3321886" rel="nofollow noopener" title="http://assets.cms.gov">http://assets.cms.gov</a>  we made full use of tabindex and the web ARIA properties and roles to make the site fully accessible, and almost fully response (the side menus suck unfortunately). FWIW this framework and library is availed as a cdn or as a download.</p><p>In the example you use, it may be easier for all users if the link was above the first field. In fact that may work better because you can use a sentence to describe the link and hook that into the labledby attributes for both fields.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082986">6</a> by Jaana Gilbert
		posted on 5/30/2014 at 11:46 PM
		</div>
		<div class="comment_text"><p>I still use tabinex on pretty much all forms I build, especially those that are not laid out in a traditional way, but have to be followed in a specific order (client requirement).</p></div>
	</div>
</div>
		