
<div class="comment" id="c_1713658967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658967">1</a> by Greg Nilsen
		posted on 11/7/2006 at 8:38 PM
		</div>
		<div class="comment_text"><p>That's more or less what I've been doing for almost a year now over at my site, though I don't think my code is quite as long.  I like doing it that way because it's very flexible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658964">2</a> by Michael
		posted on 11/7/2006 at 9:53 PM
		</div>
		<div class="comment_text"><p>I recall there being an issue with IIS lockdown blocking these requests due to the period in what it initially believes is the directory name. Possibly addressed in newer versions (allowing a single period in a directory but rejecting two), I really don't know, but if anyone runs into a problem handling this request it may be relevant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658955">3</a> by Greg Nilsen
		posted on 11/7/2006 at 10:25 PM
		</div>
		<div class="comment_text"><p>Michael,</p><p>I've never run into that problem with IIS, but I am running my development on an WindowsXP platform.  Maybe it was an issue in older versions, but shouldn't be if you're up-to-date.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658971">4</a> by Michael
		posted on 11/7/2006 at 11:13 PM
		</div>
		<div class="comment_text"><p>Just wondering about the 2nd cfif:</p><p>&lt;cfif urlVars is not "" and urlVars is not ""&gt;</p><p>It looks like the same test twice.. ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658960">5</a> by Rob Gonda
		posted on 11/7/2006 at 11:46 PM
		</div>
		<div class="comment_text"><p>Despite the fact that IIRF is free, I would advice to go with ISAPI Rewrite. It's well worth the few $$. One of the main features that IIRF didn't have was the [U] directive -- unmangle logs files, meaning, log the request prior to the rewrite ... which was essential for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658961">6</a> by Raymond Camden
		posted on 11/7/2006 at 11:54 PM
		</div>
		<div class="comment_text"><p>Um, it was a test Michael. ;)</p><p>The second condition was meant to be "/". Going to fix now. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658973">7</a> by Raymond Camden
		posted on 11/7/2006 at 11:58 PM
		</div>
		<div class="comment_text"><p>In the release notes, I do see a U directive Rob. So maybe he has added that in?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658976">8</a> by Rob Gonda
		posted on 11/8/2006 at 12:15 AM
		</div>
		<div class="comment_text"><p>It may/probably have been added. I remember chatting with him when you first blogged about it and he said it wasn't difficult to add. Good to know; danke,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658977">9</a> by Sam Farmer
		posted on 11/8/2006 at 12:51 AM
		</div>
		<div class="comment_text"><p>Very nice Ray.  Got it implemented already!  Love the use of the step attribute in cfloop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658974">10</a> by Greg Nilsen
		posted on 11/8/2006 at 4:16 AM
		</div>
		<div class="comment_text"><p>Ok, now that I'm home I could get at my code.  I've posted what I've been using on my blog here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ffurther.gregnilsen.com%2Findex.cfm%2Fmodule%2Fstory%2Fstory%2F11072006-ColdFusion-Search-Engine-Safe-URLs%3AgYdjRanb42hxVpfMayauCSuuNuA&amp;cuid=3321886" rel="nofollow noopener" title="http://further.gregnilsen.com/index.cfm/module/story/story/11072006-ColdFusion-Search-Engine-Safe-URLs">http://further.gregnilsen.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658983">11</a> by Sean Corfield
		posted on 11/9/2006 at 9:56 AM
		</div>
		<div class="comment_text"><p>I posted the code for how I do SES URLs on my (Fusebox) site back in September last year:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcorfield.org%2Fentry%2FSES__Bah_Humbug%3Adm83djYuBdOhVCyVjQJceT4hmoo&amp;cuid=3321886" rel="nofollow noopener" title="http://corfield.org/entry/SES__Bah_Humbug">http://corfield.org/entry/S...</a></p><p>It works with any framework (or non-framework) because it's included in Application.cfm (or Application.cfm).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658985">12</a> by Chris
		posted on 12/2/2006 at 10:46 PM
		</div>
		<div class="comment_text"><p>I tried implementing the code into my Application.cfm file but it doesn't do anything.  Am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658986">13</a> by Raymond Camden
		posted on 12/2/2006 at 10:53 PM
		</div>
		<div class="comment_text"><p>Chris - what do you see? You should also cfdump url and see if it is getting populated correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658987">14</a> by Chris
		posted on 12/3/2006 at 6:33 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>When I do the dump, it is getting populated.  Do you call the url like this: #viewstate.getValue("myself")#theevent</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658989">15</a> by Raymond Camden
		posted on 12/4/2006 at 2:44 AM
		</div>
		<div class="comment_text"><p>No, you need to make the URLs yourself. Unless you make a helper function for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658988">16</a> by Ross
		posted on 12/24/2007 at 3:27 AM
		</div>
		<div class="comment_text"><p>I tried using this code. It worked mostly. Where I have trouble is in the modelglue.xml file. When an event fires and I point to another event it seems to just the events together.</p><p>For example,<br>The link reads "index.cfm/page.login". The user clicks it and goes to the login form.</p><p>The login form submits to "/index.cfm/action.login" and fires an event "user.login", if successful the result from that event does "page.index". The resulting URL looks like "http://localhost/index.cfm/index.cfm?event=page.index"</p><p>Any idea how to properly redirect in the result?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658990">17</a> by Raymond Camden
		posted on 12/24/2007 at 6:27 PM
		</div>
		<div class="comment_text"><p>You said your first link was to index.cfm/page.login. It needs to be /index.cfm/page.login. Did you use that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658991">18</a> by Ross
		posted on 12/24/2007 at 8:06 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, that was part of my problem.</p><p>There is one other thing. In a result, depending on success or failure, I fire another event.  When I use "redirect=true" (&lt;result name="success" do="page.index" redirect="true" /&gt;), the URL gets messed up again to http://localhost/index.cfm/index.cfm?event=page.index</p><p>It works if I leave the redirect part out. I have tried different things in the "do" (/index.cfm/page.index, /page.index) part but I get errors.</p><p>Is this just the way this works?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658992">19</a> by Sean Corfield
		posted on 12/25/2007 at 12:29 AM
		</div>
		<div class="comment_text"><p>@Ross, yes, redirects use regular URLs. That's how it's built inside Model-Glue. Since people are unlikely to bookmark the result of a form post (which is when you mostly use redirect="true"), I don't see that as a big problem.</p></div>
	</div>
</div>
		