
<div class="comment" id="c_1713619498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619498">1</a> by Sean Corfield
		posted on 8/3/2005 at 5:14 AM
		</div>
		<div class="comment_text"><p>Wouldn't it have been simpler to just append the views together? (append="true" on the include tag)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619495">2</a> by Raymond Camden
		posted on 8/3/2005 at 5:27 AM
		</div>
		<div class="comment_text"><p>I don't think that would work since the stuff in dsp.searchpod needs to go inside layout.pod.cfm. The "total" string for pods needs to be:</p><p>pod layout start + search pod + pod layout end + pod layout start + login pod + pod layout end</p><p>Does that make sense? If appending would still work, let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619496">3</a> by Sean Corfield
		posted on 8/3/2005 at 5:54 AM
		</div>
		<div class="comment_text"><p>I would have main show a 'pods' view and every invocation of the pod layout would use the same name 'pods' with append="true".</p><p>I'd also probably just make the pod layout include the named view rather than having the view in the XML and still having to link it by name.</p><p>My approach would look like:</p><p>include template="layout.pod.cfm" name="pods" append="true"<br>value name="podcontent" value="logon" overwrite="true"<br>/include</p><p>include template="layout.pod.cfm" name="pods" append="true"<br>value name="podcontent" value="searchpod" overwrite="true"<br>/include</p><p>And layout.pod.cfm would &lt;cfinclude template="dsp.#viewState.getValue('podcontent')#.cfm" /&gt; in the middle.</p><p>Or am I smoking crack about what you're trying to do?</p><p>I'm just basing this on the similar approach I took in the Fusebox 4.1 wrapper for your BlogCFC...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619499">4</a> by Raymond Camden
		posted on 8/3/2005 at 6:07 AM
		</div>
		<div class="comment_text"><p>Hmmm. I didn't get it at first. But now I do. I believe your approach is a bit simpler. For some reason though, your approach doesn't seem "right" in terms of the framework, or how I should do it. And I say that respectfully as someone who is far less experienced in MG than you are. ;) I think what bugs me is - a file in the views folder will be cfincluding another file in the views folder, and it seems like that kind of communication/usage would be frowned on. Or am I being too anal?</p><p>Interesting. I want to chew on this a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619500">5</a> by Sean Corfield
		posted on 8/3/2005 at 6:21 AM
		</div>
		<div class="comment_text"><p>There are no hard and fast rules of course. I choose my approach because it simplifies the XML while still specifying "everything" about how views are constructed. Your approach is valid too - it simplifies the views themselves at the expense of more XML.</p><p>Actually I just went back to my Fusebox 4.1 blog wrapper and what I do there is explicitly call a pod layout custom tag inside each pod and then the circuit XML file just includes all the pods in order and appends them to a single 'pods' variable. Another approach that makes a different tradeoff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619497">6</a> by Raymond Camden
		posted on 8/3/2005 at 6:29 AM
		</div>
		<div class="comment_text"><p>Valid points Sean, I appreciate you sharing them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619502">7</a> by Jared Rypka-Hauer
		posted on 8/3/2005 at 1:55 PM
		</div>
		<div class="comment_text"><p>I started to reply to this, but my response got way too long and involved for a comment. :)</p><p>So, I'm going to go ahead and add another tutorial to my ModelGlue tutorials on how I'd actually use cascaded events to nest pods in a layout like the blog or <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%3A_xxzCNK-l1o46U5-IF400HiKZ0A&amp;cuid=3321886" rel="nofollow noopener" title="cflib.org">cflib.org</a>.</p><p>I'll email y'all when it's done. :)</p><p>Laterz!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619503">8</a> by Raymond Camden
		posted on 8/3/2005 at 4:31 PM
		</div>
		<div class="comment_text"><p>What we need to do is get Joe to add a FAQs portion to the MG site, and let us get some of this content up there. My blog postings, your tutorials, etc.</p></div>
	</div>
</div>
		