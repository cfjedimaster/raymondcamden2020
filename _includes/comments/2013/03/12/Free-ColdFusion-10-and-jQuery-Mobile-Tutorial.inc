
<div class="comment" id="c_1713745165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745165">1</a> by Edward Rynearson
		posted on 3/13/2013 at 4:28 AM
		</div>
		<div class="comment_text"><p>Perfect timing</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745172">2</a> by Paul
		posted on 3/15/2013 at 8:10 PM
		</div>
		<div class="comment_text"><p>I'm currently looking at ColdFusion, never used it before as I've always hand-coded using powerful editors like EditPlus and Dreamweaver.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745166">3</a> by Raymond Camden
		posted on 3/15/2013 at 8:12 PM
		</div>
		<div class="comment_text"><p>Ah cool - nice to meet someone just starting CF. Most of my readers have been using it a while I think. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745167">4</a> by Andy Idema
		posted on 4/9/2013 at 11:56 PM
		</div>
		<div class="comment_text"><p>I've been going through this tute and it isn't quite working as advertised.  Anyone else having issues with retrieving data in the walk9_2 section?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745168">5</a> by Raymond Camden
		posted on 4/10/2013 at 4:48 PM
		</div>
		<div class="comment_text"><p>Andy, I don't work for FigLeaf, but I pinged my contact there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745176">6</a> by Andy Idema
		posted on 4/10/2013 at 5:11 PM
		</div>
		<div class="comment_text"><p>Yea my bad.  I contacted them as well.  I'm sure it's user error (usually is). :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745174">7</a> by Andy Idema
		posted on 5/2/2013 at 4:26 PM
		</div>
		<div class="comment_text"><p>I used FigLeaf's tute on REST and JQM and now my CF Admin won't start and displays an error referencing JAX-RS.  I found this bug: <a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3348839%3Aic01wloSwPIBIlfi6L5YZ2Cju6Y&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3348839">https://bugbase.adobe.com/i...</a> but without access to the CF Admin I'm not sure how to delete the rest services.  Any clues?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745175">8</a> by Raymond Camden
		posted on 5/2/2013 at 6:32 PM
		</div>
		<div class="comment_text"><p>I'm sorry, but it looks like there is no fix for this. That is completely crazy imo. I'll raise a red flag on this. I can't promise anything though. You may have to re-install CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745177">9</a> by Raymond Camden
		posted on 5/2/2013 at 6:43 PM
		</div>
		<div class="comment_text"><p>Andy, we may have a fix for you. Thanks for this suggestion comes from Andy Cameron. In your cfinstall/cfusion/lib folder, you will find many neo-*.xml files. Application settings are stored here. Find</p><p>neo-jaxrs.xml</p><p>Make a back up copy.<br>Open it up, and find the XML that defined the 'bad' one, it may look like this:</p><p>&lt;var name='/Applications/MAMP/htdocs/democode_web/'&gt;<br>	&lt;string&gt;RestPreso2&lt;/string&gt;<br>&lt;/var&gt;</p><p>Remove it. You may also want to change this:</p><p>	&lt;array length='2'&gt;</p><p>such that array length goes from N to N-1.</p><p>Oh, stop CF before you do this, and start it after.</p><p>This MAY work. Again, backup that XML before you even look at it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745178">10</a> by Adam Cameron
		posted on 5/2/2013 at 6:54 PM
		</div>
		<div class="comment_text"><p>Don't forget to VOTE for these bugs that trip you up, guys. Adobe do pay attention more to bugs with more votes.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745179">11</a> by Andy Idema
		posted on 5/2/2013 at 9:08 PM
		</div>
		<div class="comment_text"><p>Wow thanks guys.  That's a relief.  I executed the steps and got the CF Admin running.  I also updated the bugbase and voted for the bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745180">12</a> by Adam Cameron
		posted on 5/2/2013 at 9:56 PM
		</div>
		<div class="comment_text"><p>Cool! That's good news.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		