
<div class="comment" id="c_1713718876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718876">1</a> by brian
		posted on 10/9/2009 at 11:54 PM
		</div>
		<div class="comment_text"><p>juat add a / ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718878">2</a> by Raymond Camden
		posted on 10/9/2009 at 11:56 PM
		</div>
		<div class="comment_text"><p>I assume you are referring to the typo at the end? If so - fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718879">3</a> by todd sharp
		posted on 10/10/2009 at 12:18 AM
		</div>
		<div class="comment_text"><p>cfassociate is a pretty handy little tag IMO.  I remember using it in my cftimeline project - it has some good examples of parent/child custom tag action if anyone wants to check it (via riaforge).  not necessarilly my best code but hey it was a few years ago and my first 'deep-dive' into custom tags.</p><p>getBaseTagList() is another helpful function when working with custom tags.  It let's you do things like so:</p><p>&lt;cfset baseTags = getBaseTagList()&gt;</p><p>&lt;cfif not listFindNoCase(baseTags,"cf_timeline")&gt;<br>	&lt;cfthrow type="cf_timelineevent" message="The cf_timelineevent tag must be nested within a cf_timeline."&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718882">4</a> by Kaushal Shah
		posted on 10/10/2009 at 11:25 AM
		</div>
		<div class="comment_text"><p>thanks for ur example.<br>i now understood how the cfassociate works now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718880">5</a> by ColbyA
		posted on 10/20/2009 at 12:10 AM
		</div>
		<div class="comment_text"><p>"just add a  to the end of that tag"</p><p>The &lt;cfexit mode="exitTag"&gt; isn't showing up in the post. I can see it in the source but the less than and greater than aren't entity escaped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718881">6</a> by Raymond Camden
		posted on 10/20/2009 at 12:13 AM
		</div>
		<div class="comment_text"><p>Fixed, thanks ColbyA.</p></div>
	</div>
</div>
		