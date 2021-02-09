
<div class="comment" id="c_1713710232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710232">1</a> by Scott P
		posted on 11/27/2008 at 1:35 AM
		</div>
		<div class="comment_text"><p>If you're going to that much trouble can you go ahead and add in the queryparam substitution so the paramaters show up inline with the query?  Yep - I know that is already in coldfire.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710247">2</a> by Scott P
		posted on 11/27/2008 at 1:37 AM
		</div>
		<div class="comment_text"><p>or parameters even...zoid power activate!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710243">3</a> by Scott Stroz
		posted on 11/27/2008 at 1:41 AM
		</div>
		<div class="comment_text"><p>I have always wanted to modify the tempalte so that queries that use &lt;cfqueryparam&gt; will actaully have the params listed in the query rather than (param 1), (param 2) , etc...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710244">4</a> by duncan
		posted on 11/27/2008 at 2:37 PM
		</div>
		<div class="comment_text"><p>Ray, one thing I noticed while doing this.  There seems to be a difference between classic.cfm on CF 7 and CF 8.  <br>There are 4 lines like this:<br>(CF 7)<br>if( cfdebug_templates.recordCount eq 1 and len(trim(<a href="http://disq.us/url?url=http%3A%2F%2Fcfdebug_templates.et%3AldXxmRGF4ZhG5cshHLZvra5bYqg&amp;cuid=3321886" rel="nofollow noopener" title="cfdebug_templates.et">cfdebug_templates.et</a>)) )</p><p>(CF 8)<br>if( cfdebug_templates.recordCount eq 1 and not len(trim(<a href="http://disq.us/url?url=http%3A%2F%2Fcfdebug_templates.et%3AldXxmRGF4ZhG5cshHLZvra5bYqg&amp;cuid=3321886" rel="nofollow noopener" title="cfdebug_templates.et">cfdebug_templates.et</a>)) )</p><p>Your file obviously uses the CF 8 way, which makes more sense I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710245">5</a> by Raymond Camden
		posted on 11/27/2008 at 6:30 PM
		</div>
		<div class="comment_text"><p>Probably so. I just assumed it didn't change cuz it certainly looks like it hasn't for years. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710255">6</a> by Aaron Longnion
		posted on 11/27/2008 at 6:58 PM
		</div>
		<div class="comment_text"><p>@Scott S - some friends of mine already did that, plus a few other things ;-)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfzen.instantspot.com%2Fblog%2F2007%2F03%2F26%2FImproved-Classic-CF-debugging-template%3AVqxmOnRyKCzcoxFRi99kW-uAA_g&amp;cuid=3321886" rel="nofollow noopener" title="http://cfzen.instantspot.com/blog/2007/03/26/Improved-Classic-CF-debugging-template">http://cfzen.instantspot.co...</a></p><p>I still have to do most of my testing in IE, so ColdFire isn't always an option... so any ideas like the ones on your post are nice</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710254">7</a> by Raymond Camden
		posted on 11/27/2008 at 7:01 PM
		</div>
		<div class="comment_text"><p>I wonder - would it makes sense to start a new project named something like "ImprovedClassic." Something that takes these updates and rolls them into one? Not to compete w/ ColdFire, I'd rather use ColdFire, but as Aaron says, some folks can't use it because of IE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710248">8</a> by Charlie Arehart
		posted on 11/27/2008 at 8:50 PM
		</div>
		<div class="comment_text"><p>That's awesome, Ray. Thanks for the effort. My goal in posting on that "other list" was indeed to get this into the version of the debugging output offered by CF out of the box, but in the meantime this is a great way to provide the benefits for many.</p><p>I totally agree with your last comment about creating a new project for improved debugging. I'd really recommend something other than "improvedclassic", though. Folks who never bother to tweak (or even alter the admin settings) for the debugging output won't connect the dots that the basic debugging output is provided by this template called classic.cfm. How about something like "ImprovedDebugOutput"? Not sexy, but the point is that it may catch attention where a sexy codename might not. Just a thought.</p><p>And yes, we'd want to ensure it works on 6, 7, and 8 (and might be nice to have versions that work on Railo and BD, too.)</p><p>All this strikes me as a kind of project that could bring a lot more developers into an open source project, since it's pretty straightforward stuff and that most could use.</p><p>Ray, if you're reluctant to take on yet another project, or want a co-pilot, I'd be very interested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710256">9</a> by Raymond Camden
		posted on 11/27/2008 at 8:56 PM
		</div>
		<div class="comment_text"><p>Heh, yes, 'improvedclassic' is a horrible name. My brain is officially powered down for today. :)</p><p>I don't think either Railo or BD support debugging via a CFML template. Wait - no, BD doesn't, but Railo might. Whatever - if it _could_ be made to work in either then it is probably worth the effort.</p><p>And yes - I have enough projects. I don't think you actually 'own' any project at RIAForge, do you? This may be a perfect opportunity for you to start.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710252">10</a> by Charlie Arehart
		posted on 11/27/2008 at 10:51 PM
		</div>
		<div class="comment_text"><p>Sure, Ray. That would be cool. I've long wanted to contribute, and this is a great starting point for me.</p><p>So, before I create it, we need a name. I just noticed that RIAForge projects can have spaces in their name, so how about a codename that's an acronym (and the project name, with both, could be):</p><p>MIDO - Much Improved Debugging Output (Mido is a watch name, too, but few may recognize the pun)</p><p>FIDO - ? Improved Debugging Output (a better pun, about fido fetching. Just need a good f-word--not that one! One might propose "far" but if Adobe later improves the built-in, then it would be lame. "Fan" connotes community-contributed, but seems a little lame.)</p><p>LIDO - ? Improved Debugging Output</p><p>Any others? Even not following the IDO pattern? :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710246">11</a> by Tony Nelson
		posted on 11/28/2008 at 1:26 AM
		</div>
		<div class="comment_text"><p>How about a recursive acronym?</p><p>FIDO - FIDO Improved Debugging Output</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710253">12</a> by Raymond Camden
		posted on 11/28/2008 at 8:54 AM
		</div>
		<div class="comment_text"><p>I like MIDO.</p></div>
	</div>
</div>
		