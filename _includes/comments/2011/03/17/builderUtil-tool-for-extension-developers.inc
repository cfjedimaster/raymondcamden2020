
<div class="comment" id="c_1713730622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730622">1</a> by Justin Carter
		posted on 3/18/2011 at 6:55 AM
		</div>
		<div class="comment_text"><p>Cool stuff Ray! Having a common component that all extension developers can use is definitely the way to go, I'm kind of surprised that nobody jumped on it after your first CF Builder extension competition :) This should be a good time saver for developing new extensions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730637">2</a> by Jeff Coughlin
		posted on 3/19/2011 at 1:13 AM
		</div>
		<div class="comment_text"><p>This is great. Having all the custom functions most of us are already using while building CFB Extensions, but in a single package everyone can agree on.  Now if only someone would come up with a framework and best-practices for building extensions we'd be all set :)</p><p>Hey, quick question.  Why not just ask the CFB dev team to just include something like this already for you in the request scope while building CFB extensions?  I'm mean, we're still in the beta phase, no?  Maybe they'd consider putting it in rather than have pretty much every single CFB extension developer putting in the same hacks.  Just a thought.</p><p>Good work on the mod :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730640">3</a> by Raymond Camden
		posted on 3/19/2011 at 1:22 AM
		</div>
		<div class="comment_text"><p>"Now if only someone would come up with a framework and best-practices for building extensions we'd be all set "</p><p>Not sure if we need a framework per se. That may be overkill. Best practices? Sure. I've been thinking about that for a while. Not sure if it is "too early" to start a list.</p><p>"Why not just ask the CFB dev team to just include something like this already for you in the request scope while building CFB extensions?"</p><p>Well remember that the extension is run on the cf server, so in order for it to work it would need to ship with cf, not cfb, or ship with cf and make you responsible for copying it over.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730639">4</a> by Jeff Coughlin
		posted on 3/19/2011 at 1:28 AM
		</div>
		<div class="comment_text"><p>"Well remember that the extension is run on the cf server, so in order for it to work it would need to ship with cf, not cfb, or ship with cf and make you responsible for copying it over."</p><p>form.ideeventinfo doesn't ship wtith CF server.  CFB Extensions cannot run without a CF server.  When they do, they make that variable in the form scope available.  So why not extend it a little better (to do what we're all hacking our code to do) and move it to the request scope?</p><p>Am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730641">5</a> by Raymond Camden
		posted on 3/19/2011 at 1:30 AM
		</div>
		<div class="comment_text"><p>Well, form.ideeventinfo is just a FORM post to your CFM. They couldn't post a CFC as well. (Unless I'm misreading you.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730643">6</a> by Jeff Coughlin
		posted on 3/19/2011 at 1:46 AM
		</div>
		<div class="comment_text"><p>What I'm saying is that CFB extensions require a CF server in order to run (which is already pre-configured).  Why not have CFB do some checking in the background for me instead of my having to do the same code every time for every extension?  If CFB can send me form.ideeventinfo, why not send me form.ideeventinfo.currentUrl?  I mean, if we're all going to do the same code anyway (which most of us already are) to get the current url, why not simplify it and just make some of those helper functions available to us already?  Isn't this what makes CF stand-out from other web languages (simplifying common things for us that we'd be writing tons of code for anyway)?</p><p>It doesn't bother me if CFB doesn't do this.  I don't mind placing this CFC in all my extensions (thanks by the way).  I'm just trying to look at the overall picture.  Wouldn't it be beneficial to just have something like the variables built into the product if we're all planning to run the same code anyway just to make our extensions function in what should (IMO) be fundamentally available to all CFB extensions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730649">7</a> by Raymond Camden
		posted on 3/19/2011 at 1:48 AM
		</div>
		<div class="comment_text"><p>Well, keep in mind that they are sending some of this info. Like for example, my code to get the current mode is just making parsing the XML a bit friendlier. I'd say half of my CFC is just that.</p><p>The other big half is callback processing, which can't happen/shouldn't happen on every request. So it wouldn't make sense there.</p><p>Now - to your specific point - "current url" - yeah - I can see that making sense. CFB has to know it - you know - run it - so why not pass it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730645">8</a> by Jeff Coughlin
		posted on 3/19/2011 at 1:56 AM
		</div>
		<div class="comment_text"><p>Yeah, I was thinking just a couple specifics like current url, current directory, and webroot.  Sorry, I should have specified.</p><p>These are pretty trivial to code and I bet would take a whole 10 minutes to code the data into CFB.</p><p>disclaimer: I am not a java developer, nor do I pretend to know Adobe's approval process to get new features entered in during the beta phase.  So I don't actually know how long it would take to code in :).  But my guess is that it's still pretty trivial and won't break anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730651">9</a> by Raymond Camden
		posted on 3/19/2011 at 1:58 AM
		</div>
		<div class="comment_text"><p>Actually, and again, I REALLY need to blog a 'whats new in extensions', I think web root IS in there now. Project Root is for sure. They added a few small details to the XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730621">10</a> by Raymond Camden
		posted on 3/19/2011 at 2:01 AM
		</div>
		<div class="comment_text"><p>No, it's just projectroot, but that _is_ new to CFB2 (afaik).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730627">11</a> by Jeff Coughlin
		posted on 3/19/2011 at 2:04 AM
		</div>
		<div class="comment_text"><p>Ahh.  I likely take projectroot for granted because I didn't start coding extensions until CFB2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730644">12</a> by Raymond Camden
		posted on 3/29/2011 at 7:25 PM
		</div>
		<div class="comment_text"><p>Just realized I titled this entry builderUtil - but the file is builderHelper. *doh*</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730648">13</a> by Raymond Camden
		posted on 3/30/2011 at 2:22 AM
		</div>
		<div class="comment_text"><p>Updated released detailed here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2011%2F3%2F29%2FPersistence-with-ColdFusion-Builder-Extensions%3Ai-kduRTCd9aMjhB-3uCMgadQUQI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2011/3/29/Persistence-with-ColdFusion-Builder-Extensions">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		