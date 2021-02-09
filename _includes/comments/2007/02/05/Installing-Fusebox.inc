
<div class="comment" id="c_1713661887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661887">1</a> by Nick Tong
		posted on 2/6/2007 at 3:32 AM
		</div>
		<div class="comment_text"><p>Enjoy Ray, Fusebox really makes a lot of sense once you get into it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661891">2</a> by Nick Tong
		posted on 2/6/2007 at 3:37 AM
		</div>
		<div class="comment_text"><p>Oh can I recommend that you stay with a MVC approach that you get with the skeleton app, it just keeps everything neat.  Incedently the skeleton app isn't needed :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661892">3</a> by Brian Rinaldi
		posted on 2/6/2007 at 7:12 AM
		</div>
		<div class="comment_text"><p>On a note not specific to Fusebox but covered in your post, I personally don't like the use of mappings to handle resolving the location of the core files, regardless of issues at the host. I think they should be under the root. The reason is because we still don't have application specific mappings in CF (this long overdue feature in Scorpio perhaps? One can only hope). Thus, if you build two apps, one with Fusebox 4.1 let's say and one with 5 - how do you resolve the different versions with a single mapping? You can't obviously.</p><p>Anyway, sorry to sidetrack the comments, but that is an issue stood when I read the post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661893">4</a> by Paul
		posted on 2/6/2007 at 12:08 PM
		</div>
		<div class="comment_text"><p>Wow, I can't believe you've never dabbled in this before.  Fusebox rocks, especially 5.0+.  It'll satisfy the needs of 90%* of your applications.</p><p>*I made that number up.  It represents the unquantifiable figure, "most."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661979">5</a> by Julian Halliwell
		posted on 2/6/2007 at 1:13 PM
		</div>
		<div class="comment_text"><p>Brian, just curious: why would you particularly need the same mapping? I have apps on my server running on different versions of FB, the core files for which are under a "/library/" mapping (i.e "/library/fusebox4/", "/library/fusebox5/") and I find it useful to see from the app's mapping which version it's using.</p><p>Maybe I've missed your point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661990">6</a> by dickbob
		posted on 2/6/2007 at 3:27 PM
		</div>
		<div class="comment_text"><p>@Nick, one benefit of unpacking the skeleton app is that you can get at the errortemplates and lexicon examples.</p><p>@Brian, as Julian said you can make a mapping for each version of Fusebox and change the root directory called in the index.cfm file. Personally I created fusebox510b1, fusebox510b2 directories and mappings and moved app's up as I became confident with the stability of the core. The final version obviously was located/mapped in fusebox510. This give me the option to have a possible fusebox511 or fusebox512 some time in the future if needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661989">7</a> by Brian Rinaldi
		posted on 2/6/2007 at 5:14 PM
		</div>
		<div class="comment_text"><p>I suppose this is my ignorance of Fusebox specifically...good to hear it isn't an issue in this case. However, every framework I have experience with requires either a mapping to the core files or for the core files to be directly under the root in which case you do encounter the issue I discussed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661993">8</a> by Diogo Moura
		posted on 2/6/2007 at 7:23 PM
		</div>
		<div class="comment_text"><p>Hey Thanks! Welcome to Fusebox... it´s really a good framework and helps a lot....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661995">9</a> by DK
		posted on 2/6/2007 at 8:21 PM
		</div>
		<div class="comment_text"><p>I typically look for the documentation on a site while the item is downloading. low attention span I suppose. but I agree with Ray. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661991">10</a> by Tom Mollerus
		posted on 2/6/2007 at 10:53 PM
		</div>
		<div class="comment_text"><p>@Brian: Brian, what I've done in the past to make code more portable between file locations is to code the mapping as a variable (ie, "/#VARIABLES.mapping#/page.cfm", which would resolve to "/library/page.cfm", which is then resolved as a mapping by CFMX.  The application.cfc can set the correct mapping for each application on the box, and thus you can transfer code between apps if you need.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661992">11</a> by Sean Corfield
		posted on 2/7/2007 at 10:20 AM
		</div>
		<div class="comment_text"><p>Fusebox - even with CFCs in release 5.0 - has always allowed you to include the core files via a relative path, e.g.,</p><p>include template="../../fusebox/fusebox5.cfm"</p><p>Fusebox creates the core CFCs by relying on local relative paths - which is why all the fuseboxXxx.cfc files are in the same directory as fusebox5.cfm.</p><p>As for Getting Started / Install docs, good point. We have a team of people leading efforts to improve everything about Fusebox from the website to the docs to the core files to the sample apps to...</p><p>This is not your father's Fusebox :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661997">12</a> by johnb
		posted on 2/7/2007 at 6:36 PM
		</div>
		<div class="comment_text"><p>Something else to remember is what comes with what - in terms of the download packages. The skeleton (as already pointed out) comes with errortemplates and lexicons whilst the core download is simply that - core files.</p><p>Couple of things to point out here - prior to fb5 you couldn't have multiple Fusebox applications in the same cf application name space - they'd overwrite each other when they ran (now you just set &lt;cfset Fusebox_Application_Key = "myapp"&gt; in your application index.cfm). Remembering what came with what then, with fb5 errortemplates/plugins/lexicons were unique to the specific fusebox application so you could end up multiple copies of errortemplates/plugins etc - particular in a corporate intranet where you may have multiple fusebox applications. With fb5.1 these can now be shared amongst multiple applications so you don't need multiple copies of errortemplates/plugins/lexicons etc...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661996">13</a> by Charlie Arehart
		posted on 2/8/2007 at 8:21 PM
		</div>
		<div class="comment_text"><p>Ray, these walkthrough's are a great idea. Thanks for sharing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662002">14</a> by Josh
		posted on 1/24/2008 at 1:41 AM
		</div>
		<div class="comment_text"><p>Created <a href="http://disq.us/url?url=http%3A%2F%2FFuseboxipedia.com%3AGrX2VKc4RTzA7liQSsLYIfn__KE&amp;cuid=3321886" rel="nofollow noopener" title="Fuseboxipedia.com">Fuseboxipedia.com</a>, if for nothing else my own sanity when it comes to fusebox doc info.</p></div>
	</div>
</div>
		