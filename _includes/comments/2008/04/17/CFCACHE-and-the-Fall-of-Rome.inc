
<div class="comment" id="c_1713679705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679705">1</a> by Bryan Rapp
		posted on 4/18/2008 at 12:25 AM
		</div>
		<div class="comment_text"><p>It not only breaks some browser rendering, it breaks most XML parsing as I learned while trying to implement some basic RSS/Atom feed caching.  I was disappointed to see the problem was still in CF8, but very glad to learn it was fixed in 8.0.1.  I ended up just using cfschedule to cache higher traffic feeds.  It works fine for a few things, but could be tough to manage with a large number of pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679704">2</a> by Steve Bryant
		posted on 4/18/2008 at 1:00 AM
		</div>
		<div class="comment_text"><p>Would something taking advantage of getPageContext() work? I have had to do content replacement with that before.</p><p>&lt;cfset content = getPageContext().getOut().getString()&gt;<br>&lt;cfset content = rereplace(content, "^&lt;!--.*?--&gt;$", "")&gt;<br>&lt;cfcontent reset="Yes"&gt;<br>#content#</p><p>Untested - I am just spit-balling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679707">3</a> by Raymond Camden
		posted on 4/18/2008 at 1:03 AM
		</div>
		<div class="comment_text"><p>Wow, that's a no - cuz even without the cfsavecontent it fails. It must be that it's being used inside a CFC method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679708">4</a> by David
		posted on 4/22/2008 at 12:44 PM
		</div>
		<div class="comment_text"><p>You could use the content filter function of FusionReactor?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679710">5</a> by Kevin Penny
		posted on 9/18/2008 at 7:47 PM
		</div>
		<div class="comment_text"><p>Even though it states in the release notes that the cfcache 'heading' comment has been fixed for xhtml compliance in 8.01 release - and states in the release notes that it has been fixed - "70372 The cfcache tag inserted a comment that invalidated XHTML and XML<br>pages.<br>Tags - cfcache"</p><p>it's still appearing in our headers on an 8.01 upgraded server (we're not the only ones <a href="http://disq.us/url?url=http%3A%2F%2Fsoftware.groupbrowser.com%2Farchive%2Ft-420532.html%29%3AdCtBT6DDQ_D8VKsaOuiTsPtmNIo&amp;cuid=3321886" rel="nofollow noopener" title="http://software.groupbrowser.com/archive/t-420532.html)">http://software.groupbrowse...</a></p><p>Any one still seeing this after an upgrade?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679713">6</a> by Joel
		posted on 10/14/2008 at 11:45 PM
		</div>
		<div class="comment_text"><p>I posted the message you linked to. :) Unfortunately I'm back here because I'm still searching for an answer. It's perplexing, given that Adobe says they've fixed this bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679712">7</a> by Matt
		posted on 3/11/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>Ditto on this, just tried cfcache on my server and still have this comment tag appearing breaking xhtml compliance.</p><p>how annoying!</p></div>
	</div>
</div>
		