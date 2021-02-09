
<div class="comment" id="c_1713727321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727321">1</a> by Tony Nelson
		posted on 11/3/2010 at 6:03 PM
		</div>
		<div class="comment_text"><p>What about currently active projects that are listed on RIAForge but hosted elsewhere, like on GitHub? For example, I update my ColdMVC project several times a week, but RIAForge says it was last updated in May when I first created it on RIAForge. Same can be said for ColdBox (June), MXUnit (July), and ValidateThis (July). I think this might be a little misleading.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727318">2</a> by Raymond Camden
		posted on 11/3/2010 at 6:14 PM
		</div>
		<div class="comment_text"><p>Log on to RIAForge. Click edit. Click save. Done. ;)</p><p>I mean seriously - at some point a project owner should consider updating their RIAForge project, at minimum to mention new version #s for example. This takes seconds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727320">3</a> by Tony Nelson
		posted on 11/3/2010 at 6:35 PM
		</div>
		<div class="comment_text"><p>Have you ever thought about adding a GitHub service hook for RIAForge so that commits to GitHub would be automatically pushed to RIAForge? You'd have to write it in Ruby, but I think it might be pretty nice addition. Plus it would save people the hassle of clicking edit for the sake of updating a datestamp.</p><p>More info on service hooks: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fgithub%2Fgithub-services%3AMsiJuVJo8bF3KwP6A1m3mFwk1gE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/github/github-services">https://github.com/github/g...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727319">4</a> by Raymond Camden
		posted on 11/3/2010 at 6:39 PM
		</div>
		<div class="comment_text"><p>Ruby? I'd rather stab my eyes out. ;)</p><p>I'd rather attempt something that wasn't Github specific. I'd like to add a field that is a URL pointing to a version number. So if I entered</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogcfc.com%2Fversion.xml%3AR4CEQgLFG0pyc4zgftywlzTaBoA&amp;cuid=3321886" rel="nofollow noopener" title="www.blogcfc.com/version.xml">www.blogcfc.com/version.xml</a></p><p>RIAForge would hit it once a day to get the version. If the value was different than the current one it would update the date/version.</p><p>I could also allow you to specify a xpath in case you had xml.</p><p>But seriously though - you don't have to edit RIAForge for _every_ update. If you use RIAForge primarily for listing, then you can edit it once a month or so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727314">5</a> by Tony Nelson
		posted on 11/3/2010 at 7:36 PM
		</div>
		<div class="comment_text"><p>Yeah I figured you wouldn't be too excited about Ruby...</p><p>What about allowing each RIAForge project to have a GitHub post-receive URL?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.github.com%2Fpost-receive-hooks%2F%3AQl6wBqRx-kQjQNwE5DWld0W4yXQ&amp;cuid=3321886" rel="nofollow noopener" title="http://help.github.com/post-receive-hooks/">http://help.github.com/post...</a></p><p>I know it's still specific to GitHub, but I think it could be justified that GitHub is popular enough to deserve a little extra love. You could even try to make it non-GitHub specific as long as the incoming JSON payload conformed to a similar structure.</p><p>Something like <a href="http://disq.us/url?url=http%3A%2F%2Fcoldmvc.riaforge.org%2Findex.cfm%3Fevent%3Dpage.postreceive%3AMa9Vvvd-hyupvd-ko9LBvfcVlOo&amp;cuid=3321886" rel="nofollow noopener" title="http://coldmvc.riaforge.org/index.cfm?event=page.postreceive">http://coldmvc.riaforge.org...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727323">6</a> by Raymond Camden
		posted on 11/3/2010 at 7:41 PM
		</div>
		<div class="comment_text"><p>Hmm. This I'd consider. I don't see a version # in the data, but we could refresh the lastupdated.</p><p>So perhaps on RIAForge we provide a checkbox to enable. When on, we tell the project admin, use this url Y. Then in Github they configure their project to hit Y with th einfo?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727324">7</a> by Tony Nelson
		posted on 11/3/2010 at 8:03 PM
		</div>
		<div class="comment_text"><p>Makes sense to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727322">8</a> by Raymond Camden
		posted on 11/3/2010 at 8:29 PM
		</div>
		<div class="comment_text"><p>No promise on this - but maybe towards the end of the year. Feel free to remind me. ;)</p></div>
	</div>
</div>
		