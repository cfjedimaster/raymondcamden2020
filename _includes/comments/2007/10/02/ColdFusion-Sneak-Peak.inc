
<div class="comment" id="c_1713672712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672712">1</a> by Sam Farmer
		posted on 10/3/2007 at 5:23 AM
		</div>
		<div class="comment_text"><p>Wow.</p><p>Was there any word on when would this be available?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672719">2</a> by Rick Smith
		posted on 10/3/2007 at 7:14 AM
		</div>
		<div class="comment_text"><p>I briefly spoke with Ben and they're still months out from letting testing out internally.  There seems to be a 2-3 year cycle between releases so my best GUESS would be we could see CF9 as early as 2009 and as late as 2010.  CF9 in 2009 just works so well....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672717">3</a> by Big Mad Kev
		posted on 10/3/2007 at 11:13 AM
		</div>
		<div class="comment_text"><p>Really needs to be 2 years, as that is how they sell their subs to CF and this used to (Not read it for a while) Says you will get one major upgrade in that time, else there is no point in buying it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672726">4</a> by Kevin Roche
		posted on 10/3/2007 at 12:02 PM
		</div>
		<div class="comment_text"><p>There are new things with the subscriptions which mean you ca buy a year at a time or more years if you want. At least thats how it looks now from the UK price list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672735">5</a> by Mark Mazelin
		posted on 10/3/2007 at 6:10 PM
		</div>
		<div class="comment_text"><p>It would be unfortunate if we had to wait until 2009 to get tighter AIR integration with ColdFusion. I think this needs to be released in 2008 to keep us developers happy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672731">6</a> by John Farrar
		posted on 10/3/2007 at 9:19 PM
		</div>
		<div class="comment_text"><p>Charlie made an interesting comment on Ben's blog. Its like we all keep thinking the next version of CF has to be version 9. Don't forget there was a CF 4.5, CF 6.1... how about a CF 8.5?</p><p>This is about pushing AIR also... it would be a shame to let standard dev cycles trump market opportunities! (IMO)</p><p>The bigger issue is the need for more robust libraries. Adobe needs to let us create "plugin" form and web object libraries. (Perhaps I am just thrilled wiht CFTags again building COOP... but this could be done so easy.) They  also NEED to add setting mappings at application level rather than just at the top of the page if at all possible. Mapping that is in the scheme of CFImport.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672732">7</a> by Raymond Camden
		posted on 10/3/2007 at 10:24 PM
		</div>
		<div class="comment_text"><p>John - not sure what you mean about setting mappings at the app level. You _can_ do that in CF8 in the App.cfc file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672736">8</a> by John Farrar
		posted on 10/4/2007 at 1:17 AM
		</div>
		<div class="comment_text"><p>You skipped my presentation after you got your pie or you would know! lol</p><p>&lt;cfimport prefix="myPrefix" ...&gt;</p><p>&lt;myPrefix:myTag ...&gt;</p><p>Mapped prefixes. When you map CFC directories that is fine. You could use CFModule... but that is the ugliest way to write code! And CFModule doesn't behave strictly identical to calling the code as &lt;cf_myTag ...&gt; would work. Using the prefix is more elegant and the way to go.</p><p>Now... please tell me that I am wrong and you can use a prefix set in application.cfc and dinner will be on me. (Something slightly better than Burger King... but it's a meal just the same!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672733">9</a> by Raymond Camden
		posted on 10/4/2007 at 2:13 AM
		</div>
		<div class="comment_text"><p>John:</p><p>First off, you are wrong. cfmodule acts the same as cf_mytag. There is zero difference.</p><p>As for it being more elegant, yes, cf_mytag is shorter, but I use cfmodule for most of my code so it is more portable. For cf8 though I plan to revert back to cf_mytag.</p><p>Now - if you are asking about being able to do cfimport in app.cfc - no - you can't. cfimports must be on the page that uses them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672734">10</a> by John Farrar
		posted on 10/4/2007 at 3:47 AM
		</div>
		<div class="comment_text"><p>Ray... if I can show you something above zero difference will you donate a CFUnited Ticket for me to give away at my user group for 2008? :) (Hint: It is more than you will agree with me as a difference.) Let me answer before you goof and take the wager!</p><p>1. If you use custom tag paths the first time that tag is found it will run the tag. This is only an issue if you like  a member of our user group had someone else on the same shared hosting server with an older version of the same custom tag. (Not to mention that with multiple custom tag paths you could actually do it on your own server also.) This would not happen with CFModule.</p><p>2. Before CF8 you had an issue that the "name" attribute was the name of the custom tag. This means that you could not pass the name attribute to a CFModule request as an attribute. Name is actually a pretty common attribute.</p><p>So... you are mostly right. I used to use CFModule also. But as a matter of "personal taste" the tag library approach is just the way for me to go. I think the elegant code would catch on fast IF it were something we can set at the application level.</p><p>Curiosity... why are you reverting to the original custom tag syntax? I would like to glean any  perspective you have on the topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672737">11</a> by Raymond Camden
		posted on 10/4/2007 at 6:09 PM
		</div>
		<div class="comment_text"><p>1) This refers to how tags are found. I don't think it is fair to say it reflects a change in behavior from cf_ to cfmodule. But - it does argue for using cfmodule OVER cf_, as you don't have to worry about 'what will CF find'</p><p>2) Ok, not being able to use name is one small point. What I do normally in tags that desire a name attribute is to add a copy, like fooname, so my custom tag can take either.</p><p>3) I can return to cf_ syntax since cf8 will let you specifically say where my custom tag paths are.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672738">12</a> by John Farrar
		posted on 10/4/2007 at 6:22 PM
		</div>
		<div class="comment_text"><p>The only problem I see with CF_MyTag is that in public libraries version control for what other developers might have on a shared server can be risky. It's a point of failure. Now for a controlled environment this is fine. Our focus in what my company is building and sharing is just that... shared. Using a "tag library" enables us to safely control common calling code even on shared hosting servers.</p><p>I also agree this is a minor step that has to be repeated for every page by including CFImport calls. It would be great if we could append this functionality to being an application level tag library. Otherwise on a controlled server the CF_ method is the simplest. I am just paranoid about process integrity where the solutions get deployed on shared hosting severs also.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672739">13</a> by Amy
		posted on 10/16/2007 at 8:47 PM
		</div>
		<div class="comment_text"><p>Was there a function in CF8 that kept users from re-submitting a form?</p><p>I remember seeing this at MAX 2007, just not sure if it was in a session or a keynote.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672741">14</a> by Raymond Camden
		posted on 10/16/2007 at 8:52 PM
		</div>
		<div class="comment_text"><p>CF7 added this - if you use the CFFORM framework.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672743">15</a> by Sam Farmer
		posted on 10/16/2007 at 9:00 PM
		</div>
		<div class="comment_text"><p>If using cfform do this:</p><p>cfinput type="submit" validate="submitOnce" name="sub" id="sub" value="Submit Once"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672742">16</a> by Amy
		posted on 10/16/2007 at 9:53 PM
		</div>
		<div class="comment_text"><p>Thanks Sam!  That's it!</p></div>
	</div>
</div>
		