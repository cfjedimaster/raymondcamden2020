
<div class="comment" id="c_1713737125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737125">1</a> by Tony Nelson
		posted on 12/5/2011 at 7:20 PM
		</div>
		<div class="comment_text"><p>So is getApplicationMetaData() basically the documented version of application.getApplicationSettings()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737124">2</a> by Raymond Camden
		posted on 12/5/2011 at 7:22 PM
		</div>
		<div class="comment_text"><p>And supported. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737127">3</a> by Will B.
		posted on 12/5/2011 at 7:28 PM
		</div>
		<div class="comment_text"><p>I wonder if it will allow you to see other variables defined from the application.cfc, like variables.someVariableIJustMadeUp or just the "official" properties of the application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737130">4</a> by Raymond Camden
		posted on 12/5/2011 at 7:32 PM
		</div>
		<div class="comment_text"><p>CF uses the This scope for settings, not the Variables scope. So that wouldn't be returned.</p><p>I just did a test where I added this.ray=1, and it DID show up, but I would not rely on that. You should not (and of course, take "should" with a grain of salt) use the This scope for your own stuff (in App.cfc I mean). You have an Application scope for that - use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737128">5</a> by Ken
		posted on 12/5/2011 at 7:35 PM
		</div>
		<div class="comment_text"><p>Let's hope there's a corresponding way to administratively restrict VFS size on shared servers.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737134">6</a> by Raymond Camden
		posted on 12/5/2011 at 7:37 PM
		</div>
		<div class="comment_text"><p>Ken, I'm not sure if I'm allowed to say this, but as it makes sense, I'll do so anyway.</p><p>If you set a limit of X in the CF Admin, an application is NOT allowed to go over X. And our function should actually return the right value, so you can still handle it via code. So for example, if your app needs 5 megs, and requests it, but the Admin set it to 2, you should see 2 and be able to do... well whatever makes sense for your application.</p><p>Once we have a public preview, please double check this of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737126">7</a> by Steve Bryant
		posted on 12/5/2011 at 10:23 PM
		</div>
		<div class="comment_text"><p>This is really nice!</p><p>As with you, I find it annoying not to be able to find out information that I know my programming language must know.</p><p>Very nice stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737131">8</a> by Mike Kelp
		posted on 12/6/2011 at 5:50 PM
		</div>
		<div class="comment_text"><p>Nice post Ray. I agree completely that CF should not hide information. One of the empowering things about CF is that it does make so much functionality easy, but for the most part (and even more after this feature), allows you to do something special anywhere you can, losing as little benefit from the language / application server as possible.</p><p>There is nothing worse than when one development decision makes 10 other unrelated features unusable because you had to jump languages, technologies, or couldn't hook something in appropriately.</p><p>Also looking forward to the implicit getter / setter feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737132">9</a> by erikv
		posted on 12/13/2011 at 1:01 AM
		</div>
		<div class="comment_text"><p>Any idea when this will be released?  I need Axis 2 sooo bad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737135">10</a> by Raymond Camden
		posted on 12/13/2011 at 2:52 AM
		</div>
		<div class="comment_text"><p>Yep, I know exactly when it will be released.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737136">11</a> by pb_
		posted on 12/18/2011 at 10:07 AM
		</div>
		<div class="comment_text"><p>You tease... ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737138">12</a> by Aaron Neff
		posted on 6/7/2012 at 12:13 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>GetApplicationMetadata was renamed to ApplicationGetMetadata in CF10 Final.</p><p>The new doc is here: <a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F10.0%2FCFMLRef%2FWSf23b27ebc7b554b6c43bda313671e094bb-8000.html%3AYR7AGkTlAM868bd_8HrYUxKmYKs&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/10.0/CFMLRef/WSf23b27ebc7b554b6c43bda313671e094bb-8000.html">http://help.adobe.com/en_US...</a></p><p>The renaming was done for consistency w/ SessionGetMetadata (which itself used to be SessionStartTime): <a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F10.0%2FCFMLRef%2FWSf23b27ebc7b554b6-67fd180f13585b7069d-8000.html%3A2UKwtZPkqTyNVPE6IC_tOnfAz8M&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/10.0/CFMLRef/WSf23b27ebc7b554b6-67fd180f13585b7069d-8000.html">http://help.adobe.com/en_US...</a></p><p>Currently, getApplicationMetadata works in code and is listed by getFunctionList. Also, applicationGetMetadata does not work in code and is not listed by getFunctionList.</p><p>I've filed bug #3207841 for all of this: <a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3207841%3AE-eWitfHGiZHTvOhmCIni736b2M&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3207841">https://bugbase.adobe.com/i...</a></p><p>Thanks,<br>-Aaron</p></div>
	</div>
</div>
		